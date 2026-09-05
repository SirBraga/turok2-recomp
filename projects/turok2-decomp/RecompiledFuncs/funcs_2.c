#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0023A640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023A640: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x0023A644: addiu       $v1, $a0, 0x4C
    ctx->r3 = ADD32(ctx->r4, 0X4C);
    // 0x0023A648: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0023A64C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023A650: lwc1        $f3, 0x4($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023A654: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0023A658: nop

    // 0x0023A65C: bc1f        L_0023A6DC
    if (!c1cs) {
        // 0x0023A660: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_0023A6DC;
    }
    // 0x0023A660: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x0023A664: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0023A668: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023A66C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0023A670: nop

    // 0x0023A674: bc1f        L_0023A6DC
    if (!c1cs) {
        // 0x0023A678: nop
    
            goto L_0023A6DC;
    }
    // 0x0023A678: nop

    // 0x0023A67C: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0023A680: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023A684: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023A688: nop

    // 0x0023A68C: bc1f        L_0023A6DC
    if (!c1cs) {
        // 0x0023A690: nop
    
            goto L_0023A6DC;
    }
    // 0x0023A690: nop

    // 0x0023A694: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023A698: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0023A69C: nop

    // 0x0023A6A0: bc1f        L_0023A6DC
    if (!c1cs) {
        // 0x0023A6A4: nop
    
            goto L_0023A6DC;
    }
    // 0x0023A6A4: nop

    // 0x0023A6A8: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023A6AC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0023A6B0: nop

    // 0x0023A6B4: bc1f        L_0023A6DC
    if (!c1cs) {
        // 0x0023A6B8: nop
    
            goto L_0023A6DC;
    }
    // 0x0023A6B8: nop

    // 0x0023A6BC: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023A6C0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023A6C4: nop

    // 0x0023A6C8: bc1f        L_0023A6DC
    if (!c1cs) {
        // 0x0023A6CC: nop
    
            goto L_0023A6DC;
    }
    // 0x0023A6CC: nop

    // 0x0023A6D0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0023A6D4: j           L_0023A960
    // 0x0023A6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0023A960;
    // 0x0023A6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023A6DC:
    // 0x0023A6DC: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023A6E0: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0023A6E4: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0023A6E8: nop

    // 0x0023A6EC: bc1t        L_0023A7B0
    if (c1cs) {
        // 0x0023A6F0: nop
    
            goto L_0023A7B0;
    }
    // 0x0023A6F0: nop

    // 0x0023A6F4: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023A6F8: nop

    // 0x0023A6FC: bc1f        L_0023A714
    if (!c1cs) {
        // 0x0023A700: nop
    
            goto L_0023A714;
    }
    // 0x0023A700: nop

    // 0x0023A704: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023A708: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023A70C: j           L_0023A720
    // 0x0023A710: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
        goto L_0023A720;
    // 0x0023A710: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
L_0023A714:
    // 0x0023A714: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023A718: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023A71C: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
L_0023A720:
    // 0x0023A720: div.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023A724: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0023A728: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023A72C: nop

    // 0x0023A730: bc1f        L_0023A7B0
    if (!c1cs) {
        // 0x0023A734: nop
    
            goto L_0023A7B0;
    }
    // 0x0023A734: nop

    // 0x0023A738: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x0023A73C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A740: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023A744: add.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A748: swc1        $f3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023A74C: lwc1        $f0, 0x60($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X60);
    // 0x0023A750: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A754: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023A758: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A75C: swc1        $f1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A760: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023A764: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0023A768: nop

    // 0x0023A76C: bc1f        L_0023A7B0
    if (!c1cs) {
        // 0x0023A770: nop
    
            goto L_0023A7B0;
    }
    // 0x0023A770: nop

    // 0x0023A774: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0023A778: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0023A77C: nop

    // 0x0023A780: bc1f        L_0023A7B0
    if (!c1cs) {
        // 0x0023A784: nop
    
            goto L_0023A7B0;
    }
    // 0x0023A784: nop

    // 0x0023A788: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023A78C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023A790: nop

    // 0x0023A794: bc1f        L_0023A7B0
    if (!c1cs) {
        // 0x0023A798: nop
    
            goto L_0023A7B0;
    }
    // 0x0023A798: nop

    // 0x0023A79C: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0023A7A0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023A7A4: nop

    // 0x0023A7A8: bc1tl       L_0023A95C
    if (c1cs) {
        // 0x0023A7AC: swc1        $f2, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
            goto L_0023A95C;
    }
    goto skip_0;
    // 0x0023A7AC: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    skip_0:
L_0023A7B0:
    // 0x0023A7B0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023A7B4: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0023A7B8: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0023A7BC: nop

    // 0x0023A7C0: bc1t        L_0023A884
    if (c1cs) {
        // 0x0023A7C4: nop
    
            goto L_0023A884;
    }
    // 0x0023A7C4: nop

    // 0x0023A7C8: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023A7CC: nop

    // 0x0023A7D0: bc1f        L_0023A7E8
    if (!c1cs) {
        // 0x0023A7D4: nop
    
            goto L_0023A7E8;
    }
    // 0x0023A7D4: nop

    // 0x0023A7D8: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023A7DC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023A7E0: j           L_0023A7F4
    // 0x0023A7E4: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
        goto L_0023A7F4;
    // 0x0023A7E4: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
L_0023A7E8:
    // 0x0023A7E8: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0023A7EC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023A7F0: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
L_0023A7F4:
    // 0x0023A7F4: div.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023A7F8: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0023A7FC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023A800: nop

    // 0x0023A804: bc1f        L_0023A884
    if (!c1cs) {
        // 0x0023A808: nop
    
            goto L_0023A884;
    }
    // 0x0023A808: nop

    // 0x0023A80C: lwc1        $f0, 0x58($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X58);
    // 0x0023A810: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A814: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023A818: add.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A81C: swc1        $f3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023A820: lwc1        $f0, 0x60($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X60);
    // 0x0023A824: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A828: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023A82C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A830: swc1        $f1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A834: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023A838: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0023A83C: nop

    // 0x0023A840: bc1f        L_0023A884
    if (!c1cs) {
        // 0x0023A844: nop
    
            goto L_0023A884;
    }
    // 0x0023A844: nop

    // 0x0023A848: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023A84C: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0023A850: nop

    // 0x0023A854: bc1f        L_0023A884
    if (!c1cs) {
        // 0x0023A858: nop
    
            goto L_0023A884;
    }
    // 0x0023A858: nop

    // 0x0023A85C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023A860: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023A864: nop

    // 0x0023A868: bc1f        L_0023A884
    if (!c1cs) {
        // 0x0023A86C: nop
    
            goto L_0023A884;
    }
    // 0x0023A86C: nop

    // 0x0023A870: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0023A874: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023A878: nop

    // 0x0023A87C: bc1tl       L_0023A95C
    if (c1cs) {
        // 0x0023A880: swc1        $f2, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
            goto L_0023A95C;
    }
    goto skip_1;
    // 0x0023A880: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    skip_1:
L_0023A884:
    // 0x0023A884: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0023A888: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0023A88C: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x0023A890: nop

    // 0x0023A894: bc1tl       L_0023A960
    if (c1cs) {
        // 0x0023A898: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023A960;
    }
    goto skip_2;
    // 0x0023A898: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
    // 0x0023A89C: c.lt.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl < ctx->f2.fl;
    // 0x0023A8A0: nop

    // 0x0023A8A4: bc1f        L_0023A8BC
    if (!c1cs) {
        // 0x0023A8A8: nop
    
            goto L_0023A8BC;
    }
    // 0x0023A8A8: nop

    // 0x0023A8AC: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0023A8B0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023A8B4: j           L_0023A8C8
    // 0x0023A8B8: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
        goto L_0023A8C8;
    // 0x0023A8B8: sub.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f1.fl;
L_0023A8BC:
    // 0x0023A8BC: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0023A8C0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023A8C4: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
L_0023A8C8:
    // 0x0023A8C8: div.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023A8CC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0023A8D0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0023A8D4: nop

    // 0x0023A8D8: bc1fl       L_0023A960
    if (!c1cs) {
        // 0x0023A8DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023A960;
    }
    goto skip_3;
    // 0x0023A8DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x0023A8E0: lwc1        $f0, 0x58($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X58);
    // 0x0023A8E4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A8E8: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0023A8EC: add.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A8F0: swc1        $f3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023A8F4: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x0023A8F8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023A8FC: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0023A900: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023A904: swc1        $f1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023A908: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0023A90C: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x0023A910: nop

    // 0x0023A914: bc1f        L_0023A960
    if (!c1cs) {
        // 0x0023A918: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023A960;
    }
    // 0x0023A918: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023A91C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0023A920: c.le.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl <= ctx->f0.fl;
    // 0x0023A924: nop

    // 0x0023A928: bc1f        L_0023A960
    if (!c1cs) {
        // 0x0023A92C: nop
    
            goto L_0023A960;
    }
    // 0x0023A92C: nop

    // 0x0023A930: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023A934: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0023A938: nop

    // 0x0023A93C: bc1f        L_0023A960
    if (!c1cs) {
        // 0x0023A940: nop
    
            goto L_0023A960;
    }
    // 0x0023A940: nop

    // 0x0023A944: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0023A948: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0023A94C: nop

    // 0x0023A950: bc1f        L_0023A960
    if (!c1cs) {
        // 0x0023A954: nop
    
            goto L_0023A960;
    }
    // 0x0023A954: nop

    // 0x0023A958: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
L_0023A95C:
    // 0x0023A95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023A960:
    // 0x0023A960: jr          $ra
    // 0x0023A964: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x0023A964: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0045CF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045CF28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045CF2C: lh          $v0, 0x9D0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X9D0);
    // 0x0045CF30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0045CF34: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x0045CF38: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0045CF3C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0045CF40: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045CF44: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0045CF48: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0045CF4C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0045CF50: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0045CF54: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x0045CF58: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x0045CF5C: addiu       $s5, $s5, 0x9D8
    ctx->r21 = ADD32(ctx->r21, 0X9D8);
    // 0x0045CF60: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0045CF64: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x0045CF68: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0045CF6C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0045CF70: lw          $s2, 0x5C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X5C);
    // 0x0045CF74: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x0045CF78: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0045CF7C: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x0045CF80: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0045CF84: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x0045CF88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045CF8C: addiu       $v0, $v0, 0x7BE0
    ctx->r2 = ADD32(ctx->r2, 0X7BE0);
    // 0x0045CF90: jal         0x0029E460
    // 0x0045CF94: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x0045CF94: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x0045CF98: srl         $a3, $s6, 31
    ctx->r7 = S32(U32(ctx->r22) >> 31);
    // 0x0045CF9C: addu        $a3, $s6, $a3
    ctx->r7 = ADD32(ctx->r22, ctx->r7);
    // 0x0045CFA0: sra         $a3, $a3, 1
    ctx->r7 = S32(SIGNED(ctx->r7) >> 1);
    // 0x0045CFA4: srl         $a2, $s0, 31
    ctx->r6 = S32(U32(ctx->r16) >> 31);
    // 0x0045CFA8: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    // 0x0045CFAC: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x0045CFB0: srl         $t1, $s2, 31
    ctx->r9 = S32(U32(ctx->r18) >> 31);
    // 0x0045CFB4: addu        $t1, $s2, $t1
    ctx->r9 = ADD32(ctx->r18, ctx->r9);
    // 0x0045CFB8: sra         $t1, $t1, 1
    ctx->r9 = S32(SIGNED(ctx->r9) >> 1);
    // 0x0045CFBC: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x0045CFC0: sll         $s0, $s0, 11
    ctx->r16 = S32(ctx->r16 << 11);
    // 0x0045CFC4: lui         $t6, 0xFFFF
    ctx->r14 = S32(0XFFFF << 16);
    // 0x0045CFC8: lw          $t5, 0x1C($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X1C);
    // 0x0045CFCC: lw          $t7, 0x2C($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X2C);
    // 0x0045CFD0: lw          $t4, 0x30($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X30);
    // 0x0045CFD4: addu        $t8, $t5, $zero
    ctx->r24 = ADD32(ctx->r13, 0);
    // 0x0045CFD8: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x0045CFDC: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0045CFE0: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x0045CFE4: subu        $a0, $t9, $v1
    ctx->r4 = SUB32(ctx->r25, ctx->r3);
    // 0x0045CFE8: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x0045CFEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045CFF0: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x0045CFF4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0045CFF8: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x0045CFFC: subu        $v1, $a0, $a3
    ctx->r3 = SUB32(ctx->r4, ctx->r7);
    // 0x0045D000: srl         $v0, $s1, 31
    ctx->r2 = S32(U32(ctx->r17) >> 31);
    // 0x0045D004: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x0045D008: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0045D00C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0045D010: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x0045D014: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x0045D018: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x0045D01C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x0045D020: lh          $a1, 0x10($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X10);
    // 0x0045D024: lhu         $t0, 0x10($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X10);
    // 0x0045D028: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x0045D02C: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0045D030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045D034: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0045D038: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x0045D03C: subu        $t3, $t0, $s4
    ctx->r11 = SUB32(ctx->r8, ctx->r20);
    // 0x0045D040: subu        $t2, $t3, $a2
    ctx->r10 = SUB32(ctx->r11, ctx->r6);
    // 0x0045D044: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x0045D048: addu        $a1, $t3, $a2
    ctx->r5 = ADD32(ctx->r11, ctx->r6);
    // 0x0045D04C: subu        $a1, $a1, $s2
    ctx->r5 = SUB32(ctx->r5, ctx->r18);
    // 0x0045D050: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x0045D054: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x0045D058: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x0045D05C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0045D060: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0045D064: div         $zero, $s0, $v1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r3)));
    // 0x0045D068: bne         $v1, $zero, L_0045D074
    if (ctx->r3 != 0) {
        // 0x0045D06C: nop
    
            goto L_0045D074;
    }
    // 0x0045D06C: nop

    // 0x0045D070: break       7
    do_break(4575344);
L_0045D074:
    // 0x0045D074: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0045D078: bne         $v1, $at, L_0045D08C
    if (ctx->r3 != ctx->r1) {
        // 0x0045D07C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0045D08C;
    }
    // 0x0045D07C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0045D080: bne         $s0, $at, L_0045D08C
    if (ctx->r16 != ctx->r1) {
        // 0x0045D084: nop
    
            goto L_0045D08C;
    }
    // 0x0045D084: nop

    // 0x0045D088: break       6
    do_break(4575368);
L_0045D08C:
    // 0x0045D08C: mflo        $s0
    ctx->r16 = lo;
    // 0x0045D090: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x0045D094: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x0045D098: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x0045D09C: or          $t5, $t5, $a0
    ctx->r13 = ctx->r13 | ctx->r4;
    // 0x0045D0A0: lw          $a3, 0x44($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X44);
    // 0x0045D0A4: and         $t7, $t7, $t6
    ctx->r15 = ctx->r15 & ctx->r14;
    // 0x0045D0A8: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x0045D0AC: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x0045D0B0: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x0045D0B4: sll         $a0, $s6, 10
    ctx->r4 = S32(ctx->r22 << 10);
    // 0x0045D0B8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x0045D0BC: sh          $a1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r5;
    // 0x0045D0C0: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x0045D0C4: sh          $a1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r5;
    // 0x0045D0C8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0045D0CC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x0045D0D0: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
    // 0x0045D0D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0045D0D8: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x0045D0DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0045D0E0: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x0045D0E4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0045D0E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0045D0EC: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x0045D0F0: subu        $v1, $v1, $s4
    ctx->r3 = SUB32(ctx->r3, ctx->r20);
    // 0x0045D0F4: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x0045D0F8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x0045D0FC: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x0045D100: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x0045D104: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x0045D108: addiu       $a2, $v1, -0x3
    ctx->r6 = ADD32(ctx->r3, -0X3);
    // 0x0045D10C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x0045D110: sll         $v0, $t5, 16
    ctx->r2 = S32(ctx->r13 << 16);
    // 0x0045D114: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0045D118: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x0045D11C: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x0045D120: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x0045D124: bne         $v0, $zero, L_0045D130
    if (ctx->r2 != 0) {
        // 0x0045D128: nop
    
            goto L_0045D130;
    }
    // 0x0045D128: nop

    // 0x0045D12C: break       7
    do_break(4575532);
L_0045D130:
    // 0x0045D130: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0045D134: bne         $v0, $at, L_0045D148
    if (ctx->r2 != ctx->r1) {
        // 0x0045D138: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0045D148;
    }
    // 0x0045D138: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0045D13C: bne         $a0, $at, L_0045D148
    if (ctx->r4 != ctx->r1) {
        // 0x0045D140: nop
    
            goto L_0045D148;
    }
    // 0x0045D140: nop

    // 0x0045D144: break       6
    do_break(4575556);
L_0045D148:
    // 0x0045D148: mflo        $t0
    ctx->r8 = lo;
    // 0x0045D14C: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x0045D150: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x0045D154: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x0045D158: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0045D15C: sh          $t3, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r11;
    // 0x0045D160: sh          $t2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r10;
    // 0x0045D164: sh          $a2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r6;
    // 0x0045D168: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0045D16C: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x0045D170: beq         $v1, $zero, L_0045D17C
    if (ctx->r3 == 0) {
        // 0x0045D174: or          $t7, $t7, $s0
        ctx->r15 = ctx->r15 | ctx->r16;
            goto L_0045D17C;
    }
    // 0x0045D174: or          $t7, $t7, $s0
    ctx->r15 = ctx->r15 | ctx->r16;
    // 0x0045D178: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_0045D17C:
    // 0x0045D17C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x0045D180: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x0045D184: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0045D188: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0045D18C: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x0045D190: bnel        $v1, $zero, L_0045D198
    if (ctx->r3 != 0) {
        // 0x0045D194: sh          $v0, 0x16($sp)
        MEM_H(0X16, ctx->r29) = ctx->r2;
            goto L_0045D198;
    }
    goto skip_0;
    // 0x0045D194: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    skip_0:
L_0045D198:
    // 0x0045D198: slt         $v0, $t9, $a3
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0045D19C: beq         $v0, $zero, L_0045D1AC
    if (ctx->r2 == 0) {
        // 0x0045D1A0: andi        $v0, $t8, 0xFFFF
        ctx->r2 = ctx->r24 & 0XFFFF;
            goto L_0045D1AC;
    }
    // 0x0045D1A0: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x0045D1A4: and         $t5, $t5, $t6
    ctx->r13 = ctx->r13 & ctx->r14;
    // 0x0045D1A8: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
L_0045D1AC:
    // 0x0045D1AC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0045D1B0: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x0045D1B4: sw          $t7, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r15;
    // 0x0045D1B8: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x0045D1BC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0045D1C0: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x0045D1C4: sll         $v1, $s6, 1
    ctx->r3 = S32(ctx->r22 << 1);
    // 0x0045D1C8: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
    // 0x0045D1CC: sw          $s6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r22;
    // 0x0045D1D0: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x0045D1D4: sw          $t5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r13;
    // 0x0045D1D8: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x0045D1DC: jal         0x0029AA80
    // 0x0045D1E0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    osViSetMode_recomp(rdram, ctx);
        goto after_1;
    // 0x0045D1E0: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    after_1:
    // 0x0045D1E4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0045D1E8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0045D1EC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0045D1F0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0045D1F4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0045D1F8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0045D1FC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0045D200: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0045D204: jr          $ra
    // 0x0045D208: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0045D208: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0040BFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040BFF0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0040BFF4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0040BFF8: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0040BFFC: lw          $s1, 0x1CE0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1CE0);
    // 0x0040C000: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x0040C004: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040C008: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0040C00C: beq         $s1, $zero, L_0040C0F8
    if (ctx->r17 == 0) {
        // 0x0040C010: sw          $s0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r16;
            goto L_0040C0F8;
    }
    // 0x0040C010: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0040C014: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x0040C018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040C01C: bne         $v1, $v0, L_0040C0F8
    if (ctx->r3 != ctx->r2) {
        // 0x0040C020: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_0040C0F8;
    }
    // 0x0040C020: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0040C024: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0040C028: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0040C02C: beq         $v0, $zero, L_0040C0F8
    if (ctx->r2 == 0) {
        // 0x0040C030: nop
    
            goto L_0040C0F8;
    }
    // 0x0040C030: nop

    // 0x0040C034: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x0040C038: beq         $v0, $zero, L_0040C0F8
    if (ctx->r2 == 0) {
        // 0x0040C03C: nop
    
            goto L_0040C0F8;
    }
    // 0x0040C03C: nop

    // 0x0040C040: lbu         $v0, 0x34($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X34);
    // 0x0040C044: addiu       $v0, $v0, -0xE
    ctx->r2 = ADD32(ctx->r2, -0XE);
    // 0x0040C048: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0040C04C: beq         $v0, $zero, L_0040C0F8
    if (ctx->r2 == 0) {
        // 0x0040C050: nop
    
            goto L_0040C0F8;
    }
    // 0x0040C050: nop

    // 0x0040C054: lw          $v0, 0x80($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X80);
    // 0x0040C058: beq         $s1, $v0, L_0040C06C
    if (ctx->r17 == ctx->r2) {
        // 0x0040C05C: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0040C06C;
    }
    // 0x0040C05C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0040C060: lw          $v0, 0x88($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X88);
    // 0x0040C064: bne         $s1, $v0, L_0040C0F8
    if (ctx->r17 != ctx->r2) {
        // 0x0040C068: nop
    
            goto L_0040C0F8;
    }
    // 0x0040C068: nop

L_0040C06C:
    // 0x0040C06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040C070: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x0040C074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C078: lwc1        $f0, 0x898($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X898);
    // 0x0040C07C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040C080: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0040C084: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x0040C088: jal         0x0020EF2C
    // 0x0040C08C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0040C08C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x0040C090: jal         0x0020F040
    // 0x0040C094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x0040C094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040C098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040C09C: lui         $a2, 0x44C0
    ctx->r6 = S32(0X44C0 << 16);
    // 0x0040C0A0: jal         0x0020EF60
    // 0x0040C0A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x0040C0A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0040C0A8: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x0040C0AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0040C0B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C0B4: lwc1        $f0, 0x89C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X89C);
    // 0x0040C0B8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040C0BC: jal         0x0020EEF8
    // 0x0040C0C0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_0020EEF8(rdram, ctx);
        goto after_3;
    // 0x0040C0C0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x0040C0C4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0040C0C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0040C0CC: addiu       $a2, $zero, 0x500
    ctx->r6 = ADD32(0, 0X500);
    // 0x0040C0D0: lui         $a3, 0x42CC
    ctx->r7 = S32(0X42CC << 16);
    // 0x0040C0D4: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x0040C0D8: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0040C0DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0040C0E0: jal         0x00245828
    // 0x0040C0E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_4;
    // 0x0040C0E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x0040C0E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040C0EC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040C0F0: jal         0x002465C8
    // 0x0040C0F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_5;
    // 0x0040C0F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_5:
L_0040C0F8:
    // 0x0040C0F8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0040C0FC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0040C100: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0040C104: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0040C108: jr          $ra
    // 0x0040C10C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0040C10C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0042123C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042123C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00421240: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x00421244: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x00421248: jr          $ra
    // 0x0042124C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0042124C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_00265954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265958: lh          $v1, 0xBA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XBA);
    // 0x0026595C: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x00265960: beq         $v1, $v0, L_00265A1C
    if (ctx->r3 == ctx->r2) {
        // 0x00265964: nop
    
            goto L_00265A1C;
    }
    // 0x00265964: nop

    // 0x00265968: lbu         $v0, 0xC6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC6);
    // 0x0026596C: lh          $v1, 0xDC($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XDC);
    // 0x00265970: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x00265974: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x00265978: bnel        $v1, $v0, L_00265A1C
    if (ctx->r3 != ctx->r2) {
        // 0x0026597C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00265A1C;
    }
    goto skip_0;
    // 0x0026597C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00265980: lh          $v1, 0xDE($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XDE);
    // 0x00265984: bne         $v1, $v0, L_00265A1C
    if (ctx->r3 != ctx->r2) {
        // 0x00265988: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00265A1C;
    }
    // 0x00265988: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0026598C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00265990: beq         $v0, $zero, L_002659A8
    if (ctx->r2 == 0) {
        // 0x00265994: nop
    
            goto L_002659A8;
    }
    // 0x00265994: nop

    // 0x00265998: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0026599C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x002659A0: beq         $v0, $zero, L_00265A1C
    if (ctx->r2 == 0) {
        // 0x002659A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00265A1C;
    }
    // 0x002659A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002659A8:
    // 0x002659A8: lh          $v0, 0xE0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE0);
    // 0x002659AC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x002659B0: beq         $v0, $zero, L_002659F4
    if (ctx->r2 == 0) {
        // 0x002659B4: nop
    
            goto L_002659F4;
    }
    // 0x002659B4: nop

    // 0x002659B8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002659BC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x002659C0: beq         $v0, $zero, L_002659F4
    if (ctx->r2 == 0) {
        // 0x002659C4: nop
    
            goto L_002659F4;
    }
    // 0x002659C4: nop

    // 0x002659C8: lh          $v0, 0x100($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X100);
    // 0x002659CC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002659D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002659D4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002659D8: lwc1        $f1, 0x108($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X108);
    // 0x002659DC: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002659E0: nop

    // 0x002659E4: bc1t        L_00265A1C
    if (c1cs) {
        // 0x002659E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00265A1C;
    }
    // 0x002659E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002659EC: jr          $ra
    // 0x002659F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002659F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002659F4:
    // 0x002659F4: lh          $v0, 0xE0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE0);
    // 0x002659F8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002659FC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00265A00: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00265A04: lwc1        $f1, 0xD8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XD8);
    // 0x00265A08: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00265A0C: nop

    // 0x00265A10: bc1t        L_00265A1C
    if (c1cs) {
        // 0x00265A14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00265A1C;
    }
    // 0x00265A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265A18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00265A1C:
    // 0x00265A1C: jr          $ra
    // 0x00265A20: nop

    return;
    // 0x00265A20: nop

;}
RECOMP_FUNC void func_00263744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00263748: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026374C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00263750: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00263754: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00263758: jal         0x00220260
    // 0x0026375C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x0026375C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00263760: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00263764: jr          $ra
    // 0x00263768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00263768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00407894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407894: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00407898: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040789C: lwc1        $f0, 0x54C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54C);
    // 0x004078A0: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004078A4: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x004078A8: jr          $ra
    // 0x004078AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004078AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0027551C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027551C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
;}
RECOMP_FUNC void func_00296118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00296118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029611C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00296120: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00296124: beq         $a1, $v0, L_00296164
    if (ctx->r5 == ctx->r2) {
        // 0x00296128: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00296164;
    }
    // 0x00296128: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0029612C: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x00296130: beq         $v0, $zero, L_00296148
    if (ctx->r2 == 0) {
        // 0x00296134: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00296148;
    }
    // 0x00296134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00296138: beql        $a1, $v0, L_002961D8
    if (ctx->r5 == ctx->r2) {
        // 0x0029613C: sw          $a2, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r6;
            goto L_002961D8;
    }
    goto skip_0;
    // 0x0029613C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    skip_0:
    // 0x00296140: j           L_002961C0
    // 0x00296144: nop

        goto L_002961C0;
    // 0x00296144: nop

L_00296148:
    // 0x00296148: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0029614C: beq         $a1, $v0, L_0029617C
    if (ctx->r5 == ctx->r2) {
        // 0x00296150: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_0029617C;
    }
    // 0x00296150: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00296154: beq         $a1, $v0, L_002961A4
    if (ctx->r5 == ctx->r2) {
        // 0x00296158: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002961A4;
    }
    // 0x00296158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029615C: j           L_002961C0
    // 0x00296160: nop

        goto L_002961C0;
    // 0x00296160: nop

L_00296164:
    // 0x00296164: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x00296168: beql        $v0, $zero, L_00296174
    if (ctx->r2 == 0) {
        // 0x0029616C: sw          $a2, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->r6;
            goto L_00296174;
    }
    goto skip_1;
    // 0x0029616C: sw          $a2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r6;
    skip_1:
    // 0x00296170: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_00296174:
    // 0x00296174: j           L_002961D8
    // 0x00296178: sw          $a2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r6;
        goto L_002961D8;
    // 0x00296178: sw          $a2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r6;
L_0029617C:
    // 0x0029617C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00296180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00296184: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x00296188: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x0029618C: beq         $v1, $zero, L_002961D8
    if (ctx->r3 == 0) {
        // 0x00296190: sh          $v0, 0x1A($a0)
        MEM_H(0X1A, ctx->r4) = ctx->r2;
            goto L_002961D8;
    }
    // 0x00296190: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x00296194: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x00296198: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0029619C: j           L_002961D0
    // 0x002961A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_002961D0;
    // 0x002961A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_002961A4:
    // 0x002961A4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002961A8: beq         $v1, $zero, L_002961D8
    if (ctx->r3 == 0) {
        // 0x002961AC: sw          $v0, 0x48($a0)
        MEM_W(0X48, ctx->r4) = ctx->r2;
            goto L_002961D8;
    }
    // 0x002961AC: sw          $v0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r2;
    // 0x002961B0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002961B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x002961B8: j           L_002961D0
    // 0x002961BC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_002961D0;
    // 0x002961BC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_002961C0:
    // 0x002961C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x002961C4: beq         $a0, $zero, L_002961D8
    if (ctx->r4 == 0) {
        // 0x002961C8: nop
    
            goto L_002961D8;
    }
    // 0x002961C8: nop

    // 0x002961CC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
L_002961D0:
    // 0x002961D0: jalr        $v0
    // 0x002961D4: nop

    turok2_patch_fix_jalr(rdram, ctx);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_0;
    // 0x002961D4: nop

    after_0:
L_002961D8:
    // 0x002961D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002961DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002961E0: jr          $ra
    // 0x002961E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002961E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00260610(uint8_t* rdram, recomp_context* ctx) {
    // turok2: the ELF symbol for this function was at 0x0026060C,
    // 4 bytes ahead of its prologue, so the address the game calls
    // was missing from the function table. The 1 instruction(s)
    // that used to open the body stored through the caller's frame and
    // belong to the code before this function.
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260610: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x00260614: sw          $zero, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = 0;
    // 0x00260618: sw          $zero, 0x70($a1)
    MEM_W(0X70, ctx->r5) = 0;
    // 0x0026061C: sw          $zero, 0x74($a1)
    MEM_W(0X74, ctx->r5) = 0;
    // 0x00260620: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00260624: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00260628: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026062C: jr          $ra
    // 0x00260630: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x00260630: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00231D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231D98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00231D9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00231DA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00231DA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00231DA8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00231DAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00231DB0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00231DB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00231DB8: jal         0x0022D09C
    // 0x00231DBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_0022D09C(rdram, ctx);
        goto after_0;
    // 0x00231DBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00231DC0: lb          $a2, 0x6($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X6);
    // 0x00231DC4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00231DC8: beq         $a2, $s1, L_00231DE0
    if (ctx->r6 == ctx->r17) {
        // 0x00231DCC: nop
    
            goto L_00231DE0;
    }
    // 0x00231DCC: nop

    // 0x00231DD0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00231DD4: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00231DD8: jal         0x002350EC
    // 0x00231DDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002350EC(rdram, ctx);
        goto after_1;
    // 0x00231DDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_00231DE0:
    // 0x00231DE0: lb          $a1, 0x7($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X7);
    // 0x00231DE4: beql        $a1, $s1, L_00231E00
    if (ctx->r5 == ctx->r17) {
        // 0x00231DE8: sw          $zero, 0x118($s0)
        MEM_W(0X118, ctx->r16) = 0;
            goto L_00231E00;
    }
    goto skip_0;
    // 0x00231DE8: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
    skip_0:
    // 0x00231DEC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00231DF0: addiu       $a0, $a0, -0xCC
    ctx->r4 = ADD32(ctx->r4, -0XCC);
    // 0x00231DF4: jal         0x00228AB0
    // 0x00231DF8: nop

    func_00228AB0(rdram, ctx);
        goto after_2;
    // 0x00231DF8: nop

    after_2:
    // 0x00231DFC: sw          $v0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->r2;
L_00231E00:
    // 0x00231E00: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231E04: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x00231E08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00231E0C: bne         $v0, $zero, L_00231E7C
    if (ctx->r2 != 0) {
        // 0x00231E10: nop
    
            goto L_00231E7C;
    }
    // 0x00231E10: nop

    // 0x00231E14: lh          $t0, 0xC($s2)
    ctx->r8 = MEM_H(ctx->r18, 0XC);
    // 0x00231E18: beq         $t0, $zero, L_00231E7C
    if (ctx->r8 == 0) {
        // 0x00231E1C: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_00231E7C;
    }
    // 0x00231E1C: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x00231E20: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x00231E24: beq         $v1, $v0, L_00231E48
    if (ctx->r3 == ctx->r2) {
        // 0x00231E28: slt         $v0, $v1, $v0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_00231E48;
    }
    // 0x00231E28: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00231E2C: bne         $v0, $zero, L_00231E60
    if (ctx->r2 != 0) {
        // 0x00231E30: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00231E60;
    }
    // 0x00231E30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00231E34: slti        $v0, $v1, 0x61
    ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    // 0x00231E38: beq         $v0, $zero, L_00231E5C
    if (ctx->r2 == 0) {
        // 0x00231E3C: slti        $v0, $v1, 0x5F
        ctx->r2 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
            goto L_00231E5C;
    }
    // 0x00231E3C: slti        $v0, $v1, 0x5F
    ctx->r2 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
    // 0x00231E40: bne         $v0, $zero, L_00231E60
    if (ctx->r2 != 0) {
        // 0x00231E44: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00231E60;
    }
    // 0x00231E44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00231E48:
    // 0x00231E48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00231E4C: jal         0x00232AC4
    // 0x00231E50: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    func_00232AC4(rdram, ctx);
        goto after_3;
    // 0x00231E50: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    after_3:
    // 0x00231E54: j           L_00231E7C
    // 0x00231E58: nop

        goto L_00231E7C;
    // 0x00231E58: nop

L_00231E5C:
    // 0x00231E5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00231E60:
    // 0x00231E60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00231E64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00231E68: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00231E6C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00231E70: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00231E74: jal         0x00275544
    // 0x00231E78: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_00275544(rdram, ctx);
        goto after_4;
    // 0x00231E78: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_4:
L_00231E7C:
    // 0x00231E7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00231E80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00231E84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00231E88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00231E8C: jr          $ra
    // 0x00231E90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00231E90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002800A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002800A0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x002800A4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x002800A8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x002800AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002800B0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x002800B4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x002800B8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x002800BC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x002800C0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x002800C4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x002800C8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002800CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002800D0: sdc1        $f24, 0x70($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X70, ctx->r29);
    // 0x002800D4: sdc1        $f23, 0x68($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X68, ctx->r29);
    // 0x002800D8: sdc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X60, ctx->r29);
    // 0x002800DC: sdc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X58, ctx->r29);
    // 0x002800E0: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x002800E4: jal         0x00284188
    // 0x002800E8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_00284188(rdram, ctx);
        goto after_0;
    // 0x002800E8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002800EC: beq         $v0, $zero, L_00280104
    if (ctx->r2 == 0) {
        // 0x002800F0: addu        $a0, $fp, $zero
        ctx->r4 = ADD32(ctx->r30, 0);
            goto L_00280104;
    }
    // 0x002800F0: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x002800F4: jal         0x0027FDE4
    // 0x002800F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0027FDE4(rdram, ctx);
        goto after_1;
    // 0x002800F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002800FC: j           L_002803A4
    // 0x00280100: nop

        goto L_002803A4;
    // 0x00280100: nop

L_00280104:
    // 0x00280104: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00280108: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0028010C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280110: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280114: lwc1        $f20, -0x6528($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6528);
    // 0x00280118: lwc1        $f3, 0x28C($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X28C);
    // 0x0028011C: lwc1        $f1, 0x288($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X288);
    // 0x00280120: lwc1        $f5, 0x290($s1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r17, 0X290);
    // 0x00280124: lwc1        $f4, 0x294($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X294);
    // 0x00280128: div.s       $f21, $f3, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0028012C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00280130: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00280134: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280138: div.s       $f24, $f1, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0028013C: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x00280140: nop

    // 0x00280144: bc1t        L_0028015C
    if (c1cs) {
        // 0x00280148: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_0028015C;
    }
    // 0x00280148: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0028014C: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x00280150: nop

    // 0x00280154: bc1fl       L_0028015C
    if (!c1cs) {
        // 0x00280158: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0028015C;
    }
    goto skip_0;
    // 0x00280158: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_0:
L_0028015C:
    // 0x0028015C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280160: lwc1        $f2, -0x6524($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6524);
    // 0x00280164: mul.s       $f2, $f1, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00280168: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028016C: lwc1        $f0, -0x6520($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6520);
    // 0x00280170: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00280174: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280178: lwc1        $f1, -0x651C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X651C);
    // 0x0028017C: mul.s       $f1, $f3, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00280180: add.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x00280184: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x00280188: lw          $s0, 0xE2C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XE2C);
    // 0x0028018C: beq         $s0, $zero, L_002803A4
    if (ctx->r16 == 0) {
        // 0x00280190: sub.s       $f22, $f1, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_002803A4;
    }
    // 0x00280190: sub.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00280194: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x00280198: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x0028019C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x002801A0: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x002801A4: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x002801A8: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x002801AC: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
L_002801B0:
    // 0x002801B0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002801B4: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x002801B8: beq         $v0, $zero, L_00280374
    if (ctx->r2 == 0) {
        // 0x002801BC: addiu       $a0, $s1, 0xE28
        ctx->r4 = ADD32(ctx->r17, 0XE28);
            goto L_00280374;
    }
    // 0x002801BC: addiu       $a0, $s1, 0xE28
    ctx->r4 = ADD32(ctx->r17, 0XE28);
    // 0x002801C0: jal         0x00277F6C
    // 0x002801C4: nop

    func_00277F6C(rdram, ctx);
        goto after_2;
    // 0x002801C4: nop

    after_2:
    // 0x002801C8: bne         $s3, $zero, L_002801DC
    if (ctx->r19 != 0) {
        // 0x002801CC: nop
    
            goto L_002801DC;
    }
    // 0x002801CC: nop

    // 0x002801D0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x002801D4: beql        $v0, $zero, L_002801F4
    if (ctx->r2 == 0) {
        // 0x002801D8: sw          $s7, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r23;
            goto L_002801F4;
    }
    goto skip_1;
    // 0x002801D8: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    skip_1:
L_002801DC:
    // 0x002801DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002801E0: lwc1        $f20, -0x6518($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6518);
    // 0x002801E4: jal         0x0027836C
    // 0x002801E8: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    func_0027836C(rdram, ctx);
        goto after_3;
    // 0x002801E8: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    after_3:
    // 0x002801EC: j           L_002801FC
    // 0x002801F0: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
        goto L_002801FC;
    // 0x002801F0: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
L_002801F4:
    // 0x002801F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002801F8: lwc1        $f20, -0x6514($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6514);
L_002801FC:
    // 0x002801FC: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x00280200: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00280204: mul.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x00280208: nop

    // 0x0028020C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00280210: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00280214: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x00280218: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0028021C: nop

    // 0x00280220: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00280224: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00280228: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0028022C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x00280230: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x00280234: trunc.w.s   $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    ctx->f6.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x00280238: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0028023C: jal         0x00278CDC
    // 0x00280240: nop

    func_00278CDC(rdram, ctx);
        goto after_4;
    // 0x00280240: nop

    after_4:
    // 0x00280244: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00280248: beq         $v1, $s6, L_002802C4
    if (ctx->r3 == ctx->r22) {
        // 0x0028024C: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_002802C4;
    }
    // 0x0028024C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00280250: beq         $v0, $zero, L_00280268
    if (ctx->r2 == 0) {
        // 0x00280254: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00280268;
    }
    // 0x00280254: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00280258: beq         $v1, $v0, L_00280278
    if (ctx->r3 == ctx->r2) {
        // 0x0028025C: nop
    
            goto L_00280278;
    }
    // 0x0028025C: nop

    // 0x00280260: j           L_00280368
    // 0x00280264: nop

        goto L_00280368;
    // 0x00280264: nop

L_00280268:
    // 0x00280268: beq         $v1, $s5, L_00280304
    if (ctx->r3 == ctx->r21) {
        // 0x0028026C: nop
    
            goto L_00280304;
    }
    // 0x0028026C: nop

    // 0x00280270: j           L_00280368
    // 0x00280274: nop

        goto L_00280368;
    // 0x00280274: nop

L_00280278:
    // 0x00280278: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0028027C: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    // 0x00280280: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00280284: slti        $v0, $v0, 0xFF
    ctx->r2 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x00280288: bne         $v0, $zero, L_002802A0
    if (ctx->r2 != 0) {
        // 0x0028028C: nop
    
            goto L_002802A0;
    }
    // 0x0028028C: nop

    // 0x00280290: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00280294: sw          $s4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r20;
    // 0x00280298: sw          $s6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r22;
    // 0x0028029C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_002802A0:
    // 0x002802A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002802A4: lwc1        $f0, -0x6510($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6510);
    // 0x002802A8: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x002802AC: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x002802B0: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x002802B4: jal         0x002982F0
    // 0x002802B8: nop

    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x002802B8: nop

    after_5:
    // 0x002802BC: j           L_00280368
    // 0x002802C0: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
        goto L_00280368;
    // 0x002802C0: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
L_002802C4:
    // 0x002802C4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x002802C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002802CC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002802D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002802D4: lwc1        $f2, -0x650C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X650C);
    // 0x002802D8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002802DC: sw          $s4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r20;
    // 0x002802E0: swc1        $f2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f2.u32l;
    // 0x002802E4: c.lt.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl < ctx->f23.fl;
    // 0x002802E8: nop

    // 0x002802EC: bc1f        L_00280368
    if (!c1cs) {
        // 0x002802F0: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_00280368;
    }
    // 0x002802F0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x002802F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x002802F8: sw          $s5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r21;
    // 0x002802FC: j           L_00280368
    // 0x00280300: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
        goto L_00280368;
    // 0x00280300: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_00280304:
    // 0x00280304: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280308: lwc1        $f0, -0x6508($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6508);
    // 0x0028030C: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00280310: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00280314: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00280318: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028031C: lwc1        $f0, -0x6504($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6504);
    // 0x00280320: jal         0x002982F0
    // 0x00280324: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x00280324: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    after_6:
    // 0x00280328: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028032C: lwc1        $f1, -0x6500($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6500);
    // 0x00280330: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00280334: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00280338: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0028033C: c.lt.s      $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f1.fl < ctx->f23.fl;
    // 0x00280340: nop

    // 0x00280344: bc1f        L_00280350
    if (!c1cs) {
        // 0x00280348: swc1        $f1, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_00280350;
    }
    // 0x00280348: swc1        $f1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0028034C: swc1        $f23, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
L_00280350:
    // 0x00280350: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00280354: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
    // 0x00280358: bgez        $v0, L_00280368
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0028035C: sw          $v0, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r2;
            goto L_00280368;
    }
    // 0x0028035C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x00280360: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00280364: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_00280368:
    // 0x00280368: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0028036C: bne         $v0, $zero, L_00280388
    if (ctx->r2 != 0) {
        // 0x00280370: addiu       $a0, $s1, 0xE28
        ctx->r4 = ADD32(ctx->r17, 0XE28);
            goto L_00280388;
    }
    // 0x00280370: addiu       $a0, $s1, 0xE28
    ctx->r4 = ADD32(ctx->r17, 0XE28);
L_00280374:
    // 0x00280374: jal         0x00200738
    // 0x00280378: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_7;
    // 0x00280378: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x0028037C: addiu       $a0, $fp, 0xF0C
    ctx->r4 = ADD32(ctx->r30, 0XF0C);
    // 0x00280380: jal         0x00200518
    // 0x00280384: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_8;
    // 0x00280384: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_00280388:
    // 0x00280388: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028038C: lwc1        $f0, -0x64FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X64FC);
    // 0x00280390: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00280394: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00280398: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0028039C: bne         $s0, $zero, L_002801B0
    if (ctx->r16 != 0) {
        // 0x002803A0: sub.s       $f22, $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f0.fl;
            goto L_002801B0;
    }
    // 0x002803A0: sub.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f0.fl;
L_002803A4:
    // 0x002803A4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x002803A8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x002803AC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x002803B0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x002803B4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x002803B8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x002803BC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x002803C0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002803C4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002803C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002803CC: ldc1        $f24, 0x70($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X70);
    // 0x002803D0: ldc1        $f23, 0x68($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X68);
    // 0x002803D4: ldc1        $f22, 0x60($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X60);
    // 0x002803D8: ldc1        $f21, 0x58($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X58);
    // 0x002803DC: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x002803E0: jr          $ra
    // 0x002803E4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x002803E4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_0028E6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028E6DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0028E6E0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0028E6E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028E6E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0028E6EC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x0028E6F0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0028E6F4: jal         0x0029B030
    // 0x0028E6F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0028E6F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0028E6FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028E700: addiu       $a0, $a0, 0x6C4
    ctx->r4 = ADD32(ctx->r4, 0X6C4);
    // 0x0028E704: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0028E708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0028E70C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028E710: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x0028E714: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x0028E718: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x0028E71C: jal         0x0029B820
    // 0x0028E720: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0028E720: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_1:
    // 0x0028E724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028E728: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x0028E72C: jal         0x0029B6F0
    // 0x0028E730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0028E730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x0028E734: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0028E738: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0028E73C: jal         0x002052D8
    // 0x0028E740: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0028E740: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x0028E744: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0028E748: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0028E74C: jr          $ra
    // 0x0028E750: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0028E750: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_002680C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002680C4: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x002680C8: jr          $ra
    // 0x002680CC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    return;
    // 0x002680CC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
;}
RECOMP_FUNC void func_0040C110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0040C114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040C118: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040C11C: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x0040C120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0040C124: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x0040C128: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0040C12C: lwc1        $f12, 0x688($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X688);
    // 0x0040C130: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x0040C134: lwc1        $f14, 0x68C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X68C);
    // 0x0040C138: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0040C13C: jal         0x002119FC
    // 0x0040C140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0040C140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0040C144: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C148: lwc1        $f12, 0x8A0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8A0);
    // 0x0040C14C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040C150: lwc1        $f14, 0x8A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8A4);
    // 0x0040C154: jal         0x002119FC
    // 0x0040C158: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x0040C158: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x0040C15C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0040C160: jal         0x002982F0
    // 0x0040C164: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0040C164: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_2:
    // 0x0040C168: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0040C16C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0040C170: jal         0x002974C0
    // 0x0040C174: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x0040C174: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x0040C178: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0040C17C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0040C180: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x0040C184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0040C188: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040C18C: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x0040C190: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0040C194: jr          $ra
    // 0x0040C198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0040C198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029DF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DF70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029DF74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029DF78: jal         0x0029DFF0
    // 0x0029DF7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029DF7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0029DF80: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029DF84: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029DF88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0029DF8C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0029DF90: lw          $v1, -0x76E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X76E0);
    // 0x0029DF94: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0029DF98: jal         0x0029C6DC
    // 0x0029DF9C: sh          $a1, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r5;
    func_0029C6DC(rdram, ctx);
        goto after_1;
    // 0x0029DF9C: sh          $a1, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r5;
    after_1:
    // 0x0029DFA0: jal         0x0029E010
    // 0x0029DFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x0029DFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0029DFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029DFAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DFB0: jr          $ra
    // 0x0029DFB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029DFB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00451CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451CB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00451CB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451CBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451CC0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451CC4: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451CC8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451CCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451CD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451CD4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451CD8: lb          $v0, 0x23($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X23);
    // 0x00451CDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451CE0: jal         0x0041648C
    // 0x00451CE4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451CE4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451CE8: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x00451CEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00451CF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451CF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451CF8: jr          $ra
    // 0x00451CFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451CFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A50F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A50F4: beq         $v0, $zero, L_002A5104
    if (ctx->r2 == 0) {
            // 0x002A50F8: sltu        $v0, $a1, $a3
    ctx->r2 = ctx->r5 < ctx->r7 ? 1 : 0;
    func_002A5104(rdram, ctx);
    return;
    }
    // 0x002A50F8: sltu        $v0, $a1, $a3
    ctx->r2 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x002A50FC: jr          $ra
    // 0x002A5100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x002A5100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_00412E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412E98: addu        $v0, $v1, $a3
    ctx->r2 = ADD32(ctx->r3, ctx->r7);
    // 0x00412E9C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00412EA0: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x00412EA4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x00412EA8: jr          $ra
    // 0x00412EAC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    return;
    // 0x00412EAC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_0041CA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CA00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041CA04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CA08: addiu       $a0, $a0, -0x5350
    ctx->r4 = ADD32(ctx->r4, -0X5350);
    // 0x0041CA0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041CA10: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x0041CA14: beq         $v0, $zero, L_0041CA34
    if (ctx->r2 == 0) {
        // 0x0041CA18: nop
    
            goto L_0041CA34;
    }
    // 0x0041CA18: nop

    // 0x0041CA1C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CA20: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041CA24: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x0041CA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041CA2C: beql        $v1, $v0, L_0041CA34
    if (ctx->r3 == ctx->r2) {
        // 0x0041CA30: sw          $v1, 0x40($a0)
        MEM_W(0X40, ctx->r4) = ctx->r3;
            goto L_0041CA34;
    }
    goto skip_0;
    // 0x0041CA30: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
    skip_0:
L_0041CA34:
    // 0x0041CA34: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041CA38: lw          $v1, -0x6760($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6760);
    // 0x0041CA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041CA40: bne         $v1, $v0, L_0041CA60
    if (ctx->r3 != ctx->r2) {
        // 0x0041CA44: nop
    
            goto L_0041CA60;
    }
    // 0x0041CA44: nop

    // 0x0041CA48: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041CA4C: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041CA50: jal         0x00430330
    // 0x0041CA54: nop

    func_00430330(rdram, ctx);
        goto after_0;
    // 0x0041CA54: nop

    after_0:
    // 0x0041CA58: j           L_0041CA68
    // 0x0041CA5C: nop

        goto L_0041CA68;
    // 0x0041CA5C: nop

L_0041CA60:
    // 0x0041CA60: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CA64: sw          $zero, 0x510($v0)
    MEM_W(0X510, ctx->r2) = 0;
L_0041CA68:
    // 0x0041CA68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041CA6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041CA70: jr          $ra
    // 0x0041CA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041CA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021F1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F1B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021F1B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0021F1BC: jal         0x00245848
    // 0x0021F1C0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00245848(rdram, ctx);
        goto after_0;
    // 0x0021F1C0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0021F1C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0021F1C8: jr          $ra
    // 0x0021F1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021F1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028135C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028135C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00281360: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x00281364: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00281368: sdc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X50, ctx->r29);
    // 0x0028136C: mtc1        $a2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r6;
    // 0x00281370: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x00281374: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x00281378: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0028137C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00281380: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00281384: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00281388: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0028138C: lw          $s0, 0x11C0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X11C0);
    // 0x00281390: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x00281394: beq         $s0, $zero, L_002813B8
    if (ctx->r16 == 0) {
        // 0x00281398: addiu       $a0, $s1, 0x11C0
        ctx->r4 = ADD32(ctx->r17, 0X11C0);
            goto L_002813B8;
    }
    // 0x00281398: addiu       $a0, $s1, 0x11C0
    ctx->r4 = ADD32(ctx->r17, 0X11C0);
    // 0x0028139C: jal         0x00200738
    // 0x002813A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_0;
    // 0x002813A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002813A4: addiu       $a0, $s1, 0x11D4
    ctx->r4 = ADD32(ctx->r17, 0X11D4);
    // 0x002813A8: jal         0x00200518
    // 0x002813AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_1;
    // 0x002813AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002813B0: j           L_002813BC
    // 0x002813B4: nop

        goto L_002813BC;
    // 0x002813B4: nop

L_002813B8:
    // 0x002813B8: lw          $s0, 0x11D8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X11D8);
L_002813BC:
    // 0x002813BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002813C0: lwc1        $f1, -0x63FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X63FC);
    // 0x002813C4: mul.s       $f2, $f20, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x002813C8: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x002813CC: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x002813D0: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x002813D4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x002813D8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x002813DC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x002813E0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x002813E4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x002813E8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x002813EC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x002813F0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x002813F4: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    // 0x002813F8: mul.s       $f3, $f21, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x002813FC: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x00281400: sw          $s2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r18;
    // 0x00281404: sw          $s2, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r18;
    // 0x00281408: mul.s       $f1, $f22, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x0028140C: sw          $s2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r18;
    // 0x00281410: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x00281414: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x00281418: swc1        $f3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f_odd[(3 - 1) * 2];
    // 0x0028141C: swc1        $f1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281420: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00281424: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00281428: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0028142C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00281430: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x00281434: ldc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X50);
    // 0x00281438: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0028143C: jr          $ra
    // 0x00281440: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00281440: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00450E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00450E98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00450E9C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00450EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00450EA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00450EA8: sw          $zero, -0x5310($at)
    MEM_W(-0X5310, ctx->r1) = 0;
    // 0x00450EAC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00450EB0: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00450EB4: jal         0x00285A80
    // 0x00450EB8: nop

    func_00285A80(rdram, ctx);
        goto after_0;
    // 0x00450EB8: nop

    after_0:
    // 0x00450EBC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x00450EC0: jal         0x00285AE0
    // 0x00450EC4: nop

    func_00285AE0(rdram, ctx);
        goto after_1;
    // 0x00450EC4: nop

    after_1:
    // 0x00450EC8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x00450ECC: jal         0x00285BD0
    // 0x00450ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x00450ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00450ED4: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00450ED8: sw          $zero, 0xBF8($v0)
    MEM_W(0XBF8, ctx->r2) = 0;
    // 0x00450EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00450EE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00450EE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00450EE8: jr          $ra
    // 0x00450EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00450EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00277328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00277328: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x0027732C: addiu       $t2, $t2, -0x7DB0
    ctx->r10 = ADD32(ctx->r10, -0X7DB0);
    // 0x00277330: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x00277334: addiu       $t1, $t1, -0x7D90
    ctx->r9 = ADD32(ctx->r9, -0X7D90);
    // 0x00277338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0027733C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277340: lwc1        $f8, -0x7DBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7DBC);
    // 0x00277344: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x00277348: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027734C: lwc1        $f5, -0x7DB8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X7DB8);
    // 0x00277350: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277354: lwc1        $f6, -0x7DB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7DB4);
    // 0x00277358: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0027735C: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00277360: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00277364: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x00277368: addiu       $t0, $v0, 0x60
    ctx->r8 = ADD32(ctx->r2, 0X60);
    // 0x0027736C: addiu       $a3, $v1, 0x60
    ctx->r7 = ADD32(ctx->r3, 0X60);
L_00277370:
    // 0x00277370: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x00277374: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x00277378: beq         $v0, $zero, L_00277650
    if (ctx->r2 == 0) {
        // 0x0027737C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00277650;
    }
    // 0x0027737C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00277380: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00277384: addu        $v0, $v0, $t2
    gpr jr_addend_0027738C = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x00277388: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x0027738C: jr          $v0
    // 0x00277390: nop

    switch (jr_addend_0027738C >> 2) {
        case 0: goto L_00277650; break;
        case 1: goto L_00277650; break;
        case 2: goto L_00277394; break;
        case 3: goto L_002774F4; break;
        case 4: goto L_00277510; break;
        case 5: goto L_002775D0; break;
        case 6: goto L_002775FC; break;
        default: switch_error(__func__, 0x0027738C, 0x800A8250);
    }
    // 0x00277390: nop

L_00277394:
    // 0x00277394: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00277398: beql        $v1, $zero, L_00277650
    if (ctx->r3 == 0) {
        // 0x0027739C: sw          $a2, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r6;
            goto L_00277650;
    }
    goto skip_0;
    // 0x0027739C: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    skip_0:
    // 0x002773A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002773A4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x002773A8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x002773AC: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x002773B0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x002773B4: beq         $v0, $zero, L_002774E8
    if (ctx->r2 == 0) {
        // 0x002773B8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002774E8;
    }
    // 0x002773B8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002773BC: addu        $v0, $v0, $t1
    gpr jr_addend_002773C4 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x002773C0: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x002773C4: jr          $v0
    // 0x002773C8: nop

    switch (jr_addend_002773C4 >> 2) {
        case 0: goto L_002773D8; break;
        case 1: goto L_0027740C; break;
        case 2: goto L_0027742C; break;
        case 3: goto L_00277488; break;
        case 4: goto L_002774B8; break;
        case 5: goto L_002773CC; break;
        default: switch_error(__func__, 0x002773C4, 0x800A8270);
    }
    // 0x002773C8: nop

L_002773CC:
    // 0x002773CC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x002773D0: j           L_00277650
    // 0x002773D4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
        goto L_00277650;
    // 0x002773D4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_002773D8:
    // 0x002773D8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002773DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002773E0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002773E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002773E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002773EC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x002773F0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002773F4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002773F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002773FC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00277400: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00277404: j           L_00277650
    // 0x00277408: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_00277650;
    // 0x00277408: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_0027740C:
    // 0x0027740C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00277410: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00277414: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00277418: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0027741C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x00277420: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00277424: j           L_00277650
    // 0x00277428: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
        goto L_00277650;
    // 0x00277428: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
L_0027742C:
    // 0x0027742C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00277430: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00277434: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00277438: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0027743C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00277440: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277444: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00277448: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x0027744C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00277450: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00277454: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00277458: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0027745C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x00277460: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00277464: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x00277468: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0027746C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00277470: lwc1        $f0, -0x7D78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7D78);
    // 0x00277474: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00277478: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0027747C: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00277480: j           L_00277650
    // 0x00277484: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
        goto L_00277650;
    // 0x00277484: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
L_00277488:
    // 0x00277488: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0027748C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x00277490: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00277494: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x00277498: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x0027749C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002774A0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002774A4: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x002774A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002774AC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002774B0: j           L_00277650
    // 0x002774B4: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
        goto L_00277650;
    // 0x002774B4: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
L_002774B8:
    // 0x002774B8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002774BC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x002774C0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x002774C4: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x002774C8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x002774CC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x002774D0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002774D4: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x002774D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x002774DC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x002774E0: j           L_00277650
    // 0x002774E4: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
        goto L_00277650;
    // 0x002774E4: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
L_002774E8:
    // 0x002774E8: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x002774EC: j           L_00277650
    // 0x002774F0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
        goto L_00277650;
    // 0x002774F0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_002774F4:
    // 0x002774F4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002774F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002774FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x00277500: bgtz        $v1, L_00277650
    if (SIGNED(ctx->r3) > 0) {
        // 0x00277504: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_00277650;
    }
    // 0x00277504: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00277508: j           L_00277650
    // 0x0027750C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_00277650;
    // 0x0027750C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00277510:
    // 0x00277510: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x00277514: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00277518: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0027751C: lwc1        $f3, 0x30($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X30);
        turok2_patch_scale_overlay_lerp(rdram, ctx);

    // 0x00277520: mul.s       $f4, $f0, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00277524: lwc1        $f1, 0x14($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x00277528: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x0027752C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00277530: mul.s       $f1, $f0, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00277534: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x00277538: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x0027753C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00277540: c.lt.s      $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    c1cs = ctx->f4.fl < ctx->f7.fl;
    // 0x00277544: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x00277548: bc1f        L_0027756C
    if (!c1cs) {
        // 0x0027754C: swc1        $f0, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
            goto L_0027756C;
    }
    // 0x0027754C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x00277550: neg.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = -ctx->f4.fl;
    // 0x00277554: c.lt.s      $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f0.fl < ctx->f5.fl;
    // 0x00277558: nop

    // 0x0027755C: bc1f        L_00277650
    if (!c1cs) {
        // 0x00277560: nop
    
            goto L_00277650;
    }
    // 0x00277560: nop

    // 0x00277564: j           L_0027757C
    // 0x00277568: nop

        goto L_0027757C;
    // 0x00277568: nop

L_0027756C:
    // 0x0027756C: c.lt.s      $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl < ctx->f5.fl;
    // 0x00277570: nop

    // 0x00277574: bc1f        L_00277650
    if (!c1cs) {
        // 0x00277578: nop
    
            goto L_00277650;
    }
    // 0x00277578: nop

L_0027757C:
    // 0x0027757C: c.lt.s      $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    c1cs = ctx->f1.fl < ctx->f7.fl;
    // 0x00277580: nop

    // 0x00277584: bc1f        L_002775A8
    if (!c1cs) {
        // 0x00277588: nop
    
            goto L_002775A8;
    }
    // 0x00277588: nop

    // 0x0027758C: neg.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = -ctx->f1.fl;
    // 0x00277590: c.lt.s      $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f0.fl < ctx->f5.fl;
    // 0x00277594: nop

    // 0x00277598: bc1f        L_00277650
    if (!c1cs) {
        // 0x0027759C: nop
    
            goto L_00277650;
    }
    // 0x0027759C: nop

    // 0x002775A0: j           L_002775B8
    // 0x002775A4: nop

        goto L_002775B8;
    // 0x002775A4: nop

L_002775A8:
    // 0x002775A8: c.lt.s      $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f1.fl < ctx->f5.fl;
    // 0x002775AC: nop

    // 0x002775B0: bc1f        L_00277650
    if (!c1cs) {
        // 0x002775B4: nop
    
            goto L_00277650;
    }
    // 0x002775B4: nop

L_002775B8:
    // 0x002775B8: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x002775BC: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x002775C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002775C4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x002775C8: j           L_00277650
    // 0x002775CC: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
        goto L_00277650;
    // 0x002775CC: swc1        $f1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
L_002775D0:
    // 0x002775D0: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x002775D4: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x002775D8: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        turok2_patch_scale_overlay_f0(rdram, ctx);

    // 0x002775DC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002775E0: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
        turok2_patch_scale_overlay_f0(rdram, ctx);

    // 0x002775E4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002775E8: mtc1        $t0, $f0
    ctx->f0.u32l = ctx->r8;
    // 0x002775EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002775F0: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x002775F4: j           L_00277624
    // 0x002775F8: swc1        $f1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
        goto L_00277624;
    // 0x002775F8: swc1        $f1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
L_002775FC:
    // 0x002775FC: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00277600: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00277604: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
        turok2_patch_scale_overlay_f0(rdram, ctx);

    // 0x00277608: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0027760C: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
        turok2_patch_scale_overlay_f0(rdram, ctx);

    // 0x00277610: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00277614: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x00277618: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027761C: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x00277620: swc1        $f1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
L_00277624:
    // 0x00277624: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    // 0x00277628: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0027762C: nop

    // 0x00277630: bc1tl       L_0027764C
    if (c1cs) {
        // 0x00277634: sw          $zero, 0x0($a0)
        MEM_W(0X0, ctx->r4) = 0;
            goto L_0027764C;
    }
    goto skip_1;
    // 0x00277634: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    skip_1:
    // 0x00277638: c.lt.s      $f1, $f6
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f1.fl < ctx->f6.fl;
    // 0x0027763C: nop

    // 0x00277640: bc1f        L_00277650
    if (!c1cs) {
        // 0x00277644: nop
    
            goto L_00277650;
    }
    // 0x00277644: nop

    // 0x00277648: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_0027764C:
    // 0x0027764C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00277650:
    // 0x00277650: beq         $a1, $zero, L_00277660
    if (ctx->r5 == 0) {
        // 0x00277654: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00277660;
    }
    // 0x00277654: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00277658: j           L_00277370
    // 0x0027765C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
        goto L_00277370;
    // 0x0027765C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_00277660:
    // 0x00277660: jr          $ra
    // 0x00277664: nop

    return;
    // 0x00277664: nop

;}
RECOMP_FUNC void func_00264644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264648: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026464C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00264650: addiu       $t0, $v0, 0x14
    ctx->r8 = ADD32(ctx->r2, 0X14);
    // 0x00264654: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
    // 0x00264658: andi        $v0, $a3, 0x20
    ctx->r2 = ctx->r7 & 0X20;
    // 0x0026465C: beq         $v0, $zero, L_00264674
    if (ctx->r2 == 0) {
        // 0x00264660: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00264674;
    }
    // 0x00264660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00264664: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264668: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x0026466C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00264670: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
L_00264674:
    // 0x00264674: andi        $v0, $a3, 0x200
    ctx->r2 = ctx->r7 & 0X200;
    // 0x00264678: beq         $v0, $zero, L_00264690
    if (ctx->r2 == 0) {
        // 0x0026467C: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_00264690;
    }
    // 0x0026467C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x00264680: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264684: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00264688: beql        $v0, $zero, L_00264690
    if (ctx->r2 == 0) {
        // 0x0026468C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00264690;
    }
    goto skip_0;
    // 0x0026468C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_0:
L_00264690:
    // 0x00264690: lw          $v0, 0x24($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X24);
    // 0x00264694: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x00264698: beq         $v0, $zero, L_002646B0
    if (ctx->r2 == 0) {
        // 0x0026469C: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_002646B0;
    }
    // 0x0026469C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x002646A0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002646A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002646A8: bnel        $v0, $zero, L_002646B0
    if (ctx->r2 != 0) {
        // 0x002646AC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002646B0;
    }
    goto skip_1;
    // 0x002646AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_1:
L_002646B0:
    // 0x002646B0: beql        $a2, $zero, L_002646D8
    if (ctx->r6 == 0) {
        // 0x002646B4: sw          $zero, 0x40($a1)
        MEM_W(0X40, ctx->r5) = 0;
            goto L_002646D8;
    }
    goto skip_2;
    // 0x002646B4: sw          $zero, 0x40($a1)
    MEM_W(0X40, ctx->r5) = 0;
    skip_2:
    // 0x002646B8: lwc1        $f1, 0x40($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X40);
    // 0x002646BC: lwc1        $f0, 0x50($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X50);
    // 0x002646C0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002646C4: nop

    // 0x002646C8: bc1f        L_002646D8
    if (!c1cs) {
        // 0x002646CC: nop
    
            goto L_002646D8;
    }
    // 0x002646CC: nop

    // 0x002646D0: jal         0x00243414
    // 0x002646D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002646D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_002646D8:
    // 0x002646D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002646DC: jr          $ra
    // 0x002646E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002646E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00223A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00223A94: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x00223A98: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x00223A9C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00223AA0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x00223AA4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x00223AA8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x00223AAC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x00223AB0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x00223AB4: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x00223AB8: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00223ABC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00223AC0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00223AC4: lw          $s3, 0xEFC($a0)
    ctx->r19 = MEM_W(ctx->r4, 0XEFC);
    // 0x00223AC8: blez        $s3, L_00223CB0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00223ACC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00223CB0;
    }
    // 0x00223ACC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00223AD0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00223AD4: addiu       $fp, $zero, 0x454
    ctx->r30 = ADD32(0, 0X454);
    // 0x00223AD8: addiu       $s7, $zero, 0x455
    ctx->r23 = ADD32(0, 0X455);
    // 0x00223ADC: addiu       $s6, $zero, 0x456
    ctx->r22 = ADD32(0, 0X456);
    // 0x00223AE0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_00223AE4:
    // 0x00223AE4: lw          $s0, 0xDFC($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XDFC);
    // 0x00223AE8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00223AEC: bne         $v0, $s5, L_00223B4C
    if (ctx->r2 != ctx->r21) {
        // 0x00223AF0: nop
    
            goto L_00223B4C;
    }
    // 0x00223AF0: nop

    // 0x00223AF4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00223AF8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00223AFC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00223B00: bne         $v1, $v0, L_00223B4C
    if (ctx->r3 != ctx->r2) {
        // 0x00223B04: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_00223B4C;
    }
    // 0x00223B04: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x00223B08: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00223B0C: jal         0x0020EF2C
    // 0x00223B10: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00223B10: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_0:
    // 0x00223B14: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00223B18: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00223B1C: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00223B20: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00223B24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223B28: lwc1        $f2, 0x5FDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5FDC);
    // 0x00223B2C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00223B30: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00223B34: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00223B38: nop

    // 0x00223B3C: bc1f        L_00223BA0
    if (!c1cs) {
        // 0x00223B40: sw          $zero, 0x44($sp)
        MEM_W(0X44, ctx->r29) = 0;
            goto L_00223BA0;
    }
    // 0x00223B40: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x00223B44: j           L_00223BA0
    // 0x00223B48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00223BA0;
    // 0x00223B48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00223B4C:
    // 0x00223B4C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00223B50: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00223B54: bne         $v0, $s5, L_00223BA0
    if (ctx->r2 != ctx->r21) {
        // 0x00223B58: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00223BA0;
    }
    // 0x00223B58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00223B5C: lhu         $v0, 0xB8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB8);
    // 0x00223B60: addiu       $t0, $zero, 0x44E
    ctx->r8 = ADD32(0, 0X44E);
    // 0x00223B64: beq         $v0, $t0, L_00223B9C
    if (ctx->r2 == ctx->r8) {
        // 0x00223B68: addiu       $t0, $zero, 0x453
        ctx->r8 = ADD32(0, 0X453);
            goto L_00223B9C;
    }
    // 0x00223B68: addiu       $t0, $zero, 0x453
    ctx->r8 = ADD32(0, 0X453);
    // 0x00223B6C: beq         $v0, $t0, L_00223B9C
    if (ctx->r2 == ctx->r8) {
        // 0x00223B70: addiu       $t0, $zero, 0x451
        ctx->r8 = ADD32(0, 0X451);
            goto L_00223B9C;
    }
    // 0x00223B70: addiu       $t0, $zero, 0x451
    ctx->r8 = ADD32(0, 0X451);
    // 0x00223B74: beq         $v0, $t0, L_00223B9C
    if (ctx->r2 == ctx->r8) {
        // 0x00223B78: addiu       $t0, $zero, 0x450
        ctx->r8 = ADD32(0, 0X450);
            goto L_00223B9C;
    }
    // 0x00223B78: addiu       $t0, $zero, 0x450
    ctx->r8 = ADD32(0, 0X450);
    // 0x00223B7C: beq         $v0, $t0, L_00223BA0
    if (ctx->r2 == ctx->r8) {
        // 0x00223B80: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00223BA0;
    }
    // 0x00223B80: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00223B84: beq         $v0, $fp, L_00223BA0
    if (ctx->r2 == ctx->r30) {
        // 0x00223B88: nop
    
            goto L_00223BA0;
    }
    // 0x00223B88: nop

    // 0x00223B8C: beq         $v0, $s7, L_00223BA0
    if (ctx->r2 == ctx->r23) {
        // 0x00223B90: nop
    
            goto L_00223BA0;
    }
    // 0x00223B90: nop

    // 0x00223B94: bne         $v0, $s6, L_00223BA0
    if (ctx->r2 != ctx->r22) {
        // 0x00223B98: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00223BA0;
    }
    // 0x00223B98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00223B9C:
    // 0x00223B9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_00223BA0:
    // 0x00223BA0: beq         $a2, $zero, L_00223BD8
    if (ctx->r6 == 0) {
        // 0x00223BA4: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00223BD8;
    }
    // 0x00223BA4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00223BA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00223BAC: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x00223BB0: lui         $a3, 0x42CC
    ctx->r7 = S32(0X42CC << 16);
    // 0x00223BB4: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00223BB8: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00223BBC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00223BC0: jal         0x00245828
    // 0x00223BC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_1;
    // 0x00223BC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x00223BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00223BCC: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00223BD0: jal         0x002465C8
    // 0x00223BD4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_2;
    // 0x00223BD4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
L_00223BD8:
    // 0x00223BD8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x00223BDC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00223BE0: jal         0x0020EF2C
    // 0x00223BE4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x00223BE4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_3:
    // 0x00223BE8: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00223BEC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00223BF0: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00223BF4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00223BF8: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00223BFC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00223C00: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00223C04: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00223C08: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00223C0C: bne         $v0, $s5, L_00223C84
    if (ctx->r2 != ctx->r21) {
        // 0x00223C10: add.s       $f2, $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
            goto L_00223C84;
    }
    // 0x00223C10: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00223C14: lhu         $v0, 0xB8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB8);
    // 0x00223C18: addiu       $t0, $zero, 0x44E
    ctx->r8 = ADD32(0, 0X44E);
    // 0x00223C1C: beq         $v0, $t0, L_00223C84
    if (ctx->r2 == ctx->r8) {
        // 0x00223C20: addiu       $t0, $zero, 0x453
        ctx->r8 = ADD32(0, 0X453);
            goto L_00223C84;
    }
    // 0x00223C20: addiu       $t0, $zero, 0x453
    ctx->r8 = ADD32(0, 0X453);
    // 0x00223C24: beq         $v0, $t0, L_00223C84
    if (ctx->r2 == ctx->r8) {
        // 0x00223C28: addiu       $t0, $zero, 0x451
        ctx->r8 = ADD32(0, 0X451);
            goto L_00223C84;
    }
    // 0x00223C28: addiu       $t0, $zero, 0x451
    ctx->r8 = ADD32(0, 0X451);
    // 0x00223C2C: beq         $v0, $t0, L_00223C84
    if (ctx->r2 == ctx->r8) {
        // 0x00223C30: addiu       $t0, $zero, 0x450
        ctx->r8 = ADD32(0, 0X450);
            goto L_00223C84;
    }
    // 0x00223C30: addiu       $t0, $zero, 0x450
    ctx->r8 = ADD32(0, 0X450);
    // 0x00223C34: beql        $v0, $t0, L_00223C88
    if (ctx->r2 == ctx->r8) {
        // 0x00223C38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223C88;
    }
    goto skip_0;
    // 0x00223C38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00223C3C: beql        $v0, $fp, L_00223C88
    if (ctx->r2 == ctx->r30) {
        // 0x00223C40: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223C88;
    }
    goto skip_1;
    // 0x00223C40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x00223C44: beql        $v0, $s7, L_00223C88
    if (ctx->r2 == ctx->r23) {
        // 0x00223C48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223C88;
    }
    goto skip_2;
    // 0x00223C48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
    // 0x00223C4C: beq         $v0, $s6, L_00223C88
    if (ctx->r2 == ctx->r22) {
        // 0x00223C50: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223C88;
    }
    // 0x00223C50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00223C54: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00223C58: beq         $v0, $zero, L_00223C84
    if (ctx->r2 == 0) {
        // 0x00223C5C: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_00223C84;
    }
    // 0x00223C5C: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x00223C60: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x00223C64: beq         $v1, $v0, L_00223C88
    if (ctx->r3 == ctx->r2) {
        // 0x00223C68: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223C88;
    }
    // 0x00223C68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00223C6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223C70: lwc1        $f0, 0x5FE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5FE0);
    // 0x00223C74: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00223C78: nop

    // 0x00223C7C: bc1t        L_00223C88
    if (c1cs) {
        // 0x00223C80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00223C88;
    }
    // 0x00223C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00223C84:
    // 0x00223C84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00223C88:
    // 0x00223C88: beql        $v0, $zero, L_00223CA4
    if (ctx->r2 == 0) {
        // 0x00223C8C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00223CA4;
    }
    goto skip_3;
    // 0x00223C8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x00223C90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00223C94: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00223C98: jal         0x00243414
    // 0x00223C9C: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00223C9C: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    after_4:
    // 0x00223CA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00223CA4:
    // 0x00223CA4: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00223CA8: bne         $v0, $zero, L_00223AE4
    if (ctx->r2 != 0) {
        // 0x00223CAC: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_00223AE4;
    }
    // 0x00223CAC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_00223CB0:
    // 0x00223CB0: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x00223CB4: lw          $s1, -0x14C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X14C);
    // 0x00223CB8: beq         $s1, $zero, L_00223E94
    if (ctx->r17 == 0) {
        // 0x00223CBC: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00223E94;
    }
    // 0x00223CBC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00223CC0: addiu       $fp, $zero, 0x451
    ctx->r30 = ADD32(0, 0X451);
    // 0x00223CC4: addiu       $s7, $zero, 0x450
    ctx->r23 = ADD32(0, 0X450);
    // 0x00223CC8: addiu       $s6, $zero, 0x454
    ctx->r22 = ADD32(0, 0X454);
    // 0x00223CCC: addiu       $s5, $zero, 0x455
    ctx->r21 = ADD32(0, 0X455);
    // 0x00223CD0: addiu       $s3, $zero, 0x456
    ctx->r19 = ADD32(0, 0X456);
L_00223CD4:
    // 0x00223CD4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00223CD8: bne         $v0, $s2, L_00223D38
    if (ctx->r2 != ctx->r18) {
        // 0x00223CDC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00223D38;
    }
    // 0x00223CDC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00223CE0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00223CE4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00223CE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00223CEC: bne         $v1, $v0, L_00223D38
    if (ctx->r3 != ctx->r2) {
        // 0x00223CF0: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_00223D38;
    }
    // 0x00223CF0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x00223CF4: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x00223CF8: jal         0x0020EF2C
    // 0x00223CFC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00223CFC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_5:
    // 0x00223D00: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00223D04: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00223D08: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00223D0C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00223D10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223D14: lwc1        $f2, 0x5FE4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5FE4);
    // 0x00223D18: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00223D1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00223D20: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00223D24: nop

    // 0x00223D28: bc1f        L_00223D8C
    if (!c1cs) {
        // 0x00223D2C: sw          $zero, 0x44($sp)
        MEM_W(0X44, ctx->r29) = 0;
            goto L_00223D8C;
    }
    // 0x00223D2C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x00223D30: j           L_00223D8C
    // 0x00223D34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00223D8C;
    // 0x00223D34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00223D38:
    // 0x00223D38: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00223D3C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00223D40: bne         $v0, $s2, L_00223D8C
    if (ctx->r2 != ctx->r18) {
        // 0x00223D44: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00223D8C;
    }
    // 0x00223D44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00223D48: lhu         $v0, 0xB8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB8);
    // 0x00223D4C: addiu       $t0, $zero, 0x44E
    ctx->r8 = ADD32(0, 0X44E);
    // 0x00223D50: beq         $v0, $t0, L_00223D88
    if (ctx->r2 == ctx->r8) {
        // 0x00223D54: addiu       $t0, $zero, 0x453
        ctx->r8 = ADD32(0, 0X453);
            goto L_00223D88;
    }
    // 0x00223D54: addiu       $t0, $zero, 0x453
    ctx->r8 = ADD32(0, 0X453);
    // 0x00223D58: beq         $v0, $t0, L_00223D8C
    if (ctx->r2 == ctx->r8) {
        // 0x00223D5C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00223D8C;
    }
    // 0x00223D5C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00223D60: beq         $v0, $fp, L_00223D8C
    if (ctx->r2 == ctx->r30) {
        // 0x00223D64: nop
    
            goto L_00223D8C;
    }
    // 0x00223D64: nop

    // 0x00223D68: beq         $v0, $s7, L_00223D8C
    if (ctx->r2 == ctx->r23) {
        // 0x00223D6C: nop
    
            goto L_00223D8C;
    }
    // 0x00223D6C: nop

    // 0x00223D70: beq         $v0, $s6, L_00223D8C
    if (ctx->r2 == ctx->r22) {
        // 0x00223D74: nop
    
            goto L_00223D8C;
    }
    // 0x00223D74: nop

    // 0x00223D78: beq         $v0, $s5, L_00223D8C
    if (ctx->r2 == ctx->r21) {
        // 0x00223D7C: nop
    
            goto L_00223D8C;
    }
    // 0x00223D7C: nop

    // 0x00223D80: bne         $v0, $s3, L_00223D8C
    if (ctx->r2 != ctx->r19) {
        // 0x00223D84: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00223D8C;
    }
    // 0x00223D84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00223D88:
    // 0x00223D88: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_00223D8C:
    // 0x00223D8C: beq         $a2, $zero, L_00223DC4
    if (ctx->r6 == 0) {
        // 0x00223D90: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00223DC4;
    }
    // 0x00223D90: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00223D94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00223D98: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x00223D9C: lui         $a3, 0x42CC
    ctx->r7 = S32(0X42CC << 16);
    // 0x00223DA0: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00223DA4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00223DA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00223DAC: jal         0x00245828
    // 0x00223DB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_6;
    // 0x00223DB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_6:
    // 0x00223DB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00223DB8: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00223DBC: jal         0x002465C8
    // 0x00223DC0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_7;
    // 0x00223DC0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_7:
L_00223DC4:
    // 0x00223DC4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x00223DC8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00223DCC: jal         0x0020EF2C
    // 0x00223DD0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_8;
    // 0x00223DD0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_8:
    // 0x00223DD4: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00223DD8: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00223DDC: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00223DE0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00223DE4: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00223DE8: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00223DEC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00223DF0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00223DF4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00223DF8: bne         $v0, $s2, L_00223E70
    if (ctx->r2 != ctx->r18) {
        // 0x00223DFC: add.s       $f2, $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
            goto L_00223E70;
    }
    // 0x00223DFC: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00223E00: lhu         $v0, 0xB8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB8);
    // 0x00223E04: addiu       $t0, $zero, 0x44E
    ctx->r8 = ADD32(0, 0X44E);
    // 0x00223E08: beq         $v0, $t0, L_00223E70
    if (ctx->r2 == ctx->r8) {
        // 0x00223E0C: addiu       $t0, $zero, 0x453
        ctx->r8 = ADD32(0, 0X453);
            goto L_00223E70;
    }
    // 0x00223E0C: addiu       $t0, $zero, 0x453
    ctx->r8 = ADD32(0, 0X453);
    // 0x00223E10: beql        $v0, $t0, L_00223E74
    if (ctx->r2 == ctx->r8) {
        // 0x00223E14: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    goto skip_4;
    // 0x00223E14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_4:
    // 0x00223E18: beql        $v0, $fp, L_00223E74
    if (ctx->r2 == ctx->r30) {
        // 0x00223E1C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    goto skip_5;
    // 0x00223E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_5:
    // 0x00223E20: beql        $v0, $s7, L_00223E74
    if (ctx->r2 == ctx->r23) {
        // 0x00223E24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    goto skip_6;
    // 0x00223E24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_6:
    // 0x00223E28: beql        $v0, $s6, L_00223E74
    if (ctx->r2 == ctx->r22) {
        // 0x00223E2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    goto skip_7;
    // 0x00223E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_7:
    // 0x00223E30: beql        $v0, $s5, L_00223E74
    if (ctx->r2 == ctx->r21) {
        // 0x00223E34: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    goto skip_8;
    // 0x00223E34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_8:
    // 0x00223E38: beq         $v0, $s3, L_00223E74
    if (ctx->r2 == ctx->r19) {
        // 0x00223E3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    // 0x00223E3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00223E40: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x00223E44: beq         $v0, $zero, L_00223E70
    if (ctx->r2 == 0) {
        // 0x00223E48: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_00223E70;
    }
    // 0x00223E48: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x00223E4C: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x00223E50: beq         $v1, $v0, L_00223E74
    if (ctx->r3 == ctx->r2) {
        // 0x00223E54: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00223E74;
    }
    // 0x00223E54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00223E58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223E5C: lwc1        $f0, 0x5FE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5FE8);
    // 0x00223E60: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x00223E64: nop

    // 0x00223E68: bc1t        L_00223E74
    if (c1cs) {
        // 0x00223E6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00223E74;
    }
    // 0x00223E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00223E70:
    // 0x00223E70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00223E74:
    // 0x00223E74: beq         $v0, $zero, L_00223E88
    if (ctx->r2 == 0) {
        // 0x00223E78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00223E88;
    }
    // 0x00223E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00223E7C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00223E80: jal         0x00243414
    // 0x00223E84: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    func_00243414(rdram, ctx);
        goto after_9;
    // 0x00223E84: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    after_9:
L_00223E88:
    // 0x00223E88: lw          $s1, 0x28C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X28C);
    // 0x00223E8C: bne         $s1, $zero, L_00223CD4
    if (ctx->r17 != 0) {
        // 0x00223E90: nop
    
            goto L_00223CD4;
    }
    // 0x00223E90: nop

L_00223E94:
    // 0x00223E94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00223E98: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00223E9C: jal         0x002532A8
    // 0x00223EA0: nop

    func_002532A8(rdram, ctx);
        goto after_10;
    // 0x00223EA0: nop

    after_10:
    // 0x00223EA4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x00223EA8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00223EAC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00223EB0: jal         0x0020EF2C
    // 0x00223EB4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0020EF2C(rdram, ctx);
        goto after_11;
    // 0x00223EB4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_11:
    // 0x00223EB8: lwc1        $f1, 0x30($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00223EBC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00223EC0: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00223EC4: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00223EC8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00223ECC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00223ED0: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x00223ED4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00223ED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00223EDC: lwc1        $f0, 0x5FEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5FEC);
    // 0x00223EE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00223EE4: nop

    // 0x00223EE8: bc1f        L_00223F20
    if (!c1cs) {
        // 0x00223EEC: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00223F20;
    }
    // 0x00223EEC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00223EF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00223EF4: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    // 0x00223EF8: lui         $a3, 0x42CC
    ctx->r7 = S32(0X42CC << 16);
    // 0x00223EFC: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00223F00: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00223F04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00223F08: jal         0x00245828
    // 0x00223F0C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_12;
    // 0x00223F0C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_12:
    // 0x00223F10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00223F14: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00223F18: jal         0x002465C8
    // 0x00223F1C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002465C8(rdram, ctx);
        goto after_13;
    // 0x00223F1C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_13:
L_00223F20:
    // 0x00223F20: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x00223F24: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x00223F28: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x00223F2C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x00223F30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x00223F34: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x00223F38: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x00223F3C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00223F40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00223F44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00223F48: jr          $ra
    // 0x00223F4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x00223F4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_00266E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266E78: addiu       $v0, $a0, 0x7
    ctx->r2 = ADD32(ctx->r4, 0X7);
    // 0x00266E7C: bltzl       $v0, L_00266E84
    if (SIGNED(ctx->r2) < 0) {
        // 0x00266E80: addiu       $v0, $a0, 0xE
        ctx->r2 = ADD32(ctx->r4, 0XE);
            goto L_00266E84;
    }
    goto skip_0;
    // 0x00266E80: addiu       $v0, $a0, 0xE
    ctx->r2 = ADD32(ctx->r4, 0XE);
    skip_0:
L_00266E84:
    // 0x00266E84: jr          $ra
    // 0x00266E88: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    return;
    // 0x00266E88: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
;}
RECOMP_FUNC void func_00422828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422828: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042282C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422830: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x00422834: jr          $ra
    // 0x00422838: nop

    return;
    // 0x00422838: nop

;}
RECOMP_FUNC void func_002647DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002647DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002647E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002647E4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002647E8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x002647EC: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x002647F0: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x002647F4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002647F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002647FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00264800: jal         0x00243414
    // 0x00264804: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00264804: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    after_0:
    // 0x00264808: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026480C: jr          $ra
    // 0x00264810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027845C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027845C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00278460: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00278464: jal         0x0027B4EC
    // 0x00278468: nop

    func_0027B4EC(rdram, ctx);
        goto after_0;
    // 0x00278468: nop

    after_0:
    // 0x0027846C: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x00278470: beq         $t3, $zero, L_00278540
    if (ctx->r11 == 0) {
        // 0x00278474: lui         $a3, 0xF590
        ctx->r7 = S32(0XF590 << 16);
            goto L_00278540;
    }
    // 0x00278474: lui         $a3, 0xF590
    ctx->r7 = S32(0XF590 << 16);
    // 0x00278478: ori         $a3, $a3, 0x100
    ctx->r7 = ctx->r7 | 0X100;
    // 0x0027847C: lui         $a2, 0x700
    ctx->r6 = S32(0X700 << 16);
    // 0x00278480: ori         $a2, $a2, 0xC040
    ctx->r6 = ctx->r6 | 0XC040;
    // 0x00278484: lui         $t0, 0x701
    ctx->r8 = S32(0X701 << 16);
    // 0x00278488: ori         $t0, $t0, 0xF800
    ctx->r8 = ctx->r8 | 0XF800;
    // 0x0027848C: lui         $t1, 0xF580
    ctx->r9 = S32(0XF580 << 16);
    // 0x00278490: ori         $t1, $t1, 0x300
    ctx->r9 = ctx->r9 | 0X300;
    // 0x00278494: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x00278498: ori         $t2, $t2, 0xC01C
    ctx->r10 = ctx->r10 | 0XC01C;
    // 0x0027849C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002784A0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002784A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002784A8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x002784AC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002784B0: sw          $v1, 0x56A8($at)
    MEM_W(0X56A8, ctx->r1) = ctx->r3;
    // 0x002784B4: lui         $v1, 0xFD90
    ctx->r3 = S32(0XFD90 << 16);
    // 0x002784B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002784BC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002784C0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002784C4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002784C8: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x002784CC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x002784D0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002784D4: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x002784D8: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x002784DC: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x002784E0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x002784E4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x002784E8: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x002784EC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x002784F0: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    // 0x002784F4: lui         $v1, 0xF300
    ctx->r3 = S32(0XF300 << 16);
    // 0x002784F8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x002784FC: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x00278500: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x00278504: addiu       $a2, $v0, 0x20
    ctx->r6 = ADD32(ctx->r2, 0X20);
    // 0x00278508: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x0027850C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00278510: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x00278514: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00278518: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    // 0x0027851C: ori         $v1, $zero, 0xC040
    ctx->r3 = 0 | 0XC040;
    // 0x00278520: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00278524: sw          $t1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r9;
    // 0x00278528: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x0027852C: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x00278530: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00278534: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x00278538: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x0027853C: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
L_00278540:
    // 0x00278540: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00278544: jr          $ra
    // 0x00278548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00278548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0023181C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023181C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00231820: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00231824: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00231828: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0023182C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00231830: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x00231834: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x00231838: bne         $v1, $v0, L_00231864
    if (ctx->r3 != ctx->r2) {
        // 0x0023183C: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_00231864;
    }
    // 0x0023183C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x00231840: lw          $v0, 0x10C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10C);
    // 0x00231844: lw          $s0, 0x1A8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1A8);
    // 0x00231848: jal         0x0025398C
    // 0x0023184C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0025398C(rdram, ctx);
        goto after_0;
    // 0x0023184C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00231850: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00231854: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00231858: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0023185C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x00231860: sh          $v1, 0x934($v0)
    MEM_H(0X934, ctx->r2) = ctx->r3;
L_00231864:
    // 0x00231864: lw          $s0, 0x108($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X108);
    // 0x00231868: beq         $s0, $zero, L_002318B8
    if (ctx->r16 == 0) {
        // 0x0023186C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_002318B8;
    }
    // 0x0023186C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00231870: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x00231874: bne         $a0, $v0, L_002318B8
    if (ctx->r4 != ctx->r2) {
        // 0x00231878: nop
    
            goto L_002318B8;
    }
    // 0x00231878: nop

    // 0x0023187C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231880: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00231884: beq         $v0, $zero, L_002318B8
    if (ctx->r2 == 0) {
        // 0x00231888: nop
    
            goto L_002318B8;
    }
    // 0x00231888: nop

    // 0x0023188C: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x00231890: beq         $v1, $a0, L_002318A0
    if (ctx->r3 == ctx->r4) {
        // 0x00231894: addiu       $v0, $zero, 0x111
        ctx->r2 = ADD32(0, 0X111);
            goto L_002318A0;
    }
    // 0x00231894: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x00231898: bne         $v1, $v0, L_002318B8
    if (ctx->r3 != ctx->r2) {
        // 0x0023189C: nop
    
            goto L_002318B8;
    }
    // 0x0023189C: nop

L_002318A0:
    // 0x002318A0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002318A4: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002318A8: jal         0x0022F1C8
    // 0x002318AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0022F1C8(rdram, ctx);
        goto after_1;
    // 0x002318AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002318B0: jal         0x00232B40
    // 0x002318B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00232B40(rdram, ctx);
        goto after_2;
    // 0x002318B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_002318B8:
    // 0x002318B8: jal         0x00232B40
    // 0x002318BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00232B40(rdram, ctx);
        goto after_3;
    // 0x002318BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x002318C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002318C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002318C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002318CC: jr          $ra
    // 0x002318D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002318D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00260554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00260558: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026055C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00260560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00260564: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00260568: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0026056C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00260570: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00260574: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00260578: jal         0x00246918
    // 0x0026057C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00246918(rdram, ctx);
        goto after_0;
    // 0x0026057C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_0:
    // 0x00260580: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00260584: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x00260588: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026058C: beq         $v0, $zero, L_0026059C
    if (ctx->r2 == 0) {
        // 0x00260590: nop
    
            goto L_0026059C;
    }
    // 0x00260590: nop

    // 0x00260594: jal         0x002280B0
    // 0x00260598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002280B0(rdram, ctx);
        goto after_1;
    // 0x00260598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0026059C:
    // 0x0026059C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002605A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002605A4: jr          $ra
    // 0x002605A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002605A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026FB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026FB70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0026FB74: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0026FB78: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x0026FB7C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0026FB80: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x0026FB84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0026FB88: addu        $s0, $s6, $zero
    ctx->r16 = ADD32(ctx->r22, 0);
    // 0x0026FB8C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0026FB90: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0026FB94: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0026FB98: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0026FB9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0026FBA0: addiu       $a0, $a0, -0x5270
    ctx->r4 = ADD32(ctx->r4, -0X5270);
    // 0x0026FBA4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0026FBA8: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0026FBAC: addiu       $a2, $a2, 0x27A0
    ctx->r6 = ADD32(ctx->r6, 0X27A0);
    // 0x0026FBB0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0026FBB4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0026FBB8: jal         0x0028AF00
    // 0x0026FBBC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_0028AF00(rdram, ctx);
        goto after_0;
    // 0x0026FBBC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x0026FBC0: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x0026FBC4: lui         $s1, 0xAAAA
    ctx->r17 = S32(0XAAAA << 16);
    // 0x0026FBC8: ori         $s1, $s1, 0xAAAB
    ctx->r17 = ctx->r17 | 0XAAAB;
L_0026FBCC:
    // 0x0026FBCC: jal         0x0029B170
    // 0x0026FBD0: nop

    func_0029B170(rdram, ctx);
        goto after_1;
    // 0x0026FBD0: nop

    after_1:
    // 0x0026FBD4: sltu        $a2, $v1, $s3
    ctx->r6 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x0026FBD8: subu        $a1, $v1, $s3
    ctx->r5 = SUB32(ctx->r3, ctx->r19);
    // 0x0026FBDC: subu        $a0, $v0, $s2
    ctx->r4 = SUB32(ctx->r2, ctx->r18);
    // 0x0026FBE0: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x0026FBE4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0026FBE8: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0026FBEC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0026FBF0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0026FBF4: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    // 0x0026FBF8: jal         0x002A4650
    // 0x0026FBFC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_2;
    // 0x0026FBFC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_2:
    // 0x0026FC00: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026FC04: addiu       $a0, $a0, 0x27A0
    ctx->r4 = ADD32(ctx->r4, 0X27A0);
    // 0x0026FC08: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0026FC0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026FC10: sw          $v1, 0x2670($at)
    MEM_W(0X2670, ctx->r1) = ctx->r3;
    // 0x0026FC14: jal         0x0029B6F0
    // 0x0026FC18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x0026FC18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x0026FC1C: jal         0x0029B170
    // 0x0026FC20: nop

    func_0029B170(rdram, ctx);
        goto after_4;
    // 0x0026FC20: nop

    after_4:
    // 0x0026FC24: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0026FC28: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0026FC2C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0026FC30: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0026FC34: beq         $v1, $v0, L_0026FD0C
    if (ctx->r3 == ctx->r2) {
        // 0x0026FC38: sltiu       $v0, $v1, 0x5
        ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
            goto L_0026FD0C;
    }
    // 0x0026FC38: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x0026FC3C: beq         $v0, $zero, L_0026FC54
    if (ctx->r2 == 0) {
        // 0x0026FC40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0026FC54;
    }
    // 0x0026FC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026FC44: beql        $v1, $v0, L_0026FC68
    if (ctx->r3 == ctx->r2) {
        // 0x0026FC48: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0026FC68;
    }
    goto skip_0;
    // 0x0026FC48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0026FC4C: j           L_0026FD0C
    // 0x0026FC50: nop

        goto L_0026FD0C;
    // 0x0026FC50: nop

L_0026FC54:
    // 0x0026FC54: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0026FC58: beq         $v1, $v0, L_0026FC78
    if (ctx->r3 == ctx->r2) {
        // 0x0026FC5C: nop
    
            goto L_0026FC78;
    }
    // 0x0026FC5C: nop

    // 0x0026FC60: j           L_0026FD0C
    // 0x0026FC64: nop

        goto L_0026FD0C;
    // 0x0026FC64: nop

L_0026FC68:
    // 0x0026FC68: sltiu       $v0, $s0, 0x15
    ctx->r2 = ctx->r16 < 0X15 ? 1 : 0;
    // 0x0026FC6C: bne         $v0, $zero, L_0026FD0C
    if (ctx->r2 != 0) {
        // 0x0026FC70: nop
    
            goto L_0026FD0C;
    }
    // 0x0026FC70: nop

    // 0x0026FC74: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0026FC78:
    // 0x0026FC78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0026FC7C: lw          $v0, 0x266C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X266C);
    // 0x0026FC80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026FC84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0026FC88: sw          $v0, 0x266C($at)
    MEM_W(0X266C, ctx->r1) = ctx->r2;
L_0026FC8C:
    // 0x0026FC8C: jal         0x00298480
    // 0x0026FC90: nop

    osAiGetStatus_recomp(rdram, ctx);
        goto after_5;
    // 0x0026FC90: nop

    after_5:
    // 0x0026FC94: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x0026FC98: bne         $v0, $zero, L_0026FCE0
    if (ctx->r2 != 0) {
        // 0x0026FC9C: nop
    
            goto L_0026FCE0;
    }
    // 0x0026FC9C: nop

    // 0x0026FCA0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0026FCA4: lw          $a0, 0x2660($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2660);
    // 0x0026FCA8: multu       $a0, $s1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0026FCAC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0026FCB0: srl         $v1, $t0, 1
    ctx->r3 = S32(U32(ctx->r8) >> 1);
    // 0x0026FCB4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0026FCB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0026FCBC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x0026FCC0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0026FCC4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0026FCC8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0026FCCC: lw          $a0, 0x27C8($at)
    ctx->r4 = MEM_W(ctx->r1, 0X27C8);
    // 0x0026FCD0: jal         0x0026FD88
    // 0x0026FCD4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0026FD88(rdram, ctx);
        goto after_6;
    // 0x0026FCD4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_6:
    // 0x0026FCD8: j           L_0026FC8C
    // 0x0026FCDC: nop

        goto L_0026FC8C;
    // 0x0026FCDC: nop

L_0026FCE0:
    // 0x0026FCE0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026FCE4: lw          $v1, 0x279C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X279C);
    // 0x0026FCE8: beq         $v1, $zero, L_0026FD0C
    if (ctx->r3 == 0) {
        // 0x0026FCEC: nop
    
            goto L_0026FD0C;
    }
    // 0x0026FCEC: nop

L_0026FCF0:
    // 0x0026FCF0: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x0026FCF4: beq         $v0, $zero, L_0026FD00
    if (ctx->r2 == 0) {
        // 0x0026FCF8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0026FD00;
    }
    // 0x0026FCF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0026FCFC: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
L_0026FD00:
    // 0x0026FD00: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0026FD04: bne         $v1, $zero, L_0026FCF0
    if (ctx->r3 != 0) {
        // 0x0026FD08: nop
    
            goto L_0026FCF0;
    }
    // 0x0026FD08: nop

L_0026FD0C:
    // 0x0026FD0C: beq         $s6, $zero, L_0026FBCC
    if (ctx->r22 == 0) {
        // 0x0026FD10: nop
    
            goto L_0026FBCC;
    }
    // 0x0026FD10: nop

    // 0x0026FD14: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026FD18: addiu       $a0, $a0, 0x27D4
    ctx->r4 = ADD32(ctx->r4, 0X27D4);
    // 0x0026FD1C: jal         0x00293430
    // 0x0026FD20: nop

    func_00293430(rdram, ctx);
        goto after_7;
    // 0x0026FD20: nop

    after_7:
    // 0x0026FD24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0026FD28: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0026FD2C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0026FD30: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0026FD34: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0026FD38: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0026FD3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0026FD40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0026FD44: jr          $ra
    // 0x0026FD48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0026FD48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0042463C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042463C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00424640: addiu       $v0, $v0, 0x4140
    ctx->r2 = ADD32(ctx->r2, 0X4140);
    // 0x00424644: jr          $ra
    // 0x00424648: nop

    return;
    // 0x00424648: nop

;}
RECOMP_FUNC void func_004566BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D740:
    // 0x004566BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004566C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004566C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004566C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004566CC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x004566D0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004566D4: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x004566D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004566DC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004566E0: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x004566E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004566E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004566EC: lw          $s1, 0x1C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1C);
    // 0x004566F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004566F4: jal         0x0025340C
    // 0x004566F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x004566F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x004566FC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00456700: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00456704: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00456708: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045670C: addiu       $a0, $a0, 0x1FBC
    ctx->r4 = ADD32(ctx->r4, 0X1FBC);
    // 0x00456710: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00456714: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00456718: addiu       $s0, $s0, 0x131B
    ctx->r16 = ADD32(ctx->r16, 0X131B);
    // 0x0045671C: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x00456720: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00456724: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
L_00456728:
    // 0x00456728: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0045672C: bne         $v0, $zero, L_0045673C
    if (ctx->r2 != 0) {
        // 0x00456730: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0045673C;
    }
    // 0x00456730: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00456734: j           L_0041D740
    // 0x00456738: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    func_0041D740(rdram, ctx);
    return;
    // 0x00456738: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0045673C:
    // 0x0045673C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00456740: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x00456744: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00456748: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x0045674C: bne         $v0, $zero, L_00456728
    if (ctx->r2 != 0) {
        // 0x00456750: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00456728;
    }
    // 0x00456750: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00456754: bne         $a2, $zero, L_00456768
    if (ctx->r6 != 0) {
        // 0x00456758: sb          $zero, 0x0($a0)
        MEM_B(0X0, ctx->r4) = 0;
            goto L_00456768;
    }
    // 0x00456758: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x0045675C: lw          $a0, 0x518($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X518);
    // 0x00456760: jal         0x0041BBB0
    // 0x00456764: nop

    func_0041BBB0(rdram, ctx);
        goto after_1;
    // 0x00456764: nop

    after_1:
L_00456768:
    // 0x00456768: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0045676C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00456770: jal         0x00416454
    // 0x00456774: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_00416454(rdram, ctx);
        goto after_2;
    // 0x00456774: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00456778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0045677C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00456780: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00456784: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00456788: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045678C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00456790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00456794: jr          $ra
    // 0x00456798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00456798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0041C458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C45C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x0041C460: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C464: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C468: addiu       $s0, $s0, -0x5518
    ctx->r16 = ADD32(ctx->r16, -0X5518);
    // 0x0041C46C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C470: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0041C474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C478: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C47C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0041C480: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x0041C484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0041C488: jal         0x0041648C
    // 0x0041C48C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C48C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041C490: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x0041C494: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x0041C498: sltiu       $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 < 0XFF ? 1 : 0;
    // 0x0041C49C: beq         $v0, $zero, L_0041C4A8
    if (ctx->r2 == 0) {
        // 0x0041C4A0: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0041C4A8;
    }
    // 0x0041C4A0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0041C4A4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
L_0041C4A8:
    // 0x0041C4A8: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x0041C4AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C4B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C4B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C4B8: jr          $ra
    // 0x0041C4BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C4BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A1A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1A3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002A1A40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A1A44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A1A48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A1A4C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002A1A50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1A54: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002A1A58: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002A1A5C: beq         $s0, $zero, L_002A1A8C
    if (ctx->r16 == 0) {
        // 0x002A1A60: sw          $s3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r19;
            goto L_002A1A8C;
    }
    // 0x002A1A60: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002A1A64: andi        $v0, $s1, 0x3
    ctx->r2 = ctx->r17 & 0X3;
L_002A1A68:
    // 0x002A1A68: beq         $v0, $zero, L_002A1A8C
    if (ctx->r2 == 0) {
        // 0x002A1A6C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1A8C;
    }
    // 0x002A1A6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1A70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1A74: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x002A1A78: jal         0x002A1954
    // 0x002A1A7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A1954(rdram, ctx);
        goto after_0;
    // 0x002A1A7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_0:
    // 0x002A1A80: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1A84: bne         $s0, $zero, L_002A1A68
    if (ctx->r16 != 0) {
        // 0x002A1A88: andi        $v0, $s1, 0x3
        ctx->r2 = ctx->r17 & 0X3;
            goto L_002A1A68;
    }
    // 0x002A1A88: andi        $v0, $s1, 0x3
    ctx->r2 = ctx->r17 & 0X3;
L_002A1A8C:
    // 0x002A1A8C: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x002A1A90: bne         $v0, $zero, L_002A1AE4
    if (ctx->r2 != 0) {
        // 0x002A1A94: nop
    
            goto L_002A1AE4;
    }
    // 0x002A1A94: nop

    // 0x002A1A98: addiu       $s3, $s2, 0x3
    ctx->r19 = ADD32(ctx->r18, 0X3);
L_002A1A9C:
    // 0x002A1A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002A1AA0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x002A1AA4: lbu         $v0, -0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X2);
    // 0x002A1AA8: lbu         $v1, -0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, -0X1);
    // 0x002A1AAC: lbu         $a2, 0x0($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X0);
    // 0x002A1AB0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x002A1AB4: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x002A1AB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A1ABC: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002A1AC0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x002A1AC4: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x002A1AC8: jal         0x002A1350
    // 0x002A1ACC: or          $a1, $a1, $a2
    ctx->r5 = ctx->r5 | ctx->r6;
    func_002A1350(rdram, ctx);
        goto after_1;
    // 0x002A1ACC: or          $a1, $a1, $a2
    ctx->r5 = ctx->r5 | ctx->r6;
    after_1:
    // 0x002A1AD0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x002A1AD4: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x002A1AD8: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x002A1ADC: beq         $v0, $zero, L_002A1A9C
    if (ctx->r2 == 0) {
        // 0x002A1AE0: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_002A1A9C;
    }
    // 0x002A1AE0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_002A1AE4:
    // 0x002A1AE4: beq         $s0, $zero, L_002A1B08
    if (ctx->r16 == 0) {
        // 0x002A1AE8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1B08;
    }
    // 0x002A1AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002A1AEC:
    // 0x002A1AEC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x002A1AF0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x002A1AF4: jal         0x002A1954
    // 0x002A1AF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A1954(rdram, ctx);
        goto after_2;
    // 0x002A1AF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_2:
    // 0x002A1AFC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1B00: bne         $s0, $zero, L_002A1AEC
    if (ctx->r16 != 0) {
        // 0x002A1B04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002A1AEC;
    }
    // 0x002A1B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_002A1B08:
    // 0x002A1B08: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002A1B0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002A1B10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1B14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1B18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1B1C: jr          $ra
    // 0x002A1B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002A1B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002942B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002942B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002942B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002942B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002942BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002942C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002942C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002942C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002942CC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002942D0: beq         $v0, $zero, L_00294328
    if (ctx->r2 == 0) {
        // 0x002942D4: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_00294328;
    }
    // 0x002942D4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002942D8: jal         0x00294B58
    // 0x002942DC: nop

    func_00294B58(rdram, ctx);
        goto after_0;
    // 0x002942DC: nop

    after_0:
    // 0x002942E0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x002942E4: beq         $a2, $zero, L_00294328
    if (ctx->r6 == 0) {
        // 0x002942E8: nop
    
            goto L_00294328;
    }
    // 0x002942E8: nop

    // 0x002942EC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x002942F0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x002942F4: lw          $a0, 0xD8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XD8);
    // 0x002942F8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x002942FC: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x00294300: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00294304: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x00294308: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x0029430C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00294310: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x00294314: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00294318: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x0029431C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00294320: jalr        $v0
    // 0x00294324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00294324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_00294328:
    // 0x00294328: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0029432C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00294330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00294334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00294338: jr          $ra
    // 0x0029433C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029433C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026444C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026444C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00264450: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00264454: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00264458: bne         $v0, $zero, L_00264470
    if (ctx->r2 != 0) {
        // 0x0026445C: lui         $v1, 0xF7FF
        ctx->r3 = S32(0XF7FF << 16);
            goto L_00264470;
    }
    // 0x0026445C: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x00264460: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264464: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00264468: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0026446C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_00264470:
    // 0x00264470: jr          $ra
    // 0x00264474: nop

    return;
    // 0x00264474: nop

;}
RECOMP_FUNC void func_0044B66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004126FC:
    // 0x0044B66C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
L_0041276C:
    // 0x0044B670: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0044B678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0044B67C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0044B680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0044B684: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0044B688: jal         0x002017D4
    // 0x0044B68C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0044B68C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0044B690: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x0044B694: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0044B698: blez        $t0, L_0044B784
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0044B69C: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_0044B784;
    }
    // 0x0044B69C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0044B6A0: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x0044B6A4: addiu       $t1, $t1, 0x7078
    ctx->r9 = ADD32(ctx->r9, 0X7078);
    // 0x0044B6A8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x0044B6AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x0044B6B0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x0044B6B4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x0044B6B8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x0044B6BC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x0044B6C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_0044B6C4:
    // 0x0044B6C4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0044B6C8: bne         $v0, $zero, L_0044B6E8
    if (ctx->r2 != 0) {
        // 0x0044B6CC: nop
    
            goto L_0044B6E8;
    }
    // 0x0044B6CC: nop

    // 0x0044B6D0: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0044B6D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0044B6D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044B6DC: lw          $v0, 0x1178($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X1178);
    // 0x0044B6E0: j           L_004126FC
    // 0x0044B6E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    entry_004126FC(rdram, ctx);
    return;
    // 0x0044B6E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_0044B6E8:
    // 0x0044B6E8: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x0044B6EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0044B6F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0044B6F4: lw          $v0, 0x117C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X117C);
    // 0x0044B6F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0044B6FC: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x0044B700: lbu         $v1, 0x11($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X11);
    // 0x0044B704: beq         $v1, $t7, L_0044B74C
    if (ctx->r3 == ctx->r15) {
        // 0x0044B708: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0044B74C;
    }
    // 0x0044B708: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0044B70C: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x0044B710: beq         $v0, $zero, L_0044B728
    if (ctx->r2 == 0) {
        // 0x0044B714: nop
    
            goto L_0044B728;
    }
    // 0x0044B714: nop

    // 0x0044B718: beq         $v1, $t6, L_0044B738
    if (ctx->r3 == ctx->r14) {
        // 0x0044B71C: nop
    
            goto L_0044B738;
    }
    // 0x0044B71C: nop

    // 0x0044B720: j           L_0041276C
    // 0x0044B724: nop

    entry_0041276C(rdram, ctx);
    return;
    // 0x0044B724: nop

L_0044B728:
    // 0x0044B728: beq         $v1, $t5, L_0044B760
    if (ctx->r3 == ctx->r13) {
        // 0x0044B72C: nop
    
            goto L_0044B760;
    }
    // 0x0044B72C: nop

    // 0x0044B730: j           L_0041276C
    // 0x0044B734: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    entry_0041276C(rdram, ctx);
    return;
    // 0x0044B734: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0044B738:
    // 0x0044B738: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x0044B73C: beql        $v0, $t4, L_0044B76C
    if (ctx->r2 == ctx->r12) {
        // 0x0044B740: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0044B76C;
    }
    goto skip_0;
    // 0x0044B740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x0044B744: j           L_0041276C
    // 0x0044B748: nop

    entry_0041276C(rdram, ctx);
    return;
    // 0x0044B748: nop

L_0044B74C:
    // 0x0044B74C: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x0044B750: beql        $v0, $t3, L_0044B76C
    if (ctx->r2 == ctx->r11) {
        // 0x0044B754: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0044B76C;
    }
    goto skip_1;
    // 0x0044B754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_1:
    // 0x0044B758: j           L_0041276C
    // 0x0044B75C: nop

    entry_0041276C(rdram, ctx);
    return;
    // 0x0044B75C: nop

L_0044B760:
    // 0x0044B760: lbu         $v0, 0x12($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X12);
    // 0x0044B764: beql        $v0, $t2, L_0044B76C
    if (ctx->r2 == ctx->r10) {
        // 0x0044B768: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0044B76C;
    }
    goto skip_2;
    // 0x0044B768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_2:
L_0044B76C:
    // 0x0044B76C: bnel        $a1, $zero, L_0044B774
    if (ctx->r5 != 0) {
        // 0x0044B770: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0044B774;
    }
    goto skip_3;
    // 0x0044B770: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_3:
L_0044B774:
    // 0x0044B774: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0044B778: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0044B77C: bne         $v0, $zero, L_0044B6C4
    if (ctx->r2 != 0) {
        // 0x0044B780: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_0044B6C4;
    }
    // 0x0044B780: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_0044B784:
    // 0x0044B784: xori        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 ^ 0X1;
    // 0x0044B788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0044B78C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044B790: jr          $ra
    // 0x0044B794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0044B794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041C89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C89C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C8A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C8A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0041C8A8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x0041C8AC: jal         0x0041648C
    // 0x0041C8B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C8B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x0041C8B4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0041C8B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C8BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C8C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C8C4: jr          $ra
    // 0x0041C8C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C8C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00444644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444644: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00444648: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0044464C: addiu       $a2, $a2, -0x490
    ctx->r6 = ADD32(ctx->r6, -0X490);
    // 0x00444650: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00444654: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00444658: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0044465C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00444660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00444664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00444668: sw          $v0, 0x688($a2)
    MEM_W(0X688, ctx->r6) = ctx->r2;
    // 0x0044466C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x00444670: sw          $v0, 0x68C($a2)
    MEM_W(0X68C, ctx->r6) = ctx->r2;
    // 0x00444674: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x00444678: lw          $v1, 0x1D0C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D0C);
    // 0x0044467C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00444680: sw          $v0, 0x65C($a2)
    MEM_W(0X65C, ctx->r6) = ctx->r2;
    // 0x00444684: sw          $zero, 0x67C($a2)
    MEM_W(0X67C, ctx->r6) = 0;
    // 0x00444688: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x0044468C: lw          $v0, 0x65C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65C);
    // 0x00444690: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00444694: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00444698: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0044469C: lw          $a0, 0x1D1C($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1D1C);
    // 0x004446A0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x004446A4: sw          $a0, 0x664($a2)
    MEM_W(0X664, ctx->r6) = ctx->r4;
    // 0x004446A8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004446AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004446B0: lw          $a0, 0x1D10($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1D10);
    // 0x004446B4: ori         $v1, $v1, 0xF400
    ctx->r3 = ctx->r3 | 0XF400;
    // 0x004446B8: sw          $v1, 0x560($a2)
    MEM_W(0X560, ctx->r6) = ctx->r3;
    // 0x004446BC: sw          $v1, 0x678($a2)
    MEM_W(0X678, ctx->r6) = ctx->r3;
    // 0x004446C0: sw          $v1, 0x674($a2)
    MEM_W(0X674, ctx->r6) = ctx->r3;
    // 0x004446C4: sw          $a0, 0x660($a2)
    MEM_W(0X660, ctx->r6) = ctx->r4;
    // 0x004446C8: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x004446CC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x004446D0: beq         $v1, $v0, L_00444718
    if (ctx->r3 == ctx->r2) {
        // 0x004446D4: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00444718;
    }
    // 0x004446D4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x004446D8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x004446DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004446E0: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_004446E4:
    // 0x004446E4: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x004446E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004446EC: beql        $v0, $zero, L_0044470C
    if (ctx->r2 == 0) {
        // 0x004446F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0044470C;
    }
    goto skip_0;
    // 0x004446F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x004446F4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x004446F8: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x004446FC: addiu       $a1, $a1, 0x1D28
    ctx->r5 = ADD32(ctx->r5, 0X1D28);
    // 0x00444700: jal         0x00236314
    // 0x00444704: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x00444704: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x00444708: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0044470C:
    // 0x0044470C: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00444710: bne         $v0, $zero, L_004446E4
    if (ctx->r2 != 0) {
        // 0x00444714: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_004446E4;
    }
    // 0x00444714: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
L_00444718:
    // 0x00444718: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0044471C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00444720: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00444724: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00444728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044472C: jr          $ra
    // 0x00444730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00444730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00276E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276E78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00276E7C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00276E80: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00276E84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00276E88: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00276E8C: addiu       $v1, $sp, 0x1C
    ctx->r3 = ADD32(ctx->r29, 0X1C);
    // 0x00276E90: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00276E94: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00276E98: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00276E9C: sra         $a2, $a1, 16
    ctx->r6 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00276EA0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00276EA4: lw          $a0, 0x2B60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2B60);
    // 0x00276EA8: lw          $a1, 0x2B64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B64);
    // 0x00276EAC: jal         0x00266D8C
    // 0x00276EB0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00276EB0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00276EB4: beq         $v0, $zero, L_00276F7C
    if (ctx->r2 == 0) {
        // 0x00276EB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00276F7C;
    }
    // 0x00276EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00276EBC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00276EC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x00276EC4: beq         $v0, $a0, L_00276F7C
    if (ctx->r2 == ctx->r4) {
        // 0x00276EC8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00276F7C;
    }
    // 0x00276EC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00276ECC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00276ED0: bne         $v0, $zero, L_00276EE8
    if (ctx->r2 != 0) {
        // 0x00276ED4: nop
    
            goto L_00276EE8;
    }
    // 0x00276ED4: nop

L_00276ED8:
    // 0x00276ED8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276EDC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00276EE0: beq         $v0, $zero, L_00276ED8
    if (ctx->r2 == 0) {
        // 0x00276EE4: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00276ED8;
    }
    // 0x00276EE4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276EE8:
    // 0x00276EE8: jal         0x002113A4
    // 0x00276EEC: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00276EEC: nop

    after_1:
    // 0x00276EF0: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x00276EF4: bne         $s0, $zero, L_00276F00
    if (ctx->r16 != 0) {
        // 0x00276EF8: nop
    
            goto L_00276F00;
    }
    // 0x00276EF8: nop

    // 0x00276EFC: break       7
    do_break(2584316);
L_00276F00:
    // 0x00276F00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00276F04: bne         $s0, $at, L_00276F18
    if (ctx->r16 != ctx->r1) {
        // 0x00276F08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00276F18;
    }
    // 0x00276F08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00276F0C: bne         $v0, $at, L_00276F18
    if (ctx->r2 != ctx->r1) {
        // 0x00276F10: nop
    
            goto L_00276F18;
    }
    // 0x00276F10: nop

    // 0x00276F14: break       6
    do_break(2584340);
L_00276F18:
    // 0x00276F18: mfhi        $a1
    ctx->r5 = hi;
    // 0x00276F1C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00276F20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x00276F24: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00276F28: beq         $v0, $zero, L_00276F50
    if (ctx->r2 == 0) {
        // 0x00276F2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00276F50;
    }
    // 0x00276F2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00276F30: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_00276F34:
    // 0x00276F34: slt         $v0, $s0, $a1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00276F38: beq         $v0, $zero, L_00276F54
    if (ctx->r2 == 0) {
        // 0x00276F3C: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_00276F54;
    }
    // 0x00276F3C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x00276F40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00276F44: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00276F48: bnel        $v0, $zero, L_00276F34
    if (ctx->r2 != 0) {
        // 0x00276F4C: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_00276F34;
    }
    goto skip_0;
    // 0x00276F4C: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_0:
L_00276F50:
    // 0x00276F50: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_00276F54:
    // 0x00276F54: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00276F58: beql        $v0, $zero, L_00276F7C
    if (ctx->r2 == 0) {
        // 0x00276F5C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00276F7C;
    }
    goto skip_1;
    // 0x00276F5C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    skip_1:
    // 0x00276F60: bne         $v1, $v0, L_00276F7C
    if (ctx->r3 != ctx->r2) {
        // 0x00276F64: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00276F7C;
    }
    // 0x00276F64: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00276F68: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00276F6C: bnel        $v1, $v0, L_00276F78
    if (ctx->r3 != ctx->r2) {
        // 0x00276F70: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00276F78;
    }
    goto skip_2;
    // 0x00276F70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x00276F74: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_00276F78:
    // 0x00276F78: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00276F7C:
    // 0x00276F7C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00276F80: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00276F84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00276F88: jr          $ra
    // 0x00276F8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00276F8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002376F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002376F8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x002376FC: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x00237700: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00237704: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x00237708: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0023770C: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x00237710: sw          $s6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r22;
    // 0x00237714: lw          $s6, 0x104($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X104);
    // 0x00237718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023771C: sw          $ra, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r31;
    // 0x00237720: sw          $s5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r21;
    // 0x00237724: sw          $s4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r20;
    // 0x00237728: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x0023772C: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x00237730: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x00237734: lw          $s0, 0x108($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X108);
    // 0x00237738: bne         $a0, $v0, L_00237A74
    if (ctx->r4 != ctx->r2) {
        // 0x0023773C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_00237A74;
    }
    // 0x0023773C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00237740: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x00237744: lw          $v0, 0x140($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X140);
    // 0x00237748: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0023774C: sw          $v0, 0x140($s2)
    MEM_W(0X140, ctx->r18) = ctx->r2;
    // 0x00237750: lw          $v0, 0xD4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XD4);
    // 0x00237754: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237758: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023775C: beq         $v0, $zero, L_00237808
    if (ctx->r2 == 0) {
        // 0x00237760: addu        $s4, $s2, $zero
        ctx->r20 = ADD32(ctx->r18, 0);
            goto L_00237808;
    }
    // 0x00237760: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x00237764: lw          $v1, 0x17C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X17C);
    // 0x00237768: lw          $a1, 0x1A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1A8);
    // 0x0023776C: andi        $v0, $v1, 0x4000
    ctx->r2 = ctx->r3 & 0X4000;
    // 0x00237770: beq         $v0, $zero, L_002377BC
    if (ctx->r2 == 0) {
        // 0x00237774: andi        $v0, $v1, 0x2000
        ctx->r2 = ctx->r3 & 0X2000;
            goto L_002377BC;
    }
    // 0x00237774: andi        $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 & 0X2000;
    // 0x00237778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023777C: lwc1        $f0, 0x6570($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6570);
    // 0x00237780: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00237784: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237788: lwc1        $f0, 0x6574($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6574);
    // 0x0023778C: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x00237790: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x00237794: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x00237798: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x0023779C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002377A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002377A4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x002377A8: lw          $a0, 0x51C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X51C);
    // 0x002377AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002377B0: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x002377B4: j           L_00237800
    // 0x002377B8: nop

        goto L_00237800;
    // 0x002377B8: nop

L_002377BC:
    // 0x002377BC: beq         $v0, $zero, L_00237808
    if (ctx->r2 == 0) {
        // 0x002377C0: nop
    
            goto L_00237808;
    }
    // 0x002377C0: nop

    // 0x002377C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002377C8: lwc1        $f0, 0x6578($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6578);
    // 0x002377CC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002377D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002377D4: lwc1        $f0, 0x657C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X657C);
    // 0x002377D8: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x002377DC: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x002377E0: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x002377E4: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x002377E8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002377EC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002377F0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x002377F4: lw          $a0, 0x51C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X51C);
    // 0x002377F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002377FC: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
L_00237800:
    // 0x00237800: jal         0x002811CC
    // 0x00237804: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_002811CC(rdram, ctx);
        goto after_0;
    // 0x00237804: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
L_00237808:
    // 0x00237808: beq         $s1, $zero, L_00237A44
    if (ctx->r17 == 0) {
        // 0x0023780C: nop
    
            goto L_00237A44;
    }
    // 0x0023780C: nop

    // 0x00237810: beq         $s0, $zero, L_00237A38
    if (ctx->r16 == 0) {
        // 0x00237814: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00237A38;
    }
    // 0x00237814: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237818: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x0023781C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237820: beql        $v0, $zero, L_00237A3C
    if (ctx->r2 == 0) {
        // 0x00237824: sw          $zero, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = 0;
            goto L_00237A3C;
    }
    goto skip_0;
    // 0x00237824: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    skip_0:
    // 0x00237828: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x0023782C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00237830: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x00237834: beql        $v0, $zero, L_00237A3C
    if (ctx->r2 == 0) {
        // 0x00237838: sw          $zero, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = 0;
            goto L_00237A3C;
    }
    goto skip_1;
    // 0x00237838: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    skip_1:
    // 0x0023783C: lbu         $s0, 0x66($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X66);
    // 0x00237840: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x00237844: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x00237848: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x0023784C: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x00237850: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x00237854: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x00237858: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x0023785C: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x00237860: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x00237864: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x00237868: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x0023786C: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x00237870: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x00237874: lw          $s1, 0x1A8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1A8);
    // 0x00237878: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x0023787C: lwc1        $f1, 0x68($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x00237880: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x00237884: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00237888: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023788C: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x00237890: swc1        $f1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00237894: jal         0x00253F90
    // 0x00237898: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    func_00253F90(rdram, ctx);
        goto after_1;
    // 0x00237898: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x0023789C: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x002378A0: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x002378A4: lwc1        $f1, 0x114($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X114);
    // 0x002378A8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002378AC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x002378B0: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x002378B4: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x002378B8: lwc1        $f1, 0x118($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X118);
    // 0x002378BC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002378C0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x002378C4: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x002378C8: lwc1        $f1, 0x80($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x002378CC: lwc1        $f0, 0x11C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X11C);
    // 0x002378D0: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002378D4: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x002378D8: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x002378DC: jal         0x0020E810
    // 0x002378E0: swc1        $f1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_0020E810(rdram, ctx);
        goto after_2;
    // 0x002378E0: swc1        $f1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x002378E4: addiu       $v0, $sp, 0x88
    ctx->r2 = ADD32(ctx->r29, 0X88);
    // 0x002378E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002378EC: addiu       $v0, $sp, 0xB8
    ctx->r2 = ADD32(ctx->r29, 0XB8);
    // 0x002378F0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x002378F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002378F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x002378FC: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x00237900: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x00237904: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x00237908: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x0023790C: jal         0x002688C8
    // 0x00237910: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002688C8(rdram, ctx);
        goto after_3;
    // 0x00237910: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00237914: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00237918: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x0023791C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00237920: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x00237924: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x00237928: sw          $t2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r10;
    // 0x0023792C: lwc1        $f0, 0x8C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x00237930: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237934: lwc1        $f1, 0x6580($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6580);
    // 0x00237938: addiu       $v0, $zero, 0xE9
    ctx->r2 = ADD32(0, 0XE9);
    // 0x0023793C: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x00237940: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00237944: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x00237948: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x0023794C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x00237950: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00237954: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00237958: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x0023795C: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x00237960: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x00237964: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00237968: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0023796C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00237970: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x00237974: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x00237978: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x0023797C: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x00237980: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00237984: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00237988: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0023798C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00237990: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x00237994: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x00237998: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x0023799C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x002379A0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x002379A4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x002379A8: lw          $v1, 0xB8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB8);
    // 0x002379AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002379B0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x002379B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x002379B8: bne         $s0, $v0, L_002379CC
    if (ctx->r16 != ctx->r2) {
        // 0x002379BC: sw          $v1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r3;
            goto L_002379CC;
    }
    // 0x002379BC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x002379C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002379C4: j           L_002379D0
    // 0x002379C8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
        goto L_002379D0;
    // 0x002379C8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
L_002379CC:
    // 0x002379CC: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
L_002379D0:
    // 0x002379D0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002379D4: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002379D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002379DC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002379E0: jal         0x0022F350
    // 0x002379E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0022F350(rdram, ctx);
        goto after_4;
    // 0x002379E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x002379E8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002379EC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002379F0: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x002379F4: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x002379F8: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x002379FC: lw          $a1, 0xA50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA50);
    // 0x00237A00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237A04: lwc1        $f0, 0x6584($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6584);
    // 0x00237A08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237A0C: lwc1        $f1, 0x6588($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6588);
    // 0x00237A10: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00237A14: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00237A18: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00237A1C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x00237A20: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x00237A24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00237A28: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237A2C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x00237A30: jal         0x00225DB0
    // 0x00237A34: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    func_00225DB0(rdram, ctx);
        goto after_5;
    // 0x00237A34: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    after_5:
L_00237A38:
    // 0x00237A38: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
L_00237A3C:
    // 0x00237A3C: sw          $zero, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = 0;
    // 0x00237A40: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
L_00237A44:
    // 0x00237A44: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x00237A48: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00237A4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237A50: beq         $v0, $zero, L_00237A74
    if (ctx->r2 == 0) {
        // 0x00237A54: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_00237A74;
    }
    // 0x00237A54: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00237A58: lw          $v0, 0x10C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10C);
    // 0x00237A5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00237A60: beq         $v0, $zero, L_00237A74
    if (ctx->r2 == 0) {
        // 0x00237A64: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00237A74;
    }
    // 0x00237A64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00237A68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x00237A6C: jal         0x0026E110
    // 0x00237A70: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0026E110(rdram, ctx);
        goto after_6;
    // 0x00237A70: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_6:
L_00237A74:
    // 0x00237A74: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x00237A78: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00237A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00237A80: beq         $v1, $v0, L_00237A90
    if (ctx->r3 == ctx->r2) {
        // 0x00237A84: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00237A90;
    }
    // 0x00237A84: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00237A88: bne         $v1, $v0, L_00237AD4
    if (ctx->r3 != ctx->r2) {
        // 0x00237A8C: nop
    
            goto L_00237AD4;
    }
    // 0x00237A8C: nop

L_00237A90:
    // 0x00237A90: addiu       $a0, $s3, 0x18
    ctx->r4 = ADD32(ctx->r19, 0X18);
    // 0x00237A94: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00237A98: jal         0x0020EEF8
    // 0x00237A9C: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x00237A9C: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    after_7:
    // 0x00237AA0: beq         $s6, $zero, L_00237AD4
    if (ctx->r22 == 0) {
        // 0x00237AA4: nop
    
            goto L_00237AD4;
    }
    // 0x00237AA4: nop

    // 0x00237AA8: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x00237AAC: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x00237AB0: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    // 0x00237AB4: jal         0x00246310
    // 0x00237AB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00246310(rdram, ctx);
        goto after_8;
    // 0x00237AB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
    // 0x00237ABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00237AC0: lwc1        $f1, 0x658C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X658C);
    // 0x00237AC4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00237AC8: lwc1        $f1, 0x50($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X50);
    // 0x00237ACC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00237AD0: swc1        $f1, 0x50($s3)
    MEM_W(0X50, ctx->r19) = ctx->f_odd[(1 - 1) * 2];
L_00237AD4:
    // 0x00237AD4: lw          $ra, 0xDC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XDC);
    // 0x00237AD8: lw          $s6, 0xD8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD8);
    // 0x00237ADC: lw          $s5, 0xD4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XD4);
    // 0x00237AE0: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00237AE4: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x00237AE8: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00237AEC: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00237AF0: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00237AF4: jr          $ra
    // 0x00237AF8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x00237AF8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_00271630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00271634: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x00271638: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0027163C: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00271640: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00271644: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00271648: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0027164C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x00271650: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x00271654: swc1        $f0, 0x2BBC($s0)
    MEM_W(0X2BBC, ctx->r16) = ctx->f0.u32l;
    // 0x00271658: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0027165C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00271660: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x00271664: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00271668: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x0027166C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x00271670: jal         0x00270C80
    // 0x00271674: nop

    func_00270C80(rdram, ctx);
        goto after_0;
    // 0x00271674: nop

    after_0:
    // 0x00271678: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027167C: lwc1        $f0, -0x7F2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7F2C);
    // 0x00271680: swc1        $f0, 0x2BBC($s0)
    MEM_W(0X2BBC, ctx->r16) = ctx->f0.u32l;
    // 0x00271684: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00271688: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0027168C: jr          $ra
    // 0x00271690: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00271690: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0023B38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023B38C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x0023B390: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x0023B394: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023B398: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x0023B39C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023B3A0: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x0023B3A4: sdc1        $f23, 0xA0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XA0, ctx->r29);
    // 0x0023B3A8: mtc1        $a2, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r6;
    // 0x0023B3AC: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x0023B3B0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0023B3B4: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x0023B3B8: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x0023B3BC: sdc1        $f22, 0x98($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X98, ctx->r29);
    // 0x0023B3C0: sdc1        $f21, 0x90($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X90, ctx->r29);
    // 0x0023B3C4: sdc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X88, ctx->r29);
    // 0x0023B3C8: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x0023B3CC: lw          $s2, 0xCC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XCC);
    // 0x0023B3D0: bne         $v0, $v1, L_0023B434
    if (ctx->r2 != ctx->r3) {
        // 0x0023B3D4: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_0023B434;
    }
    // 0x0023B3D4: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0023B3D8: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x0023B3DC: c.eq.s      $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f0.fl == ctx->f23.fl;
    // 0x0023B3E0: nop

    // 0x0023B3E4: bc1f        L_0023B434
    if (!c1cs) {
        // 0x0023B3E8: nop
    
            goto L_0023B434;
    }
    // 0x0023B3E8: nop

    // 0x0023B3EC: lwc1        $f1, 0x64($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X64);
    // 0x0023B3F0: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0023B3F4: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023B3F8: nop

    // 0x0023B3FC: bc1f        L_0023B434
    if (!c1cs) {
        // 0x0023B400: nop
    
            goto L_0023B434;
    }
    // 0x0023B400: nop

    // 0x0023B404: lwc1        $f1, 0x68($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X68);
    // 0x0023B408: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0023B40C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023B410: nop

    // 0x0023B414: bc1f        L_0023B434
    if (!c1cs) {
        // 0x0023B418: nop
    
            goto L_0023B434;
    }
    // 0x0023B418: nop

    // 0x0023B41C: lwc1        $f1, 0x6C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X6C);
    // 0x0023B420: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0023B424: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023B428: nop

    // 0x0023B42C: bc1t        L_0023B638
    if (c1cs) {
        // 0x0023B430: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B638;
    }
    // 0x0023B430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B434:
    // 0x0023B434: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0023B438: lwc1        $f1, 0x0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X0);
    // 0x0023B43C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0023B440: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023B444: swc1        $f3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023B448: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0023B44C: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0023B450: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0023B454: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023B458: beq         $a0, $zero, L_0023B488
    if (ctx->r4 == 0) {
        // 0x0023B45C: swc1        $f2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
            goto L_0023B488;
    }
    // 0x0023B45C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x0023B460: lwc1        $f0, 0x58($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X58);
    // 0x0023B464: mul.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023B468: lwc1        $f1, 0x60($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X60);
    // 0x0023B46C: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0023B470: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023B474: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023B478: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023B47C: nop

    // 0x0023B480: bc1t        L_0023B638
    if (c1cs) {
        // 0x0023B484: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B638;
    }
    // 0x0023B484: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B488:
    // 0x0023B488: lwc1        $f0, 0x58($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X58);
    // 0x0023B48C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023B490: lwc1        $f12, 0x60($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X60);
    // 0x0023B494: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023B498: jal         0x00298470
    // 0x0023B49C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0023B49C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_0:
    // 0x0023B4A0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0023B4A4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023B4A8: c.eq.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl == ctx->f22.fl;
    // 0x0023B4AC: nop

    // 0x0023B4B0: bc1t        L_0023B638
    if (c1cs) {
        // 0x0023B4B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B638;
    }
    // 0x0023B4B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023B4B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B4BC: lwc1        $f0, 0x6688($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6688);
    // 0x0023B4C0: lwc1        $f1, 0x58($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X58);
    // 0x0023B4C4: div.s       $f21, $f0, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023B4C8: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0023B4CC: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0023B4D0: mul.s       $f5, $f3, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023B4D4: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023B4D8: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x0023B4DC: mul.s       $f4, $f4, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f21.fl);
    // 0x0023B4E0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0023B4E4: mul.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0023B4E8: add.s       $f20, $f5, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f5.fl + ctx->f0.fl;
    // 0x0023B4EC: mul.s       $f5, $f4, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x0023B4F0: nop

    // 0x0023B4F4: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0023B4F8: sub.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f5.fl;
    // 0x0023B4FC: mul.s       $f5, $f23, $f23
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f5.fl = MUL_S(ctx->f23.fl, ctx->f23.fl);
    // 0x0023B500: sub.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f1.fl;
    // 0x0023B504: mul.s       $f0, $f3, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0023B508: nop

    // 0x0023B50C: mul.s       $f1, $f2, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0023B510: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023B514: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x0023B518: sub.s       $f12, $f5, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f5.fl - ctx->f0.fl;
    // 0x0023B51C: swc1        $f3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0023B520: c.lt.s      $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f22.fl < ctx->f12.fl;
    // 0x0023B524: nop

    // 0x0023B528: bc1f        L_0023B638
    if (!c1cs) {
        // 0x0023B52C: swc1        $f2, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
            goto L_0023B638;
    }
    // 0x0023B52C: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x0023B530: jal         0x00298470
    // 0x0023B534: nop

    func_00298470(rdram, ctx);
        goto after_1;
    // 0x0023B534: nop

    after_1:
    // 0x0023B538: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x0023B53C: mul.s       $f1, $f0, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0023B540: c.lt.s      $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f1.fl < ctx->f22.fl;
    // 0x0023B544: nop

    // 0x0023B548: bc1f        L_0023B558
    if (!c1cs) {
        // 0x0023B54C: nop
    
            goto L_0023B558;
    }
    // 0x0023B54C: nop

    // 0x0023B550: beq         $s2, $zero, L_0023B638
    if (ctx->r18 == 0) {
        // 0x0023B554: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B638;
    }
    // 0x0023B554: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B558:
    // 0x0023B558: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023B55C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023B560: nop

    // 0x0023B564: bc1f        L_0023B634
    if (!c1cs) {
        // 0x0023B568: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_0023B634;
    }
    // 0x0023B568: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0023B56C: addiu       $a3, $s0, 0x4C
    ctx->r7 = ADD32(ctx->r16, 0X4C);
    // 0x0023B570: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x0023B574: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0023B578: jal         0x0020EF8C
    // 0x0023B57C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF8C(rdram, ctx);
        goto after_2;
    // 0x0023B57C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_2:
    // 0x0023B580: beq         $s3, $zero, L_0023B5B4
    if (ctx->r19 == 0) {
        // 0x0023B584: nop
    
            goto L_0023B5B4;
    }
    // 0x0023B584: nop

    // 0x0023B588: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x0023B58C: lwc1        $f0, 0xB8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x0023B590: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023B594: nop

    // 0x0023B598: bc1t        L_0023B638
    if (c1cs) {
        // 0x0023B59C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B638;
    }
    // 0x0023B59C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023B5A0: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x0023B5A4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023B5A8: nop

    // 0x0023B5AC: bc1t        L_0023B638
    if (c1cs) {
        // 0x0023B5B0: nop
    
            goto L_0023B638;
    }
    // 0x0023B5B0: nop

L_0023B5B4:
    // 0x0023B5B4: lwc1        $f1, 0x50($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x0023B5B8: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0023B5BC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0023B5C0: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x0023B5C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B5C8: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x0023B5CC: swc1        $f1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0023B5D0: lwc1        $f1, 0x8($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X8);
    // 0x0023B5D4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x0023B5D8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023B5DC: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    // 0x0023B5E0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x0023B5E4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x0023B5E8: lwc1        $f0, 0xC8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x0023B5EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0023B5F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023B5F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023B5F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0023B5FC: jal         0x0023AB18
    // 0x0023B600: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_0023AB18(rdram, ctx);
        goto after_3;
    // 0x0023B600: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x0023B604: beq         $v0, $zero, L_0023B634
    if (ctx->r2 == 0) {
        // 0x0023B608: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023B634;
    }
    // 0x0023B608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023B60C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0023B610: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    // 0x0023B614: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x0023B618: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x0023B61C: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0023B620: sw          $t0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r8;
    // 0x0023B624: sw          $t1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r9;
    // 0x0023B628: sw          $t2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r10;
    // 0x0023B62C: j           L_0023B638
    // 0x0023B630: swc1        $f23, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
        goto L_0023B638;
    // 0x0023B630: swc1        $f23, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
L_0023B634:
    // 0x0023B634: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B638:
    // 0x0023B638: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x0023B63C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x0023B640: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x0023B644: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0023B648: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x0023B64C: ldc1        $f23, 0xA0($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XA0);
    // 0x0023B650: ldc1        $f22, 0x98($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X98);
    // 0x0023B654: ldc1        $f21, 0x90($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X90);
    // 0x0023B658: ldc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X88);
    // 0x0023B65C: jr          $ra
    // 0x0023B660: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0023B660: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_00254584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254584: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00254588: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0025458C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00254590: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00254594: beq         $v0, $zero, L_002545A4
    if (ctx->r2 == 0) {
        // 0x00254598: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_002545A4;
    }
    // 0x00254598: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025459C: j           L_002545AC
    // 0x002545A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002545AC;
    // 0x002545A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002545A4:
    // 0x002545A4: lbu         $v0, 0x6A8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6A8);
    // 0x002545A8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_002545AC:
    // 0x002545AC: beq         $v0, $zero, L_002545D4
    if (ctx->r2 == 0) {
        // 0x002545B0: addiu       $v0, $zero, 0x1C
        ctx->r2 = ADD32(0, 0X1C);
            goto L_002545D4;
    }
    // 0x002545B0: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x002545B4: lw          $v0, 0x140($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X140);
    // 0x002545B8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x002545BC: beq         $v0, $zero, L_002545E4
    if (ctx->r2 == 0) {
        // 0x002545C0: nop
    
            goto L_002545E4;
    }
    // 0x002545C0: nop

    // 0x002545C4: jal         0x00254430
    // 0x002545C8: nop

    func_00254430(rdram, ctx);
        goto after_0;
    // 0x002545C8: nop

    after_0:
    // 0x002545CC: j           L_002545E4
    // 0x002545D0: nop

        goto L_002545E4;
    // 0x002545D0: nop

L_002545D4:
    // 0x002545D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002545D8: addiu       $a2, $zero, 0xA00
    ctx->r6 = ADD32(0, 0XA00);
    // 0x002545DC: jal         0x00249358
    // 0x002545E0: lui         $a3, 0x200
    ctx->r7 = S32(0X200 << 16);
    func_00249358(rdram, ctx);
        goto after_1;
    // 0x002545E0: lui         $a3, 0x200
    ctx->r7 = S32(0X200 << 16);
    after_1:
L_002545E4:
    // 0x002545E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002545E8: jr          $ra
    // 0x002545EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002545EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00423D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D28: addiu       $v0, $v0, 0x52C4
    ctx->r2 = ADD32(ctx->r2, 0X52C4);
    // 0x00423D2C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00423D30 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00423D30(rdram, ctx);
;}
RECOMP_FUNC void func_00454C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454C8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00454C90: sw          $zero, 0x930($at)
    MEM_W(0X930, ctx->r1) = 0;
    // 0x00454C94: jr          $ra
    // 0x00454C98: nop

    return;
    // 0x00454C98: nop

;}
RECOMP_FUNC void func_002953B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002953B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002953B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002953BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002953C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002953C4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002953C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002953CC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002953D0: lui         $a1, 0x29
    ctx->r5 = S32(0X29 << 16);
    // 0x002953D4: addiu       $a1, $a1, 0x6360
    ctx->r5 = ADD32(ctx->r5, 0X6360);
    // 0x002953D8: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x002953DC: addiu       $a2, $a2, 0x64A0
    ctx->r6 = ADD32(ctx->r6, 0X64A0);
    // 0x002953E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002953E4: jal         0x00296340
    // 0x002953E8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_00296340(rdram, ctx);
        goto after_0;
    // 0x002953E8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x002953EC: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x002953F0: sw          $s1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r17;
    // 0x002953F4: sw          $s2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r18;
    // 0x002953F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002953FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00295400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00295404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00295408: jr          $ra
    // 0x0029540C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029540C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
