#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00421DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421DF4: jr          $ra
    // 0x00421DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00421DF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00421F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421F6C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00421F70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00421F74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421F78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421F7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421F80: jr          $ra
    // 0x00421F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0042203C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042203C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00422040: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422044: addiu       $v0, $v0, 0x4A9C
    ctx->r2 = ADD32(ctx->r2, 0X4A9C);
    // 0x00422048: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0042204C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00422050: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00422054: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00422058: jr          $ra
    // 0x0042205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00422098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422098: mfc1        $s3, $f2
    ctx->r19 = (int32_t)ctx->f2.u32l;
    // 0x0042209C: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x004220A0: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x004220A4: jal         0x004160F0
    // 0x004220A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x004220A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x004220AC: addiu       $v0, $v0, -0x9
    ctx->r2 = ADD32(ctx->r2, -0X9);
    // 0x004220B0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x004220B4: addiu       $a1, $a1, 0x1418
    ctx->r5 = ADD32(ctx->r5, 0X1418);
    // 0x004220B8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004220BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x004220C0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x004220C4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x004220C8: jal         0x0029E3E0
    // 0x004220CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x004220CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x004220D0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x004220D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004220D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004220DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004220E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004220E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004220E8: jr          $ra
    // 0x004220EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004220EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00422170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422170: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00422174: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00422178: jal         0x00416644
    // 0x0042217C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042217C: nop

    after_0:
    // 0x00422180: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00422184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00422188: jr          $ra
    // 0x0042218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0042222C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042222C: beq         $v0, $zero, L_00422244
    if (ctx->r2 == 0) {
        // 0x00422230: nop
    
            goto L_00422244;
    }
    // 0x00422230: nop

    // 0x00422234: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422238: addiu       $v0, $v0, 0x4AF8
    ctx->r2 = ADD32(ctx->r2, 0X4AF8);
    // 0x0042223C: j           L_00422250
    // 0x00422240: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422250;
    // 0x00422240: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422244:
    // 0x00422244: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422248: addiu       $v0, $v0, 0x4AEC
    ctx->r2 = ADD32(ctx->r2, 0X4AEC);
    // 0x0042224C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422250:
    // 0x00422250: jr          $ra
    // 0x00422254: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422254: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422320: nop

    // 0x00422324: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422328: addiu       $v0, $v0, 0x4B1C
    ctx->r2 = ADD32(ctx->r2, 0X4B1C);
    // 0x0042232C: j           L_00422428
    // 0x00422330: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422428;
    // 0x00422330: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422334: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422338: addiu       $v0, $v0, 0x4B48
    ctx->r2 = ADD32(ctx->r2, 0X4B48);
    // 0x0042233C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422340: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00422344: lb          $v1, 0x950($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X950);
    // 0x00422348: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x0042234C: beq         $v0, $zero, L_00422368
    if (ctx->r2 == 0) {
        // 0x00422350: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422368;
    }
    // 0x00422350: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422358: addu        $at, $at, $v0
    gpr jr_addend_00422360 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042235C: lw          $v0, 0x1488($at)
    ctx->r2 = ADD32(ctx->r1, 0X1488);
    // 0x00422360: jr          $v0
    // 0x00422364: nop

    switch (jr_addend_00422360 >> 2) {
        case 0: goto L_00422368; break;
        case 1: goto L_00422378; break;
        case 2: goto L_00422388; break;
        case 3: goto L_00422398; break;
        case 4: goto L_004223A8; break;
        case 5: goto L_004223B8; break;
        case 6: goto L_004223C8; break;
        case 7: goto L_004223D8; break;
        case 8: goto L_004223E8; break;
        case 9: goto L_004223F8; break;
        default: switch_error(__func__, 0x00422360, 0x800C1488);
    }
    // 0x00422364: nop

L_00422368:
    // 0x00422368: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042236C: addiu       $v1, $v1, 0x5340
    ctx->r3 = ADD32(ctx->r3, 0X5340);
    // 0x00422370: j           L_00422400
    // 0x00422374: nop

        goto L_00422400;
    // 0x00422374: nop

L_00422378:
    // 0x00422378: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042237C: addiu       $v1, $v1, 0x534C
    ctx->r3 = ADD32(ctx->r3, 0X534C);
    // 0x00422380: j           L_00422400
    // 0x00422384: nop

        goto L_00422400;
    // 0x00422384: nop

L_00422388:
    // 0x00422388: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042238C: addiu       $v1, $v1, 0x5358
    ctx->r3 = ADD32(ctx->r3, 0X5358);
    // 0x00422390: j           L_00422400
    // 0x00422394: nop

        goto L_00422400;
    // 0x00422394: nop

L_00422398:
    // 0x00422398: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042239C: addiu       $v1, $v1, 0x5364
    ctx->r3 = ADD32(ctx->r3, 0X5364);
    // 0x004223A0: j           L_00422400
    // 0x004223A4: nop

        goto L_00422400;
    // 0x004223A4: nop

L_004223A8:
    // 0x004223A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223AC: addiu       $v1, $v1, 0x5370
    ctx->r3 = ADD32(ctx->r3, 0X5370);
    // 0x004223B0: j           L_00422400
    // 0x004223B4: nop

        goto L_00422400;
    // 0x004223B4: nop

L_004223B8:
    // 0x004223B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223BC: addiu       $v1, $v1, 0x537C
    ctx->r3 = ADD32(ctx->r3, 0X537C);
    // 0x004223C0: j           L_00422400
    // 0x004223C4: nop

        goto L_00422400;
    // 0x004223C4: nop

L_004223C8:
    // 0x004223C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223CC: addiu       $v1, $v1, 0x5388
    ctx->r3 = ADD32(ctx->r3, 0X5388);
    // 0x004223D0: j           L_00422400
    // 0x004223D4: nop

        goto L_00422400;
    // 0x004223D4: nop

L_004223D8:
    // 0x004223D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223DC: addiu       $v1, $v1, 0x5394
    ctx->r3 = ADD32(ctx->r3, 0X5394);
    // 0x004223E0: j           L_00422400
    // 0x004223E4: nop

        goto L_00422400;
    // 0x004223E4: nop

L_004223E8:
    // 0x004223E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223EC: addiu       $v1, $v1, 0x53A0
    ctx->r3 = ADD32(ctx->r3, 0X53A0);
    // 0x004223F0: j           L_00422400
    // 0x004223F4: nop

        goto L_00422400;
    // 0x004223F4: nop

L_004223F8:
    // 0x004223F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223FC: addiu       $v1, $v1, 0x53AC
    ctx->r3 = ADD32(ctx->r3, 0X53AC);
L_00422400:
    // 0x00422400: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00422404: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00422408: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_0042240C:
    // 0x0042240C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00422410: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00422414: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00422418: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0042241C: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x00422420: bne         $v0, $zero, L_0042240C
    if (ctx->r2 != 0) {
        // 0x00422424: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0042240C;
    }
    // 0x00422424: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00422428:
    // 0x00422428: jr          $ra
    // 0x0042242C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0042242C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422348: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x0042234C: beq         $v0, $zero, L_00422368
    if (ctx->r2 == 0) {
        // 0x00422350: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422368;
    }
    // 0x00422350: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00422354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00422358: addu        $at, $at, $v0
    gpr jr_addend_00422360 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042235C: lw          $v0, 0x1488($at)
    ctx->r2 = ADD32(ctx->r1, 0X1488);
    // 0x00422360: jr          $v0
    // 0x00422364: nop

    switch (jr_addend_00422360 >> 2) {
        case 0: goto L_00422368; break;
        case 1: goto L_00422378; break;
        case 2: goto L_00422388; break;
        case 3: goto L_00422398; break;
        case 4: goto L_004223A8; break;
        case 5: goto L_004223B8; break;
        case 6: goto L_004223C8; break;
        case 7: goto L_004223D8; break;
        case 8: goto L_004223E8; break;
        case 9: goto L_004223F8; break;
        default: switch_error(__func__, 0x00422360, 0x800C1488);
    }
    // 0x00422364: nop

L_00422368:
    // 0x00422368: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042236C: addiu       $v1, $v1, 0x5340
    ctx->r3 = ADD32(ctx->r3, 0X5340);
    // 0x00422370: j           L_00422400
    // 0x00422374: nop

        goto L_00422400;
    // 0x00422374: nop

L_00422378:
    // 0x00422378: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042237C: addiu       $v1, $v1, 0x534C
    ctx->r3 = ADD32(ctx->r3, 0X534C);
    // 0x00422380: j           L_00422400
    // 0x00422384: nop

        goto L_00422400;
    // 0x00422384: nop

L_00422388:
    // 0x00422388: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042238C: addiu       $v1, $v1, 0x5358
    ctx->r3 = ADD32(ctx->r3, 0X5358);
    // 0x00422390: j           L_00422400
    // 0x00422394: nop

        goto L_00422400;
    // 0x00422394: nop

L_00422398:
    // 0x00422398: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042239C: addiu       $v1, $v1, 0x5364
    ctx->r3 = ADD32(ctx->r3, 0X5364);
    // 0x004223A0: j           L_00422400
    // 0x004223A4: nop

        goto L_00422400;
    // 0x004223A4: nop

L_004223A8:
    // 0x004223A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223AC: addiu       $v1, $v1, 0x5370
    ctx->r3 = ADD32(ctx->r3, 0X5370);
    // 0x004223B0: j           L_00422400
    // 0x004223B4: nop

        goto L_00422400;
    // 0x004223B4: nop

L_004223B8:
    // 0x004223B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223BC: addiu       $v1, $v1, 0x537C
    ctx->r3 = ADD32(ctx->r3, 0X537C);
    // 0x004223C0: j           L_00422400
    // 0x004223C4: nop

        goto L_00422400;
    // 0x004223C4: nop

L_004223C8:
    // 0x004223C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223CC: addiu       $v1, $v1, 0x5388
    ctx->r3 = ADD32(ctx->r3, 0X5388);
    // 0x004223D0: j           L_00422400
    // 0x004223D4: nop

        goto L_00422400;
    // 0x004223D4: nop

L_004223D8:
    // 0x004223D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223DC: addiu       $v1, $v1, 0x5394
    ctx->r3 = ADD32(ctx->r3, 0X5394);
    // 0x004223E0: j           L_00422400
    // 0x004223E4: nop

        goto L_00422400;
    // 0x004223E4: nop

L_004223E8:
    // 0x004223E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223EC: addiu       $v1, $v1, 0x53A0
    ctx->r3 = ADD32(ctx->r3, 0X53A0);
    // 0x004223F0: j           L_00422400
    // 0x004223F4: nop

        goto L_00422400;
    // 0x004223F4: nop

L_004223F8:
    // 0x004223F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x004223FC: addiu       $v1, $v1, 0x53AC
    ctx->r3 = ADD32(ctx->r3, 0X53AC);
L_00422400:
    // 0x00422400: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00422404: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00422408: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_0042240C:
    // 0x0042240C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00422410: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00422414: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00422418: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0042241C: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x00422420: bne         $v0, $zero, L_0042240C
    if (ctx->r2 != 0) {
        // 0x00422424: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0042240C;
    }
    // 0x00422424: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00422428: jr          $ra
    // 0x0042242C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0042242C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004224F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004224F4: addiu       $a1, $a1, 0x4958
    ctx->r5 = ADD32(ctx->r5, 0X4958);
    // 0x004224F8: j           L_004225D4
    // 0x004224FC: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x004224FC: nop

    // 0x00422500: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x00422504: beq         $v0, $zero, L_0042251C
    if (ctx->r2 == 0) {
        // 0x00422508: addiu       $v0, $v1, -0x320
        ctx->r2 = ADD32(ctx->r3, -0X320);
            goto L_0042251C;
    }
    // 0x00422508: addiu       $v0, $v1, -0x320
    ctx->r2 = ADD32(ctx->r3, -0X320);
    // 0x0042250C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422510: addiu       $a1, $a1, 0x4964
    ctx->r5 = ADD32(ctx->r5, 0X4964);
    // 0x00422514: j           L_004225D4
    // 0x00422518: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x00422518: nop

L_0042251C:
    // 0x0042251C: sltiu       $v0, $v0, 0x1F4
    ctx->r2 = ctx->r2 < 0X1F4 ? 1 : 0;
    // 0x00422520: beq         $v0, $zero, L_00422538
    if (ctx->r2 == 0) {
        // 0x00422524: addiu       $v0, $v1, -0x514
        ctx->r2 = ADD32(ctx->r3, -0X514);
            goto L_00422538;
    }
    // 0x00422524: addiu       $v0, $v1, -0x514
    ctx->r2 = ADD32(ctx->r3, -0X514);
    // 0x00422528: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042252C: addiu       $a1, $a1, 0x4970
    ctx->r5 = ADD32(ctx->r5, 0X4970);
    // 0x00422530: j           L_004225D4
    // 0x00422534: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x00422534: nop

L_00422538:
    // 0x00422538: sltiu       $v0, $v0, 0x2BC
    ctx->r2 = ctx->r2 < 0X2BC ? 1 : 0;
    // 0x0042253C: beq         $v0, $zero, L_00422554
    if (ctx->r2 == 0) {
        // 0x00422540: addiu       $v0, $v1, -0x7D0
        ctx->r2 = ADD32(ctx->r3, -0X7D0);
            goto L_00422554;
    }
    // 0x00422540: addiu       $v0, $v1, -0x7D0
    ctx->r2 = ADD32(ctx->r3, -0X7D0);
    // 0x00422544: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422548: addiu       $a1, $a1, 0x497C
    ctx->r5 = ADD32(ctx->r5, 0X497C);
    // 0x0042254C: j           L_004225D4
    // 0x00422550: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x00422550: nop

L_00422554:
    // 0x00422554: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x00422558: beq         $v0, $zero, L_00422570
    if (ctx->r2 == 0) {
        // 0x0042255C: addiu       $v0, $v1, -0xBB8
        ctx->r2 = ADD32(ctx->r3, -0XBB8);
            goto L_00422570;
    }
    // 0x0042255C: addiu       $v0, $v1, -0xBB8
    ctx->r2 = ADD32(ctx->r3, -0XBB8);
    // 0x00422560: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00422564: addiu       $a1, $a1, 0x4988
    ctx->r5 = ADD32(ctx->r5, 0X4988);
    // 0x00422568: j           L_004225D4
    // 0x0042256C: nop

    entry_004225D4(rdram, ctx);
    return;
    // 0x0042256C: nop

L_00422570:
    // 0x00422570: sltiu       $v0, $v0, 0x5DC
    ctx->r2 = ctx->r2 < 0X5DC ? 1 : 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x00422574 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00422574(rdram, ctx);
;}
RECOMP_FUNC void entry_004225D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004225D0: addiu       $a1, $a1, 0x49B8
    ctx->r5 = ADD32(ctx->r5, 0X49B8);
    // 0x004225D4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x004225D8: beq         $a1, $zero, L_00422600
    if (ctx->r5 == 0) {
        // 0x004225DC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_00422600;
    }
    // 0x004225DC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x004225E0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004225E4:
    // 0x004225E4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x004225E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004225EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004225F0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x004225F4: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x004225F8: bne         $v0, $zero, L_004225E4
    if (ctx->r2 != 0) {
        // 0x004225FC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004225E4;
    }
    // 0x004225FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00422600:
    // 0x00422600: jr          $ra
    // 0x00422604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004225D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004225D4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x004225D8: beq         $a1, $zero, L_00422600
    if (ctx->r5 == 0) {
        // 0x004225DC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_00422600;
    }
    // 0x004225DC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x004225E0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004225E4:
    // 0x004225E4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x004225E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004225EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004225F0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x004225F4: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x004225F8: bne         $v0, $zero, L_004225E4
    if (ctx->r2 != 0) {
        // 0x004225FC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004225E4;
    }
    // 0x004225FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_00422600:
    // 0x00422600: jr          $ra
    // 0x00422604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004227C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004227C8: nop

    // turok2: reconnected split function: a stray ELF symbol at 0x004227CC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004227CC(rdram, ctx);
;}
RECOMP_FUNC void entry_004228F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004228F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004228F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004228FC: addiu       $v0, $v0, 0x4C48
    ctx->r2 = ADD32(ctx->r2, 0X4C48);
    // 0x00422900: j           L_004229D4
    // 0x00422904: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422904: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422908: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042290C: addiu       $v0, $v0, 0x4D1C
    ctx->r2 = ADD32(ctx->r2, 0X4D1C);
    // 0x00422910: j           L_004229D4
    // 0x00422914: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422914: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422918: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042291C: addiu       $v0, $v0, 0x4CB4
    ctx->r2 = ADD32(ctx->r2, 0X4CB4);
    // 0x00422920: j           L_004229D4
    // 0x00422924: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422924: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422928: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042292C: addiu       $v0, $v0, 0x4D84
    ctx->r2 = ADD32(ctx->r2, 0X4D84);
    // 0x00422930: j           L_004229D4
    // 0x00422934: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422934: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422938: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042293C: addiu       $v0, $v0, 0x4DEC
    ctx->r2 = ADD32(ctx->r2, 0X4DEC);
    // 0x00422940: j           L_004229D4
    // 0x00422944: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422944: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422948: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042294C: addiu       $v0, $v0, 0x4E38
    ctx->r2 = ADD32(ctx->r2, 0X4E38);
    // 0x00422950: j           L_004229D4
    // 0x00422954: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422954: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422958: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042295C: addiu       $v0, $v0, 0x4E70
    ctx->r2 = ADD32(ctx->r2, 0X4E70);
    // 0x00422960: j           L_004229D4
    // 0x00422964: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422964: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422968: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042296C: addiu       $v0, $v0, 0x4E90
    ctx->r2 = ADD32(ctx->r2, 0X4E90);
    // 0x00422970: j           L_004229D4
    // 0x00422974: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422974: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422978: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042297C: addiu       $v0, $v0, 0x4EF8
    ctx->r2 = ADD32(ctx->r2, 0X4EF8);
    // 0x00422980: j           L_004229D4
    // 0x00422984: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422984: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422988: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042298C: addiu       $v0, $v0, 0x4F1C
    ctx->r2 = ADD32(ctx->r2, 0X4F1C);
    // 0x00422990: j           L_004229D4
    // 0x00422994: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x00422994: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422998: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042299C: addiu       $v0, $v0, 0x4F68
    ctx->r2 = ADD32(ctx->r2, 0X4F68);
    // 0x004229A0: j           L_004229D4
    // 0x004229A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004229A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004229A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004229AC: addiu       $v0, $v0, 0x4F98
    ctx->r2 = ADD32(ctx->r2, 0X4F98);
    // 0x004229B0: j           L_004229D4
    // 0x004229B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004229B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004229B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004229BC: addiu       $v0, $v0, 0x4FD4
    ctx->r2 = ADD32(ctx->r2, 0X4FD4);
    // 0x004229C0: j           L_004229D4
    // 0x004229C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004229D4;
    // 0x004229C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004229C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004229CC: addiu       $v0, $v0, 0x5010
    ctx->r2 = ADD32(ctx->r2, 0X5010);
    // 0x004229D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004229D4:
    // 0x004229D4: jr          $ra
    // 0x004229D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004229D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422A20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A28: addiu       $v0, $v0, 0x4C60
    ctx->r2 = ADD32(ctx->r2, 0X4C60);
    // 0x00422A2C: j           L_00422B00
    // 0x00422A30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A38: addiu       $v0, $v0, 0x4D34
    ctx->r2 = ADD32(ctx->r2, 0X4D34);
    // 0x00422A3C: j           L_00422B00
    // 0x00422A40: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A40: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A44: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A48: addiu       $v0, $v0, 0x4CCC
    ctx->r2 = ADD32(ctx->r2, 0X4CCC);
    // 0x00422A4C: j           L_00422B00
    // 0x00422A50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A58: addiu       $v0, $v0, 0x4D9C
    ctx->r2 = ADD32(ctx->r2, 0X4D9C);
    // 0x00422A5C: j           L_00422B00
    // 0x00422A60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A64: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A68: addiu       $v0, $v0, 0x4E00
    ctx->r2 = ADD32(ctx->r2, 0X4E00);
    // 0x00422A6C: j           L_00422B00
    // 0x00422A70: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A70: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A78: addiu       $v0, $v0, 0x4E48
    ctx->r2 = ADD32(ctx->r2, 0X4E48);
    // 0x00422A7C: j           L_00422B00
    // 0x00422A80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A84: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A88: addiu       $v0, $v0, 0x4E74
    ctx->r2 = ADD32(ctx->r2, 0X4E74);
    // 0x00422A8C: j           L_00422B00
    // 0x00422A90: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A90: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422A94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A98: addiu       $v0, $v0, 0x4EA8
    ctx->r2 = ADD32(ctx->r2, 0X4EA8);
    // 0x00422A9C: j           L_00422B00
    // 0x00422AA0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422AA0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422AA4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422AA8: addiu       $v0, $v0, 0x4F04
    ctx->r2 = ADD32(ctx->r2, 0X4F04);
    // 0x00422AAC: j           L_00422B00
    // 0x00422AB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422AB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422AB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422AB8: addiu       $v0, $v0, 0x4F34
    ctx->r2 = ADD32(ctx->r2, 0X4F34);
    // 0x00422ABC: j           L_00422B00
    // 0x00422AC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422AC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422AC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422AC8: addiu       $v0, $v0, 0x4F74
    ctx->r2 = ADD32(ctx->r2, 0X4F74);
    // 0x00422ACC: j           L_00422B00
    // 0x00422AD0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422AD0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422AD4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422AD8: addiu       $v0, $v0, 0x4FAC
    ctx->r2 = ADD32(ctx->r2, 0X4FAC);
    // 0x00422ADC: j           L_00422B00
    // 0x00422AE0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422AE0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422AE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422AE8: addiu       $v0, $v0, 0x4FE8
    ctx->r2 = ADD32(ctx->r2, 0X4FE8);
    // 0x00422AEC: j           L_00422B00
    // 0x00422AF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422AF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422AF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422AF8: addiu       $v0, $v0, 0x5024
    ctx->r2 = ADD32(ctx->r2, 0X5024);
    // 0x00422AFC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422B00:
    // 0x00422B00: jr          $ra
    // 0x00422B04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422B04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422B4C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422B50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B54: addiu       $v0, $v0, 0x4C78
    ctx->r2 = ADD32(ctx->r2, 0X4C78);
    // 0x00422B58: j           L_00422C2C
    // 0x00422B5C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B5C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422B60: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B64: addiu       $v0, $v0, 0x4D4C
    ctx->r2 = ADD32(ctx->r2, 0X4D4C);
    // 0x00422B68: j           L_00422C2C
    // 0x00422B6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422B70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B74: addiu       $v0, $v0, 0x4CE4
    ctx->r2 = ADD32(ctx->r2, 0X4CE4);
    // 0x00422B78: j           L_00422C2C
    // 0x00422B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422B80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B84: addiu       $v0, $v0, 0x4DB0
    ctx->r2 = ADD32(ctx->r2, 0X4DB0);
    // 0x00422B88: j           L_00422C2C
    // 0x00422B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422B90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422B94: addiu       $v0, $v0, 0x4E14
    ctx->r2 = ADD32(ctx->r2, 0X4E14);
    // 0x00422B98: j           L_00422C2C
    // 0x00422B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422BA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BA4: addiu       $v0, $v0, 0x4E58
    ctx->r2 = ADD32(ctx->r2, 0X4E58);
    // 0x00422BA8: j           L_00422C2C
    // 0x00422BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422BB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BB4: addiu       $v0, $v0, 0x4E78
    ctx->r2 = ADD32(ctx->r2, 0X4E78);
    // 0x00422BB8: j           L_00422C2C
    // 0x00422BBC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BBC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422BC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BC4: addiu       $v0, $v0, 0x4EBC
    ctx->r2 = ADD32(ctx->r2, 0X4EBC);
    // 0x00422BC8: j           L_00422C2C
    // 0x00422BCC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BCC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422BD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BD4: addiu       $v0, $v0, 0x4F10
    ctx->r2 = ADD32(ctx->r2, 0X4F10);
    // 0x00422BD8: j           L_00422C2C
    // 0x00422BDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BDC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422BE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BE4: addiu       $v0, $v0, 0x4F48
    ctx->r2 = ADD32(ctx->r2, 0X4F48);
    // 0x00422BE8: j           L_00422C2C
    // 0x00422BEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BEC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422BF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422BF4: addiu       $v0, $v0, 0x4F84
    ctx->r2 = ADD32(ctx->r2, 0X4F84);
    // 0x00422BF8: j           L_00422C2C
    // 0x00422BFC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422BFC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422C00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C04: addiu       $v0, $v0, 0x4FBC
    ctx->r2 = ADD32(ctx->r2, 0X4FBC);
    // 0x00422C08: j           L_00422C2C
    // 0x00422C0C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422C0C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422C10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C14: addiu       $v0, $v0, 0x4FF8
    ctx->r2 = ADD32(ctx->r2, 0X4FF8);
    // 0x00422C18: j           L_00422C2C
    // 0x00422C1C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422C2C;
    // 0x00422C1C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422C20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C24: addiu       $v0, $v0, 0x503C
    ctx->r2 = ADD32(ctx->r2, 0X503C);
    // 0x00422C28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422C2C:
    // 0x00422C2C: jr          $ra
    // 0x00422C30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422C30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422C78: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422C7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C80: addiu       $v0, $v0, 0x4C90
    ctx->r2 = ADD32(ctx->r2, 0X4C90);
    // 0x00422C84: j           L_00422D58
    // 0x00422C88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422C88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422C8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422C90: addiu       $v0, $v0, 0x4D64
    ctx->r2 = ADD32(ctx->r2, 0X4D64);
    // 0x00422C94: j           L_00422D58
    // 0x00422C98: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422C98: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422C9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CA0: addiu       $v0, $v0, 0x4CFC
    ctx->r2 = ADD32(ctx->r2, 0X4CFC);
    // 0x00422CA4: j           L_00422D58
    // 0x00422CA8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CA8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422CAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CB0: addiu       $v0, $v0, 0x4DC8
    ctx->r2 = ADD32(ctx->r2, 0X4DC8);
    // 0x00422CB4: j           L_00422D58
    // 0x00422CB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422CBC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CC0: addiu       $v0, $v0, 0x4E2C
    ctx->r2 = ADD32(ctx->r2, 0X4E2C);
    // 0x00422CC4: j           L_00422D58
    // 0x00422CC8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CC8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422CCC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CD0: addiu       $v0, $v0, 0x4E64
    ctx->r2 = ADD32(ctx->r2, 0X4E64);
    // 0x00422CD4: j           L_00422D58
    // 0x00422CD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422CDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CE0: addiu       $v0, $v0, 0x4E88
    ctx->r2 = ADD32(ctx->r2, 0X4E88);
    // 0x00422CE4: j           L_00422D58
    // 0x00422CE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CE8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422CEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422CF0: addiu       $v0, $v0, 0x4ED4
    ctx->r2 = ADD32(ctx->r2, 0X4ED4);
    // 0x00422CF4: j           L_00422D58
    // 0x00422CF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422CF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422CFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D00: addiu       $v0, $v0, 0x4F14
    ctx->r2 = ADD32(ctx->r2, 0X4F14);
    // 0x00422D04: j           L_00422D58
    // 0x00422D08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422D0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D10: addiu       $v0, $v0, 0x4F5C
    ctx->r2 = ADD32(ctx->r2, 0X4F5C);
    // 0x00422D14: j           L_00422D58
    // 0x00422D18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422D1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D20: addiu       $v0, $v0, 0x4F90
    ctx->r2 = ADD32(ctx->r2, 0X4F90);
    // 0x00422D24: j           L_00422D58
    // 0x00422D28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422D2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D30: addiu       $v0, $v0, 0x4FCC
    ctx->r2 = ADD32(ctx->r2, 0X4FCC);
    // 0x00422D34: j           L_00422D58
    // 0x00422D38: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D38: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422D3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D40: addiu       $v0, $v0, 0x5008
    ctx->r2 = ADD32(ctx->r2, 0X5008);
    // 0x00422D44: j           L_00422D58
    // 0x00422D48: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422D58;
    // 0x00422D48: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422D4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422D50: addiu       $v0, $v0, 0x5054
    ctx->r2 = ADD32(ctx->r2, 0X5054);
    // 0x00422D54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422D58:
    // 0x00422D58: jr          $ra
    // 0x00422D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422DA4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DAC: addiu       $v0, $v0, 0x4CA8
    ctx->r2 = ADD32(ctx->r2, 0X4CA8);
    // 0x00422DB0: j           L_00422E84
    // 0x00422DB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DB4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DBC: addiu       $v0, $v0, 0x4D7C
    ctx->r2 = ADD32(ctx->r2, 0X4D7C);
    // 0x00422DC0: j           L_00422E84
    // 0x00422DC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DCC: addiu       $v0, $v0, 0x4D14
    ctx->r2 = ADD32(ctx->r2, 0X4D14);
    // 0x00422DD0: j           L_00422E84
    // 0x00422DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DD4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DDC: addiu       $v0, $v0, 0x4DE0
    ctx->r2 = ADD32(ctx->r2, 0X4DE0);
    // 0x00422DE0: j           L_00422E84
    // 0x00422DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DEC: addiu       $v0, $v0, 0x4E34
    ctx->r2 = ADD32(ctx->r2, 0X4E34);
    // 0x00422DF0: j           L_00422E84
    // 0x00422DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DFC: addiu       $v0, $v0, 0x4E6C
    ctx->r2 = ADD32(ctx->r2, 0X4E6C);
    // 0x00422E00: j           L_00422E84
    // 0x00422E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E0C: addiu       $v0, $v0, 0x4E8C
    ctx->r2 = ADD32(ctx->r2, 0X4E8C);
    // 0x00422E10: j           L_00422E84
    // 0x00422E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E1C: addiu       $v0, $v0, 0x4EEC
    ctx->r2 = ADD32(ctx->r2, 0X4EEC);
    // 0x00422E20: j           L_00422E84
    // 0x00422E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E2C: addiu       $v0, $v0, 0x4F18
    ctx->r2 = ADD32(ctx->r2, 0X4F18);
    // 0x00422E30: j           L_00422E84
    // 0x00422E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E3C: addiu       $v0, $v0, 0x4F64
    ctx->r2 = ADD32(ctx->r2, 0X4F64);
    // 0x00422E40: j           L_00422E84
    // 0x00422E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E4C: addiu       $v0, $v0, 0x4F94
    ctx->r2 = ADD32(ctx->r2, 0X4F94);
    // 0x00422E50: j           L_00422E84
    // 0x00422E54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E5C: addiu       $v0, $v0, 0x4FD0
    ctx->r2 = ADD32(ctx->r2, 0X4FD0);
    // 0x00422E60: j           L_00422E84
    // 0x00422E64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E6C: addiu       $v0, $v0, 0x500C
    ctx->r2 = ADD32(ctx->r2, 0X500C);
    // 0x00422E70: j           L_00422E84
    // 0x00422E74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E7C: addiu       $v0, $v0, 0x506C
    ctx->r2 = ADD32(ctx->r2, 0X506C);
    // 0x00422E80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E84:
    // 0x00422E84: jr          $ra
    // 0x00422E88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422E88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422DF0: j           L_00422E84
    // 0x00422DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422DF4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422DF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422DFC: addiu       $v0, $v0, 0x4E6C
    ctx->r2 = ADD32(ctx->r2, 0X4E6C);
    // 0x00422E00: j           L_00422E84
    // 0x00422E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E04: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E0C: addiu       $v0, $v0, 0x4E8C
    ctx->r2 = ADD32(ctx->r2, 0X4E8C);
    // 0x00422E10: j           L_00422E84
    // 0x00422E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E1C: addiu       $v0, $v0, 0x4EEC
    ctx->r2 = ADD32(ctx->r2, 0X4EEC);
    // 0x00422E20: j           L_00422E84
    // 0x00422E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E2C: addiu       $v0, $v0, 0x4F18
    ctx->r2 = ADD32(ctx->r2, 0X4F18);
    // 0x00422E30: j           L_00422E84
    // 0x00422E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E3C: addiu       $v0, $v0, 0x4F64
    ctx->r2 = ADD32(ctx->r2, 0X4F64);
    // 0x00422E40: j           L_00422E84
    // 0x00422E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E44: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E4C: addiu       $v0, $v0, 0x4F94
    ctx->r2 = ADD32(ctx->r2, 0X4F94);
    // 0x00422E50: j           L_00422E84
    // 0x00422E54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E54: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E5C: addiu       $v0, $v0, 0x4FD0
    ctx->r2 = ADD32(ctx->r2, 0X4FD0);
    // 0x00422E60: j           L_00422E84
    // 0x00422E64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E64: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E6C: addiu       $v0, $v0, 0x500C
    ctx->r2 = ADD32(ctx->r2, 0X500C);
    // 0x00422E70: j           L_00422E84
    // 0x00422E74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422E84;
    // 0x00422E74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422E78: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422E7C: addiu       $v0, $v0, 0x506C
    ctx->r2 = ADD32(ctx->r2, 0X506C);
    // 0x00422E80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422E84:
    // 0x00422E84: jr          $ra
    // 0x00422E88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422E88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422EC8: addiu       $v0, $v0, 0x4BB4
    ctx->r2 = ADD32(ctx->r2, 0X4BB4);
    // 0x00422ECC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00422ED0: jr          $ra
    // 0x00422ED4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00422ED4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00422F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422F40: sw          $zero, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = 0;
    // 0x00422F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F48: sw          $v0, 0x998($at)
    MEM_W(0X998, ctx->r1) = ctx->r2;
    // 0x00422F4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F50: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
    // 0x00422F54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F58: sw          $v0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r2;
    // 0x00422F5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F60: sw          $zero, 0x994($at)
    MEM_W(0X994, ctx->r1) = 0;
    // 0x00422F64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F68: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x00422F6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422F70: sw          $zero, 0x980($at)
    MEM_W(0X980, ctx->r1) = 0;
    // 0x00422F74: lb          $a0, 0x4($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X4);
    // 0x00422F78: jal         0x00285A68
    // 0x00422F7C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00422F7C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    after_0:
    // 0x00422F80: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00422F84: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00422F88: beq         $v0, $zero, L_00422FA0
    if (ctx->r2 == 0) {
        // 0x00422F8C: nop
    
            goto L_00422FA0;
    }
    // 0x00422F8C: nop

    // 0x00422F90: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00422F94: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x00422F98: j           L_00422FA8
    // 0x00422F9C: nop

        goto L_00422FA8;
    // 0x00422F9C: nop

L_00422FA0:
    // 0x00422FA0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00422FA4: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_00422FA8:
    // 0x00422FA8: jal         0x00426480
    // 0x00422FAC: nop

    func_00426480(rdram, ctx);
        goto after_1;
    // 0x00422FAC: nop

    after_1:
    // 0x00422FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00422FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00422FB8: jr          $ra
    // 0x00422FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00422FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00422FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422FB8: jr          $ra
    // 0x00422FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00422FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00422FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00422FE8: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
    // 0x00422FEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FF0: sw          $zero, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = 0;
    // 0x00422FF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00422FF8: sw          $zero, 0x980($at)
    MEM_W(0X980, ctx->r1) = 0;
    // 0x00422FFC: beq         $v1, $zero, L_00423014
    if (ctx->r3 == 0) {
        // 0x00423000: nop
    
            goto L_00423014;
    }
    // 0x00423000: nop

    // 0x00423004: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423008: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0042300C: j           L_00423020
    // 0x00423010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_00423020;
    // 0x00423010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00423014:
    // 0x00423014: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x00423018: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0042301C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_00423020:
    // 0x00423020: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00423024: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423028: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0042302C: jal         0x00285A68
    // 0x00423030: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00423030: nop

    after_0:
    // 0x00423034: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00423038: jr          $ra
    // 0x0042303C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042303C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00423020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423020: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00423024: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423028: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0042302C: jal         0x00285A68
    // 0x00423030: nop

    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x00423030: nop

    after_0:
    // 0x00423034: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00423038: jr          $ra
    // 0x0042303C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042303C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0042311C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042311C: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x00423120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00423124: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423128: jr          $ra
    // 0x0042312C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042312C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00423184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423184: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00423188: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0042318C: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x00423190: jal         0x00284174
    // 0x00423194: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00423194: nop

    after_0:
    // 0x00423198: beq         $v0, $zero, L_004231B4
    if (ctx->r2 == 0) {
        // 0x0042319C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004231B4;
    }
    // 0x0042319C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004231A0: jal         0x00284240
    // 0x004231A4: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x004231A4: nop

    after_1:
    // 0x004231A8: beq         $v0, $zero, L_004231B4
    if (ctx->r2 == 0) {
        // 0x004231AC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_004231B4;
    }
    // 0x004231AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004231B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004231B4:
    // 0x004231B4: bne         $v1, $zero, L_004231FC
    if (ctx->r3 != 0) {
        // 0x004231B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004231FC;
    }
    // 0x004231B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004231BC: bne         $s1, $zero, L_004231CC
    if (ctx->r17 != 0) {
        // 0x004231C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004231CC;
    }
    // 0x004231C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004231C4: j           L_004231FC
    // 0x004231C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_004231FC;
    // 0x004231C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004231CC:
    // 0x004231CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004231D0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004231D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004231D8: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x004231DC: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x004231E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x004231E4: addiu       $a1, $a1, -0x48EC
    ctx->r5 = ADD32(ctx->r5, -0X48EC);
    // 0x004231E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004231EC: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
    // 0x004231F0: jal         0x00416644
    // 0x004231F4: nop

    func_00416644(rdram, ctx);
        goto after_2;
    // 0x004231F4: nop

    after_2:
    // 0x004231F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004231FC:
    // 0x004231FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00423200: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00423204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423208: jr          $ra
    // 0x0042320C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042320C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00423270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423270: jr          $ra
    // 0x00423274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004233E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004233E0: jr          $ra
    // 0x004233E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004233E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00423410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423410: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x00423414: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423418: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042341C: beq         $v1, $zero, L_00423434
    if (ctx->r3 == 0) {
        // 0x00423420: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00423434;
    }
    // 0x00423420: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00423424: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423428: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0042342C: j           L_00423444
    // 0x00423430: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
        goto L_00423444;
    // 0x00423430: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00423434:
    // 0x00423434: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00423438: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x0042343C: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x00423440: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_00423444:
    // 0x00423444: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x00423448: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042344C: addiu       $a1, $a1, -0x4370
    ctx->r5 = ADD32(ctx->r5, -0X4370);
    // 0x00423450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423454: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00423458: jal         0x00416644
    // 0x0042345C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042345C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00423460: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00423464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423468: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042346C: sw          $zero, 0x998($at)
    MEM_W(0X998, ctx->r1) = 0;
    // 0x00423470: jr          $ra
    // 0x00423474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00423474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00423448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423448: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042344C: addiu       $a1, $a1, -0x4370
    ctx->r5 = ADD32(ctx->r5, -0X4370);
    // 0x00423450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423454: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00423458: jal         0x00416644
    // 0x0042345C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042345C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x00423460: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00423464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423468: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042346C: sw          $zero, 0x998($at)
    MEM_W(0X998, ctx->r1) = 0;
    // 0x00423470: jr          $ra
    // 0x00423474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00423474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004234D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004234D8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004234DC: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x004234E0: j           L_004234F0
    // 0x004234E4: nop

        goto L_004234F0;
    // 0x004234E4: nop

    // 0x004234E8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x004234EC: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_004234F0:
    // 0x004234F0: jal         0x0028591C
    // 0x004234F4: nop

    func_0028591C(rdram, ctx);
        goto after_0;
    // 0x004234F4: nop

    after_0:
    // 0x004234F8: beq         $v0, $zero, L_00423540
    if (ctx->r2 == 0) {
        // 0x004234FC: nop
    
            goto L_00423540;
    }
    // 0x004234FC: nop

    // 0x00423500: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423504: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00423508: beq         $v0, $zero, L_00423520
    if (ctx->r2 == 0) {
        // 0x0042350C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00423520;
    }
    // 0x0042350C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00423510: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423514: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00423518: j           L_00423528
    // 0x0042351C: nop

        goto L_00423528;
    // 0x0042351C: nop

L_00423520:
    // 0x00423520: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423524: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00423528:
    // 0x00423528: jal         0x0041DD90
    // 0x0042352C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_1;
    // 0x0042352C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x00423530: beq         $v0, $zero, L_00423540
    if (ctx->r2 == 0) {
        // 0x00423534: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423540;
    }
    // 0x00423534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423538: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042353C: sw          $v0, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = ctx->r2;
L_00423540:
    // 0x00423540: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423544: lw          $v0, 0x99C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X99C);
    // 0x00423548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042354C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423550: jr          $ra
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042350C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042350C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00423510: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423514: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x00423518: j           L_00423528
    // 0x0042351C: nop

        goto L_00423528;
    // 0x0042351C: nop

    // 0x00423520: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423524: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
L_00423528:
    // 0x00423528: jal         0x0041DD90
    // 0x0042352C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x0042352C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00423530: beq         $v0, $zero, L_00423540
    if (ctx->r2 == 0) {
        // 0x00423534: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423540;
    }
    // 0x00423534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423538: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0042353C: sw          $v0, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = ctx->r2;
L_00423540:
    // 0x00423540: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423544: lw          $v0, 0x99C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X99C);
    // 0x00423548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042354C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423550: jr          $ra
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042354C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042354C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423550: jr          $ra
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00423554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00423598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423598: nop

    // 0x0042359C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004235A0: addiu       $v0, $v0, 0x5088
    ctx->r2 = ADD32(ctx->r2, 0X5088);
    // 0x004235A4: j           L_004235B8
    // 0x004235A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_004235B8;
    // 0x004235A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004235AC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004235B0: addiu       $v0, $v0, 0x50C0
    ctx->r2 = ADD32(ctx->r2, 0X50C0);
    // 0x004235B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004235B8:
    // 0x004235B8: jr          $ra
    // 0x004235BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004235BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004235E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004235E8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004235EC: jr          $ra
    // 0x004235F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004235F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0042366C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042366C: addiu       $a2, $s1, 0x1
    ctx->r6 = ADD32(ctx->r17, 0X1);
    // 0x00423670: jal         0x0029E3E0
    // 0x00423674: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_0;
    // 0x00423674: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
    // 0x00423678: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042367C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00423680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00423684: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00423688: jr          $ra
    // 0x0042368C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042368C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004236C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004236C0: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x004236C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004236C8: jal         0x0041DD90
    // 0x004236CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x004236CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x004236D0: beq         $v0, $zero, L_0042372C
    if (ctx->r2 == 0) {
        // 0x004236D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0042372C;
    }
    // 0x004236D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004236D8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x004236DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004236E0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004236E4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004236E8: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x004236EC: beq         $v1, $v0, L_00423704
    if (ctx->r3 == ctx->r2) {
        // 0x004236F0: nop
    
            goto L_00423704;
    }
    // 0x004236F0: nop

    // 0x004236F4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004236F8: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004236FC: bnel        $v1, $v0, L_00423710
    if (ctx->r3 != ctx->r2) {
        // 0x00423700: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00423710;
    }
    goto skip_0;
    // 0x00423700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423704:
    // 0x00423704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423708: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042370C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00423710:
    // 0x00423710: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423714: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423718: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042371C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423720: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423724: j           L_0042374C
    // 0x00423728: nop

        goto L_0042374C;
    // 0x00423728: nop

L_0042372C:
    // 0x0042372C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00423730: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423734: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423738: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042373C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423740: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00423744: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00423748: addiu       $a1, $a1, -0x3E60
    ctx->r5 = ADD32(ctx->r5, -0X3E60);
L_0042374C:
    // 0x0042374C: jal         0x00416644
    // 0x00423750: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00423750: nop

    after_1:
    // 0x00423754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042375C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423760: jr          $ra
    // 0x00423764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00423764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004236FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004236FC: bnel        $v1, $v0, L_00423710
    if (ctx->r3 != ctx->r2) {
        // 0x00423700: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00423710;
    }
    goto skip_0;
    // 0x00423700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x00423704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423708: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042370C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00423710:
    // 0x00423710: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423714: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423718: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042371C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423720: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423724: j           L_0042374C
    // 0x00423728: nop

        goto L_0042374C;
    // 0x00423728: nop

    // 0x0042372C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x00423730: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423734: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423738: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042373C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423740: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00423744: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00423748: addiu       $a1, $a1, -0x3E60
    ctx->r5 = ADD32(ctx->r5, -0X3E60);
L_0042374C:
    // 0x0042374C: jal         0x00416644
    // 0x00423750: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00423750: nop

    after_0:
    // 0x00423754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042375C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423760: jr          $ra
    // 0x00423764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00423764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00423784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423784: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423788: lw          $a1, 0x2028($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2028);
    // 0x0042378C: j           L_004237A0
    // 0x00423790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004237A0;
    // 0x00423790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423794: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00423798: lb          $a1, 0x4($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X4);
    // 0x0042379C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004237A0:
    // 0x004237A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004237A4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004237A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004237AC: jal         0x0041DD90
    // 0x004237B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x004237B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004237B4: beq         $v0, $zero, L_00423820
    if (ctx->r2 == 0) {
        // 0x004237B8: nop
    
            goto L_00423820;
    }
    // 0x004237B8: nop

    // 0x004237BC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x004237C0: beq         $v0, $zero, L_004237D4
    if (ctx->r2 == 0) {
        // 0x004237C4: nop
    
            goto L_004237D4;
    }
    // 0x004237C4: nop

    // 0x004237C8: lw          $v0, 0x51C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51C);
    // 0x004237CC: j           L_004237DC
    // 0x004237D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_004237DC;
    // 0x004237D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
L_004237D4:
    // 0x004237D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004237D8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_004237DC:
    // 0x004237DC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x004237E0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004237E4: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x004237E8: beq         $v1, $v0, L_00423800
    if (ctx->r3 == ctx->r2) {
        // 0x004237EC: nop
    
            goto L_00423800;
    }
    // 0x004237EC: nop

    // 0x004237F0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004237F4: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004237F8: bnel        $v1, $v0, L_0042380C
    if (ctx->r3 != ctx->r2) {
        // 0x004237FC: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0042380C;
    }
    goto skip_0;
    // 0x004237FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423800:
    // 0x00423800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423804: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00423808: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0042380C:
    // 0x0042380C: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423810: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423814: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x00423818: j           L_00423864
    // 0x0042381C: nop

        goto L_00423864;
    // 0x0042381C: nop

L_00423820:
    // 0x00423820: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x00423824: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00423828: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0042382C: beq         $v1, $v0, L_00423844
    if (ctx->r3 == ctx->r2) {
        // 0x00423830: nop
    
            goto L_00423844;
    }
    // 0x00423830: nop

    // 0x00423834: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00423838: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x0042383C: bnel        $v1, $v0, L_00423850
    if (ctx->r3 != ctx->r2) {
        // 0x00423840: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00423850;
    }
    goto skip_1;
    // 0x00423840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_1:
L_00423844:
    // 0x00423844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423848: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042384C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00423850:
    // 0x00423850: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423854: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423858: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042385C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423860: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_00423864:
    // 0x00423864: jal         0x00416644
    // 0x00423868: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00423868: nop

    after_1:
    // 0x0042386C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00423874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423878: jr          $ra
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00423840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423848: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x0042384C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423850: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x00423854: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x00423858: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x0042385C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00423860: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00423864: jal         0x00416644
    // 0x00423868: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x00423868: nop

    after_0:
    // 0x0042386C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00423874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00423878: jr          $ra
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0042387C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004238CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004238CC: j           L_004238DC
    // 0x004238D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
        goto L_004238DC;
    // 0x004238D0: addiu       $a0, $v0, 0x53C
    ctx->r4 = ADD32(ctx->r2, 0X53C);
    // 0x004238D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004238D8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
L_004238DC:
    // 0x004238DC: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x004238E0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004238E4: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x004238E8: beq         $v1, $v0, L_00423900
    if (ctx->r3 == ctx->r2) {
        // 0x004238EC: nop
    
            goto L_00423900;
    }
    // 0x004238EC: nop

    // 0x004238F0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004238F4: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x004238F8: bnel        $v1, $v0, L_0042390C
    if (ctx->r3 != ctx->r2) {
        // 0x004238FC: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_0042390C;
    }
    goto skip_0;
    // 0x004238FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
L_00423900:
    // 0x00423900: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423904: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00423908: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0042390C:
    // 0x0042390C: lw          $a1, 0x24($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X24);
    // 0x00423910: lw          $a2, 0x1C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1C);
    // 0x00423914: lw          $a3, 0x20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X20);
    // 0x00423918: jal         0x00416644
    // 0x0042391C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042391C: nop

    after_0:
    // 0x00423920: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00423924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423928: jr          $ra
    // 0x0042392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004238FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004238FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00423900: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423904: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x00423908: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0042390C: lw          $a1, 0x24($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X24);
    // 0x00423910: lw          $a2, 0x1C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1C);
    // 0x00423914: lw          $a3, 0x20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X20);
    // 0x00423918: jal         0x00416644
    // 0x0042391C: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0042391C: nop

    after_0:
    // 0x00423920: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00423924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423928: jr          $ra
    // 0x0042392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042392C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00423934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423934: lw          $v0, 0x994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X994);
    // 0x00423938: beq         $v0, $zero, L_00423950
    if (ctx->r2 == 0) {
        // 0x0042393C: nop
    
            goto L_00423950;
    }
    // 0x0042393C: nop

    // 0x00423940: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423944: addiu       $v0, $v0, 0x510C
    ctx->r2 = ADD32(ctx->r2, 0X510C);
    // 0x00423948: j           L_0042395C
    // 0x0042394C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0042395C;
    // 0x0042394C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423950:
    // 0x00423950: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423954: addiu       $v0, $v0, 0x5118
    ctx->r2 = ADD32(ctx->r2, 0X5118);
    // 0x00423958: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0042395C:
    // 0x0042395C: jr          $ra
    // 0x00423960: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423960: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00423A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423A60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A64: sw          $v0, 0x9B0($at)
    MEM_W(0X9B0, ctx->r1) = ctx->r2;
    // 0x00423A68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00423A6C: sw          $zero, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = 0;
    // 0x00423A70: jr          $ra
    // 0x00423A74: nop

    return;
    // 0x00423A74: nop

;}
RECOMP_FUNC void entry_00423ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423ADC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423AE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423AE4: addu        $at, $at, $v0
    gpr jr_addend_00423AEC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423AE8: lw          $v0, 0x1670($at)
    ctx->r2 = ADD32(ctx->r1, 0X1670);
    // 0x00423AEC: jr          $v0
    // 0x00423AF0: nop

    switch (jr_addend_00423AEC >> 2) {
        case 0: goto L_00423AF4; break;
        case 1: goto L_00423B04; break;
        case 2: goto L_00423B14; break;
        case 3: goto L_00423B24; break;
        case 4: goto L_00423B34; break;
        default: switch_error(__func__, 0x00423AEC, 0x800C1670);
    }
    // 0x00423AF0: nop

L_00423AF4:
    // 0x00423AF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423AF8: addiu       $v0, $v0, 0x5130
    ctx->r2 = ADD32(ctx->r2, 0X5130);
    // 0x00423AFC: j           L_00423B40
    // 0x00423B00: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B00: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B04:
    // 0x00423B04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B08: addiu       $v0, $v0, 0x5194
    ctx->r2 = ADD32(ctx->r2, 0X5194);
    // 0x00423B0C: j           L_00423B40
    // 0x00423B10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B14:
    // 0x00423B14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B18: addiu       $v0, $v0, 0x51D0
    ctx->r2 = ADD32(ctx->r2, 0X51D0);
    // 0x00423B1C: j           L_00423B40
    // 0x00423B20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B24:
    // 0x00423B24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B28: addiu       $v0, $v0, 0x521C
    ctx->r2 = ADD32(ctx->r2, 0X521C);
    // 0x00423B2C: j           L_00423B40
    // 0x00423B30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423B40;
    // 0x00423B30: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B34:
    // 0x00423B34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B38: addiu       $v0, $v0, 0x527C
    ctx->r2 = ADD32(ctx->r2, 0X527C);
    // 0x00423B3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B40:
    // 0x00423B40: jr          $ra
    // 0x00423B44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423B44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00423B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423B58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423B5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423B60: addu        $at, $at, $v0
    gpr jr_addend_00423B68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423B64: lw          $v0, 0x1688($at)
    ctx->r2 = ADD32(ctx->r1, 0X1688);
    // 0x00423B68: jr          $v0
    // 0x00423B6C: nop

    switch (jr_addend_00423B68 >> 2) {
        case 0: goto L_00423B70; break;
        case 1: goto L_00423B80; break;
        case 2: goto L_00423B90; break;
        case 3: goto L_00423BA0; break;
        case 4: goto L_00423BB0; break;
        default: switch_error(__func__, 0x00423B68, 0x800C1688);
    }
    // 0x00423B6C: nop

L_00423B70:
    // 0x00423B70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B74: addiu       $v0, $v0, 0x5140
    ctx->r2 = ADD32(ctx->r2, 0X5140);
    // 0x00423B78: j           L_00423BBC
    // 0x00423B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423B7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B80:
    // 0x00423B80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B84: addiu       $v0, $v0, 0x519C
    ctx->r2 = ADD32(ctx->r2, 0X519C);
    // 0x00423B88: j           L_00423BBC
    // 0x00423B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423B8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423B90:
    // 0x00423B90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423B94: addiu       $v0, $v0, 0x51D8
    ctx->r2 = ADD32(ctx->r2, 0X51D8);
    // 0x00423B98: j           L_00423BBC
    // 0x00423B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423B9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BA0:
    // 0x00423BA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423BA4: addiu       $v0, $v0, 0x5228
    ctx->r2 = ADD32(ctx->r2, 0X5228);
    // 0x00423BA8: j           L_00423BBC
    // 0x00423BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423BBC;
    // 0x00423BAC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BB0:
    // 0x00423BB0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423BB4: addiu       $v0, $v0, 0x5284
    ctx->r2 = ADD32(ctx->r2, 0X5284);
    // 0x00423BB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BBC:
    // 0x00423BBC: jr          $ra
    // 0x00423BC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423BC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00423BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423BD4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423BD8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423BDC: addu        $at, $at, $v0
    gpr jr_addend_00423BE4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423BE0: lw          $v0, 0x16A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X16A0);
    // 0x00423BE4: jr          $v0
    // 0x00423BE8: nop

    switch (jr_addend_00423BE4 >> 2) {
        case 0: goto L_00423BEC; break;
        case 1: goto L_00423BFC; break;
        case 2: goto L_00423C0C; break;
        case 3: goto L_00423C1C; break;
        case 4: goto L_00423C2C; break;
        default: switch_error(__func__, 0x00423BE4, 0x800C16A0);
    }
    // 0x00423BE8: nop

L_00423BEC:
    // 0x00423BEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423BF0: addiu       $v0, $v0, 0x5154
    ctx->r2 = ADD32(ctx->r2, 0X5154);
    // 0x00423BF4: j           L_00423C38
    // 0x00423BF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423BF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423BFC:
    // 0x00423BFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C00: addiu       $v0, $v0, 0x51B0
    ctx->r2 = ADD32(ctx->r2, 0X51B0);
    // 0x00423C04: j           L_00423C38
    // 0x00423C08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423C08: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C0C:
    // 0x00423C0C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C10: addiu       $v0, $v0, 0x51EC
    ctx->r2 = ADD32(ctx->r2, 0X51EC);
    // 0x00423C14: j           L_00423C38
    // 0x00423C18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423C18: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C1C:
    // 0x00423C1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C20: addiu       $v0, $v0, 0x5240
    ctx->r2 = ADD32(ctx->r2, 0X5240);
    // 0x00423C24: j           L_00423C38
    // 0x00423C28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423C38;
    // 0x00423C28: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C2C:
    // 0x00423C2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423C30: addiu       $v0, $v0, 0x529C
    ctx->r2 = ADD32(ctx->r2, 0X529C);
    // 0x00423C34: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423C38:
    // 0x00423C38: jr          $ra
    // 0x00423C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00423C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00423D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D28: addiu       $v0, $v0, 0x52C4
    ctx->r2 = ADD32(ctx->r2, 0X52C4);
    // 0x00423D2C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // turok2: reconnected split function: a stray ELF symbol at 0x00423D30 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00423D30(rdram, ctx);
;}
RECOMP_FUNC void entry_00423D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D88: j           L_00423D9C
    // 0x00423D8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423D9C;
    // 0x00423D8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00423D90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D94: addiu       $v0, $v0, 0x52DC
    ctx->r2 = ADD32(ctx->r2, 0X52DC);
    // 0x00423D98: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423D9C:
    // 0x00423D9C: jr          $ra
    // 0x00423DA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423DA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
