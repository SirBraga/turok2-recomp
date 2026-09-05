#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00202130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00202134: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00202138: lui         $s0, 0x8040
    ctx->r16 = S32(0X8040 << 16);
    // 0x0020213C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00202140: jal         0x00266B80
    // 0x00202144: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00202144: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x00202148: lui         $s1, 0x8015
    ctx->r17 = S32(0X8015 << 16);
    // 0x0020214C: addiu       $s1, $s1, -0x6000
    ctx->r17 = ADD32(ctx->r17, -0X6000);
    // 0x00202150: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00202154: beq         $v0, $v1, L_00202178
    if (ctx->r2 == ctx->r3) {
        // 0x00202158: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00202178;
    }
    // 0x00202158: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0020215C: jal         0x00266B80
    // 0x00202160: nop

    func_00266B80(rdram, ctx);
        goto after_1;
    // 0x00202160: nop

    after_1:
    // 0x00202164: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x00202168: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0020216C: lui         $v1, 0xFFF8
    ctx->r3 = S32(0XFFF8 << 16);
    // 0x00202170: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x00202174: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00202178:
    // 0x00202178: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0020217C: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x00202180: jal         0x00266C5C
    // 0x00202184: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00266C5C(rdram, ctx);
        goto after_2;
    // 0x00202184: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00202188: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0020218C: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x00202190: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00202194: jal         0x00202474
    // 0x00202198: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00202474(rdram, ctx);
        goto after_3;
    // 0x00202198: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0020219C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002021A0: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x002021A4: jal         0x00201AD0
    // 0x002021A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_00201AD0(rdram, ctx);
        goto after_4;
    // 0x002021A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x002021AC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002021B0: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x002021B4: jal         0x00201CC0
    // 0x002021B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_00201CC0(rdram, ctx);
        goto after_5;
    // 0x002021B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x002021BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002021C0: jal         0x0028D820
    // 0x002021C4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0028D820(rdram, ctx);
        goto after_6;
    // 0x002021C4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_6:
    // 0x002021C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002021CC: jal         0x00202BB0
    // 0x002021D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_00202BB0(rdram, ctx);
        goto after_7;
    // 0x002021D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x002021D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002021D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002021DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002021E0: jr          $ra
    // 0x002021E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002021E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_002026EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002026EC: addiu       $a3, $a1, -0x20
    ctx->r7 = ADD32(ctx->r5, -0X20);
    // 0x002026F0: lw          $a2, 0x8($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X8);
    // 0x002026F4: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002026F8: bne         $v0, $zero, L_00202780
    if (ctx->r2 != 0) {
        // 0x002026FC: addu        $t0, $a0, $zero
        ctx->r8 = ADD32(ctx->r4, 0);
            goto L_00202780;
    }
    // 0x002026FC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00202700: lw          $a1, -0x20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X20);
    // 0x00202704: bnel        $a1, $zero, L_00202738
    if (ctx->r5 != 0) {
        // 0x00202708: sw          $a1, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r5;
            goto L_00202738;
    }
    goto skip_0;
    // 0x00202708: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    skip_0:
    // 0x0020270C: beq         $a2, $zero, L_00202764
    if (ctx->r6 == 0) {
        // 0x00202710: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_00202764;
    }
    // 0x00202710: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
L_00202714:
    // 0x00202714: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00202718: bne         $v0, $zero, L_0020272C
    if (ctx->r2 != 0) {
        // 0x0020271C: nop
    
            goto L_0020272C;
    }
    // 0x0020271C: nop

    // 0x00202720: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x00202724: bne         $a1, $zero, L_00202714
    if (ctx->r5 != 0) {
        // 0x00202728: nop
    
            goto L_00202714;
    }
    // 0x00202728: nop

L_0020272C:
    // 0x0020272C: beq         $a1, $zero, L_00202764
    if (ctx->r5 == 0) {
        // 0x00202730: nop
    
            goto L_00202764;
    }
    // 0x00202730: nop

    // 0x00202734: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
L_00202738:
    // 0x00202738: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0020273C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x00202740: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00202744: bnel        $v0, $zero, L_0020274C
    if (ctx->r2 != 0) {
        // 0x00202748: sw          $a2, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r6;
            goto L_0020274C;
    }
    goto skip_1;
    // 0x00202748: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    skip_1:
L_0020274C:
    // 0x0020274C: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x00202750: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x00202754: beql        $v0, $a1, L_00202780
    if (ctx->r2 == ctx->r5) {
        // 0x00202758: sw          $a2, 0xC($t0)
        MEM_W(0XC, ctx->r8) = ctx->r6;
            goto L_00202780;
    }
    goto skip_2;
    // 0x00202758: sw          $a2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r6;
    skip_2:
    // 0x0020275C: j           L_00202780
    // 0x00202760: nop

        goto L_00202780;
    // 0x00202760: nop

L_00202764:
    // 0x00202764: lw          $v0, 0x8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X8);
    // 0x00202768: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x0020276C: lw          $v0, 0x8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X8);
    // 0x00202770: beql        $v0, $zero, L_0020277C
    if (ctx->r2 == 0) {
        // 0x00202774: sw          $a2, 0xC($t0)
        MEM_W(0XC, ctx->r8) = ctx->r6;
            goto L_0020277C;
    }
    goto skip_3;
    // 0x00202774: sw          $a2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r6;
    skip_3:
    // 0x00202778: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_0020277C:
    // 0x0020277C: sw          $a2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r6;
L_00202780:
    // 0x00202780: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x00202784: lw          $a0, 0x14($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X14);
    // 0x00202788: lw          $v1, 0x14($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X14);
    // 0x0020278C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00202790: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00202794: sw          $v1, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r3;
    // 0x00202798: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x0020279C: beq         $v1, $zero, L_002027AC
    if (ctx->r3 == 0) {
        // 0x002027A0: nop
    
            goto L_002027AC;
    }
    // 0x002027A0: nop

    // 0x002027A4: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x002027A8: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
L_002027AC:
    // 0x002027AC: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x002027B0: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x002027B4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x002027B8: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x002027BC: beq         $v0, $zero, L_00202800
    if (ctx->r2 == 0) {
        // 0x002027C0: nop
    
            goto L_00202800;
    }
    // 0x002027C0: nop

    // 0x002027C4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x002027C8: beq         $v1, $zero, L_002027D8
    if (ctx->r3 == 0) {
        // 0x002027CC: nop
    
            goto L_002027D8;
    }
    // 0x002027CC: nop

    // 0x002027D0: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x002027D4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_002027D8:
    // 0x002027D8: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x002027DC: beq         $v1, $zero, L_002027EC
    if (ctx->r3 == 0) {
        // 0x002027E0: nop
    
            goto L_002027EC;
    }
    // 0x002027E0: nop

    // 0x002027E4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x002027E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002027EC:
    // 0x002027EC: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x002027F0: bne         $v0, $a3, L_00202800
    if (ctx->r2 != ctx->r7) {
        // 0x002027F4: nop
    
            goto L_00202800;
    }
    // 0x002027F4: nop

    // 0x002027F8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x002027FC: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
L_00202800:
    // 0x00202800: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x00202804: jr          $ra
    // 0x00202808: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    return;
    // 0x00202808: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x0020280C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x00202810: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00202814: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x00202818: beq         $a3, $zero, L_00202854
    if (ctx->r7 == 0) {
        // 0x0020281C: nop
    
            goto L_00202854;
    }
    // 0x0020281C: nop

L_00202820:
    // 0x00202820: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00202824: lw          $v1, 0x14($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X14);
    // 0x00202828: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0020282C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00202830: lw          $v1, 0x14($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X14);
    // 0x00202834: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x00202838: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x0020283C: bnel        $v0, $zero, L_00202844
    if (ctx->r2 != 0) {
        // 0x00202840: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00202844;
    }
    goto skip_4;
    // 0x00202840: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_4:
L_00202844:
    // 0x00202844: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00202848: lw          $a3, 0x4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4);
    // 0x0020284C: bne         $a3, $zero, L_00202820
    if (ctx->r7 != 0) {
        // 0x00202850: nop
    
            goto L_00202820;
    }
    // 0x00202850: nop

L_00202854:
    // 0x00202854: jr          $ra
    // 0x00202858: nop

    return;
    // 0x00202858: nop

;}
RECOMP_FUNC void entry_00202A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202A08: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00202A0C: sll         $v0, $a1, 5
    ctx->r2 = S32(ctx->r5 << 5);
    // 0x00202A10: srl         $v1, $a1, 1
    ctx->r3 = S32(U32(ctx->r5) >> 1);
    // 0x00202A14: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00202A18: srl         $v1, $a1, 9
    ctx->r3 = S32(U32(ctx->r5) >> 9);
    // 0x00202A1C: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00202A20: srl         $v1, $a1, 17
    ctx->r3 = S32(U32(ctx->r5) >> 17);
    // 0x00202A24: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x00202A28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00202A2C: lw          $a0, -0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7E40);
    // 0x00202A30: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00202A34: lw          $v1, -0x7E3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7E3C);
    // 0x00202A38: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00202A3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00202A40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00202A44: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00202A48: beq         $v0, $a1, L_00202A6C
    if (ctx->r2 == ctx->r5) {
        // 0x00202A4C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00202A6C;
    }
    // 0x00202A4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00202A50: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00202A54:
    // 0x00202A54: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x00202A58: beq         $v1, $zero, L_00202AB8
    if (ctx->r3 == 0) {
        // 0x00202A5C: nop
    
            goto L_00202AB8;
    }
    // 0x00202A5C: nop

    // 0x00202A60: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00202A64: bnel        $v0, $a1, L_00202A54
    if (ctx->r2 != ctx->r5) {
        // 0x00202A68: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_00202A54;
    }
    goto skip_0;
    // 0x00202A68: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    skip_0:
L_00202A6C:
    // 0x00202A6C: beq         $v1, $zero, L_00202AB8
    if (ctx->r3 == 0) {
        // 0x00202A70: nop
    
            goto L_00202AB8;
    }
    // 0x00202A70: nop

    // 0x00202A74: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x00202A78: beq         $a0, $zero, L_00202AA4
    if (ctx->r4 == 0) {
        // 0x00202A7C: nop
    
            goto L_00202AA4;
    }
    // 0x00202A7C: nop

    // 0x00202A80: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00202A84: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00202A88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00202A8C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00202A90: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00202A94: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x00202A98: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00202A9C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00202AA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00202AA4:
    // 0x00202AA4: bnel        $a2, $zero, L_00202AAC
    if (ctx->r6 != 0) {
        // 0x00202AA8: sw          $a0, 0xC($a2)
        MEM_W(0XC, ctx->r6) = ctx->r4;
            goto L_00202AAC;
    }
    goto skip_1;
    // 0x00202AA8: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    skip_1:
L_00202AAC:
    // 0x00202AAC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00202AB0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x00202AB4: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_00202AB8:
    // 0x00202AB8: jr          $ra
    // 0x00202ABC: nop

    return;
    // 0x00202ABC: nop

    // 0x00202AC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00202AC4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00202AC8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00202ACC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00202AD0: sllv        $v0, $a3, $v1
    ctx->r2 = S32(ctx->r7 << (ctx->r3 & 31));
L_00202AD4:
    // 0x00202AD4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00202AD8: beql        $v0, $zero, L_00202AEC
    if (ctx->r2 == 0) {
        // 0x00202ADC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00202AEC;
    }
    goto skip_2;
    // 0x00202ADC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x00202AE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00202AE4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00202AE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00202AEC:
    // 0x00202AEC: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x00202AF0: bne         $v0, $zero, L_00202AD4
    if (ctx->r2 != 0) {
        // 0x00202AF4: sllv        $v0, $a3, $v1
        ctx->r2 = S32(ctx->r7 << (ctx->r3 & 31));
            goto L_00202AD4;
    }
    // 0x00202AF4: sllv        $v0, $a3, $v1
    ctx->r2 = S32(ctx->r7 << (ctx->r3 & 31));
    // 0x00202AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00202AFC: bnel        $a1, $v0, L_00202B04
    if (ctx->r5 != ctx->r2) {
        // 0x00202B00: addu        $a2, $a2, $v0
        ctx->r6 = ADD32(ctx->r6, ctx->r2);
            goto L_00202B04;
    }
    goto skip_3;
    // 0x00202B00: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    skip_3:
L_00202B04:
    // 0x00202B04: jr          $ra
    // 0x00202B08: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    return;
    // 0x00202B08: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00202B0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00202B10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202B14: lw          $v0, -0x4F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F50);
    // 0x00202B18: beq         $v0, $zero, L_00202B3C
    if (ctx->r2 == 0) {
        // 0x00202B1C: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_00202B3C;
    }
    // 0x00202B1C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00202B20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00202B24: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00202B28:
    // 0x00202B28: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x00202B2C: bne         $v0, $zero, L_00202B28
    if (ctx->r2 != 0) {
        // 0x00202B30: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00202B28;
    }
    // 0x00202B30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00202B34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202B38: lw          $v0, -0x4F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F50);
L_00202B3C:
    // 0x00202B3C: beq         $v0, $zero, L_00202B88
    if (ctx->r2 == 0) {
        // 0x00202B40: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00202B88;
    }
    // 0x00202B40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00202B44: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x00202B48: lw          $a3, -0x7E3C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X7E3C);
    // 0x00202B4C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_00202B50:
    // 0x00202B50: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x00202B54: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x00202B58: beq         $v0, $zero, L_00202B6C
    if (ctx->r2 == 0) {
        // 0x00202B5C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00202B6C;
    }
    // 0x00202B5C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00202B60:
    // 0x00202B60: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00202B64: bne         $v0, $zero, L_00202B60
    if (ctx->r2 != 0) {
        // 0x00202B68: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00202B60;
    }
    // 0x00202B68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00202B6C:
    // 0x00202B6C: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00202B70: bnel        $v0, $zero, L_00202B78
    if (ctx->r2 != 0) {
        // 0x00202B74: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_00202B78;
    }
    goto skip_4;
    // 0x00202B74: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_4:
L_00202B78:
    // 0x00202B78: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00202B7C: sltu        $v0, $a0, $a2
    ctx->r2 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x00202B80: bne         $v0, $zero, L_00202B50
    if (ctx->r2 != 0) {
        // 0x00202B84: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_00202B50;
    }
    // 0x00202B84: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_00202B88:
    // 0x00202B88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00202B8C: lw          $v0, -0x4F48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F48);
    // 0x00202B90: beq         $v0, $zero, L_00202BA0
    if (ctx->r2 == 0) {
        // 0x00202B94: nop
    
            goto L_00202BA0;
    }
    // 0x00202B94: nop

    // 0x00202B98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00202B9C: sw          $zero, -0x4F48($at)
    MEM_W(-0X4F48, ctx->r1) = 0;
L_00202BA0:
    // 0x00202BA0: jr          $ra
    // 0x00202BA4: nop

    return;
    // 0x00202BA4: nop

;}
RECOMP_FUNC void entry_002067C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002067C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002067C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002067CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002067D0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x002067D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002067D8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002067DC: lw          $v0, -0x7DF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7DF0);
    // 0x002067E0: beq         $v0, $zero, L_00206808
    if (ctx->r2 == 0) {
        // 0x002067E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00206808;
    }
    // 0x002067E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002067E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002067EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002067F0: sw          $zero, -0x7DF0($at)
    MEM_W(-0X7DF0, ctx->r1) = 0;
    // 0x002067F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002067F8: addiu       $a0, $a0, -0x7230
    ctx->r4 = ADD32(ctx->r4, -0X7230);
    // 0x002067FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00206800: jal         0x0029B820
    // 0x00206804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00206804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_00206808:
    // 0x00206808: beq         $s0, $zero, L_00206814
    if (ctx->r16 == 0) {
        // 0x0020680C: addiu       $a3, $zero, -0x201
        ctx->r7 = ADD32(0, -0X201);
            goto L_00206814;
    }
    // 0x0020680C: addiu       $a3, $zero, -0x201
    ctx->r7 = ADD32(0, -0X201);
    // 0x00206810: addiu       $a3, $zero, -0x401
    ctx->r7 = ADD32(0, -0X401);
L_00206814:
    // 0x00206814: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00206818: lw          $a2, -0x4F40($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4F40);
    // 0x0020681C: beq         $a2, $zero, L_00206850
    if (ctx->r6 == 0) {
        // 0x00206820: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00206850;
    }
    // 0x00206820: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00206824: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00206828:
    // 0x00206828: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020682C: lw          $v0, -0x7E30($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E30);
    // 0x00206830: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00206834: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00206838: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0020683C: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x00206840: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x00206844: sltu        $v0, $a0, $a2
    ctx->r2 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x00206848: bne         $v0, $zero, L_00206828
    if (ctx->r2 != 0) {
        // 0x0020684C: addiu       $a1, $a1, 0x28
        ctx->r5 = ADD32(ctx->r5, 0X28);
            goto L_00206828;
    }
    // 0x0020684C: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
L_00206850:
    // 0x00206850: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00206854: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00206858: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0020685C: sw          $zero, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = 0;
    // 0x00206860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00206864: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206868: jr          $ra
    // 0x0020686C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020686C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x00206870: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00206874: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x00206878: bne         $v0, $zero, L_002068CC
    if (ctx->r2 != 0) {
        // 0x0020687C: nop
    
            goto L_002068CC;
    }
    // 0x0020687C: nop

    // 0x00206880: beq         $a0, $zero, L_00206910
    if (ctx->r4 == 0) {
        // 0x00206884: nop
    
            goto L_00206910;
    }
    // 0x00206884: nop

    // 0x00206888: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020688C: addiu       $v1, $v1, -0x7210
    ctx->r3 = ADD32(ctx->r3, -0X7210);
L_00206890:
    // 0x00206890: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00206894: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x00206898: bne         $v0, $zero, L_002068C0
    if (ctx->r2 != 0) {
        // 0x0020689C: nop
    
            goto L_002068C0;
    }
    // 0x0020689C: nop

    // 0x002068A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002068A4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x002068A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002068AC: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x002068B0: bnel        $v0, $zero, L_002068CC
    if (ctx->r2 != 0) {
        // 0x002068B4: sw          $a0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r4;
            goto L_002068CC;
    }
    goto skip_0;
    // 0x002068B4: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    skip_0:
L_002068B8:
    // 0x002068B8: jr          $ra
    // 0x002068BC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x002068BC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_002068C0:
    // 0x002068C0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x002068C4: bne         $a0, $zero, L_00206890
    if (ctx->r4 != 0) {
        // 0x002068C8: nop
    
            goto L_00206890;
    }
    // 0x002068C8: nop

L_002068CC:
    // 0x002068CC: beq         $a0, $zero, L_00206910
    if (ctx->r4 == 0) {
        // 0x002068D0: nop
    
            goto L_00206910;
    }
    // 0x002068D0: nop

    // 0x002068D4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x002068D8: addiu       $a1, $a1, -0x7210
    ctx->r5 = ADD32(ctx->r5, -0X7210);
L_002068DC:
    // 0x002068DC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002068E0: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x002068E4: bne         $v0, $zero, L_00206904
    if (ctx->r2 != 0) {
        // 0x002068E8: nop
    
            goto L_00206904;
    }
    // 0x002068E8: nop

    // 0x002068EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002068F0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x002068F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002068F8: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x002068FC: beq         $v0, $zero, L_002068B8
    if (ctx->r2 == 0) {
        // 0x00206900: nop
    
            goto L_002068B8;
    }
    // 0x00206900: nop

L_00206904:
    // 0x00206904: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x00206908: bne         $a0, $zero, L_002068DC
    if (ctx->r4 != 0) {
        // 0x0020690C: nop
    
            goto L_002068DC;
    }
    // 0x0020690C: nop

L_00206910:
    // 0x00206910: jr          $ra
    // 0x00206914: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00206914: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00206950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206950: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00206954: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00206958: bne         $v0, $zero, L_0020697C
    if (ctx->r2 != 0) {
        // 0x0020695C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0020697C;
    }
    // 0x0020695C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00206960: sll         $v0, $a1, 6
    ctx->r2 = S32(ctx->r5 << 6);
    // 0x00206964: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x00206968: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x0020696C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x00206970: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x00206974: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00206978: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
L_0020697C:
    // 0x0020697C: jr          $ra
    // 0x00206980: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    return;
    // 0x00206980: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void entry_00207914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00207918: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0020791C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00207920: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00207924: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00207928: jal         0x00224F48
    // 0x0020792C: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    func_00224F48(rdram, ctx);
        goto after_0;
    // 0x0020792C: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x00207930: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00207934: jr          $ra
    // 0x00207938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00207938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00207A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207A54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00207A58: sw          $zero, -0x4A90($at)
    MEM_W(-0X4A90, ctx->r1) = 0;
    // 0x00207A5C: jr          $ra
    // 0x00207A60: nop

    return;
    // 0x00207A60: nop

;}
RECOMP_FUNC void entry_00207C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207C48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00207C4C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00207C50: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00207C54: addiu       $v0, $zero, -0x1C8
    ctx->r2 = ADD32(0, -0X1C8);
    // 0x00207C58: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00207C5C: jr          $ra
    // 0x00207C60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    return;
    // 0x00207C60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void entry_00207C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207C58: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00207C5C: jr          $ra
    // 0x00207C60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    return;
    // 0x00207C60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void entry_00207FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00207FC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00207FC4: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00207FC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00207FCC: ori         $a1, $a1, 0xFF7F
    ctx->r5 = ctx->r5 | 0XFF7F;
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
    // 0x00207FE4: jr          $ra
    // 0x00207FE8: nop

    return;
    // 0x00207FE8: nop

;}
RECOMP_FUNC void entry_00207FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
    // 0x00207FE4: jr          $ra
    // 0x00207FE8: nop

    return;
    // 0x00207FE8: nop

;}
RECOMP_FUNC void entry_0020BEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020BEE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0020BEEC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0020BEF0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020BEF4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020BEF8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020BEFC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020BF00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020BF04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020BF08: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0020BF0C: jal         0x002017D4
    // 0x0020BF10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020BF10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0020BF14: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0020BF18: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x0020BF1C: blez        $s4, L_0020BF8C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0020BF20: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0020BF8C;
    }
    // 0x0020BF20: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0020BF24: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_0020BF28:
    // 0x0020BF28: jal         0x002017D4
    // 0x0020BF2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0020BF2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0020BF30: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0020BF34: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0020BF38: blez        $s2, L_0020BF7C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0020BF3C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0020BF7C;
    }
    // 0x0020BF3C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0020BF40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0020BF44:
    // 0x0020BF44: jal         0x002017D4
    // 0x0020BF48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0020BF48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0020BF4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020BF50: jal         0x002017D4
    // 0x0020BF54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020BF54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0020BF58: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0020BF5C: beql        $a1, $zero, L_0020BF70
    if (ctx->r5 == 0) {
        // 0x0020BF60: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0020BF70;
    }
    goto skip_0;
    // 0x0020BF60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0020BF64: jal         0x00205A2C
    // 0x0020BF68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00205A2C(rdram, ctx);
        goto after_4;
    // 0x0020BF68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x0020BF6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0020BF70:
    // 0x0020BF70: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0020BF74: bnel        $v0, $zero, L_0020BF44
    if (ctx->r2 != 0) {
        // 0x0020BF78: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0020BF44;
    }
    goto skip_1;
    // 0x0020BF78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_1:
L_0020BF7C:
    // 0x0020BF7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020BF80: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0020BF84: bnel        $v0, $zero, L_0020BF28
    if (ctx->r2 != 0) {
        // 0x0020BF88: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0020BF28;
    }
    goto skip_2;
    // 0x0020BF88: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_2:
L_0020BF8C:
    // 0x0020BF8C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0020BF90: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020BF94: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020BF98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020BF9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020BFA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020BFA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020BFA8: jr          $ra
    // 0x0020BFAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0020BFAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0020BFB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0020BFB4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0020BFB8: jr          $ra
    // 0x0020BFBC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x0020BFBC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0020BFC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BFC4: sw          $zero, -0x71E4($at)
    MEM_W(-0X71E4, ctx->r1) = 0;
    // 0x0020BFC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BFCC: sw          $zero, -0x71E8($at)
    MEM_W(-0X71E8, ctx->r1) = 0;
    // 0x0020BFD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BFD4: sw          $zero, -0x71C8($at)
    MEM_W(-0X71C8, ctx->r1) = 0;
    // 0x0020BFD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020BFDC: sw          $zero, -0x71D0($at)
    MEM_W(-0X71D0, ctx->r1) = 0;
    // 0x0020BFE0: jr          $ra
    // 0x0020BFE4: nop

    return;
    // 0x0020BFE4: nop

    // 0x0020BFE8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020BFEC: beq         $v0, $zero, L_0020C024
    if (ctx->r2 == 0) {
        // 0x0020BFF0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020C024;
    }
    // 0x0020BFF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0020BFF4:
    // 0x0020BFF4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0020BFF8: beq         $v1, $a1, L_0020C028
    if (ctx->r3 == ctx->r5) {
        // 0x0020BFFC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0020C028;
    }
    // 0x0020BFFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020C000: sltu        $v0, $a1, $v1
    ctx->r2 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x0020C004: beq         $v0, $zero, L_0020C018
    if (ctx->r2 == 0) {
        // 0x0020C008: nop
    
            goto L_0020C018;
    }
    // 0x0020C008: nop

    // 0x0020C00C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0020C010: j           L_0020C01C
    // 0x0020C014: nop

        goto L_0020C01C;
    // 0x0020C014: nop

L_0020C018:
    // 0x0020C018: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
L_0020C01C:
    // 0x0020C01C: bne         $v0, $zero, L_0020BFF4
    if (ctx->r2 != 0) {
        // 0x0020C020: nop
    
            goto L_0020BFF4;
    }
    // 0x0020C020: nop

L_0020C024:
    // 0x0020C024: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_0020C028:
    // 0x0020C028: jr          $ra
    // 0x0020C02C: nop

    return;
    // 0x0020C02C: nop

    // 0x0020C030: beql        $a3, $zero, L_0020C0B0
    if (ctx->r7 == 0) {
        // 0x0020C034: sw          $a2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r6;
            goto L_0020C0B0;
    }
    goto skip_3;
    // 0x0020C034: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    skip_3:
    // 0x0020C038: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0020C03C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x0020C040: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x0020C044: beql        $v0, $zero, L_0020C088
    if (ctx->r2 == 0) {
        // 0x0020C048: sw          $a2, 0x1C($a3)
        MEM_W(0X1C, ctx->r7) = ctx->r6;
            goto L_0020C088;
    }
    goto skip_4;
    // 0x0020C048: sw          $a2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r6;
    skip_4:
    // 0x0020C04C: sw          $a2, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r6;
    // 0x0020C050: sw          $zero, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = 0;
    // 0x0020C054: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
    // 0x0020C058: sw          $a3, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r7;
    // 0x0020C05C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x0020C060: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x0020C064: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x0020C068: bnel        $v0, $zero, L_0020C070
    if (ctx->r2 != 0) {
        // 0x0020C06C: sw          $a2, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r6;
            goto L_0020C070;
    }
    goto skip_5;
    // 0x0020C06C: sw          $a2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r6;
    skip_5:
L_0020C070:
    // 0x0020C070: sw          $a2, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r6;
    // 0x0020C074: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0020C078: bne         $v0, $a3, L_0020C0C4
    if (ctx->r2 != ctx->r7) {
        // 0x0020C07C: nop
    
            goto L_0020C0C4;
    }
    // 0x0020C07C: nop

    // 0x0020C080: jr          $ra
    // 0x0020C084: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    return;
    // 0x0020C084: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_0020C088:
    // 0x0020C088: sw          $zero, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = 0;
    // 0x0020C08C: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
    // 0x0020C090: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x0020C094: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x0020C098: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x0020C09C: bnel        $v0, $zero, L_0020C0A4
    if (ctx->r2 != 0) {
        // 0x0020C0A0: sw          $a2, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r6;
            goto L_0020C0A4;
    }
    goto skip_6;
    // 0x0020C0A0: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    skip_6:
L_0020C0A4:
    // 0x0020C0A4: sw          $a3, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r7;
    // 0x0020C0A8: jr          $ra
    // 0x0020C0AC: sw          $a2, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r6;
    return;
    // 0x0020C0AC: sw          $a2, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r6;
L_0020C0B0:
    // 0x0020C0B0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x0020C0B4: sw          $zero, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = 0;
    // 0x0020C0B8: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
    // 0x0020C0BC: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x0020C0C0: sw          $zero, 0x10($a2)
    MEM_W(0X10, ctx->r6) = 0;
L_0020C0C4:
    // 0x0020C0C4: jr          $ra
    // 0x0020C0C8: nop

    return;
    // 0x0020C0C8: nop

;}
RECOMP_FUNC void entry_00214F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214F68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00214F6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00214F70: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x00214F74: lw          $s2, 0x6D18($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X6D18);
    // 0x00214F78: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00214F7C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00214F80: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00214F84: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00214F88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00214F8C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00214F90: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00214F94: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00214F98: andi        $v0, $s2, 0x1
    ctx->r2 = ctx->r18 & 0X1;
        turok2_patch_wave_every_update(rdram, ctx);

    // 0x00214F9C: bne         $v0, $zero, L_00215094
    if (ctx->r2 != 0) {
        // 0x00214FA0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00215094;
    }
    // 0x00214FA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00214FA4: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x00214FA8: blez        $s3, L_00215094
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00214FAC: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00215094;
    }
    // 0x00214FAC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00214FB0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_00214FB4:
    // 0x00214FB4: jal         0x002017D4
    // 0x00214FB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00214FB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00214FBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00214FC0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00214FC4: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x00214FC8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00214FCC: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x00214FD0: beql        $a3, $t0, L_00215088
    if (ctx->r7 == ctx->r8) {
        // 0x00214FD4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00215088;
    }
    goto skip_0;
    // 0x00214FD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00214FD8: addiu       $a1, $v1, 0x16
    ctx->r5 = ADD32(ctx->r3, 0X16);
L_00214FDC:
    // 0x00214FDC: lhu         $v1, -0x8($a1)
    ctx->r3 = MEM_HU(ctx->r5, -0X8);
    // 0x00214FE0: andi        $v0, $v1, 0x70
    ctx->r2 = ctx->r3 & 0X70;
    // 0x00214FE4: beq         $v0, $zero, L_00215074
    if (ctx->r2 == 0) {
        // 0x00214FE8: srl         $v0, $v0, 2
        ctx->r2 = S32(U32(ctx->r2) >> 2);
            goto L_00215074;
    }
    // 0x00214FE8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x00214FEC: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
        turok2_patch_scale_wave_index(rdram, ctx);

    // 0x00214FF0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x00214FF4: andi        $v1, $v1, 0xC
    ctx->r3 = ctx->r3 & 0XC;
    // 0x00214FF8: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x00214FFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00215000: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00215004: lb          $a0, -0x350C($at)
    ctx->r4 = MEM_B(ctx->r1, -0X350C);
    // 0x00215008: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0021500C: addu        $a2, $s5, $v0
    ctx->r6 = ADD32(ctx->r21, ctx->r2);
    // 0x00215010: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x00215014: srav        $a0, $a0, $v1
    ctx->r4 = S32(SIGNED(ctx->r4) >> (ctx->r3 & 31));
    // 0x00215018: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0021501C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00215020: beql        $v0, $zero, L_00215028
    if (ctx->r2 == 0) {
        // 0x00215024: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00215028;
    }
    goto skip_1;
    // 0x00215024: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_1:
L_00215028:
    // 0x00215028: bltzl       $v1, L_00215030
    if (SIGNED(ctx->r3) < 0) {
        // 0x0021502C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00215030;
    }
    goto skip_2;
    // 0x0021502C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_2:
L_00215030:
    // 0x00215030: sb          $v1, -0x2($a1)
    MEM_B(-0X2, ctx->r5) = ctx->r3;
    // 0x00215034: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x00215038: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0021503C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00215040: beql        $v0, $zero, L_00215048
    if (ctx->r2 == 0) {
        // 0x00215044: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00215048;
    }
    goto skip_3;
    // 0x00215044: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_3:
L_00215048:
    // 0x00215048: bltzl       $v1, L_00215050
    if (SIGNED(ctx->r3) < 0) {
        // 0x0021504C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00215050;
    }
    goto skip_4;
    // 0x0021504C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_4:
L_00215050:
    // 0x00215050: sb          $v1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r3;
    // 0x00215054: lbu         $v0, 0x2($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X2);
    // 0x00215058: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x0021505C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00215060: beql        $v0, $zero, L_00215068
    if (ctx->r2 == 0) {
        // 0x00215064: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_00215068;
    }
    goto skip_5;
    // 0x00215064: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_5:
L_00215068:
    // 0x00215068: bltzl       $v1, L_00215070
    if (SIGNED(ctx->r3) < 0) {
        // 0x0021506C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00215070;
    }
    goto skip_6;
    // 0x0021506C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_6:
L_00215070:
    // 0x00215070: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_00215074:
    // 0x00215074: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x00215078: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x0021507C: bne         $a3, $t0, L_00214FDC
    if (ctx->r7 != ctx->r8) {
        // 0x00215080: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00214FDC;
    }
    // 0x00215080: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00215084: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00215088:
    // 0x00215088: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0021508C: bne         $v0, $zero, L_00214FB4
    if (ctx->r2 != 0) {
        // 0x00215090: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00214FB4;
    }
    // 0x00215090: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_00215094:
    // 0x00215094: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00215098: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0021509C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002150A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002150A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002150A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002150AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002150B0: jr          $ra
    // 0x002150B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002150B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_002150C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002150C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002150C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002150C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002150CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002150D0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002150D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002150D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x002150DC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002150E0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002150E4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x002150E8: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x002150EC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002150F0: sw          $v0, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->r2;
    // 0x002150F4: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x002150F8: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x002150FC: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00215100: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00215104: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x00215108: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x0021510C: lb          $v0, 0x1E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1E);
    // 0x00215110: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215114: lwc1        $f0, 0x5840($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5840);
    // 0x00215118: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021511C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00215120: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00215124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00215128: lwc1        $f0, 0x5844($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5844);
    // 0x0021512C: sw          $zero, 0x168($s0)
    MEM_W(0X168, ctx->r16) = 0;
    // 0x00215130: swc1        $f0, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->f0.u32l;
    // 0x00215134: swc1        $f1, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00215138: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0021513C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00215140: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00215144: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x00215148: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0021514C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00215150: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00215154: swc1        $f0, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f0.u32l;
    // 0x00215158: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0021515C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00215160: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00215164: swc1        $f0, 0x154($s0)
    MEM_W(0X154, ctx->r16) = ctx->f0.u32l;
    // 0x00215168: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0021516C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00215170: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00215174: swc1        $f0, 0x158($s0)
    MEM_W(0X158, ctx->r16) = ctx->f0.u32l;
    // 0x00215178: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0021517C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00215180: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00215184: swc1        $f0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->f0.u32l;
    // 0x00215188: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0021518C: lwc1        $f1, 0x10($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X10);
    // 0x00215190: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00215194: sw          $a2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r6;
    // 0x00215198: swc1        $f0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->f0.u32l;
    // 0x0021519C: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x002151A0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002151A4: bne         $v1, $v0, L_002151BC
    if (ctx->r3 != ctx->r2) {
        // 0x002151A8: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_002151BC;
    }
    // 0x002151A8: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x002151AC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002151B0: addiu       $v0, $v0, 0x1360
    ctx->r2 = ADD32(ctx->r2, 0X1360);
    // 0x002151B4: j           L_002151D4
    // 0x002151B8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_002151D4;
    // 0x002151B8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_002151BC:
    // 0x002151BC: lhu         $a1, 0x1C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X1C);
    // 0x002151C0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002151C4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002151C8: jal         0x00225E88
    // 0x002151CC: nop

    func_00225E88(rdram, ctx);
        goto after_0;
    // 0x002151CC: nop

    after_0:
    // 0x002151D0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_002151D4:
    // 0x002151D4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x002151D8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002151DC: bne         $v1, $v0, L_002151EC
    if (ctx->r3 != ctx->r2) {
        // 0x002151E0: nop
    
            goto L_002151EC;
    }
    // 0x002151E0: nop

    // 0x002151E4: j           L_002151FC
    // 0x002151E8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
        goto L_002151FC;
    // 0x002151E8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
L_002151EC:
    // 0x002151EC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x002151F0: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x002151F4: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x002151F8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_002151FC:
    // 0x002151FC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x00215200: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00215204: sw          $zero, 0x170($s0)
    MEM_W(0X170, ctx->r16) = 0;
    // 0x00215208: sw          $zero, 0x174($s0)
    MEM_W(0X174, ctx->r16) = 0;
    // 0x0021520C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x00215210: sh          $v0, 0x16C($s0)
    MEM_H(0X16C, ctx->r16) = ctx->r2;
    // 0x00215214: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x00215218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021521C: sh          $v0, 0x16E($s0)
    MEM_H(0X16E, ctx->r16) = ctx->r2;
    // 0x00215220: jal         0x002671B4
    // 0x00215224: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x00215224: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x00215228: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021522C: lwc1        $f1, 0x5848($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5848);
    // 0x00215230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00215234: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00215238: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021523C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00215240: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x00215244: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00215248: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0021524C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00215250: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00215254: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x00215258: addiu       $t3, $t3, -0x4F30
    ctx->r11 = ADD32(ctx->r11, -0X4F30);
    // 0x0021525C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00215260: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00215264: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00215268: sw          $t0, 0x178($s0)
    MEM_W(0X178, ctx->r16) = ctx->r8;
    // 0x0021526C: sw          $t1, 0x17C($s0)
    MEM_W(0X17C, ctx->r16) = ctx->r9;
    // 0x00215270: sw          $t2, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->r10;
    // 0x00215274: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x00215278: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x0021527C: lw          $t2, 0x14($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X14);
    // 0x00215280: sw          $t0, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r8;
    // 0x00215284: sw          $t1, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r9;
    // 0x00215288: sw          $t2, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r10;
    // 0x0021528C: sb          $v0, 0x195($s0)
    MEM_B(0X195, ctx->r16) = ctx->r2;
    // 0x00215290: sb          $v0, 0x194($s0)
    MEM_B(0X194, ctx->r16) = ctx->r2;
    // 0x00215294: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00215298: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0021529C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002152A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002152A4: jr          $ra
    // 0x002152A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002152A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00219A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219A20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00219A24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00219A28: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00219A2C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00219A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00219A34: jal         0x0021793C
    // 0x00219A38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0021793C(rdram, ctx);
        goto after_0;
    // 0x00219A38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00219A3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00219A40: jal         0x002017D4
    // 0x00219A44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00219A44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00219A48: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x00219A4C: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x00219A50: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00219A54: trunc.w.s   $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x00219A58: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00219A5C: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x00219A60: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00219A64: bnel        $v0, $zero, L_00219A6C
    if (ctx->r2 != 0) {
        // 0x00219A68: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00219A6C;
    }
    goto skip_0;
    // 0x00219A68: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_00219A6C:
    // 0x00219A6C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00219A70: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00219A74: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00219A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219A7C: lwc1        $f1, 0x5AB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5AB8);
    // 0x00219A80: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00219A84: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00219A88: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00219A8C: mul.s       $f14, $f14, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f1.fl);
    // 0x00219A90: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00219A94: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x00219A98: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00219A9C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219AA0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00219AA4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x00219AA8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00219AAC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00219AB0: jal         0x00210DB4
    // 0x00219AB4: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    func_00210DB4(rdram, ctx);
        goto after_2;
    // 0x00219AB4: sub.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f12.fl;
    after_2:
    // 0x00219AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00219ABC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00219AC0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00219AC4: jr          $ra
    // 0x00219AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00219AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00219ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219ACC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00219AD0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00219AD4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00219AD8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00219ADC: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x00219AE0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00219AE4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00219AE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00219AEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00219AF0: bne         $s2, $v0, L_00219B00
    if (ctx->r18 != ctx->r2) {
        // 0x00219AF4: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_00219B00;
    }
    // 0x00219AF4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00219AF8: j           L_00219BA0
    // 0x00219AFC: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
        goto L_00219BA0;
    // 0x00219AFC: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
L_00219B00:
    // 0x00219B00: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00219B04: jal         0x0020185C
    // 0x00219B08: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00219B08: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00219B0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00219B10: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00219B14: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x00219B18: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00219B1C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00219B20: addiu       $v0, $v0, 0x6A9C
    ctx->r2 = ADD32(ctx->r2, 0X6A9C);
    // 0x00219B24: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00219B28: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00219B2C: addiu       $v0, $v0, 0x5A10
    ctx->r2 = ADD32(ctx->r2, 0X5A10);
    // 0x00219B30: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00219B34: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00219B38: jal         0x0020367C
    // 0x00219B3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x00219B3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x00219B40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00219B44: jal         0x00219968
    // 0x00219B48: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    func_00219968(rdram, ctx);
        goto after_2;
    // 0x00219B48: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    after_2:
    // 0x00219B4C: beq         $v0, $zero, L_00219BA4
    if (ctx->r2 == 0) {
        // 0x00219B50: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00219BA4;
    }
    // 0x00219B50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00219B54: jal         0x0021793C
    // 0x00219B58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021793C(rdram, ctx);
        goto after_3;
    // 0x00219B58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00219B5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00219B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00219B64: jal         0x002017D4
    // 0x00219B68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00219B68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x00219B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00219B70: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x00219B74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00219B78: sh          $s2, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r18;
    // 0x00219B7C: jal         0x002017D4
    // 0x00219B80: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00219B80: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    after_5:
    // 0x00219B84: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00219B88: jal         0x002017D4
    // 0x00219B8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00219B8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00219B90: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x00219B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00219B98: j           L_00219BA4
    // 0x00219B9C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
        goto L_00219BA4;
    // 0x00219B9C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_00219BA0:
    // 0x00219BA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00219BA4:
    // 0x00219BA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00219BA8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00219BAC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00219BB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00219BB4: jr          $ra
    // 0x00219BB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00219BB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00226F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226F90: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x00226F94: sw          $s4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r20;
    // 0x00226F98: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00226F9C: sw          $s6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r22;
    // 0x00226FA0: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x00226FA4: sw          $s7, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r23;
    // 0x00226FA8: lw          $s7, 0x140($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X140);
    // 0x00226FAC: sltiu       $v0, $a1, 0x2
    ctx->r2 = ctx->r5 < 0X2 ? 1 : 0;
    // 0x00226FB0: sw          $ra, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r31;
    // 0x00226FB4: sw          $s5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r21;
    // 0x00226FB8: sw          $s3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r19;
    // 0x00226FBC: sw          $s2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r18;
    // 0x00226FC0: sw          $s1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r17;
    // 0x00226FC4: bne         $v0, $zero, L_00227158
    if (ctx->r2 != 0) {
        // 0x00226FC8: sw          $s0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r16;
            goto L_00227158;
    }
    // 0x00226FC8: sw          $s0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r16;
    // 0x00226FCC: beq         $s4, $zero, L_00227158
    if (ctx->r20 == 0) {
        // 0x00226FD0: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_00227158;
    }
    // 0x00226FD0: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x00226FD4: mult        $s4, $v0
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00226FD8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x00226FDC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00226FE0: mflo        $t0
    ctx->r8 = lo;
    // 0x00226FE4: addu        $s3, $s2, $t0
    ctx->r19 = ADD32(ctx->r18, ctx->r8);
L_00226FE8:
    // 0x00226FE8: subu        $v0, $s3, $s2
    ctx->r2 = SUB32(ctx->r19, ctx->r18);
L_00226FEC:
    // 0x00226FEC: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x00226FF0: bne         $s4, $zero, L_00226FFC
    if (ctx->r20 != 0) {
        // 0x00226FF4: nop
    
            goto L_00226FFC;
    }
    // 0x00226FF4: nop

    // 0x00226FF8: break       7
    do_break(2256888);
L_00226FFC:
    // 0x00226FFC: mflo        $v0
    ctx->r2 = lo;
    // 0x00227000: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00227004: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x00227008: beq         $v0, $zero, L_0022702C
    if (ctx->r2 == 0) {
        // 0x0022700C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0022702C;
    }
    // 0x0022700C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00227010: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x00227014: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00227018: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0022701C: jal         0x00227184
    // 0x00227020: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    func_00227184(rdram, ctx);
        goto after_0;
    // 0x00227020: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    after_0:
    // 0x00227024: j           L_00227138
    // 0x00227028: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
        goto L_00227138;
    // 0x00227028: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_0022702C:
    // 0x0022702C: srl         $v0, $v1, 1
    ctx->r2 = S32(U32(ctx->r3) >> 1);
    // 0x00227030: mult        $v0, $s4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00227034: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00227038: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    // 0x0022703C: mflo        $t0
    ctx->r8 = lo;
    // 0x00227040: jalr        $s7
    // 0x00227044: addu        $a0, $s2, $t0
    ctx->r4 = ADD32(ctx->r18, ctx->r8);
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_1;
    // 0x00227044: addu        $a0, $s2, $t0
    ctx->r4 = ADD32(ctx->r18, ctx->r8);
    after_1:
    // 0x00227048: addu        $s0, $s3, $s4
    ctx->r16 = ADD32(ctx->r19, ctx->r20);
    // 0x0022704C: addu        $s1, $s1, $s4
    ctx->r17 = ADD32(ctx->r17, ctx->r20);
L_00227050:
    // 0x00227050: sltu        $v0, $s3, $s1
    ctx->r2 = ctx->r19 < ctx->r17 ? 1 : 0;
    // 0x00227054: bne         $v0, $zero, L_0022706C
    if (ctx->r2 != 0) {
        // 0x00227058: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0022706C;
    }
    // 0x00227058: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022705C: jalr        $s6
    // 0x00227060: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_2;
    // 0x00227060: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00227064: blezl       $v0, L_00227050
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00227068: addu        $s1, $s1, $s4
        ctx->r17 = ADD32(ctx->r17, ctx->r20);
            goto L_00227050;
    }
    goto skip_0;
    // 0x00227068: addu        $s1, $s1, $s4
    ctx->r17 = ADD32(ctx->r17, ctx->r20);
    skip_0:
L_0022706C:
    // 0x0022706C: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
L_00227070:
    // 0x00227070: sltu        $v0, $s2, $s0
    ctx->r2 = ctx->r18 < ctx->r16 ? 1 : 0;
    // 0x00227074: beq         $v0, $zero, L_0022708C
    if (ctx->r2 == 0) {
        // 0x00227078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0022708C;
    }
    // 0x00227078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022707C: jalr        $s6
    // 0x00227080: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_3;
    // 0x00227080: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00227084: bgezl       $v0, L_00227070
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00227088: subu        $s0, $s0, $s4
        ctx->r16 = SUB32(ctx->r16, ctx->r20);
            goto L_00227070;
    }
    goto skip_1;
    // 0x00227088: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    skip_1:
L_0022708C:
    // 0x0022708C: sltu        $v0, $s0, $s1
    ctx->r2 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x00227090: bne         $v0, $zero, L_002270A8
    if (ctx->r2 != 0) {
        // 0x00227094: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002270A8;
    }
    // 0x00227094: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00227098: jalr        $s7
    // 0x0022709C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_4;
    // 0x0022709C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x002270A0: j           L_00227050
    // 0x002270A4: addu        $s1, $s1, $s4
    ctx->r17 = ADD32(ctx->r17, ctx->r20);
        goto L_00227050;
    // 0x002270A4: addu        $s1, $s1, $s4
    ctx->r17 = ADD32(ctx->r17, ctx->r20);
L_002270A8:
    // 0x002270A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002270AC: jalr        $s7
    // 0x002270B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_5;
    // 0x002270B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x002270B4: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x002270B8: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x002270BC: subu        $v1, $s3, $s1
    ctx->r3 = SUB32(ctx->r19, ctx->r17);
    // 0x002270C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x002270C4: bne         $v0, $zero, L_00227108
    if (ctx->r2 != 0) {
        // 0x002270C8: sltu        $v0, $s1, $s3
        ctx->r2 = ctx->r17 < ctx->r19 ? 1 : 0;
            goto L_00227108;
    }
    // 0x002270C8: sltu        $v0, $s1, $s3
    ctx->r2 = ctx->r17 < ctx->r19 ? 1 : 0;
    // 0x002270CC: addu        $v0, $s2, $s4
    ctx->r2 = ADD32(ctx->r18, ctx->r20);
    // 0x002270D0: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x002270D4: beq         $v0, $zero, L_002270F4
    if (ctx->r2 == 0) {
        // 0x002270D8: sll         $v1, $s5, 2
        ctx->r3 = S32(ctx->r21 << 2);
            goto L_002270F4;
    }
    // 0x002270D8: sll         $v1, $s5, 2
    ctx->r3 = S32(ctx->r21 << 2);
    // 0x002270DC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x002270E0: addu        $v0, $sp, $v1
    ctx->r2 = ADD32(ctx->r29, ctx->r3);
    // 0x002270E4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002270E8: sw          $s2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r18;
    // 0x002270EC: subu        $v0, $s0, $s4
    ctx->r2 = SUB32(ctx->r16, ctx->r20);
    // 0x002270F0: sw          $v0, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r2;
L_002270F4:
    // 0x002270F4: sltu        $v0, $s1, $s3
    ctx->r2 = ctx->r17 < ctx->r19 ? 1 : 0;
    // 0x002270F8: beq         $v0, $zero, L_00227134
    if (ctx->r2 == 0) {
        // 0x002270FC: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_00227134;
    }
    // 0x002270FC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x00227100: j           L_00226FEC
    // 0x00227104: subu        $v0, $s3, $s2
    ctx->r2 = SUB32(ctx->r19, ctx->r18);
        goto L_00226FEC;
    // 0x00227104: subu        $v0, $s3, $s2
    ctx->r2 = SUB32(ctx->r19, ctx->r18);
L_00227108:
    // 0x00227108: beq         $v0, $zero, L_00227124
    if (ctx->r2 == 0) {
        // 0x0022710C: sll         $v0, $s5, 2
        ctx->r2 = S32(ctx->r21 << 2);
            goto L_00227124;
    }
    // 0x0022710C: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x00227110: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x00227114: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x00227118: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0022711C: sw          $s1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r17;
    // 0x00227120: sw          $s3, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r19;
L_00227124:
    // 0x00227124: addu        $v0, $s2, $s4
    ctx->r2 = ADD32(ctx->r18, ctx->r20);
    // 0x00227128: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x0022712C: bne         $v0, $zero, L_00226FE8
    if (ctx->r2 != 0) {
        // 0x00227130: subu        $s3, $s0, $s4
        ctx->r19 = SUB32(ctx->r16, ctx->r20);
            goto L_00226FE8;
    }
    // 0x00227130: subu        $s3, $s0, $s4
    ctx->r19 = SUB32(ctx->r16, ctx->r20);
L_00227134:
    // 0x00227134: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_00227138:
    // 0x00227138: bltz        $s5, L_00227158
    if (SIGNED(ctx->r21) < 0) {
        // 0x0022713C: sll         $v0, $s5, 2
        ctx->r2 = S32(ctx->r21 << 2);
            goto L_00227158;
    }
    // 0x0022713C: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x00227140: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x00227144: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00227148: lw          $s2, 0x18($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X18);
    // 0x0022714C: lw          $s3, 0x90($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X90);
    // 0x00227150: j           L_00226FEC
    // 0x00227154: subu        $v0, $s3, $s2
    ctx->r2 = SUB32(ctx->r19, ctx->r18);
        goto L_00226FEC;
    // 0x00227154: subu        $v0, $s3, $s2
    ctx->r2 = SUB32(ctx->r19, ctx->r18);
L_00227158:
    // 0x00227158: lw          $ra, 0x128($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X128);
    // 0x0022715C: lw          $s7, 0x124($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X124);
    // 0x00227160: lw          $s6, 0x120($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X120);
    // 0x00227164: lw          $s5, 0x11C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X11C);
    // 0x00227168: lw          $s4, 0x118($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X118);
    // 0x0022716C: lw          $s3, 0x114($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X114);
    // 0x00227170: lw          $s2, 0x110($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X110);
    // 0x00227174: lw          $s1, 0x10C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X10C);
    // 0x00227178: lw          $s0, 0x108($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X108);
    // 0x0022717C: jr          $ra
    // 0x00227180: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x00227180: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void entry_00228910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228910: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00228914: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00228918: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0022891C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00228920: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00228924: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00228928: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0022892C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x00228930: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x00228934: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x00228938: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x0022893C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00228940: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00228944: beq         $s0, $zero, L_00228A90
    if (ctx->r16 == 0) {
        // 0x00228948: nop
    
            goto L_00228A90;
    }
    // 0x00228948: nop

    // 0x0022894C: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
L_00228950:
    // 0x00228950: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x00228954: beq         $v0, $zero, L_00228A84
    if (ctx->r2 == 0) {
        // 0x00228958: nop
    
            goto L_00228A84;
    }
    // 0x00228958: nop

    // 0x0022895C: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x00228960: lwc1        $f1, 0x44($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x00228964: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228968: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022896C: sub.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00228970: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00228974: c.lt.s      $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f2.fl < ctx->f21.fl;
    // 0x00228978: nop

    // 0x0022897C: bc1tl       L_00228984
    if (c1cs) {
        // 0x00228980: neg.s       $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
            goto L_00228984;
    }
    goto skip_0;
    // 0x00228980: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    skip_0:
L_00228984:
    // 0x00228984: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x00228988: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x0022898C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228990: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228994: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00228998: c.lt.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl < ctx->f21.fl;
    // 0x0022899C: nop

    // 0x002289A0: bc1fl       L_002289AC
    if (!c1cs) {
        // 0x002289A4: add.s       $f2, $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
            goto L_002289AC;
    }
    goto skip_1;
    // 0x002289A4: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    skip_1:
    // 0x002289A8: sub.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f1.fl;
L_002289AC:
    // 0x002289AC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x002289B0: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x002289B4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002289B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002289BC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002289C0: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x002289C4: nop

    // 0x002289C8: bc1fl       L_002289D4
    if (!c1cs) {
        // 0x002289CC: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_002289D4;
    }
    goto skip_2;
    // 0x002289CC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    skip_2:
    // 0x002289D0: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_002289D4:
    // 0x002289D4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x002289D8: mtc1        $v0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r2;
    // 0x002289DC: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x002289E0: c.lt.s      $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f2.fl < ctx->f3.fl;
    // 0x002289E4: nop

    // 0x002289E8: bc1f        L_00228A84
    if (!c1cs) {
        // 0x002289EC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00228A84;
    }
    // 0x002289EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002289F0: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x002289F4: lwc1        $f1, 0x44($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x002289F8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002289FC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228A00: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00228A04: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00228A08: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x00228A0C: lwc1        $f1, 0x48($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x00228A10: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228A14: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228A18: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00228A1C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00228A20: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x00228A24: lwc1        $f1, 0x4C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x00228A28: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00228A2C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00228A30: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00228A34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228A38: lwc1        $f20, 0x60B0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X60B0);
    // 0x00228A3C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00228A40: div.s       $f0, $f2, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f3.fl);
    // 0x00228A44: jal         0x0020F040
    // 0x00228A48: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    func_0020F040(rdram, ctx);
        goto after_0;
    // 0x00228A48: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    after_0:
    // 0x00228A4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00228A50: lwc1        $f0, 0x60B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X60B4);
    // 0x00228A54: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00228A58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00228A5C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00228A60: jal         0x0020EF60
    // 0x00228A64: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x00228A64: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_1:
    // 0x00228A68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00228A6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00228A70: jal         0x0020EEF8
    // 0x00228A74: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x00228A74: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00228A78: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00228A7C: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00228A80: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_00228A84:
    // 0x00228A84: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x00228A88: bne         $s0, $zero, L_00228950
    if (ctx->r16 != 0) {
        // 0x00228A8C: nop
    
            goto L_00228950;
    }
    // 0x00228A8C: nop

L_00228A90:
    // 0x00228A90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00228A94: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00228A98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00228A9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00228AA0: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00228AA4: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00228AA8: jr          $ra
    // 0x00228AAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00228AAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00229340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00229340: addiu       $sp, $sp, -0x210
    ctx->r29 = ADD32(ctx->r29, -0X210);
    // 0x00229344: sw          $s1, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r17;
    // 0x00229348: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0022934C: sw          $s2, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->r18;
    // 0x00229350: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00229354: sw          $ra, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->r31;
    // 0x00229358: sw          $s4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r20;
    // 0x0022935C: sw          $s3, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->r19;
    // 0x00229360: sw          $s0, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r16;
    // 0x00229364: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x00229368: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0022936C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00229370: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00229374: beq         $v0, $zero, L_002293A4
    if (ctx->r2 == 0) {
        // 0x00229378: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_002293A4;
    }
    // 0x00229378: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0022937C: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00229380: addiu       $t3, $t3, 0x1DB8
    ctx->r11 = ADD32(ctx->r11, 0X1DB8);
    // 0x00229384: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00229388: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0022938C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00229390: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x00229394: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00229398: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x0022939C: j           L_002293C0
    // 0x002293A0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_002293C0;
    // 0x002293A0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_002293A4:
    // 0x002293A4: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x002293A8: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x002293AC: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x002293B0: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x002293B4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x002293B8: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x002293BC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_002293C0:
    // 0x002293C0: jal         0x0020E810
    // 0x002293C4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_0020E810(rdram, ctx);
        goto after_0;
    // 0x002293C4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x002293C8: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x002293CC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002293D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002293D4: bne         $v0, $zero, L_002293E0
    if (ctx->r2 != 0) {
        // 0x002293D8: nop
    
            goto L_002293E0;
    }
    // 0x002293D8: nop

    // 0x002293DC: lwc1        $f0, 0x15C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X15C);
L_002293E0:
    // 0x002293E0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x002293E4: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x002293E8: nop

    // 0x002293EC: bc1f        L_00229438
    if (!c1cs) {
        // 0x002293F0: nop
    
            goto L_00229438;
    }
    // 0x002293F0: nop

    // 0x002293F4: bne         $v0, $zero, L_00229400
    if (ctx->r2 != 0) {
        // 0x002293F8: nop
    
            goto L_00229400;
    }
    // 0x002293F8: nop

    // 0x002293FC: lwc1        $f1, 0x160($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X160);
L_00229400:
    // 0x00229400: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229404: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00229408: nop

    // 0x0022940C: bc1f        L_00229438
    if (!c1cs) {
        // 0x00229410: nop
    
            goto L_00229438;
    }
    // 0x00229410: nop

    // 0x00229414: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00229418: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x0022941C: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00229420: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x00229424: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00229428: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0022942C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00229430: j           L_00229560
    // 0x00229434: sw          $v0, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->r2;
        goto L_00229560;
    // 0x00229434: sw          $v0, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->r2;
L_00229438:
    // 0x00229438: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022943C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00229440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229444: bnel        $v0, $zero, L_00229454
    if (ctx->r2 != 0) {
        // 0x00229448: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_00229454;
    }
    goto skip_0;
    // 0x00229448: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_0:
    // 0x0022944C: lwc1        $f0, 0x15C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X15C);
    // 0x00229450: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_00229454:
    // 0x00229454: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x00229458: lw          $v0, 0xF8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF8);
    // 0x0022945C: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00229460: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00229464: bne         $v0, $zero, L_00229470
    if (ctx->r2 != 0) {
        // 0x00229468: addiu       $s0, $sp, 0xC0
        ctx->r16 = ADD32(ctx->r29, 0XC0);
            goto L_00229470;
    }
    // 0x00229468: addiu       $s0, $sp, 0xC0
    ctx->r16 = ADD32(ctx->r29, 0XC0);
    // 0x0022946C: lwc1        $f0, 0x160($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X160);
L_00229470:
    // 0x00229470: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00229474: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x00229478: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x0022947C: lw          $a1, 0x164($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X164);
    // 0x00229480: jal         0x00210630
    // 0x00229484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210630(rdram, ctx);
        goto after_1;
    // 0x00229484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00229488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022948C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x00229490: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00229494: jal         0x0020F85C
    // 0x00229498: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_2;
    // 0x00229498: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0022949C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002294A0: jal         0x0022CF40
    // 0x002294A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0022CF40(rdram, ctx);
        goto after_3;
    // 0x002294A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002294A8: beq         $v0, $zero, L_002294C4
    if (ctx->r2 == 0) {
        // 0x002294AC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_002294C4;
    }
    // 0x002294AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002294B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002294B4: jal         0x0020F85C
    // 0x002294B8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x002294B8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    after_4:
    // 0x002294BC: j           L_002294E0
    // 0x002294C0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
        goto L_002294E0;
    // 0x002294C0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
L_002294C4:
    // 0x002294C4: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x002294C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x002294CC: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x002294D0: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x002294D4: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x002294D8: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x002294DC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
L_002294E0:
    // 0x002294E0: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x002294E4: jal         0x0020EEF8
    // 0x002294E8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_0020EEF8(rdram, ctx);
        goto after_5;
    // 0x002294E8: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_5:
    // 0x002294EC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x002294F0: addiu       $v0, $sp, 0x100
    ctx->r2 = ADD32(ctx->r29, 0X100);
    // 0x002294F4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002294F8: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x002294FC: beq         $v1, $zero, L_00229534
    if (ctx->r3 == 0) {
        // 0x00229500: addiu       $v0, $sp, 0xA0
        ctx->r2 = ADD32(ctx->r29, 0XA0);
            goto L_00229534;
    }
    // 0x00229500: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x00229504: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00229508: addiu       $v0, $sp, 0x1F0
    ctx->r2 = ADD32(ctx->r29, 0X1F0);
    // 0x0022950C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00229510: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00229514: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00229518: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x0022951C: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x00229520: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x00229524: jal         0x002688C8
    // 0x00229528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002688C8(rdram, ctx);
        goto after_6;
    // 0x00229528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0022952C: j           L_00229550
    // 0x00229530: nop

        goto L_00229550;
    // 0x00229530: nop

L_00229534:
    // 0x00229534: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x00229538: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x0022953C: lw          $t2, 0xB8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB8);
    // 0x00229540: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x00229544: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00229548: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x0022954C: sw          $zero, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = 0;
L_00229550:
    // 0x00229550: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00229554: addiu       $v0, $v0, 0x1CE0
    ctx->r2 = ADD32(ctx->r2, 0X1CE0);
    // 0x00229558: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0022955C: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
L_00229560:
    // 0x00229560: lw          $v0, 0x114($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X114);
    // 0x00229564: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x00229568: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x0022956C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00229570: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00229574: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x00229578: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x0022957C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00229580: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00229584: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00229588: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0022958C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x00229590: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00229594: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x00229598: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0022959C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x002295A0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x002295A4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x002295A8: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x002295AC: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x002295B0: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x002295B4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x002295B8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x002295BC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x002295C0: lw          $v0, 0x1F0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1F0);
    // 0x002295C4: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x002295C8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x002295CC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x002295D0: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x002295D4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x002295D8: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x002295DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002295E0: or          $v0, $s4, $v0
    ctx->r2 = ctx->r20 | ctx->r2;
    // 0x002295E4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x002295E8: lw          $a2, 0x10C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10C);
    // 0x002295EC: lw          $a3, 0x110($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X110);
    // 0x002295F0: jal         0x0022F350
    // 0x002295F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022F350(rdram, ctx);
        goto after_7;
    // 0x002295F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x002295F8: lw          $ra, 0x20C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20C);
    // 0x002295FC: lw          $s4, 0x208($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X208);
    // 0x00229600: lw          $s3, 0x204($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X204);
    // 0x00229604: lw          $s2, 0x200($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X200);
    // 0x00229608: lw          $s1, 0x1FC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1FC);
    // 0x0022960C: lw          $s0, 0x1F8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1F8);
    // 0x00229610: jr          $ra
    // 0x00229614: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
    return;
    // 0x00229614: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
;}
RECOMP_FUNC void entry_0023587C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_002356B4:
    // 0x0023587C: bne         $s1, $zero, L_002356B4
    if (ctx->r17 != 0) {
        // 0x00235880: nop
    
            goto L_002356B4;
    }
    // 0x00235880: nop

    // 0x00235884: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00235888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0023588C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00235890: jr          $ra
    // 0x00235894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00235894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00240800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00240800: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00240804: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x00240808: addiu       $v0, $v0, -0x76B4
    ctx->r2 = ADD32(ctx->r2, -0X76B4);
    // 0x0024080C: addiu       $t0, $sp, 0x50
    ctx->r8 = ADD32(ctx->r29, 0X50);
    // 0x00240810: sltu        $v0, $t0, $v0
    ctx->r2 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x00240814: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x00240818: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0024081C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00240820: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00240824: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00240828: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0024082C: bne         $v0, $zero, L_00240E70
    if (ctx->r2 != 0) {
        // 0x00240830: sw          $a0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r4;
            goto L_00240E70;
    }
    // 0x00240830: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x00240834: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00240838: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x0024083C: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x00240840: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x00240844: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x00240848: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0024084C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00240850: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x00240854: sb          $zero, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = 0;
    // 0x00240858: sb          $zero, 0x29($sp)
    MEM_B(0X29, ctx->r29) = 0;
    // 0x0024085C: sb          $zero, 0x28($sp)
    MEM_B(0X28, ctx->r29) = 0;
    // 0x00240860: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_00240864:
    // 0x00240864: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00240868: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0024086C: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240870: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00240874: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x00240878: beq         $a2, $zero, L_002408EC
    if (ctx->r6 == 0) {
        // 0x0024087C: sw          $a2, 0x6C($a0)
        MEM_W(0X6C, ctx->r4) = ctx->r6;
            goto L_002408EC;
    }
    // 0x0024087C: sw          $a2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r6;
    // 0x00240880: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x00240884: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00240888: bnel        $v0, $zero, L_00240E64
    if (ctx->r2 != 0) {
        // 0x0024088C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_0;
    // 0x0024088C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00240890: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00240894: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x00240898: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0024089C: beql        $v0, $zero, L_002408D0
    if (ctx->r2 == 0) {
        // 0x002408A0: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_002408D0;
    }
    goto skip_1;
    // 0x002408A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x002408A4: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x002408A8: beq         $v0, $v1, L_002408F0
    if (ctx->r2 == ctx->r3) {
        // 0x002408AC: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_002408F0;
    }
    // 0x002408AC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002408B0: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002408B4: beq         $v0, $v1, L_002408F0
    if (ctx->r2 == ctx->r3) {
        // 0x002408B8: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_002408F0;
    }
    // 0x002408B8: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x002408BC: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x002408C0: bnel        $v0, $v1, L_00240E64
    if (ctx->r2 != ctx->r3) {
        // 0x002408C4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_2;
    // 0x002408C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x002408C8: j           L_002408F0
    // 0x002408CC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
        goto L_002408F0;
    // 0x002408CC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_002408D0:
    // 0x002408D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x002408D4: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x002408D8: jal         0x0023B664
    // 0x002408DC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    func_0023B664(rdram, ctx);
        goto after_0;
    // 0x002408DC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    after_0:
    // 0x002408E0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002408E4: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x002408E8: sw          $v0, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->r2;
L_002408EC:
    // 0x002408EC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_002408F0:
    // 0x002408F0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x002408F4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x002408F8: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x002408FC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00240900: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240904: beq         $s0, $s2, L_00240918
    if (ctx->r16 == ctx->r18) {
        // 0x00240908: sw          $v0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r2;
            goto L_00240918;
    }
    // 0x00240908: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0024090C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x00240910: j           L_0024091C
    // 0x00240914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_0024091C;
    // 0x00240914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_00240918:
    // 0x00240918: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0024091C:
    // 0x0024091C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00240920: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240924: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00240928: lw          $a1, 0x1AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1AB0);
    // 0x0024092C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00240930: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00240934: lwc1        $f1, 0x74($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X74);
    // 0x00240938: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0024093C: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x00240940: nop

    // 0x00240944: bc1f        L_00240964
    if (!c1cs) {
        // 0x00240948: nop
    
            goto L_00240964;
    }
    // 0x00240948: nop

    // 0x0024094C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00240950: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240954: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00240958: nop

    // 0x0024095C: bc1tl       L_00240E64
    if (c1cs) {
        // 0x00240960: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_3;
    // 0x00240960: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
L_00240964:
    // 0x00240964: lwc1        $f1, 0x7C($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X7C);
    // 0x00240968: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x0024096C: nop

    // 0x00240970: bc1f        L_00240990
    if (!c1cs) {
        // 0x00240974: nop
    
            goto L_00240990;
    }
    // 0x00240974: nop

    // 0x00240978: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0024097C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240980: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00240984: nop

    // 0x00240988: bc1tl       L_00240E64
    if (c1cs) {
        // 0x0024098C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_4;
    // 0x0024098C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
L_00240990:
    // 0x00240990: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240994: lwc1        $f1, 0x78($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X78);
    // 0x00240998: c.le.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl <= ctx->f1.fl;
    // 0x0024099C: nop

    // 0x002409A0: bc1f        L_002409C0
    if (!c1cs) {
        // 0x002409A4: nop
    
            goto L_002409C0;
    }
    // 0x002409A4: nop

    // 0x002409A8: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x002409AC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002409B0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002409B4: nop

    // 0x002409B8: bc1tl       L_00240E64
    if (c1cs) {
        // 0x002409BC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_5;
    // 0x002409BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
L_002409C0:
    // 0x002409C0: lwc1        $f1, 0x80($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X80);
    // 0x002409C4: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x002409C8: nop

    // 0x002409CC: bc1f        L_002409EC
    if (!c1cs) {
        // 0x002409D0: nop
    
            goto L_002409EC;
    }
    // 0x002409D0: nop

    // 0x002409D4: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x002409D8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x002409DC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002409E0: nop

    // 0x002409E4: bc1tl       L_00240E64
    if (c1cs) {
        // 0x002409E8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_6;
    // 0x002409E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_6:
L_002409EC:
    // 0x002409EC: lw          $a0, 0x6C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X6C);
    // 0x002409F0: beq         $a0, $zero, L_00240A08
    if (ctx->r4 == 0) {
        // 0x002409F4: nop
    
            goto L_00240A08;
    }
    // 0x002409F4: nop

    // 0x002409F8: jal         0x00240800
    // 0x002409FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    entry_00240800(rdram, ctx);
        goto after_1;
    // 0x002409FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_1:
    // 0x00240A00: j           L_00240E68
    // 0x00240A04: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
        goto L_00240E68;
    // 0x00240A04: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
L_00240A08:
    // 0x00240A08: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00240A0C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240A10: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x00240A14: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00240A18: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x00240A1C: swc1        $f0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f0.u32l;
    // 0x00240A20: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00240A24: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00240A28: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240A2C: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240A30: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00240A34: swc1        $f1, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240A38: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240A3C: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00240A40: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240A44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00240A48: lwc1        $f2, 0x3C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x00240A4C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240A50: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240A54: swc1        $f0, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->f0.u32l;
    // 0x00240A58: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240A5C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240A60: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00240A64: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240A68: lwc1        $f0, 0x44($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X44);
    // 0x00240A6C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00240A70: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00240A74: swc1        $f1, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240A78: c.le.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl <= ctx->f2.fl;
    // 0x00240A7C: nop

    // 0x00240A80: bc1f        L_00240E60
    if (!c1cs) {
        // 0x00240A84: swc1        $f2, 0x5C($a1)
        MEM_W(0X5C, ctx->r5) = ctx->f2.u32l;
            goto L_00240E60;
    }
    // 0x00240A84: swc1        $f2, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f2.u32l;
    // 0x00240A88: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240A8C: lwc1        $f0, 0x60($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X60);
    // 0x00240A90: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00240A94: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x00240A98: lwc1        $f0, 0x58($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X58);
    // 0x00240A9C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x00240AA0: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
    // 0x00240AA4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240AA8: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x00240AAC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00240AB0: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x00240AB4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240AB8: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x00240ABC: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x00240AC0: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00240AC4: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240AC8: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x00240ACC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00240AD0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00240AD4: swc1        $f1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240AD8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x00240ADC: nop

    // 0x00240AE0: bc1f        L_00240E60
    if (!c1cs) {
        // 0x00240AE4: swc1        $f2, 0x60($a1)
        MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
            goto L_00240E60;
    }
    // 0x00240AE4: swc1        $f2, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f2.u32l;
    // 0x00240AE8: addu        $v1, $s3, $s0
    ctx->r3 = ADD32(ctx->r19, ctx->r16);
    // 0x00240AEC: sw          $zero, 0x70($a1)
    MEM_W(0X70, ctx->r5) = 0;
    // 0x00240AF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00240AF4: bne         $v0, $zero, L_00240B54
    if (ctx->r2 != 0) {
        // 0x00240AF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00240B54;
    }
    // 0x00240AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00240AFC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00240B00: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240B04: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240B08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x00240B0C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x00240B10: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x00240B14: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240B18: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240B1C: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00240B20: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00240B24: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00240B28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00240B2C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00240B30: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x00240B34: lw          $a2, 0x54($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X54);
    // 0x00240B38: jal         0x0023B38C
    // 0x00240B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023B38C(rdram, ctx);
        goto after_2;
    // 0x00240B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x00240B40: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240B44: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240B48: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00240B4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00240B50: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
L_00240B54:
    // 0x00240B54: beq         $s0, $s2, L_00240B60
    if (ctx->r16 == ctx->r18) {
        // 0x00240B58: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00240B60;
    }
    // 0x00240B58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00240B5C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_00240B60:
    // 0x00240B60: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00240B64: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00240B68: bne         $v0, $zero, L_00240BDC
    if (ctx->r2 != 0) {
        // 0x00240B6C: nop
    
            goto L_00240BDC;
    }
    // 0x00240B6C: nop

    // 0x00240B70: beq         $s0, $s2, L_00240B7C
    if (ctx->r16 == ctx->r18) {
        // 0x00240B74: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00240B7C;
    }
    // 0x00240B74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00240B78: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_00240B7C:
    // 0x00240B7C: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x00240B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00240B84: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x00240B88: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240B8C: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240B90: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x00240B94: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x00240B98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x00240B9C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240BA0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240BA4: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00240BA8: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x00240BAC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00240BB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00240BB4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00240BB8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x00240BBC: lw          $a2, 0x54($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X54);
    // 0x00240BC0: jal         0x0023B38C
    // 0x00240BC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0023B38C(rdram, ctx);
        goto after_3;
    // 0x00240BC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x00240BC8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240BCC: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240BD0: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00240BD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00240BD8: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
L_00240BDC:
    // 0x00240BDC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00240BE0: lw          $v0, 0x1AB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1AB0);
    // 0x00240BE4: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x00240BE8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00240BEC: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x00240BF0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00240BF4: jal         0x00298470
    // 0x00240BF8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x00240BF8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x00240BFC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00240C00: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240C04: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240C08: c.eq.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl == ctx->f20.fl;
    // 0x00240C0C: nop

    // 0x00240C10: bc1t        L_00240DEC
    if (c1cs) {
        // 0x00240C14: swc1        $f2, 0x58($v1)
        MEM_W(0X58, ctx->r3) = ctx->f2.u32l;
            goto L_00240DEC;
    }
    // 0x00240C14: swc1        $f2, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f2.u32l;
    // 0x00240C18: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x00240C1C: lwc1        $f1, 0x3C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X3C);
    // 0x00240C20: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00240C24: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00240C28: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00240C2C: swc1        $f0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f0.u32l;
    // 0x00240C30: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240C34: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00240C38: lwc1        $f1, 0x44($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X44);
    // 0x00240C3C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00240C40: swc1        $f2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f2.u32l;
    // 0x00240C44: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240C48: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00240C4C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00240C50: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x00240C54: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x00240C58: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    // 0x00240C5C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00240C60: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00240C64: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240C68: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x00240C6C: lwc1        $f1, 0x54($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X54);
    // 0x00240C70: lwc1        $f0, 0x38($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X38);
    // 0x00240C74: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00240C78: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x00240C7C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00240C80: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00240C84: lwc1        $f0, 0x60($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X60);
    // 0x00240C88: swc1        $f1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240C8C: div.s       $f1, $f2, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00240C90: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00240C94: swc1        $f2, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f2.u32l;
    // 0x00240C98: bc1f        L_00240DEC
    if (!c1cs) {
        // 0x00240C9C: swc1        $f1, 0x68($v1)
        MEM_W(0X68, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_00240DEC;
    }
    // 0x00240C9C: swc1        $f1, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00240CA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00240CA4: lwc1        $f0, 0x6810($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6810);
    // 0x00240CA8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00240CAC: nop

    // 0x00240CB0: bc1f        L_00240DEC
    if (!c1cs) {
        // 0x00240CB4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00240DEC;
    }
    // 0x00240CB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00240CB8: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x00240CBC: bne         $v0, $s2, L_00240DA4
    if (ctx->r2 != ctx->r18) {
        // 0x00240CC0: nop
    
            goto L_00240DA4;
    }
    // 0x00240CC0: nop

    // 0x00240CC4: lwc1        $f1, 0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X7C);
    // 0x00240CC8: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x00240CCC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240CD0: nop

    // 0x00240CD4: bc1f        L_00240D28
    if (!c1cs) {
        // 0x00240CD8: nop
    
            goto L_00240D28;
    }
    // 0x00240CD8: nop

    // 0x00240CDC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00240CE0: lwc1        $f1, 0x64($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X64);
    // 0x00240CE4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240CE8: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240CEC: nop

    // 0x00240CF0: bc1f        L_00240D28
    if (!c1cs) {
        // 0x00240CF4: nop
    
            goto L_00240D28;
    }
    // 0x00240CF4: nop

    // 0x00240CF8: lwc1        $f1, 0x68($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X68);
    // 0x00240CFC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240D00: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D04: nop

    // 0x00240D08: bc1f        L_00240D28
    if (!c1cs) {
        // 0x00240D0C: nop
    
            goto L_00240D28;
    }
    // 0x00240D0C: nop

    // 0x00240D10: lwc1        $f1, 0x6C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X6C);
    // 0x00240D14: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240D18: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D1C: nop

    // 0x00240D20: bc1t        L_00240DEC
    if (c1cs) {
        // 0x00240D24: nop
    
            goto L_00240DEC;
    }
    // 0x00240D24: nop

L_00240D28:
    // 0x00240D28: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00240D2C: lw          $v1, 0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1AB0);
    // 0x00240D30: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00240D34: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x00240D38: bne         $v0, $s2, L_00240DA4
    if (ctx->r2 != ctx->r18) {
        // 0x00240D3C: nop
    
            goto L_00240DA4;
    }
    // 0x00240D3C: nop

    // 0x00240D40: lwc1        $f1, 0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X7C);
    // 0x00240D44: lwc1        $f0, 0x54($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X54);
    // 0x00240D48: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D4C: nop

    // 0x00240D50: bc1f        L_00240DA4
    if (!c1cs) {
        // 0x00240D54: nop
    
            goto L_00240DA4;
    }
    // 0x00240D54: nop

    // 0x00240D58: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x00240D5C: lwc1        $f1, 0x64($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X64);
    // 0x00240D60: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00240D64: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D68: nop

    // 0x00240D6C: bc1f        L_00240DA4
    if (!c1cs) {
        // 0x00240D70: nop
    
            goto L_00240DA4;
    }
    // 0x00240D70: nop

    // 0x00240D74: lwc1        $f1, 0x68($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X68);
    // 0x00240D78: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00240D7C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D80: nop

    // 0x00240D84: bc1f        L_00240DA4
    if (!c1cs) {
        // 0x00240D88: nop
    
            goto L_00240DA4;
    }
    // 0x00240D88: nop

    // 0x00240D8C: lwc1        $f1, 0x6C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X6C);
    // 0x00240D90: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00240D94: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x00240D98: nop

    // 0x00240D9C: bc1t        L_00240DEC
    if (c1cs) {
        // 0x00240DA0: nop
    
            goto L_00240DEC;
    }
    // 0x00240DA0: nop

L_00240DA4:
    // 0x00240DA4: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00240DA8: lw          $a2, 0x1AB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1AB0);
    // 0x00240DAC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00240DB0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00240DB8: lb          $v0, 0x5($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5);
    // 0x00240DBC: addiu       $a1, $a2, 0x3C
    ctx->r5 = ADD32(ctx->r6, 0X3C);
    // 0x00240DC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00240DC4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x00240DC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00240DCC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x00240DD0: jal         0x0023AB18
    // 0x00240DD4: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    func_0023AB18(rdram, ctx);
        goto after_5;
    // 0x00240DD4: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    after_5:
    // 0x00240DD8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240DDC: lw          $a0, 0x1AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AB0);
    // 0x00240DE0: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x00240DE4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00240DE8: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
L_00240DEC:
    // 0x00240DEC: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00240DF0: lw          $a1, 0x1AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1AB0);
    // 0x00240DF4: lw          $v0, 0x70($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X70);
    // 0x00240DF8: beql        $v0, $zero, L_00240E64
    if (ctx->r2 == 0) {
        // 0x00240DFC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00240E64;
    }
    goto skip_7;
    // 0x00240DFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
    // 0x00240E00: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00240E04: lw          $a0, 0x1ADC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1ADC);
    // 0x00240E08: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00240E0C: addiu       $v0, $a0, 0xA0
    ctx->r2 = ADD32(ctx->r4, 0XA0);
    // 0x00240E10: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x00240E14: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x00240E18: addiu       $v0, $a0, 0x9C
    ctx->r2 = ADD32(ctx->r4, 0X9C);
    // 0x00240E1C: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x00240E20: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E24: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x00240E28: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E2C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x00240E30: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E34: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x00240E38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E3C: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x00240E40: sw          $s0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r16;
    // 0x00240E44: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00240E48: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00240E4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00240E50: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x00240E54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00240E58: bne         $v0, $zero, L_00240E70
    if (ctx->r2 != 0) {
        // 0x00240E5C: nop
    
            goto L_00240E70;
    }
    // 0x00240E5C: nop

L_00240E60:
    // 0x00240E60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00240E64:
    // 0x00240E64: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
L_00240E68:
    // 0x00240E68: bne         $v0, $zero, L_00240864
    if (ctx->r2 != 0) {
        // 0x00240E6C: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_00240864;
    }
    // 0x00240E6C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_00240E70:
    // 0x00240E70: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x00240E74: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00240E78: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00240E7C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00240E80: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00240E84: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x00240E88: jr          $ra
    // 0x00240E8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00240E8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_00241860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00241864: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00241868: addiu       $v0, $v0, 0x1CE0
    ctx->r2 = ADD32(ctx->r2, 0X1CE0);
    // 0x0024186C: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x00241870: addiu       $a0, $a0, -0x2AF0
    ctx->r4 = ADD32(ctx->r4, -0X2AF0);
    // 0x00241874: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00241878: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0024187C: sw          $v0, 0x1ADC($at)
    MEM_W(0X1ADC, ctx->r1) = ctx->r2;
    // 0x00241880: jal         0x002418C0
    // 0x00241884: nop

    func_002418C0(rdram, ctx);
        goto after_0;
    // 0x00241884: nop

    after_0:
    // 0x00241888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0024188C: jr          $ra
    // 0x00241890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00241890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00241960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00241960: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x00241964: sw          $s4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r20;
    // 0x00241968: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0024196C: sw          $s2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r18;
    // 0x00241970: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00241974: sw          $ra, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r31;
    // 0x00241978: sw          $s3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r19;
    // 0x0024197C: sw          $s1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r17;
    // 0x00241980: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    // 0x00241984: sdc1        $f25, 0x130($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X130, ctx->r29);
    // 0x00241988: sdc1        $f24, 0x128($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X128, ctx->r29);
    // 0x0024198C: sdc1        $f23, 0x120($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X120, ctx->r29);
    // 0x00241990: sdc1        $f22, 0x118($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X118, ctx->r29);
    // 0x00241994: sdc1        $f21, 0x110($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X110, ctx->r29);
    // 0x00241998: sdc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X108, ctx->r29);
    // 0x0024199C: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x002419A0: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002419A4: addiu       $s3, $v0, 0x14
    ctx->r19 = ADD32(ctx->r2, 0X14);
    // 0x002419A8: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x002419AC: bne         $v0, $zero, L_00241A50
    if (ctx->r2 != 0) {
        // 0x002419B0: addiu       $s1, $s4, 0x140
        ctx->r17 = ADD32(ctx->r20, 0X140);
            goto L_00241A50;
    }
    // 0x002419B0: addiu       $s1, $s4, 0x140
    ctx->r17 = ADD32(ctx->r20, 0X140);
    // 0x002419B4: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x002419B8: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x002419BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002419C0: lwc1        $f21, 0x6860($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6860);
    // 0x002419C4: lw          $a2, 0xC($s4)
    ctx->r6 = MEM_W(ctx->r20, 0XC);
    // 0x002419C8: add.s       $f23, $f0, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x002419CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002419D0: lwc1        $f20, 0x6864($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6864);
    // 0x002419D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x002419D8: jal         0x0026BE60
    // 0x002419DC: add.s       $f22, $f0, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f20.fl;
    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x002419DC: add.s       $f22, $f0, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f20.fl;
    after_0:
    // 0x002419E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002419E4: lwc1        $f1, 0x6868($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6868);
    // 0x002419E8: add.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002419EC: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x002419F0: swc1        $f23, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x002419F4: swc1        $f22, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f22.u32l;
    // 0x002419F8: swc1        $f22, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f22.u32l;
    // 0x002419FC: swc1        $f23, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241A00: add.s       $f1, $f0, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x00241A04: swc1        $f23, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241A08: swc1        $f22, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f22.u32l;
    // 0x00241A0C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00241A10: swc1        $f22, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->f22.u32l;
    // 0x00241A14: swc1        $f23, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241A18: sub.s       $f3, $f2, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x00241A1C: swc1        $f2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f2.u32l;
    // 0x00241A20: swc1        $f2, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f2.u32l;
    // 0x00241A24: swc1        $f2, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f2.u32l;
    // 0x00241A28: swc1        $f2, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f2.u32l;
    // 0x00241A2C: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x00241A30: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    // 0x00241A34: swc1        $f1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241A38: swc1        $f1, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241A3C: swc1        $f0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f0.u32l;
    // 0x00241A40: swc1        $f0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f0.u32l;
    // 0x00241A44: swc1        $f1, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241A48: j           L_00241C68
    // 0x00241A4C: swc1        $f1, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
        goto L_00241C68;
    // 0x00241A4C: swc1        $f1, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_00241A50:
    // 0x00241A50: lhu         $v1, 0x4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X4);
    // 0x00241A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00241A58: beq         $v1, $v0, L_00241AF0
    if (ctx->r3 == ctx->r2) {
        // 0x00241A5C: nop
    
            goto L_00241AF0;
    }
    // 0x00241A5C: nop

    // 0x00241A60: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x00241A64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241A68: lwc1        $f22, 0x686C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X686C);
    // 0x00241A6C: mul.s       $f21, $f0, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00241A70: lwc1        $f25, 0x10($s3)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r19, 0X10);
    // 0x00241A74: lwc1        $f0, 0x14($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X14);
    // 0x00241A78: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x00241A7C: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00241A80: beq         $s0, $zero, L_00241B1C
    if (ctx->r16 == 0) {
        // 0x00241A84: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00241B1C;
    }
    // 0x00241A84: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00241A88: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00241A8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00241A90: beq         $v0, $zero, L_00241AC8
    if (ctx->r2 == 0) {
        // 0x00241A94: nop
    
            goto L_00241AC8;
    }
    // 0x00241A94: nop

    // 0x00241A98: jal         0x002672C8
    // 0x00241A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_1;
    // 0x00241A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00241AA0: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00241AA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241AA8: jal         0x002671B4
    // 0x00241AAC: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_2;
    // 0x00241AAC: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    after_2:
    // 0x00241AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241AB4: jal         0x002672C8
    // 0x00241AB8: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_3;
    // 0x00241AB8: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    after_3:
    // 0x00241ABC: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x00241AC0: j           L_00241B1C
    // 0x00241AC4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
        goto L_00241B1C;
    // 0x00241AC4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00241AC8:
    // 0x00241AC8: jal         0x002672C8
    // 0x00241ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_4;
    // 0x00241ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00241AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241AD4: jal         0x002671B4
    // 0x00241AD8: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    func_002671B4(rdram, ctx);
        goto after_5;
    // 0x00241AD8: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    after_5:
    // 0x00241ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241AE0: jal         0x002672C8
    // 0x00241AE4: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    func_002672C8(rdram, ctx);
        goto after_6;
    // 0x00241AE4: neg.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = -ctx->f0.fl;
    after_6:
    // 0x00241AE8: j           L_00241B1C
    // 0x00241AEC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
        goto L_00241B1C;
    // 0x00241AEC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00241AF0:
    // 0x00241AF0: beq         $s0, $zero, L_00241B0C
    if (ctx->r16 == 0) {
        // 0x00241AF4: nop
    
            goto L_00241B0C;
    }
    // 0x00241AF4: nop

    // 0x00241AF8: jal         0x002672C8
    // 0x00241AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002672C8(rdram, ctx);
        goto after_7;
    // 0x00241AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00241B00: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x00241B04: j           L_00241B10
    // 0x00241B08: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00241B10;
    // 0x00241B08: add.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f1.fl + ctx->f0.fl;
L_00241B0C:
    // 0x00241B0C: lwc1        $f20, 0x8($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0X8);
L_00241B10:
    // 0x00241B10: lwc1        $f25, 0x10($s3)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r19, 0X10);
    // 0x00241B14: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x00241B18: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
L_00241B1C:
    // 0x00241B1C: lwc1        $f0, 0x18($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X18);
    // 0x00241B20: sub.s       $f23, $f0, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x00241B24: add.s       $f22, $f0, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f21.fl;
    // 0x00241B28: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x00241B2C: add.s       $f3, $f0, $f24
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f3.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x00241B30: add.s       $f2, $f0, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f25.fl;
    // 0x00241B34: lwc1        $f0, 0x20($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X20);
    // 0x00241B38: sub.s       $f1, $f0, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00241B3C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00241B40: swc1        $f23, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241B44: swc1        $f22, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f22.u32l;
    // 0x00241B48: swc1        $f22, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f22.u32l;
    // 0x00241B4C: swc1        $f23, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241B50: swc1        $f23, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241B54: swc1        $f22, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f22.u32l;
    // 0x00241B58: swc1        $f22, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->f22.u32l;
    // 0x00241B5C: swc1        $f23, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f_odd[(23 - 1) * 2];
    // 0x00241B60: swc1        $f2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f2.u32l;
    // 0x00241B64: swc1        $f2, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f2.u32l;
    // 0x00241B68: swc1        $f2, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f2.u32l;
    // 0x00241B6C: swc1        $f2, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f2.u32l;
    // 0x00241B70: swc1        $f3, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241B74: swc1        $f3, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241B78: swc1        $f3, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241B7C: swc1        $f3, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241B80: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x00241B84: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    // 0x00241B88: swc1        $f1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241B8C: swc1        $f1, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241B90: swc1        $f0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f0.u32l;
    // 0x00241B94: swc1        $f0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f0.u32l;
    // 0x00241B98: swc1        $f1, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241B9C: swc1        $f1, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x00241BA0: lw          $a1, 0x11C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X11C);
    // 0x00241BA4: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x00241BA8: jal         0x00210518
    // 0x00241BAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210518(rdram, ctx);
        goto after_8;
    // 0x00241BAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00241BB0: lwc1        $f12, 0x50($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X50);
    // 0x00241BB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00241BB8: lwc1        $f20, 0x6870($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6870);
    // 0x00241BBC: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00241BC0: jal         0x002982F0
    // 0x00241BC4: nop

    func_002982F0(rdram, ctx);
        goto after_9;
    // 0x00241BC4: nop

    after_9:
    // 0x00241BC8: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x00241BCC: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x00241BD0: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x00241BD4: lwc1        $f12, 0x50($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X50);
    // 0x00241BD8: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00241BDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00241BE0: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00241BE4: jal         0x002974C0
    // 0x00241BE8: nop

    func_002974C0(rdram, ctx);
        goto after_10;
    // 0x00241BE8: nop

    after_10:
    // 0x00241BEC: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x00241BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241BF4: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x00241BF8: addiu       $a2, $s4, 0x40
    ctx->r6 = ADD32(ctx->r20, 0X40);
    // 0x00241BFC: jal         0x00210F68
    // 0x00241C00: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_11;
    // 0x00241C00: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x00241C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00241C08: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x00241C0C: jal         0x00211114
    // 0x00241C10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_12;
    // 0x00241C10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00241C14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00241C18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00241C1C: jal         0x0020C618
    // 0x00241C20: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020C618(rdram, ctx);
        goto after_13;
    // 0x00241C20: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00241C24: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x00241C28: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x00241C2C: lw          $a3, 0xC($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XC);
    // 0x00241C30: jal         0x00210318
    // 0x00241C34: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_14;
    // 0x00241C34: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_14:
    // 0x00241C38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00241C3C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00241C40: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00241C44: jal         0x0020F908
    // 0x00241C48: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_0020F908(rdram, ctx);
        goto after_15;
    // 0x00241C48: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_15:
    // 0x00241C4C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00241C50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00241C54: beq         $v0, $zero, L_00241C78
    if (ctx->r2 == 0) {
        // 0x00241C58: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00241C78;
    }
    // 0x00241C58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00241C5C: jal         0x0026872C
    // 0x00241C60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_16;
    // 0x00241C60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_16:
    // 0x00241C64: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
L_00241C68:
    // 0x00241C68: swc1        $f3, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241C6C: swc1        $f3, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241C70: swc1        $f3, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
    // 0x00241C74: swc1        $f3, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f_odd[(3 - 1) * 2];
L_00241C78:
    // 0x00241C78: lw          $ra, 0x104($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X104);
    // 0x00241C7C: lw          $s4, 0x100($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X100);
    // 0x00241C80: lw          $s3, 0xFC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XFC);
    // 0x00241C84: lw          $s2, 0xF8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF8);
    // 0x00241C88: lw          $s1, 0xF4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XF4);
    // 0x00241C8C: lw          $s0, 0xF0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF0);
    // 0x00241C90: ldc1        $f25, 0x130($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X130);
    // 0x00241C94: ldc1        $f24, 0x128($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X128);
    // 0x00241C98: ldc1        $f23, 0x120($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X120);
    // 0x00241C9C: ldc1        $f22, 0x118($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X118);
    // 0x00241CA0: ldc1        $f21, 0x110($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X110);
    // 0x00241CA4: ldc1        $f20, 0x108($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X108);
    // 0x00241CA8: jr          $ra
    // 0x00241CAC: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x00241CAC: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void entry_00242CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242CBC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00242CC0: jal         0x0020EEF8
    // 0x00242CC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0020EEF8(rdram, ctx);
        goto after_0;
    // 0x00242CC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00242CC8: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x00242CCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242CD0: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x00242CD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00242CD8: addiu       $s3, $s4, 0x4
    ctx->r19 = ADD32(ctx->r20, 0X4);
    // 0x00242CDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00242CE0: lw          $t0, 0x18($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X18);
    // 0x00242CE4: lw          $t1, 0x1C($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X1C);
    // 0x00242CE8: lw          $t2, 0x20($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X20);
    // 0x00242CEC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00242CF0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00242CF4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00242CF8: sw          $zero, 0x18($s5)
    MEM_W(0X18, ctx->r21) = 0;
    // 0x00242CFC: sw          $zero, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = 0;
    // 0x00242D00: jal         0x0020EF2C
    // 0x00242D04: sw          $zero, 0x20($s5)
    MEM_W(0X20, ctx->r21) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00242D04: sw          $zero, 0x20($s5)
    MEM_W(0X20, ctx->r21) = 0;
    after_1:
    // 0x00242D08: jal         0x002687FC
    // 0x00242D0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002687FC(rdram, ctx);
        goto after_2;
    // 0x00242D0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00242D10: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00242D14: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x00242D18: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00242D1C: jal         0x002105A4
    // 0x00242D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002105A4(rdram, ctx);
        goto after_3;
    // 0x00242D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00242D24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00242D28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242D2C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00242D30: jal         0x0020F908
    // 0x00242D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_0020F908(rdram, ctx);
        goto after_4;
    // 0x00242D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x00242D38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242D3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242D40: jal         0x0020EEF8
    // 0x00242D44: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0020EEF8(rdram, ctx);
        goto after_5;
    // 0x00242D44: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_5:
    // 0x00242D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00242D4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00242D50: jal         0x0020EF2C
    // 0x00242D54: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x00242D54: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
    // 0x00242D58: lwc1        $f0, 0x50($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X50);
    // 0x00242D5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00242D60: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00242D64: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00242D68: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00242D6C: jal         0x0020EEF8
    // 0x00242D70: swc1        $f0, 0x50($s5)
    MEM_W(0X50, ctx->r21) = ctx->f0.u32l;
    func_0020EEF8(rdram, ctx);
        goto after_7;
    // 0x00242D70: swc1        $f0, 0x50($s5)
    MEM_W(0X50, ctx->r21) = ctx->f0.u32l;
    after_7:
    // 0x00242D74: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00242D78: addiu       $v0, $v0, 0x1E10
    ctx->r2 = ADD32(ctx->r2, 0X1E10);
    // 0x00242D7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00242D80: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x00242D84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x00242D88: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00242D8C: jal         0x00239F00
    // 0x00242D90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_00239F00(rdram, ctx);
        goto after_8;
    // 0x00242D90: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_8:
    // 0x00242D94: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00242D98: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00242D9C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x00242DA0: sw          $t0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r8;
    // 0x00242DA4: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x00242DA8: sw          $t2, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r10;
    // 0x00242DAC: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x00242DB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00242DB4: bne         $v1, $v0, L_00242E0C
    if (ctx->r3 != ctx->r2) {
        // 0x00242DB8: nop
    
            goto L_00242E0C;
    }
    // 0x00242DB8: nop

    // 0x00242DBC: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x00242DC0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00242DC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00242DC8: bne         $v1, $v0, L_00242E0C
    if (ctx->r3 != ctx->r2) {
        // 0x00242DCC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00242E0C;
    }
    // 0x00242DCC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00242DD0: jal         0x002640D4
    // 0x00242DD4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002640D4(rdram, ctx);
        goto after_9;
    // 0x00242DD4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_9:
    // 0x00242DD8: j           L_00242E0C
    // 0x00242DDC: nop

        goto L_00242E0C;
    // 0x00242DDC: nop

    // 0x00242DE0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00242DE4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00242DE8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00242DEC: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00242DF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00242DF4: j           L_00242E0C
    // 0x00242DF8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_00242E0C;
    // 0x00242DF8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00242DFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00242E00: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00242E04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242E08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00242E0C:
    // 0x00242E0C: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x00242E10: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x00242E14: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x00242E18: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x00242E1C: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x00242E20: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x00242E24: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x00242E28: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00242E2C: jr          $ra
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_00242DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242DE0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00242DE4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00242DE8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00242DEC: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00242DF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00242DF4: j           L_00242E0C
    // 0x00242DF8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_00242E0C;
    // 0x00242DF8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00242DFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00242E00: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00242E04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242E08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_00242E0C:
    // 0x00242E0C: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x00242E10: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x00242E14: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x00242E18: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x00242E1C: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x00242E20: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x00242E24: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x00242E28: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00242E2C: jr          $ra
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_00242DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00242DFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00242E00: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00242E04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00242E08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00242E0C: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x00242E10: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x00242E14: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x00242E18: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x00242E1C: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x00242E20: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x00242E24: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x00242E28: ldc1        $f20, 0xA8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA8);
    // 0x00242E2C: jr          $ra
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00242E30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_002572B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_002572B8:
    // 0x002572B8: bne         $v0, $zero, L_002572D4
    if (ctx->r2 != 0) {
        // 0x002572BC: nop
    
            goto L_002572D4;
    }
    // 0x002572BC: nop

    // 0x002572C0: jr          $ra
    // 0x002572C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002572C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002572C8: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x002572CC: j           L_002572B8
    // 0x002572D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
        goto L_002572B8;
    // 0x002572D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_002572D4:
    // 0x002572D4: lh          $v1, 0xC($a2)
    ctx->r3 = MEM_H(ctx->r6, 0XC);
;}
RECOMP_FUNC void entry_00257350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00257350:
    // 0x00257350: beq         $v0, $zero, L_00257394
    if (ctx->r2 == 0) {
            // 0x00257354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_00257394(rdram, ctx);
    return;
    }
    // 0x00257354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00257358: jr          $ra
    // 0x0025735C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x0025735C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257360: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x00257364: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257368: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025736C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257370: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257374: j           L_00257350
    // 0x00257378: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_00257350;
    // 0x00257378: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0025737C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x00257380: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x00257384: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x00257388: beq         $v1, $a0, L_00257394
    if (ctx->r3 == ctx->r4) {
            // 0x0025738C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_00257394(rdram, ctx);
    return;
    }
    // 0x0025738C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void entry_00257394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257394: jr          $ra
    // 0x00257398: nop

    return;
    // 0x00257398: nop

;}
RECOMP_FUNC void entry_0025AD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025AD24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025AD28: jr          $ra
    // 0x0025AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0025B4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025B4CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B4D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B4D4: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    // 0x0025B4D8: jal         0x0025E52C
    // 0x0025B4DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_0;
    // 0x0025B4DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x0025B4E0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0025B4E4: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0025B4E8: bne         $v0, $zero, L_0025B578
    if (ctx->r2 != 0) {
        // 0x0025B4EC: nop
    
            goto L_0025B578;
    }
    // 0x0025B4EC: nop

    // 0x0025B4F0: beq         $s2, $zero, L_0025B578
    if (ctx->r18 == 0) {
        // 0x0025B4F4: nop
    
            goto L_0025B578;
    }
    // 0x0025B4F4: nop

    // 0x0025B4F8: lhu         $v1, 0xB8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XB8);
    // 0x0025B4FC: lhu         $v0, 0xB8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XB8);
    // 0x0025B500: beq         $v1, $v0, L_0025B578
    if (ctx->r3 == ctx->r2) {
        // 0x0025B504: nop
    
            goto L_0025B578;
    }
    // 0x0025B504: nop

    // 0x0025B508: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x0025B50C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0025B510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B514: bne         $v1, $v0, L_0025B540
    if (ctx->r3 != ctx->r2) {
        // 0x0025B518: lui         $a0, 0xDFFF
        ctx->r4 = S32(0XDFFF << 16);
            goto L_0025B540;
    }
    // 0x0025B518: lui         $a0, 0xDFFF
    ctx->r4 = S32(0XDFFF << 16);
    // 0x0025B51C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B520: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0025B524: sw          $s2, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r18;
    // 0x0025B528: sw          $s2, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r18;
    // 0x0025B52C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B530: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x0025B534: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B538: j           L_0025B578
    // 0x0025B53C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0025B578;
    // 0x0025B53C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0025B540:
    // 0x0025B540: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0025B544: lui         $v1, 0xBFFF
    ctx->r3 = S32(0XBFFF << 16);
    // 0x0025B548: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B54C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0025B550: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0025B554: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B558: j           L_0025B578
    // 0x0025B55C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0025B578;
    // 0x0025B55C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B560: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B564: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B568: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025B56C: addiu       $a2, $a2, 0x6A0
    ctx->r6 = ADD32(ctx->r6, 0X6A0);
    // 0x0025B570: jal         0x0025E52C
    // 0x0025B574: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_0025E52C(rdram, ctx);
        goto after_1;
    // 0x0025B574: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
L_0025B578:
    // 0x0025B578: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0025B57C: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B580: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x0025B584: bltzl       $v0, L_0025B58C
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025B588: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025B58C;
    }
    goto skip_0;
    // 0x0025B588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_0025B58C:
    // 0x0025B58C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x0025B590: sltiu       $s2, $v0, 0x1
    ctx->r18 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0025B594: beq         $s2, $zero, L_0025B5A0
    if (ctx->r18 == 0) {
        // 0x0025B598: addu        $fp, $zero, $zero
        ctx->r30 = ADD32(0, 0);
            goto L_0025B5A0;
    }
    // 0x0025B598: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0025B59C: sltu        $fp, $fp, $v1
    ctx->r30 = ctx->r30 < ctx->r3 ? 1 : 0;
L_0025B5A0:
    // 0x0025B5A0: bne         $v1, $zero, L_0025B5C0
    if (ctx->r3 != 0) {
        // 0x0025B5A4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025B5C0;
    }
    // 0x0025B5A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025B5A8: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B5AC: beq         $v1, $v0, L_0025B63C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B5B0: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5B0: nop

    // 0x0025B5B4: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B5B8: bne         $v0, $zero, L_0025B63C
    if (ctx->r2 != 0) {
        // 0x0025B5BC: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5BC: nop

L_0025B5C0:
    // 0x0025B5C0: lhu         $v0, 0x30($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X30);
    // 0x0025B5C4: beq         $v0, $zero, L_0025B63C
    if (ctx->r2 == 0) {
        // 0x0025B5C8: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5C8: nop

    // 0x0025B5CC: lb          $v0, 0xCB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XCB);
    // 0x0025B5D0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x0025B5D4: bne         $v0, $zero, L_0025B63C
    if (ctx->r2 != 0) {
        // 0x0025B5D8: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5D8: nop

    // 0x0025B5DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0025B5E0: lw          $v1, -0x5528($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5528);
    // 0x0025B5E4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x0025B5E8: beq         $v0, $zero, L_0025B600
    if (ctx->r2 == 0) {
        // 0x0025B5EC: andi        $v0, $v1, 0x20
        ctx->r2 = ctx->r3 & 0X20;
            goto L_0025B600;
    }
    // 0x0025B5EC: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x0025B5F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B5F4: lwc1        $f20, 0x7544($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7544);
    // 0x0025B5F8: j           L_0025B610
    // 0x0025B5FC: nop

        goto L_0025B610;
    // 0x0025B5FC: nop

L_0025B600:
    // 0x0025B600: beq         $v0, $zero, L_0025B610
    if (ctx->r2 == 0) {
        // 0x0025B604: nop
    
            goto L_0025B610;
    }
    // 0x0025B604: nop

    // 0x0025B608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B60C: lwc1        $f20, 0x7548($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7548);
L_0025B610:
    // 0x0025B610: lh          $a0, 0x30($s7)
    ctx->r4 = MEM_H(ctx->r23, 0X30);
    // 0x0025B614: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025B61C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025B620: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0025B624: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0025B628: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x0025B62C: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x0025B630: jal         0x002755B0
    // 0x0025B634: nop

    func_002755B0(rdram, ctx);
        goto after_2;
    // 0x0025B634: nop

    after_2:
    // 0x0025B638: sb          $zero, 0xCB($s1)
    MEM_B(0XCB, ctx->r17) = 0;
L_0025B63C:
    // 0x0025B63C: lbu         $v1, 0xC8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC8);
    // 0x0025B640: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B644: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0025B648: slti        $v0, $v0, 0xFF
    ctx->r2 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x0025B64C: bnel        $v0, $zero, L_0025B65C
    if (ctx->r2 != 0) {
        // 0x0025B650: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0025B65C;
    }
    goto skip_1;
    // 0x0025B650: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_1:
    // 0x0025B654: lbu         $v0, 0x7($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7);
    // 0x0025B658: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_0025B65C:
    // 0x0025B65C: sb          $v0, 0xC8($s1)
    MEM_B(0XC8, ctx->r17) = ctx->r2;
    // 0x0025B660: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B664: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B668: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B66C: beq         $v0, $zero, L_0025B6C0
    if (ctx->r2 == 0) {
        // 0x0025B670: nop
    
            goto L_0025B6C0;
    }
    // 0x0025B670: nop

    // 0x0025B674: jal         0x002113A4
    // 0x0025B678: nop

    func_002113A4(rdram, ctx);
        goto after_3;
    // 0x0025B678: nop

    after_3:
    // 0x0025B67C: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B680: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B684: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B688: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B68C: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025B690: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025B694: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B698: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B69C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B6A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B6A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B6A8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B6AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B6B0: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B6B4: beq         $v0, $zero, L_0025B6C0
    if (ctx->r2 == 0) {
        // 0x0025B6B8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_0025B6C0;
    }
    // 0x0025B6B8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0025B6BC: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
L_0025B6C0:
    // 0x0025B6C0: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B6C4: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0025B6C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B6CC: beq         $v0, $zero, L_0025B724
    if (ctx->r2 == 0) {
        // 0x0025B6D0: lui         $s0, 0xFC0F
        ctx->r16 = S32(0XFC0F << 16);
            goto L_0025B724;
    }
    // 0x0025B6D0: lui         $s0, 0xFC0F
    ctx->r16 = S32(0XFC0F << 16);
    // 0x0025B6D4: jal         0x002113A4
    // 0x0025B6D8: nop

    func_002113A4(rdram, ctx);
        goto after_4;
    // 0x0025B6D8: nop

    after_4:
    // 0x0025B6DC: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B6E0: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B6E4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B6E8: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B6EC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025B6F0: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025B6F4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B6F8: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B6FC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B700: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B704: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B708: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B70C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B710: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B714: beq         $v0, $zero, L_0025B724
    if (ctx->r2 == 0) {
        // 0x0025B718: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0025B724;
    }
    // 0x0025B718: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0025B71C: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
    // 0x0025B720: lui         $s0, 0xFC0F
    ctx->r16 = S32(0XFC0F << 16);
L_0025B724:
    // 0x0025B724: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B728: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x0025B72C: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0025B730: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B734: lw          $v1, 0xC($s5)
    ctx->r3 = MEM_W(ctx->r21, 0XC);
    // 0x0025B738: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B73C: beq         $fp, $zero, L_0025B7B0
    if (ctx->r30 == 0) {
        // 0x0025B740: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_0025B7B0;
    }
    // 0x0025B740: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B744: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B748: jal         0x00246918
    // 0x0025B74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_5;
    // 0x0025B74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0025B750: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B758: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x0025B75C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0025B760: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x0025B764: jal         0x0025B078
    // 0x0025B768: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    func_0025B078(rdram, ctx);
        goto after_6;
    // 0x0025B768: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    after_6:
    // 0x0025B76C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0025B770: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x0025B774: bne         $a2, $v0, L_0025B798
    if (ctx->r6 != ctx->r2) {
        // 0x0025B778: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B798;
    }
    // 0x0025B778: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B77C: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B780: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B784: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B788: beq         $v0, $zero, L_0025B798
    if (ctx->r2 == 0) {
        // 0x0025B78C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_0025B798;
    }
    // 0x0025B78C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B790: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025B794: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B798:
    // 0x0025B798: jal         0x00243414
    // 0x0025B79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00243414(rdram, ctx);
        goto after_7;
    // 0x0025B79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0025B7A0: jal         0x004089C8
    // 0x0025B7A4: nop

    func_004089C8(rdram, ctx);
        goto after_8;
    // 0x0025B7A4: nop

    after_8:
    // 0x0025B7A8: j           L_0025B9D4
    // 0x0025B7AC: nop

        goto L_0025B9D4;
    // 0x0025B7AC: nop

L_0025B7B0:
    // 0x0025B7B0: beq         $s2, $zero, L_0025B84C
    if (ctx->r18 == 0) {
        // 0x0025B7B4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B84C;
    }
    // 0x0025B7B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B7B8: jal         0x00246918
    // 0x0025B7BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_9;
    // 0x0025B7BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x0025B7C0: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B7C4: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x0025B7C8: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B7CC: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025B9D4;
    }
    // 0x0025B7CC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025B7D0: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B7D4: nop
    
            goto L_0025B9D4;
    }
    // 0x0025B7D4: nop

    // 0x0025B7D8: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B7DC: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B7E0: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B7E0: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x0025B7E4: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B7E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B7EC: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B7F0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B7F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B7F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B7FC: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B800: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0025B804: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B808: jal         0x0025DF04
    // 0x0025B80C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_0025DF04(rdram, ctx);
        goto after_10;
    // 0x0025B80C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_10:
    // 0x0025B810: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0025B814: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x0025B818: beq         $s0, $s2, L_0025B9D4
    if (ctx->r16 == ctx->r18) {
        // 0x0025B81C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B81C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B820: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025B824: jal         0x00219F74
    // 0x0025B828: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00219F74(rdram, ctx);
        goto after_11;
    // 0x0025B828: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_11:
    // 0x0025B82C: beq         $v0, $s2, L_0025B9D4
    if (ctx->r2 == ctx->r18) {
        // 0x0025B830: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_0025B9D4;
    }
    // 0x0025B830: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B834: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025B838: sh          $s0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r16;
    // 0x0025B83C: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x0025B840: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x0025B844: j           L_0025B9D4
    // 0x0025B848: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
        goto L_0025B9D4;
    // 0x0025B848: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_0025B84C:
    // 0x0025B84C: lw          $v1, 0x10($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X10);
    // 0x0025B850: beq         $v1, $zero, L_0025B95C
    if (ctx->r3 == 0) {
        // 0x0025B854: nop
    
            goto L_0025B95C;
    }
    // 0x0025B854: nop

    // 0x0025B858: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0025B85C: addiu       $v0, $v0, -0x1C
    ctx->r2 = ADD32(ctx->r2, -0X1C);
    // 0x0025B860: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x0025B864: bne         $v0, $zero, L_0025B95C
    if (ctx->r2 != 0) {
        // 0x0025B868: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B95C;
    }
    // 0x0025B868: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B86C: lbu         $v1, 0x65($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X65);
    // 0x0025B870: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x0025B874: bne         $a0, $v0, L_0025B95C
    if (ctx->r4 != ctx->r2) {
        // 0x0025B878: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_0025B95C;
    }
    // 0x0025B878: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0025B87C: bne         $v0, $zero, L_0025B8F0
    if (ctx->r2 != 0) {
        // 0x0025B880: nop
    
            goto L_0025B8F0;
    }
    // 0x0025B880: nop

    // 0x0025B884: bne         $s6, $zero, L_0025B8A4
    if (ctx->r22 != 0) {
        // 0x0025B888: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B8A4;
    }
    // 0x0025B888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B88C: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B890: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B894: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025B898: bnel        $v0, $zero, L_0025B8DC
    if (ctx->r2 != 0) {
        // 0x0025B89C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B8DC;
    }
    goto skip_2;
    // 0x0025B89C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_2:
    // 0x0025B8A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025B8A4:
    // 0x0025B8A4: bne         $s6, $v0, L_0025B8C0
    if (ctx->r22 != ctx->r2) {
        // 0x0025B8A8: nop
    
            goto L_0025B8C0;
    }
    // 0x0025B8A8: nop

    // 0x0025B8AC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8B0: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B8B4: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025B8B8: bnel        $v0, $zero, L_0025B8DC
    if (ctx->r2 != 0) {
        // 0x0025B8BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B8DC;
    }
    goto skip_3;
    // 0x0025B8BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_3:
L_0025B8C0:
    // 0x0025B8C0: bne         $s6, $a0, L_0025B95C
    if (ctx->r22 != ctx->r4) {
        // 0x0025B8C4: nop
    
            goto L_0025B95C;
    }
    // 0x0025B8C4: nop

    // 0x0025B8C8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8CC: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B8D0: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025B8D4: beq         $v0, $zero, L_0025B95C
    if (ctx->r2 == 0) {
        // 0x0025B8D8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B95C;
    }
    // 0x0025B8D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B8DC:
    // 0x0025B8DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B8E0: jal         0x00243414
    // 0x0025B8E4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_00243414(rdram, ctx);
        goto after_12;
    // 0x0025B8E4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_12:
    // 0x0025B8E8: j           L_0025BA4C
    // 0x0025B8EC: nop

        goto L_0025BA4C;
    // 0x0025B8EC: nop

L_0025B8F0:
    // 0x0025B8F0: bne         $s6, $zero, L_0025B910
    if (ctx->r22 != 0) {
        // 0x0025B8F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B910;
    }
    // 0x0025B8F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B8F8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8FC: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B900: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025B904: bnel        $v0, $zero, L_0025B948
    if (ctx->r2 != 0) {
        // 0x0025B908: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B948;
    }
    goto skip_4;
    // 0x0025B908: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_4:
    // 0x0025B90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025B910:
    // 0x0025B910: bne         $s6, $v0, L_0025B92C
    if (ctx->r22 != ctx->r2) {
        // 0x0025B914: nop
    
            goto L_0025B92C;
    }
    // 0x0025B914: nop

    // 0x0025B918: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B91C: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B920: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025B924: bnel        $v0, $zero, L_0025B948
    if (ctx->r2 != 0) {
        // 0x0025B928: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B948;
    }
    goto skip_5;
    // 0x0025B928: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_5:
L_0025B92C:
    // 0x0025B92C: bne         $s6, $a0, L_0025B95C
    if (ctx->r22 != ctx->r4) {
        // 0x0025B930: nop
    
            goto L_0025B95C;
    }
    // 0x0025B930: nop

    // 0x0025B934: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B938: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B93C: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025B940: beq         $v0, $zero, L_0025B95C
    if (ctx->r2 == 0) {
        // 0x0025B944: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B95C;
    }
    // 0x0025B944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B948:
    // 0x0025B948: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B94C: jal         0x00243414
    // 0x0025B950: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    func_00243414(rdram, ctx);
        goto after_13;
    // 0x0025B950: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    after_13:
    // 0x0025B954: j           L_0025BA4C
    // 0x0025B958: nop

        goto L_0025BA4C;
    // 0x0025B958: nop

L_0025B95C:
    // 0x0025B95C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B960: beq         $v0, $zero, L_0025B990
    if (ctx->r2 == 0) {
        // 0x0025B964: nop
    
            goto L_0025B990;
    }
    // 0x0025B964: nop

    // 0x0025B968: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0025B96C: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x0025B970: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025B974: beq         $v0, $zero, L_0025B990
    if (ctx->r2 == 0) {
        // 0x0025B978: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B990;
    }
    // 0x0025B978: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B97C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B980: jal         0x00243414
    // 0x0025B984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_14;
    // 0x0025B984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_14:
    // 0x0025B988: j           L_0025B9D4
    // 0x0025B98C: nop

        goto L_0025B9D4;
    // 0x0025B98C: nop

L_0025B990:
    // 0x0025B990: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B994: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x0025B998: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B99C: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B99C: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x0025B9A0: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B9A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B9A8: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B9AC: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B9AC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025B9B0: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0025B9B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B9B8: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B9BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B9BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B9C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B9C4: jal         0x00243414
    // 0x0025B9C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00243414(rdram, ctx);
        goto after_15;
    // 0x0025B9C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_15:
    // 0x0025B9CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B9D0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_0025B9D4:
    // 0x0025B9D4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0025B9D8: beq         $t0, $zero, L_0025BA4C
    if (ctx->r8 == 0) {
        // 0x0025B9DC: nop
    
            goto L_0025BA4C;
    }
    // 0x0025B9DC: nop

    // 0x0025B9E0: beq         $s4, $zero, L_0025BA4C
    if (ctx->r20 == 0) {
        // 0x0025B9E4: nop
    
            goto L_0025BA4C;
    }
    // 0x0025B9E4: nop

    // 0x0025B9E8: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0025B9EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025B9F0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025B9F4: nop

    // 0x0025B9F8: bc1f        L_0025BA4C
    if (!c1cs) {
        // 0x0025B9FC: addiu       $a1, $s3, 0x4
        ctx->r5 = ADD32(ctx->r19, 0X4);
            goto L_0025BA4C;
    }
    // 0x0025B9FC: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    // 0x0025BA00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0025BA04: jal         0x0020EF2C
    // 0x0025BA08: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_16;
    // 0x0025BA08: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    after_16:
    // 0x0025BA0C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0025BA10: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0025BA14: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0025BA18: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0025BA1C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0025BA20: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0025BA24: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025BA28: jal         0x00298470
    // 0x0025BA2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_17;
    // 0x0025BA2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_17:
    // 0x0025BA30: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0025BA34: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025BA38: nop

    // 0x0025BA3C: bc1f        L_0025BA4C
    if (!c1cs) {
        // 0x0025BA40: nop
    
            goto L_0025BA4C;
    }
    // 0x0025BA40: nop

    // 0x0025BA44: jal         0x0020EAA0
    // 0x0025BA48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020EAA0(rdram, ctx);
        goto after_18;
    // 0x0025BA48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_18:
L_0025BA4C:
    // 0x0025BA4C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0025BA50: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0025BA54: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0025BA58: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0025BA5C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0025BA60: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0025BA64: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0025BA68: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0025BA6C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0025BA70: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0025BA74: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x0025BA78: jr          $ra
    // 0x0025BA7C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0025BA7C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_0025B578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025B578: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0025B57C: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B580: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x0025B584: bltzl       $v0, L_0025B58C
    if (SIGNED(ctx->r2) < 0) {
        // 0x0025B588: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0025B58C;
    }
    goto skip_0;
    // 0x0025B588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_0025B58C:
    // 0x0025B58C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x0025B590: sltiu       $s2, $v0, 0x1
    ctx->r18 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0025B594: beq         $s2, $zero, L_0025B5A0
    if (ctx->r18 == 0) {
        // 0x0025B598: addu        $fp, $zero, $zero
        ctx->r30 = ADD32(0, 0);
            goto L_0025B5A0;
    }
    // 0x0025B598: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0025B59C: sltu        $fp, $fp, $v1
    ctx->r30 = ctx->r30 < ctx->r3 ? 1 : 0;
L_0025B5A0:
    // 0x0025B5A0: bne         $v1, $zero, L_0025B5C0
    if (ctx->r3 != 0) {
        // 0x0025B5A4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025B5C0;
    }
    // 0x0025B5A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025B5A8: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B5AC: beq         $v1, $v0, L_0025B63C
    if (ctx->r3 == ctx->r2) {
        // 0x0025B5B0: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5B0: nop

    // 0x0025B5B4: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B5B8: bne         $v0, $zero, L_0025B63C
    if (ctx->r2 != 0) {
        // 0x0025B5BC: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5BC: nop

L_0025B5C0:
    // 0x0025B5C0: lhu         $v0, 0x30($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X30);
    // 0x0025B5C4: beq         $v0, $zero, L_0025B63C
    if (ctx->r2 == 0) {
        // 0x0025B5C8: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5C8: nop

    // 0x0025B5CC: lb          $v0, 0xCB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XCB);
    // 0x0025B5D0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x0025B5D4: bne         $v0, $zero, L_0025B63C
    if (ctx->r2 != 0) {
        // 0x0025B5D8: nop
    
            goto L_0025B63C;
    }
    // 0x0025B5D8: nop

    // 0x0025B5DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0025B5E0: lw          $v1, -0x5528($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5528);
    // 0x0025B5E4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x0025B5E8: beq         $v0, $zero, L_0025B600
    if (ctx->r2 == 0) {
        // 0x0025B5EC: andi        $v0, $v1, 0x20
        ctx->r2 = ctx->r3 & 0X20;
            goto L_0025B600;
    }
    // 0x0025B5EC: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x0025B5F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B5F4: lwc1        $f20, 0x7544($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7544);
    // 0x0025B5F8: j           L_0025B610
    // 0x0025B5FC: nop

        goto L_0025B610;
    // 0x0025B5FC: nop

L_0025B600:
    // 0x0025B600: beq         $v0, $zero, L_0025B610
    if (ctx->r2 == 0) {
        // 0x0025B604: nop
    
            goto L_0025B610;
    }
    // 0x0025B604: nop

    // 0x0025B608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025B60C: lwc1        $f20, 0x7548($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7548);
L_0025B610:
    // 0x0025B610: lh          $a0, 0x30($s7)
    ctx->r4 = MEM_H(ctx->r23, 0X30);
    // 0x0025B614: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025B618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025B61C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0025B620: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0025B624: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x0025B628: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x0025B62C: lw          $a3, 0xC($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC);
    // 0x0025B630: jal         0x002755B0
    // 0x0025B634: nop

    func_002755B0(rdram, ctx);
        goto after_0;
    // 0x0025B634: nop

    after_0:
    // 0x0025B638: sb          $zero, 0xCB($s1)
    MEM_B(0XCB, ctx->r17) = 0;
L_0025B63C:
    // 0x0025B63C: lbu         $v1, 0xC8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC8);
    // 0x0025B640: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x0025B644: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0025B648: slti        $v0, $v0, 0xFF
    ctx->r2 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x0025B64C: bnel        $v0, $zero, L_0025B65C
    if (ctx->r2 != 0) {
        // 0x0025B650: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_0025B65C;
    }
    goto skip_1;
    // 0x0025B650: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_1:
    // 0x0025B654: lbu         $v0, 0x7($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7);
    // 0x0025B658: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_0025B65C:
    // 0x0025B65C: sb          $v0, 0xC8($s1)
    MEM_B(0XC8, ctx->r17) = ctx->r2;
    // 0x0025B660: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B664: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B668: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B66C: beq         $v0, $zero, L_0025B6C0
    if (ctx->r2 == 0) {
        // 0x0025B670: nop
    
            goto L_0025B6C0;
    }
    // 0x0025B670: nop

    // 0x0025B674: jal         0x002113A4
    // 0x0025B678: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x0025B678: nop

    after_1:
    // 0x0025B67C: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B680: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B684: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B688: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B68C: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025B690: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025B694: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B698: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B69C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B6A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B6A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B6A8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B6AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B6B0: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B6B4: beq         $v0, $zero, L_0025B6C0
    if (ctx->r2 == 0) {
        // 0x0025B6B8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_0025B6C0;
    }
    // 0x0025B6B8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0025B6BC: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
L_0025B6C0:
    // 0x0025B6C0: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B6C4: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0025B6C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B6CC: beq         $v0, $zero, L_0025B724
    if (ctx->r2 == 0) {
        // 0x0025B6D0: lui         $s0, 0xFC0F
        ctx->r16 = S32(0XFC0F << 16);
            goto L_0025B724;
    }
    // 0x0025B6D0: lui         $s0, 0xFC0F
    ctx->r16 = S32(0XFC0F << 16);
    // 0x0025B6D4: jal         0x002113A4
    // 0x0025B6D8: nop

    func_002113A4(rdram, ctx);
        goto after_2;
    // 0x0025B6D8: nop

    after_2:
    // 0x0025B6DC: lui         $v1, 0x1062
    ctx->r3 = S32(0X1062 << 16);
    // 0x0025B6E0: ori         $v1, $v1, 0x4DD3
    ctx->r3 = ctx->r3 | 0X4DD3;
    // 0x0025B6E4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0025B6E8: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0025B6EC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0025B6F0: sra         $a0, $t0, 6
    ctx->r4 = S32(SIGNED(ctx->r8) >> 6);
    // 0x0025B6F4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0025B6F8: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x0025B6FC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x0025B700: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0025B704: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0025B708: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0025B70C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0025B710: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x0025B714: beq         $v0, $zero, L_0025B724
    if (ctx->r2 == 0) {
        // 0x0025B718: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_0025B724;
    }
    // 0x0025B718: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0025B71C: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
    // 0x0025B720: lui         $s0, 0xFC0F
    ctx->r16 = S32(0XFC0F << 16);
L_0025B724:
    // 0x0025B724: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B728: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x0025B72C: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0025B730: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B734: lw          $v1, 0xC($s5)
    ctx->r3 = MEM_W(ctx->r21, 0XC);
    // 0x0025B738: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B73C: beq         $fp, $zero, L_0025B7B0
    if (ctx->r30 == 0) {
        // 0x0025B740: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_0025B7B0;
    }
    // 0x0025B740: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0025B744: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B748: jal         0x00246918
    // 0x0025B74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_3;
    // 0x0025B74C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0025B750: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B758: lw          $v0, 0x27C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X27C);
    // 0x0025B75C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0025B760: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x0025B764: jal         0x0025B078
    // 0x0025B768: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    func_0025B078(rdram, ctx);
        goto after_4;
    // 0x0025B768: sw          $v0, 0x27C($s3)
    MEM_W(0X27C, ctx->r19) = ctx->r2;
    after_4:
    // 0x0025B76C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0025B770: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x0025B774: bne         $a2, $v0, L_0025B798
    if (ctx->r6 != ctx->r2) {
        // 0x0025B778: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B798;
    }
    // 0x0025B778: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B77C: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B780: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B784: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B788: beq         $v0, $zero, L_0025B798
    if (ctx->r2 == 0) {
        // 0x0025B78C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_0025B798;
    }
    // 0x0025B78C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B790: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025B794: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B798:
    // 0x0025B798: jal         0x00243414
    // 0x0025B79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x0025B79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0025B7A0: jal         0x004089C8
    // 0x0025B7A4: nop

    func_004089C8(rdram, ctx);
        goto after_6;
    // 0x0025B7A4: nop

    after_6:
    // 0x0025B7A8: j           L_0025B9D4
    // 0x0025B7AC: nop

        goto L_0025B9D4;
    // 0x0025B7AC: nop

L_0025B7B0:
    // 0x0025B7B0: beq         $s2, $zero, L_0025B84C
    if (ctx->r18 == 0) {
        // 0x0025B7B4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B84C;
    }
    // 0x0025B7B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B7B8: jal         0x00246918
    // 0x0025B7BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00246918(rdram, ctx);
        goto after_7;
    // 0x0025B7BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0025B7C0: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B7C4: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x0025B7C8: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B7CC: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025B9D4;
    }
    // 0x0025B7CC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025B7D0: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B7D4: nop
    
            goto L_0025B9D4;
    }
    // 0x0025B7D4: nop

    // 0x0025B7D8: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B7DC: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B7E0: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B7E0: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x0025B7E4: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B7E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B7EC: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B7F0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B7F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B7F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B7F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0025B7FC: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0025B800: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x0025B804: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025B808: jal         0x0025DF04
    // 0x0025B80C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_0025DF04(rdram, ctx);
        goto after_8;
    // 0x0025B80C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_8:
    // 0x0025B810: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0025B814: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x0025B818: beq         $s0, $s2, L_0025B9D4
    if (ctx->r16 == ctx->r18) {
        // 0x0025B81C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B81C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B820: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025B824: jal         0x00219F74
    // 0x0025B828: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00219F74(rdram, ctx);
        goto after_9;
    // 0x0025B828: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_9:
    // 0x0025B82C: beq         $v0, $s2, L_0025B9D4
    if (ctx->r2 == ctx->r18) {
        // 0x0025B830: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_0025B9D4;
    }
    // 0x0025B830: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B834: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0025B838: sh          $s0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r16;
    // 0x0025B83C: sb          $v0, 0xC6($s1)
    MEM_B(0XC6, ctx->r17) = ctx->r2;
    // 0x0025B840: sb          $zero, 0xC7($s1)
    MEM_B(0XC7, ctx->r17) = 0;
    // 0x0025B844: j           L_0025B9D4
    // 0x0025B848: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
        goto L_0025B9D4;
    // 0x0025B848: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_0025B84C:
    // 0x0025B84C: lw          $v1, 0x10($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X10);
    // 0x0025B850: beq         $v1, $zero, L_0025B95C
    if (ctx->r3 == 0) {
        // 0x0025B854: nop
    
            goto L_0025B95C;
    }
    // 0x0025B854: nop

    // 0x0025B858: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0025B85C: addiu       $v0, $v0, -0x1C
    ctx->r2 = ADD32(ctx->r2, -0X1C);
    // 0x0025B860: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x0025B864: bne         $v0, $zero, L_0025B95C
    if (ctx->r2 != 0) {
        // 0x0025B868: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0025B95C;
    }
    // 0x0025B868: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025B86C: lbu         $v1, 0x65($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X65);
    // 0x0025B870: andi        $a0, $v1, 0x3
    ctx->r4 = ctx->r3 & 0X3;
    // 0x0025B874: bne         $a0, $v0, L_0025B95C
    if (ctx->r4 != ctx->r2) {
        // 0x0025B878: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_0025B95C;
    }
    // 0x0025B878: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0025B87C: bne         $v0, $zero, L_0025B8F0
    if (ctx->r2 != 0) {
        // 0x0025B880: nop
    
            goto L_0025B8F0;
    }
    // 0x0025B880: nop

    // 0x0025B884: bne         $s6, $zero, L_0025B8A4
    if (ctx->r22 != 0) {
        // 0x0025B888: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B8A4;
    }
    // 0x0025B888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B88C: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B890: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B894: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025B898: bnel        $v0, $zero, L_0025B8DC
    if (ctx->r2 != 0) {
        // 0x0025B89C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B8DC;
    }
    goto skip_2;
    // 0x0025B89C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_2:
    // 0x0025B8A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025B8A4:
    // 0x0025B8A4: bne         $s6, $v0, L_0025B8C0
    if (ctx->r22 != ctx->r2) {
        // 0x0025B8A8: nop
    
            goto L_0025B8C0;
    }
    // 0x0025B8A8: nop

    // 0x0025B8AC: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8B0: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B8B4: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025B8B8: bnel        $v0, $zero, L_0025B8DC
    if (ctx->r2 != 0) {
        // 0x0025B8BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B8DC;
    }
    goto skip_3;
    // 0x0025B8BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_3:
L_0025B8C0:
    // 0x0025B8C0: bne         $s6, $a0, L_0025B95C
    if (ctx->r22 != ctx->r4) {
        // 0x0025B8C4: nop
    
            goto L_0025B95C;
    }
    // 0x0025B8C4: nop

    // 0x0025B8C8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8CC: lhu         $v0, 0x96($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X96);
    // 0x0025B8D0: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025B8D4: beq         $v0, $zero, L_0025B95C
    if (ctx->r2 == 0) {
        // 0x0025B8D8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B95C;
    }
    // 0x0025B8D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B8DC:
    // 0x0025B8DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B8E0: jal         0x00243414
    // 0x0025B8E4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_00243414(rdram, ctx);
        goto after_10;
    // 0x0025B8E4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_10:
    // 0x0025B8E8: j           L_0025BA4C
    // 0x0025B8EC: nop

        goto L_0025BA4C;
    // 0x0025B8EC: nop

L_0025B8F0:
    // 0x0025B8F0: bne         $s6, $zero, L_0025B910
    if (ctx->r22 != 0) {
        // 0x0025B8F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025B910;
    }
    // 0x0025B8F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025B8F8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B8FC: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B900: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025B904: bnel        $v0, $zero, L_0025B948
    if (ctx->r2 != 0) {
        // 0x0025B908: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B948;
    }
    goto skip_4;
    // 0x0025B908: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_4:
    // 0x0025B90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0025B910:
    // 0x0025B910: bne         $s6, $v0, L_0025B92C
    if (ctx->r22 != ctx->r2) {
        // 0x0025B914: nop
    
            goto L_0025B92C;
    }
    // 0x0025B914: nop

    // 0x0025B918: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B91C: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B920: andi        $v0, $v0, 0x3E0
    ctx->r2 = ctx->r2 & 0X3E0;
    // 0x0025B924: bnel        $v0, $zero, L_0025B948
    if (ctx->r2 != 0) {
        // 0x0025B928: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B948;
    }
    goto skip_5;
    // 0x0025B928: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_5:
L_0025B92C:
    // 0x0025B92C: bne         $s6, $a0, L_0025B95C
    if (ctx->r22 != ctx->r4) {
        // 0x0025B930: nop
    
            goto L_0025B95C;
    }
    // 0x0025B930: nop

    // 0x0025B934: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0025B938: lhu         $v0, 0x98($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X98);
    // 0x0025B93C: andi        $v0, $v0, 0x7C00
    ctx->r2 = ctx->r2 & 0X7C00;
    // 0x0025B940: beq         $v0, $zero, L_0025B95C
    if (ctx->r2 == 0) {
        // 0x0025B944: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B95C;
    }
    // 0x0025B944: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0025B948:
    // 0x0025B948: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B94C: jal         0x00243414
    // 0x0025B950: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    func_00243414(rdram, ctx);
        goto after_11;
    // 0x0025B950: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    after_11:
    // 0x0025B954: j           L_0025BA4C
    // 0x0025B958: nop

        goto L_0025BA4C;
    // 0x0025B958: nop

L_0025B95C:
    // 0x0025B95C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025B960: beq         $v0, $zero, L_0025B990
    if (ctx->r2 == 0) {
        // 0x0025B964: nop
    
            goto L_0025B990;
    }
    // 0x0025B964: nop

    // 0x0025B968: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x0025B96C: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x0025B970: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025B974: beq         $v0, $zero, L_0025B990
    if (ctx->r2 == 0) {
        // 0x0025B978: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B990;
    }
    // 0x0025B978: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B97C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B980: jal         0x00243414
    // 0x0025B984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_12;
    // 0x0025B984: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x0025B988: j           L_0025B9D4
    // 0x0025B98C: nop

        goto L_0025B9D4;
    // 0x0025B98C: nop

L_0025B990:
    // 0x0025B990: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025B994: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x0025B998: beq         $v1, $v0, L_0025B9D4
    if (ctx->r3 == ctx->r2) {
        // 0x0025B99C: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B99C: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x0025B9A0: lw          $v0, 0xC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC);
    // 0x0025B9A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B9A8: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B9AC: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_0025B9D4;
    }
    // 0x0025B9AC: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025B9B0: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0025B9B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0025B9B8: beq         $v0, $zero, L_0025B9D4
    if (ctx->r2 == 0) {
        // 0x0025B9BC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0025B9D4;
    }
    // 0x0025B9BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0025B9C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025B9C4: jal         0x00243414
    // 0x0025B9C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    func_00243414(rdram, ctx);
        goto after_13;
    // 0x0025B9C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_13:
    // 0x0025B9CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0025B9D0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_0025B9D4:
    // 0x0025B9D4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0025B9D8: beq         $t0, $zero, L_0025BA4C
    if (ctx->r8 == 0) {
        // 0x0025B9DC: nop
    
            goto L_0025BA4C;
    }
    // 0x0025B9DC: nop

    // 0x0025B9E0: beq         $s4, $zero, L_0025BA4C
    if (ctx->r20 == 0) {
        // 0x0025B9E4: nop
    
            goto L_0025BA4C;
    }
    // 0x0025B9E4: nop

    // 0x0025B9E8: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0025B9EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0025B9F0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025B9F4: nop

    // 0x0025B9F8: bc1f        L_0025BA4C
    if (!c1cs) {
        // 0x0025B9FC: addiu       $a1, $s3, 0x4
        ctx->r5 = ADD32(ctx->r19, 0X4);
            goto L_0025BA4C;
    }
    // 0x0025B9FC: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    // 0x0025BA00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0025BA04: jal         0x0020EF2C
    // 0x0025BA08: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_14;
    // 0x0025BA08: addiu       $a2, $s4, 0x4
    ctx->r6 = ADD32(ctx->r20, 0X4);
    after_14:
    // 0x0025BA0C: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0025BA10: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0025BA14: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x0025BA18: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0025BA1C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0025BA20: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0025BA24: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0025BA28: jal         0x00298470
    // 0x0025BA2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_15;
    // 0x0025BA2C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_15:
    // 0x0025BA30: lwc1        $f1, 0x8($s5)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r21, 0X8);
    // 0x0025BA34: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025BA38: nop

    // 0x0025BA3C: bc1f        L_0025BA4C
    if (!c1cs) {
        // 0x0025BA40: nop
    
            goto L_0025BA4C;
    }
    // 0x0025BA40: nop

    // 0x0025BA44: jal         0x0020EAA0
    // 0x0025BA48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_0020EAA0(rdram, ctx);
        goto after_16;
    // 0x0025BA48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_16:
L_0025BA4C:
    // 0x0025BA4C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0025BA50: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0025BA54: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0025BA58: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0025BA5C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0025BA60: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0025BA64: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0025BA68: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0025BA6C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0025BA70: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0025BA74: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x0025BA78: jr          $ra
    // 0x0025BA7C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0025BA7C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void entry_00260FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260FC0: lwc1        $f12, 0x110($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X110);
    // 0x00260FC4: lui         $a2, 0x3E32
    ctx->r6 = S32(0X3E32 << 16);
    // 0x00260FC8: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
    // 0x00260FCC: jal         0x00211774
    // 0x00260FD0: nop

    func_00211774(rdram, ctx);
        goto after_0;
    // 0x00260FD0: nop

    after_0:
    // 0x00260FD4: swc1        $f0, 0x110($s1)
    MEM_W(0X110, ctx->r17) = ctx->f0.u32l;
    // 0x00260FD8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00260FDC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00260FE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00260FE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00260FE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00260FEC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00260FF0: jr          $ra
    // 0x00260FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00260FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0026138C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026138C: nop

    // 0x00261390: bc1t        L_002613B4
    if (c1cs) {
        // 0x00261394: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002613B4;
    }
    // 0x00261394: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00261398: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x0026139C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002613A0: lwc1        $f0, 0x7A6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A6C);
    // 0x002613A4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002613A8: nop

    // 0x002613AC: bc1f        L_002613C0
    if (!c1cs) {
        // 0x002613B0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002613C0;
    }
    // 0x002613B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002613B4:
    // 0x002613B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002613B8: jal         0x00243414
    // 0x002613BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002613BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_002613C0:
    // 0x002613C0: lw          $ra, 0xEC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XEC);
    // 0x002613C4: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x002613C8: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x002613CC: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x002613D0: jr          $ra
    // 0x002613D4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x002613D4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void entry_00262314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262314: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262318: lwc1        $f0, 0x7B74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7B74);
    // 0x0026231C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00262320: nop

    // 0x00262324: bc1tl       L_00262344
    if (c1cs) {
        // 0x00262328: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_00262344;
    }
    goto skip_0;
    // 0x00262328: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    skip_0:
    // 0x0026232C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00262330: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00262334: nop

    // 0x00262338: bc1fl       L_00262348
    if (!c1cs) {
        // 0x0026233C: swc1        $f20, 0x64($s3)
        MEM_W(0X64, ctx->r19) = ctx->f20.u32l;
            goto L_00262348;
    }
    goto skip_1;
    // 0x0026233C: swc1        $f20, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->f20.u32l;
    skip_1:
    // 0x00262340: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_00262344:
    // 0x00262344: swc1        $f20, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->f20.u32l;
L_00262348:
    // 0x00262348: lw          $v1, 0x9C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X9C);
    // 0x0026234C: lw          $t0, 0xA0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XA0);
    // 0x00262350: lw          $t1, 0xA4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XA4);
    // 0x00262354: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00262358: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0026235C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00262360: lwc1        $f12, 0x60($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00262364: jal         0x002982F0
    // 0x00262368: addiu       $s0, $s3, 0x9C
    ctx->r16 = ADD32(ctx->r19, 0X9C);
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00262368: addiu       $s0, $s3, 0x9C
    ctx->r16 = ADD32(ctx->r19, 0X9C);
    after_0:
    // 0x0026236C: lwc1        $f1, 0x5C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X5C);
    // 0x00262370: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00262374: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00262378: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026237C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00262380: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x00262384: lwc1        $f1, 0x58($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X58);
    // 0x00262388: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0026238C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00262390: lwc1        $f12, 0x60($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X60);
    // 0x00262394: jal         0x002974C0
    // 0x00262398: nop

    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00262398: nop

    after_1:
    // 0x0026239C: lwc1        $f1, 0x5C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X5C);
    // 0x002623A0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002623A4: addiu       $a0, $s3, 0x54
    ctx->r4 = ADD32(ctx->r19, 0X54);
    // 0x002623A8: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x002623AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002623B0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002623B4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x002623B8: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x002623BC: jal         0x0020EF8C
    // 0x002623C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020EF8C(rdram, ctx);
        goto after_2;
    // 0x002623C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x002623C4: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x002623C8: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x002623CC: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x002623D0: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x002623D4: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x002623D8: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x002623DC: ldc1        $f21, 0xA0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XA0);
    // 0x002623E0: ldc1        $f20, 0x98($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X98);
    // 0x002623E4: jr          $ra
    // 0x002623E8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x002623E8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void entry_00262D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262D6C: jr          $ra
    // 0x00262D70: nop

    return;
    // 0x00262D70: nop

;}
RECOMP_FUNC void entry_0026514C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026514C: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x00265150: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00265154: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00265158: nop

    // 0x0026515C: bc1f        L_00265198
    if (!c1cs) {
        // 0x00265160: nop
    
            goto L_00265198;
    }
    // 0x00265160: nop

    // 0x00265164: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00265168: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0026516C: nop

    // 0x00265170: bc1f        L_00265198
    if (!c1cs) {
        // 0x00265174: nop
    
            goto L_00265198;
    }
    // 0x00265174: nop

    // 0x00265178: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x0026517C: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00265180: nop

    // 0x00265184: bc1f        L_00265198
    if (!c1cs) {
        // 0x00265188: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00265198;
    }
    // 0x00265188: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026518C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00265190: jal         0x00243414
    // 0x00265194: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00265194: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_00265198:
    // 0x00265198: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x0026519C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x002651A0: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x002651A4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x002651A8: lwc1        $f12, 0x20($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X20);
    // 0x002651AC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x002651B0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002651B4: jal         0x00298470
    // 0x002651B8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x002651B8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_1:
    // 0x002651BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002651C0: lwc1        $f1, 0x7C84($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7C84);
    // 0x002651C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002651C8: lwc1        $f1, 0x110($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X110);
    // 0x002651CC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002651D0: swc1        $f1, 0x110($s2)
    MEM_W(0X110, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x002651D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002651D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002651DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002651E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002651E4: ldc1        $f23, 0x38($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X38);
    // 0x002651E8: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x002651EC: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x002651F0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x002651F4: jr          $ra
    // 0x002651F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002651F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00265200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265200: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00265204: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00265208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026520C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00265210: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00265214: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00265218: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0026521C: addiu       $s2, $v0, 0x14
    ctx->r18 = ADD32(ctx->r2, 0X14);
    turok2_patch_fix_particle(rdram, ctx);
    // 0x00265220: lb          $v1, 0x8($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X8);
    // 0x00265224: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00265228: beq         $v1, $v0, L_00265348
    if (ctx->r3 == ctx->r2) {
        // 0x0026522C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00265348;
    }
    // 0x0026522C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00265230: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00265234: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00265238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0026523C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00265240: lwc1        $f0, 0x7C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C90);
    // 0x00265244: lh          $v0, 0xBA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XBA);
    // 0x00265248: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026524C: beq         $v0, $v1, L_002652F8
    if (ctx->r2 == ctx->r3) {
        // 0x00265250: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002652F8;
    }
    // 0x00265250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265254: lbu         $v0, 0xC6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC6);
    // 0x00265258: lh          $v1, 0xDC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDC);
    // 0x0026525C: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x00265260: sra         $v0, $a0, 24
    ctx->r2 = S32(SIGNED(ctx->r4) >> 24);
    // 0x00265264: bnel        $v1, $v0, L_002652F8
    if (ctx->r3 != ctx->r2) {
        // 0x00265268: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002652F8;
    }
    goto skip_0;
    // 0x00265268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026526C: lh          $v1, 0xDE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDE);
    // 0x00265270: bne         $v1, $v0, L_002652F8
    if (ctx->r3 != ctx->r2) {
        // 0x00265274: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002652F8;
    }
    // 0x00265274: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00265278: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0026527C: beq         $v0, $zero, L_00265294
    if (ctx->r2 == 0) {
        // 0x00265280: nop
    
            goto L_00265294;
    }
    // 0x00265280: nop

    // 0x00265284: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265288: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0026528C: beq         $v0, $zero, L_002652F8
    if (ctx->r2 == 0) {
        // 0x00265290: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002652F8;
    }
    // 0x00265290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00265294:
    // 0x00265294: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x00265298: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0026529C: beq         $v0, $zero, L_002652D0
    if (ctx->r2 == 0) {
        // 0x002652A0: nop
    
            goto L_002652D0;
    }
    // 0x002652A0: nop

    // 0x002652A4: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002652A8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x002652AC: beq         $v0, $zero, L_002652D0
    if (ctx->r2 == 0) {
        // 0x002652B0: nop
    
            goto L_002652D0;
    }
    // 0x002652B0: nop

    // 0x002652B4: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x002652B8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002652BC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002652C0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002652C4: lwc1        $f1, 0x108($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X108);
    // 0x002652C8: j           L_002652E8
    // 0x002652CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002652E8;
    // 0x002652CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002652D0:
    // 0x002652D0: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x002652D4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002652D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002652DC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002652E0: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x002652E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002652E8:
    // 0x002652E8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002652EC: nop

    // 0x002652F0: bc1fl       L_002652F8
    if (!c1cs) {
        // 0x002652F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002652F8;
    }
    goto skip_1;
    // 0x002652F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
L_002652F8:
    // 0x002652F8: beq         $v0, $zero, L_00265348
    if (ctx->r2 == 0) {
        // 0x002652FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00265348;
    }
    // 0x002652FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00265300: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265304: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00265308: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x0026530C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00265310: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00265314: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00265318: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0026531C: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x00265320: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00265324: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00265328: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x0026532C: jal         0x00237EE4
    // 0x00265330: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00237EE4(rdram, ctx);
        goto after_0;
    // 0x00265330: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x00265334: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265338: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026533C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00265340: jal         0x00220260
    // 0x00265344: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x00265344: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_00265348:
    // 0x00265348: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0026534C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00265350: beq         $v0, $zero, L_002653A8
    if (ctx->r2 == 0) {
        // 0x00265354: nop
    
            goto L_002653A8;
    }
    // 0x00265354: nop

    // 0x00265358: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0026535C: beq         $v0, $zero, L_002653A8
    if (ctx->r2 == 0) {
        // 0x00265360: nop
    
            goto L_002653A8;
    }
    // 0x00265360: nop

    // 0x00265364: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x00265368: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0026536C: c.eq.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl == ctx->f2.fl;
    // 0x00265370: nop

    // 0x00265374: bc1t        L_00265390
    if (c1cs) {
        // 0x00265378: nop
    
            goto L_00265390;
    }
    // 0x00265378: nop

    // 0x0026537C: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00265380: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00265384: nop

    // 0x00265388: bc1f        L_002653A8
    if (!c1cs) {
        // 0x0026538C: nop
    
            goto L_002653A8;
    }
    // 0x0026538C: nop

L_00265390:
    // 0x00265390: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x00265394: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x00265398: nop

    // 0x0026539C: bc1tl       L_002653A4
    if (c1cs) {
        // 0x002653A0: swc1        $f2, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->f2.u32l;
            goto L_002653A4;
    }
    goto skip_2;
    // 0x002653A0: swc1        $f2, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f2.u32l;
    skip_2:
L_002653A4:
    // 0x002653A4: swc1        $f1, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_002653A8:
    // 0x002653A8: lwc1        $f1, 0x64($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X64);
    // 0x002653AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002653B0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002653B4: nop

    // 0x002653B8: bc1t        L_002653E0
    if (c1cs) {
        // 0x002653BC: nop
    
            goto L_002653E0;
    }
    // 0x002653BC: nop

    // 0x002653C0: lwc1        $f0, 0x40($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X40);
    // 0x002653C4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002653C8: nop

    // 0x002653CC: bc1f        L_002653E0
    if (!c1cs) {
        // 0x002653D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002653E0;
    }
    // 0x002653D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002653D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002653D8: jal         0x00243414
    // 0x002653DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x002653DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_002653E0:
    // 0x002653E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002653E4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002653E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002653EC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002653F0: jr          $ra
    // 0x002653F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002653F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00265A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265A34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00265A38: addiu       $v0, $v0, 0x2330
    ctx->r2 = ADD32(ctx->r2, 0X2330);
    // 0x00265A3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00265A40: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x00265A44: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00265A48: addiu       $v0, $v0, 0x5AF8
    ctx->r2 = ADD32(ctx->r2, 0X5AF8);
    // 0x00265A4C: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x00265A50: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00265A54: addiu       $v0, $v0, 0x5EEC
    ctx->r2 = ADD32(ctx->r2, 0X5EEC);
    // 0x00265A58: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x00265A5C: lhu         $v1, 0xB8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB8);
    // 0x00265A60: addiu       $v0, $zero, 0x64D
    ctx->r2 = ADD32(0, 0X64D);
    // 0x00265A64: bne         $v1, $v0, L_00265A74
    if (ctx->r3 != ctx->r2) {
        // 0x00265A68: nop
    
            goto L_00265A74;
    }
    // 0x00265A68: nop

    // 0x00265A6C: jal         0x004088B0
    // 0x00265A70: nop

    func_004088B0(rdram, ctx);
        goto after_0;
    // 0x00265A70: nop

    after_0:
L_00265A74:
    // 0x00265A74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265A78: jr          $ra
    // 0x00265A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00294D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00294D60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00294D64: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00294D68: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00294D6C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00294D70: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00294D74: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00294D78: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x00294D7C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x00294D80: ori         $v1, $v1, 0x6C0
    ctx->r3 = ctx->r3 | 0X6C0;
    // 0x00294D84: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x00294D88: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x00294D8C: ori         $a1, $a1, 0x800
    ctx->r5 = ctx->r5 | 0X800;
    // 0x00294D90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00294D94: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00294D98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00294D9C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00294DA0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00294DA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00294DA8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x00294DAC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00294DB0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00294DB4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x00294DB8: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x00294DBC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00294DC0: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00294DC4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00294DC8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00294DCC: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00294DD0: blez        $v0, L_00294E14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00294DD4: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_00294E14;
    }
    // 0x00294DD4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x00294DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00294DDC:
    // 0x00294DDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00294DE0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x00294DE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00294DE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x00294DEC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00294DF0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00294DF4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00294DF8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00294DFC: jalr        $v0
    // 0x00294E00: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_0;
    // 0x00294E00: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_0:
    // 0x00294E04: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x00294E08: slt         $v1, $s1, $v1
    ctx->r3 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00294E0C: bne         $v1, $zero, L_00294DDC
    if (ctx->r3 != 0) {
        // 0x00294E10: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_00294DDC;
    }
    // 0x00294E10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_00294E14:
    // 0x00294E14: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00294E18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00294E1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00294E20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00294E24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00294E28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00294E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00294E30: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x00294E34: jr          $ra
    // 0x00294E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00294E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_00271784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271784: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00271788: jr          $ra
    // 0x0027178C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    return;
    // 0x0027178C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
;}
RECOMP_FUNC void entry_00272D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00272D58: jr          $ra
    // 0x00272D5C: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x00272D5C: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void entry_00274008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00274008: nop

    // 0x0027400C: lw          $v0, 0xB0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB0);
    // 0x00274010: lw          $a1, 0x2B98($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2B98);
    // 0x00274014: jal         0x00271E20
    // 0x00274018: addiu       $a0, $s2, 0x44
    ctx->r4 = ADD32(ctx->r18, 0X44);
    func_00271E20(rdram, ctx);
        goto after_0;
    // 0x00274018: addiu       $a0, $s2, 0x44
    ctx->r4 = ADD32(ctx->r18, 0X44);
    after_0:
    // 0x0027401C: sh          $v0, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r2;
    // 0x00274020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00274024: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00274028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0027402C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00274030: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00274034: jr          $ra
    // 0x00274038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00274038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_002893B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002893B0: jal         0x00288D3C
    // 0x002893B4: nop

    func_00288D3C(rdram, ctx);
        goto after_0;
    // 0x002893B4: nop

    after_0:
    // 0x002893B8: beq         $v0, $zero, L_002893C8
    if (ctx->r2 == 0) {
        // 0x002893BC: nop
    
            goto L_002893C8;
    }
    // 0x002893BC: nop

    // 0x002893C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002893C4: sw          $zero, 0x6D6C($at)
    MEM_W(0X6D6C, ctx->r1) = 0;
L_002893C8:
    // 0x002893C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002893CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002893D0: jr          $ra
    // 0x002893D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002893D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00289428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289428: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0028942C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00289430: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00289434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00289438: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028943C: addiu       $a2, $a2, 0x3644
    ctx->r6 = ADD32(ctx->r6, 0X3644);
    // 0x00289440: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00289444: lwc1        $f0, -0x61FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X61FC);
    // 0x00289448: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028944C: lwc1        $f1, -0x61F8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X61F8);
    // 0x00289450: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x00289454: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00289458: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0028945C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x00289460: jal         0x00286E14
    // 0x00289464: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_00286E14(rdram, ctx);
        goto after_0;
    // 0x00289464: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x00289468: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0028946C: jr          $ra
    // 0x00289470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00289470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0028B5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028B5A4: bltzl       $v1, L_0028B5AC
    if (SIGNED(ctx->r3) < 0) {
        // 0x0028B5A8: addiu       $v1, $v1, 0x7
        ctx->r3 = ADD32(ctx->r3, 0X7);
            goto L_0028B5AC;
    }
    goto skip_0;
    // 0x0028B5A8: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    skip_0:
L_0028B5AC:
    // 0x0028B5AC: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x0028B5B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028B5B4: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x0028B5B8: bne         $v0, $zero, L_0028B60C
    if (ctx->r2 != 0) {
        // 0x0028B5BC: nop
    
            goto L_0028B60C;
    }
    // 0x0028B5BC: nop

    // 0x0028B5C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028B5C4: lw          $a0, 0x2034($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2034);
    // 0x0028B5C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0028B5CC: lw          $v1, 0x7494($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7494);
    // 0x0028B5D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028B5D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B5D8: sw          $v0, 0x7490($at)
    MEM_W(0X7490, ctx->r1) = ctx->r2;
    // 0x0028B5DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0028B5E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B5E4: sw          $v1, 0x7494($at)
    MEM_W(0X7494, ctx->r1) = ctx->r3;
    // 0x0028B5E8: bltzl       $a0, L_0028B5F0
    if (SIGNED(ctx->r4) < 0) {
        // 0x0028B5EC: addiu       $a0, $a0, 0xF
        ctx->r4 = ADD32(ctx->r4, 0XF);
            goto L_0028B5F0;
    }
    goto skip_1;
    // 0x0028B5EC: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
    skip_1:
L_0028B5F0:
    // 0x0028B5F0: sra         $v0, $a0, 4
    ctx->r2 = S32(SIGNED(ctx->r4) >> 4);
    // 0x0028B5F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0028B5F8: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0028B5FC: bne         $v0, $zero, L_0028B60C
    if (ctx->r2 != 0) {
        // 0x0028B600: nop
    
            goto L_0028B60C;
    }
    // 0x0028B600: nop

    // 0x0028B604: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028B608: sw          $zero, 0x7494($at)
    MEM_W(0X7494, ctx->r1) = 0;
L_0028B60C:
    // 0x0028B60C: jr          $ra
    // 0x0028B610: nop

    return;
    // 0x0028B610: nop

;}
RECOMP_FUNC void entry_00291B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291B00: bne         $v0, $v1, L_00291BDC
    if (ctx->r2 != ctx->r3) {
        // 0x00291B04: nop
    
            goto L_00291BDC;
    }
    // 0x00291B04: nop

    // 0x00291B08: beq         $s0, $zero, L_00291BDC
    if (ctx->r16 == 0) {
        // 0x00291B0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00291BDC;
    }
    // 0x00291B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00291B10: jal         0x00293254
    // 0x00291B14: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_00293254(rdram, ctx);
        goto after_0;
    // 0x00291B14: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x00291B18: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x00291B1C: beq         $v0, $zero, L_00291BDC
    if (ctx->r2 == 0) {
        // 0x00291B20: nop
    
            goto L_00291BDC;
    }
    // 0x00291B20: nop

    // 0x00291B24: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x00291B28: beq         $v0, $zero, L_00291B74
    if (ctx->r2 == 0) {
        // 0x00291B2C: nop
    
            goto L_00291B74;
    }
    // 0x00291B2C: nop

    // 0x00291B30: jal         0x00293028
    // 0x00291B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293028(rdram, ctx);
        goto after_1;
    // 0x00291B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00291B38: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x00291B3C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x00291B40: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    // 0x00291B44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00291B48: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00291B4C: bne         $v0, $zero, L_00291B74
    if (ctx->r2 != 0) {
        // 0x00291B50: nop
    
            goto L_00291B74;
    }
    // 0x00291B50: nop

    // 0x00291B54: lw          $a1, 0x7C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X7C);
    // 0x00291B58: jal         0x0029321C
    // 0x00291B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029321C(rdram, ctx);
        goto after_2;
    // 0x00291B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00291B60: lw          $v1, 0x84($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X84);
    // 0x00291B64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00291B68: beq         $v1, $v0, L_00291B74
    if (ctx->r3 == ctx->r2) {
        // 0x00291B6C: addu        $v0, $v1, $v0
        ctx->r2 = ADD32(ctx->r3, ctx->r2);
            goto L_00291B74;
    }
    // 0x00291B6C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00291B70: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
L_00291B74:
    // 0x00291B74: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x00291B78: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x00291B7C: lw          $a2, 0x24($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X24);
    // 0x00291B80: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00291B84: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x00291B88: mflo        $a2
    ctx->r6 = lo;
    // 0x00291B8C: jal         0x00291034
    // 0x00291B90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_00291034(rdram, ctx);
        goto after_3;
    // 0x00291B90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x00291B94: j           L_00291BDC
    // 0x00291B98: nop

        goto L_00291BDC;
    // 0x00291B98: nop

    // 0x00291B9C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00291BA0: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x00291BA4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x00291BA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00291BAC: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x00291BB0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00291BB4: jal         0x00291034
    // 0x00291BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_4;
    // 0x00291BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x00291BBC: j           L_00291BDC
    // 0x00291BC0: nop

        goto L_00291BDC;
    // 0x00291BC0: nop

    // 0x00291BC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291BC8: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00291BCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291BD0: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00291BD4: jal         0x0029B020
    // 0x00291BD8: addiu       $a2, $zero, 0x19C
    ctx->r6 = ADD32(0, 0X19C);
    func_0029B020(rdram, ctx);
        goto after_5;
    // 0x00291BD8: addiu       $a2, $zero, 0x19C
    ctx->r6 = ADD32(0, 0X19C);
    after_5:
L_00291BDC:
    // 0x00291BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00291BE0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00291BE4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00291BE8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00291BEC: jr          $ra
    // 0x00291BF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00291BF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_00291BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00291BB0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00291BB4: jal         0x00291034
    // 0x00291BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00291BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00291BBC: j           L_00291BDC
    // 0x00291BC0: nop

        goto L_00291BDC;
    // 0x00291BC0: nop

    // 0x00291BC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00291BC8: addiu       $a0, $a0, -0x5C80
    ctx->r4 = ADD32(ctx->r4, -0X5C80);
    // 0x00291BCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00291BD0: addiu       $a1, $a1, -0x5C7C
    ctx->r5 = ADD32(ctx->r5, -0X5C7C);
    // 0x00291BD4: jal         0x0029B020
    // 0x00291BD8: addiu       $a2, $zero, 0x19C
    ctx->r6 = ADD32(0, 0X19C);
    func_0029B020(rdram, ctx);
        goto after_1;
    // 0x00291BD8: addiu       $a2, $zero, 0x19C
    ctx->r6 = ADD32(0, 0X19C);
    after_1:
L_00291BDC:
    // 0x00291BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00291BE0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00291BE4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00291BE8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00291BEC: jr          $ra
    // 0x00291BF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00291BF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_0029ECD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029ECD0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029ECD4: j           L_0029ED08
    // 0x0029ECD8: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
        goto L_0029ED08;
    // 0x0029ECD8: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x0029ECDC: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x0029ECE0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0029ECE4: beq         $v0, $zero, L_0029ECF8
    if (ctx->r2 == 0) {
        // 0x0029ECE8: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_0029ECF8;
    }
    // 0x0029ECE8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0029ECEC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029ECF0: j           L_0029ED04
    // 0x0029ECF4: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
        goto L_0029ED04;
    // 0x0029ECF4: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
L_0029ECF8:
    // 0x0029ECF8: beq         $v0, $zero, L_0029ED14
    if (ctx->r2 == 0) {
        // 0x0029ECFC: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_0029ED14;
    }
    // 0x0029ECFC: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x0029ED00: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_0029ED04:
    // 0x0029ED04: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_0029ED08:
    // 0x0029ED08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029ED0C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x0029ED10: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0029ED14:
    // 0x0029ED14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029ED18: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0029ED1C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x0029ED20: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0029ED24: jal         0x0029F180
    // 0x0029ED28: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    func_0029F180(rdram, ctx);
        goto after_0;
    // 0x0029ED28: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_0:
    // 0x0029ED2C: j           L_0029EE90
    // 0x0029ED30: nop

        goto L_0029EE90;
    // 0x0029ED30: nop

    // 0x0029ED34: lbu         $v1, 0x34($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34);
    // 0x0029ED38: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0029ED3C: bne         $v1, $v0, L_0029ED6C
    if (ctx->r3 != ctx->r2) {
        // 0x0029ED40: addiu       $v0, $zero, 0x6C
        ctx->r2 = ADD32(0, 0X6C);
            goto L_0029ED6C;
    }
    // 0x0029ED40: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x0029ED44: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029ED48: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029ED4C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029ED50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029ED54: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x0029ED58: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029ED5C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0029ED60: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x0029ED64: j           L_0029EE90
    // 0x0029ED68: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_0029EE90;
    // 0x0029ED68: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_0029ED6C:
    // 0x0029ED6C: beq         $v1, $v0, L_0029EDAC
    if (ctx->r3 == ctx->r2) {
        // 0x0029ED70: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_0029EDAC;
    }
    // 0x0029ED70: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029ED74: bne         $v1, $v0, L_0029EDAC
    if (ctx->r3 != ctx->r2) {
        // 0x0029ED78: addiu       $a0, $zero, -0x4
        ctx->r4 = ADD32(0, -0X4);
            goto L_0029EDAC;
    }
    // 0x0029ED78: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x0029ED7C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x0029ED80: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x0029ED84: and         $a1, $a1, $a0
    ctx->r5 = ctx->r5 & ctx->r4;
    // 0x0029ED88: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x0029ED8C: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x0029ED90: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x0029ED94: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x0029ED98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029ED9C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029EDA0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0029EDA4: j           L_0029EE90
    // 0x0029EDA8: nop

        goto L_0029EE90;
    // 0x0029EDA8: nop

L_0029EDAC:
    // 0x0029EDAC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029EDB0: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029EDB4: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029EDB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029EDBC: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x0029EDC0: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029EDC4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0029EDC8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x0029EDCC: j           L_0029EE90
    // 0x0029EDD0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_0029EE90;
    // 0x0029EDD0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029EDD4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x0029EDD8: addiu       $a2, $zero, -0x4
    ctx->r6 = ADD32(0, -0X4);
    // 0x0029EDDC: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x0029EDE0: and         $a1, $a1, $a2
    ctx->r5 = ctx->r5 & ctx->r6;
    // 0x0029EDE4: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x0029EDE8: sw          $a2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r6;
    // 0x0029EDEC: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x0029EDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0029EDF4: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x0029EDF8: sra         $v0, $a2, 31
    ctx->r2 = S32(SIGNED(ctx->r6) >> 31);
    // 0x0029EDFC: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x0029EE00: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x0029EE04: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029EE08: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0029EE0C: addu        $a2, $a3, $a2
    ctx->r6 = ADD32(ctx->r7, ctx->r6);
    // 0x0029EE10: jal         0x0029EEA0
    // 0x0029EE14: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    func_0029EEA0(rdram, ctx);
        goto after_1;
    // 0x0029EE14: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    after_1:
    // 0x0029EE18: j           L_0029EE90
    // 0x0029EE1C: nop

        goto L_0029EE90;
    // 0x0029EE1C: nop

    // 0x0029EE20: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029EE24: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029EE28: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029EE2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029EE30: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x0029EE34: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029EE38: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0029EE3C: jal         0x0029E4C0
    // 0x0029EE40: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    func_0029E4C0(rdram, ctx);
        goto after_2;
    // 0x0029EE40: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    after_2:
    // 0x0029EE44: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x0029EE48: bltz        $v1, L_0029EE90
    if (SIGNED(ctx->r3) < 0) {
        // 0x0029EE4C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_0029EE90;
    }
    // 0x0029EE4C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0029EE50: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029EE54: bnel        $v0, $zero, L_0029EE90
    if (ctx->r2 != 0) {
        // 0x0029EE58: sw          $v1, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r3;
            goto L_0029EE90;
    }
    goto skip_0;
    // 0x0029EE58: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    skip_0:
    // 0x0029EE5C: j           L_0029EE90
    // 0x0029EE60: nop

        goto L_0029EE90;
    // 0x0029EE60: nop

    // 0x0029EE64: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029EE68: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x0029EE6C: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x0029EE70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029EE74: j           L_0029EE8C
    // 0x0029EE78: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0029EE8C;
    // 0x0029EE78: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x0029EE7C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029EE80: addu        $v1, $a3, $v0
    ctx->r3 = ADD32(ctx->r7, ctx->r2);
    // 0x0029EE84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029EE88: sb          $a2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r6;
L_0029EE8C:
    // 0x0029EE8C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0029EE90:
    // 0x0029EE90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029EE94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029EE98: jr          $ra
    // 0x0029EE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029EE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00403BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403BF0: bne         $v1, $v0, L_00403C08
    if (ctx->r3 != ctx->r2) {
        // 0x00403BF4: nop
    
            goto L_00403C08;
    }
    // 0x00403BF4: nop

    // 0x00403BF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00403BFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00403C00: jal         0x0021034C
    // 0x00403C04: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_0;
    // 0x00403C04: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
L_00403C08:
    // 0x00403C08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00403C0C: jr          $ra
    // 0x00403C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
