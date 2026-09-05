#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00412EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412EF8: beq         $a0, $zero, L_00412F0C
    if (ctx->r4 == 0) {
        // 0x00412EFC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00412F0C;
    }
    // 0x00412EFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00412F00: lw          $a1, -0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, -0X10);
    // 0x00412F04: jal         0x002052D8
    // 0x00412F08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x00412F08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_00412F0C:
    // 0x00412F0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00412F10: jr          $ra
    // 0x00412F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004548BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041B8EC:
    // 0x004548BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
L_0041B920:
    // 0x004548C0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x004548C4: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x004548C8: beq         $v0, $zero, L_004548DC
    if (ctx->r2 == 0) {
        // 0x004548CC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004548DC;
    }
    // 0x004548CC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004548D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004548D4: j           L_0041B8EC
    // 0x004548D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    func_0041B8EC(rdram, ctx);
    return;
    // 0x004548D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_004548DC:
    // 0x004548DC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004548E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004548E4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004548E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004548EC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x004548F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004548F4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004548F8: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x004548FC: beq         $v0, $zero, L_00454914
    if (ctx->r2 == 0) {
        // 0x00454900: nop
    
            goto L_00454914;
    }
    // 0x00454900: nop

    // 0x00454904: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454908: addiu       $v0, $v0, 0x5ABC
    ctx->r2 = ADD32(ctx->r2, 0X5ABC);
    // 0x0045490C: j           L_0041B920
    // 0x00454910: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_0041B920(rdram, ctx);
    return;
    // 0x00454910: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00454914:
    // 0x00454914: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00454918: addiu       $v0, $v0, 0x5AD8
    ctx->r2 = ADD32(ctx->r2, 0X5AD8);
    // 0x0045491C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00454920: jr          $ra
    // 0x00454924: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454924: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002318D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002318D4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x002318D8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x002318DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002318E0: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x002318E4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x002318E8: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x002318EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002318F0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002318F4: beq         $v0, $zero, L_00231924
    if (ctx->r2 == 0) {
        // 0x002318F8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00231924;
    }
    // 0x002318F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002318FC: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00231900: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00231904: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00231908: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0023190C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00231910: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231914: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231918: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x0023191C: j           L_00231940
    // 0x00231920: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_00231940;
    // 0x00231920: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231924:
    // 0x00231924: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00231928: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x0023192C: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x00231930: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00231934: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00231938: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x0023193C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_00231940:
    // 0x00231940: jal         0x0020E810
    // 0x00231944: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x00231944: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x00231948: lui         $a2, 0x20
    ctx->r6 = S32(0X20 << 16);
    // 0x0023194C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00231950: addiu       $v0, $v0, 0x1D80
    ctx->r2 = ADD32(ctx->r2, 0X1D80);
    // 0x00231954: lw          $v1, 0x114($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X114);
    // 0x00231958: lw          $a0, -0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, -0X4);
    // 0x0023195C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x00231960: ori         $a2, $a2, 0x6
    ctx->r6 = ctx->r6 | 0X6;
    // 0x00231964: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00231968: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0023196C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00231970: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00231974: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x00231978: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0023197C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00231980: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00231984: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00231988: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0023198C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00231990: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00231994: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00231998: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x0023199C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x002319A0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x002319A4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002319A8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x002319AC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x002319B0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x002319B4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x002319B8: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x002319BC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x002319C0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x002319C4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x002319C8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002319CC: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002319D0: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x002319D4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x002319D8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x002319DC: lw          $a2, 0x10C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10C);
    // 0x002319E0: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    // 0x002319E4: jal         0x0022F350
    // 0x002319E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F350(rdram, ctx);
        goto after_1;
    // 0x002319E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002319EC: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x002319F0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x002319F4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x002319F8: jr          $ra
    // 0x002319FC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x002319FC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00211C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00211C34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00211C38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00211C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00211C40: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00211C44: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00211C48: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00211C4C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00211C50: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00211C54: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00211C58: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00211C5C: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00211C60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211C64: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x00211C68: nop

    // 0x00211C6C: bc1tl       L_00211CAC
    if (c1cs) {
        // 0x00211C70: swc1        $f0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
            goto L_00211CAC;
    }
    goto skip_0;
    // 0x00211C70: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    skip_0:
    // 0x00211C74: jal         0x00298470
    // 0x00211C78: nop

    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00211C78: nop

    after_0:
    // 0x00211C7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211C80: lwc1        $f1, 0x56CC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X56CC);
    // 0x00211C84: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00211C88: div.s       $f12, $f1, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00211C8C: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00211C90: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x00211C94: mul.s       $f1, $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00211C98: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00211C9C: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00211CA0: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x00211CA4: j           L_00211CB0
    // 0x00211CA8: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
        goto L_00211CB0;
    // 0x00211CA8: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_00211CAC:
    // 0x00211CAC: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
L_00211CB0:
    // 0x00211CB0: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x00211CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00211CB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00211CBC: jr          $ra
    // 0x00211CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00211CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00289F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289F28: jr          $ra
    // 0x00289F2C: nop

    return;
    // 0x00289F2C: nop

;}
RECOMP_FUNC void func_00429748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00429748: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0042974C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00429750: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00429754: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00429758: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0042975C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00429760: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00429764: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00429768: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0042976C: lbu         $v0, 0x65($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X65);
    // 0x00429770: beq         $v0, $zero, L_00429788
    if (ctx->r2 == 0) {
        // 0x00429774: addu        $s4, $a1, $zero
        ctx->r20 = ADD32(ctx->r5, 0);
            goto L_00429788;
    }
    // 0x00429774: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00429778: jal         0x00429EC4
    // 0x0042977C: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x0042977C: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    after_0:
    // 0x00429780: bne         $v0, $zero, L_00429894
    if (ctx->r2 != 0) {
        // 0x00429784: nop
    
            goto L_00429894;
    }
    // 0x00429784: nop

L_00429788:
    // 0x00429788: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0042978C: addiu       $s0, $sp, 0x1A
    ctx->r16 = ADD32(ctx->r29, 0X1A);
    // 0x00429790: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00429794: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x00429798: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042979C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x004297A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004297A4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x004297A8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x004297AC: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
L_004297B0:
    // 0x004297B0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x004297B4: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x004297B8: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x004297BC: jal         0x00299680
    // 0x004297C0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004297C0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
    // 0x004297C4: bne         $v0, $zero, L_00429894
    if (ctx->r2 != 0) {
        // 0x004297C8: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_00429894;
    }
    // 0x004297C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x004297CC: addiu       $a1, $sp, 0x22
    ctx->r5 = ADD32(ctx->r29, 0X22);
    // 0x004297D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004297D4: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x004297D8: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x004297DC: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
L_004297E0:
    // 0x004297E0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x004297E4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x004297E8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x004297EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004297F0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x004297F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x004297F8: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x004297FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429800: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429804: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00429808: bne         $v0, $zero, L_004297E0
    if (ctx->r2 != 0) {
        // 0x0042980C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_004297E0;
    }
    // 0x0042980C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00429810: lhu         $v1, 0x1C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1C);
    // 0x00429814: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x00429818: bnel        $v1, $v0, L_00429834
    if (ctx->r3 != ctx->r2) {
        // 0x0042981C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00429834;
    }
    goto skip_0;
    // 0x0042981C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00429820: lhu         $v1, 0x1E($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X1E);
    // 0x00429824: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x00429828: beq         $v1, $v0, L_00429844
    if (ctx->r3 == ctx->r2) {
        // 0x0042982C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_00429844;
    }
    // 0x0042982C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00429830: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00429834:
    // 0x00429834: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x00429838: bne         $v0, $zero, L_004297B0
    if (ctx->r2 != 0) {
        // 0x0042983C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_004297B0;
    }
    // 0x0042983C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x00429840: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_00429844:
    // 0x00429844: bne         $s2, $v0, L_00429854
    if (ctx->r18 != ctx->r2) {
        // 0x00429848: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00429854;
    }
    // 0x00429848: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042984C: j           L_00429894
    // 0x00429850: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_00429894;
    // 0x00429850: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_00429854:
    // 0x00429854: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00429858: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
L_0042985C:
    // 0x0042985C: beql        $s0, $s2, L_00429884
    if (ctx->r16 == ctx->r18) {
        // 0x00429860: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429884;
    }
    goto skip_1;
    // 0x00429860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00429864: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x00429868: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x0042986C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x00429870: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x00429874: jal         0x00299A40
    // 0x00429878: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_2;
    // 0x00429878: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_2:
    // 0x0042987C: bne         $v0, $zero, L_00429894
    if (ctx->r2 != 0) {
        // 0x00429880: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00429894;
    }
    // 0x00429880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00429884:
    // 0x00429884: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00429888: bne         $v0, $zero, L_0042985C
    if (ctx->r2 != 0) {
        // 0x0042988C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_0042985C;
    }
    // 0x0042988C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x00429890: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00429894:
    // 0x00429894: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00429898: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0042989C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x004298A0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x004298A4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x004298A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x004298AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x004298B0: jr          $ra
    // 0x004298B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x004298B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_004193B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004193B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x004193B8: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x004193BC: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x004193C0: beq         $v0, $zero, L_00419498
    if (ctx->r2 == 0) {
        // 0x004193C4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00419498;
    }
    // 0x004193C4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004193C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004193CC: addu        $at, $at, $v0
    gpr jr_addend_004193D4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004193D0: lw          $v0, 0x1008($at)
    ctx->r2 = ADD32(ctx->r1, 0X1008);
    // 0x004193D4: jr          $v0
    // 0x004193D8: nop

    switch (jr_addend_004193D4 >> 2) {
        case 0: goto L_004193DC; break;
        case 1: goto L_004193F4; break;
        case 2: goto L_0041940C; break;
        case 3: goto L_00419424; break;
        case 4: goto L_0041943C; break;
        case 5: goto L_00419454; break;
        case 6: goto L_0041946C; break;
        case 7: goto L_00419484; break;
        default: switch_error(__func__, 0x004193D4, 0x800C1008);
    }
    // 0x004193D8: nop

L_004193DC:
    // 0x004193DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004193E0: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004193E4: lbu         $v0, 0x31($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X31);
    // 0x004193E8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x004193EC: j           L_00419498
    // 0x004193F0: sb          $v0, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x004193F0: sb          $v0, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r2;
L_004193F4:
    // 0x004193F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x004193F8: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004193FC: lbu         $v0, 0x32($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X32);
    // 0x00419400: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419404: j           L_00419498
    // 0x00419408: sb          $v0, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419408: sb          $v0, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r2;
L_0041940C:
    // 0x0041940C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419410: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00419414: lbu         $v0, 0x33($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X33);
    // 0x00419418: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041941C: j           L_00419498
    // 0x00419420: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419420: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
L_00419424:
    // 0x00419424: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419428: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041942C: lbu         $v0, 0x34($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X34);
    // 0x00419430: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419434: j           L_00419498
    // 0x00419438: sb          $v0, 0x34($v1)
    MEM_B(0X34, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419438: sb          $v0, 0x34($v1)
    MEM_B(0X34, ctx->r3) = ctx->r2;
L_0041943C:
    // 0x0041943C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419440: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00419444: lbu         $v0, 0x35($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X35);
    // 0x00419448: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041944C: j           L_00419498
    // 0x00419450: sb          $v0, 0x35($v1)
    MEM_B(0X35, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419450: sb          $v0, 0x35($v1)
    MEM_B(0X35, ctx->r3) = ctx->r2;
L_00419454:
    // 0x00419454: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419458: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041945C: lbu         $v0, 0x36($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X36);
    // 0x00419460: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419464: j           L_00419498
    // 0x00419468: sb          $v0, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419468: sb          $v0, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r2;
L_0041946C:
    // 0x0041946C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419470: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00419474: lbu         $v0, 0x37($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X37);
    // 0x00419478: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041947C: j           L_00419498
    // 0x00419480: sb          $v0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419480: sb          $v0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r2;
L_00419484:
    // 0x00419484: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419488: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041948C: lbu         $v0, 0x39($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X39);
    // 0x00419490: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419494: sb          $v0, 0x39($v1)
    MEM_B(0X39, ctx->r3) = ctx->r2;
L_00419498:
    // 0x00419498: jr          $ra
    // 0x0041949C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041949C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0020EC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EC4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EC50: lwc1        $f1, 0x5570($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5570);
    // 0x0020EC54: c.lt.s      $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f14.fl < ctx->f1.fl;
    // 0x0020EC58: nop

    // 0x0020EC5C: bc1f        L_0020EC80
    if (!c1cs) {
        // 0x0020EC60: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_0020EC80;
    }
    // 0x0020EC60: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x0020EC64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EC68: lwc1        $f2, 0x5574($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5574);
    // 0x0020EC6C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_0020EC70:
    // 0x0020EC70: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020EC74: nop

    // 0x0020EC78: bc1tl       L_0020EC70
    if (c1cs) {
        // 0x0020EC7C: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_0020EC70;
    }
    goto skip_0;
    // 0x0020EC7C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    skip_0:
L_0020EC80:
    // 0x0020EC80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EC84: lwc1        $f1, 0x5578($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5578);
    // 0x0020EC88: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020EC8C: nop

    // 0x0020EC90: bc1fl       L_0020ECB8
    if (!c1cs) {
        // 0x0020EC94: sub.s       $f0, $f12, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_0020ECB8;
    }
    goto skip_1;
    // 0x0020EC94: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x0020EC98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EC9C: lwc1        $f2, 0x557C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X557C);
    // 0x0020ECA0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_0020ECA4:
    // 0x0020ECA4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020ECA8: nop

    // 0x0020ECAC: bc1tl       L_0020ECA4
    if (c1cs) {
        // 0x0020ECB0: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_0020ECA4;
    }
    goto skip_2;
    // 0x0020ECB0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_2:
    // 0x0020ECB4: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
L_0020ECB8:
    // 0x0020ECB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ECBC: lwc1        $f1, 0x5580($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5580);
    // 0x0020ECC0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020ECC4: nop

    // 0x0020ECC8: bc1f        L_0020ECEC
    if (!c1cs) {
        // 0x0020ECCC: nop
    
            goto L_0020ECEC;
    }
    // 0x0020ECCC: nop

    // 0x0020ECD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ECD4: lwc1        $f2, 0x5584($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5584);
    // 0x0020ECD8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_0020ECDC:
    // 0x0020ECDC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020ECE0: nop

    // 0x0020ECE4: bc1tl       L_0020ECDC
    if (c1cs) {
        // 0x0020ECE8: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_0020ECDC;
    }
    goto skip_3;
    // 0x0020ECE8: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    skip_3:
L_0020ECEC:
    // 0x0020ECEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ECF0: lwc1        $f1, 0x5588($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5588);
    // 0x0020ECF4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020ECF8: nop

    // 0x0020ECFC: bc1f        L_0020ED20
    if (!c1cs) {
        // 0x0020ED00: nop
    
            goto L_0020ED20;
    }
    // 0x0020ED00: nop

    // 0x0020ED04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ED08: lwc1        $f2, 0x558C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X558C);
    // 0x0020ED0C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_0020ED10:
    // 0x0020ED10: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020ED14: nop

    // 0x0020ED18: bc1tl       L_0020ED10
    if (c1cs) {
        // 0x0020ED1C: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_0020ED10;
    }
    goto skip_4;
    // 0x0020ED1C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
L_0020ED20:
    // 0x0020ED20: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020ED24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0020ED28: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020ED2C: nop

    // 0x0020ED30: bc1f        L_0020EE14
    if (!c1cs) {
            // 0x0020ED34: nop

    func_0020EE14(rdram, ctx);
    return;
    }
    // 0x0020ED34: nop

    // 0x0020ED38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ED3C: lwc1        $f0, 0x5590($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5590);
    // 0x0020ED40: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0020ED44: nop

    // 0x0020ED48: bc1f        L_0020ED6C
    if (!c1cs) {
        // 0x0020ED4C: nop
    
            goto L_0020ED6C;
    }
    // 0x0020ED4C: nop

    // 0x0020ED50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ED54: lwc1        $f1, 0x5594($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5594);
    // 0x0020ED58: add.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f1.fl;
L_0020ED5C:
    // 0x0020ED5C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0020ED60: nop

    // 0x0020ED64: bc1tl       L_0020ED5C
    if (c1cs) {
        // 0x0020ED68: add.s       $f14, $f14, $f1
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f1.fl;
            goto L_0020ED5C;
    }
    goto skip_5;
    // 0x0020ED68: add.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f1.fl;
    skip_5:
L_0020ED6C:
    // 0x0020ED6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ED70: lwc1        $f0, 0x5598($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5598);
    // 0x0020ED74: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x0020ED78: nop

    // 0x0020ED7C: bc1fl       L_0020EDA4
    if (!c1cs) {
        // 0x0020ED80: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_0020EDA4;
    }
    goto skip_6;
    // 0x0020ED80: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_6:
    // 0x0020ED84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020ED88: lwc1        $f1, 0x559C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X559C);
    // 0x0020ED8C: sub.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f1.fl;
L_0020ED90:
    // 0x0020ED90: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x0020ED94: nop

    // 0x0020ED98: bc1tl       L_0020ED90
    if (c1cs) {
        // 0x0020ED9C: sub.s       $f14, $f14, $f1
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f1.fl;
            goto L_0020ED90;
    }
    goto skip_7;
    // 0x0020ED9C: sub.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f1.fl;
    skip_7:
    // 0x0020EDA0: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_0020EDA4:
    // 0x0020EDA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EDA8: lwc1        $f1, 0x55A0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55A0);
    // 0x0020EDAC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020EDB0: nop

    // 0x0020EDB4: bc1f        L_0020EDD8
    if (!c1cs) {
        // 0x0020EDB8: nop
    
            goto L_0020EDD8;
    }
    // 0x0020EDB8: nop

    // 0x0020EDBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EDC0: lwc1        $f2, 0x55A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X55A4);
    // 0x0020EDC4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_0020EDC8:
    // 0x0020EDC8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0020EDCC: nop

    // 0x0020EDD0: bc1tl       L_0020EDC8
    if (c1cs) {
        // 0x0020EDD4: add.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_0020EDC8;
    }
    goto skip_8;
    // 0x0020EDD4: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    skip_8:
L_0020EDD8:
    // 0x0020EDD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EDDC: lwc1        $f1, 0x55A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X55A8);
    // 0x0020EDE0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020EDE4: nop

    // 0x0020EDE8: bc1f        L_0020EEF0
    if (!c1cs) {
            // 0x0020EDEC: nop

    func_0020EEF0(rdram, ctx);
    return;
    }
    // 0x0020EDEC: nop

    // 0x0020EDF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020EDF4: lwc1        $f2, 0x55AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X55AC);
    // 0x0020EDF8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_0020EDFC:
    // 0x0020EDFC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0020EE00: nop

    // 0x0020EE04: bc1tl       L_0020EDFC
    if (c1cs) {
        // 0x0020EE08: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_0020EDFC;
    }
    goto skip_9;
    // 0x0020EE08: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_9:
    // 0x0020EE0C: jr          $ra
    // 0x0020EE10: nop

    return;
    // 0x0020EE10: nop

;}
RECOMP_FUNC void func_00403218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040321C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403220: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00403224: beq         $v0, $zero, L_00403234
    if (ctx->r2 == 0) {
        // 0x00403228: nop
    
            goto L_00403234;
    }
    // 0x00403228: nop

    // 0x0040322C: jal         0x00243414
    // 0x00403230: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00403230: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
L_00403234:
    // 0x00403234: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00403238: jr          $ra
    // 0x0040323C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040323C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275A9C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275AA0: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275AA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275AA8: jal         0x002718D0
    // 0x00275AAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002718D0(rdram, ctx);
        goto after_0;
    // 0x00275AAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00275AB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275AB4: jr          $ra
    // 0x00275AB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275AB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00261074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00261078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026107C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00261084: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00261088: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x0026108C: jal         0x0025E428
    // 0x00261090: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    func_0025E428(rdram, ctx);
        goto after_0;
    // 0x00261090: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x00261094: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00261098: bne         $v0, $v1, L_002610B4
    if (ctx->r2 != ctx->r3) {
        // 0x0026109C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_002610B4;
    }
    // 0x0026109C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002610A0: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x002610A4: beq         $v1, $v0, L_002610DC
    if (ctx->r3 == ctx->r2) {
        // 0x002610A8: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_002610DC;
    }
    // 0x002610A8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x002610AC: beq         $v1, $v0, L_002610DC
    if (ctx->r3 == ctx->r2) {
        // 0x002610B0: nop
    
            goto L_002610DC;
    }
    // 0x002610B0: nop

L_002610B4:
    // 0x002610B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002610B8: lwc1        $f20, 0x7A3C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7A3C);
    // 0x002610BC: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x002610C0: jal         0x0021170C
    // 0x002610C4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_1;
    // 0x002610C4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x002610C8: lwc1        $f12, 0x10C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x002610CC: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x002610D0: jal         0x0021170C
    // 0x002610D4: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x002610D4: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x002610D8: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
L_002610DC:
    // 0x002610DC: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x002610E0: bne         $v0, $zero, L_00261114
    if (ctx->r2 != 0) {
        // 0x002610E4: nop
    
            goto L_00261114;
    }
    // 0x002610E4: nop

    // 0x002610E8: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x002610EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002610F0: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002610F4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002610F8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002610FC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00261100: nop

    // 0x00261104: bc1f        L_00261114
    if (!c1cs) {
        // 0x00261108: swc1        $f0, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
            goto L_00261114;
    }
    // 0x00261108: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x0026110C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00261110: sb          $v0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r2;
L_00261114:
    // 0x00261114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00261118: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026111C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00261120: jr          $ra
    // 0x00261124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00261124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00275F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275F7C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00275F80: addiu       $v0, $v0, 0x6A90
    ctx->r2 = ADD32(ctx->r2, 0X6A90);
    // 0x00275F84: jr          $ra
    // 0x00275F88: nop

    return;
    // 0x00275F88: nop

;}
RECOMP_FUNC void func_00255C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255C5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255C60: lwc1        $f0, 0x71BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71BC);
    // 0x00255C64: sw          $zero, 0xA78($a0)
    MEM_W(0XA78, ctx->r4) = 0;
    // 0x00255C68: sw          $zero, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = 0;
    // 0x00255C6C: swc1        $f0, 0xA98($a0)
    MEM_W(0XA98, ctx->r4) = ctx->f0.u32l;
    // 0x00255C70: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x00255C74: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x00255C78: jr          $ra
    // 0x00255C7C: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    return;
    // 0x00255C7C: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
;}
RECOMP_FUNC void func_002911B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002911B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002911BC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002911C0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x002911C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002911C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002911CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x002911D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002911D4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002911D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002911DC: jal         0x0029E230
    // 0x002911E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029E230(rdram, ctx);
        goto after_0;
    // 0x002911E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002911E4: lw          $s0, 0x8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X8);
    // 0x002911E8: beq         $s0, $zero, L_00291240
    if (ctx->r16 == 0) {
        // 0x002911EC: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_00291240;
    }
    // 0x002911EC: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x002911F0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x002911F4: sra         $s2, $v0, 16
    ctx->r18 = S32(SIGNED(ctx->r2) >> 16);
L_002911F8:
    // 0x002911F8: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x002911FC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x00291200: bnel        $v0, $s2, L_00291238
    if (ctx->r2 != ctx->r18) {
        // 0x00291204: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00291238;
    }
    goto skip_0;
    // 0x00291204: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x00291208: beq         $s1, $zero, L_00291220
    if (ctx->r17 == 0) {
        // 0x0029120C: nop
    
            goto L_00291220;
    }
    // 0x0029120C: nop

    // 0x00291210: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00291214: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00291218: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0029121C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_00291220:
    // 0x00291220: jal         0x002933B0
    // 0x00291224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002933B0(rdram, ctx);
        goto after_1;
    // 0x00291224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00291228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029122C: jal         0x002933E0
    // 0x00291230: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002933E0(rdram, ctx);
        goto after_2;
    // 0x00291230: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x00291234: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00291238:
    // 0x00291238: bne         $s0, $zero, L_002911F8
    if (ctx->r16 != 0) {
        // 0x0029123C: nop
    
            goto L_002911F8;
    }
    // 0x0029123C: nop

L_00291240:
    // 0x00291240: jal         0x0029E230
    // 0x00291244: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0029E230(rdram, ctx);
        goto after_3;
    // 0x00291244: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_3:
    // 0x00291248: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0029124C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00291250: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00291254: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00291258: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029125C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00291260: jr          $ra
    // 0x00291264: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00291264: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00291324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291324: swc1        $f1, -0x1CB0($at)
    MEM_W(-0X1CB0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00291328: lh          $a1, 0x996($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X996);
    // 0x0029132C: jal         0x0024E700
    // 0x00291330: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x00291330: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    after_0:
    // 0x00291334: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00291338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029133C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00291340: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00291344: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00291348: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0029134C: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x00291350: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00291354: lw          $v1, 0x7760($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7760);
    // 0x00291358: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0029135C: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x00291360: addiu       $v0, $zero, 0x1E8
    ctx->r2 = ADD32(0, 0X1E8);
    // 0x00291364: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x00291368: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x0029136C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00291370: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00291374: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x00291378: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x0029137C: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    // 0x00291380: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x00291384: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x00291388: addiu       $v0, $zero, 0x3E80
    ctx->r2 = ADD32(0, 0X3E80);
    // 0x0029138C: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x00291390: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00291394: sb          $v1, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r3;
    // 0x00291398: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0029139C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002913A0: sw          $v0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r2;
    // 0x002913A4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002913A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002913AC: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x002913B0: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x002913B4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x002913B8: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x002913BC: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x002913C0: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x002913C4: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x002913C8: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x002913CC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x002913D0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002913D4: sb          $v0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r2;
    // 0x002913D8: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x002913DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x002913E0: jal         0x002912A0
    // 0x002913E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_1;
    // 0x002913E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x002913E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002913EC: jal         0x002928F0
    // 0x002913F0: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    func_002928F0(rdram, ctx);
        goto after_2;
    // 0x002913F0: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    after_2:
    // 0x002913F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002913F8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002913FC: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x00291400: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00291404: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x00291408: jal         0x002912A0
    // 0x0029140C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_002912A0(rdram, ctx);
        goto after_3;
    // 0x0029140C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00291410: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x00291414: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00291418: blez        $v1, L_00291444
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0029141C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00291444;
    }
    // 0x0029141C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00291420: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00291424:
    // 0x00291424: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x00291428: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0029142C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00291430: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x00291434: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00291438: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029143C: bne         $v0, $zero, L_00291424
    if (ctx->r2 != 0) {
        // 0x00291440: addiu       $v1, $v1, 0x38
        ctx->r3 = ADD32(ctx->r3, 0X38);
            goto L_00291424;
    }
    // 0x00291440: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
L_00291444:
    // 0x00291444: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00291448: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0029144C: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x00291450: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x00291454: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x00291458: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0029145C: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x00291460: jal         0x002912A0
    // 0x00291464: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_002912A0(rdram, ctx);
        goto after_4;
    // 0x00291464: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x00291468: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x0029146C: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00291470: jal         0x00290F20
    // 0x00291474: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00290F20(rdram, ctx);
        goto after_5;
    // 0x00291474: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00291478: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029147C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291480: lw          $a0, 0x7760($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7760);
    // 0x00291484: lui         $v0, 0x29
    ctx->r2 = S32(0X29 << 16);
    // 0x00291488: addiu       $v0, $v0, 0x14B4
    ctx->r2 = ADD32(ctx->r2, 0X14B4);
    // 0x0029148C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x00291490: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x00291494: jal         0x00293F10
    // 0x00291498: sw          $a1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r5;
    func_00293F10(rdram, ctx);
        goto after_6;
    // 0x00291498: sw          $a1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r5;
    after_6:
    // 0x0029149C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x002914A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x002914A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002914A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002914AC: jr          $ra
    // 0x002914B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002914B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00468ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468ED0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00468ED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468ED8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00468EDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00468EE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00468EE4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00468EE8: jal         0x00200738
    // 0x00468EEC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x00468EEC: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_0:
    // 0x00468EF0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x00468EF4: jal         0x00200518
    // 0x00468EF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x00468EF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00468EFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00468F00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468F04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468F08: jr          $ra
    // 0x00468F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00468F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023CF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CF04: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0023CF08: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x0023CF0C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x0023CF10: sdc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X70, ctx->r29);
    // 0x0023CF14: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x0023CF18: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x0023CF1C: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x0023CF20: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0023CF24: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023CF28: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0023CF2C: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x0023CF30: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0023CF34: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023CF38: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x0023CF3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023CF40: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0023CF44: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x0023CF48: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0023CF4C: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0023CF50: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023CF54: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023CF58: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0023CF5C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023CF60: lwc1        $f1, 0x8($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x0023CF64: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023CF68: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x0023CF6C: jal         0x00298470
    // 0x0023CF70: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0023CF70: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0023CF74: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0023CF78: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x0023CF7C: nop

    // 0x0023CF80: bc1t        L_0023D030
    if (c1cs) {
        // 0x0023CF84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023D030;
    }
    // 0x0023CF84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023CF88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023CF8C: lwc1        $f23, 0x66B0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X66B0);
    // 0x0023CF90: lwc1        $f5, 0x40($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x0023CF94: div.s       $f21, $f23, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0023CF98: mul.s       $f5, $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f21.fl);
    // 0x0023CF9C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0023CFA0: mul.s       $f4, $f4, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f21.fl);
    // 0x0023CFA4: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023CFA8: mul.s       $f3, $f2, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x0023CFAC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023CFB0: mul.s       $f0, $f1, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f4.fl);
    // 0x0023CFB4: add.s       $f20, $f3, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023CFB8: mul.s       $f0, $f5, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f5.fl, ctx->f20.fl);
    // 0x0023CFBC: nop

    // 0x0023CFC0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x0023CFC4: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0023CFC8: mul.s       $f3, $f2, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0023CFCC: sub.s       $f1, $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f6.fl;
    // 0x0023CFD0: mul.s       $f0, $f1, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023CFD4: swc1        $f5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0023CFD8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x0023CFDC: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x0023CFE0: swc1        $f1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023CFE4: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023CFE8: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0023CFEC: sub.s       $f12, $f0, $f3
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x0023CFF0: c.lt.s      $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f22.fl < ctx->f12.fl;
    // 0x0023CFF4: nop

    // 0x0023CFF8: bc1f        L_0023D030
    if (!c1cs) {
        // 0x0023CFFC: nop
    
            goto L_0023D030;
    }
    // 0x0023CFFC: nop

    // 0x0023D000: jal         0x00298470
    // 0x0023D004: nop

    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0023D004: nop

    after_1:
    // 0x0023D008: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x0023D00C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0023D010: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x0023D014: nop

    // 0x0023D018: bc1f        L_0023D030
    if (!c1cs) {
        // 0x0023D01C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023D030;
    }
    // 0x0023D01C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023D020: c.le.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl <= ctx->f23.fl;
    // 0x0023D024: nop

    // 0x0023D028: bc1tl       L_0023D030
    if (c1cs) {
        // 0x0023D02C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023D030;
    }
    goto skip_0;
    // 0x0023D02C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_0023D030:
    // 0x0023D030: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0023D034: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0023D038: ldc1        $f23, 0x70($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X70);
    // 0x0023D03C: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x0023D040: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0023D044: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x0023D048: jr          $ra
    // 0x0023D04C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0023D04C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00294150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294150: jr          $ra
    // 0x00294154: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x00294154: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_00245E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245E20: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x00245E24: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00245E28: beq         $v0, $zero, L_00245E3C
    if (ctx->r2 == 0) {
        // 0x00245E2C: addiu       $v1, $zero, 0xCA
        ctx->r3 = ADD32(0, 0XCA);
            goto L_00245E3C;
    }
    // 0x00245E2C: addiu       $v1, $zero, 0xCA
    ctx->r3 = ADD32(0, 0XCA);
    // 0x00245E30: lhu         $a0, 0xB8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB8);
    // 0x00245E34: bne         $a0, $v1, L_00245E40
    if (ctx->r4 != ctx->r3) {
        // 0x00245E38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00245E40;
    }
    // 0x00245E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00245E3C:
    // 0x00245E3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00245E40:
    // 0x00245E40: jr          $ra
    // 0x00245E44: nop

    return;
    // 0x00245E44: nop

;}
RECOMP_FUNC void func_002418C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002418C0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002418C4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002418C8: beq         $v0, $zero, L_00241954
    if (ctx->r2 == 0) {
        // 0x002418CC: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_00241954;
    }
    // 0x002418CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x002418D0: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_002418D4:
    // 0x002418D4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002418D8: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x002418DC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x002418E0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x002418E4: sw          $a2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r6;
    // 0x002418E8: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
    // 0x002418EC: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x002418F0: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x002418F4: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x002418F8: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
    // 0x002418FC: lw          $v0, -0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X20);
    // 0x00241900: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00241904: lbu         $v0, -0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X19);
    // 0x00241908: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x0024190C: lbu         $v0, -0x15($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X15);
    // 0x00241910: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x00241914: lbu         $v0, -0x11($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X11);
    // 0x00241918: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x0024191C: lwc1        $f0, -0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, -0X10);
    // 0x00241920: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x00241924: lwc1        $f0, -0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, -0XC);
    // 0x00241928: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x0024192C: lwc1        $f0, -0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, -0X8);
    // 0x00241930: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x00241934: lwc1        $f0, -0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, -0X4);
    // 0x00241938: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x0024193C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00241940: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x00241944: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x00241948: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0024194C: bne         $v0, $zero, L_002418D4
    if (ctx->r2 != 0) {
        // 0x00241950: addiu       $a0, $a0, 0x28
        ctx->r4 = ADD32(ctx->r4, 0X28);
            goto L_002418D4;
    }
    // 0x00241950: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
L_00241954:
    // 0x00241954: jr          $ra
    // 0x00241958: nop

    return;
    // 0x00241958: nop

;}
RECOMP_FUNC void func_004407E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004407E8: jr          $ra
    // 0x004407EC: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    return;
    // 0x004407EC: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
;}
RECOMP_FUNC void func_002840EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002840EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002840F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002840F4: jal         0x00284174
    // 0x002840F8: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x002840F8: nop

    after_0:
    // 0x002840FC: beq         $v0, $zero, L_00284138
    if (ctx->r2 == 0) {
        // 0x00284100: nop
    
            goto L_00284138;
    }
    // 0x00284100: nop

    // 0x00284104: jal         0x00284144
    // 0x00284108: nop

    func_00284144(rdram, ctx);
        goto after_1;
    // 0x00284108: nop

    after_1:
    // 0x0028410C: beq         $v0, $zero, L_00284138
    if (ctx->r2 == 0) {
        // 0x00284110: nop
    
            goto L_00284138;
    }
    // 0x00284110: nop

    // 0x00284114: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00284118: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x0028411C: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
    // 0x00284120: bne         $v0, $zero, L_00284138
    if (ctx->r2 != 0) {
        // 0x00284124: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00284138;
    }
    // 0x00284124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00284128: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028412C: lwc1        $f0, -0x6330($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6330);
    // 0x00284130: sw          $v0, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r2;
    // 0x00284134: swc1        $f0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f0.u32l;
L_00284138:
    // 0x00284138: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028413C: jr          $ra
    // 0x00284140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00284140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00210A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00210A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00210A6C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00210A70: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00210A74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00210A78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00210A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00210A80: jal         0x002982F0
    // 0x00210A84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00210A84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00210A88: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00210A8C: jal         0x002974C0
    // 0x00210A90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00210A90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x00210A94: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x00210A98: mul.s       $f11, $f0, $f12
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f11.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00210A9C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00210AA0: mul.s       $f8, $f20, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x00210AA4: neg.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = -ctx->f20.fl;
    // 0x00210AA8: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00210AAC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00210AB0: mul.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x00210AB4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x00210AB8: mul.s       $f4, $f20, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x00210ABC: lwc1        $f3, 0x14($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X14);
    // 0x00210AC0: mul.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00210AC4: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x00210AC8: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00210ACC: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00210AD0: mul.s       $f9, $f0, $f12
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f9.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00210AD4: nop

    // 0x00210AD8: mul.s       $f7, $f2, $f12
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f7.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00210ADC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00210AE0: mul.s       $f5, $f0, $f12
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f5.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00210AE4: nop

    // 0x00210AE8: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00210AEC: nop

    // 0x00210AF0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00210AF4: add.s       $f11, $f11, $f8
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f8.fl;
    // 0x00210AF8: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x00210AFC: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x00210B00: add.s       $f7, $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f3.fl;
    // 0x00210B04: add.s       $f5, $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f20.fl;
    // 0x00210B08: swc1        $f11, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(11 - 1) * 2];
    // 0x00210B0C: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x00210B10: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00210B14: swc1        $f9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(9 - 1) * 2];
    // 0x00210B18: swc1        $f7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(7 - 1) * 2];
    // 0x00210B1C: swc1        $f5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(5 - 1) * 2];
    // 0x00210B20: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x00210B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00210B28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00210B2C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00210B30: jr          $ra
    // 0x00210B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00210B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00256868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256868: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0025686C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00256870: jr          $ra
    // 0x00256874: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x00256874: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_00465338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0046533C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00465340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00465344: jal         0x0028D0E0
    // 0x00465348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x00465348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0046534C: bne         $v0, $zero, L_0046537C
    if (ctx->r2 != 0) {
        // 0x00465350: nop
    
            goto L_0046537C;
    }
    // 0x00465350: nop

    // 0x00465354: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00465358: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x0046535C: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x00465360: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    // 0x00465364: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x00465368: addiu       $a3, $a3, -0x4540
    ctx->r7 = ADD32(ctx->r7, -0X4540);
    // 0x0046536C: jal         0x00201DBC
    // 0x00465370: nop

    func_00201DBC(rdram, ctx);
        goto after_1;
    // 0x00465370: nop

    after_1:
    // 0x00465374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00465378: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_0046537C:
    // 0x0046537C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00465380: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465384: jr          $ra
    // 0x00465388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00465388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00292774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292774: lbu         $v1, 0x36($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X36);
    // 0x00292778: lbu         $v0, 0x33($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X33);
    // 0x0029277C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00292780: mflo        $a2
    ctx->r6 = lo;
    // 0x00292784: lbu         $v0, 0x30($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X30);
    // 0x00292788: nop

    // 0x0029278C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00292790: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x00292794: lbu         $a2, 0xD($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XD);
    // 0x00292798: mflo        $a3
    ctx->r7 = lo;
    // 0x0029279C: lh          $v1, 0x32($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X32);
    // 0x002927A0: nop

    // 0x002927A4: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002927A8: lbu         $v0, 0x31($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X31);
    // 0x002927AC: lw          $a0, 0x60($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X60);
    // 0x002927B0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002927B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x002927B8: mflo        $v1
    ctx->r3 = lo;
    // 0x002927BC: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x002927C0: nop

    // 0x002927C4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002927C8: mflo        $v1
    ctx->r3 = lo;
    // 0x002927CC: sra         $v0, $a3, 6
    ctx->r2 = S32(SIGNED(ctx->r7) >> 6);
    // 0x002927D0: sra         $v1, $v1, 14
    ctx->r3 = S32(SIGNED(ctx->r3) >> 14);
    // 0x002927D4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002927D8: mflo        $v0
    ctx->r2 = lo;
    // 0x002927DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x002927E0: jr          $ra
    // 0x002927E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    return;
    // 0x002927E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
;}
RECOMP_FUNC void func_00468E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00468E7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00468E80: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00468E84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00468E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468E8C: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x00468E90: beq         $s0, $zero, L_00468EBC
    if (ctx->r16 == 0) {
        // 0x00468E94: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00468EBC;
    }
    // 0x00468E94: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00468E98: jal         0x0042F8D0
    // 0x00468E9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042F8D0(rdram, ctx);
        goto after_0;
    // 0x00468E9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00468EA0: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x00468EA4: jal         0x00200738
    // 0x00468EA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x00468EA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00468EAC: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    // 0x00468EB0: jal         0x00200574
    // 0x00468EB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00468EB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00468EB8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00468EBC:
    // 0x00468EBC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00468EC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468EC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468EC8: jr          $ra
    // 0x00468ECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00468ECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028BB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028BB00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028BB04: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0028BB08: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0028BB0C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028BB10: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0028BB14: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0028BB18: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0028BB1C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028BB20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028BB24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028BB28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0028BB2C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0028BB30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028BB34: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BB38: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x0028BB3C: beq         $v0, $zero, L_0028BB5C
    if (ctx->r2 == 0) {
        // 0x0028BB40: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_0028BB5C;
    }
    // 0x0028BB40: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
L_0028BB44:
    // 0x0028BB44: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BB48: jal         0x0028B430
    // 0x0028BB4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_0;
    // 0x0028BB4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x0028BB50: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BB54: bne         $v0, $zero, L_0028BB44
    if (ctx->r2 != 0) {
        // 0x0028BB58: nop
    
            goto L_0028BB44;
    }
    // 0x0028BB58: nop

L_0028BB5C:
    // 0x0028BB5C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BB60: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028BB64: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BB68: beql        $v0, $zero, L_0028BB8C
    if (ctx->r2 == 0) {
        // 0x0028BB6C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BB8C;
    }
    goto skip_0;
    // 0x0028BB6C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0028BB70:
    // 0x0028BB70: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BB74: jal         0x0028B430
    // 0x0028BB78: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_1;
    // 0x0028BB78: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x0028BB7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BB80: bne         $v0, $zero, L_0028BB70
    if (ctx->r2 != 0) {
        // 0x0028BB84: nop
    
            goto L_0028BB70;
    }
    // 0x0028BB84: nop

    // 0x0028BB88: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BB8C:
    // 0x0028BB8C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028BB90: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028BB94:
    // 0x0028BB94: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BB98: jal         0x0028CD68
    // 0x0028BB9C: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_2;
    // 0x0028BB9C: srlv        $a0, $s2, $a0
    ctx->r4 = S32(U32(ctx->r18) >> (ctx->r4 & 31));
    after_2:
    // 0x0028BBA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BBA4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BBA8: bnel        $v0, $zero, L_0028BB94
    if (ctx->r2 != 0) {
        // 0x0028BBAC: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028BB94;
    }
    goto skip_1;
    // 0x0028BBAC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_1:
    // 0x0028BBB0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BBB4: addiu       $s0, $s0, -0x5F14
    ctx->r16 = ADD32(ctx->r16, -0X5F14);
    // 0x0028BBB8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BBBC: beql        $v0, $zero, L_0028BBE0
    if (ctx->r2 == 0) {
        // 0x0028BBC0: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_0028BBE0;
    }
    goto skip_2;
    // 0x0028BBC0: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    skip_2:
L_0028BBC4:
    // 0x0028BBC4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BBC8: jal         0x0028B430
    // 0x0028BBCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_3;
    // 0x0028BBCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_3:
    // 0x0028BBD0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BBD4: bne         $v0, $zero, L_0028BBC4
    if (ctx->r2 != 0) {
        // 0x0028BBD8: nop
    
            goto L_0028BBC4;
    }
    // 0x0028BBD8: nop

    // 0x0028BBDC: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0028BBE0:
    // 0x0028BBE0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BBE4: beq         $v0, $zero, L_0028BC04
    if (ctx->r2 == 0) {
        // 0x0028BBE8: nop
    
            goto L_0028BC04;
    }
    // 0x0028BBE8: nop

L_0028BBEC:
    // 0x0028BBEC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BBF0: jal         0x0028B430
    // 0x0028BBF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_4;
    // 0x0028BBF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_4:
    // 0x0028BBF8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BBFC: bne         $v0, $zero, L_0028BBEC
    if (ctx->r2 != 0) {
        // 0x0028BC00: nop
    
            goto L_0028BBEC;
    }
    // 0x0028BC00: nop

L_0028BC04:
    // 0x0028BC04: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BC08: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028BC0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC10: beql        $v0, $zero, L_0028BC34
    if (ctx->r2 == 0) {
        // 0x0028BC14: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BC34;
    }
    goto skip_3;
    // 0x0028BC14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_3:
L_0028BC18:
    // 0x0028BC18: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC1C: jal         0x0028B430
    // 0x0028BC20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_5;
    // 0x0028BC20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_5:
    // 0x0028BC24: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC28: bne         $v0, $zero, L_0028BC18
    if (ctx->r2 != 0) {
        // 0x0028BC2C: nop
    
            goto L_0028BC18;
    }
    // 0x0028BC2C: nop

    // 0x0028BC30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BC34:
    // 0x0028BC34: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028BC38: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028BC3C:
    // 0x0028BC3C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BC40: jal         0x0028CD68
    // 0x0028BC44: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_6;
    // 0x0028BC44: srlv        $a0, $s4, $a0
    ctx->r4 = S32(U32(ctx->r20) >> (ctx->r4 & 31));
    after_6:
    // 0x0028BC48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BC4C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BC50: bnel        $v0, $zero, L_0028BC3C
    if (ctx->r2 != 0) {
        // 0x0028BC54: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028BC3C;
    }
    goto skip_4;
    // 0x0028BC54: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_4:
    // 0x0028BC58: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BC5C: addiu       $s0, $s0, -0x5F14
    ctx->r16 = ADD32(ctx->r16, -0X5F14);
    // 0x0028BC60: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC64: beq         $v0, $zero, L_0028BC84
    if (ctx->r2 == 0) {
        // 0x0028BC68: nop
    
            goto L_0028BC84;
    }
    // 0x0028BC68: nop

L_0028BC6C:
    // 0x0028BC6C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC70: jal         0x0028B430
    // 0x0028BC74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_7;
    // 0x0028BC74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x0028BC78: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC7C: bne         $v0, $zero, L_0028BC6C
    if (ctx->r2 != 0) {
        // 0x0028BC80: nop
    
            goto L_0028BC6C;
    }
    // 0x0028BC80: nop

L_0028BC84:
    // 0x0028BC84: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0028BC88: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC8C: beq         $v0, $zero, L_0028BCAC
    if (ctx->r2 == 0) {
        // 0x0028BC90: nop
    
            goto L_0028BCAC;
    }
    // 0x0028BC90: nop

L_0028BC94:
    // 0x0028BC94: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BC98: jal         0x0028B430
    // 0x0028BC9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_8;
    // 0x0028BC9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_8:
    // 0x0028BCA0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BCA4: bne         $v0, $zero, L_0028BC94
    if (ctx->r2 != 0) {
        // 0x0028BCA8: nop
    
            goto L_0028BC94;
    }
    // 0x0028BCA8: nop

L_0028BCAC:
    // 0x0028BCAC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BCB0: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028BCB4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BCB8: beql        $v0, $zero, L_0028BCDC
    if (ctx->r2 == 0) {
        // 0x0028BCBC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BCDC;
    }
    goto skip_5;
    // 0x0028BCBC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_5:
L_0028BCC0:
    // 0x0028BCC0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BCC4: jal         0x0028B430
    // 0x0028BCC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_9;
    // 0x0028BCC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_9:
    // 0x0028BCCC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BCD0: bne         $v0, $zero, L_0028BCC0
    if (ctx->r2 != 0) {
        // 0x0028BCD4: nop
    
            goto L_0028BCC0;
    }
    // 0x0028BCD4: nop

    // 0x0028BCD8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BCDC:
    // 0x0028BCDC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028BCE0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028BCE4:
    // 0x0028BCE4: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BCE8: jal         0x0028CD68
    // 0x0028BCEC: srlv        $a0, $s5, $a0
    ctx->r4 = S32(U32(ctx->r21) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_10;
    // 0x0028BCEC: srlv        $a0, $s5, $a0
    ctx->r4 = S32(U32(ctx->r21) >> (ctx->r4 & 31));
    after_10:
    // 0x0028BCF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BCF4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BCF8: bnel        $v0, $zero, L_0028BCE4
    if (ctx->r2 != 0) {
        // 0x0028BCFC: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028BCE4;
    }
    goto skip_6;
    // 0x0028BCFC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_6:
    // 0x0028BD00: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BD04: addiu       $s0, $s0, -0x5F14
    ctx->r16 = ADD32(ctx->r16, -0X5F14);
    // 0x0028BD08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD0C: beq         $v0, $zero, L_0028BD2C
    if (ctx->r2 == 0) {
        // 0x0028BD10: nop
    
            goto L_0028BD2C;
    }
    // 0x0028BD10: nop

L_0028BD14:
    // 0x0028BD14: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD18: jal         0x0028B430
    // 0x0028BD1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_11;
    // 0x0028BD1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x0028BD20: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD24: bne         $v0, $zero, L_0028BD14
    if (ctx->r2 != 0) {
        // 0x0028BD28: nop
    
            goto L_0028BD14;
    }
    // 0x0028BD28: nop

L_0028BD2C:
    // 0x0028BD2C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x0028BD30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD34: beq         $v0, $zero, L_0028BD54
    if (ctx->r2 == 0) {
        // 0x0028BD38: nop
    
            goto L_0028BD54;
    }
    // 0x0028BD38: nop

L_0028BD3C:
    // 0x0028BD3C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD40: jal         0x0028B430
    // 0x0028BD44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_12;
    // 0x0028BD44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_12:
    // 0x0028BD48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD4C: bne         $v0, $zero, L_0028BD3C
    if (ctx->r2 != 0) {
        // 0x0028BD50: nop
    
            goto L_0028BD3C;
    }
    // 0x0028BD50: nop

L_0028BD54:
    // 0x0028BD54: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BD58: addiu       $s0, $s0, -0x5F24
    ctx->r16 = ADD32(ctx->r16, -0X5F24);
    // 0x0028BD5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD60: beql        $v0, $zero, L_0028BD84
    if (ctx->r2 == 0) {
        // 0x0028BD64: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0028BD84;
    }
    goto skip_7;
    // 0x0028BD64: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_7:
L_0028BD68:
    // 0x0028BD68: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD6C: jal         0x0028B430
    // 0x0028BD70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_13;
    // 0x0028BD70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_13:
    // 0x0028BD74: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BD78: bne         $v0, $zero, L_0028BD68
    if (ctx->r2 != 0) {
        // 0x0028BD7C: nop
    
            goto L_0028BD68;
    }
    // 0x0028BD7C: nop

    // 0x0028BD80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0028BD84:
    // 0x0028BD84: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0028BD88: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_0028BD8C:
    // 0x0028BD8C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028BD90: jal         0x0028CD68
    // 0x0028BD94: srlv        $a0, $s6, $a0
    ctx->r4 = S32(U32(ctx->r22) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_14;
    // 0x0028BD94: srlv        $a0, $s6, $a0
    ctx->r4 = S32(U32(ctx->r22) >> (ctx->r4 & 31));
    after_14:
    // 0x0028BD98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028BD9C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0028BDA0: bnel        $v0, $zero, L_0028BD8C
    if (ctx->r2 != 0) {
        // 0x0028BDA4: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_0028BD8C;
    }
    goto skip_8;
    // 0x0028BDA4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_8:
    // 0x0028BDA8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028BDAC: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028BDB0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BDB4: beq         $v0, $zero, L_0028BDD4
    if (ctx->r2 == 0) {
        // 0x0028BDB8: nop
    
            goto L_0028BDD4;
    }
    // 0x0028BDB8: nop

L_0028BDBC:
    // 0x0028BDBC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BDC0: jal         0x0028B430
    // 0x0028BDC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_15;
    // 0x0028BDC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_15:
    // 0x0028BDC8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028BDCC: bne         $v0, $zero, L_0028BDBC
    if (ctx->r2 != 0) {
        // 0x0028BDD0: nop
    
            goto L_0028BDBC;
    }
    // 0x0028BDD0: nop

L_0028BDD4:
    // 0x0028BDD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0028BDD8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0028BDDC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0028BDE0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0028BDE4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028BDE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028BDEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028BDF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028BDF4: jr          $ra
    // 0x0028BDF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028BDF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00235FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235FC4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00235FC8: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00235FCC: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x00235FD0: sw          $v0, 0x2580($a0)
    MEM_W(0X2580, ctx->r4) = ctx->r2;
    // 0x00235FD4: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x00235FD8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00235FDC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00235FE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00235FE4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00235FE8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00235FEC: jr          $ra
    // 0x00235FF0: sw          $v0, 0x2584($a0)
    MEM_W(0X2584, ctx->r4) = ctx->r2;
    return;
    // 0x00235FF0: sw          $v0, 0x2584($a0)
    MEM_W(0X2584, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00218490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218490: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00218494: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00218498: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0021849C: mflo        $v1
    ctx->r3 = lo;
    // 0x002184A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002184A4: jr          $ra
    // 0x002184A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x002184A8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_002600E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002600E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002600EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002600F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002600F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002600F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002600FC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00260100: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00260104: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00260108: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0026010C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x00260110: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x00260114: jal         0x00246690
    // 0x00260118: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_00246690(rdram, ctx);
        goto after_0;
    // 0x00260118: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x0026011C: jal         0x004089C8
    // 0x00260120: nop

    func_004089C8(rdram, ctx);
        goto after_1;
    // 0x00260120: nop

    after_1:
    // 0x00260124: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00260128: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0026012C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00260130: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00260134: bne         $v0, $zero, L_00260174
    if (ctx->r2 != 0) {
        // 0x00260138: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00260174;
    }
    // 0x00260138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0026013C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00260140: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00260144: bne         $v0, $zero, L_00260168
    if (ctx->r2 != 0) {
        // 0x00260148: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00260168;
    }
    // 0x00260148: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0026014C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00260150: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00260154: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00260158: jal         0x00220260
    // 0x0026015C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_2;
    // 0x0026015C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00260160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00260164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00260168:
    // 0x00260168: jal         0x0026E110
    // 0x0026016C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0026E110(rdram, ctx);
        goto after_3;
    // 0x0026016C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00260170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00260174:
    // 0x00260174: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00260178: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0026017C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00260180: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00260184: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00260188: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026018C: jal         0x00246918
    // 0x00260190: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00246918(rdram, ctx);
        goto after_4;
    // 0x00260190: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_4:
    // 0x00260194: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00260198: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0026019C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002601A0: beq         $v0, $zero, L_002601B0
    if (ctx->r2 == 0) {
        // 0x002601A4: nop
    
            goto L_002601B0;
    }
    // 0x002601A4: nop

    // 0x002601A8: jal         0x002280B0
    // 0x002601AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002280B0(rdram, ctx);
        goto after_5;
    // 0x002601AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_002601B0:
    // 0x002601B0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002601B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002601B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002601BC: jr          $ra
    // 0x002601C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002601C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040B524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B524: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B528: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B52C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B530: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B534: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B538: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B53C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B544: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B548: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040B54C: sw          $zero, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = 0;
    // 0x0040B550: jal         0x00246108
    // 0x0040B554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B55C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B560: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B564: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B568: jal         0x00245BAC
    // 0x0040B56C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B56C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B570: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B574: beq         $v0, $zero, L_0040B588
    if (ctx->r2 == 0) {
        // 0x0040B578: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B588;
    }
    // 0x0040B578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B57C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B580: jal         0x00243414
    // 0x0040B584: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B584: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_0040B588:
    // 0x0040B588: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B58C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B590: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B594: jr          $ra
    // 0x0040B598: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B598: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00298A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298A0C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00298A10: addiu       $v1, $v1, 0x13E0
    ctx->r3 = ADD32(ctx->r3, 0X13E0);
    // 0x00298A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00298A18: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x00298A1C: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    // 0x00298A20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00298A24:
    // 0x00298A24: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x00298A28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00298A2C: bgez        $v0, L_00298A24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00298A30: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00298A24;
    }
    // 0x00298A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00298A34: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x00298A38: jr          $ra
    // 0x00298A3C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x00298A3C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_00297CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297CB4: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x00297CB8: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x00297CBC: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x00297CC0: lui         $t4, 0xFFFF
    ctx->r12 = S32(0XFFFF << 16);
    // 0x00297CC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00297CC8: lwc1        $f2, -0x5830($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5830);
    // 0x00297CCC: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
L_00297CD0:
    // 0x00297CD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00297CD4: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
L_00297CD8:
    // 0x00297CD8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x00297CDC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x00297CE0: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x00297CE4: and         $a0, $v1, $t4
    ctx->r4 = ctx->r3 & ctx->r12;
    // 0x00297CE8: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x00297CEC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00297CF0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00297CF4: mtc1        $a0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r4;
    // 0x00297CF8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00297CFC: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00297D00: and         $v1, $v1, $t4
    ctx->r3 = ctx->r3 & ctx->r12;
    // 0x00297D04: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x00297D08: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x00297D0C: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00297D10: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00297D14: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00297D18: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x00297D1C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x00297D20: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x00297D24: swc1        $f1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x00297D28: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x00297D2C: bne         $v0, $zero, L_00297CD8
    if (ctx->r2 != 0) {
        // 0x00297D30: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00297CD8;
    }
    // 0x00297D30: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00297D34: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x00297D38: slti        $v0, $t3, 0x4
    ctx->r2 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x00297D3C: bne         $v0, $zero, L_00297CD0
    if (ctx->r2 != 0) {
        // 0x00297D40: addiu       $t2, $t2, 0x10
        ctx->r10 = ADD32(ctx->r10, 0X10);
            goto L_00297CD0;
    }
    // 0x00297D40: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x00297D44: jr          $ra
    // 0x00297D48: nop

    return;
    // 0x00297D48: nop

;}
RECOMP_FUNC void func_002810C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002810C4: lbu         $v0, 0x508($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X508);
    // 0x002810C8: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x002810CC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x002810D0: lbu         $v0, 0x509($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X509);
    // 0x002810D4: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x002810D8: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x002810DC: lbu         $v0, 0x50A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X50A);
    // 0x002810E0: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x002810E4: jr          $ra
    // 0x002810E8: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x002810E8: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_0025AD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AD88: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0025AD8C: bne         $v0, $zero, L_0025B284
    if (ctx->r2 != 0) {
        // 0x0025AD90: addiu       $sp, $sp, -0x98
        ctx->r29 = ADD32(ctx->r29, -0X98);
            goto L_0025B284;
    }
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
    // 0x0025B078: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025B07C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0025B080: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0025B084: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0025B088: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0025B08C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0025B090: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0025B094: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025B098: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0025B09C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025B0A0: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
    // 0x0025B0A4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0025B0A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0025B0AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025B0B0: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x0025B0B4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0025B0B8: lbu         $v1, -0x5511($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5511);
    // 0x0025B0BC: beq         $v1, $zero, L_0025B144
    if (ctx->r3 == 0) {
        // 0x0025B0C0: addiu       $s0, $v0, 0x14
        ctx->r16 = ADD32(ctx->r2, 0X14);
            goto L_0025B144;
    }
    // 0x0025B0C0: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    // 0x0025B0C4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x0025B0C8: beq         $a0, $zero, L_0025B144
    if (ctx->r4 == 0) {
        // 0x0025B0CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B144;
    }
    // 0x0025B0CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B0D0: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x0025B0D4: beq         $a1, $v0, L_0025B114
    if (ctx->r5 == ctx->r2) {
        // 0x0025B0D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B114;
    }
    // 0x0025B0D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B0DC: bne         $a1, $v0, L_0025B144
    if (ctx->r5 != ctx->r2) {
        // 0x0025B0E0: nop
    
            goto L_0025B144;
    }
    // 0x0025B0E0: nop

    // 0x0025B0E4: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x0025B0E8: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x0025B0EC: sltiu       $v0, $v1, 0x67
    ctx->r2 = ctx->r3 < 0X67 ? 1 : 0;
    // 0x0025B0F0: beq         $v0, $zero, L_0025B144
    if (ctx->r2 == 0) {
        // 0x0025B0F4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0025B144;
    }
    // 0x0025B0F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025B0F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B0FC: addu        $at, $at, $v0
    gpr jr_addend_0025B104 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025B100: lw          $v0, 0x73A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X73A0);
    // 0x0025B104: jr          $v0
    // 0x0025B108: nop

    switch (jr_addend_0025B104 >> 2) {
        case 0: goto L_0025B138; break;
        case 1: goto L_0025B144; break;
        case 2: goto L_0025B144; break;
        case 3: goto L_0025B144; break;
        case 4: goto L_0025B138; break;
        case 5: goto L_0025B138; break;
        case 6: goto L_0025B138; break;
        case 7: goto L_0025B138; break;
        case 8: goto L_0025B144; break;
        case 9: goto L_0025B144; break;
        case 10: goto L_0025B10C; break;
        case 11: goto L_0025B144; break;
        case 12: goto L_0025B144; break;
        case 13: goto L_0025B144; break;
        case 14: goto L_0025B144; break;
        case 15: goto L_0025B144; break;
        case 16: goto L_0025B144; break;
        case 17: goto L_0025B144; break;
        case 18: goto L_0025B144; break;
        case 19: goto L_0025B144; break;
        case 20: goto L_0025B144; break;
        case 21: goto L_0025B144; break;
        case 22: goto L_0025B144; break;
        case 23: goto L_0025B144; break;
        case 24: goto L_0025B138; break;
        case 25: goto L_0025B144; break;
        case 26: goto L_0025B144; break;
        case 27: goto L_0025B144; break;
        case 28: goto L_0025B144; break;
        case 29: goto L_0025B144; break;
        case 30: goto L_0025B144; break;
        case 31: goto L_0025B144; break;
        case 32: goto L_0025B10C; break;
        case 33: goto L_0025B10C; break;
        case 34: goto L_0025B10C; break;
        case 35: goto L_0025B144; break;
        case 36: goto L_0025B144; break;
        case 37: goto L_0025B144; break;
        case 38: goto L_0025B144; break;
        case 39: goto L_0025B144; break;
        case 40: goto L_0025B144; break;
        case 41: goto L_0025B144; break;
        case 42: goto L_0025B144; break;
        case 43: goto L_0025B144; break;
        case 44: goto L_0025B144; break;
        case 45: goto L_0025B144; break;
        case 46: goto L_0025B144; break;
        case 47: goto L_0025B144; break;
        case 48: goto L_0025B144; break;
        case 49: goto L_0025B144; break;
        case 50: goto L_0025B144; break;
        case 51: goto L_0025B144; break;
        case 52: goto L_0025B144; break;
        case 53: goto L_0025B144; break;
        case 54: goto L_0025B144; break;
        case 55: goto L_0025B144; break;
        case 56: goto L_0025B144; break;
        case 57: goto L_0025B144; break;
        case 58: goto L_0025B144; break;
        case 59: goto L_0025B144; break;
        case 60: goto L_0025B144; break;
        case 61: goto L_0025B144; break;
        case 62: goto L_0025B144; break;
        case 63: goto L_0025B144; break;
        case 64: goto L_0025B144; break;
        case 65: goto L_0025B144; break;
        case 66: goto L_0025B144; break;
        case 67: goto L_0025B144; break;
        case 68: goto L_0025B144; break;
        case 69: goto L_0025B144; break;
        case 70: goto L_0025B144; break;
        case 71: goto L_0025B144; break;
        case 72: goto L_0025B144; break;
        case 73: goto L_0025B144; break;
        case 74: goto L_0025B144; break;
        case 75: goto L_0025B144; break;
        case 76: goto L_0025B144; break;
        case 77: goto L_0025B138; break;
        case 78: goto L_0025B144; break;
        case 79: goto L_0025B144; break;
        case 80: goto L_0025B144; break;
        case 81: goto L_0025B144; break;
        case 82: goto L_0025B144; break;
        case 83: goto L_0025B144; break;
        case 84: goto L_0025B144; break;
        case 85: goto L_0025B10C; break;
        case 86: goto L_0025B10C; break;
        case 87: goto L_0025B144; break;
        case 88: goto L_0025B144; break;
        case 89: goto L_0025B144; break;
        case 90: goto L_0025B144; break;
        case 91: goto L_0025B144; break;
        case 92: goto L_0025B144; break;
        case 93: goto L_0025B144; break;
        case 94: goto L_0025B144; break;
        case 95: goto L_0025B144; break;
        case 96: goto L_0025B144; break;
        case 97: goto L_0025B144; break;
        case 98: goto L_0025B144; break;
        case 99: goto L_0025B144; break;
        case 100: goto L_0025B144; break;
        case 101: goto L_0025B144; break;
        case 102: goto L_0025B138; break;
        default: switch_error(__func__, 0x0025B104, 0x800A73A0);
    }
    // 0x0025B108: nop

L_0025B10C:
    // 0x0025B10C: j           L_0025B144
    // 0x0025B110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_0025B144;
    // 0x0025B110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_0025B114:
    // 0x0025B114: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0025B118: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0025B11C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B120: beq         $v0, $zero, L_0025B144
    if (ctx->r2 == 0) {
        // 0x0025B124: nop
    
            goto L_0025B144;
    }
    // 0x0025B124: nop

    // 0x0025B128: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x0025B12C: lh          $v0, 0x996($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X996);
    // 0x0025B130: bne         $v0, $a1, L_0025B144
    if (ctx->r2 != ctx->r5) {
        // 0x0025B134: nop
    
            goto L_0025B144;
    }
    // 0x0025B134: nop

L_0025B138:
    // 0x0025B138: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0025B13C: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0025B140: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_0025B144:
    // 0x0025B144: beq         $a2, $zero, L_0025B158
    if (ctx->r6 == 0) {
        // 0x0025B148: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B158;
    }
    // 0x0025B148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B14C: lb          $v1, 0x50($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X50);
    // 0x0025B150: bne         $v1, $v0, L_0025B2B0
    if (ctx->r3 != ctx->r2) {
        // 0x0025B154: addiu       $v0, $zero, 0x37
        ctx->r2 = ADD32(0, 0X37);
            goto L_0025B2B0;
    }
    // 0x0025B154: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
L_0025B158:
    // 0x0025B158: jal         0x002113A4
    // 0x0025B15C: nop

    func_002113A4(rdram, ctx);
        goto after_10;
    // 0x0025B15C: nop

    after_10:
    // 0x0025B160: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B164: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B168: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B16C: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B170: mfhi        $a3
    ctx->r7 = hi;
    // 0x0025B174: sra         $a0, $a3, 6
    ctx->r4 = S32(SIGNED(ctx->r7) >> 6);
    // 0x0025B178: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B17C: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B180: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B184: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B188: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B18C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B190: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B194: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B198: beq         $v0, $zero, L_0025B1AC
    if (ctx->r2 == 0) {
        // 0x0025B19C: nop
    
            goto L_0025B1AC;
    }
    // 0x0025B19C: nop

    // 0x0025B1A0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0025B1A4: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x0025B1A8: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_0025B1AC:
    // 0x0025B1AC: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x0025B1B0: beq         $v0, $zero, L_0025B25C
    if (ctx->r2 == 0) {
        // 0x0025B1B4: nop
    
            goto L_0025B25C;
    }
    // 0x0025B1B4: nop

    // 0x0025B1B8: lbu         $a0, 0x65($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X65);
    // 0x0025B1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B1C0: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x0025B1C4: beq         $v1, $v0, L_0025B210
    if (ctx->r3 == ctx->r2) {
        // 0x0025B1C8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0025B210;
    }
    // 0x0025B1C8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0025B1CC: beq         $v0, $zero, L_0025B1E4
    if (ctx->r2 == 0) {
        // 0x0025B1D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B1E4;
    }
    // 0x0025B1D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B1D4: beq         $v1, $zero, L_0025B1F4
    if (ctx->r3 == 0) {
        // 0x0025B1D8: nop
    
            goto L_0025B1F4;
    }
    // 0x0025B1D8: nop

    // 0x0025B1DC: j           L_0025B25C
    // 0x0025B1E0: nop

        goto L_0025B25C;
    // 0x0025B1E0: nop

L_0025B1E4:
    // 0x0025B1E4: beq         $v1, $v0, L_0025B22C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B1E8: nop
    
            goto L_0025B22C;
    }
    // 0x0025B1E8: nop

    // 0x0025B1EC: j           L_0025B25C
    // 0x0025B1F0: nop

        goto L_0025B25C;
    // 0x0025B1F0: nop

L_0025B1F4:
    // 0x0025B1F4: beq         $s3, $zero, L_0025B25C
    if (ctx->r19 == 0) {
        // 0x0025B1F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B25C;
    }
    // 0x0025B1F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B1FC: lb          $v1, 0x54($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X54);
    // 0x0025B200: beq         $v1, $v0, L_0025B25C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B204: addiu       $v0, $zero, 0x3B
        ctx->r2 = ADD32(0, 0X3B);
            goto L_0025B25C;
    }
    // 0x0025B204: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x0025B208: j           L_0025B2B0
    // 0x0025B20C: nop

        goto L_0025B2B0;
    // 0x0025B20C: nop

L_0025B210:
    // 0x0025B210: beq         $s1, $zero, L_0025B25C
    if (ctx->r17 == 0) {
        // 0x0025B214: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B25C;
    }
    // 0x0025B214: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B218: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x0025B21C: beq         $v1, $v0, L_0025B25C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B220: addiu       $v0, $zero, 0x38
        ctx->r2 = ADD32(0, 0X38);
            goto L_0025B25C;
    }
    // 0x0025B220: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x0025B224: j           L_0025B2B0
    // 0x0025B228: nop

        goto L_0025B2B0;
    // 0x0025B228: nop

L_0025B22C:
    // 0x0025B22C: beq         $s2, $zero, L_0025B25C
    if (ctx->r18 == 0) {
        // 0x0025B230: andi        $v0, $a0, 0x4
        ctx->r2 = ctx->r4 & 0X4;
            goto L_0025B25C;
    }
    // 0x0025B230: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x0025B234: bne         $v0, $zero, L_0025B250
    if (ctx->r2 != 0) {
        // 0x0025B238: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0025B250;
    }
    // 0x0025B238: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B23C: lb          $v1, 0x52($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X52);
    // 0x0025B240: beq         $v1, $v0, L_0025B25C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B244: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_0025B25C;
    }
    // 0x0025B244: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x0025B248: j           L_0025B2B0
    // 0x0025B24C: nop

        goto L_0025B2B0;
    // 0x0025B24C: nop

L_0025B250:
    // 0x0025B250: lb          $v1, 0x53($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X53);
    // 0x0025B254: bne         $v1, $v0, L_0025B2B0
    if (ctx->r3 != ctx->r2) {
        // 0x0025B258: addiu       $v0, $zero, 0x3A
        ctx->r2 = ADD32(0, 0X3A);
            goto L_0025B2B0;
    }
    // 0x0025B258: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
L_0025B25C:
    // 0x0025B25C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0025B260: lbu         $v0, -0x5511($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5511);
    // 0x0025B264: beq         $v0, $zero, L_0025B2AC
    if (ctx->r2 == 0) {
        // 0x0025B268: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_0025B2AC;
    }
    // 0x0025B268: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0025B26C: lw          $v0, 0xC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC);
    // 0x0025B270: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B274: beq         $v0, $zero, L_0025B2AC
    if (ctx->r2 == 0) {
        // 0x0025B278: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_0025B2AC;
    }
    // 0x0025B278: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x0025B27C: lb          $v0, 0x4F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4F);
    // 0x0025B280: beq         $v0, $s1, L_0025B2AC
    if (ctx->r2 == ctx->r17) {
        // 0x0025B284: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0025B2AC;
    }
L_0025B284:
    // 0x0025B284: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0025B288: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x0025B28C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0025B290: jal         0x00219F74
    // 0x0025B294: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_00219F74(rdram, ctx);
        goto after_11;
    // 0x0025B294: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_11:
    // 0x0025B298: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0025B29C: bne         $v1, $s1, L_0025B2B0
    if (ctx->r3 != ctx->r17) {
        // 0x0025B2A0: addiu       $v0, $zero, 0x35
        ctx->r2 = ADD32(0, 0X35);
            goto L_0025B2B0;
    }
    // 0x0025B2A0: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x0025B2A4: j           L_0025B2B0
    // 0x0025B2A8: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
        goto L_0025B2B0;
    // 0x0025B2A8: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
L_0025B2AC:
    // 0x0025B2AC: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
L_0025B2B0:
    // 0x0025B2B0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0025B2B4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0025B2B8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0025B2BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0025B2C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025B2C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025B2C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025B2CC: jr          $ra
    // 0x0025B2D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025B2D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0041AD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AD64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0041AD68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041AD6C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0041AD70: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0041AD74: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0041AD78: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x0041AD7C: addiu       $s5, $s5, -0x5524
    ctx->r21 = ADD32(ctx->r21, -0X5524);
    // 0x0041AD80: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0041AD84: addiu       $s6, $s5, -0x4
    ctx->r22 = ADD32(ctx->r21, -0X4);
    // 0x0041AD88: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0041AD8C: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x0041AD90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0041AD94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041AD98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041AD9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041ADA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ADA4: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
L_0041ADA8:
    // 0x0041ADA8: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041ADAC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041ADB0: lw          $s2, -0x6890($at)
    ctx->r18 = MEM_W(ctx->r1, -0X6890);
    // 0x0041ADB4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0041ADB8: jal         0x0029E4C0
    // 0x0041ADBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_0;
    // 0x0041ADBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041ADC0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041ADC4: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, 0X1F8C);
    // 0x0041ADC8: jal         0x0029E4C0
    // 0x0041ADCC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029E4C0(rdram, ctx);
        goto after_1;
    // 0x0041ADCC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041ADD0: beq         $s0, $v0, L_0041ADE0
    if (ctx->r16 == ctx->r2) {
        // 0x0041ADD4: nop
    
            goto L_0041ADE0;
    }
    // 0x0041ADD4: nop

L_0041ADD8:
    // 0x0041ADD8: j           L_0041AE1C
    // 0x0041ADDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041AE1C;
    // 0x0041ADDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041ADE0:
    // 0x0041ADE0: jal         0x0029E4C0
    // 0x0041ADE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_2;
    // 0x0041ADE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041ADE8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041ADEC: beq         $v0, $zero, L_0041AE18
    if (ctx->r2 == 0) {
        // 0x0041ADF0: addu        $v0, $s2, $s1
        ctx->r2 = ADD32(ctx->r18, ctx->r17);
            goto L_0041AE18;
    }
    // 0x0041ADF0: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x0041ADF4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0041ADF8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041ADFC: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x0041AE00: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x0041AE04: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x0041AE08: bne         $v0, $v1, L_0041ADD8
    if (ctx->r2 != ctx->r3) {
        // 0x0041AE0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041ADD8;
    }
    // 0x0041AE0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041AE10: j           L_0041ADE0
    // 0x0041AE14: nop

        goto L_0041ADE0;
    // 0x0041AE14: nop

L_0041AE18:
    // 0x0041AE18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041AE1C:
    // 0x0041AE1C: beql        $v0, $zero, L_0041AE78
    if (ctx->r2 == 0) {
        // 0x0041AE20: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0041AE78;
    }
    goto skip_0;
    // 0x0041AE20: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x0041AE24: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0041AE28: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE2C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE30: lw          $v1, -0x6888($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6888);
    // 0x0041AE34: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041AE38: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x0041AE3C: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0041AE40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0041AE44: sw          $v0, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r2;
    // 0x0041AE48: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE4C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE50: lw          $v0, -0x6884($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6884);
    // 0x0041AE54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041AE58: sw          $s4, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r20;
    // 0x0041AE5C: beq         $v0, $zero, L_0041AE78
    if (ctx->r2 == 0) {
        // 0x0041AE60: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0041AE78;
    }
    // 0x0041AE60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0041AE64: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE68: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE6C: lh          $a0, -0x6882($at)
    ctx->r4 = MEM_H(ctx->r1, -0X6882);
    // 0x0041AE70: jal         0x00275624
    // 0x0041AE74: nop

    func_00275624(rdram, ctx);
        goto after_3;
    // 0x0041AE74: nop

    after_3:
L_0041AE78:
    // 0x0041AE78: sltiu       $v0, $s4, 0xC
    ctx->r2 = ctx->r20 < 0XC ? 1 : 0;
    // 0x0041AE7C: bne         $v0, $zero, L_0041ADA8
    if (ctx->r2 != 0) {
        // 0x0041AE80: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_0041ADA8;
    }
    // 0x0041AE80: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x0041AE84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041AE88: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0041AE8C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0041AE90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041AE94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0041AE98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041AE9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AEA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AEA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AEA8: jr          $ra
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00285A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285A20: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00285A24:
    // 0x00285A24: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285A28: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00285A2C: lbu         $v0, 0x5EA0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5EA0);
    // 0x00285A30: beq         $v0, $zero, L_00285A40
    if (ctx->r2 == 0) {
        // 0x00285A34: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00285A40;
    }
    // 0x00285A34: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00285A38: jr          $ra
    // 0x00285A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00285A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00285A40:
    // 0x00285A40: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00285A44: bne         $v0, $zero, L_00285A24
    if (ctx->r2 != 0) {
        // 0x00285A48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00285A24;
    }
    // 0x00285A48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00285A4C: jr          $ra
    // 0x00285A50: nop

    return;
    // 0x00285A50: nop

;}
RECOMP_FUNC void func_0022C488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022C488: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x0022C48C: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x0022C490: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022C494: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x0022C498: lui         $s6, 0x800F
    ctx->r22 = S32(0X800F << 16);
    // 0x0022C49C: lw          $s6, 0x1CE0($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X1CE0);
    // 0x0022C4A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0022C4A4: sw          $s7, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r23;
    // 0x0022C4A8: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x0022C4AC: sw          $ra, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r31;
    // 0x0022C4B0: sw          $fp, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r30;
    // 0x0022C4B4: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x0022C4B8: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x0022C4BC: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x0022C4C0: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x0022C4C4: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x0022C4C8: sw          $t0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r8;
        turok2_patch_restore_resource_table(rdram, ctx);

    // 0x0022C4CC: lw          $fp, 0xF8($s1)
    ctx->r30 = MEM_W(ctx->r17, 0XF8);
    // 0x0022C4D0: jal         0x002682CC
    // 0x0022C4D4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_002682CC(rdram, ctx);
        goto after_0;
    // 0x0022C4D4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_0:
    // 0x0022C4D8: beq         $v0, $zero, L_0022C4EC
    if (ctx->r2 == 0) {
        // 0x0022C4DC: nop
    
            goto L_0022C4EC;
    }
    // 0x0022C4DC: nop

    // 0x0022C4E0: lb          $t1, 0x195($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X195);
    // 0x0022C4E4: j           L_0022C4F4
    // 0x0022C4E8: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
        goto L_0022C4F4;
    // 0x0022C4E8: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
L_0022C4EC:
    // 0x0022C4EC: lb          $t2, 0x194($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X194);
    // 0x0022C4F0: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
L_0022C4F4:
    // 0x0022C4F4: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0022C4F8: bne         $v0, $zero, L_0022C508
    if (ctx->r2 != 0) {
        // 0x0022C4FC: nop
    
            goto L_0022C508;
    }
    // 0x0022C4FC: nop

    // 0x0022C500: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x0022C504: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_0022C508:
    // 0x0022C508: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x0022C50C: addiu       $s2, $s2, 0x1CF4
    ctx->r18 = ADD32(ctx->r18, 0X1CF4);
    // 0x0022C510: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x0022C514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022C518: beq         $a1, $v0, L_0022C780
    if (ctx->r5 == ctx->r2) {
        // 0x0022C51C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_0022C780;
    }
    // 0x0022C51C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0022C520: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022C524: lbu         $s4, 0x6A($s2)
    ctx->r20 = MEM_BU(ctx->r18, 0X6A);
    // 0x0022C528: beql        $v1, $v0, L_0022C530
    if (ctx->r3 == ctx->r2) {
        // 0x0022C52C: addiu       $s4, $zero, 0x4
        ctx->r20 = ADD32(0, 0X4);
            goto L_0022C530;
    }
    goto skip_0;
    // 0x0022C52C: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    skip_0:
L_0022C530:
    // 0x0022C530: lw          $s0, -0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, -0X14);
    // 0x0022C534: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0022C538: lui         $v1, 0x300
    ctx->r3 = S32(0X300 << 16);
    // 0x0022C53C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022C540: beq         $v0, $zero, L_0022C78C
    if (ctx->r2 == 0) {
        // 0x0022C544: addiu       $s5, $s2, -0x14
        ctx->r21 = ADD32(ctx->r18, -0X14);
            goto L_0022C78C;
    }
    // 0x0022C544: addiu       $s5, $s2, -0x14
    ctx->r21 = ADD32(ctx->r18, -0X14);
    // 0x0022C548: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x0022C54C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0022C550: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x0022C554: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x0022C558: jal         0x0020D908
    // 0x0022C55C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_1;
    // 0x0022C55C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_1:
    // 0x0022C560: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0022C564: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0022C568: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022C56C: beq         $v0, $zero, L_0022C5B4
    if (ctx->r2 == 0) {
        // 0x0022C570: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022C5B4;
    }
    // 0x0022C570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022C574: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x0022C578: lw          $a3, 0x8($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X8);
    // 0x0022C57C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0022C580: lw          $t3, 0xD8($s5)
    ctx->r11 = MEM_W(ctx->r21, 0XD8);
    // 0x0022C584: lw          $t0, 0xDC($s5)
    ctx->r8 = MEM_W(ctx->r21, 0XDC);
    // 0x0022C588: lw          $t1, 0xE0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0XE0);
    // 0x0022C58C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x0022C590: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022C594: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022C598: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0022C59C: lw          $t3, 0xC($s5)
    ctx->r11 = MEM_W(ctx->r21, 0XC);
    // 0x0022C5A0: lw          $t0, 0x10($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X10);
    // 0x0022C5A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x0022C5A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0022C5AC: jal         0x0021B39C
    // 0x0022C5B0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0021B39C(rdram, ctx);
        goto after_2;
    // 0x0022C5B0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_2:
L_0022C5B4:
    // 0x0022C5B4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0022C5B8: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0022C5BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022C5C0: beq         $v0, $zero, L_0022C78C
    if (ctx->r2 == 0) {
        // 0x0022C5C4: addiu       $v0, $zero, 0x12A
        ctx->r2 = ADD32(0, 0X12A);
            goto L_0022C78C;
    }
    // 0x0022C5C4: addiu       $v0, $zero, 0x12A
    ctx->r2 = ADD32(0, 0X12A);
    // 0x0022C5C8: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022C5CC: beq         $v1, $v0, L_0022C5DC
    if (ctx->r3 == ctx->r2) {
        // 0x0022C5D0: addiu       $v0, $zero, 0x132
        ctx->r2 = ADD32(0, 0X132);
            goto L_0022C5DC;
    }
    // 0x0022C5D0: addiu       $v0, $zero, 0x132
    ctx->r2 = ADD32(0, 0X132);
    // 0x0022C5D4: bne         $v1, $v0, L_0022C60C
    if (ctx->r3 != ctx->r2) {
        // 0x0022C5D8: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_0022C60C;
    }
    // 0x0022C5D8: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
L_0022C5DC:
    // 0x0022C5DC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0022C5E0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0022C5E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0022C5E8: bne         $v1, $v0, L_0022C604
    if (ctx->r3 != ctx->r2) {
        // 0x0022C5EC: nop
    
            goto L_0022C604;
    }
    // 0x0022C5EC: nop

    // 0x0022C5F0: lw          $v0, 0x12B0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X12B0);
    // 0x0022C5F4: slti        $s7, $v0, 0x1
    ctx->r23 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x0022C5F8: beq         $s7, $zero, L_0022C604
    if (ctx->r23 == 0) {
        // 0x0022C5FC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_0022C604;
    }
    // 0x0022C5FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0022C600: sw          $v0, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = ctx->r2;
L_0022C604:
    // 0x0022C604: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022C608: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
L_0022C60C:
    // 0x0022C60C: beq         $v1, $v0, L_0022C654
    if (ctx->r3 == ctx->r2) {
        // 0x0022C610: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022C654;
    }
    // 0x0022C610: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022C614: beq         $v1, $v0, L_0022C654
    if (ctx->r3 == ctx->r2) {
        // 0x0022C618: addiu       $v0, $zero, 0x126
        ctx->r2 = ADD32(0, 0X126);
            goto L_0022C654;
    }
    // 0x0022C618: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x0022C61C: beq         $v1, $v0, L_0022C654
    if (ctx->r3 == ctx->r2) {
        // 0x0022C620: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_0022C654;
    }
    // 0x0022C620: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x0022C624: beq         $v1, $v0, L_0022C658
    if (ctx->r3 == ctx->r2) {
        // 0x0022C628: addiu       $a0, $sp, 0xB8
        ctx->r4 = ADD32(ctx->r29, 0XB8);
            goto L_0022C658;
    }
    // 0x0022C628: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x0022C62C: bne         $s7, $zero, L_0022C658
    if (ctx->r23 != 0) {
        // 0x0022C630: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0022C658;
    }
    // 0x0022C630: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0022C634: bne         $v1, $v0, L_0022C790
    if (ctx->r3 != ctx->r2) {
        // 0x0022C638: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0022C790;
    }
    // 0x0022C638: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0022C63C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022C640: lbu         $v0, 0x1D5D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1D5D);
    // 0x0022C644: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0022C648: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0022C64C: bne         $v0, $v1, L_0022C790
    if (ctx->r2 != ctx->r3) {
        // 0x0022C650: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0022C790;
    }
    // 0x0022C650: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0022C654:
    // 0x0022C654: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
L_0022C658:
    // 0x0022C658: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0022C65C: lw          $s0, 0x1CE0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1CE0);
    // 0x0022C660: jal         0x0020C208
    // 0x0022C664: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_0020C208(rdram, ctx);
        goto after_3;
    // 0x0022C664: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x0022C668: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x0022C66C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0022C670: addiu       $a1, $a1, 0x1CE8
    ctx->r5 = ADD32(ctx->r5, 0X1CE8);
    // 0x0022C674: jal         0x0020F85C
    // 0x0022C678: addiu       $a2, $s1, 0x34
    ctx->r6 = ADD32(ctx->r17, 0X34);
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x0022C678: addiu       $a2, $s1, 0x34
    ctx->r6 = ADD32(ctx->r17, 0X34);
    after_4:
    // 0x0022C67C: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x0022C680: addiu       $t2, $t2, 0x1DB8
    ctx->r10 = ADD32(ctx->r10, 0X1DB8);
    // 0x0022C684: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x0022C688: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x0022C68C: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x0022C690: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x0022C694: sw          $t0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r8;
    // 0x0022C698: sw          $t1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r9;
    // 0x0022C69C: jal         0x0020F040
    // 0x0022C6A0: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x0022C6A0: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    after_5:
    // 0x0022C6A4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x0022C6A8: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x0022C6AC: jal         0x0020FAFC
    // 0x0022C6B0: addiu       $a2, $s1, 0x18
    ctx->r6 = ADD32(ctx->r17, 0X18);
    func_0020FAFC(rdram, ctx);
        goto after_6;
    // 0x0022C6B0: addiu       $a2, $s1, 0x18
    ctx->r6 = ADD32(ctx->r17, 0X18);
    after_6:
    // 0x0022C6B4: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022C6B8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0022C6BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022C6C0: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x0022C6C4: sw          $s0, 0x114($s1)
    MEM_W(0X114, ctx->r17) = ctx->r16;
    // 0x0022C6C8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022C6CC: lbu         $v0, 0x1CF7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1CF7);
    // 0x0022C6D0: sb          $v0, 0x1AD($s1)
    MEM_B(0X1AD, ctx->r17) = ctx->r2;
    // 0x0022C6D4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0022C6D8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0022C6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022C6E0: bne         $v1, $v0, L_0022C714
    if (ctx->r3 != ctx->r2) {
        // 0x0022C6E4: nop
    
            goto L_0022C714;
    }
    // 0x0022C6E4: nop

    // 0x0022C6E8: lw          $a2, 0x10C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10C);
    // 0x0022C6EC: beq         $a2, $zero, L_0022C700
    if (ctx->r6 == 0) {
        // 0x0022C6F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022C700;
    }
    // 0x0022C6F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022C6F4: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0022C6F8: j           L_0022C70C
    // 0x0022C6FC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
        goto L_0022C70C;
    // 0x0022C6FC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0022C700:
    // 0x0022C700: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0022C704: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0022C708: addiu       $a2, $a2, 0x1CE8
    ctx->r6 = ADD32(ctx->r6, 0X1CE8);
L_0022C70C:
    // 0x0022C70C: jal         0x0025E52C
    // 0x0022C710: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_7;
    // 0x0022C710: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_7:
L_0022C714:
    // 0x0022C714: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022C718: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022C71C: bne         $v1, $v0, L_0022C738
    if (ctx->r3 != ctx->r2) {
        // 0x0022C720: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0022C738;
    }
    // 0x0022C720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0022C724: bne         $s4, $v0, L_0022C738
    if (ctx->r20 != ctx->r2) {
        // 0x0022C728: lui         $v1, 0x400
        ctx->r3 = S32(0X400 << 16);
            goto L_0022C738;
    }
    // 0x0022C728: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x0022C72C: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022C730: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022C734: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_0022C738:
    // 0x0022C738: lbu         $v0, 0x1B5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1B5);
    // 0x0022C73C: beq         $v0, $zero, L_0022C75C
    if (ctx->r2 == 0) {
        // 0x0022C740: nop
    
            goto L_0022C75C;
    }
    // 0x0022C740: nop

    // 0x0022C744: jal         0x002327F4
    // 0x0022C748: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002327F4(rdram, ctx);
        goto after_8;
    // 0x0022C748: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0022C74C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022C750: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x0022C754: jal         0x00234E48
    // 0x0022C758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00234E48(rdram, ctx);
        goto after_9;
    // 0x0022C758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
L_0022C75C:
    // 0x0022C75C: lw          $a1, 0x118($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X118);
    // 0x0022C760: beq         $a1, $zero, L_0022C790
    if (ctx->r5 == 0) {
        // 0x0022C764: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0022C790;
    }
    // 0x0022C764: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0022C768: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0022C76C: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x0022C770: jal         0x00228B4C
    // 0x0022C774: nop

    func_00228B4C(rdram, ctx);
        goto after_10;
    // 0x0022C774: nop

    after_10:
    // 0x0022C778: j           L_0022C78C
    // 0x0022C77C: sw          $zero, 0x118($s1)
    MEM_W(0X118, ctx->r17) = 0;
        goto L_0022C78C;
    // 0x0022C77C: sw          $zero, 0x118($s1)
    MEM_W(0X118, ctx->r17) = 0;
L_0022C780:
    // 0x0022C780: jal         0x00245724
    // 0x0022C784: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_00245724(rdram, ctx);
        goto after_11;
    // 0x0022C784: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_11:
    // 0x0022C788: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_0022C78C:
    // 0x0022C78C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_0022C790:
    // 0x0022C790: bne         $s4, $v0, L_0022C7A8
    if (ctx->r20 != ctx->r2) {
        // 0x0022C794: nop
    
            goto L_0022C7A8;
    }
    // 0x0022C794: nop

    // 0x0022C798: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022C79C: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x0022C7A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x0022C7A4: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_0022C7A8:
    // 0x0022C7A8: jal         0x002325F0
    // 0x0022C7AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002325F0(rdram, ctx);
        goto after_12;
    // 0x0022C7AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x0022C7B0: beq         $v0, $zero, L_0022C7C8
    if (ctx->r2 == 0) {
        // 0x0022C7B4: slti        $v0, $s4, 0x6
        ctx->r2 = SIGNED(ctx->r20) < 0X6 ? 1 : 0;
            goto L_0022C7C8;
    }
    // 0x0022C7B4: slti        $v0, $s4, 0x6
    ctx->r2 = SIGNED(ctx->r20) < 0X6 ? 1 : 0;
    // 0x0022C7B8: beq         $v0, $zero, L_0022C7C8
    if (ctx->r2 == 0) {
        // 0x0022C7BC: slti        $v0, $s4, 0x4
        ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
            goto L_0022C7C8;
    }
    // 0x0022C7BC: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x0022C7C0: beql        $v0, $zero, L_0022C7C8
    if (ctx->r2 == 0) {
        // 0x0022C7C4: addiu       $s4, $zero, 0x6
        ctx->r20 = ADD32(0, 0X6);
            goto L_0022C7C8;
    }
    goto skip_1;
    // 0x0022C7C4: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    skip_1:
L_0022C7C8:
    // 0x0022C7C8: sll         $a1, $s4, 1
    ctx->r5 = S32(ctx->r20 << 1);
    // 0x0022C7CC: lw          $v0, 0x18($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X18);
    // 0x0022C7D0: sll         $a0, $s4, 3
    ctx->r4 = S32(ctx->r20 << 3);
    // 0x0022C7D4: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x0022C7D8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0022C7DC: lhu         $s3, 0x70($v1)
    ctx->r19 = MEM_HU(ctx->r3, 0X70);
    // 0x0022C7E0: lhu         $s2, 0x8C($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X8C);
    // 0x0022C7E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0022C7E8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x0022C7EC: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0022C7F0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x0022C7F4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x0022C7F8: lw          $v0, 0x18($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X18);
    // 0x0022C7FC: lbu         $v1, 0x0($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X0);
    // 0x0022C800: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x0022C804: lhu         $s5, 0xA8($v0)
    ctx->r21 = MEM_HU(ctx->r2, 0XA8);
    // 0x0022C808: bne         $v1, $a0, L_0022C84C
    if (ctx->r3 != ctx->r4) {
        // 0x0022C80C: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_0022C84C;
    }
    // 0x0022C80C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0022C810: lw          $v0, 0x240($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X240);
    // 0x0022C814: beq         $v0, $zero, L_0022C828
    if (ctx->r2 == 0) {
        // 0x0022C818: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0022C828;
    }
    // 0x0022C818: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0022C81C: addiu       $a1, $s6, 0x140
    ctx->r5 = ADD32(ctx->r22, 0X140);
    // 0x0022C820: jalr        $v0
    // 0x0022C824: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x0022C824: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_13:
L_0022C828:
    // 0x0022C828: jal         0x00268148
    // 0x0022C82C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_00268148(rdram, ctx);
        goto after_14;
    // 0x0022C82C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_14:
    // 0x0022C830: bnel        $v0, $zero, L_0022C838
    if (ctx->r2 != 0) {
        // 0x0022C834: sw          $zero, 0x10C($sp)
        MEM_W(0X10C, ctx->r29) = 0;
            goto L_0022C838;
    }
    goto skip_2;
    // 0x0022C834: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    skip_2:
L_0022C838:
    // 0x0022C838: lw          $v0, 0x140($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X140);
    // 0x0022C83C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0022C840: bnel        $v0, $zero, L_0022C848
    if (ctx->r2 != 0) {
        // 0x0022C844: sw          $zero, 0x10C($sp)
        MEM_W(0X10C, ctx->r29) = 0;
            goto L_0022C848;
    }
    goto skip_3;
    // 0x0022C844: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    skip_3:
L_0022C848:
    // 0x0022C848: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_0022C84C:
    // 0x0022C84C: beq         $s2, $v0, L_0022C8F8
    if (ctx->r18 == ctx->r2) {
        // 0x0022C850: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_0022C8F8;
    }
    // 0x0022C850: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x0022C854: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022C858: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022C85C: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x0022C860: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0022C864: beq         $v0, $zero, L_0022C898
    if (ctx->r2 == 0) {
        // 0x0022C868: addiu       $v0, $zero, 0x56
        ctx->r2 = ADD32(0, 0X56);
            goto L_0022C898;
    }
    // 0x0022C868: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x0022C86C: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0022C870: bne         $v1, $v0, L_0022C89C
    if (ctx->r3 != ctx->r2) {
        // 0x0022C874: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_0022C89C;
    }
    // 0x0022C874: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x0022C878: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x0022C87C: lwc1        $f1, 0x1BC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X1BC);
    // 0x0022C880: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022C884: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022C888: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022C88C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022C890: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0022C894: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
L_0022C898:
    // 0x0022C898: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
L_0022C89C:
    // 0x0022C89C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022C8A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022C8A4: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x0022C8A8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0022C8AC: beq         $v0, $zero, L_0022C8B8
    if (ctx->r2 == 0) {
        // 0x0022C8B0: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0022C8B8;
    }
    // 0x0022C8B0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0022C8B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0022C8B8:
    // 0x0022C8B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022C8BC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0022C8C0: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x0022C8C4: addiu       $t3, $t3, 0x1CE8
    ctx->r11 = ADD32(ctx->r11, 0X1CE8);
    // 0x0022C8C8: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x0022C8CC: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022C8D0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x0022C8D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0022C8D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022C8DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0022C8E0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0022C8E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x0022C8E8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0022C8EC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0022C8F0: jal         0x00236EA0
    // 0x0022C8F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_15;
    // 0x0022C8F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_15:
L_0022C8F8:
    // 0x0022C8F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0022C8FC: beq         $s4, $v0, L_0022C9C0
    if (ctx->r20 == ctx->r2) {
        // 0x0022C900: ori         $s0, $zero, 0xFFFF
        ctx->r16 = 0 | 0XFFFF;
            goto L_0022C9C0;
    }
    // 0x0022C900: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
    // 0x0022C904: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0022C908: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0022C90C: beq         $v0, $zero, L_0022C934
    if (ctx->r2 == 0) {
        // 0x0022C910: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_0022C934;
    }
    // 0x0022C910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0022C914: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x0022C918: lb          $v1, 0x195($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X195);
    // 0x0022C91C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0022C920: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x0022C924: xori        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 ^ 0XB;
    // 0x0022C928: bne         $t0, $v1, L_0022C934
    if (ctx->r8 != ctx->r3) {
        // 0x0022C92C: sltu        $a0, $zero, $v0
        ctx->r4 = 0 < ctx->r2 ? 1 : 0;
            goto L_0022C934;
    }
    // 0x0022C92C: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
    // 0x0022C930: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0022C934:
    // 0x0022C934: beq         $a0, $zero, L_0022C9BC
    if (ctx->r4 == 0) {
        // 0x0022C938: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_0022C9BC;
    }
    // 0x0022C938: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x0022C93C: lw          $a0, 0x18($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X18);
    // 0x0022C940: lhu         $a2, 0x94($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X94);
    // 0x0022C944: beq         $a2, $v0, L_0022C9BC
    if (ctx->r6 == ctx->r2) {
        // 0x0022C948: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_0022C9BC;
    }
    // 0x0022C948: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x0022C94C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022C950: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022C954: lw          $v1, -0x2F7C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X2F7C);
    // 0x0022C958: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x0022C95C: lw          $t2, 0x24($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X24);
    // 0x0022C960: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x0022C964: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x0022C968: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0022C96C: beq         $v0, $zero, L_0022C9BC
    if (ctx->r2 == 0) {
        // 0x0022C970: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_0022C9BC;
    }
    // 0x0022C970: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0022C974: beq         $v0, $zero, L_0022C980
    if (ctx->r2 == 0) {
        // 0x0022C978: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_0022C980;
    }
    // 0x0022C978: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0022C97C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0022C980:
    // 0x0022C980: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0022C984: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0022C988: addiu       $t0, $t0, 0x1CE8
    ctx->r8 = ADD32(ctx->r8, 0X1CE8);
    // 0x0022C98C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x0022C990: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x0022C994: lw          $t3, 0x8($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X8);
    // 0x0022C998: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0022C99C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x0022C9A0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x0022C9A4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x0022C9A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x0022C9AC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0022C9B0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x0022C9B4: jal         0x00236EA0
    // 0x0022C9B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_16;
    // 0x0022C9B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_16:
L_0022C9BC:
    // 0x0022C9BC: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
L_0022C9C0:
    // 0x0022C9C0: beq         $s3, $s0, L_0022C9D8
    if (ctx->r19 == ctx->r16) {
        // 0x0022C9C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0022C9D8;
    }
    // 0x0022C9C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022C9C8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0022C9CC: lw          $a3, 0x10C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10C);
    // 0x0022C9D0: jal         0x00229340
    // 0x0022C9D4: addiu       $a2, $zero, -0x8
    ctx->r6 = ADD32(0, -0X8);
    entry_00229340(rdram, ctx);
        goto after_17;
    // 0x0022C9D4: addiu       $a2, $zero, -0x8
    ctx->r6 = ADD32(0, -0X8);
    after_17:
L_0022C9D8:
    // 0x0022C9D8: beq         $s5, $s0, L_0022CA08
    if (ctx->r21 == ctx->r16) {
        // 0x0022C9DC: sll         $a0, $s5, 16
        ctx->r4 = S32(ctx->r21 << 16);
            goto L_0022CA08;
    }
    // 0x0022C9DC: sll         $a0, $s5, 16
    ctx->r4 = S32(ctx->r21 << 16);
    // 0x0022C9E0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0022C9E4: addiu       $v0, $v0, 0x1CE8
    ctx->r2 = ADD32(ctx->r2, 0X1CE8);
    // 0x0022C9E8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0022C9EC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x0022C9F0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x0022C9F4: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x0022C9F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0022C9FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0022CA00: jal         0x00275544
    // 0x0022CA04: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00275544(rdram, ctx);
        goto after_18;
    // 0x0022CA04: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_18:
L_0022CA08:
    // 0x0022CA08: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x0022CA0C: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x0022CA10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022CA14: bne         $v0, $zero, L_0022CA60
    if (ctx->r2 != 0) {
        // 0x0022CA18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022CA60;
    }
    // 0x0022CA18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022CA1C: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x0022CA20: beq         $t1, $v0, L_0022CA48
    if (ctx->r9 == ctx->r2) {
        // 0x0022CA24: nop
    
            goto L_0022CA48;
    }
    // 0x0022CA24: nop

    // 0x0022CA28: beq         $s2, $s0, L_0022CA60
    if (ctx->r18 == ctx->r16) {
        // 0x0022CA2C: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_0022CA60;
    }
    // 0x0022CA2C: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x0022CA30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0022CA34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022CA38: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x0022CA3C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0022CA40: beq         $v0, $zero, L_0022CA60
    if (ctx->r2 == 0) {
        // 0x0022CA44: nop
    
            goto L_0022CA60;
    }
    // 0x0022CA44: nop

L_0022CA48:
    // 0x0022CA48: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0022CA4C: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x0022CA50: jal         0x0022F1C8
    // 0x0022CA54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022F1C8(rdram, ctx);
        goto after_19;
    // 0x0022CA54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_19:
    // 0x0022CA58: jal         0x00232B40
    // 0x0022CA5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00232B40(rdram, ctx);
        goto after_20;
    // 0x0022CA5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_20:
L_0022CA60:
    // 0x0022CA60: lw          $ra, 0x134($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X134);
    // 0x0022CA64: lw          $fp, 0x130($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X130);
    // 0x0022CA68: lw          $s7, 0x12C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X12C);
    // 0x0022CA6C: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x0022CA70: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x0022CA74: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x0022CA78: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x0022CA7C: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x0022CA80: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x0022CA84: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x0022CA88: jr          $ra
    // 0x0022CA8C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x0022CA8C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_00407B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00407B84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00407B88: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00407B8C: beq         $v0, $zero, L_00407BB0
    if (ctx->r2 == 0) {
        // 0x00407B90: nop
    
            goto L_00407BB0;
    }
    // 0x00407B90: nop

    // 0x00407B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00407B98: lbu         $v0, -0x62E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X62E);
    // 0x00407B9C: bne         $v0, $zero, L_00407BA8
    if (ctx->r2 != 0) {
        // 0x00407BA0: addiu       $a2, $zero, 0x13
        ctx->r6 = ADD32(0, 0X13);
            goto L_00407BA8;
    }
    // 0x00407BA0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x00407BA4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00407BA8:
    // 0x00407BA8: jal         0x00243414
    // 0x00407BAC: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00407BAC: nop

    after_0:
L_00407BB0:
    // 0x00407BB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00407BB4: jr          $ra
    // 0x00407BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00407BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025BE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025BE88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025BE8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025BE90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025BE94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025BE98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025BE9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025BEA0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0025BEA4: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0025BEA8: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    // 0x0025BEAC: addiu       $v1, $v1, -0x44E
    ctx->r3 = ADD32(ctx->r3, -0X44E);
    // 0x0025BEB0: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0025BEB4: beq         $v0, $zero, L_0025BF60
    if (ctx->r2 == 0) {
        // 0x0025BEB8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0025BF60;
    }
    // 0x0025BEB8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025BEBC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0025BEC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025BEC4: addu        $at, $at, $v0
    gpr jr_addend_0025BECC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025BEC8: lw          $v0, 0x7590($at)
    ctx->r2 = ADD32(ctx->r1, 0X7590);
    // 0x0025BECC: jr          $v0
    // 0x0025BED0: nop

    switch (jr_addend_0025BECC >> 2) {
        case 0: goto L_0025BEE8; break;
        case 1: goto L_0025BF60; break;
        case 2: goto L_0025BF10; break;
        case 3: goto L_0025BED4; break;
        case 4: goto L_0025BF60; break;
        case 5: goto L_0025BEFC; break;
        case 6: goto L_0025BF24; break;
        case 7: goto L_0025BF38; break;
        case 8: goto L_0025BF4C; break;
        default: switch_error(__func__, 0x0025BECC, 0x800A7590);
    }
    // 0x0025BED0: nop

L_0025BED4:
    // 0x0025BED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BED8: jal         0x00402888
    // 0x0025BEDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00402888(rdram, ctx);
        goto after_0;
    // 0x0025BEDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0025BEE0: j           L_0025BFB0
    // 0x0025BEE4: nop

        goto L_0025BFB0;
    // 0x0025BEE4: nop

L_0025BEE8:
    // 0x0025BEE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BEEC: jal         0x00409340
    // 0x0025BEF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00409340(rdram, ctx);
        goto after_1;
    // 0x0025BEF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025BEF4: j           L_0025BFB0
    // 0x0025BEF8: nop

        goto L_0025BFB0;
    // 0x0025BEF8: nop

L_0025BEFC:
    // 0x0025BEFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF00: jal         0x00403CF8
    // 0x0025BF04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00403CF8(rdram, ctx);
        goto after_2;
    // 0x0025BF04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0025BF08: j           L_0025BFB0
    // 0x0025BF0C: nop

        goto L_0025BFB0;
    // 0x0025BF0C: nop

L_0025BF10:
    // 0x0025BF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF14: jal         0x0040D5C4
    // 0x0025BF18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0040D5C4(rdram, ctx);
        goto after_3;
    // 0x0025BF18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0025BF1C: j           L_0025BFB0
    // 0x0025BF20: nop

        goto L_0025BFB0;
    // 0x0025BF20: nop

L_0025BF24:
    // 0x0025BF24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF28: jal         0x0040D6A0
    // 0x0025BF2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0040D6A0(rdram, ctx);
        goto after_4;
    // 0x0025BF2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0025BF30: j           L_0025BFB0
    // 0x0025BF34: nop

        goto L_0025BFB0;
    // 0x0025BF34: nop

L_0025BF38:
    // 0x0025BF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF3C: jal         0x0040D7A8
    // 0x0025BF40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0040D7A8(rdram, ctx);
        goto after_5;
    // 0x0025BF40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0025BF44: j           L_0025BFB0
    // 0x0025BF48: nop

        goto L_0025BFB0;
    // 0x0025BF48: nop

L_0025BF4C:
    // 0x0025BF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF50: jal         0x0040D8B0
    // 0x0025BF54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0040D8B0(rdram, ctx);
        goto after_6;
    // 0x0025BF54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0025BF58: j           L_0025BFB0
    // 0x0025BF5C: nop

        goto L_0025BFB0;
    // 0x0025BF5C: nop

L_0025BF60:
    // 0x0025BF60: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x0025BF64: addiu       $v0, $zero, 0x467
    ctx->r2 = ADD32(0, 0X467);
    // 0x0025BF68: bne         $v1, $v0, L_0025BF80
    if (ctx->r3 != ctx->r2) {
        // 0x0025BF6C: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_0025BF80;
    }
    // 0x0025BF6C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0025BF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025BF78: j           L_0025BFA4
    // 0x0025BF7C: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
        goto L_0025BFA4;
    // 0x0025BF7C: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
L_0025BF80:
    // 0x0025BF80: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025BF84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025BF88: beq         $v0, $zero, L_0025BF9C
    if (ctx->r2 == 0) {
        // 0x0025BF8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025BF9C;
    }
    // 0x0025BF8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BF90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025BF94: j           L_0025BFA4
    // 0x0025BF98: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_0025BFA4;
    // 0x0025BF98: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_0025BF9C:
    // 0x0025BF9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025BFA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_0025BFA4:
    // 0x0025BFA4: jal         0x00243414
    // 0x0025BFA8: nop

    func_00243414(rdram, ctx);
        goto after_7;
    // 0x0025BFA8: nop

    after_7:
    // 0x0025BFAC: sb          $zero, 0x37($s1)
    MEM_B(0X37, ctx->r17) = 0;
L_0025BFB0:
    // 0x0025BFB0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0025BFB4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0025BFB8: bne         $v0, $zero, L_0025BFD8
    if (ctx->r2 != 0) {
        // 0x0025BFBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025BFD8;
    }
    // 0x0025BFBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025BFC0: sb          $v0, 0x37($s1)
    MEM_B(0X37, ctx->r17) = ctx->r2;
    // 0x0025BFC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025BFC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025BFCC: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x0025BFD0: jal         0x0025E52C
    // 0x0025BFD4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_8;
    // 0x0025BFD4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
L_0025BFD8:
    // 0x0025BFD8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025BFDC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025BFE0: jal         0x00220408
    // 0x0025BFE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_9;
    // 0x0025BFE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0025BFE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0025BFEC: bne         $v0, $v1, L_0025C000
    if (ctx->r2 != ctx->r3) {
        // 0x0025BFF0: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_0025C000;
    }
    // 0x0025BFF0: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0025BFF4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025BFF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025BFFC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_0025C000:
    // 0x0025C000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025C004: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025C008: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025C00C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025C010: jr          $ra
    // 0x0025C014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025C014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026EE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026EE44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026EE48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026EE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026EE50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0026EE54: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0026EE58: beq         $v1, $zero, L_0026EE70
    if (ctx->r3 == 0) {
        // 0x0026EE5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026EE70;
    }
    // 0x0026EE5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026EE60: beq         $v1, $v0, L_0026EEAC
    if (ctx->r3 == ctx->r2) {
        // 0x0026EE64: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026EEAC;
    }
    // 0x0026EE64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026EE68: j           L_0026EF20
    // 0x0026EE6C: nop

        goto L_0026EF20;
    // 0x0026EE6C: nop

L_0026EE70:
    // 0x0026EE70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0026EE74: lwc1        $f2, -0x4F5C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4F5C);
    // 0x0026EE78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EE7C: lwc1        $f0, -0x7F90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F90);
    // 0x0026EE80: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0026EE84: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026EE88: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026EE8C: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026EE90: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x0026EE94: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026EE98: nop

    // 0x0026EE9C: bc1fl       L_0026EF20
    if (!c1cs) {
        // 0x0026EEA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0026EF20;
    }
    goto skip_0;
    // 0x0026EEA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026EEA4: j           L_0026EF20
    // 0x0026EEA8: nop

        goto L_0026EF20;
    // 0x0026EEA8: nop

L_0026EEAC:
    // 0x0026EEAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0026EEB0: lwc1        $f2, -0x4F5C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4F5C);
    // 0x0026EEB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EEB8: lwc1        $f0, -0x7F8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F8C);
    // 0x0026EEBC: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0026EEC0: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0026EEC4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0026EEC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026EECC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0026EED0: nop

    // 0x0026EED4: bc1f        L_0026EF1C
    if (!c1cs) {
        // 0x0026EED8: swc1        $f1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0026EF1C;
    }
    // 0x0026EED8: swc1        $f1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0026EEDC: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0026EEE0: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0026EEE4: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x0026EEE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x0026EEEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026EEF0: lwc1        $f0, -0x7F88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F88);
    // 0x0026EEF4: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0026EEF8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0026EEFC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x0026EF00: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x0026EF04: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x0026EF08: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0026EF0C: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x0026EF10: jal         0x002119FC
    // 0x0026EF14: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0026EF14: nop

    after_0:
    // 0x0026EF18: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_0026EF1C:
    // 0x0026EF1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0026EF20:
    // 0x0026EF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0026EF24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026EF28: jr          $ra
    // 0x0026EF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026EF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00269C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00269C3C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x00269C40: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x00269C44: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x00269C48: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x00269C4C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x00269C50: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00269C54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00269C58: bne         $s0, $zero, L_00269C6C
    if (ctx->r16 != 0) {
        // 0x00269C5C: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_00269C6C;
    }
    // 0x00269C5C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x00269C60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00269C64: j           L_00269DD8
    // 0x00269C68: nop

        goto L_00269DD8;
    // 0x00269C68: nop

L_00269C6C:
    // 0x00269C6C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00269C70: lw          $v0, 0x2600($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2600);
    // 0x00269C74: beq         $s0, $v0, L_00269D1C
    if (ctx->r16 == ctx->r2) {
        // 0x00269C78: addiu       $a1, $sp, 0x40
        ctx->r5 = ADD32(ctx->r29, 0X40);
            goto L_00269D1C;
    }
    // 0x00269C78: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x00269C7C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00269C80: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00269C84: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00269C88: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00269C8C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269C90: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x00269C94: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00269C98: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00269C9C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00269CA0: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00269CA4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269CA8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00269CAC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00269CB0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00269CB4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00269CB8: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x00269CBC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269CC0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x00269CC4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269CC8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269CCC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00269CD0: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00269CD4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269CD8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x00269CDC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269CE0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269CE4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00269CE8: lwc1        $f1, 0xC($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0XC);
    // 0x00269CEC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269CF0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x00269CF4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269CF8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269CFC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00269D00: lwc1        $f1, 0x8($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X8);
    // 0x00269D04: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00269D08: addiu       $a0, $a0, 0x2000
    ctx->r4 = ADD32(ctx->r4, 0X2000);
    // 0x00269D0C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00269D10: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x00269D14: jal         0x0020EFDC
    // 0x00269D18: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x00269D18: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_0:
L_00269D1C:
    // 0x00269D1C: lui         $t2, 0x800F
    ctx->r10 = S32(0X800F << 16);
    // 0x00269D20: addiu       $t2, $t2, 0x2000
    ctx->r10 = ADD32(ctx->r10, 0X2000);
    // 0x00269D24: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x00269D28: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x00269D2C: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x00269D30: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x00269D34: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00269D38: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00269D3C: lwc1        $f5, 0x14($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00269D40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00269D44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00269D48: sw          $s0, 0x2600($at)
    MEM_W(0X2600, ctx->r1) = ctx->r16;
    // 0x00269D4C: c.eq.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl == ctx->f0.fl;
    // 0x00269D50: nop

    // 0x00269D54: bc1t        L_00269DAC
    if (c1cs) {
        // 0x00269D58: nop
    
            goto L_00269DAC;
    }
    // 0x00269D58: nop

    // 0x00269D5C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00269D60: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00269D64: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x00269D68: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00269D6C: lwc1        $f3, 0xC($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00269D70: swc1        $f3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00269D74: mul.s       $f3, $f3, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f5.fl);
    // 0x00269D78: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00269D7C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00269D80: sub.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x00269D84: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00269D88: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00269D8C: sub.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f21.fl;
    // 0x00269D90: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x00269D94: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00269D98: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00269D9C: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00269DA0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x00269DA4: j           L_00269DD8
    // 0x00269DA8: div.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f5.fl);
        goto L_00269DD8;
    // 0x00269DA8: div.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f5.fl);
L_00269DAC:
    // 0x00269DAC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00269DB0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00269DB4: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00269DB8: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00269DBC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00269DC0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00269DC4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00269DC8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00269DCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00269DD0: lwc1        $f0, 0x7F68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7F68);
    // 0x00269DD4: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00269DD8:
    // 0x00269DD8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x00269DDC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00269DE0: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x00269DE4: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x00269DE8: jr          $ra
    // 0x00269DEC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00269DEC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_00279528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00279528: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x0027952C: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x00279530: addu        $t2, $a1, $zero
    ctx->r10 = ADD32(ctx->r5, 0);
    // 0x00279534: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x00279538: mtc1        $a3, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r7;
    // 0x0027953C: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00279540: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00279544: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00279548: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x0027954C: lwc1        $f5, 0x24($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00279550: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x00279554: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x00279558: c.eq.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl == ctx->f1.fl;
    // 0x0027955C: nop

    // 0x00279560: bc1t        L_0027957C
    if (c1cs) {
        // 0x00279564: sw          $s0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r16;
            goto L_0027957C;
    }
    // 0x00279564: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x00279568: mtc1        $t6, $f0
    ctx->f0.u32l = ctx->r14;
    // 0x0027956C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00279570: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00279574: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00279578: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_0027957C:
    // 0x0027957C: c.eq.s      $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f5.fl == ctx->f1.fl;
    // 0x00279580: nop

    // 0x00279584: bc1t        L_002795A0
    if (c1cs) {
        // 0x00279588: addiu       $t5, $zero, 0x400
        ctx->r13 = ADD32(0, 0X400);
            goto L_002795A0;
    }
    // 0x00279588: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x0027958C: mtc1        $t5, $f0
    ctx->f0.u32l = ctx->r13;
    // 0x00279590: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00279594: div.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f5.fl);
    // 0x00279598: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027959C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_002795A0:
    // 0x002795A0: lui         $a2, 0xF590
    ctx->r6 = S32(0XF590 << 16);
    // 0x002795A4: ori         $a2, $a2, 0x100
    ctx->r6 = ctx->r6 | 0X100;
    // 0x002795A8: addu        $t1, $t0, $zero
    ctx->r9 = ADD32(ctx->r8, 0);
    // 0x002795AC: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    // 0x002795B0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002795B4: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x002795B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x002795BC: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x002795C0: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x002795C4: mtc1        $t7, $f0
    ctx->f0.u32l = ctx->r15;
    // 0x002795C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002795CC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x002795D0: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x002795D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002795D8: lwc1        $f2, -0x7C14($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7C14);
    // 0x002795DC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002795E0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002795E4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002795E8: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x002795EC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002795F0: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x002795F4: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x002795F8: lui         $t2, 0x700
    ctx->r10 = S32(0X700 << 16);
    // 0x002795FC: mul.s       $f3, $f7, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = MUL_S(ctx->f7.fl, ctx->f2.fl);
    // 0x00279600: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00279604: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00279608: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x0027960C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00279610: add.s       $f1, $f6, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f6.fl + ctx->f1.fl;
    // 0x00279614: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x00279618: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027961C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00279620: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00279624: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00279628: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0027962C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00279630: add.s       $f0, $f7, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f7.fl + ctx->f0.fl;
    // 0x00279634: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00279638: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0027963C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00279640: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x00279644: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x00279648: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0027964C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x00279650: trunc.w.s   $f8, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    ctx->f8.u32l = TRUNC_W_S(ctx->f3.fl);
    // 0x00279654: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x00279658: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027965C: mfc1        $s0, $f8
    ctx->r16 = (int32_t)ctx->f8.u32l;
    // 0x00279660: bgez        $t0, L_0027966C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x00279664: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_0027966C;
    }
    // 0x00279664: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00279668: addiu       $t1, $t0, 0xF
    ctx->r9 = ADD32(ctx->r8, 0XF);
L_0027966C:
    // 0x0027966C: sra         $a1, $t1, 4
    ctx->r5 = S32(SIGNED(ctx->r9) >> 4);
    // 0x00279670: blez        $a1, L_0027967C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00279674: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_0027967C;
    }
    // 0x00279674: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x00279678: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_0027967C:
    // 0x0027967C: mult        $t0, $t7
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279680: mflo        $s1
    ctx->r17 = lo;
    // 0x00279684: addiu       $v0, $s1, 0x3
    ctx->r2 = ADD32(ctx->r17, 0X3);
    // 0x00279688: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x0027968C: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x00279690: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x00279694: beql        $v0, $zero, L_0027969C
    if (ctx->r2 == 0) {
        // 0x00279698: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_0027969C;
    }
    goto skip_0;
    // 0x00279698: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_0:
L_0027969C:
    // 0x0027969C: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x002796A0: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x002796A4: blez        $a1, L_002796E8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x002796A8: or          $a0, $v0, $t2
        ctx->r4 = ctx->r2 | ctx->r10;
            goto L_002796E8;
    }
    // 0x002796A8: or          $a0, $v0, $t2
    ctx->r4 = ctx->r2 | ctx->r10;
    // 0x002796AC: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x002796B0: bne         $a1, $zero, L_002796BC
    if (ctx->r5 != 0) {
        // 0x002796B4: nop
    
            goto L_002796BC;
    }
    // 0x002796B4: nop

    // 0x002796B8: break       7
    do_break(2594488);
L_002796BC:
    // 0x002796BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x002796C0: bne         $a1, $at, L_002796D4
    if (ctx->r5 != ctx->r1) {
        // 0x002796C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_002796D4;
    }
    // 0x002796C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x002796C8: bne         $v1, $at, L_002796D4
    if (ctx->r3 != ctx->r1) {
        // 0x002796CC: nop
    
            goto L_002796D4;
    }
    // 0x002796CC: nop

    // 0x002796D0: break       6
    do_break(2594512);
L_002796D4:
    // 0x002796D4: mflo        $v0
    ctx->r2 = lo;
    // 0x002796D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002796DC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002796E0: j           L_002796F4
    // 0x002796E4: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
        goto L_002796F4;
    // 0x002796E4: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_002796E8:
    // 0x002796E8: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x002796EC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x002796F0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_002796F4:
    // 0x002796F4: lui         $a2, 0xF580
    ctx->r6 = S32(0XF580 << 16);
    // 0x002796F8: ori         $a2, $a2, 0x100
    ctx->r6 = ctx->r6 | 0X100;
    // 0x002796FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00279700: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x00279704: addu        $t2, $t0, $zero
    ctx->r10 = ADD32(ctx->r8, 0);
    // 0x00279708: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027970C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x00279710: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x00279714: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00279718: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x0027971C: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x00279720: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00279724: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00279728: sra         $v0, $t0, 1
    ctx->r2 = S32(SIGNED(ctx->r8) >> 1);
    // 0x0027972C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00279730: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00279734: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279738: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027973C: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00279740: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x00279744: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00279748: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x0027974C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00279750: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x00279754: addiu       $v1, $t0, -0x1
    ctx->r3 = ADD32(ctx->r8, -0X1);
    // 0x00279758: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0027975C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x00279760: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x00279764: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00279768: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x0027976C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00279770: addiu       $v0, $t7, -0x1
    ctx->r2 = ADD32(ctx->r15, -0X1);
    // 0x00279774: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00279778: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027977C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00279780: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x00279784: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x00279788: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x0027978C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00279790: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x00279794: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x00279798: addiu       $a2, $a0, 0x20
    ctx->r6 = ADD32(ctx->r4, 0X20);
    // 0x0027979C: lui         $v0, 0xF510
    ctx->r2 = S32(0XF510 << 16);
    // 0x002797A0: addiu       $a3, $a0, 0x28
    ctx->r7 = ADD32(ctx->r4, 0X28);
    // 0x002797A4: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x002797A8: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x002797AC: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x002797B0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002797B4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x002797B8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x002797BC: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x002797C0: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x002797C4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002797C8: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x002797CC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x002797D0: bgez        $t0, L_002797DC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x002797D4: sw          $v0, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r2;
            goto L_002797DC;
    }
    // 0x002797D4: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x002797D8: addiu       $t2, $t0, 0x3
    ctx->r10 = ADD32(ctx->r8, 0X3);
L_002797DC:
    // 0x002797DC: sra         $a1, $t2, 2
    ctx->r5 = S32(SIGNED(ctx->r10) >> 2);
    // 0x002797E0: blez        $a1, L_002797EC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x002797E4: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_002797EC;
    }
    // 0x002797E4: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x002797E8: addiu       $v1, $a1, 0x7FF
    ctx->r3 = ADD32(ctx->r5, 0X7FF);
L_002797EC:
    // 0x002797EC: mult        $t0, $t7
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002797F0: mflo        $s1
    ctx->r17 = lo;
    // 0x002797F4: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    // 0x002797F8: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x002797FC: beql        $v0, $zero, L_00279804
    if (ctx->r2 == 0) {
        // 0x00279800: addiu       $a0, $zero, 0x7FF
        ctx->r4 = ADD32(0, 0X7FF);
            goto L_00279804;
    }
    goto skip_1;
    // 0x00279800: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    skip_1:
L_00279804:
    // 0x00279804: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x00279808: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x0027980C: blez        $a1, L_00279850
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00279810: or          $a0, $v0, $t1
        ctx->r4 = ctx->r2 | ctx->r9;
            goto L_00279850;
    }
    // 0x00279810: or          $a0, $v0, $t1
    ctx->r4 = ctx->r2 | ctx->r9;
    // 0x00279814: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x00279818: bne         $a1, $zero, L_00279824
    if (ctx->r5 != 0) {
        // 0x0027981C: nop
    
            goto L_00279824;
    }
    // 0x0027981C: nop

    // 0x00279820: break       7
    do_break(2594848);
L_00279824:
    // 0x00279824: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00279828: bne         $a1, $at, L_0027983C
    if (ctx->r5 != ctx->r1) {
        // 0x0027982C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0027983C;
    }
    // 0x0027982C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00279830: bne         $v1, $at, L_0027983C
    if (ctx->r3 != ctx->r1) {
        // 0x00279834: nop
    
            goto L_0027983C;
    }
    // 0x00279834: nop

    // 0x00279838: break       6
    do_break(2594872);
L_0027983C:
    // 0x0027983C: mflo        $v0
    ctx->r2 = lo;
    // 0x00279840: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279844: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279848: j           L_0027985C
    // 0x0027984C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_0027985C;
    // 0x0027984C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_00279850:
    // 0x00279850: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x00279854: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279858: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_0027985C:
    // 0x0027985C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00279860: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x00279864: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x00279868: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x0027986C: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x00279870: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x00279874: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00279878: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x0027987C: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x00279880: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x00279884: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00279888: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x0027988C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x00279890: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00279894: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279898: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x0027989C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002798A0: lui         $v1, 0xF510
    ctx->r3 = S32(0XF510 << 16);
    // 0x002798A4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002798A8: addiu       $t2, $a1, 0x10
    ctx->r10 = ADD32(ctx->r5, 0X10);
    // 0x002798AC: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x002798B0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002798B4: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x002798B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002798BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002798C0: sll         $t1, $v0, 12
    ctx->r9 = S32(ctx->r2 << 12);
    // 0x002798C4: addiu       $v0, $t7, -0x1
    ctx->r2 = ADD32(ctx->r15, -0X1);
    // 0x002798C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002798CC: andi        $t0, $v0, 0xFFF
    ctx->r8 = ctx->r2 & 0XFFF;
    // 0x002798D0: or          $v0, $t1, $t0
    ctx->r2 = ctx->r9 | ctx->r8;
    // 0x002798D4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x002798D8: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x002798DC: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x002798E0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002798E4: addiu       $a0, $a1, 0x18
    ctx->r4 = ADD32(ctx->r5, 0X18);
    // 0x002798E8: bgez        $a2, L_002798F4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x002798EC: sw          $a0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r4;
            goto L_002798F4;
    }
    // 0x002798EC: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x002798F0: addiu       $a2, $a2, 0xF
    ctx->r6 = ADD32(ctx->r6, 0XF);
L_002798F4:
    // 0x002798F4: lui         $v1, 0xF580
    ctx->r3 = S32(0XF580 << 16);
    // 0x002798F8: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x002798FC: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x00279900: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x00279904: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x00279908: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0027990C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x00279910: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x00279914: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x00279918: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x0027991C: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x00279920: or          $v0, $t1, $v0
    ctx->r2 = ctx->r9 | ctx->r2;
    // 0x00279924: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x00279928: sw          $t3, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r11;
    // 0x0027992C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00279930: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x00279934: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00279938: sll         $v0, $t9, 16
    ctx->r2 = S32(ctx->r25 << 16);
    // 0x0027993C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00279940: blez        $v0, L_0027995C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00279944: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_0027995C;
    }
    // 0x00279944: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00279948: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027994C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x00279950: lui         $v1, 0xE400
    ctx->r3 = S32(0XE400 << 16);
    // 0x00279954: j           L_00279960
    // 0x00279958: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
        goto L_00279960;
    // 0x00279958: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
L_0027995C:
    // 0x0027995C: lui         $v1, 0xE400
    ctx->r3 = S32(0XE400 << 16);
L_00279960:
    // 0x00279960: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x00279964: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00279968: blez        $v0, L_0027997C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0027996C: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_0027997C;
    }
    // 0x0027996C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00279970: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x00279974: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x00279978: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0027997C:
    // 0x0027997C: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x00279980: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00279984: blez        $v0, L_00279994
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00279988: andi        $v0, $v0, 0xFFF
        ctx->r2 = ctx->r2 & 0XFFF;
            goto L_00279994;
    }
    // 0x00279988: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x0027998C: j           L_00279998
    // 0x00279990: sll         $v1, $v0, 12
    ctx->r3 = S32(ctx->r2 << 12);
        goto L_00279998;
    // 0x00279990: sll         $v1, $v0, 12
    ctx->r3 = S32(ctx->r2 << 12);
L_00279994:
    // 0x00279994: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00279998:
    // 0x00279998: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x0027999C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002799A0: blez        $v0, L_002799B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002799A4: sw          $v1, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r3;
            goto L_002799B4;
    }
    // 0x002799A4: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x002799A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x002799AC: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002799B0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_002799B4:
    // 0x002799B4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002799B8: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x002799BC: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x002799C0: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x002799C4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x002799C8: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x002799CC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002799D0: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x002799D4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002799D8: bgez        $v1, L_00279A24
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002799DC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00279A24;
    }
    // 0x002799DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002799E0: sll         $v0, $t6, 16
    ctx->r2 = S32(ctx->r14 << 16);
    // 0x002799E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002799E8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002799EC: bgez        $v0, L_00279A0C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002799F0: nop
    
            goto L_00279A0C;
    }
    // 0x002799F0: nop

    // 0x002799F4: mflo        $s1
    ctx->r17 = lo;
    // 0x002799F8: sra         $v0, $s1, 7
    ctx->r2 = S32(SIGNED(ctx->r17) >> 7);
    // 0x002799FC: bgez        $v0, L_00279A20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00279A00: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_00279A20;
    }
    // 0x00279A00: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x00279A04: j           L_00279A1C
    // 0x00279A08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00279A1C;
    // 0x00279A08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00279A0C:
    // 0x00279A0C: mflo        $s1
    ctx->r17 = lo;
    // 0x00279A10: sra         $v0, $s1, 7
    ctx->r2 = S32(SIGNED(ctx->r17) >> 7);
    // 0x00279A14: bgtzl       $v0, L_00279A1C
    if (SIGNED(ctx->r2) > 0) {
        // 0x00279A18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00279A1C;
    }
    goto skip_2;
    // 0x00279A18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
L_00279A1C:
    // 0x00279A1C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_00279A20:
    // 0x00279A20: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
L_00279A24:
    // 0x00279A24: bgezl       $t4, L_00279A84
    if (SIGNED(ctx->r12) >= 0) {
        // 0x00279A28: sw          $a0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r4;
            goto L_00279A84;
    }
    goto skip_3;
    // 0x00279A28: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    skip_3:
    // 0x00279A2C: sll         $v0, $t5, 16
    ctx->r2 = S32(ctx->r13 << 16);
    // 0x00279A30: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00279A34: bgez        $v1, L_00279A5C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00279A38: sll         $v0, $t4, 16
        ctx->r2 = S32(ctx->r12 << 16);
            goto L_00279A5C;
    }
    // 0x00279A38: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x00279A3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00279A40: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279A44: mflo        $s1
    ctx->r17 = lo;
    // 0x00279A48: sra         $v0, $s1, 7
    ctx->r2 = S32(SIGNED(ctx->r17) >> 7);
    // 0x00279A4C: bgez        $v0, L_00279A78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00279A50: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_00279A78;
    }
    // 0x00279A50: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x00279A54: j           L_00279A74
    // 0x00279A58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00279A74;
    // 0x00279A58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00279A5C:
    // 0x00279A5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00279A60: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00279A64: mflo        $s1
    ctx->r17 = lo;
    // 0x00279A68: sra         $v0, $s1, 7
    ctx->r2 = S32(SIGNED(ctx->r17) >> 7);
    // 0x00279A6C: bgtzl       $v0, L_00279A74
    if (SIGNED(ctx->r2) > 0) {
        // 0x00279A70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00279A74;
    }
    goto skip_4;
    // 0x00279A70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_4:
L_00279A74:
    // 0x00279A74: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_00279A78:
    // 0x00279A78: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00279A7C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00279A80: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_00279A84:
    // 0x00279A84: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00279A88: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00279A8C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00279A90: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00279A94: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00279A98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00279A9C: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x00279AA0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00279AA4: sll         $v0, $t6, 16
    ctx->r2 = S32(ctx->r14 << 16);
    // 0x00279AA8: andi        $v1, $t5, 0xFFFF
    ctx->r3 = ctx->r13 & 0XFFFF;
    // 0x00279AAC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00279AB0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00279AB4: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x00279AB8: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x00279ABC: jr          $ra
    // 0x00279AC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00279AC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_00266570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266570: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00266574: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00266578: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0026657C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00266580: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00266584: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00266588: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0026658C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00266590: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00266594: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x00266598: bne         $v1, $zero, L_002665B0
    if (ctx->r3 != 0) {
        // 0x0026659C: addiu       $v0, $v0, 0x14
        ctx->r2 = ADD32(ctx->r2, 0X14);
            goto L_002665B0;
    }
    // 0x0026659C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x002665A0: lb          $s0, 0xE($v0)
    ctx->r16 = MEM_B(ctx->r2, 0XE);
    // 0x002665A4: lb          $s2, 0xF($v0)
    ctx->r18 = MEM_B(ctx->r2, 0XF);
    // 0x002665A8: j           L_002665BC
    // 0x002665AC: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
        goto L_002665BC;
    // 0x002665AC: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
L_002665B0:
    // 0x002665B0: lb          $s0, 0x1A($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X1A);
    // 0x002665B4: lb          $s2, 0x1B($v0)
    ctx->r18 = MEM_B(ctx->r2, 0X1B);
    // 0x002665B8: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
L_002665BC:
    // 0x002665BC: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    // 0x002665C0: sb          $s2, 0x11($a1)
    MEM_B(0X11, ctx->r5) = ctx->r18;
    // 0x002665C4: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x002665C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002665CC: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x002665D0: sw          $v1, 0x14C($s3)
    MEM_W(0X14C, ctx->r19) = ctx->r3;
    // 0x002665D4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x002665D8: beq         $v0, $zero, L_002665E8
    if (ctx->r2 == 0) {
        // 0x002665DC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002665E8;
    }
    // 0x002665DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002665E0: jal         0x0021DC84
    // 0x002665E4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x002665E4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
L_002665E8:
    // 0x002665E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002665EC: beq         $v0, $zero, L_00266628
    if (ctx->r2 == 0) {
        // 0x002665F0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00266628;
    }
    // 0x002665F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002665F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002665F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x002665FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00266600: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00266604: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00266608: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0026660C: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00266610: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00266614: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00266618: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0026661C: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00266620: jal         0x0020B6A0
    // 0x00266624: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020B6A0(rdram, ctx);
        goto after_1;
    // 0x00266624: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_1:
L_00266628:
    // 0x00266628: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0026662C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00266630: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00266634: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00266638: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0026663C: jr          $ra
    // 0x00266640: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00266640: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0044706C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044706C: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x00447070: beq         $v1, $v0, L_004470A0
    if (ctx->r3 == ctx->r2) {
            // 0x00447074: nop

    func_004470A0(rdram, ctx);
    return;
    }
    // 0x00447074: nop

    // 0x00447078: jr          $ra
    // 0x0044707C: nop

    return;
    // 0x0044707C: nop

;}
RECOMP_FUNC void func_00238A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00238A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00238A80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00238A84: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x00238A88: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x00238A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00238A90: bne         $v1, $v0, L_00238AD4
    if (ctx->r3 != ctx->r2) {
        // 0x00238A94: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00238AD4;
    }
    // 0x00238A94: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00238A98: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00238A9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00238AA0: beq         $v0, $zero, L_00238AD4
    if (ctx->r2 == 0) {
        // 0x00238AA4: nop
    
            goto L_00238AD4;
    }
    // 0x00238AA4: nop

    // 0x00238AA8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00238AAC: lw          $v1, 0x1A8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1A8);
    // 0x00238AB0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00238AB4: lw          $a1, 0x51C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X51C);
    // 0x00238AB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00238ABC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00238AC0: lw          $a2, 0x69D8($at)
    ctx->r6 = MEM_W(ctx->r1, 0X69D8);
    // 0x00238AC4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00238AC8: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00238ACC: j           L_00238AF4
    // 0x00238AD0: nop

        goto L_00238AF4;
    // 0x00238AD0: nop

L_00238AD4:
    // 0x00238AD4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00238AD8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00238ADC: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00238AE0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00238AE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00238AE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00238AEC: lw          $a2, 0x69D8($at)
    ctx->r6 = MEM_W(ctx->r1, 0X69D8);
    // 0x00238AF0: addiu       $a1, $a0, 0x40
    ctx->r5 = ADD32(ctx->r4, 0X40);
L_00238AF4:
    // 0x00238AF4: jal         0x0027FC2C
    // 0x00238AF8: nop

    func_0027FC2C(rdram, ctx);
        goto after_0;
    // 0x00238AF8: nop

    after_0:
    // 0x00238AFC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x00238B00: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00238B04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00238B08: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00238B0C: lw          $a0, 0x69DC($at)
    ctx->r4 = MEM_W(ctx->r1, 0X69DC);
    // 0x00238B10: beq         $a0, $zero, L_00238B20
    if (ctx->r4 == 0) {
        // 0x00238B14: nop
    
            goto L_00238B20;
    }
    // 0x00238B14: nop

    // 0x00238B18: jal         0x0027580C
    // 0x00238B1C: nop

    func_0027580C(rdram, ctx);
        goto after_1;
    // 0x00238B1C: nop

    after_1:
L_00238B20:
    // 0x00238B20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00238B24: jr          $ra
    // 0x00238B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00238B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028EC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028EC54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028EC58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0028EC5C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0028EC60: addiu       $v1, $v0, 0xFFF
    ctx->r3 = ADD32(ctx->r2, 0XFFF);
    // 0x0028EC64: bgez        $v1, L_0028EC70
    if (SIGNED(ctx->r3) >= 0) {
        // 0x0028EC68: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0028EC70;
    }
    // 0x0028EC68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028EC6C: addiu       $v1, $v0, 0x1FFE
    ctx->r3 = ADD32(ctx->r2, 0X1FFE);
L_0028EC70:
    // 0x0028EC70: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0028EC74: addiu       $a2, $a2, 0x1378
    ctx->r6 = ADD32(ctx->r6, 0X1378);
    // 0x0028EC78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028EC7C: sra         $t1, $v1, 12
    ctx->r9 = S32(SIGNED(ctx->r3) >> 12);
    // 0x0028EC80: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x0028EC84: addiu       $v1, $t1, 0x1
    ctx->r3 = ADD32(ctx->r9, 0X1);
    // 0x0028EC88: addiu       $v0, $t0, 0x18
    ctx->r2 = ADD32(ctx->r8, 0X18);
    // 0x0028EC8C: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x0028EC90: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0028EC94: beq         $a2, $zero, L_0028ECB4
    if (ctx->r6 == 0) {
        // 0x0028EC98: and         $t2, $v1, $v0
        ctx->r10 = ctx->r3 & ctx->r2;
            goto L_0028ECB4;
    }
    // 0x0028EC98: and         $t2, $v1, $v0
    ctx->r10 = ctx->r3 & ctx->r2;
L_0028EC9C:
    // 0x0028EC9C: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0028ECA0: lhu         $v1, 0x4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4);
    // 0x0028ECA4: lhu         $v0, 0x6($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X6);
    // 0x0028ECA8: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x0028ECAC: bne         $a2, $zero, L_0028EC9C
    if (ctx->r6 != 0) {
        // 0x0028ECB0: addu        $a1, $v1, $v0
        ctx->r5 = ADD32(ctx->r3, ctx->r2);
            goto L_0028EC9C;
    }
    // 0x0028ECB0: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
L_0028ECB4:
    // 0x0028ECB4: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x0028ECB8: bnel        $v0, $zero, L_0028ECC0
    if (ctx->r2 != 0) {
        // 0x0028ECBC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0028ECC0;
    }
    goto skip_0;
    // 0x0028ECBC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
L_0028ECC0:
    // 0x0028ECC0: addiu       $v1, $t2, -0x1
    ctx->r3 = ADD32(ctx->r10, -0X1);
    // 0x0028ECC4: sh          $a1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r5;
    // 0x0028ECC8: sh          $t1, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r9;
    // 0x0028ECCC: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x0028ECD0: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x0028ECD4: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x0028ECD8: beq         $t2, $zero, L_0028ECF4
    if (ctx->r10 == 0) {
        // 0x0028ECDC: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0028ECF4;
    }
    // 0x0028ECDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_0028ECE0:
    // 0x0028ECE0: sb          $a3, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r7;
    // 0x0028ECE4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0028ECE8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028ECEC: bne         $v0, $zero, L_0028ECE0
    if (ctx->r2 != 0) {
        // 0x0028ECF0: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0028ECE0;
    }
    // 0x0028ECF0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_0028ECF4:
    // 0x0028ECF4: sll         $a1, $a1, 12
    ctx->r5 = S32(ctx->r5 << 12);
        turok2_patch_page_useg(rdram, ctx);

    // 0x0028ECF8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0028ECFC: jal         0x0029B820
    // 0x0028ED00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0028ED00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0028ED04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0028ED08: jr          $ra
    // 0x0028ED0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028ED0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00267944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267944: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00267948: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x0026794C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00267950: sw          $ra, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r31;
    // 0x00267954: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x00267958: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x0026795C: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x00267960: sdc1        $f23, 0xE8($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XE8, ctx->r29);
    // 0x00267964: sdc1        $f22, 0xE0($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE0, ctx->r29);
    // 0x00267968: sdc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XD8, ctx->r29);
    // 0x0026796C: sdc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD0, ctx->r29);
    // 0x00267970: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00267974: beq         $v0, $zero, L_00267CC0
    if (ctx->r2 == 0) {
        // 0x00267978: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_00267CC0;
    }
    // 0x00267978: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0026797C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x00267980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267984: bnel        $v1, $v0, L_00267994
    if (ctx->r3 != ctx->r2) {
        // 0x00267988: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00267994;
    }
    goto skip_0;
    // 0x00267988: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026798C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00267990: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_00267994:
    // 0x00267994: bne         $v0, $zero, L_00267CC0
    if (ctx->r2 != 0) {
        // 0x00267998: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00267CC0;
    }
    // 0x00267998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026799C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x002679A0: bne         $v1, $v0, L_00267BE4
    if (ctx->r3 != ctx->r2) {
        // 0x002679A4: addiu       $s0, $sp, 0x78
        ctx->r16 = ADD32(ctx->r29, 0X78);
            goto L_00267BE4;
    }
    // 0x002679A4: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x002679A8: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x002679AC: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x002679B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002679B4: bne         $v0, $zero, L_00267CC0
    if (ctx->r2 != 0) {
        // 0x002679B8: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_00267CC0;
    }
    // 0x002679B8: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x002679BC: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x002679C0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x002679C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002679C8: beq         $v0, $zero, L_00267BE4
    if (ctx->r2 == 0) {
        // 0x002679CC: nop
    
            goto L_00267BE4;
    }
    // 0x002679CC: nop

    // 0x002679D0: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x002679D4: jal         0x0026AFC0
    // 0x002679D8: nop

    func_0026AFC0(rdram, ctx);
        goto after_0;
    // 0x002679D8: nop

    after_0:
    // 0x002679DC: bne         $v0, $zero, L_00267CC0
    if (ctx->r2 != 0) {
        // 0x002679E0: nop
    
            goto L_00267CC0;
    }
    // 0x002679E0: nop

    // 0x002679E4: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x002679E8: jal         0x0026BD20
    // 0x002679EC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0026BD20(rdram, ctx);
        goto after_1;
    // 0x002679EC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x002679F0: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x002679F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002679F8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x002679FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267A00: lwc1        $f0, 0x7E00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7E00);
    // 0x00267A04: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00267A08: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00267A0C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00267A10: jal         0x0020EFDC
    // 0x00267A14: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x00267A14: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x00267A18: jal         0x0020F040
    // 0x00267A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_3;
    // 0x00267A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00267A20: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00267A24: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00267A28: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00267A2C: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00267A30: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00267A34: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00267A38: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00267A3C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00267A40: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00267A44: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00267A48: jal         0x0021153C
    // 0x00267A4C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_4;
    // 0x00267A4C: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_4:
    // 0x00267A50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267A54: lwc1        $f1, 0x7E04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7E04);
    // 0x00267A58: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00267A5C: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00267A60: nop

    // 0x00267A64: bc1f        L_00267A7C
    if (!c1cs) {
        // 0x00267A68: nop
    
            goto L_00267A7C;
    }
    // 0x00267A68: nop

    // 0x00267A6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267A70: lwc1        $f12, 0x7E08($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7E08);
    // 0x00267A74: j           L_00267A88
    // 0x00267A78: nop

        goto L_00267A88;
    // 0x00267A78: nop

L_00267A7C:
    // 0x00267A7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267A80: lwc1        $f0, 0x7E0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7E0C);
    // 0x00267A84: mul.s       $f12, $f20, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00267A88:
    // 0x00267A88: jal         0x002982F0
    // 0x00267A8C: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x00267A8C: nop

    after_5:
    // 0x00267A90: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00267A94: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x00267A98: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x00267A9C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00267AA0: lwc1        $f1, 0x40($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x00267AA4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00267AA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267AAC: lwc1        $f3, 0x7E10($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7E10);
    // 0x00267AB0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00267AB4: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00267AB8: c.lt.s      $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f3.fl < ctx->f20.fl;
    // 0x00267ABC: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x00267AC0: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x00267AC4: bc1f        L_00267ADC
    if (!c1cs) {
        // 0x00267AC8: swc1        $f1, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
            goto L_00267ADC;
    }
    // 0x00267AC8: swc1        $f1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00267ACC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267AD0: lwc1        $f12, 0x7E14($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7E14);
    // 0x00267AD4: j           L_00267AE8
    // 0x00267AD8: nop

        goto L_00267AE8;
    // 0x00267AD8: nop

L_00267ADC:
    // 0x00267ADC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267AE0: lwc1        $f0, 0x7E18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7E18);
    // 0x00267AE4: mul.s       $f12, $f20, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00267AE8:
    // 0x00267AE8: jal         0x002974C0
    // 0x00267AEC: nop

    func_002974C0(rdram, ctx);
        goto after_6;
    // 0x00267AEC: nop

    after_6:
    // 0x00267AF0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x00267AF4: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00267AF8: jal         0x002982F0
    // 0x00267AFC: nop

    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x00267AFC: nop

    after_7:
    // 0x00267B00: lwc1        $f12, 0x50($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00267B04: jal         0x002974C0
    // 0x00267B08: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    func_002974C0(rdram, ctx);
        goto after_8;
    // 0x00267B08: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    after_8:
    // 0x00267B0C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x00267B10: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x00267B14: sub.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f23.fl;
    // 0x00267B18: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x00267B1C: sub.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f22.fl;
    // 0x00267B20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x00267B24: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00267B28: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x00267B2C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00267B30: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x00267B34: jal         0x0026A268
    // 0x00267B38: nop

    func_0026A268(rdram, ctx);
        goto after_9;
    // 0x00267B38: nop

    after_9:
    // 0x00267B3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267B40: lwc1        $f1, 0x7E1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7E1C);
    // 0x00267B44: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00267B48: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00267B4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267B50: lwc1        $f0, 0x7E20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7E20);
    // 0x00267B54: bc1t        L_00267B68
    if (c1cs) {
        // 0x00267B58: nop
    
            goto L_00267B68;
    }
    // 0x00267B58: nop

    // 0x00267B5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267B60: lwc1        $f0, 0x7E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7E24);
    // 0x00267B64: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
L_00267B68:
    // 0x00267B68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267B6C: lwc1        $f21, 0x7E28($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7E28);
    // 0x00267B70: mul.s       $f20, $f0, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00267B74: jal         0x002982F0
    // 0x00267B78: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_10;
    // 0x00267B78: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_10:
    // 0x00267B7C: mul.s       $f2, $f22, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x00267B80: neg.s       $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = -ctx->f23.fl;
    // 0x00267B84: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00267B88: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00267B8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00267B90: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00267B94: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x00267B98: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x00267B9C: jal         0x002974C0
    // 0x00267BA0: swc1        $f1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_11;
    // 0x00267BA0: swc1        $f1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_11:
    // 0x00267BA4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x00267BA8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x00267BAC: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00267BB0: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x00267BB4: jal         0x0020DCC8
    // 0x00267BB8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_0020DCC8(rdram, ctx);
        goto after_12;
    // 0x00267BB8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x00267BBC: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00267BC0: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x00267BC4: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x00267BC8: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x00267BCC: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x00267BD0: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
    // 0x00267BD4: sw          $t2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r10;
    // 0x00267BD8: sw          $t3, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r11;
    // 0x00267BDC: j           L_00267D00
    // 0x00267BE0: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_00267D00;
    // 0x00267BE0: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00267BE4:
    // 0x00267BE4: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x00267BE8: jal         0x0026BD20
    // 0x00267BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BD20(rdram, ctx);
        goto after_13;
    // 0x00267BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00267BF0: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x00267BF4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x00267BF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267BFC: lwc1        $f0, 0x7E2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7E2C);
    // 0x00267C00: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00267C04: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x00267C08: swc1        $f0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
    // 0x00267C0C: jal         0x0020EFDC
    // 0x00267C10: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    func_0020EFDC(rdram, ctx);
        goto after_14;
    // 0x00267C10: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    after_14:
    // 0x00267C14: jal         0x0020F040
    // 0x00267C18: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    func_0020F040(rdram, ctx);
        goto after_15;
    // 0x00267C18: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    after_15:
    // 0x00267C1C: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x00267C20: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x00267C24: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00267C28: lwc1        $f1, 0x8C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8C);
    // 0x00267C2C: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x00267C30: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00267C34: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x00267C38: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x00267C3C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00267C40: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00267C44: jal         0x0021153C
    // 0x00267C48: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_16;
    // 0x00267C48: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_16:
    // 0x00267C4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267C50: lwc1        $f1, 0x7E30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7E30);
    // 0x00267C54: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00267C58: jal         0x002982F0
    // 0x00267C5C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_17;
    // 0x00267C5C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_17:
    // 0x00267C60: lwc1        $f3, 0x98($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x00267C64: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00267C68: lwc1        $f2, 0x9C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x00267C6C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00267C70: lwc1        $f1, 0xA0($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x00267C74: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00267C78: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00267C7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00267C80: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00267C84: swc1        $f3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00267C88: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x00267C8C: jal         0x002974C0
    // 0x00267C90: swc1        $f1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_18;
    // 0x00267C90: swc1        $f1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_18:
    // 0x00267C94: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x00267C98: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x00267C9C: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x00267CA0: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x00267CA4: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x00267CA8: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x00267CAC: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
    // 0x00267CB0: sw          $t2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r10;
    // 0x00267CB4: sw          $t3, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r11;
    // 0x00267CB8: j           L_00267D00
    // 0x00267CBC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_00267D00;
    // 0x00267CBC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00267CC0:
    // 0x00267CC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00267CC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267CC8: lwc1        $f1, 0x7E34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7E34);
    // 0x00267CCC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x00267CD0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x00267CD4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x00267CD8: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00267CDC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x00267CE0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x00267CE4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x00267CE8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x00267CEC: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x00267CF0: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
    // 0x00267CF4: sw          $t2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r10;
    // 0x00267CF8: sw          $t3, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r11;
    // 0x00267CFC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00267D00:
    // 0x00267D00: lw          $ra, 0xC8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC8);
    // 0x00267D04: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x00267D08: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00267D0C: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x00267D10: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00267D14: ldc1        $f23, 0xE8($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XE8);
    // 0x00267D18: ldc1        $f22, 0xE0($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE0);
    // 0x00267D1C: ldc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD8);
    // 0x00267D20: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x00267D24: jr          $ra
    // 0x00267D28: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x00267D28: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_00214DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214DBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00214DC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00214DC4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00214DC8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00214DCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00214DD0: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00214DD4: bne         $v0, $zero, L_00214E44
    if (ctx->r2 != 0) {
        // 0x00214DD8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00214E44;
    }
    // 0x00214DD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214DDC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00214DE0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00214DE4: addiu       $v0, $v0, 0x5808
    ctx->r2 = ADD32(ctx->r2, 0X5808);
    // 0x00214DE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00214DEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00214DF0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00214DF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00214DF8: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x00214DFC: jal         0x0020367C
    // 0x00214E00: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00214E00: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x00214E04: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00214E08: beq         $s0, $zero, L_00214E30
    if (ctx->r16 == 0) {
        // 0x00214E0C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00214E30;
    }
    // 0x00214E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00214E10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00214E14: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x00214E18: jal         0x0020185C
    // 0x00214E1C: addiu       $a3, $s1, 0x20
    ctx->r7 = ADD32(ctx->r17, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x00214E1C: addiu       $a3, $s1, 0x20
    ctx->r7 = ADD32(ctx->r17, 0X20);
    after_1:
    // 0x00214E20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214E24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00214E28: jal         0x002051F4
    // 0x00214E2C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x00214E2C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    after_2:
L_00214E30:
    // 0x00214E30: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00214E34: bne         $v0, $zero, L_00214E44
    if (ctx->r2 != 0) {
        // 0x00214E38: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00214E44;
    }
    // 0x00214E38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214E3C: j           L_00214E74
    // 0x00214E40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00214E74;
    // 0x00214E40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00214E44:
    // 0x00214E44: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00214E48: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x00214E4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00214E50: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00214E54: addiu       $v0, $v0, 0x582C
    ctx->r2 = ADD32(ctx->r2, 0X582C);
    // 0x00214E58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00214E5C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00214E60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00214E64: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x00214E68: lw          $a2, 0x20($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X20);
    // 0x00214E6C: jal         0x0020367C
    // 0x00214E70: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_0020367C(rdram, ctx);
        goto after_3;
    // 0x00214E70: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_3:
L_00214E74:
    // 0x00214E74: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00214E78: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00214E7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00214E80: jr          $ra
    // 0x00214E84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00214E84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
