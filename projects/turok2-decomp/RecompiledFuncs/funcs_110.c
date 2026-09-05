#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_0042DD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042DD60: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD64: sb          $zero, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = 0;
    // 0x0042DD68: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD6C: sb          $zero, 0x3D($v0)
    MEM_B(0X3D, ctx->r2) = 0;
    // 0x0042DD70: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042DD78: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    // 0x0042DD7C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DD80: sb          $zero, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = 0;
L_0042DD84:
    // 0x0042DD84: sw          $zero, 0x9A0($v1)
    MEM_W(0X9A0, ctx->r3) = 0;
    // 0x0042DD88: sw          $zero, 0x9B8($v1)
    MEM_W(0X9B8, ctx->r3) = 0;
    // 0x0042DD8C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042DD90: slti        $v0, $a0, 0x6
    ctx->r2 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x0042DD94: bne         $v0, $zero, L_0042DD84
    if (ctx->r2 != 0) {
        // 0x0042DD98: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0042DD84;
    }
    // 0x0042DD98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0042DD9C: lw          $v0, 0x9F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9F8);
    // 0x0042DDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DDA4: sw          $zero, 0x9D0($s0)
    MEM_W(0X9D0, ctx->r16) = 0;
    // 0x0042DDA8: sw          $zero, 0x9D4($s0)
    MEM_W(0X9D4, ctx->r16) = 0;
    // 0x0042DDAC: sw          $zero, 0x9D8($s0)
    MEM_W(0X9D8, ctx->r16) = 0;
    // 0x0042DDB0: sw          $zero, 0x9DC($s0)
    MEM_W(0X9DC, ctx->r16) = 0;
    // 0x0042DDB4: sw          $zero, 0x9E0($s0)
    MEM_W(0X9E0, ctx->r16) = 0;
    // 0x0042DDB8: sw          $zero, 0x9E4($s0)
    MEM_W(0X9E4, ctx->r16) = 0;
    // 0x0042DDBC: sw          $zero, 0x9E8($s0)
    MEM_W(0X9E8, ctx->r16) = 0;
    // 0x0042DDC0: sw          $zero, 0x9EC($s0)
    MEM_W(0X9EC, ctx->r16) = 0;
    // 0x0042DDC4: sw          $zero, 0x9F0($s0)
    MEM_W(0X9F0, ctx->r16) = 0;
    // 0x0042DDC8: sw          $zero, 0x9F4($s0)
    MEM_W(0X9F4, ctx->r16) = 0;
    // 0x0042DDCC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0042DDD0: jal         0x0042EA00
    // 0x0042DDD4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    func_0042EA00(rdram, ctx);
        goto after_0;
    // 0x0042DDD4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    after_0:
    // 0x0042DDD8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042DDDC: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0042DDE0: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0042DDE4: bnel        $v0, $zero, L_0042DDEC
    if (ctx->r2 != 0) {
        // 0x0042DDE8: sw          $zero, 0x12B4($s0)
        MEM_W(0X12B4, ctx->r16) = 0;
            goto L_0042DDEC;
    }
    goto skip_0;
    // 0x0042DDE8: sw          $zero, 0x12B4($s0)
    MEM_W(0X12B4, ctx->r16) = 0;
    skip_0:
L_0042DDEC:
    // 0x0042DDEC: beq         $s2, $zero, L_0042DE5C
    if (ctx->r18 == 0) {
        // 0x0042DDF0: nop
    
            goto L_0042DE5C;
    }
    // 0x0042DDF0: nop

    // 0x0042DDF4: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0042DDF8: beq         $v0, $zero, L_0042DE38
    if (ctx->r2 == 0) {
        // 0x0042DDFC: nop
    
            goto L_0042DE38;
    }
    // 0x0042DDFC: nop

    // 0x0042DE00: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DE04: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x0042DE08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042DE0C: sw          $zero, 0x520($s0)
    MEM_W(0X520, ctx->r16) = 0;
    // 0x0042DE10: sw          $v0, 0xBF8($s0)
    MEM_W(0XBF8, ctx->r16) = ctx->r2;
    // 0x0042DE14: lw          $v0, 0x1FC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1FC);
    // 0x0042DE18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE1C: addiu       $a1, $a1, -0x7720
    ctx->r5 = ADD32(ctx->r5, -0X7720);
    // 0x0042DE20: bne         $v0, $zero, L_0042DE40
    if (ctx->r2 != 0) {
        // 0x0042DE24: nop
    
            goto L_0042DE40;
    }
    // 0x0042DE24: nop

    // 0x0042DE28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE2C: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x0042DE30: j           L_0042DE40
    // 0x0042DE34: nop

        goto L_0042DE40;
    // 0x0042DE34: nop

L_0042DE38:
    // 0x0042DE38: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE3C: addiu       $a1, $a1, -0x6E94
    ctx->r5 = ADD32(ctx->r5, -0X6E94);
L_0042DE40:
    // 0x0042DE40: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0042DE44: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x0042DE48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0042DE4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042DE50: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0042DE54: jal         0x00416644
    // 0x0042DE58: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0042DE58: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
L_0042DE5C:
    // 0x0042DE5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042DE60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0042DE64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0042DE68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0042DE6C: jr          $ra
    // 0x0042DE70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042DE70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042DD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042DD84:
    // 0x0042DD94: bne         $v0, $zero, L_0042DD84
    if (ctx->r2 != 0) {
        // 0x0042DD98: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0042DD84;
    }
    // 0x0042DD98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0042DD9C: lw          $v0, 0x9F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9F8);
    // 0x0042DDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DDA4: sw          $zero, 0x9D0($s0)
    MEM_W(0X9D0, ctx->r16) = 0;
    // 0x0042DDA8: sw          $zero, 0x9D4($s0)
    MEM_W(0X9D4, ctx->r16) = 0;
    // 0x0042DDAC: sw          $zero, 0x9D8($s0)
    MEM_W(0X9D8, ctx->r16) = 0;
    // 0x0042DDB0: sw          $zero, 0x9DC($s0)
    MEM_W(0X9DC, ctx->r16) = 0;
    // 0x0042DDB4: sw          $zero, 0x9E0($s0)
    MEM_W(0X9E0, ctx->r16) = 0;
    // 0x0042DDB8: sw          $zero, 0x9E4($s0)
    MEM_W(0X9E4, ctx->r16) = 0;
    // 0x0042DDBC: sw          $zero, 0x9E8($s0)
    MEM_W(0X9E8, ctx->r16) = 0;
    // 0x0042DDC0: sw          $zero, 0x9EC($s0)
    MEM_W(0X9EC, ctx->r16) = 0;
    // 0x0042DDC4: sw          $zero, 0x9F0($s0)
    MEM_W(0X9F0, ctx->r16) = 0;
    // 0x0042DDC8: sw          $zero, 0x9F4($s0)
    MEM_W(0X9F4, ctx->r16) = 0;
    // 0x0042DDCC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0042DDD0: jal         0x0042EA00
    // 0x0042DDD4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    func_0042EA00(rdram, ctx);
        goto after_0;
    // 0x0042DDD4: sw          $v0, 0x9F8($s0)
    MEM_W(0X9F8, ctx->r16) = ctx->r2;
    after_0:
    // 0x0042DDD8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042DDDC: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0042DDE0: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0042DDE4: bnel        $v0, $zero, L_0042DDEC
    if (ctx->r2 != 0) {
        // 0x0042DDE8: sw          $zero, 0x12B4($s0)
        MEM_W(0X12B4, ctx->r16) = 0;
            goto L_0042DDEC;
    }
    goto skip_0;
    // 0x0042DDE8: sw          $zero, 0x12B4($s0)
    MEM_W(0X12B4, ctx->r16) = 0;
    skip_0:
L_0042DDEC:
    // 0x0042DDEC: beq         $s2, $zero, L_0042DE5C
    if (ctx->r18 == 0) {
        // 0x0042DDF0: nop
    
            goto L_0042DE5C;
    }
    // 0x0042DDF0: nop

    // 0x0042DDF4: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x0042DDF8: beq         $v0, $zero, L_0042DE38
    if (ctx->r2 == 0) {
        // 0x0042DDFC: nop
    
            goto L_0042DE38;
    }
    // 0x0042DDFC: nop

    // 0x0042DE00: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042DE04: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x0042DE08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042DE0C: sw          $zero, 0x520($s0)
    MEM_W(0X520, ctx->r16) = 0;
    // 0x0042DE10: sw          $v0, 0xBF8($s0)
    MEM_W(0XBF8, ctx->r16) = ctx->r2;
    // 0x0042DE14: lw          $v0, 0x1FC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1FC);
    // 0x0042DE18: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE1C: addiu       $a1, $a1, -0x7720
    ctx->r5 = ADD32(ctx->r5, -0X7720);
    // 0x0042DE20: bne         $v0, $zero, L_0042DE40
    if (ctx->r2 != 0) {
        // 0x0042DE24: nop
    
            goto L_0042DE40;
    }
    // 0x0042DE24: nop

    // 0x0042DE28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE2C: addiu       $a1, $a1, -0x77F8
    ctx->r5 = ADD32(ctx->r5, -0X77F8);
    // 0x0042DE30: j           L_0042DE40
    // 0x0042DE34: nop

        goto L_0042DE40;
    // 0x0042DE34: nop

L_0042DE38:
    // 0x0042DE38: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0042DE3C: addiu       $a1, $a1, -0x6E94
    ctx->r5 = ADD32(ctx->r5, -0X6E94);
L_0042DE40:
    // 0x0042DE40: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0042DE44: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x0042DE48: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0042DE4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0042DE50: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0042DE54: jal         0x00416644
    // 0x0042DE58: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0042DE58: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_1:
L_0042DE5C:
    // 0x0042DE5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042DE60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0042DE64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0042DE68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0042DE6C: jr          $ra
    // 0x0042DE70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042DE70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0042E0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E0AC: xori        $v0, $v0, 0x3E7
    ctx->r2 = ctx->r2 ^ 0X3E7;
    // 0x0042E0B0: sltu        $s2, $s2, $v0
    ctx->r18 = ctx->r18 < ctx->r2 ? 1 : 0;
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
        goto after_0;
    // 0x0042E0F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
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
        goto after_1;
    // 0x0042E110: nop

    after_1:
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
        goto after_2;
    // 0x0042E124: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
L_0042E128:
    // 0x0042E128: jal         0x002842B4
    // 0x0042E12C: nop

    func_002842B4(rdram, ctx);
        goto after_3;
    // 0x0042E12C: nop

    after_3:
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
RECOMP_FUNC void entry_0042E0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E0F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
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
    // 0x0042E10C: jal         0x002842C8
    // 0x0042E110: nop

    func_002842C8(rdram, ctx);
        goto after_0;
    // 0x0042E110: nop

    after_0:
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
        goto after_1;
    // 0x0042E124: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
L_0042E128:
    // 0x0042E128: jal         0x002842B4
    // 0x0042E12C: nop

    func_002842B4(rdram, ctx);
        goto after_2;
    // 0x0042E12C: nop

    after_2:
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
RECOMP_FUNC void entry_0042E2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E2A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E2A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E2AC: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x0042E2B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0042E2B4: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0042E2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042E2BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0042E2C0: slti        $v1, $v1, 0x2
    ctx->r3 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0042E2C4: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x0042E2C8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0042E2CC: beq         $v0, $zero, L_0042E2E0
    if (ctx->r2 == 0) {
        // 0x0042E2D0: sll         $a2, $v1, 1
        ctx->r6 = S32(ctx->r3 << 1);
            goto L_0042E2E0;
    }
    // 0x0042E2D0: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x0042E2D4: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x0042E2D8: beq         $v0, $zero, L_0042E2EC
    if (ctx->r2 == 0) {
        // 0x0042E2DC: nop
    
            goto L_0042E2EC;
    }
    // 0x0042E2DC: nop

L_0042E2E0:
    // 0x0042E2E0: lhu         $v0, 0x52A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X52A);
    // 0x0042E2E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0042E2E8: sh          $v0, 0x52A($s0)
    MEM_H(0X52A, ctx->r16) = ctx->r2;
L_0042E2EC:
    // 0x0042E2EC: lh          $v0, 0x52A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E2F0: bgtz        $v0, L_0042E334
    if (SIGNED(ctx->r2) > 0) {
        // 0x0042E2F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042E334;
    }
    // 0x0042E2F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E2F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E2FC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E300: beq         $v0, $zero, L_0042E324
    if (ctx->r2 == 0) {
        // 0x0042E304: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_0042E324;
    }
    // 0x0042E304: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0042E308: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x0042E30C: bne         $v0, $zero, L_0042E324
    if (ctx->r2 != 0) {
        // 0x0042E310: nop
    
            goto L_0042E324;
    }
    // 0x0042E310: nop

    // 0x0042E314: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042E318: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0042E31C: beq         $v0, $zero, L_0042E420
    if (ctx->r2 == 0) {
        // 0x0042E320: nop
    
            goto L_0042E420;
    }
    // 0x0042E320: nop

L_0042E324:
    // 0x0042E324: jal         0x0024E5F0
    // 0x0042E328: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x0042E328: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x0042E32C: j           L_0042E420
    // 0x0042E330: nop

        goto L_0042E420;
    // 0x0042E330: nop

L_0042E334:
    // 0x0042E334: lw          $a1, 0x92C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X92C);
    // 0x0042E338: jal         0x00248BA8
    // 0x0042E33C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x0042E33C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0042E340: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E344: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E348: bne         $v0, $zero, L_0042E36C
    if (ctx->r2 != 0) {
        // 0x0042E34C: nop
    
            goto L_0042E36C;
    }
    // 0x0042E34C: nop

    // 0x0042E350: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x0042E354: jal         0x00285BD0
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0042E35C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E360: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E364: beq         $v0, $zero, L_0042E37C
    if (ctx->r2 == 0) {
        // 0x0042E368: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0042E37C;
    }
    // 0x0042E368: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0042E36C:
    // 0x0042E36C: jal         0x002540E4
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_3;
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0042E374: j           L_0042E384
    // 0x0042E378: nop

        goto L_0042E384;
    // 0x0042E378: nop

L_0042E37C:
    // 0x0042E37C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E380: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
L_0042E384:
    // 0x0042E384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042E388: lwc1        $f0, 0x6AC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC8);
    // 0x0042E38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E390: jal         0x00248340
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_4;
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x0042E398: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0042E39C: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x0042E3A0: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0042E3A4: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x0042E3A8: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0042E3AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E3B0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0042E3B4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042E3B8: bne         $v1, $v0, L_0042E408
    if (ctx->r3 != ctx->r2) {
        // 0x0042E3BC: nop
    
            goto L_0042E408;
    }
    // 0x0042E3BC: nop

    // 0x0042E3C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E3C4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E3C8: bne         $v0, $zero, L_0042E418
    if (ctx->r2 != 0) {
        // 0x0042E3CC: nop
    
            goto L_0042E418;
    }
    // 0x0042E3CC: nop

    // 0x0042E3D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042E3D4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0042E3D8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0042E3DC: bne         $v0, $zero, L_0042E408
    if (ctx->r2 != 0) {
        // 0x0042E3E0: nop
    
            goto L_0042E408;
    }
    // 0x0042E3E0: nop

    // 0x0042E3E4: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E3E8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0042E3EC: beq         $v0, $zero, L_0042E408
    if (ctx->r2 == 0) {
        // 0x0042E3F0: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0042E408;
    }
    // 0x0042E3F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0042E3F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E3F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E3FC: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x0042E400: jal         0x0027580C
    // 0x0042E404: nop

    func_0027580C(rdram, ctx);
        goto after_5;
    // 0x0042E404: nop

    after_5:
L_0042E408:
    // 0x0042E408: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E40C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E410: beq         $v0, $zero, L_0042E420
    if (ctx->r2 == 0) {
        // 0x0042E414: nop
    
            goto L_0042E420;
    }
    // 0x0042E414: nop

L_0042E418:
    // 0x0042E418: jal         0x00248A8C
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_6;
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_0042E420:
    // 0x0042E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
;}
RECOMP_FUNC void entry_0042E340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E340: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E344: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E348: bne         $v0, $zero, L_0042E36C
    if (ctx->r2 != 0) {
        // 0x0042E34C: nop
    
            goto L_0042E36C;
    }
    // 0x0042E34C: nop

    // 0x0042E350: lw          $a0, 0xA50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA50);
    // 0x0042E354: jal         0x00285BD0
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_0;
    // 0x0042E358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0042E35C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E360: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E364: beq         $v0, $zero, L_0042E37C
    if (ctx->r2 == 0) {
        // 0x0042E368: addiu       $v0, $zero, 0x6400
        ctx->r2 = ADD32(0, 0X6400);
            goto L_0042E37C;
    }
    // 0x0042E368: addiu       $v0, $zero, 0x6400
    ctx->r2 = ADD32(0, 0X6400);
L_0042E36C:
    // 0x0042E36C: jal         0x002540E4
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002540E4(rdram, ctx);
        goto after_1;
    // 0x0042E370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042E374: j           L_0042E384
    // 0x0042E378: nop

        goto L_0042E384;
    // 0x0042E378: nop

L_0042E37C:
    // 0x0042E37C: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E380: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
L_0042E384:
    // 0x0042E384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042E388: lwc1        $f0, 0x6AC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AC8);
    // 0x0042E38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E390: jal         0x00248340
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    func_00248340(rdram, ctx);
        goto after_2;
    // 0x0042E394: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0042E398: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x0042E39C: sw          $zero, 0x12A8($s0)
    MEM_W(0X12A8, ctx->r16) = 0;
    // 0x0042E3A0: sw          $zero, 0x12AC($s0)
    MEM_W(0X12AC, ctx->r16) = 0;
    // 0x0042E3A4: sw          $zero, 0x12B0($s0)
    MEM_W(0X12B0, ctx->r16) = 0;
    // 0x0042E3A8: sw          $zero, 0x12A4($s0)
    MEM_W(0X12A4, ctx->r16) = 0;
    // 0x0042E3AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E3B0: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0042E3B4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042E3B8: bne         $v1, $v0, L_0042E408
    if (ctx->r3 != ctx->r2) {
        // 0x0042E3BC: nop
    
            goto L_0042E408;
    }
    // 0x0042E3BC: nop

    // 0x0042E3C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E3C4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E3C8: bne         $v0, $zero, L_0042E418
    if (ctx->r2 != 0) {
        // 0x0042E3CC: nop
    
            goto L_0042E418;
    }
    // 0x0042E3CC: nop

    // 0x0042E3D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042E3D4: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x0042E3D8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x0042E3DC: bne         $v0, $zero, L_0042E408
    if (ctx->r2 != 0) {
        // 0x0042E3E0: nop
    
            goto L_0042E408;
    }
    // 0x0042E3E0: nop

    // 0x0042E3E4: lh          $v1, 0x52A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X52A);
    // 0x0042E3E8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0042E3EC: beq         $v0, $zero, L_0042E408
    if (ctx->r2 == 0) {
        // 0x0042E3F0: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_0042E408;
    }
    // 0x0042E3F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0042E3F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E3F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E3FC: lh          $a0, -0x1D4C($at)
    ctx->r4 = MEM_H(ctx->r1, -0X1D4C);
    // 0x0042E400: jal         0x0027580C
    // 0x0042E404: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0042E404: nop

    after_3:
L_0042E408:
    // 0x0042E408: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E40C: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E410: beq         $v0, $zero, L_0042E420
    if (ctx->r2 == 0) {
        // 0x0042E414: nop
    
            goto L_0042E420;
    }
    // 0x0042E414: nop

L_0042E418:
    // 0x0042E418: jal         0x00248A8C
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x0042E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_0042E420:
    // 0x0042E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E428: jr          $ra
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042E420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E428: jr          $ra
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042E4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E4A8: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x0042E4AC: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x0042E4B0: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x0042E4B4: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x0042E4B8: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x0042E4BC: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x0042E4C0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0042E4C4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0042E4C8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0042E4CC: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x0042E4D0: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x0042E4D4: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x0042E4D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x0042E4DC: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x0042E4E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0042E4E4: bnel        $v1, $v0, L_0042E520
    if (ctx->r3 != ctx->r2) {
        // 0x0042E4E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0042E520;
    }
    goto skip_0;
    // 0x0042E4E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x0042E4EC: jal         0x002113A4
    // 0x0042E4F0: nop

    func_002113A4(rdram, ctx);
        goto after_0;
    // 0x0042E4F0: nop

    after_0:
    // 0x0042E4F4: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x0042E4F8: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x0042E4FC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042E500: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x0042E504: mfhi        $t0
    ctx->r8 = hi;
    // 0x0042E508: sra         $a0, $t0, 2
    ctx->r4 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0042E50C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x0042E510: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x0042E514: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0042E518: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0042E51C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_0042E520:
    // 0x0042E520: sb          $v0, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r2;
    // 0x0042E524: jal         0x00248A8C
    // 0x0042E528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_1;
    // 0x0042E528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0042E52C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E530: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0042E534: beq         $v0, $zero, L_0042E584
    if (ctx->r2 == 0) {
        // 0x0042E538: addiu       $a2, $zero, 0x66
        ctx->r6 = ADD32(0, 0X66);
            goto L_0042E584;
    }
    // 0x0042E538: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
    // 0x0042E53C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042E540: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0042E544: beq         $v0, $zero, L_0042E56C
    if (ctx->r2 == 0) {
        // 0x0042E548: nop
    
            goto L_0042E56C;
    }
    // 0x0042E548: nop

    // 0x0042E54C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0042E550: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x0042E554: beq         $v0, $zero, L_0042E56C
    if (ctx->r2 == 0) {
        // 0x0042E558: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0042E56C;
    }
    // 0x0042E558: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0042E55C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0042E560: lw          $a2, -0x24A4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X24A4);
    // 0x0042E564: j           L_0042E588
    // 0x0042E568: nop

        goto L_0042E588;
    // 0x0042E568: nop

L_0042E56C:
    // 0x0042E56C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0042E570: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x0042E574: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042E578: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0042E57C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042E580: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
L_0042E584:
    // 0x0042E584: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0042E588:
    // 0x0042E588: lw          $a3, 0xC04($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC04);
    // 0x0042E58C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042E590: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0042E594: jal         0x002241D8
    // 0x0042E598: nop

    func_002241D8(rdram, ctx);
        goto after_2;
    // 0x0042E598: nop

    after_2:
    // 0x0042E59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E5A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E5A4: jr          $ra
    // 0x0042E5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0042E720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042E6E8:
    // 0x0042E720: jal         0x00248340
    // 0x0042E724: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_0;
    // 0x0042E724: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_0:
    // 0x0042E728: lbu         $v0, 0x28($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X28);
    // 0x0042E72C: beq         $v0, $zero, L_0042E758
    if (ctx->r2 == 0) {
        // 0x0042E730: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0042E758;
    }
    // 0x0042E730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E734: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x0042E738: jal         0x0042DC18
    // 0x0042E73C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0042DC18(rdram, ctx);
        goto after_1;
    // 0x0042E73C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x0042E740: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E744: jal         0x00200738
    // 0x0042E748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x0042E748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0042E74C: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x0042E750: jal         0x00200518
    // 0x0042E754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_3;
    // 0x0042E754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_0042E758:
    // 0x0042E758: addiu       $s6, $s6, 0x224
    ctx->r22 = ADD32(ctx->r22, 0X224);
    // 0x0042E75C: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x0042E760: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x0042E764: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0042E768: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042E76C: bne         $v0, $zero, L_0042E6E8
    if (ctx->r2 != 0) {
        // 0x0042E770: addiu       $s0, $s0, 0x1328
        ctx->r16 = ADD32(ctx->r16, 0X1328);
            goto L_0042E6E8;
    }
    // 0x0042E770: addiu       $s0, $s0, 0x1328
    ctx->r16 = ADD32(ctx->r16, 0X1328);
    // 0x0042E774: j           L_0042E800
    // 0x0042E778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0042E800;
    // 0x0042E778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042E77C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042E780: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x0042E784: lw          $s1, 0x4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X4);
    // 0x0042E788: lb          $s0, 0x2F($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X2F);
    // 0x0042E78C: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x0042E790: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x0042E794: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0042E798: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0042E79C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0042E7A0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0042E7A4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0042E7A8: jal         0x002470E8
    // 0x0042E7AC: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_4;
    // 0x0042E7AC: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_4:
    // 0x0042E7B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E7B4: sw          $s0, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->r16;
    // 0x0042E7B8: sw          $s3, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->r19;
    // 0x0042E7BC: sw          $zero, 0x1288($s1)
    MEM_W(0X1288, ctx->r17) = 0;
    // 0x0042E7C0: sw          $zero, 0x128C($s1)
    MEM_W(0X128C, ctx->r17) = 0;
    // 0x0042E7C4: sw          $zero, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = 0;
    // 0x0042E7C8: sw          $zero, 0x930($s1)
    MEM_W(0X930, ctx->r17) = 0;
    // 0x0042E7CC: jal         0x00248340
    // 0x0042E7D0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_5;
    // 0x0042E7D0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_5:
    // 0x0042E7D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E7D8: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x0042E7DC: jal         0x0042DC18
    // 0x0042E7E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0042DC18(rdram, ctx);
        goto after_6;
    // 0x0042E7E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_6:
    // 0x0042E7E4: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E7E8: jal         0x00200738
    // 0x0042E7EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_7;
    // 0x0042E7EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0042E7F0: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x0042E7F4: jal         0x00200518
    // 0x0042E7F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_8;
    // 0x0042E7F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0042E7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0042E800:
    // 0x0042E800: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042E804: sw          $v0, -0x5310($at)
    MEM_W(-0X5310, ctx->r1) = ctx->r2;
    // 0x0042E808: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042E80C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042E810: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042E814: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042E818: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042E81C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042E820: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042E824: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042E828: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E82C: jr          $ra
    // 0x0042E830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042E830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042E7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E7B4: sw          $s0, 0x514($s1)
    MEM_W(0X514, ctx->r17) = ctx->r16;
    // 0x0042E7B8: sw          $s3, 0x518($s1)
    MEM_W(0X518, ctx->r17) = ctx->r19;
    // 0x0042E7BC: sw          $zero, 0x1288($s1)
    MEM_W(0X1288, ctx->r17) = 0;
    // 0x0042E7C0: sw          $zero, 0x128C($s1)
    MEM_W(0X128C, ctx->r17) = 0;
    // 0x0042E7C4: sw          $zero, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = 0;
    // 0x0042E7C8: sw          $zero, 0x930($s1)
    MEM_W(0X930, ctx->r17) = 0;
    // 0x0042E7CC: jal         0x00248340
    // 0x0042E7D0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    func_00248340(rdram, ctx);
        goto after_0;
    // 0x0042E7D0: sw          $zero, 0xC00($s1)
    MEM_W(0XC00, ctx->r17) = 0;
    after_0:
    // 0x0042E7D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E7D8: lb          $a1, 0x30($s3)
    ctx->r5 = MEM_B(ctx->r19, 0X30);
    // 0x0042E7DC: jal         0x0042DC18
    // 0x0042E7E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_0042DC18(rdram, ctx);
        goto after_1;
    // 0x0042E7E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
    // 0x0042E7E4: addiu       $a0, $s4, 0xC
    ctx->r4 = ADD32(ctx->r20, 0XC);
    // 0x0042E7E8: jal         0x00200738
    // 0x0042E7EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x0042E7EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0042E7F0: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x0042E7F4: jal         0x00200518
    // 0x0042E7F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200518(rdram, ctx);
        goto after_3;
    // 0x0042E7F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0042E7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042E800: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0042E804: sw          $v0, -0x5310($at)
    MEM_W(-0X5310, ctx->r1) = ctx->r2;
    // 0x0042E808: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0042E80C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0042E810: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0042E814: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0042E818: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042E81C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042E820: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042E824: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042E828: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E82C: jr          $ra
    // 0x0042E830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0042E830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void entry_0042E974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E974: sw          $zero, 0x1288($a0)
    MEM_W(0X1288, ctx->r4) = 0;
    // 0x0042E978: sw          $zero, 0x128C($a0)
    MEM_W(0X128C, ctx->r4) = 0;
    // 0x0042E97C: sw          $zero, 0x92C($a0)
    MEM_W(0X92C, ctx->r4) = 0;
    // 0x0042E980: sw          $zero, 0x930($a0)
    MEM_W(0X930, ctx->r4) = 0;
    // 0x0042E984: jal         0x00248340
    // 0x0042E988: sw          $zero, 0xC00($a0)
    MEM_W(0XC00, ctx->r4) = 0;
    func_00248340(rdram, ctx);
        goto after_0;
    // 0x0042E988: sw          $zero, 0xC00($a0)
    MEM_W(0XC00, ctx->r4) = 0;
    after_0:
    // 0x0042E98C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0042E990: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042E994: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042E998: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E99C: jr          $ra
    // 0x0042E9A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042E9A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0042EA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_0042EAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042EAD4: nop

    // 0x0042EAD8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042EADC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042EADC(rdram, ctx);
;}
RECOMP_FUNC void entry_0042F074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042EFF4:
    // 0x0042F074: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x0042F078: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x0042F07C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042F080: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x0042F084: bne         $v0, $zero, L_0042EFF4
    if (ctx->r2 != 0) {
        // 0x0042F088: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_0042EFF4;
    }
    // 0x0042F088: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x0042F08C: addiu       $v0, $s1, 0x194
    ctx->r2 = ADD32(ctx->r17, 0X194);
    // 0x0042F090: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0042F094: lh          $a0, 0x6($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6);
    // 0x0042F098: lui         $v1, 0x43
    ctx->r3 = S32(0X43 << 16);
    // 0x0042F09C: addiu       $v1, $v1, -0x838
    ctx->r3 = ADD32(ctx->r3, -0X838);
    // 0x0042F0A0: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x0042F0A4: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x0042F0A8: sw          $s3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r19;
    // 0x0042F0AC: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x0042F0B0: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x0042F0B4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x0042F0B8: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x0042F0BC: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x0042F0C0: sw          $zero, 0x1B8($s1)
    MEM_W(0X1B8, ctx->r17) = 0;
    // 0x0042F0C4: sw          $v0, 0x1B4($s1)
    MEM_W(0X1B4, ctx->r17) = ctx->r2;
    // 0x0042F0C8: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x0042F0CC: sw          $zero, 0x1C0($s1)
    MEM_W(0X1C0, ctx->r17) = 0;
    // 0x0042F0D0: sw          $zero, 0x1C4($s1)
    MEM_W(0X1C4, ctx->r17) = 0;
    // 0x0042F0D4: sw          $v0, 0x1BC($s1)
    MEM_W(0X1BC, ctx->r17) = ctx->r2;
    // 0x0042F0D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0042F0DC: addiu       $v0, $v0, -0x5358
    ctx->r2 = ADD32(ctx->r2, -0X5358);
    // 0x0042F0E0: addiu       $s0, $v0, -0x1D0
    ctx->r16 = ADD32(ctx->r2, -0X1D0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042F0E4 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042F0E4(rdram, ctx);
;}
RECOMP_FUNC void entry_0042F37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_0042F3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x0042F3FC: nop

    after_0:
L_0042F400:
    // 0x0042F400: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F404: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    // 0x0042F408: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F40C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
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
        goto after_1;
    // 0x0042F420: nop

    after_1:
L_0042F424:
    // 0x0042F424: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x0042F428: addiu       $a0, $a0, 0x114
    ctx->r4 = ADD32(ctx->r4, 0X114);
    // 0x0042F42C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0042F430: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
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
        goto after_2;
    // 0x0042F444: nop

    after_2:
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
        goto after_3;
    // 0x0042F4D4: nop

    after_3:
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
RECOMP_FUNC void entry_0042F8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042F8A4:
    // 0x0042F8D0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8D4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8D8: nop

    // 0x0042F8DC: nop

    // 0x0042F8E0: mult        $t4, $t2
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8E4: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8E8: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F8EC: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x0042F8F0: lw          $v0, 0x114($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X114);
    // 0x0042F8F4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F8F8: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F8FC: nop

    // 0x0042F900: nop

    // 0x0042F904: mult        $t4, $t1
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F908: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0042F90C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x0042F910: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042F914: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F918: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0042F91C: bne         $v0, $zero, L_0042F8A4
    if (ctx->r2 != 0) {
        // 0x0042F920: sw          $v1, 0x1C4($a2)
        MEM_W(0X1C4, ctx->r6) = ctx->r3;
            goto L_0042F8A4;
    }
    // 0x0042F920: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x0042F924: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0042F928: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0042F92C: lw          $v0, 0x194($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X194);
    // 0x0042F930: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F934: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F938: lui         $v0, 0x8765
    ctx->r2 = S32(0X8765 << 16);
    // 0x0042F93C: ori         $v0, $v0, 0x1234
    ctx->r2 = ctx->r2 | 0X1234;
    // 0x0042F940: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0042F944: lw          $v0, 0x1C4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C4);
    // 0x0042F948: mflo        $t4
    ctx->r12 = lo;
    // 0x0042F94C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x0042F950: jr          $ra
    // 0x0042F954: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
    return;
    // 0x0042F954: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void entry_0042FE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042FE04:
    // 0x0042FE0C: jal         0x00200574
    // 0x0042FE10: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_00200574(rdram, ctx);
        goto after_0;
    // 0x0042FE10: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_0:
    // 0x0042FE14: lw          $v0, 0xF08($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF08);
    // 0x0042FE18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0042FE1C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0042FE20: bne         $v0, $zero, L_0042FE04
    if (ctx->r2 != 0) {
        // 0x0042FE24: addiu       $a0, $s2, 0xF0C
        ctx->r4 = ADD32(ctx->r18, 0XF0C);
            goto L_0042FE04;
    }
    // 0x0042FE24: addiu       $a0, $s2, 0xF0C
    ctx->r4 = ADD32(ctx->r18, 0XF0C);
    // 0x0042FE28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042FE2C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042FE30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042FE34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042FE38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FE3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FE40: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0042FE44: jr          $ra
    // 0x0042FE48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0042FE48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0042FE78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042FE78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0042FE7C: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x0042FE80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FE84: jal         0x00200500
    // 0x0042FE88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042FE88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x0042FE8C: addiu       $a0, $s0, 0xF0C
    ctx->r4 = ADD32(ctx->r16, 0XF0C);
    // 0x0042FE90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042FE94: jal         0x00200500
    // 0x0042FE98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x0042FE98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x0042FE9C: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    // 0x0042FEA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042FEA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042FEA8: sw          $v0, 0x11E8($s0)
    MEM_W(0X11E8, ctx->r16) = ctx->r2;
    // 0x0042FEAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042FEB0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x0042FEB4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0042FEB8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x0042FEBC: sw          $zero, 0xF00($s0)
    MEM_W(0XF00, ctx->r16) = 0;
    // 0x0042FEC0: sw          $zero, 0xF04($s0)
    MEM_W(0XF04, ctx->r16) = 0;
    // 0x0042FEC4: sw          $zero, 0xF08($s0)
    MEM_W(0XF08, ctx->r16) = 0;
    // 0x0042FEC8: jal         0x0042F9B0
    // 0x0042FECC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    func_0042F9B0(rdram, ctx);
        goto after_2;
    // 0x0042FECC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    after_2:
    // 0x0042FED0: jal         0x0027D160
    // 0x0042FED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0027D160(rdram, ctx);
        goto after_3;
    // 0x0042FED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0042FED8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0042FEDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042FEE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042FEE4: jr          $ra
    // 0x0042FEE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042FEE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004300E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004300E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004300EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x004300F0: addiu       $a1, $a1, 0x6CF1
    ctx->r5 = ADD32(ctx->r5, 0X6CF1);
    // 0x004300F4: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x004300F8: addiu       $a2, $a2, 0x6778
    ctx->r6 = ADD32(ctx->r6, 0X6778);
    // 0x004300FC: jal         0x00298A40
    // 0x00430100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osContInit_recomp(rdram, ctx);
        goto after_0;
    // 0x00430100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00430104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00430108: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0043010C: jal         0x0029B820
    // 0x00430110: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x00430110: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00430114: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00430118: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x0043011C: addiu       $s1, $s1, 0x652C
    ctx->r17 = ADD32(ctx->r17, 0X652C);
    // 0x00430120: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00430124: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430128: sh          $v0, 0x5EB8($at)
    MEM_H(0X5EB8, ctx->r1) = ctx->r2;
    // 0x0043012C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00430130: sb          $zero, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = 0;
L_00430134:
    // 0x00430134: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00430138: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0043013C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00430140: sw          $zero, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = 0;
    // 0x00430144: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430148: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0043014C: sw          $zero, 0x67B0($at)
    MEM_W(0X67B0, ctx->r1) = 0;
    // 0x00430150: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430154: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00430158: sw          $zero, 0x5EA8($at)
    MEM_W(0X5EA8, ctx->r1) = 0;
    // 0x0043015C: jal         0x00285A80
    // 0x00430160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A80(rdram, ctx);
        goto after_2;
    // 0x00430160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00430164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00430168: jal         0x004301C8
    // 0x0043016C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_004301C8(rdram, ctx);
        goto after_3;
    // 0x0043016C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00430170: beql        $v0, $zero, L_00430198
    if (ctx->r2 == 0) {
        // 0x00430174: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_00430198;
    }
    goto skip_0;
    // 0x00430174: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x00430178: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0043017C: lbu         $v0, 0x6CF2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6CF2);
    // 0x00430180: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00430184: sh          $s0, 0x5EB8($at)
    MEM_H(0X5EB8, ctx->r1) = ctx->r16;
    // 0x00430188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043018C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00430190: sb          $v0, 0x6CF2($at)
    MEM_B(0X6CF2, ctx->r1) = ctx->r2;
    // 0x00430194: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_00430198:
    // 0x00430198: bgez        $s0, L_00430134
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0043019C: addiu       $s1, $s1, -0x224
        ctx->r17 = ADD32(ctx->r17, -0X224);
            goto L_00430134;
    }
    // 0x0043019C: addiu       $s1, $s1, -0x224
    ctx->r17 = ADD32(ctx->r17, -0X224);
    // 0x004301A0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004301A4: lh          $v0, 0x5EB8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5EB8);
    // 0x004301A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004301AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004301B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004301B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004301B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004301BC: sb          $v1, 0x6CF0($at)
    MEM_B(0X6CF0, ctx->r1) = ctx->r3;
    // 0x004301C0: jr          $ra
    // 0x004301C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004301C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void static_4_0021E428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E428: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x0021E42C: jal         0x002017D4
    // 0x0021E430: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021E430: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0021E434: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0021E438: jal         0x002017D4
    // 0x0021E43C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021E43C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0021E440: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0021E444: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x0021E448: lw          $v0, 0x6C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X6C);
    // 0x0021E44C: lw          $v1, 0x14C($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X14C);
    // 0x0021E450: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021E454: beql        $v0, $zero, L_0021E510
    if (ctx->r2 == 0) {
            // 0x0021E458: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    static_4_0021E510(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x0021E458: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x0021E45C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x0021E460: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0021E464: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0021E468: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x0021E46C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0021E470: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0021E474: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0021E478: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
L_0021E47C:
    // 0x0021E47C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021E480: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0021E484: jal         0x0020EEF8
    // 0x0021E488: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x0021E488: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0021E48C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0021E490: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x0021E494: bne         $v0, $zero, L_0021E47C
    if (ctx->r2 != 0) {
        // 0x0021E498: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_0021E47C;
    }
    // 0x0021E498: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x0021E49C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021E4A0: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x0021E4A4: jal         0x0020EF60
    // 0x0021E4A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0021E4A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x0021E4AC: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0021E4B0: jal         0x0020D908
    // 0x0021E4B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0020D908(rdram, ctx);
        goto after_4;
    // 0x0021E4B4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_4:
    // 0x0021E4B8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0021E4BC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0021E4C0: jal         0x0020F85C
    // 0x0021E4C4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    func_0020F85C(rdram, ctx);
        goto after_5;
    // 0x0021E4C4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_5:
    // 0x0021E4C8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x0021E4CC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x0021E4D0: jal         0x0020EF2C
    // 0x0021E4D4: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    func_0020EF2C(rdram, ctx);
        goto after_6;
    // 0x0021E4D4: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    after_6:
    // 0x0021E4D8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0021E4DC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0021E4E0: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0021E4E4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0021E4E8: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0021E4EC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0021E4F0: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0021E4F4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0021E4F8: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x0021E4FC: nop

    // turok2: reconnected split function: a stray ELF symbol at 0x0021E500 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0021E500(rdram, ctx);
;}
RECOMP_FUNC void static_4_0021E510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0021E428:
    // 0x0021E510: slt         $v0, $s3, $fp
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0021E514: bne         $v0, $zero, L_0021E428
    if (ctx->r2 != 0) {
            // 0x0021E518: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    static_4_0021E428(rdram, ctx);
    return;
    }
    // 0x0021E518: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // turok2: reconnected split function: a stray ELF symbol at 0x0021E51C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    static_4_0021E51C(rdram, ctx);
;}
RECOMP_FUNC void static_4_0021E51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E51C: beq         $s4, $zero, L_0021E590
    if (ctx->r20 == 0) {
        // 0x0021E520: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_0021E590;
    }
    // 0x0021E520: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x0021E524: lw          $v1, 0xB8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB8);
    // 0x0021E528: addiu       $a0, $s4, 0x70
    ctx->r4 = ADD32(ctx->r20, 0X70);
L_0021E52C:
    // 0x0021E52C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x0021E530: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x0021E534: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x0021E538: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x0021E53C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x0021E540: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x0021E544: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x0021E548: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x0021E54C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0021E550: bne         $v0, $a0, L_0021E52C
    if (ctx->r2 != ctx->r4) {
        // 0x0021E554: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0021E52C;
    }
    // 0x0021E554: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0021E558: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x0021E55C: lw          $v0, 0xD4($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XD4);
    // 0x0021E560: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x0021E564: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021E568: beq         $v0, $zero, L_0021E590
    if (ctx->r2 == 0) {
        // 0x0021E56C: nop
    
            goto L_0021E590;
    }
    // 0x0021E56C: nop

    // 0x0021E570: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0021E574: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0021E578: bne         $v0, $zero, L_0021E590
    if (ctx->r2 != 0) {
        // 0x0021E57C: nop
    
            goto L_0021E590;
    }
    // 0x0021E57C: nop

    // 0x0021E580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021E584: lwc1        $f0, 0x5CDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5CDC);
    // 0x0021E588: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x0021E58C: swc1        $f0, 0x68($t0)
    MEM_W(0X68, ctx->r8) = ctx->f0.u32l;
L_0021E590:
    // 0x0021E590: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x0021E594: jal         0x002051F4
    // 0x0021E598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_0;
    // 0x0021E598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x0021E59C: sltu        $v0, $zero, $s4
    ctx->r2 = 0 < ctx->r20 ? 1 : 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x0021E5A0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    static_4_0021E5A0(rdram, ctx);
;}
RECOMP_FUNC void static_4_0021E5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E5A0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x0021E5A4: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x0021E5A8: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x0021E5AC: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x0021E5B0: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x0021E5B4: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x0021E5B8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0021E5BC: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0021E5C0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0021E5C4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0021E5C8: ldc1        $f20, 0xA0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XA0);
    // 0x0021E5CC: jr          $ra
    // 0x0021E5D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0021E5D0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void static_4_002A31FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
