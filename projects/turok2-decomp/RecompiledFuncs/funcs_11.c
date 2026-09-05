#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002A15B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A15B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002A15BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002A15C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002A15C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A15C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002A15CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002A15D0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x002A15D4: beq         $s1, $zero, L_002A1648
    if (ctx->r17 == 0) {
        // 0x002A15D8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_002A1648;
    }
    // 0x002A15D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_002A15DC:
    // 0x002A15DC: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x002A15E0: beq         $v0, $zero, L_002A164C
    if (ctx->r2 == 0) {
        // 0x002A15E4: sltiu       $v0, $s1, 0x4
        ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
            goto L_002A164C;
    }
    // 0x002A15E4: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
    // 0x002A15E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A15EC: jal         0x002A1540
    // 0x002A15F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A1540(rdram, ctx);
        goto after_0;
    // 0x002A15F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_0:
    // 0x002A15F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002A15F8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x002A15FC: bne         $s1, $zero, L_002A15DC
    if (ctx->r17 != 0) {
        // 0x002A1600: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_002A15DC;
    }
    // 0x002A1600: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A1604: j           L_002A164C
    // 0x002A1608: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
        goto L_002A164C;
    // 0x002A1608: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
L_002A160C:
    // 0x002A160C: jal         0x002A1384
    // 0x002A1610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002A1384(rdram, ctx);
        goto after_1;
    // 0x002A1610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x002A1614: srl         $v1, $v0, 24
    ctx->r3 = S32(U32(ctx->r2) >> 24);
    // 0x002A1618: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002A161C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A1620: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x002A1624: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002A1628: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A162C: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x002A1630: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x002A1634: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A1638: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002A163C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002A1640: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x002A1644: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
L_002A1648:
    // 0x002A1648: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
L_002A164C:
    // 0x002A164C: beq         $v0, $zero, L_002A160C
    if (ctx->r2 == 0) {
        // 0x002A1650: nop
    
            goto L_002A160C;
    }
    // 0x002A1650: nop

    // 0x002A1654: beq         $s1, $zero, L_002A1678
    if (ctx->r17 == 0) {
        // 0x002A1658: nop
    
            goto L_002A1678;
    }
    // 0x002A1658: nop

L_002A165C:
    // 0x002A165C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1660: jal         0x002A1540
    // 0x002A1664: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_002A1540(rdram, ctx);
        goto after_2;
    // 0x002A1664: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_2:
    // 0x002A1668: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x002A166C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x002A1670: bne         $s1, $zero, L_002A165C
    if (ctx->r17 != 0) {
        // 0x002A1674: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_002A165C;
    }
    // 0x002A1674: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_002A1678:
    // 0x002A1678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002A167C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002A1680: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002A1684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A1688: jr          $ra
    // 0x002A168C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002A168C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00255FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255FC8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00255FCC: sw          $a0, 0x1FD8($at)
    MEM_W(0X1FD8, ctx->r1) = ctx->r4;
    // 0x00255FD0: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x00255FD4: lui         $a2, 0x25
    ctx->r6 = S32(0X25 << 16);
    // 0x00255FD8: addiu       $a2, $a2, 0x77DC
    ctx->r6 = ADD32(ctx->r6, 0X77DC);
    // 0x00255FDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00255FE0: jal         0x00283FF8
    // 0x00255FE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_0;
    // 0x00255FE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00255FE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00255FEC: jr          $ra
    // 0x00255FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00255FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00289BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00289BDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00289BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00289BE4: jal         0x00288F60
    // 0x00289BE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00288F60(rdram, ctx);
        goto after_0;
    // 0x00289BE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00289BEC: jal         0x002860A4
    // 0x00289BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002860A4(rdram, ctx);
        goto after_1;
    // 0x00289BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00289BF4: jal         0x002862A4
    // 0x00289BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002862A4(rdram, ctx);
        goto after_2;
    // 0x00289BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00289BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00289C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00289C04: jr          $ra
    // 0x00289C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00289C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00468264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042F37C:
    // 0x00468264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
L_0042F3D0:
    // 0x00468268: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0046826C: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x00468270: addiu       $s2, $s2, 0x56B0
    ctx->r18 = ADD32(ctx->r18, 0X56B0);
    // 0x00468274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00468278: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0046827C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00468280: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x00468284: beq         $v0, $zero, L_004682EC
    if (ctx->r2 == 0) {
        // 0x00468288: nop
    
            goto L_004682EC;
    }
    // 0x00468288: nop

    // 0x0046828C: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x00468290: blez        $v0, L_00468380
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468294: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00468380;
    }
    // 0x00468294: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00468298: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
L_0046829C:
    // 0x0046829C: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x004682A0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x004682A4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004682A8: jalr        $v0
    // 0x004682AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x004682AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x004682B0: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x004682B4: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    // 0x004682B8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004682BC: jalr        $v0
    // 0x004682C0: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x004682C0: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    after_1:
    // 0x004682C4: addiu       $s0, $s0, 0x114
    ctx->r16 = ADD32(ctx->r16, 0X114);
    // 0x004682C8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x004682CC: jalr        $v0
    // 0x004682D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x004682D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x004682D4: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x004682D8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004682DC: bne         $v0, $zero, L_0046829C
    if (ctx->r2 != 0) {
        // 0x004682E0: sll         $s0, $s1, 5
        ctx->r16 = S32(ctx->r17 << 5);
            goto L_0046829C;
    }
    // 0x004682E0: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
    // 0x004682E4: j           L_0042F37C
    // 0x004682E8: nop

    entry_0042F37C(rdram, ctx);
    return;
    // 0x004682E8: nop

L_004682EC:
    // 0x004682EC: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x004682F0: blez        $v0, L_00468380
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004682F4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00468380;
    }
    // 0x004682F4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004682F8: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
L_004682FC:
    // 0x004682FC: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x00468300: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00468304: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00468308: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x0046830C: bgtz        $v0, L_00468320
    if (SIGNED(ctx->r2) > 0) {
        // 0x00468310: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_00468320;
    }
    // 0x00468310: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00468314: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00468318: jalr        $v0
    // 0x0046831C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x0046831C: nop

    after_3:
L_00468320:
    // 0x00468320: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x00468324: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    // 0x00468328: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0046832C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x00468330: bgtz        $v0, L_00468344
    if (SIGNED(ctx->r2) > 0) {
        // 0x00468334: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_00468344;
    }
    // 0x00468334: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x00468338: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0046833C: jalr        $v0
    // 0x00468340: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x00468340: nop

    after_4:
L_00468344:
    // 0x00468344: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x00468348: addiu       $a0, $a0, 0x114
    ctx->r4 = ADD32(ctx->r4, 0X114);
    // 0x0046834C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00468350: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_overlay_wait(rdram, ctx);

    // 0x00468354: bgtz        $v0, L_00468368
    if (SIGNED(ctx->r2) > 0) {
        // 0x00468358: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_00468368;
    }
    // 0x00468358: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0046835C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00468360: jalr        $v0
    // 0x00468364: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x00468364: nop

    after_5:
L_00468368:
    // 0x00468368: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x0046836C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00468370: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00468374: bne         $v0, $zero, L_004682FC
    if (ctx->r2 != 0) {
        // 0x00468378: sll         $s0, $s1, 5
        ctx->r16 = S32(ctx->r17 << 5);
            goto L_004682FC;
    }
    // 0x00468378: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
    // 0x0046837C: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
L_00468380:
    // 0x00468380: blez        $v0, L_004683F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468384: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004683F0;
    }
    // 0x00468384: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00468388: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0046838C: addiu       $a0, $a0, 0x5F87
    ctx->r4 = ADD32(ctx->r4, 0X5F87);
    // 0x00468390: addiu       $a2, $a0, -0x1
    ctx->r6 = ADD32(ctx->r4, -0X1);
    // 0x00468394: addiu       $a1, $a0, -0x17
    ctx->r5 = ADD32(ctx->r4, -0X17);
    // 0x00468398: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_0046839C:
    // 0x0046839C: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x004683A0: beq         $v0, $zero, L_004683B8
    if (ctx->r2 == 0) {
        // 0x004683A4: nop
    
            goto L_004683B8;
    }
    // 0x004683A4: nop

    // 0x004683A8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x004683AC: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x004683B0: j           L_0042F3D0
    // 0x004683B4: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    entry_0042F3D0(rdram, ctx);
    return;
    // 0x004683B4: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_004683B8:
    // 0x004683B8: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x004683BC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x004683C0: lbu         $v0, 0x97($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X97);
    // 0x004683C4: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x004683C8: lbu         $v0, 0x117($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X117);
    // 0x004683CC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x004683D0: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    // 0x004683D4: addiu       $a2, $a2, 0x224
    ctx->r6 = ADD32(ctx->r6, 0X224);
    // 0x004683D8: addiu       $a1, $a1, 0x224
    ctx->r5 = ADD32(ctx->r5, 0X224);
    // 0x004683DC: lw          $v0, 0x1B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1B4);
    // 0x004683E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004683E4: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004683E8: bne         $v0, $zero, L_0046839C
    if (ctx->r2 != 0) {
        // 0x004683EC: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_0046839C;
    }
    // 0x004683EC: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
L_004683F0:
    // 0x004683F0: jal         0x0042F0E4
    // 0x004683F4: nop

    func_0042F0E4(rdram, ctx);
        goto after_6;
    // 0x004683F4: nop

    after_6:
    // 0x004683F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004683FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00468400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00468404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00468408: jr          $ra
    // 0x0046840C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0046840C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0022782C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022782C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00227830: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00227834: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00227838: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0022783C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00227840: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00227844: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x00227848: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0022784C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00227850: jal         0x0020B5D4
    // 0x00227854: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_0020B5D4(rdram, ctx);
        goto after_0;
    // 0x00227854: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00227858: lw          $s0, 0x3604($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3604);
    // 0x0022785C: beq         $s0, $zero, L_00227978
    if (ctx->r16 == 0) {
        // 0x00227860: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00227978;
    }
    // 0x00227860: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00227864: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00227868: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022786C: lwc1        $f21, 0x6064($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6064);
    // 0x00227870: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00227874: lwc1        $f20, 0x6068($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6068);
L_00227878:
    // 0x00227878: lwc1        $f1, 0x344($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X344);
    // 0x0022787C: lwc1        $f0, 0x14C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x00227880: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00227884: nop

    // 0x00227888: bc1f        L_0022796C
    if (!c1cs) {
        // 0x0022788C: nop
    
            goto L_0022796C;
    }
    // 0x0022788C: nop

    // 0x00227890: lwc1        $f1, 0x338($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X338);
    // 0x00227894: lwc1        $f0, 0x158($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X158);
    // 0x00227898: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022789C: nop

    // 0x002278A0: bc1f        L_0022796C
    if (!c1cs) {
        // 0x002278A4: nop
    
            goto L_0022796C;
    }
    // 0x002278A4: nop

    // 0x002278A8: lwc1        $f1, 0x34C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X34C);
    // 0x002278AC: lwc1        $f0, 0x154($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X154);
    // 0x002278B0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002278B4: nop

    // 0x002278B8: bc1f        L_0022796C
    if (!c1cs) {
        // 0x002278BC: nop
    
            goto L_0022796C;
    }
    // 0x002278BC: nop

    // 0x002278C0: lwc1        $f1, 0x340($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X340);
    // 0x002278C4: lwc1        $f0, 0x160($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X160);
    // 0x002278C8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002278CC: nop

    // 0x002278D0: bc1f        L_0022796C
    if (!c1cs) {
        // 0x002278D4: nop
    
            goto L_0022796C;
    }
    // 0x002278D4: nop

    // 0x002278D8: lwc1        $f1, 0x348($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X348);
    // 0x002278DC: lwc1        $f0, 0x150($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X150);
    // 0x002278E0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002278E4: nop

    // 0x002278E8: bc1f        L_0022796C
    if (!c1cs) {
        // 0x002278EC: nop
    
            goto L_0022796C;
    }
    // 0x002278EC: nop

    // 0x002278F0: lwc1        $f1, 0x33C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X33C);
    // 0x002278F4: lwc1        $f0, 0x15C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x002278F8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002278FC: nop

    // 0x00227900: bc1f        L_0022796C
    if (!c1cs) {
        // 0x00227904: nop
    
            goto L_0022796C;
    }
    // 0x00227904: nop

    // 0x00227908: addiu       $a0, $s1, 0x2D8
    ctx->r4 = ADD32(ctx->r17, 0X2D8);
    // 0x0022790C: jal         0x0026F60C
    // 0x00227910: addiu       $a1, $s0, 0x14C
    ctx->r5 = ADD32(ctx->r16, 0X14C);
    func_0026F60C(rdram, ctx);
        goto after_1;
    // 0x00227910: addiu       $a1, $s0, 0x14C
    ctx->r5 = ADD32(ctx->r16, 0X14C);
    after_1:
    // 0x00227914: beq         $v0, $zero, L_0022796C
    if (ctx->r2 == 0) {
        // 0x00227918: nop
    
            goto L_0022796C;
    }
    // 0x00227918: nop

    // 0x0022791C: lwc1        $f0, 0x198($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X198);
    // 0x00227920: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00227924: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x00227928: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x0022792C: nop

    // 0x00227930: bc1f        L_0022795C
    if (!c1cs) {
        // 0x00227934: nop
    
            goto L_0022795C;
    }
    // 0x00227934: nop

    // 0x00227938: c.le.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl <= ctx->f21.fl;
    // 0x0022793C: nop

    // 0x00227940: bc1f        L_0022795C
    if (!c1cs) {
        // 0x00227944: nop
    
            goto L_0022795C;
    }
    // 0x00227944: nop

    // 0x00227948: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0022794C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00227950: sw          $s2, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r18;
    // 0x00227954: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00227958: swc1        $f0, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->f0.u32l;
L_0022795C:
    // 0x0022795C: jal         0x002152AC
    // 0x00227960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002152AC(rdram, ctx);
        goto after_2;
    // 0x00227960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00227964: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00227968: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
L_0022796C:
    // 0x0022796C: lw          $s0, 0x1AC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1AC);
    // 0x00227970: bne         $s0, $zero, L_00227878
    if (ctx->r16 != 0) {
        // 0x00227974: nop
    
            goto L_00227878;
    }
    // 0x00227974: nop

L_00227978:
    // 0x00227978: jal         0x0020B624
    // 0x0022797C: nop

    func_0020B624(rdram, ctx);
        goto after_3;
    // 0x0022797C: nop

    after_3:
    // 0x00227980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00227984: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00227988: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0022798C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00227990: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x00227994: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00227998: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0022799C: jr          $ra
    // 0x002279A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002279A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00454E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454E68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00454E6C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00454E70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00454E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00454E78: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00454E7C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00454E80: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x00454E84: beql        $v0, $zero, L_00454E9C
    if (ctx->r2 == 0) {
        // 0x00454E88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00454E9C;
    }
    goto skip_0;
    // 0x00454E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x00454E8C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00454E90: bnel        $v0, $zero, L_00454E98
    if (ctx->r2 != 0) {
        // 0x00454E94: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_00454E98;
    }
    goto skip_1;
    // 0x00454E94: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_00454E98:
    // 0x00454E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00454E9C:
    // 0x00454E9C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00454EA0: lb          $a1, 0x2B($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2B);
    // 0x00454EA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00454EA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00454EAC: jal         0x0041648C
    // 0x00454EB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00454EB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00454EB4: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x00454EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00454EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00454EC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00454EC4: jr          $ra
    // 0x00454EC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00454EC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025FBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FBB8: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025FBBC: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x0025FBC0: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025FBC4: beql        $v0, $zero, L_0025FBCC
    if (ctx->r2 == 0) {
        // 0x0025FBC8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025FBCC;
    }
    goto skip_0;
    // 0x0025FBC8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025FBCC:
    // 0x0025FBCC: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    // 0x0025FBD0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x0025FBD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FBD8: lwc1        $f0, 0x7954($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7954);
    // 0x0025FBDC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0025FBE0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0025FBE4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025FBE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FBEC: lwc1        $f0, 0x7958($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7958);
    // 0x0025FBF0: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025FBF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025FBF8: lwc1        $f1, 0x795C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X795C);
    // 0x0025FBFC: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025FC00: jr          $ra
    // 0x0025FC04: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0025FC04: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_004267A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004267A0: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x004267A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004267A8: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x004267AC: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x004267B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004267B4: bne         $v1, $v0, L_0042680C
    if (ctx->r3 != ctx->r2) {
        // 0x004267B8: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0042680C;
    }
    // 0x004267B8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x004267BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004267C0: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x004267C4: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
    // 0x004267C8: bnel        $v0, $zero, L_004267FC
    if (ctx->r2 != 0) {
        // 0x004267CC: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_004267FC;
    }
    goto skip_0;
    // 0x004267CC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x004267D0: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x004267D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x004267D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
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
    goto skip_1;
    // 0x004267F0: addiu       $v0, $v0, 0xFF
    ctx->r2 = ADD32(ctx->r2, 0XFF);
    skip_1:
L_004267F4:
    // 0x004267F4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x004267F8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_004267FC:
    // 0x004267FC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00426800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426808: lw          $v0, 0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC70);
L_0042680C:
    // 0x0042680C: jr          $ra
    // 0x00426810: nop

    return;
    // 0x00426810: nop

;}
RECOMP_FUNC void func_0041A5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A5DC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041A5E0: lw          $v1, 0x924($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X924);
    // 0x0041A5E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041A5E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041A5EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041A5F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041A5F4: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041A5F8: beq         $v0, $zero, L_0041A618
    if (ctx->r2 == 0) {
        // 0x0041A5FC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041A618;
    }
    // 0x0041A5FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041A600: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A604: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A608: addu        $at, $at, $v0
    gpr jr_addend_0041A610 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041A60C: lw          $v0, 0x11E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X11E0);
    // 0x0041A610: jr          $v0
    // 0x0041A614: nop

    switch (jr_addend_0041A610 >> 2) {
        case 0: goto L_0041A618; break;
        case 1: goto L_0041A620; break;
        case 2: goto L_0041A628; break;
        case 3: goto L_0041A630; break;
        case 4: goto L_0041A638; break;
        case 5: goto L_0041A640; break;
        case 6: goto L_0041A648; break;
        case 7: goto L_0041A650; break;
        case 8: goto L_0041A658; break;
        case 9: goto L_0041A660; break;
        case 10: goto L_0041A668; break;
        default: switch_error(__func__, 0x0041A610, 0x800C11E0);
    }
    // 0x0041A614: nop

L_0041A618:
    // 0x0041A618: j           L_0041A66C
    // 0x0041A61C: addiu       $s0, $zero, 0x3E8
    ctx->r16 = ADD32(0, 0X3E8);
        goto L_0041A66C;
    // 0x0041A61C: addiu       $s0, $zero, 0x3E8
    ctx->r16 = ADD32(0, 0X3E8);
L_0041A620:
    // 0x0041A620: j           L_0041A66C
    // 0x0041A624: addiu       $s0, $zero, 0x7D0
    ctx->r16 = ADD32(0, 0X7D0);
        goto L_0041A66C;
    // 0x0041A624: addiu       $s0, $zero, 0x7D0
    ctx->r16 = ADD32(0, 0X7D0);
L_0041A628:
    // 0x0041A628: j           L_0041A66C
    // 0x0041A62C: addiu       $s0, $zero, 0xBB8
    ctx->r16 = ADD32(0, 0XBB8);
        goto L_0041A66C;
    // 0x0041A62C: addiu       $s0, $zero, 0xBB8
    ctx->r16 = ADD32(0, 0XBB8);
L_0041A630:
    // 0x0041A630: j           L_0041A66C
    // 0x0041A634: addiu       $s0, $zero, 0xFA0
    ctx->r16 = ADD32(0, 0XFA0);
        goto L_0041A66C;
    // 0x0041A634: addiu       $s0, $zero, 0xFA0
    ctx->r16 = ADD32(0, 0XFA0);
L_0041A638:
    // 0x0041A638: j           L_0041A66C
    // 0x0041A63C: addiu       $s0, $zero, 0x1388
    ctx->r16 = ADD32(0, 0X1388);
        goto L_0041A66C;
    // 0x0041A63C: addiu       $s0, $zero, 0x1388
    ctx->r16 = ADD32(0, 0X1388);
L_0041A640:
    // 0x0041A640: j           L_0041A66C
    // 0x0041A644: addiu       $s0, $zero, 0x1770
    ctx->r16 = ADD32(0, 0X1770);
        goto L_0041A66C;
    // 0x0041A644: addiu       $s0, $zero, 0x1770
    ctx->r16 = ADD32(0, 0X1770);
L_0041A648:
    // 0x0041A648: j           L_0041A66C
    // 0x0041A64C: addiu       $s0, $zero, 0x1CE9
    ctx->r16 = ADD32(0, 0X1CE9);
        goto L_0041A66C;
    // 0x0041A64C: addiu       $s0, $zero, 0x1CE9
    ctx->r16 = ADD32(0, 0X1CE9);
L_0041A650:
    // 0x0041A650: j           L_0041A66C
    // 0x0041A654: addiu       $s0, $zero, 0x1D4D
    ctx->r16 = ADD32(0, 0X1D4D);
        goto L_0041A66C;
    // 0x0041A654: addiu       $s0, $zero, 0x1D4D
    ctx->r16 = ADD32(0, 0X1D4D);
L_0041A658:
    // 0x0041A658: j           L_0041A66C
    // 0x0041A65C: addiu       $s0, $zero, 0x1DB1
    ctx->r16 = ADD32(0, 0X1DB1);
        goto L_0041A66C;
    // 0x0041A65C: addiu       $s0, $zero, 0x1DB1
    ctx->r16 = ADD32(0, 0X1DB1);
L_0041A660:
    // 0x0041A660: j           L_0041A66C
    // 0x0041A664: addiu       $s0, $zero, 0x1DB2
    ctx->r16 = ADD32(0, 0X1DB2);
        goto L_0041A66C;
    // 0x0041A664: addiu       $s0, $zero, 0x1DB2
    ctx->r16 = ADD32(0, 0X1DB2);
L_0041A668:
    // 0x0041A668: addiu       $s0, $zero, 0x1F40
    ctx->r16 = ADD32(0, 0X1F40);
L_0041A66C:
    // 0x0041A66C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041A670: jal         0x002855E8
    // 0x0041A674: nop

    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x0041A674: nop

    after_0:
    // 0x0041A678: beq         $v0, $zero, L_0041A710
    if (ctx->r2 == 0) {
        // 0x0041A67C: addiu       $v0, $zero, 0x1F40
        ctx->r2 = ADD32(0, 0X1F40);
            goto L_0041A710;
    }
    // 0x0041A67C: addiu       $v0, $zero, 0x1F40
    ctx->r2 = ADD32(0, 0X1F40);
    // 0x0041A680: bnel        $s0, $v0, L_0041A6B4
    if (ctx->r16 != ctx->r2) {
        // 0x0041A684: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_0041A6B4;
    }
    goto skip_0;
    // 0x0041A684: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    skip_0:
    // 0x0041A688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A68C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041A690: sb          $v0, -0x550E($at)
    MEM_B(-0X550E, ctx->r1) = ctx->r2;
    // 0x0041A694: jal         0x00417ACC
    // 0x0041A698: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00417ACC(rdram, ctx);
        goto after_1;
    // 0x0041A698: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0041A69C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A6A0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A6A4: jal         0x00288C5C
    // 0x0041A6A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_00288C5C(rdram, ctx);
        goto after_2;
    // 0x0041A6A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x0041A6AC: j           L_0041A8DC
    // 0x0041A6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041A8DC;
    // 0x0041A6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041A6B4:
    // 0x0041A6B4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0041A6B8: addiu       $a1, $a1, -0x5378
    ctx->r5 = ADD32(ctx->r5, -0X5378);
    // 0x0041A6BC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0041A6C0: bne         $v1, $v0, L_0041A6E4
    if (ctx->r3 != ctx->r2) {
        // 0x0041A6C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041A6E4;
    }
    // 0x0041A6C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041A6C8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A6CC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0041A6D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041A6D4: jal         0x0042C700
    // 0x0041A6D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0042C700(rdram, ctx);
        goto after_3;
    // 0x0041A6D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x0041A6DC: j           L_0041A8DC
    // 0x0041A6E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041A8DC;
    // 0x0041A6E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041A6E4:
    // 0x0041A6E4: addiu       $v1, $a1, -0x1B0
    ctx->r3 = ADD32(ctx->r5, -0X1B0);
    // 0x0041A6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A6EC: sb          $zero, 0x19($v1)
    MEM_B(0X19, ctx->r3) = 0;
    // 0x0041A6F0: jal         0x00417ACC
    // 0x0041A6F4: sb          $v0, 0x1A($v1)
    MEM_B(0X1A, ctx->r3) = ctx->r2;
    func_00417ACC(rdram, ctx);
        goto after_4;
    // 0x0041A6F4: sb          $v0, 0x1A($v1)
    MEM_B(0X1A, ctx->r3) = ctx->r2;
    after_4:
    // 0x0041A6F8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A6FC: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A700: jal         0x002886D0
    // 0x0041A704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002886D0(rdram, ctx);
        goto after_5;
    // 0x0041A704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x0041A708: j           L_0041A8DC
    // 0x0041A70C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041A8DC;
    // 0x0041A70C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041A710:
    // 0x0041A710: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041A714: jal         0x00285628
    // 0x0041A718: nop

    func_00285628(rdram, ctx);
        goto after_6;
    // 0x0041A718: nop

    after_6:
    // 0x0041A71C: beq         $v0, $zero, L_0041A7F4
    if (ctx->r2 == 0) {
        // 0x0041A720: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0041A7F4;
    }
    // 0x0041A720: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041A724: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041A728: addiu       $a2, $a2, 0x1210
    ctx->r6 = ADD32(ctx->r6, 0X1210);
    // 0x0041A72C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041A730: lw          $v1, 0x924($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X924);
    // 0x0041A734: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0041A738: lw          $a1, -0x5524($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5524);
    // 0x0041A73C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_0041A740:
    // 0x0041A740: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0041A744: bne         $v0, $zero, L_0041A754
    if (ctx->r2 != 0) {
        // 0x0041A748: nop
    
            goto L_0041A754;
    }
    // 0x0041A748: nop

    // 0x0041A74C: j           L_0041A75C
    // 0x0041A750: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0041A75C;
    // 0x0041A750: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041A754:
    // 0x0041A754: bltzl       $v1, L_0041A75C
    if (SIGNED(ctx->r3) < 0) {
        // 0x0041A758: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_0041A75C;
    }
    goto skip_1;
    // 0x0041A758: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_1:
L_0041A75C:
    // 0x0041A75C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041A760: beq         $v0, $zero, L_0041A778
    if (ctx->r2 == 0) {
        // 0x0041A764: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041A778;
    }
    // 0x0041A764: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A768: addu        $v0, $v0, $a2
    gpr jr_addend_0041A770 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041A76C: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x0041A770: jr          $v0
    // 0x0041A774: nop

    switch (jr_addend_0041A770 >> 2) {
        case 0: goto L_0041A778; break;
        case 1: goto L_0041A780; break;
        case 2: goto L_0041A788; break;
        case 3: goto L_0041A790; break;
        case 4: goto L_0041A798; break;
        case 5: goto L_0041A7A0; break;
        case 6: goto L_0041A7A8; break;
        case 7: goto L_0041A7B0; break;
        case 8: goto L_0041A7B8; break;
        case 9: goto L_0041A7C0; break;
        case 10: goto L_0041A7C8; break;
        default: switch_error(__func__, 0x0041A770, 0x800C1210);
    }
    // 0x0041A774: nop

L_0041A778:
    // 0x0041A778: j           L_0041A7CC
    // 0x0041A77C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A7CC;
    // 0x0041A77C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_0041A780:
    // 0x0041A780: j           L_0041A7CC
    // 0x0041A784: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A7CC;
    // 0x0041A784: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
L_0041A788:
    // 0x0041A788: j           L_0041A7CC
    // 0x0041A78C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A7CC;
    // 0x0041A78C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
L_0041A790:
    // 0x0041A790: j           L_0041A7CC
    // 0x0041A794: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A7CC;
    // 0x0041A794: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
L_0041A798:
    // 0x0041A798: j           L_0041A7CC
    // 0x0041A79C: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A7CC;
    // 0x0041A79C: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
L_0041A7A0:
    // 0x0041A7A0: j           L_0041A7CC
    // 0x0041A7A4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A7CC;
    // 0x0041A7A4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
L_0041A7A8:
    // 0x0041A7A8: j           L_0041A7CC
    // 0x0041A7AC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A7CC;
    // 0x0041A7AC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_0041A7B0:
    // 0x0041A7B0: j           L_0041A7CC
    // 0x0041A7B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A7CC;
    // 0x0041A7B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
L_0041A7B8:
    // 0x0041A7B8: j           L_0041A7CC
    // 0x0041A7BC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A7CC;
    // 0x0041A7BC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
L_0041A7C0:
    // 0x0041A7C0: j           L_0041A7CC
    // 0x0041A7C4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A7CC;
    // 0x0041A7C4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
L_0041A7C8:
    // 0x0041A7C8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
L_0041A7CC:
    // 0x0041A7CC: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x0041A7D0: bne         $v0, $zero, L_0041A7EC
    if (ctx->r2 != 0) {
        // 0x0041A7D4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041A7EC;
    }
    // 0x0041A7D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041A7D8: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041A7DC: bnel        $v0, $zero, L_0041A740
    if (ctx->r2 != 0) {
        // 0x0041A7E0: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0041A740;
    }
    goto skip_2;
    // 0x0041A7E0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_2:
    // 0x0041A7E4: j           L_0041A8D0
    // 0x0041A7E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0041A8D0;
    // 0x0041A7E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041A7EC:
    // 0x0041A7EC: j           L_0041A8D0
    // 0x0041A7F0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_0041A8D0;
    // 0x0041A7F0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0041A7F4:
    // 0x0041A7F4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041A7F8: jal         0x00285670
    // 0x0041A7FC: nop

    func_00285670(rdram, ctx);
        goto after_7;
    // 0x0041A7FC: nop

    after_7:
    // 0x0041A800: beq         $v0, $zero, L_0041A8DC
    if (ctx->r2 == 0) {
        // 0x0041A804: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041A8DC;
    }
    // 0x0041A804: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A808: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041A80C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041A810: addiu       $a2, $a2, 0x1240
    ctx->r6 = ADD32(ctx->r6, 0X1240);
    // 0x0041A814: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041A818: lw          $v1, 0x924($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X924);
    // 0x0041A81C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0041A820: lw          $a1, -0x5524($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5524);
    // 0x0041A824: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0041A828:
    // 0x0041A828: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0041A82C: bne         $v0, $zero, L_0041A83C
    if (ctx->r2 != 0) {
        // 0x0041A830: nop
    
            goto L_0041A83C;
    }
    // 0x0041A830: nop

    // 0x0041A834: j           L_0041A844
    // 0x0041A838: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0041A844;
    // 0x0041A838: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041A83C:
    // 0x0041A83C: bltzl       $v1, L_0041A844
    if (SIGNED(ctx->r3) < 0) {
        // 0x0041A840: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_0041A844;
    }
    goto skip_3;
    // 0x0041A840: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_3:
L_0041A844:
    // 0x0041A844: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041A848: beq         $v0, $zero, L_0041A860
    if (ctx->r2 == 0) {
        // 0x0041A84C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041A860;
    }
    // 0x0041A84C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A850: addu        $v0, $v0, $a2
    gpr jr_addend_0041A858 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041A854: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x0041A858: jr          $v0
    // 0x0041A85C: nop

    switch (jr_addend_0041A858 >> 2) {
        case 0: goto L_0041A860; break;
        case 1: goto L_0041A868; break;
        case 2: goto L_0041A870; break;
        case 3: goto L_0041A878; break;
        case 4: goto L_0041A880; break;
        case 5: goto L_0041A888; break;
        case 6: goto L_0041A890; break;
        case 7: goto L_0041A898; break;
        case 8: goto L_0041A8A0; break;
        case 9: goto L_0041A8A8; break;
        case 10: goto L_0041A8B0; break;
        default: switch_error(__func__, 0x0041A858, 0x800C1240);
    }
    // 0x0041A85C: nop

L_0041A860:
    // 0x0041A860: j           L_0041A8B4
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A8B4;
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_0041A868:
    // 0x0041A868: j           L_0041A8B4
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A8B4;
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
L_0041A870:
    // 0x0041A870: j           L_0041A8B4
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A8B4;
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
L_0041A878:
    // 0x0041A878: j           L_0041A8B4
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A8B4;
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
L_0041A880:
    // 0x0041A880: j           L_0041A8B4
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A8B4;
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
L_0041A888:
    // 0x0041A888: j           L_0041A8B4
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A8B4;
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
L_0041A890:
    // 0x0041A890: j           L_0041A8B4
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A8B4;
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_0041A898:
    // 0x0041A898: j           L_0041A8B4
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A8B4;
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
L_0041A8A0:
    // 0x0041A8A0: j           L_0041A8B4
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A8B4;
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
L_0041A8A8:
    // 0x0041A8A8: j           L_0041A8B4
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A8B4;
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
L_0041A8B0:
    // 0x0041A8B0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
L_0041A8B4:
    // 0x0041A8B4: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x0041A8B8: bne         $v0, $zero, L_0041A7EC
    if (ctx->r2 != 0) {
        // 0x0041A8BC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0041A7EC;
    }
    // 0x0041A8BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041A8C0: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041A8C4: bnel        $v0, $zero, L_0041A828
    if (ctx->r2 != 0) {
        // 0x0041A8C8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0041A828;
    }
    goto skip_4;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_4:
    // 0x0041A8CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041A8D0:
    // 0x0041A8D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A8D4: sw          $v0, 0x924($at)
    MEM_W(0X924, ctx->r1) = ctx->r2;
    // 0x0041A8D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041A8DC:
    // 0x0041A8DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A8E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A8E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A8E8: jr          $ra
    // 0x0041A8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002888BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002888BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002888C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002888C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002888C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002888CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002888D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002888D4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002888D8: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x002888DC: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x002888E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002888E4: jal         0x0042FBA4
    // 0x002888E8: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_0042FBA4(rdram, ctx);
        goto after_0;
    // 0x002888E8: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_0:
    // 0x002888EC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x002888F0: ori         $a0, $a0, 0x2BC0
    ctx->r4 = ctx->r4 | 0X2BC0;
    // 0x002888F4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x002888F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002888FC: jal         0x0042E5AC
    // 0x00288900: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0042E5AC(rdram, ctx);
        goto after_1;
    // 0x00288900: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00288904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00288908: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028890C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00288910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288914: jr          $ra
    // 0x00288918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00288918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004235F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004235F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004235F8: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x004235FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00423600: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423604: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00423608: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0042360C: beq         $v0, $zero, L_00423624
    if (ctx->r2 == 0) {
        // 0x00423610: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_00423624;
    }
    // 0x00423610: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00423614: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x00423618: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0042361C: j           L_0042362C
    // 0x00423620: nop

        goto L_0042362C;
    // 0x00423620: nop

L_00423624:
    // 0x00423624: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00423628: lb          $s1, 0x4($v0)
    ctx->r17 = MEM_B(ctx->r2, 0X4);
L_0042362C:
    // 0x0042362C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00423630: lw          $v0, 0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X964);
    // 0x00423634: beq         $v0, $zero, L_0042364C
    if (ctx->r2 == 0) {
        // 0x00423638: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0042364C;
    }
    // 0x00423638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042363C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423640: addiu       $v0, $v0, 0x50B4
    ctx->r2 = ADD32(ctx->r2, 0X50B4);
    // 0x00423644: j           L_00423678
    // 0x00423648: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_00423678;
    // 0x00423648: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0042364C:
    // 0x0042364C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423650: addiu       $v0, $v0, 0x50E4
    ctx->r2 = ADD32(ctx->r2, 0X50E4);
    // 0x00423654: jal         0x004160F0
    // 0x00423658: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00423658: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x0042365C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00423660: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00423664: addiu       $a1, $a1, 0x1430
    ctx->r5 = ADD32(ctx->r5, 0X1430);
    // 0x00423668: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0042366C: addiu       $a2, $s1, 0x1
    ctx->r6 = ADD32(ctx->r17, 0X1);
    // 0x00423670: jal         0x0029E3E0
    // 0x00423674: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00423674: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
L_00423678:
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
RECOMP_FUNC void func_00278CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00278CDC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00278CE0: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00278CE4: lwc1        $f20, 0x78($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X78);
    // 0x00278CE8: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x00278CEC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00278CF0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x00278CF4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00278CF8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00278CFC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00278D00: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00278D04: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00278D08: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x00278D0C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00278D10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00278D14: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00278D18: addiu       $s0, $s0, 0xF0
    ctx->r16 = ADD32(ctx->r16, 0XF0);
    // 0x00278D1C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00278D20: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x00278D24: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x00278D28: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x00278D2C: beq         $v0, $zero, L_00278EA0
    if (ctx->r2 == 0) {
        // 0x00278D30: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_00278EA0;
    }
    // 0x00278D30: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x00278D34: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00278D38: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x00278D3C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00278D40: beq         $v0, $zero, L_00278DAC
    if (ctx->r2 == 0) {
        // 0x00278D44: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00278DAC;
    }
    // 0x00278D44: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00278D48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278D4C: addu        $at, $at, $v0
    gpr jr_addend_00278D54 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00278D50: lw          $v0, -0x7C78($at)
    ctx->r2 = ADD32(ctx->r1, -0X7C78);
    // 0x00278D54: jr          $v0
    // 0x00278D58: nop

    switch (jr_addend_00278D54 >> 2) {
        case 0: goto L_00278D8C; break;
        case 1: goto L_00278D7C; break;
        case 2: goto L_00278DAC; break;
        case 3: goto L_00278D9C; break;
        case 4: goto L_00278D6C; break;
        case 5: goto L_00278D5C; break;
        default: switch_error(__func__, 0x00278D54, 0x800A8388);
    }
    // 0x00278D58: nop

L_00278D5C:
    // 0x00278D5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278D60: lwc1        $f1, -0x7C60($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C60);
    // 0x00278D64: j           L_00278DB4
    // 0x00278D68: nop

        goto L_00278DB4;
    // 0x00278D68: nop

L_00278D6C:
    // 0x00278D6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278D70: lwc1        $f1, -0x7C5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C5C);
    // 0x00278D74: j           L_00278DB4
    // 0x00278D78: nop

        goto L_00278DB4;
    // 0x00278D78: nop

L_00278D7C:
    // 0x00278D7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278D80: lwc1        $f1, -0x7C58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C58);
    // 0x00278D84: j           L_00278DB4
    // 0x00278D88: nop

        goto L_00278DB4;
    // 0x00278D88: nop

L_00278D8C:
    // 0x00278D8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278D90: lwc1        $f1, -0x7C54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C54);
    // 0x00278D94: j           L_00278DB4
    // 0x00278D98: nop

        goto L_00278DB4;
    // 0x00278D98: nop

L_00278D9C:
    // 0x00278D9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278DA0: lwc1        $f1, -0x7C50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C50);
    // 0x00278DA4: j           L_00278DB4
    // 0x00278DA8: nop

        goto L_00278DB4;
    // 0x00278DA8: nop

L_00278DAC:
    // 0x00278DAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278DB0: lwc1        $f1, -0x7C4C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C4C);
L_00278DB4:
    // 0x00278DB4: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x00278DB8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00278DBC: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00278DC0: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x00278DC4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00278DC8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00278DCC: beq         $v0, $zero, L_00278E38
    if (ctx->r2 == 0) {
        // 0x00278DD0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00278E38;
    }
    // 0x00278DD0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00278DD4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278DD8: addu        $at, $at, $v0
    gpr jr_addend_00278DE0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00278DDC: lw          $v0, -0x7C48($at)
    ctx->r2 = ADD32(ctx->r1, -0X7C48);
    // 0x00278DE0: jr          $v0
    // 0x00278DE4: nop

    switch (jr_addend_00278DE0 >> 2) {
        case 0: goto L_00278E18; break;
        case 1: goto L_00278E08; break;
        case 2: goto L_00278E38; break;
        case 3: goto L_00278E28; break;
        case 4: goto L_00278DF8; break;
        case 5: goto L_00278DE8; break;
        default: switch_error(__func__, 0x00278DE0, 0x800A83B8);
    }
    // 0x00278DE4: nop

L_00278DE8:
    // 0x00278DE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278DEC: lwc1        $f1, -0x7C30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C30);
    // 0x00278DF0: j           L_00278E40
    // 0x00278DF4: nop

        goto L_00278E40;
    // 0x00278DF4: nop

L_00278DF8:
    // 0x00278DF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278DFC: lwc1        $f1, -0x7C2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C2C);
    // 0x00278E00: j           L_00278E40
    // 0x00278E04: nop

        goto L_00278E40;
    // 0x00278E04: nop

L_00278E08:
    // 0x00278E08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278E0C: lwc1        $f1, -0x7C28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C28);
    // 0x00278E10: j           L_00278E40
    // 0x00278E14: nop

        goto L_00278E40;
    // 0x00278E14: nop

L_00278E18:
    // 0x00278E18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278E1C: lwc1        $f1, -0x7C24($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C24);
    // 0x00278E20: j           L_00278E40
    // 0x00278E24: nop

        goto L_00278E40;
    // 0x00278E24: nop

L_00278E28:
    // 0x00278E28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278E2C: lwc1        $f1, -0x7C20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C20);
    // 0x00278E30: j           L_00278E40
    // 0x00278E34: nop

        goto L_00278E40;
    // 0x00278E34: nop

L_00278E38:
    // 0x00278E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278E3C: lwc1        $f1, -0x7C1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7C1C);
L_00278E40:
    // 0x00278E40: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00278E44: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00278E48: jal         0x004163C0
    // 0x00278E4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_004163C0(rdram, ctx);
        goto after_0;
    // 0x00278E4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00278E50: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00278E54: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00278E58: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    // 0x00278E5C: addiu       $v0, $v0, -0x2C
    ctx->r2 = ADD32(ctx->r2, -0X2C);
    // 0x00278E60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00278E64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00278E68: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00278E6C: nop

    // 0x00278E70: bc1f        L_00278E88
    if (!c1cs) {
        // 0x00278E74: nop
    
            goto L_00278E88;
    }
    // 0x00278E74: nop

    // 0x00278E78: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00278E7C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00278E80: nop

    // 0x00278E84: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_00278E88:
    // 0x00278E88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00278E8C: lwc1        $f0, -0x7C18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7C18);
    // 0x00278E90: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00278E94: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00278E98: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x00278E9C: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
L_00278EA0:
    // 0x00278EA0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00278EA4: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00278EA8: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00278EAC: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00278EB0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00278EB4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x00278EB8: addiu       $a3, $a1, 0x8
    ctx->r7 = ADD32(ctx->r5, 0X8);
    // 0x00278EBC: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00278EC0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00278EC4: lui         $v0, 0xFB00
    ctx->r2 = S32(0XFB00 << 16);
    // 0x00278EC8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00278ECC: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x00278ED0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00278ED4: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x00278ED8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00278EDC: lbu         $v0, 0xA3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA3);
    // 0x00278EE0: lbu         $a0, 0xA7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA7);
    // 0x00278EE4: lbu         $a2, 0xAB($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XAB);
    // 0x00278EE8: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x00278EEC: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x00278EF0: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x00278EF4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00278EF8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00278EFC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00278F00: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x00278F04: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x00278F08: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00278F0C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x00278F10: lbu         $v0, 0xAF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAF);
    // 0x00278F14: lbu         $a0, 0xB3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB3);
    // 0x00278F18: lbu         $v1, 0xB7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB7);
    // 0x00278F1C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00278F20: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x00278F24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00278F28: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x00278F2C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00278F30: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00278F34: lw          $v1, 0x56A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56A8);
    // 0x00278F38: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x00278F3C: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x00278F40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00278F44: beq         $v1, $v0, L_00278FF4
    if (ctx->r3 == ctx->r2) {
        // 0x00278F48: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_00278FF4;
    }
    // 0x00278F48: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x00278F4C: beq         $v0, $zero, L_00278F6C
    if (ctx->r2 == 0) {
        // 0x00278F50: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00278F6C;
    }
    // 0x00278F50: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00278F54: beq         $v0, $zero, L_00278FF4
    if (ctx->r2 == 0) {
        // 0x00278F58: nop
    
            goto L_00278FF4;
    }
    // 0x00278F58: nop

    // 0x00278F5C: bltz        $v1, L_00278FF4
    if (SIGNED(ctx->r3) < 0) {
        // 0x00278F60: nop
    
            goto L_00278FF4;
    }
    // 0x00278F60: nop

    // 0x00278F64: j           L_00278F78
    // 0x00278F68: nop

        goto L_00278F78;
    // 0x00278F68: nop

L_00278F6C:
    // 0x00278F6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00278F70: bne         $v1, $v0, L_00278FF4
    if (ctx->r3 != ctx->r2) {
        // 0x00278F74: nop
    
            goto L_00278FF4;
    }
    // 0x00278F74: nop

L_00278F78:
    // 0x00278F78: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x00278F7C: mtc1        $s4, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r20;
    // 0x00278F80: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00278F84: mul.s       $f23, $f0, $f20
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f23.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00278F88: lwc1        $f1, 0xBC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XBC);
    // 0x00278F8C: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00278F90: lw          $s0, 0x56A8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X56A8);
    // 0x00278F94: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x00278F98: mtc1        $s1, $f20
    ctx->f20.u32l = ctx->r17;
    // 0x00278F9C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00278FA0: mul.s       $f22, $f1, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00278FA4: beq         $s5, $zero, L_00278FD0
    if (ctx->r21 == 0) {
        // 0x00278FA8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00278FD0;
    }
    // 0x00278FA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00278FAC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00278FB0: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00278FB4: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x00278FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00278FBC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x00278FC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00278FC4: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x00278FC8: jal         0x0027874C
    // 0x00278FCC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_0027874C(rdram, ctx);
        goto after_1;
    // 0x00278FCC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_1:
L_00278FD0:
    // 0x00278FD0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00278FD4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00278FD8: mfc1        $a3, $f23
    ctx->r7 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x00278FDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00278FE0: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x00278FE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00278FE8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x00278FEC: jal         0x0027874C
    // 0x00278FF0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_0027874C(rdram, ctx);
        goto after_2;
    // 0x00278FF0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_2:
L_00278FF4:
    // 0x00278FF4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00278FF8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00278FFC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00279000: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00279004: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00279008: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0027900C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00279010: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x00279014: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x00279018: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0027901C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00279020: jr          $ra
    // 0x00279024: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00279024: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0045EAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00425BD8:
    // 0x0045EAE0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
L_00425C6C:
    // 0x0045EAE4: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
L_00425D64:
    // 0x0045EAE8: lw          $s7, 0x70($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X70);
    // 0x0045EAEC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0045EAF0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x0045EAF4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x0045EAF8: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0045EAFC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0045EB00: sll         $s0, $s6, 2
    ctx->r16 = S32(ctx->r22 << 2);
    // 0x0045EB04: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0045EB08: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x0045EB0C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045EB10: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045EB14: lw          $v0, 0xC60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC60);
    // 0x0045EB18: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x0045EB1C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x0045EB20: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x0045EB24: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x0045EB28: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0045EB2C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0045EB30: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0045EB34: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x0045EB38: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x0045EB3C: beq         $v0, $v1, L_0045EB4C
    if (ctx->r2 == ctx->r3) {
        // 0x0045EB40: sw          $ra, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r31;
            goto L_0045EB4C;
    }
    // 0x0045EB40: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0045EB44: j           L_00425D64
    // 0x0045EB48: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    entry_00425D64(rdram, ctx);
    return;
    // 0x0045EB48: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_0045EB4C:
    // 0x0045EB4C: jal         0x00285878
    // 0x0045EB50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00285878(rdram, ctx);
        goto after_0;
    // 0x0045EB50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x0045EB54: jal         0x002847E0
    // 0x0045EB58: nop

    func_002847E0(rdram, ctx);
        goto after_1;
    // 0x0045EB58: nop

    after_1:
    // 0x0045EB5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045EB60: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045EB64: lw          $s0, 0xC70($at)
    ctx->r16 = MEM_W(ctx->r1, 0XC70);
    // 0x0045EB68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045EB6C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0045EB70: sb          $v0, 0x6750($at)
    MEM_B(0X6750, ctx->r1) = ctx->r2;
    // 0x0045EB74: bne         $s0, $zero, L_0045ED58
    if (ctx->r16 != 0) {
        // 0x0045EB78: addiu       $t2, $zero, 0x42
        ctx->r10 = ADD32(0, 0X42);
            goto L_0045ED58;
    }
    // 0x0045EB78: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x0045EB7C: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x0045EB80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0045EB84: addiu       $t1, $a1, 0x4
    ctx->r9 = ADD32(ctx->r5, 0X4);
L_0045EB88:
    // 0x0045EB88: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x0045EB8C: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x0045EB90: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x0045EB94: bnel        $v0, $zero, L_0045EB9C
    if (ctx->r2 != 0) {
        // 0x0045EB98: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_0045EB9C;
    }
    goto skip_0;
    // 0x0045EB98: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_0:
L_0045EB9C:
    // 0x0045EB9C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x0045EBA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045EBA4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0045EBA8: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_0045EBAC:
    // 0x0045EBAC: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x0045EBB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045EBB4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045EBB8: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x0045EBBC: bnel        $v1, $v0, L_0045EBCC
    if (ctx->r3 != ctx->r2) {
        // 0x0045EBC0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045EBCC;
    }
    goto skip_1;
    // 0x0045EBC0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x0045EBC4: j           L_00425BD8
    // 0x0045EBC8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
    entry_00425BD8(rdram, ctx);
    return;
    // 0x0045EBC8: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_0045EBCC:
    // 0x0045EBCC: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x0045EBD0: bne         $v0, $zero, L_0045EBAC
    if (ctx->r2 != 0) {
        // 0x0045EBD4: nop
    
            goto L_0045EBAC;
    }
    // 0x0045EBD4: nop

    // 0x0045EBD8: beql        $a0, $t2, L_0045EBE0
    if (ctx->r4 == ctx->r10) {
        // 0x0045EBDC: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_0045EBE0;
    }
    goto skip_2;
    // 0x0045EBDC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_2:
L_0045EBE0:
    // 0x0045EBE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045EBE4: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x0045EBE8: bne         $v0, $zero, L_0045EB88
    if (ctx->r2 != 0) {
        // 0x0045EBEC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0045EB88;
    }
    // 0x0045EBEC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0045EBF0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
    // 0x0045EBF4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x0045EBF8: and         $s5, $v1, $v0
    ctx->r21 = ctx->r3 & ctx->r2;
    // 0x0045EBFC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0045EC00: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0045EC04: jal         0x0029E460
    // 0x0045EC08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0029E460(rdram, ctx);
        goto after_2;
    // 0x0045EC08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x0045EC0C: addiu       $t2, $zero, 0x42
    ctx->r10 = ADD32(0, 0X42);
    // 0x0045EC10: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x0045EC14: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0045EC18: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
L_0045EC1C:
    // 0x0045EC1C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x0045EC20: addiu       $v0, $v1, -0x61
    ctx->r2 = ADD32(ctx->r3, -0X61);
    // 0x0045EC24: sltiu       $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 < 0X1A ? 1 : 0;
    // 0x0045EC28: bnel        $v0, $zero, L_0045EC30
    if (ctx->r2 != 0) {
        // 0x0045EC2C: addiu       $v1, $v1, -0x20
        ctx->r3 = ADD32(ctx->r3, -0X20);
            goto L_0045EC30;
    }
    goto skip_3;
    // 0x0045EC2C: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    skip_3:
L_0045EC30:
    // 0x0045EC30: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x0045EC34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0045EC38: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0045EC3C: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
L_0045EC40:
    // 0x0045EC40: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x0045EC44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045EC48: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045EC4C: lbu         $v0, 0x222C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X222C);
    // 0x0045EC50: bnel        $v1, $v0, L_0045EC60
    if (ctx->r3 != ctx->r2) {
        // 0x0045EC54: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0045EC60;
    }
    goto skip_4;
    // 0x0045EC54: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x0045EC58: j           L_00425C6C
    // 0x0045EC5C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
    entry_00425C6C(rdram, ctx);
    return;
    // 0x0045EC5C: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_0045EC60:
    // 0x0045EC60: slti        $v0, $a0, 0x42
    ctx->r2 = SIGNED(ctx->r4) < 0X42 ? 1 : 0;
    // 0x0045EC64: bne         $v0, $zero, L_0045EC40
    if (ctx->r2 != 0) {
        // 0x0045EC68: nop
    
            goto L_0045EC40;
    }
    // 0x0045EC68: nop

    // 0x0045EC6C: beql        $a0, $t2, L_0045EC74
    if (ctx->r4 == ctx->r10) {
        // 0x0045EC70: sb          $zero, 0x0($t0)
        MEM_B(0X0, ctx->r8) = 0;
            goto L_0045EC74;
    }
    goto skip_5;
    // 0x0045EC70: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    skip_5:
L_0045EC74:
    // 0x0045EC74: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0045EC78: slt         $v0, $a1, $t1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x0045EC7C: bne         $v0, $zero, L_0045EC1C
    if (ctx->r2 != 0) {
        // 0x0045EC80: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0045EC1C;
    }
    // 0x0045EC80: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0045EC84: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x0045EC88: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x0045EC8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045EC90: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x0045EC94: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0045EC98: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0045EC9C: addiu       $v1, $v1, 0xC80
    ctx->r3 = ADD32(ctx->r3, 0XC80);
    // 0x0045ECA0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x0045ECA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0045ECA8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x0045ECAC: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x0045ECB0: lbu         $a1, 0x1($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1);
    // 0x0045ECB4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x0045ECB8: lbu         $a2, 0x1($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X1);
    // 0x0045ECBC: lbu         $t0, 0x2($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X2);
    // 0x0045ECC0: lbu         $t1, 0x3($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X3);
    // 0x0045ECC4: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x0045ECC8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0045ECCC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x0045ECD0: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x0045ECD4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x0045ECD8: or          $s3, $a1, $v1
    ctx->r19 = ctx->r5 | ctx->r3;
    // 0x0045ECDC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0045ECE0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x0045ECE4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0045ECE8: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x0045ECEC: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x0045ECF0: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0045ECF4: or          $s2, $v0, $t1
    ctx->r18 = ctx->r2 | ctx->r9;
    // 0x0045ECF8: jal         0x004270A0
    // 0x0045ECFC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    entry_004270A0(rdram, ctx);
        goto after_3;
    // 0x0045ECFC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0045ED00: beq         $v0, $zero, L_0045ED10
    if (ctx->r2 == 0) {
        // 0x0045ED04: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0045ED10;
    }
    // 0x0045ED04: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0045ED08: bne         $s0, $zero, L_0045ED50
    if (ctx->r16 != 0) {
        // 0x0045ED0C: nop
    
            goto L_0045ED50;
    }
    // 0x0045ED0C: nop

L_0045ED10:
    // 0x0045ED10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0045ED14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0045ED18: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x0045ED1C: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x0045ED20: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x0045ED24: jal         0x00428C10
    // 0x0045ED28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    entry_00428C10(rdram, ctx);
        goto after_4;
    // 0x0045ED28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x0045ED2C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0045ED30: beq         $s0, $zero, L_0045ED50
    if (ctx->r16 == 0) {
        // 0x0045ED34: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0045ED50;
    }
    // 0x0045ED34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0045ED38: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x0045ED3C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0045ED40: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0045ED44: jal         0x004276A0
    // 0x0045ED48: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_004276A0(rdram, ctx);
        goto after_5;
    // 0x0045ED48: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x0045ED4C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_0045ED50:
    // 0x0045ED50: jal         0x00425808
    // 0x0045ED54: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    entry_00425808(rdram, ctx);
        goto after_6;
    // 0x0045ED54: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_6:
L_0045ED58:
    // 0x0045ED58: jal         0x002858A4
    // 0x0045ED5C: nop

    func_002858A4(rdram, ctx);
        goto after_7;
    // 0x0045ED5C: nop

    after_7:
    // 0x0045ED60: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0045ED64: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0045ED68: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0045ED6C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0045ED70: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0045ED74: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0045ED78: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0045ED7C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0045ED80: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0045ED84: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0045ED88: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0045ED8C: jr          $ra
    // 0x0045ED90: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0045ED90: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00416188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0041618C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00416190: lbu         $v0, 0x17($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X17);
    // 0x00416194: sb          $zero, 0x19($sp)
    MEM_B(0X19, ctx->r29) = 0;
    // 0x00416198: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x0041619C: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x004161A0: jal         0x00413F74
    // 0x004161A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00413F74(rdram, ctx);
        goto after_0;
    // 0x004161A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004161A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004161AC: jr          $ra
    // 0x004161B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004161B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00224700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00224704: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00224708: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0022470C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00224710: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00224714: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00224718: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0022471C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00224720: lw          $a0, 0x6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C);
    // 0x00224724: jal         0x002017D4
    // 0x00224728: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00224728: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0022472C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00224730: jal         0x002017D4
    // 0x00224734: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00224734: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00224738: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022473C: jal         0x002017D4
    // 0x00224740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00224740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00224744: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00224748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022474C: jal         0x002017D4
    // 0x00224750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00224750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x00224754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224758: jal         0x00201818
    // 0x0022475C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_4;
    // 0x0022475C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x00224760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00224764: jal         0x002017D4
    // 0x00224768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00224768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x0022476C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00224770: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00224774: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x00224778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022477C: beq         $s1, $zero, L_002247A8
    if (ctx->r17 == 0) {
        // 0x00224780: sllv        $a0, $v0, $v1
        ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_002247A8;
    }
    // 0x00224780: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00224784: bgez        $s2, L_00224790
    if (SIGNED(ctx->r18) >= 0) {
        // 0x00224788: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_00224790;
    }
    // 0x00224788: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x0022478C: addiu       $v1, $s2, 0x7
    ctx->r3 = ADD32(ctx->r18, 0X7);
L_00224790:
    // 0x00224790: sra         $v1, $v1, 3
    ctx->r3 = S32(SIGNED(ctx->r3) >> 3);
    // 0x00224794: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x00224798: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0022479C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x002247A0: j           L_002247CC
    // 0x002247A4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_002247CC;
    // 0x002247A4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_002247A8:
    // 0x002247A8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002247AC: bltzl       $a2, L_002247B4
    if (SIGNED(ctx->r6) < 0) {
        // 0x002247B0: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_002247B4;
    }
    goto skip_0;
    // 0x002247B0: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_0:
L_002247B4:
    // 0x002247B4: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x002247B8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x002247BC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x002247C0: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x002247C4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x002247C8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_002247CC:
    // 0x002247CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002247D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002247D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002247D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002247DC: jr          $ra
    // 0x002247E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002247E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00413230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413230: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00413234: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00413238: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0041323C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00413240: lw          $s1, 0x14($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X14);
    // 0x00413244: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00413248: jalr        $v0
    // 0x0041324C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0041324C: nop

    after_0:
    // 0x00413250: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00413254: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00413258: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0041325C: beq         $v0, $zero, L_00413278
    if (ctx->r2 == 0) {
        // 0x00413260: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00413278;
    }
    // 0x00413260: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00413264: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413268: addu        $at, $at, $v0
    gpr jr_addend_00413270 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041326C: lw          $v0, 0xB08($at)
    ctx->r2 = ADD32(ctx->r1, 0XB08);
    // 0x00413270: jr          $v0
    // 0x00413274: nop

    switch (jr_addend_00413270 >> 2) {
        case 0: goto L_00413284; break;
        case 1: goto L_004132B8; break;
        case 2: goto L_004132B8; break;
        case 3: goto L_00413290; break;
        case 4: goto L_004132A4; break;
        case 5: goto L_004132B8; break;
        case 6: goto L_004132C8; break;
        case 7: goto L_004132DC; break;
        case 8: goto L_004132F0; break;
        default: switch_error(__func__, 0x00413270, 0x800C0B08);
    }
    // 0x00413274: nop

L_00413278:
    // 0x00413278: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0041327C: j           L_00413314
    // 0x00413280: nop

        goto L_00413314;
    // 0x00413280: nop

L_00413284:
    // 0x00413284: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x00413288: j           L_00413314
    // 0x0041328C: nop

        goto L_00413314;
    // 0x0041328C: nop

L_00413290:
    // 0x00413290: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x00413294: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00413298: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0041329C: j           L_00413314
    // 0x004132A0: nop

        goto L_00413314;
    // 0x004132A0: nop

L_004132A4:
    // 0x004132A4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x004132A8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x004132AC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004132B0: j           L_00413314
    // 0x004132B4: nop

        goto L_00413314;
    // 0x004132B4: nop

L_004132B8:
    // 0x004132B8: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x004132BC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004132C0: j           L_00413314
    // 0x004132C4: nop

        goto L_00413314;
    // 0x004132C4: nop

L_004132C8:
    // 0x004132C8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x004132CC: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x004132D0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004132D4: j           L_00413314
    // 0x004132D8: nop

        goto L_00413314;
    // 0x004132D8: nop

L_004132DC:
    // 0x004132DC: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x004132E0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x004132E4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004132E8: j           L_00413314
    // 0x004132EC: nop

        goto L_00413314;
    // 0x004132EC: nop

L_004132F0:
    // 0x004132F0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x004132F4: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x004132F8: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004132FC: bgezl       $v0, L_00413314
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413300: cvt.s.d     $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
            goto L_00413314;
    }
    goto skip_0;
    // 0x00413300: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00413304: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00413308: ldc1        $f0, 0xB30($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0XB30);
    // 0x0041330C: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00413310: cvt.s.d     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f1.fl = CVT_S_D(ctx->f1.d);
L_00413314:
    // 0x00413314: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00413318: addiu       $s0, $s0, 0x8A0
    ctx->r16 = ADD32(ctx->r16, 0X8A0);
    // 0x0041331C: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x00413320: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00413324: cvt.d.s     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.d = CVT_D_S(ctx->f1.fl);
    // 0x00413328: sdc1        $f1, 0x10($sp)
    CHECK_FR(ctx, 1);
    SD(ctx->f1.u64, 0X10, ctx->r29);
    // 0x0041332C: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x00413330: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x00413334: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00413338: addiu       $a1, $a1, 0xAF0
    ctx->r5 = ADD32(ctx->r5, 0XAF0);
    // 0x0041333C: jal         0x0029E3E0
    // 0x00413340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00413340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00413344: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x00413348: beq         $a2, $zero, L_00413370
    if (ctx->r6 == 0) {
        // 0x0041334C: nop
    
            goto L_00413370;
    }
    // 0x0041334C: nop

    // 0x00413350: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00413354: addiu       $a0, $a0, 0x860
    ctx->r4 = ADD32(ctx->r4, 0X860);
    // 0x00413358: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041335C: addiu       $a1, $a1, 0xAF8
    ctx->r5 = ADD32(ctx->r5, 0XAF8);
    // 0x00413360: jal         0x0029E3E0
    // 0x00413364: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00413364: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00413368: j           L_00413388
    // 0x0041336C: nop

        goto L_00413388;
    // 0x0041336C: nop

L_00413370:
    // 0x00413370: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00413374: addiu       $a0, $a0, 0x860
    ctx->r4 = ADD32(ctx->r4, 0X860);
    // 0x00413378: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041337C: addiu       $a1, $a1, 0xB00
    ctx->r5 = ADD32(ctx->r5, 0XB00);
    // 0x00413380: jal         0x0029E3E0
    // 0x00413384: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00413384: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
L_00413388:
    // 0x00413388: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0041338C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00413390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00413394: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00413398: addiu       $v0, $v0, 0x860
    ctx->r2 = ADD32(ctx->r2, 0X860);
    // 0x0041339C: jr          $ra
    // 0x004133A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004133A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00218020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218020: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x00218024: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00218028: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x0021802C: ori         $v1, $v1, 0xFFE0
    ctx->r3 = ctx->r3 | 0XFFE0;
    // 0x00218030: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x00218034: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x00218038: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x0021803C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x00218040: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x00218044: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00218048: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x0021804C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x00218050: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x00218054: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x00218058: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x0021805C: lw          $a2, 0x4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4);
    // 0x00218060: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00218064: and         $v1, $a0, $v1
    ctx->r3 = ctx->r4 & ctx->r3;
    // 0x00218068: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x0021806C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00218070: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x00218074: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00218078: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x0021807C: beq         $a0, $zero, L_00218094
    if (ctx->r4 == 0) {
        // 0x00218080: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00218094;
    }
    // 0x00218080: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00218084: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x00218088: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0021808C: sllv        $a1, $a1, $v0
    ctx->r5 = S32(ctx->r5 << (ctx->r2 & 31));
    // 0x00218090: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
L_00218094:
    // 0x00218094: sltiu       $v0, $a2, 0x20
    ctx->r2 = ctx->r6 < 0X20 ? 1 : 0;
    // 0x00218098: beq         $v0, $zero, L_002180AC
    if (ctx->r2 == 0) {
        // 0x0021809C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002180AC;
    }
    // 0x0021809C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002180A0: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002180A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002180A8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
L_002180AC:
    // 0x002180AC: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002180B0: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002180B4: bgezl       $v1, L_002180CC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x002180B8: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_002180CC;
    }
    goto skip_0;
    // 0x002180B8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x002180BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002180C0: ldc1        $f0, 0x59E0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X59E0);
    // 0x002180C4: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x002180C8: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_002180CC:
    // 0x002180CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002180D0: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x002180D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x002180D8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002180DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002180E0: lwc1        $f2, 0xC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC);
    // 0x002180E4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002180E8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002180EC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x002180F0: lwc1        $f1, 0x8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x002180F4: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x002180F8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002180FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00218100: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x00218104: jr          $ra
    // 0x00218108: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x00218108: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_00454B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00454B68: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00454B6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00454B70: sb          $v0, 0x29($a0)
    MEM_B(0X29, ctx->r4) = ctx->r2;
    // 0x00454B74: sb          $v0, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r2;
    // 0x00454B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00454B7C: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x00454B80: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x00454B84: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x00454B88: sb          $v0, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r2;
    // 0x00454B8C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x00454B90: sb          $a1, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r5;
    // 0x00454B94: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x00454B98: sb          $v0, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r2;
    // 0x00454B9C: jal         0x0041BBB0
    // 0x00454BA0: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    func_0041BBB0(rdram, ctx);
        goto after_0;
    // 0x00454BA0: sb          $zero, 0x32($a0)
    MEM_B(0X32, ctx->r4) = 0;
    after_0:
    // 0x00454BA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00454BA8: jr          $ra
    // 0x00454BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00454BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00465414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465414: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00465418: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046541C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465420: sw          $v0, -0x7054($at)
    MEM_W(-0X7054, ctx->r1) = ctx->r2;
    // 0x00465424: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465428: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0046542C: sw          $zero, -0x7050($at)
    MEM_W(-0X7050, ctx->r1) = 0;
    // 0x00465430: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465434: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465438: sw          $zero, -0x704C($at)
    MEM_W(-0X704C, ctx->r1) = 0;
    // 0x0046543C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465440: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465444: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
    // 0x00465448: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046544C: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465450: sw          $zero, -0x7030($at)
    MEM_W(-0X7030, ctx->r1) = 0;
    // 0x00465454: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465458: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x0046545C: sw          $zero, -0x702C($at)
    MEM_W(-0X702C, ctx->r1) = 0;
    // 0x00465460: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465464: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465468: sw          $zero, -0x7028($at)
    MEM_W(-0X7028, ctx->r1) = 0;
    // 0x0046546C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00465470: addu        $at, $a0, $at
    ctx->r1 = ADD32(ctx->r4, ctx->r1);
    // 0x00465474: sw          $zero, -0x7024($at)
    MEM_W(-0X7024, ctx->r1) = 0;
    // 0x00465478: jr          $ra
    // 0x0046547C: nop

    return;
    // 0x0046547C: nop

;}
RECOMP_FUNC void func_0023118C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023118C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00231190: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x00231194: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x00231198: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x0023119C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x002311A0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x002311A4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x002311A8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x002311AC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x002311B0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x002311B4: addu        $at, $t2, $at
    ctx->r1 = ADD32(ctx->r10, ctx->r1);
    // 0x002311B8: lw          $v0, -0x13EC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X13EC);
    // 0x002311BC: beq         $v0, $zero, L_0023167C
    if (ctx->r2 == 0) {
        // 0x002311C0: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_0023167C;
    }
    // 0x002311C0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002311C4: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x002311C8: ori         $a2, $a2, 0x1A01
    ctx->r6 = ctx->r6 | 0X1A01;
    // 0x002311CC: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x002311D0: ori         $a3, $a3, 0x1801
    ctx->r7 = ctx->r7 | 0X1801;
    // 0x002311D4: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x002311D8: ori         $t0, $t0, 0xA01
    ctx->r8 = ctx->r8 | 0XA01;
    // 0x002311DC: lui         $t1, 0xD9F9
    ctx->r9 = S32(0XD9F9 << 16);
    // 0x002311E0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x002311E4: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x002311E8: ori         $t1, $t1, 0xFBFF
    ctx->r9 = ctx->r9 | 0XFBFF;
    // 0x002311EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002311F0: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x002311F4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002311F8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002311FC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00231200: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x00231204: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00231208: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x0023120C: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x00231210: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00231214: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x00231218: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x0023121C: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x00231220: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x00231224: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x00231228: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x0023122C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00231230: sw          $t1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r9;
    // 0x00231234: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x00231238: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0023123C: addu        $at, $t2, $at
    ctx->r1 = ADD32(ctx->r10, ctx->r1);
    // 0x00231240: lw          $s0, -0x13EC($at)
    ctx->r16 = MEM_W(ctx->r1, -0X13EC);
    // 0x00231244: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00231248: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x0023124C: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x00231250: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00231254: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00231258: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0023125C: lw          $s5, 0x64($s3)
    ctx->r21 = MEM_W(ctx->r19, 0X64);
    // 0x00231260: beq         $s0, $zero, L_00231608
    if (ctx->r16 == 0) {
        // 0x00231264: lui         $s4, 0x10
        ctx->r20 = S32(0X10 << 16);
            goto L_00231608;
    }
    // 0x00231264: lui         $s4, 0x10
    ctx->r20 = S32(0X10 << 16);
    // 0x00231268: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0023126C:
    // 0x0023126C: lw          $v1, 0x40($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X40);
    // 0x00231270: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00231274: beq         $v0, $zero, L_0023128C
    if (ctx->r2 == 0) {
        // 0x00231278: and         $s2, $v1, $s4
        ctx->r18 = ctx->r3 & ctx->r20;
            goto L_0023128C;
    }
    // 0x00231278: and         $s2, $v1, $s4
    ctx->r18 = ctx->r3 & ctx->r20;
    // 0x0023127C: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00231280: and         $v0, $s5, $v0
    ctx->r2 = ctx->r21 & ctx->r2;
    // 0x00231284: beq         $v0, $zero, L_002313CC
    if (ctx->r2 == 0) {
        // 0x00231288: nop
    
            goto L_002313CC;
    }
    // 0x00231288: nop

L_0023128C:
    // 0x0023128C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00231290: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00231294: bnel        $v0, $zero, L_002313CC
    if (ctx->r2 != 0) {
        // 0x00231298: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002313CC;
    }
    goto skip_0;
    // 0x00231298: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x0023129C: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x002312A0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x002312A4: bnel        $v0, $zero, L_002313CC
    if (ctx->r2 != 0) {
        // 0x002312A8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002313CC;
    }
    goto skip_1;
    // 0x002312A8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
    // 0x002312AC: lwc1        $f2, 0x134($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X134);
    // 0x002312B0: lwc1        $f0, 0x130($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X130);
    // 0x002312B4: mul.s       $f1, $f0, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002312B8: lwc1        $f0, 0x12C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x002312BC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002312C0: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002312C4: nop

    // 0x002312C8: bc1fl       L_002312D0
    if (!c1cs) {
        // 0x002312CC: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_002312D0;
    }
    goto skip_2;
    // 0x002312CC: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_2:
L_002312D0:
    // 0x002312D0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x002312D4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002312D8: nop

    // 0x002312DC: bc1fl       L_002312E4
    if (!c1cs) {
        // 0x002312E0: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_002312E4;
    }
    goto skip_3;
    // 0x002312E0: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_002312E4:
    // 0x002312E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002312E8: lwc1        $f2, 0x63F8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X63F8);
    // 0x002312EC: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002312F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002312F4: lwc1        $f1, 0x63FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X63FC);
    // 0x002312F8: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x002312FC: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00231300: sub.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f1.fl;
    // 0x00231304: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00231308: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023130C: add.s       $f4, $f0, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00231310: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x00231314: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00231318: sub.s       $f5, $f0, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0023131C: swc1        $f5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x00231320: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00231324: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00231328: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x0023132C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00231330: sub.s       $f2, $f0, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00231334: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x00231338: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0023133C: add.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00231340: swc1        $f1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00231344: lwc1        $f0, 0x344($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X344);
    // 0x00231348: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x0023134C: nop

    // 0x00231350: bc1f        L_002313CC
    if (!c1cs) {
        // 0x00231354: nop
    
            goto L_002313CC;
    }
    // 0x00231354: nop

    // 0x00231358: lwc1        $f0, 0x338($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X338);
    // 0x0023135C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x00231360: nop

    // 0x00231364: bc1f        L_002313CC
    if (!c1cs) {
        // 0x00231368: nop
    
            goto L_002313CC;
    }
    // 0x00231368: nop

    // 0x0023136C: lwc1        $f0, 0x34C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X34C);
    // 0x00231370: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00231374: nop

    // 0x00231378: bc1f        L_002313CC
    if (!c1cs) {
        // 0x0023137C: nop
    
            goto L_002313CC;
    }
    // 0x0023137C: nop

    // 0x00231380: lwc1        $f0, 0x340($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X340);
    // 0x00231384: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00231388: nop

    // 0x0023138C: bc1f        L_002313CC
    if (!c1cs) {
        // 0x00231390: nop
    
            goto L_002313CC;
    }
    // 0x00231390: nop

    // 0x00231394: lwc1        $f0, 0x348($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X348);
    // 0x00231398: c.lt.s      $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f5.fl < ctx->f0.fl;
    // 0x0023139C: nop

    // 0x002313A0: bc1f        L_002313CC
    if (!c1cs) {
        // 0x002313A4: nop
    
            goto L_002313CC;
    }
    // 0x002313A4: nop

    // 0x002313A8: lwc1        $f0, 0x33C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X33C);
    // 0x002313AC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x002313B0: nop

    // 0x002313B4: bc1f        L_002313CC
    if (!c1cs) {
        // 0x002313B8: addiu       $a0, $s3, 0x2D8
        ctx->r4 = ADD32(ctx->r19, 0X2D8);
            goto L_002313CC;
    }
    // 0x002313B8: addiu       $a0, $s3, 0x2D8
    ctx->r4 = ADD32(ctx->r19, 0X2D8);
    // 0x002313BC: jal         0x0026F60C
    // 0x002313C0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_0026F60C(rdram, ctx);
        goto after_0;
    // 0x002313C0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x002313C4: bnel        $v0, $zero, L_002313CC
    if (ctx->r2 != 0) {
        // 0x002313C8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_002313CC;
    }
    goto skip_4;
    // 0x002313C8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_4:
L_002313CC:
    // 0x002313CC: beq         $s1, $zero, L_0023152C
    if (ctx->r17 == 0) {
        // 0x002313D0: nop
    
            goto L_0023152C;
    }
    // 0x002313D0: nop

    // 0x002313D4: bne         $s2, $zero, L_00231460
    if (ctx->r18 != 0) {
        // 0x002313D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00231460;
    }
    // 0x002313D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002313DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002313E0: lw          $v1, -0x6720($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6720);
    // 0x002313E4: bne         $v1, $v0, L_00231434
    if (ctx->r3 != ctx->r2) {
        // 0x002313E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00231434;
    }
    // 0x002313E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002313EC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x002313F0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x002313F4: lw          $s1, -0x6730($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6730);
    // 0x002313F8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x002313FC: jal         0x0020F85C
    // 0x00231400: addiu       $a0, $s1, 0x20C
    ctx->r4 = ADD32(ctx->r17, 0X20C);
    func_0020F85C(rdram, ctx);
        goto after_1;
    // 0x00231400: addiu       $a0, $s1, 0x20C
    ctx->r4 = ADD32(ctx->r17, 0X20C);
    after_1:
    // 0x00231404: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x00231408: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023140C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00231410: nop

    // 0x00231414: bc1tl       L_0023141C
    if (c1cs) {
        // 0x00231418: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_0023141C;
    }
    goto skip_5;
    // 0x00231418: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_5:
L_0023141C:
    // 0x0023141C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00231420: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00231424: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00231428: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0023142C: j           L_00231444
    // 0x00231430: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
        goto L_00231444;
    // 0x00231430: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00231434:
    // 0x00231434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00231438: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0023143C: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00231440: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_00231444:
    // 0x00231444: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00231448: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x0023144C: jal         0x0022D2FC
    // 0x00231450: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0022D2FC(rdram, ctx);
        goto after_2;
    // 0x00231450: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_2:
    // 0x00231454: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x00231458: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x0023145C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_00231460:
    // 0x00231460: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231464: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00231468: beq         $v0, $zero, L_002314E0
    if (ctx->r2 == 0) {
        // 0x0023146C: addiu       $a1, $s0, 0x4
        ctx->r5 = ADD32(ctx->r16, 0X4);
            goto L_002314E0;
    }
    // 0x0023146C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00231470: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00231474: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00231478: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0023147C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00231480: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x00231484: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00231488: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x0023148C: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    // 0x00231490: jal         0x002254C0
    // 0x00231494: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    func_002254C0(rdram, ctx);
        goto after_3;
    // 0x00231494: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    after_3:
    // 0x00231498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0023149C: lw          $a0, 0xF8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF8);
    // 0x002314A0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002314A4: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x002314A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002314AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002314B0: sll         $a1, $v1, 6
    ctx->r5 = S32(ctx->r3 << 6);
    // 0x002314B4: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x002314B8: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x002314BC: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x002314C0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x002314C4: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x002314C8: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    // 0x002314CC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x002314D0: jal         0x0020B9F4
    // 0x002314D4: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    func_0020B9F4(rdram, ctx);
        goto after_4;
    // 0x002314D4: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    after_4:
    // 0x002314D8: j           L_002314EC
    // 0x002314DC: nop

        goto L_002314EC;
    // 0x002314DC: nop

L_002314E0:
    // 0x002314E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002314E4: jal         0x0022E094
    // 0x002314E8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0022E094(rdram, ctx);
        goto after_5;
    // 0x002314E8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
L_002314EC:
    // 0x002314EC: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x002314F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002314F4: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x002314F8: beq         $v0, $zero, L_00231508
    if (ctx->r2 == 0) {
        // 0x002314FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00231508;
    }
    // 0x002314FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00231500: jal         0x0022DCBC
    // 0x00231504: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0022DCBC(rdram, ctx);
        goto after_6;
    // 0x00231504: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
L_00231508:
    // 0x00231508: lbu         $v0, 0x1B5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B5);
    // 0x0023150C: beq         $v0, $zero, L_002315FC
    if (ctx->r2 == 0) {
        // 0x00231510: nop
    
            goto L_002315FC;
    }
    // 0x00231510: nop

    // 0x00231514: bne         $s2, $zero, L_002315FC
    if (ctx->r18 != 0) {
        // 0x00231518: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_002315FC;
    }
    // 0x00231518: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0023151C: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231520: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00231524: j           L_002315D4
    // 0x00231528: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_002315D4;
    // 0x00231528: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0023152C:
    // 0x0023152C: lbu         $v0, 0x1B5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B5);
    // 0x00231530: beq         $v0, $zero, L_002315FC
    if (ctx->r2 == 0) {
        // 0x00231534: nop
    
            goto L_002315FC;
    }
    // 0x00231534: nop

    // 0x00231538: bne         $s2, $zero, L_002315FC
    if (ctx->r18 != 0) {
        // 0x0023153C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002315FC;
    }
    // 0x0023153C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00231540: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00231544: lw          $v1, -0x6720($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6720);
    // 0x00231548: bne         $v1, $v0, L_00231598
    if (ctx->r3 != ctx->r2) {
        // 0x0023154C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00231598;
    }
    // 0x0023154C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00231550: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x00231554: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00231558: lw          $s1, -0x6730($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6730);
    // 0x0023155C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x00231560: jal         0x0020F85C
    // 0x00231564: addiu       $a0, $s1, 0x20C
    ctx->r4 = ADD32(ctx->r17, 0X20C);
    func_0020F85C(rdram, ctx);
        goto after_7;
    // 0x00231564: addiu       $a0, $s1, 0x20C
    ctx->r4 = ADD32(ctx->r17, 0X20C);
    after_7:
    // 0x00231568: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x0023156C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00231570: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00231574: nop

    // 0x00231578: bc1tl       L_00231580
    if (c1cs) {
        // 0x0023157C: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_00231580;
    }
    goto skip_6;
    // 0x0023157C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_6:
L_00231580:
    // 0x00231580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00231584: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00231588: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x0023158C: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00231590: j           L_002315A8
    // 0x00231594: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
        goto L_002315A8;
    // 0x00231594: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00231598:
    // 0x00231598: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0023159C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x002315A0: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x002315A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_002315A8:
    // 0x002315A8: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x002315AC: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x002315B0: jal         0x0022D2FC
    // 0x002315B4: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0022D2FC(rdram, ctx);
        goto after_8;
    // 0x002315B4: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_8:
    // 0x002315B8: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x002315BC: lw          $v1, 0xF8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF8);
    // 0x002315C0: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x002315C4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x002315C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002315CC: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002315D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_002315D4:
    // 0x002315D4: bne         $v0, $zero, L_002315FC
    if (ctx->r2 != 0) {
        // 0x002315D8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_002315FC;
    }
    // 0x002315D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002315DC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x002315E0: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x002315E4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x002315E8: lw          $a2, 0x6D1C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6D1C);
    // 0x002315EC: sll         $a2, $a2, 6
    ctx->r6 = S32(ctx->r6 << 6);
    // 0x002315F0: addiu       $a2, $a2, 0x48
    ctx->r6 = ADD32(ctx->r6, 0X48);
    // 0x002315F4: jal         0x00236170
    // 0x002315F8: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    func_00236170(rdram, ctx);
        goto after_9;
    // 0x002315F8: addu        $a2, $s0, $a2
    ctx->r6 = ADD32(ctx->r16, ctx->r6);
    after_9:
L_002315FC:
    // 0x002315FC: lw          $s0, 0x1D0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1D0);
    // 0x00231600: bne         $s0, $zero, L_0023126C
    if (ctx->r16 != 0) {
        // 0x00231604: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0023126C;
    }
    // 0x00231604: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00231608:
    // 0x00231608: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x0023160C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00231610: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x00231614: ori         $a3, $a3, 0x1801
    ctx->r7 = ctx->r7 | 0X1801;
    // 0x00231618: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x0023161C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00231620: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x00231624: ori         $t0, $t0, 0x1A01
    ctx->r8 = ctx->r8 | 0X1A01;
    // 0x00231628: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0023162C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00231630: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x00231634: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00231638: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0023163C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00231640: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00231644: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x00231648: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0023164C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00231650: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x00231654: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x00231658: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0023165C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00231660: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x00231664: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x00231668: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0023166C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00231670: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00231674: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x00231678: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_0023167C:
    // 0x0023167C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x00231680: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x00231684: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x00231688: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0023168C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x00231690: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00231694: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00231698: jr          $ra
    // 0x0023169C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0023169C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0029DFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DFEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
;}
RECOMP_FUNC void func_0041A0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A0CC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041A0D0: lw          $v0, 0x1F78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F78);
    // 0x0041A0D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041A0D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041A0DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041A0E0: bne         $v0, $zero, L_0041A0F8
    if (ctx->r2 != 0) {
        // 0x0041A0E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0041A0F8;
    }
    // 0x0041A0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041A0E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041A0EC: addiu       $v0, $v0, 0x6600
    ctx->r2 = ADD32(ctx->r2, 0X6600);
    // 0x0041A0F0: j           L_0041A12C
    // 0x0041A0F4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_0041A12C;
    // 0x0041A0F4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0041A0F8:
    // 0x0041A0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041A0FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041A100: addiu       $v0, $v0, 0x6618
    ctx->r2 = ADD32(ctx->r2, 0X6618);
    // 0x0041A104: jal         0x004160F0
    // 0x0041A108: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041A108: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x0041A10C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0041A110: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041A114: addiu       $a1, $a1, 0x1040
    ctx->r5 = ADD32(ctx->r5, 0X1040);
    // 0x0041A118: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041A11C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041A120: lw          $a2, 0x1F78($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1F78);
    // 0x0041A124: jal         0x0029E3E0
    // 0x0041A128: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0041A128: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
L_0041A12C:
    // 0x0041A12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041A130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A134: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A138: jr          $ra
    // 0x0041A13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00260360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260360: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00260364: lb          $v1, 0x34($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X34);
    // 0x00260368: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x0026036C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00260370: beq         $v1, $v0, L_00260380
    if (ctx->r3 == ctx->r2) {
        // 0x00260374: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_00260380;
    }
    // 0x00260374: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x00260378: bne         $v1, $v0, L_00260388
    if (ctx->r3 != ctx->r2) {
            // 0x0026037C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_00260388(rdram, ctx);
    return;
    }
    // 0x0026037C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00260380:
    // 0x00260380: jr          $ra
    // 0x00260384: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00260384: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042E894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042E898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E89C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042E8A0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0042E8A4: lw          $v1, -0x5378($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5378);
    // 0x0042E8A8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x0042E8AC: bne         $v1, $v0, L_0042E8D4
    if (ctx->r3 != ctx->r2) {
        // 0x0042E8B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0042E8D4;
    }
    // 0x0042E8B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042E8B4: jal         0x0028D0E0
    // 0x0042E8B8: nop

    func_0028D0E0(rdram, ctx);
        goto after_0;
    // 0x0042E8B8: nop

    after_0:
    // 0x0042E8BC: beq         $v0, $zero, L_0042E8D4
    if (ctx->r2 == 0) {
        // 0x0042E8C0: nop
    
            goto L_0042E8D4;
    }
    // 0x0042E8C0: nop

    // 0x0042E8C4: jal         0x0028D100
    // 0x0042E8C8: nop

    func_0028D100(rdram, ctx);
        goto after_1;
    // 0x0042E8C8: nop

    after_1:
    // 0x0042E8CC: jal         0x0028D0F0
    // 0x0042E8D0: nop

    func_0028D0F0(rdram, ctx);
        goto after_2;
    // 0x0042E8D0: nop

    after_2:
L_0042E8D4:
    // 0x0042E8D4: lw          $s0, 0x20($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X20);
    // 0x0042E8D8: beq         $s0, $zero, L_0042E90C
    if (ctx->r16 == 0) {
        // 0x0042E8DC: nop
    
            goto L_0042E90C;
    }
    // 0x0042E8DC: nop

L_0042E8E0:
    // 0x0042E8E0: jal         0x0042DE74
    // 0x0042E8E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042DE74(rdram, ctx);
        goto after_3;
    // 0x0042E8E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0042E8E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E8EC: jal         0x0024CF58
    // 0x0042E8F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024CF58(rdram, ctx);
        goto after_4;
    // 0x0042E8F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042E8F4: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0042E8F8: jal         0x00284254
    // 0x0042E8FC: nop

    func_00284254(rdram, ctx);
        goto after_5;
    // 0x0042E8FC: nop

    after_5:
    // 0x0042E900: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x0042E904: bne         $s0, $zero, L_0042E8E0
    if (ctx->r16 != 0) {
        // 0x0042E908: nop
    
            goto L_0042E8E0;
    }
    // 0x0042E908: nop

L_0042E90C:
    // 0x0042E90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042E910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042E914: jr          $ra
    // 0x0042E918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042E918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00239C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00239C28: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00239C2C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x00239C30: lw          $s6, 0x8C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X8C);
    // 0x00239C34: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00239C38: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00239C3C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00239C40: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00239C44: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x00239C48: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00239C4C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00239C50: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00239C54: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00239C58: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00239C5C: sdc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X68, ctx->r29);
    // 0x00239C60: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x00239C64: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x00239C68: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x00239C6C: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    // 0x00239C70: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x00239C74: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00239C78: sw          $v1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r3;
    // 0x00239C7C: sw          $t0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r8;
    // 0x00239C80: sw          $t1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r9;
    // 0x00239C84: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x00239C88: lw          $s7, 0x88($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X88);
    // 0x00239C8C: bne         $v0, $zero, L_00239CA0
    if (ctx->r2 != 0) {
        // 0x00239C90: addu        $fp, $a1, $zero
        ctx->r30 = ADD32(ctx->r5, 0);
            goto L_00239CA0;
    }
    // 0x00239C90: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00239C94: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x00239C98: j           L_00239D78
    // 0x00239C9C: nop

        goto L_00239D78;
    // 0x00239C9C: nop

L_00239CA0:
    // 0x00239CA0: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00239CA4: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x00239CA8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00239CAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00239CB0: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00239CB4: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x00239CB8: srl         $s3, $v0, 4
    ctx->r19 = S32(U32(ctx->r2) >> 4);
    // 0x00239CBC: andi        $s3, $s3, 0x1
    ctx->r19 = ctx->r19 & 0X1;
L_00239CC0:
    // 0x00239CC0: lw          $s0, 0x10($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10);
    // 0x00239CC4: beql        $s0, $zero, L_00239D68
    if (ctx->r16 == 0) {
        // 0x00239CC8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00239D68;
    }
    goto skip_0;
    // 0x00239CC8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00239CCC: beq         $s3, $zero, L_00239CE0
    if (ctx->r19 == 0) {
        // 0x00239CD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00239CE0;
    }
    // 0x00239CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00239CD4: beql        $fp, $s0, L_00239D68
    if (ctx->r30 == ctx->r16) {
        // 0x00239CD8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00239D68;
    }
    goto skip_1;
    // 0x00239CD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x00239CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00239CE0:
    // 0x00239CE0: jal         0x0026CB2C
    // 0x00239CE4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_0026CB2C(rdram, ctx);
        goto after_0;
    // 0x00239CE4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00239CE8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00239CEC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00239CF0: jal         0x0020EF2C
    // 0x00239CF4: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00239CF4: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_1:
    // 0x00239CF8: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00239CFC: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00239D00: lwc1        $f1, 0x2C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X2C);
    // 0x00239D04: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00239D08: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00239D0C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00239D10: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00239D14: add.s       $f20, $f2, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00239D18: c.lt.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl < ctx->f20.fl;
    // 0x00239D1C: nop

    // 0x00239D20: bc1fl       L_00239D68
    if (!c1cs) {
        // 0x00239D24: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00239D68;
    }
    goto skip_2;
    // 0x00239D24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x00239D28: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x00239D2C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x00239D30: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00239D34: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00239D38: jal         0x002698AC
    // 0x00239D3C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_002698AC(rdram, ctx);
        goto after_2;
    // 0x00239D3C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_2:
    // 0x00239D40: beq         $v0, $zero, L_00239D68
    if (ctx->r2 == 0) {
        // 0x00239D44: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00239D68;
    }
    // 0x00239D44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00239D48: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x00239D4C: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x00239D50: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00239D54: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x00239D58: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x00239D5C: sw          $v1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r3;
    // 0x00239D60: sw          $t0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r8;
    // 0x00239D64: sw          $t1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r9;
L_00239D68:
    // 0x00239D68: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x00239D6C: bne         $v0, $zero, L_00239CC0
    if (ctx->r2 != 0) {
        // 0x00239D70: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_00239CC0;
    }
    // 0x00239D70: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00239D74: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_00239D78:
    // 0x00239D78: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00239D7C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00239D80: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00239D84: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00239D88: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00239D8C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00239D90: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x00239D94: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00239D98: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00239D9C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00239DA0: ldc1        $f21, 0x68($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X68);
    // 0x00239DA4: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x00239DA8: jr          $ra
    // 0x00239DAC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00239DAC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0045A7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A7A0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0045A7A4: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x0045A7A8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x0045A7AC: beq         $v0, $zero, L_0045A7D4
    if (ctx->r2 == 0) {
        // 0x0045A7B0: nop
    
            goto L_0045A7D4;
    }
    // 0x0045A7B0: nop

    // 0x0045A7B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A7B8: lw          $v0, 0x202C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X202C);
    // 0x0045A7BC: bne         $v0, $zero, L_0045A7D4
    if (ctx->r2 != 0) {
        // 0x0045A7C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045A7D4;
    }
    // 0x0045A7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A7C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045A7C8: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0045A7CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045A7D0: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_0045A7D4:
    // 0x0045A7D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045A7D8: lw          $v0, -0x4EF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF8);
    // 0x0045A7DC: jr          $ra
    // 0x0045A7E0: nop

    return;
    // 0x0045A7E0: nop

;}
RECOMP_FUNC void func_00276868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276868: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x0027686C: jr          $ra
    // 0x00276870: srl         $v0, $v0, 14
    ctx->r2 = S32(U32(ctx->r2) >> 14);
    return;
    // 0x00276870: srl         $v0, $v0, 14
    ctx->r2 = S32(U32(ctx->r2) >> 14);
;}
RECOMP_FUNC void func_00421A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00421A24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00421A28: jal         0x00285A80
    // 0x00421A2C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_00285A80(rdram, ctx);
        goto after_0;
    // 0x00421A2C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00421A30: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00421A34: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00421A38: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00421A3C: lw          $a1, 0x54($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X54);
    // 0x00421A40: jal         0x0042C700
    // 0x00421A44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0042C700(rdram, ctx);
        goto after_1;
    // 0x00421A44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x00421A48: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00421A4C: jr          $ra
    // 0x00421A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00421A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004288B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004288B8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x004288BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x004288C0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004288C4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x004288C8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004288CC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x004288D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004288D4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004288D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004288DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004288E0: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x004288E4: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x004288E8: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x004288EC: srl         $a2, $a1, 8
    ctx->r6 = S32(U32(ctx->r5) >> 8);
    // 0x004288F0: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x004288F4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x004288F8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x004288FC: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00428900: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00428904: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00428908: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
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
RECOMP_FUNC void func_0041C4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C4C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C4C4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C4C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C4CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C4D0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0041C4D4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C4D8: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041C4DC: beql        $v0, $zero, L_0041C4F4
    if (ctx->r2 == 0) {
        // 0x0041C4E0: addiu       $v0, $zero, 0xF8
        ctx->r2 = ADD32(0, 0XF8);
            goto L_0041C4F4;
    }
    goto skip_0;
    // 0x0041C4E0: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    skip_0:
    // 0x0041C4E4: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C4E8: bnel        $v0, $zero, L_0041C4F0
    if (ctx->r2 != 0) {
        // 0x0041C4EC: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C4F0;
    }
    goto skip_1;
    // 0x0041C4EC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C4F0:
    // 0x0041C4F0: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
L_0041C4F4:
    // 0x0041C4F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0041C4F8: lbu         $a1, 0x29($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X29);
    // 0x0041C4FC: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0041C500: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C504: jal         0x0041648C
    // 0x0041C508: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C508: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x0041C50C: sb          $v0, 0x29($s0)
    MEM_B(0X29, ctx->r16) = ctx->r2;
    // 0x0041C510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C518: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C51C: jr          $ra
    // 0x0041C520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00228108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228108: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0022810C: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x00228110: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00228114: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x00228118: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x0022811C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00228120: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00228124: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00228128: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0022812C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x00228130: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00228134: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x00228138: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x0022813C: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x00228140: beq         $v0, $zero, L_00228264
    if (ctx->r2 == 0) {
        // 0x00228144: sw          $s0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r16;
            goto L_00228264;
    }
    // 0x00228144: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00228148: beq         $s4, $zero, L_00228264
    if (ctx->r20 == 0) {
        // 0x0022814C: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00228264;
    }
    // 0x0022814C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00228150: bne         $s1, $s0, L_00228174
    if (ctx->r17 != ctx->r16) {
        // 0x00228154: nop
    
            goto L_00228174;
    }
    // 0x00228154: nop

    // 0x00228158: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0022815C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00228160: jal         0x00224180
    // 0x00228164: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00228164: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_0:
    // 0x00228168: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0022816C: beq         $s1, $s0, L_00228268
    if (ctx->r17 == ctx->r16) {
        // 0x00228170: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00228268;
    }
    // 0x00228170: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00228174:
    // 0x00228174: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00228178: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0022817C: bne         $v0, $zero, L_00228194
    if (ctx->r2 != 0) {
        // 0x00228180: nop
    
            goto L_00228194;
    }
    // 0x00228180: nop

    // 0x00228184: lw          $v0, 0x5324($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5324);
    // 0x00228188: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x0022818C: beq         $v0, $zero, L_002281C8
    if (ctx->r2 == 0) {
        // 0x00228190: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002281C8;
    }
    // 0x00228190: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00228194:
    // 0x00228194: lw          $s0, 0x5300($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X5300);
    // 0x00228198: beq         $s0, $zero, L_002281C8
    if (ctx->r16 == 0) {
        // 0x0022819C: addiu       $a0, $s2, 0x5300
        ctx->r4 = ADD32(ctx->r18, 0X5300);
            goto L_002281C8;
    }
    // 0x0022819C: addiu       $a0, $s2, 0x5300
    ctx->r4 = ADD32(ctx->r18, 0X5300);
    // 0x002281A0: jal         0x00200738
    // 0x002281A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x002281A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002281A8: addiu       $a0, $s2, 0x5314
    ctx->r4 = ADD32(ctx->r18, 0X5314);
    // 0x002281AC: jal         0x00200518
    // 0x002281B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x002281B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002281B4: beq         $s3, $zero, L_002281C8
    if (ctx->r19 == 0) {
        // 0x002281B8: sw          $s3, 0x290($s0)
        MEM_W(0X290, ctx->r16) = ctx->r19;
            goto L_002281C8;
    }
    // 0x002281B8: sw          $s3, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->r19;
    // 0x002281BC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x002281C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002281C4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
L_002281C8:
    // 0x002281C8: beq         $s0, $zero, L_00228264
    if (ctx->r16 == 0) {
        // 0x002281CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00228264;
    }
    // 0x002281CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002281D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002281D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002281D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x002281DC: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x002281E0: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x002281E4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x002281E8: lw          $a3, 0x6D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D00);
    // 0x002281EC: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x002281F0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x002281F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002281F8: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x002281FC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x00228200: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x00228204: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x00228208: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x0022820C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x00228210: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00228214: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00228218: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0022821C: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x00228220: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x00228224: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x00228228: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x0022822C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00228230: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00228234: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x00228238: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x0022823C: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x00228240: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x00228244: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x00228248: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x0022824C: jal         0x00219BC0
    // 0x00228250: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    func_00219BC0(rdram, ctx);
        goto after_3;
    // 0x00228250: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    after_3:
    // 0x00228254: jal         0x0021E5D4
    // 0x00228258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_4;
    // 0x00228258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0022825C: j           L_00228268
    // 0x00228260: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_00228268;
    // 0x00228260: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00228264:
    // 0x00228264: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00228268:
    // 0x00228268: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x0022826C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x00228270: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x00228274: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x00228278: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0022827C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00228280: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00228284: jr          $ra
    // 0x00228288: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00228288: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_00211860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211860: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00211864: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00211868: mtc1        $a1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r5;
    // 0x0021186C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00211870: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00211874: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00211878: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x0021187C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00211880: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00211884: nop

    // 0x00211888: bc1f        L_0021189C
    if (!c1cs) {
        // 0x0021188C: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_0021189C;
    }
    // 0x0021188C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00211890: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x00211894: j           L_002118A0
    // 0x00211898: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
        goto L_002118A0;
    // 0x00211898: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
L_0021189C:
    // 0x0021189C: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
L_002118A0:
    // 0x002118A0: bnel        $v0, $zero, L_002118A8
    if (ctx->r2 != 0) {
        // 0x002118A4: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_002118A8;
    }
    goto skip_0;
    // 0x002118A4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    skip_0:
L_002118A8:
    // 0x002118A8: jr          $ra
    // 0x002118AC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x002118AC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0045C514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042354C:
    // 0x0045C514: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
L_00423598:
    // 0x0045C518: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045C51C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045C520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045C524: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045C528: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045C52C: beq         $v0, $zero, L_0045C544
    if (ctx->r2 == 0) {
        // 0x0045C530: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_0045C544;
    }
    // 0x0045C530: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045C534: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0045C538: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0045C53C: j           L_0042354C
    // 0x0045C540: nop

    entry_0042354C(rdram, ctx);
    return;
    // 0x0045C540: nop

L_0045C544:
    // 0x0045C544: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x0045C548: lb          $s1, 0x4($v0)
    ctx->r17 = MEM_B(ctx->r2, 0X4);
    // 0x0045C54C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045C550: lw          $v0, 0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X964);
    // 0x0045C554: beq         $v0, $zero, L_0045C56C
    if (ctx->r2 == 0) {
        // 0x0045C558: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0045C56C;
    }
    // 0x0045C558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045C55C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C560: addiu       $v0, $v0, 0x50B4
    ctx->r2 = ADD32(ctx->r2, 0X50B4);
    // 0x0045C564: j           L_00423598
    // 0x0045C568: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    entry_00423598(rdram, ctx);
    return;
    // 0x0045C568: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_0045C56C:
    // 0x0045C56C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045C570: addiu       $v0, $v0, 0x50E4
    ctx->r2 = ADD32(ctx->r2, 0X50E4);
    // 0x0045C574: jal         0x004160F0
    // 0x0045C578: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045C578: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x0045C57C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0045C580: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045C584: addiu       $a1, $a1, 0x1430
    ctx->r5 = ADD32(ctx->r5, 0X1430);
    // 0x0045C588: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045C58C: addiu       $a2, $s1, 0x1
    ctx->r6 = ADD32(ctx->r17, 0X1);
    // 0x0045C590: jal         0x0029E3E0
    // 0x0045C594: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045C594: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0045C598: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045C59C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045C5A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045C5A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045C5A8: jr          $ra
    // 0x0045C5AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045C5AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00246854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00246854: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00246858: jr          $ra
    // 0x0024685C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x0024685C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_00451EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418F18:
    // 0x00451EA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451EAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00451EB0: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00451EB4: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x00451EB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00451EBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00451EC0: lb          $v0, 0x2A($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2A);
    // 0x00451EC4: beq         $v0, $zero, L_00451EF8
    if (ctx->r2 == 0) {
        // 0x00451EC8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00451EF8;
    }
    // 0x00451EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00451ECC: jal         0x004160F0
    // 0x00451ED0: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00451ED0: nop

    after_0:
    // 0x00451ED4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451ED8: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00451EDC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451EE0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451EE4: lb          $a2, 0x2A($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X2A);
    // 0x00451EE8: jal         0x0029E3E0
    // 0x00451EEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00451EEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00451EF0: j           L_00418F18
    // 0x00451EF4: nop

    entry_00418F18(rdram, ctx);
    return;
    // 0x00451EF4: nop

L_00451EF8:
    // 0x00451EF8: jal         0x004160F0
    // 0x00451EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00451EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00451F00: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451F04: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00451F08: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451F0C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00451F10: jal         0x0029E3E0
    // 0x00451F14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00451F14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x00451F18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00451F1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00451F20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451F24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451F28: jr          $ra
    // 0x00451F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002460FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002460FC: sw          $a2, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->r6;
    // 0x00246100: jr          $ra
    // 0x00246104: sw          $a3, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r7;
    return;
    // 0x00246104: sw          $a3, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r7;
;}
RECOMP_FUNC void func_00226658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226658: jr          $ra
    // 0x0022665C: nop

    return;
    // 0x0022665C: nop

;}
RECOMP_FUNC void func_00273D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273D88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00273D8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00273D90: addiu       $v1, $a0, 0xAC
    ctx->r3 = ADD32(ctx->r4, 0XAC);
L_00273D94:
    // 0x00273D94: lw          $v0, -0xA0($v1)
    ctx->r2 = MEM_W(ctx->r3, -0XA0);
    // 0x00273D98: beql        $v0, $a3, L_00273DC4
    if (ctx->r2 == ctx->r7) {
        // 0x00273D9C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00273DC4;
    }
    goto skip_0;
    // 0x00273D9C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x00273DA0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00273DA4: lh          $v0, 0x102($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X102);
    // 0x00273DA8: beq         $v0, $a2, L_00273DC4
    if (ctx->r2 == ctx->r6) {
        // 0x00273DAC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_00273DC4;
    }
    // 0x00273DAC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00273DB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00273DB4: bne         $v0, $a1, L_00273DC8
    if (ctx->r2 != ctx->r5) {
        // 0x00273DB8: slti        $v0, $a2, 0x10
        ctx->r2 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_00273DC8;
    }
    // 0x00273DB8: slti        $v0, $a2, 0x10
    ctx->r2 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x00273DBC: jr          $ra
    // 0x00273DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00273DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00273DC4:
    // 0x00273DC4: slti        $v0, $a2, 0x10
    ctx->r2 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_00273DC8:
    // 0x00273DC8: bne         $v0, $zero, L_00273D94
    if (ctx->r2 != 0) {
        // 0x00273DCC: addiu       $v1, $v1, 0xCC
        ctx->r3 = ADD32(ctx->r3, 0XCC);
            goto L_00273D94;
    }
    // 0x00273DCC: addiu       $v1, $v1, 0xCC
    ctx->r3 = ADD32(ctx->r3, 0XCC);
    // 0x00273DD0: jr          $ra
    // 0x00273DD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00273DD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0045007C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00428CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00428CF0: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x00428CF4: sw          $s2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r18;
    // 0x00428CF8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00428CFC: sw          $fp, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r30;
    // 0x00428D00: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00428D04: sw          $s0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r16;
    // 0x00428D08: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00428D0C: sw          $s5, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r21;
    // 0x00428D10: sw          $ra, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r31;
    // 0x00428D14: sw          $s7, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r23;
    // 0x00428D18: sw          $s6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r22;
    // 0x00428D1C: sw          $s4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r20;
    // 0x00428D20: sw          $s3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r19;
    // 0x00428D24: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x00428D28: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x00428D2C: lw          $s6, 0x178($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X178);
    // 0x00428D30: slt         $v0, $fp, $v0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00428D34: beq         $v0, $zero, L_00428DF0
    if (ctx->r2 == 0) {
        // 0x00428D38: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_00428DF0;
    }
    // 0x00428D38: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00428D3C: bltz        $fp, L_004290F4
    if (SIGNED(ctx->r30) < 0) {
        // 0x00428D40: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D44: blez        $s6, L_00428DF0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00428D48: andi        $v0, $s6, 0x1F
        ctx->r2 = ctx->r22 & 0X1F;
            goto L_00428DF0;
    }
    // 0x00428D48: andi        $v0, $s6, 0x1F
    ctx->r2 = ctx->r22 & 0X1F;
    // 0x00428D4C: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x00428D50: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D54: bltz        $s0, L_00428DF0
    if (SIGNED(ctx->r16) < 0) {
        // 0x00428D58: andi        $v0, $s0, 0x1F
        ctx->r2 = ctx->r16 & 0X1F;
            goto L_00428DF0;
    }
    // 0x00428D58: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x00428D5C: bne         $v0, $zero, L_004290F4
    if (ctx->r2 != 0) {
        // 0x00428D60: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D64: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00428D68: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00428D6C: beq         $v0, $zero, L_004290F4
    if (ctx->r2 == 0) {
        // 0x00428D70: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428D70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428D74: jal         0x00429DFC
    // 0x00428D78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00428D78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00428D7C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00428D80: bne         $v0, $v1, L_00428D90
    if (ctx->r2 != ctx->r3) {
        // 0x00428D84: nop
    
            goto L_00428D90;
    }
    // 0x00428D84: nop

L_00428D88:
    // 0x00428D88: j           L_004290F4
    // 0x00428D8C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_004290F4;
    // 0x00428D8C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_00428D90:
    // 0x00428D90: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x00428D94: beq         $v0, $zero, L_00428DB4
    if (ctx->r2 == 0) {
        // 0x00428D98: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_00428DB4;
    }
    // 0x00428D98: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x00428D9C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x00428DA0: jal         0x00429EC4
    // 0x00428DA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00429EC4(rdram, ctx);
        goto after_1;
    // 0x00428DA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00428DA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428DAC: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x00428DB0: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_004290F4;
    }
    // 0x00428DB0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
L_00428DB4:
    // 0x00428DB4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00428DB8: lhu         $a2, 0x5E($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X5E);
    // 0x00428DBC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00428DC0: addu        $a2, $a2, $fp
    ctx->r6 = ADD32(ctx->r6, ctx->r30);
    // 0x00428DC4: jal         0x00299680
    // 0x00428DC8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    func_00299680(rdram, ctx);
        goto after_2;
    // 0x00428DC8: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x00428DCC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00428DD0: bne         $v1, $zero, L_004290F4
    if (ctx->r3 != 0) {
        // 0x00428DD4: nop
    
            goto L_004290F4;
    }
    // 0x00428DD4: nop

    // 0x00428DD8: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x00428DDC: beq         $v0, $zero, L_004290F4
    if (ctx->r2 == 0) {
        // 0x00428DE0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428DE0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428DE4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00428DE8: bne         $v0, $zero, L_00428DF8
    if (ctx->r2 != 0) {
        // 0x00428DEC: nop
    
            goto L_00428DF8;
    }
    // 0x00428DEC: nop

L_00428DF0:
    // 0x00428DF0: j           L_004290F4
    // 0x00428DF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_004290F4;
    // 0x00428DF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00428DF8:
    // 0x00428DF8: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00428DFC: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00428E00: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00428E04: bne         $v0, $zero, L_00428E34
    if (ctx->r2 != 0) {
        // 0x00428E08: nop
    
            goto L_00428E34;
    }
    // 0x00428E08: nop

    // 0x00428E0C: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x00428E10: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428E14: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428E18: beq         $v0, $zero, L_00428E34
    if (ctx->r2 == 0) {
        // 0x00428E1C: nop
    
            goto L_00428E34;
    }
    // 0x00428E1C: nop

    // 0x00428E20: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x00428E24: beq         $v0, $zero, L_00428E34
    if (ctx->r2 == 0) {
        // 0x00428E28: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00428E34;
    }
    // 0x00428E28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00428E2C: bgez        $v0, L_00428E4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00428E30: andi        $v0, $s5, 0xFF
        ctx->r2 = ctx->r21 & 0XFF;
            goto L_00428E4C;
    }
    // 0x00428E30: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
L_00428E34:
    // 0x00428E34: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x00428E38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00428E3C: beq         $a0, $v1, L_004290F4
    if (ctx->r4 == ctx->r3) {
        // 0x00428E40: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_004290F4;
    }
    // 0x00428E40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00428E44: j           L_004290F4
    // 0x00428E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_004290F4;
    // 0x00428E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_00428E4C:
    // 0x00428E4C: bne         $v0, $zero, L_00428E6C
    if (ctx->r2 != 0) {
        // 0x00428E50: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00428E6C;
    }
    // 0x00428E50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00428E54: lbu         $v0, 0x20($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X20);
    // 0x00428E58: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00428E5C: bne         $v0, $zero, L_00428E6C
    if (ctx->r2 != 0) {
        // 0x00428E60: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_00428E6C;
    }
    // 0x00428E60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00428E64: j           L_004290F4
    // 0x00428E68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_004290F4;
    // 0x00428E68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_00428E6C:
    // 0x00428E6C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00428E70: bgez        $a3, L_00428E7C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x00428E74: sb          $v0, 0x138($sp)
        MEM_B(0X138, ctx->r29) = ctx->r2;
            goto L_00428E7C;
    }
    // 0x00428E74: sb          $v0, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r2;
    // 0x00428E78: addiu       $a3, $a3, 0x1F
    ctx->r7 = ADD32(ctx->r7, 0X1F);
L_00428E7C:
    // 0x00428E7C: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x00428E80: sra         $s1, $a3, 5
    ctx->r17 = S32(SIGNED(ctx->r7) >> 5);
    // 0x00428E84: sh          $v0, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r2;
    // 0x00428E88: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00428E8C: bne         $v0, $zero, L_00428F44
    if (ctx->r2 != 0) {
        // 0x00428E90: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00428F44;
    }
    // 0x00428E90: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x00428E94: addiu       $s3, $sp, 0x138
    ctx->r19 = ADD32(ctx->r29, 0X138);
    // 0x00428E98: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x00428E9C: addiu       $s0, $sp, 0x13A
    ctx->r16 = ADD32(ctx->r29, 0X13A);
    // 0x00428EA0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_00428EA4:
    // 0x00428EA4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x00428EA8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x00428EAC: beq         $v1, $v0, L_00428ED0
    if (ctx->r3 == ctx->r2) {
        // 0x00428EB0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00428ED0;
    }
    // 0x00428EB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428EB4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00428EB8: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x00428EBC: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x00428EC0: jal         0x00429AA4
    // 0x00428EC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_3;
    // 0x00428EC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x00428EC8: bne         $v0, $zero, L_00428F30
    if (ctx->r2 != 0) {
        // 0x00428ECC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00428F30;
    }
    // 0x00428ECC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00428ED0:
    // 0x00428ED0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428ED4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00428ED8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00428EDC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x00428EE0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x00428EE4: lw          $v1, 0x60($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X60);
    // 0x00428EE8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00428EEC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00428EF0: bne         $v0, $zero, L_00428F20
    if (ctx->r2 != 0) {
        // 0x00428EF4: nop
    
            goto L_00428F20;
    }
    // 0x00428EF4: nop

    // 0x00428EF8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x00428EFC: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x00428F00: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00428F04: beq         $v0, $zero, L_00428F20
    if (ctx->r2 == 0) {
        // 0x00428F08: nop
    
            goto L_00428F20;
    }
    // 0x00428F08: nop

    // 0x00428F0C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x00428F10: beq         $v0, $zero, L_00428F20
    if (ctx->r2 == 0) {
        // 0x00428F14: sll         $v0, $v0, 24
        ctx->r2 = S32(ctx->r2 << 24);
            goto L_00428F20;
    }
    // 0x00428F14: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x00428F18: bgez        $v0, L_00428F30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00428F1C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00428F30;
    }
    // 0x00428F1C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00428F20:
    // 0x00428F20: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x00428F24: bne         $v0, $s7, L_00428F30
    if (ctx->r2 != ctx->r23) {
        // 0x00428F28: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_00428F30;
    }
    // 0x00428F28: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x00428F2C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_00428F30:
    // 0x00428F30: bne         $v1, $zero, L_00428D88
    if (ctx->r3 != 0) {
        // 0x00428F34: addiu       $s1, $s1, -0x8
        ctx->r17 = ADD32(ctx->r17, -0X8);
            goto L_00428D88;
    }
    // 0x00428F34: addiu       $s1, $s1, -0x8
    ctx->r17 = ADD32(ctx->r17, -0X8);
    // 0x00428F38: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x00428F3C: beq         $v0, $zero, L_00428EA4
    if (ctx->r2 == 0) {
        // 0x00428F40: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_00428EA4;
    }
    // 0x00428F40: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_00428F44:
    // 0x00428F44: bltzl       $v0, L_00428F4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x00428F48: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_00428F4C;
    }
    goto skip_0;
    // 0x00428F48: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_0:
L_00428F4C:
    // 0x00428F4C: sra         $s4, $v0, 5
    ctx->r20 = S32(SIGNED(ctx->r2) >> 5);
    // 0x00428F50: lw          $s3, 0x17C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X17C);
    // 0x00428F54: blez        $s4, L_00429090
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00428F58: andi        $v1, $s5, 0xFF
        ctx->r3 = ctx->r21 & 0XFF;
            goto L_00429090;
    }
    // 0x00428F58: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x00428F5C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_00428F60:
    // 0x00428F60: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00428F64: bne         $s1, $v0, L_00429008
    if (ctx->r17 != ctx->r2) {
        // 0x00428F68: nop
    
            goto L_00429008;
    }
    // 0x00428F68: nop

    // 0x00428F6C: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x00428F70: lbu         $v1, 0x13A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X13A);
    // 0x00428F74: lbu         $v0, 0x138($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X138);
    // 0x00428F78: beq         $v1, $v0, L_00428FA0
    if (ctx->r3 == ctx->r2) {
        // 0x00428F7C: addiu       $s0, $sp, 0x13A
        ctx->r16 = ADD32(ctx->r29, 0X13A);
            goto L_00428FA0;
    }
    // 0x00428F7C: addiu       $s0, $sp, 0x13A
    ctx->r16 = ADD32(ctx->r29, 0X13A);
    // 0x00428F80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00428F84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00428F88: sb          $v1, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r3;
    // 0x00428F8C: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x00428F90: jal         0x00429AA4
    // 0x00428F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00429AA4(rdram, ctx);
        goto after_4;
    // 0x00428F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x00428F98: bne         $v0, $zero, L_00429000
    if (ctx->r2 != 0) {
        // 0x00428F9C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00429000;
    }
    // 0x00428F9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00428FA0:
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
L_00429008:
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
        goto after_5;
    // 0x00429020: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
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
        goto after_6;
    // 0x00429054: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_6:
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
        goto after_7;
    // 0x00429070: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_7:
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
L_00429090:
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
        goto after_8;
    // 0x004290BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_8:
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
        goto after_9;
    // 0x004290E4: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    after_9:
    // 0x004290E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004290EC: beql        $v1, $zero, L_004290F4
    if (ctx->r3 == 0) {
        // 0x004290F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004290F4;
    }
    goto skip_1;
    // 0x004290F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
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
RECOMP_FUNC void func_0042BF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042BF48: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0042BF4C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x0042BF50: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x0042BF54: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0042BF58: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0042BF5C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x0042BF60: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x0042BF64: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x0042BF68: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0042BF6C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x0042BF70: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x0042BF74: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x0042BF78: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x0042BF7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0042BF80: jal         0x002017D4
    // 0x0042BF84: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0042BF84: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_0:
    // 0x0042BF88: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x0042BF8C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0042BF90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0042BF94: jal         0x002017D4
    // 0x0042BF98: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0042BF98: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x0042BF9C: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x0042BFA0: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x0042BFA4: jal         0x002017D4
    // 0x0042BFA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0042BFA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x0042BFAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x0042BFB0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0042BFB4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x0042BFB8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0042BFBC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0042BFC0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0042BFC4: bltz        $s0, L_0042C164
    if (SIGNED(ctx->r16) < 0) {
        // 0x0042BFC8: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_0042C164;
    }
    // 0x0042BFC8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0042BFCC: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_0042BFD0:
    // 0x0042BFD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0042BFD4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x0042BFD8: slt         $v0, $t0, $s6
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042BFDC: bne         $v0, $zero, L_0042C144
    if (ctx->r2 != 0) {
        // 0x0042BFE0: addu        $a2, $s6, $s7
        ctx->r6 = ADD32(ctx->r22, ctx->r23);
            goto L_0042C144;
    }
    // 0x0042BFE0: addu        $a2, $s6, $s7
    ctx->r6 = ADD32(ctx->r22, ctx->r23);
L_0042BFE4:
    // 0x0042BFE4: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0042BFE8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0042BFEC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x0042BFF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0042BFF4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0042BFF8: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x0042BFFC: bne         $v0, $zero, L_0042C130
    if (ctx->r2 != 0) {
        // 0x0042C000: nop
    
            goto L_0042C130;
    }
    // 0x0042C000: nop

    // 0x0042C004: lw          $a0, 0x50($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X50);
    // 0x0042C008: lw          $a1, 0x20($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X20);
    // 0x0042C00C: jal         0x0020185C
    // 0x0042C010: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_3;
    // 0x0042C010: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x0042C014: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C018: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0042C01C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x0042C020: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0042C024: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x0042C028: addiu       $v0, $v0, 0xD00
    ctx->r2 = ADD32(ctx->r2, 0XD00);
    // 0x0042C02C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0042C030: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0042C034: addiu       $v0, $v0, 0x5F6C
    ctx->r2 = ADD32(ctx->r2, 0X5F6C);
    // 0x0042C038: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0042C03C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042C040: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x0042C044: jal         0x0020367C
    // 0x0042C048: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_4;
    // 0x0042C048: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_4:
    // 0x0042C04C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0042C050: beq         $s5, $zero, L_0042C130
    if (ctx->r21 == 0) {
        // 0x0042C054: nop
    
            goto L_0042C130;
    }
    // 0x0042C054: nop

    // 0x0042C058: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x0042C05C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0042C060: beq         $v0, $zero, L_0042C124
    if (ctx->r2 == 0) {
        // 0x0042C064: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0042C124;
    }
    // 0x0042C064: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0042C068: jal         0x002017D4
    // 0x0042C06C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x0042C06C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x0042C070: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042C074: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x0042C078: blez        $s3, L_0042C0CC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0042C07C: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_0042C0CC;
    }
    // 0x0042C07C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0042C080: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_0042C084:
    // 0x0042C084: sw          $s5, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r21;
    // 0x0042C088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042C08C: jal         0x00214D04
    // 0x0042C090: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00214D04(rdram, ctx);
        goto after_6;
    // 0x0042C090: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x0042C094: jal         0x00214DBC
    // 0x0042C098: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00214DBC(rdram, ctx);
        goto after_7;
    // 0x0042C098: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0042C09C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042C0A0: beql        $s0, $zero, L_0042C0C0
    if (ctx->r16 == 0) {
        // 0x0042C0A4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_0042C0C0;
    }
    goto skip_0;
    // 0x0042C0A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x0042C0A8: jal         0x0020BE08
    // 0x0042C0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020BE08(rdram, ctx);
        goto after_8;
    // 0x0042C0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0042C0B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C0B4: jal         0x002051F4
    // 0x0042C0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_9;
    // 0x0042C0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x0042C0BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_0042C0C0:
    // 0x0042C0C0: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0042C0C4: bne         $v0, $zero, L_0042C084
    if (ctx->r2 != 0) {
        // 0x0042C0C8: addiu       $s1, $s1, 0x90
        ctx->r17 = ADD32(ctx->r17, 0X90);
            goto L_0042C084;
    }
    // 0x0042C0C8: addiu       $s1, $s1, 0x90
    ctx->r17 = ADD32(ctx->r17, 0X90);
L_0042C0CC:
    // 0x0042C0CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0042C0D0: jal         0x002017D4
    // 0x0042C0D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x0042C0D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x0042C0D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0042C0DC: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x0042C0E0: blez        $s3, L_0042C124
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0042C0E4: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_0042C124;
    }
    // 0x0042C0E4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x0042C0E8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_0042C0EC:
    // 0x0042C0EC: jal         0x00215944
    // 0x0042C0F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00215944(rdram, ctx);
        goto after_11;
    // 0x0042C0F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x0042C0F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0042C0F8: beql        $s0, $zero, L_0042C118
    if (ctx->r16 == 0) {
        // 0x0042C0FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0042C118;
    }
    goto skip_1;
    // 0x0042C0FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x0042C100: jal         0x0020BE08
    // 0x0042C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020BE08(rdram, ctx);
        goto after_12;
    // 0x0042C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0042C108: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C10C: jal         0x002051F4
    // 0x0042C110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x0042C110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0042C114: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0042C118:
    // 0x0042C118: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0042C11C: bne         $v0, $zero, L_0042C0EC
    if (ctx->r2 != 0) {
        // 0x0042C120: addiu       $s2, $s2, 0x198
        ctx->r18 = ADD32(ctx->r18, 0X198);
            goto L_0042C0EC;
    }
    // 0x0042C120: addiu       $s2, $s2, 0x198
    ctx->r18 = ADD32(ctx->r18, 0X198);
L_0042C124:
    // 0x0042C124: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042C128: jal         0x002051F4
    // 0x0042C12C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_14;
    // 0x0042C12C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_14:
L_0042C130:
    // 0x0042C130: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0042C134: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x0042C138: slt         $v0, $t0, $s6
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0042C13C: beq         $v0, $zero, L_0042BFE4
    if (ctx->r2 == 0) {
        // 0x0042C140: addu        $a2, $s6, $s7
        ctx->r6 = ADD32(ctx->r22, ctx->r23);
            goto L_0042BFE4;
    }
    // 0x0042C140: addu        $a2, $s6, $s7
    ctx->r6 = ADD32(ctx->r22, ctx->r23);
L_0042C144:
    // 0x0042C144: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0042C148: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0042C14C: addu        $s7, $s7, $v1
    ctx->r23 = ADD32(ctx->r23, ctx->r3);
    // 0x0042C150: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0042C154: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0042C158: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0042C15C: beq         $v0, $zero, L_0042BFD0
    if (ctx->r2 == 0) {
        // 0x0042C160: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_0042BFD0;
    }
    // 0x0042C160: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_0042C164:
    // 0x0042C164: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0042C168: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0042C16C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0042C170: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x0042C174: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0042C178: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0042C17C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0042C180: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x0042C184: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0042C188: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0042C18C: jr          $ra
    // 0x0042C190: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0042C190: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00201074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0021F660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F660: jr          $ra
    // 0x0021F664: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0021F664: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00423278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423278: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042327C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00423280: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00423284: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00423288: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042328C: lw          $s0, 0x1C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C);
    // 0x00423290: jal         0x00284174
    // 0x00423294: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00423294: nop

    after_0:
    // 0x00423298: beq         $v0, $zero, L_004232B4
    if (ctx->r2 == 0) {
        // 0x0042329C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004232B4;
    }
    // 0x0042329C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004232A0: jal         0x00284240
    // 0x004232A4: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x004232A4: nop

    after_1:
    // 0x004232A8: beq         $v0, $zero, L_004232B4
    if (ctx->r2 == 0) {
        // 0x004232AC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_004232B4;
    }
    // 0x004232AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004232B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004232B4:
    // 0x004232B4: bne         $v1, $zero, L_004232E8
    if (ctx->r3 != 0) {
        // 0x004232B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004232E8;
    }
    // 0x004232B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004232BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004232C0: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x004232C4: jal         0x002484F8
    // 0x004232C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002484F8(rdram, ctx);
        goto after_2;
    // 0x004232C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x004232CC: beq         $v0, $zero, L_004232E4
    if (ctx->r2 == 0) {
        // 0x004232D0: sh          $zero, 0x0($s1)
        MEM_H(0X0, ctx->r17) = 0;
            goto L_004232E4;
    }
    // 0x004232D0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x004232D4: jal         0x00412B14
    // 0x004232D8: nop

    func_00412B14(rdram, ctx);
        goto after_3;
    // 0x004232D8: nop

    after_3:
    // 0x004232DC: jal         0x00412438
    // 0x004232E0: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    func_00412438(rdram, ctx);
        goto after_4;
    // 0x004232E0: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_4:
L_004232E4:
    // 0x004232E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004232E8:
    // 0x004232E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004232EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004232F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004232F4: jr          $ra
    // 0x004232F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004232F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025FAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FAB0: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x0025FAB4: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x0025FAB8: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x0025FABC: beql        $v0, $zero, L_0025FAC4
    if (ctx->r2 == 0) {
        // 0x0025FAC0: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_0025FAC4;
    }
    goto skip_0;
    // 0x0025FAC0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_0025FAC4:
    // 0x0025FAC4: sb          $v1, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = ctx->r3;
    // 0x0025FAC8: jr          $ra
    // 0x0025FACC: sw          $zero, 0x64($a1)
    MEM_W(0X64, ctx->r5) = 0;
    return;
    // 0x0025FACC: sw          $zero, 0x64($a1)
    MEM_W(0X64, ctx->r5) = 0;
;}
RECOMP_FUNC void func_0028AFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028AFE8: jr          $ra
    // 0x0028AFEC: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    return;
    // 0x0028AFEC: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
;}
RECOMP_FUNC void func_00268454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268454: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00268458: jr          $ra
    // 0x0026845C: nop

    return;
    // 0x0026845C: nop

;}
RECOMP_FUNC void func_00409D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409D4C: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x00409D50: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x00409D54: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00409D58: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x00409D5C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00409D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00409D64: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    // 0x00409D68: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x00409D6C: sw          $a3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r7;
    // 0x00409D70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00409D74: sw          $ra, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r31;
    // 0x00409D78: sw          $s4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r20;
    // 0x00409D7C: sw          $s3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r19;
    // 0x00409D80: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x00409D84: sdc1        $f25, 0x120($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X120, ctx->r29);
    // 0x00409D88: sdc1        $f24, 0x118($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X118, ctx->r29);
    // 0x00409D8C: sdc1        $f23, 0x110($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X110, ctx->r29);
    // 0x00409D90: sdc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X108, ctx->r29);
    // 0x00409D94: sdc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X100, ctx->r29);
    // 0x00409D98: sdc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XF8, ctx->r29);
    // 0x00409D9C: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x00409DA0: jal         0x00246108
    // 0x00409DA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00409DA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00409DA8: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x00409DAC: addiu       $s4, $s4, -0x490
    ctx->r20 = ADD32(ctx->r20, -0X490);
    // 0x00409DB0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x00409DB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409DB8: lwc1        $f20, 0x61C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X61C);
    // 0x00409DBC: beq         $a0, $zero, L_00409DDC
    if (ctx->r4 == 0) {
        // 0x00409DC0: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00409DDC;
    }
    // 0x00409DC0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00409DC4: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00409DC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00409DCC: beq         $v0, $zero, L_00409DDC
    if (ctx->r2 == 0) {
        // 0x00409DD0: nop
    
            goto L_00409DDC;
    }
    // 0x00409DD0: nop

    // 0x00409DD4: lwc1        $f20, 0xD4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x00409DD8: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
L_00409DDC:
    // 0x00409DDC: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x00409DE0: beq         $v0, $zero, L_00409DEC
    if (ctx->r2 == 0) {
        // 0x00409DE4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00409DEC;
    }
    // 0x00409DE4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00409DE8: lw          $s2, 0x1A8($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1A8);
L_00409DEC:
    // 0x00409DEC: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x00409DF0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x00409DF4: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x00409DF8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0040A138;
    }
    // 0x00409DF8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00409DFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409E00: addu        $at, $at, $v0
    gpr jr_addend_00409E08 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00409E04: lw          $v0, 0x620($at)
    ctx->r2 = ADD32(ctx->r1, 0X620);
    // 0x00409E08: jr          $v0
    // 0x00409E0C: nop

    switch (jr_addend_00409E08 >> 2) {
        case 0: goto L_00409E10; break;
        case 1: goto L_00409F10; break;
        case 2: goto L_00409F50; break;
        case 3: goto L_0040A034; break;
        case 4: goto L_0040A060; break;
        case 5: goto L_0040A0F0; break;
        default: switch_error(__func__, 0x00409E08, 0x800C0620);
    }
    // 0x00409E0C: nop

L_00409E10:
    // 0x00409E10: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00409E14: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00409E18: beq         $a0, $zero, L_00409E2C
    if (ctx->r4 == 0) {
        // 0x00409E1C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00409E2C;
    }
    // 0x00409E1C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00409E20:
    // 0x00409E20: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00409E24: bne         $a0, $zero, L_00409E20
    if (ctx->r4 != 0) {
        // 0x00409E28: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00409E20;
    }
    // 0x00409E28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_00409E2C:
    // 0x00409E2C: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x00409E30: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x00409E34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040A138;
    }
    // 0x00409E34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00409E38: lw          $v1, 0x65C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X65C);
    // 0x00409E3C: beq         $v1, $v0, L_00409E5C
    if (ctx->r3 == ctx->r2) {
        // 0x00409E40: addiu       $v0, $sp, 0x134
        ctx->r2 = ADD32(ctx->r29, 0X134);
            goto L_00409E5C;
    }
    // 0x00409E40: addiu       $v0, $sp, 0x134
    ctx->r2 = ADD32(ctx->r29, 0X134);
    // 0x00409E44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409E48: lwc1        $f0, 0x638($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X638);
    // 0x00409E4C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00409E50: nop

    // 0x00409E54: bc1f        L_0040A138
    if (!c1cs) {
        // 0x00409E58: nop
    
            goto L_0040A138;
    }
    // 0x00409E58: nop

L_00409E5C:
    // 0x00409E5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409E60: addiu       $v0, $sp, 0xDC
    ctx->r2 = ADD32(ctx->r29, 0XDC);
    // 0x00409E64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00409E68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00409E6C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00409E70: lw          $a1, 0x134($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X134);
    // 0x00409E74: lw          $a2, 0x138($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X138);
    // 0x00409E78: lw          $a3, 0x13C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X13C);
    // 0x00409E7C: jal         0x002688C8
    // 0x00409E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002688C8(rdram, ctx);
        goto after_1;
    // 0x00409E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00409E84: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00409E88: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x00409E8C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00409E90: lw          $a3, 0x658($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X658);
    // 0x00409E94: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409E98: lwc1        $f0, 0x63C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63C);
    // 0x00409E9C: lw          $v0, 0xDC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XDC);
    // 0x00409EA0: addiu       $a2, $zero, 0x458
    ctx->r6 = ADD32(0, 0X458);
    // 0x00409EA4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x00409EA8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x00409EAC: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x00409EB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00409EB4: lw          $t0, 0x134($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X134);
    // 0x00409EB8: lw          $t1, 0x138($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X138);
    // 0x00409EBC: lw          $t2, 0x13C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X13C);
    // 0x00409EC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00409EC4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00409EC8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x00409ECC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x00409ED0: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x00409ED4: lw          $t1, 0x1C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1C);
    // 0x00409ED8: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x00409EDC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00409EE0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00409EE4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00409EE8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x00409EEC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x00409EF0: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x00409EF4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00409EF8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x00409EFC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00409F00: jal         0x00228108
    // 0x00409F04: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_2;
    // 0x00409F04: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_2:
    // 0x00409F08: j           L_0040A138
    // 0x00409F0C: nop

        goto L_0040A138;
    // 0x00409F0C: nop

L_00409F10:
    // 0x00409F10: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x00409F14: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x00409F18: nop
    
            goto L_0040A138;
    }
    // 0x00409F18: nop

    // 0x00409F1C: beq         $s2, $zero, L_0040A138
    if (ctx->r18 == 0) {
        // 0x00409F20: nop
    
            goto L_0040A138;
    }
    // 0x00409F20: nop

    // 0x00409F24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F28: lwc1        $f0, 0x640($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X640);
    // 0x00409F2C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00409F30: nop

    // 0x00409F34: bc1f        L_0040A138
    if (!c1cs) {
        // 0x00409F38: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_0040A138;
    }
    // 0x00409F38: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00409F3C: lh          $v1, 0xA08($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA08);
    // 0x00409F40: beq         $v1, $v0, L_0040A138
    if (ctx->r3 == ctx->r2) {
        // 0x00409F44: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040A138;
    }
    // 0x00409F44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00409F48: j           L_0040A090
    // 0x00409F4C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_0040A090;
    // 0x00409F4C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_00409F50:
    // 0x00409F50: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x00409F54: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x00409F58: nop
    
            goto L_0040A138;
    }
    // 0x00409F58: nop

    // 0x00409F5C: beq         $s2, $zero, L_0040A138
    if (ctx->r18 == 0) {
        // 0x00409F60: nop
    
            goto L_0040A138;
    }
    // 0x00409F60: nop

    // 0x00409F64: lw          $v0, 0x670($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X670);
    // 0x00409F68: blez        $v0, L_0040A138
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00409F6C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0040A138;
    }
    // 0x00409F6C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00409F70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F74: lwc1        $f25, 0x644($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X644);
    // 0x00409F78: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
L_00409F7C:
    // 0x00409F7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F80: lwc1        $f12, 0x648($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X648);
    // 0x00409F84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F88: lwc1        $f14, 0x64C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X64C);
    // 0x00409F8C: lw          $s0, 0x630($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X630);
    // 0x00409F90: jal         0x002119FC
    // 0x00409F94: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00409F94: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    after_3:
    // 0x00409F98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409F9C: lwc1        $f12, 0x650($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X650);
    // 0x00409FA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409FA4: lwc1        $f14, 0x654($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X654);
    // 0x00409FA8: jal         0x002119FC
    // 0x00409FAC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00409FAC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_4:
    // 0x00409FB0: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x00409FB4: lwc1        $f20, 0x50($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X50);
    // 0x00409FB8: add.s       $f20, $f20, $f25
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f25.fl;
    // 0x00409FBC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x00409FC0: lwc1        $f22, 0x4($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00409FC4: lwc1        $f23, 0xC($s2)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x00409FC8: jal         0x002982F0
    // 0x00409FCC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_5;
    // 0x00409FCC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x00409FD0: mul.s       $f24, $f21, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00409FD4: jal         0x002974C0
    // 0x00409FD8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002974C0(rdram, ctx);
        goto after_6;
    // 0x00409FD8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x00409FDC: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x00409FE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409FE4: lwc1        $f12, 0x658($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X658);
    // 0x00409FE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409FEC: lwc1        $f14, 0x65C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X65C);
    // 0x00409FF0: jal         0x002119FC
    // 0x00409FF4: add.s       $f23, $f23, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_7;
    // 0x00409FF4: add.s       $f23, $f23, $f21
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f21.fl;
    after_7:
    // 0x00409FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00409FFC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0040A000: add.s       $f22, $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x0040A004: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0040A008: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0040A00C: swc1        $f22, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f22.u32l;
    // 0x0040A010: jal         0x00243414
    // 0x0040A014: swc1        $f23, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(23 - 1) * 2];
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x0040A014: swc1        $f23, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(23 - 1) * 2];
    after_8:
    // 0x0040A018: lw          $v0, 0x670($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X670);
    // 0x0040A01C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0040A020: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040A024: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x0040A028: nop
    
            goto L_0040A138;
    }
    // 0x0040A028: nop

    // 0x0040A02C: j           L_00409F7C
    // 0x0040A030: nop

        goto L_00409F7C;
    // 0x0040A030: nop

L_0040A034:
    // 0x0040A034: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A038: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x0040A03C: nop
    
            goto L_0040A138;
    }
    // 0x0040A03C: nop

    // 0x0040A040: beq         $s2, $zero, L_0040A138
    if (ctx->r18 == 0) {
        // 0x0040A044: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040A138;
    }
    // 0x0040A044: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040A048: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0040A04C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0040A050: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040A054: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0040A058: j           L_0040A0A4
    // 0x0040A05C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
        goto L_0040A0A4;
    // 0x0040A05C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
L_0040A060:
    // 0x0040A060: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A064: beq         $v0, $zero, L_0040A138
    if (ctx->r2 == 0) {
        // 0x0040A068: nop
    
            goto L_0040A138;
    }
    // 0x0040A068: nop

    // 0x0040A06C: beq         $s2, $zero, L_0040A138
    if (ctx->r18 == 0) {
        // 0x0040A070: nop
    
            goto L_0040A138;
    }
    // 0x0040A070: nop

    // 0x0040A074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040A078: lwc1        $f0, 0x660($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X660);
    // 0x0040A07C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x0040A080: nop

    // 0x0040A084: bc1f        L_0040A138
    if (!c1cs) {
        // 0x0040A088: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040A138;
    }
    // 0x0040A088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040A08C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0040A090:
    // 0x0040A090: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0040A094: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0040A098: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0040A09C: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x0040A0A0: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
L_0040A0A4:
    // 0x0040A0A4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x0040A0A8: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x0040A0AC: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x0040A0B0: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x0040A0B4: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x0040A0B8: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x0040A0BC: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x0040A0C0: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x0040A0C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0040A0C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0040A0CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0040A0D0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x0040A0D4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0040A0D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x0040A0DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0040A0E0: jal         0x00236EA0
    // 0x0040A0E4: nop

    func_00236EA0(rdram, ctx);
        goto after_9;
    // 0x0040A0E4: nop

    after_9:
    // 0x0040A0E8: j           L_0040A138
    // 0x0040A0EC: nop

        goto L_0040A138;
    // 0x0040A0EC: nop

L_0040A0F0:
    // 0x0040A0F0: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A0F4: beq         $a2, $zero, L_0040A138
    if (ctx->r6 == 0) {
        // 0x0040A0F8: addiu       $s0, $sp, 0x50
        ctx->r16 = ADD32(ctx->r29, 0X50);
            goto L_0040A138;
    }
    // 0x0040A0F8: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0040A0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A100: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x0040A104: jal         0x0020EF2C
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_10;
    // 0x0040A108: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_10:
    // 0x0040A10C: jal         0x0020F040
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_11;
    // 0x0040A110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0040A114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040A118: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0040A11C: jal         0x0020EF60
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_12;
    // 0x0040A120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0040A124: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x0040A128: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0040A12C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x0040A130: jal         0x0020EEF8
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EEF8(rdram, ctx);
        goto after_13;
    // 0x0040A134: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_13:
L_0040A138:
    // 0x0040A138: lw          $ra, 0xF4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF4);
    // 0x0040A13C: lw          $s4, 0xF0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF0);
    // 0x0040A140: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x0040A144: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0040A148: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x0040A14C: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x0040A150: ldc1        $f25, 0x120($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X120);
    // 0x0040A154: ldc1        $f24, 0x118($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X118);
    // 0x0040A158: ldc1        $f23, 0x110($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X110);
    // 0x0040A15C: ldc1        $f22, 0x108($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X108);
    // 0x0040A160: ldc1        $f21, 0x100($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X100);
    // 0x0040A164: ldc1        $f20, 0xF8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XF8);
    // 0x0040A168: jr          $ra
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x0040A16C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_0020205C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020205C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00202060: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00202064: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00202068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0020206C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00202070: jal         0x0029DFF0
    // 0x00202074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00202074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00202078: lw          $s0, 0x5068($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X5068);
    // 0x0020207C: beq         $s0, $zero, L_002020A4
    if (ctx->r16 == 0) {
        // 0x00202080: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_002020A4;
    }
    // 0x00202080: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00202084: addiu       $a0, $s1, 0x5068
    ctx->r4 = ADD32(ctx->r17, 0X5068);
    // 0x00202088: jal         0x00200738
    // 0x0020208C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x0020208C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00202090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00202094: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00202098: addiu       $a0, $s1, 0x507C
    ctx->r4 = ADD32(ctx->r17, 0X507C);
    // 0x0020209C: jal         0x00200518
    // 0x002020A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x002020A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_002020A4:
    // 0x002020A4: jal         0x0029E010
    // 0x002020A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x002020A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x002020AC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002020B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002020B4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002020B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002020BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002020C0: jr          $ra
    // 0x002020C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002020C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00447930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00447938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0044793C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00447940: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00447944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00447948: jal         0x00243414
    // 0x0044794C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0044794C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00447950: lw          $v1, 0x4F8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4F8);
    // 0x00447954: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x00447958: sw          $v0, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r2;
    // 0x0044795C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x00447960: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00447964: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447968: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x0044796C: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x00447970: blez        $v0, L_00447998
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447974: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_00447998;
    }
    // 0x00447974: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x00447978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0044797C:
    // 0x0044797C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00447980: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447984: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00447988: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0044798C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447990: bne         $v0, $zero, L_0044797C
    if (ctx->r2 != 0) {
        // 0x00447994: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0044797C;
    }
    // 0x00447994: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00447998:
    // 0x00447998: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0044799C: blez        $v0, L_004479C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004479A0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004479C4;
    }
    // 0x004479A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004479A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004479A8:
    // 0x004479A8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x004479AC: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004479B0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004479B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004479B8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004479BC: bne         $v0, $zero, L_004479A8
    if (ctx->r2 != 0) {
        // 0x004479C0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_004479A8;
    }
    // 0x004479C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_004479C4:
    // 0x004479C4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x004479C8: blez        $v0, L_004479F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004479CC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004479F0;
    }
    // 0x004479CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004479D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004479D4:
    // 0x004479D4: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x004479D8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004479DC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x004479E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004479E4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004479E8: bne         $v0, $zero, L_004479D4
    if (ctx->r2 != 0) {
        // 0x004479EC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_004479D4;
    }
    // 0x004479EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_004479F0:
    // 0x004479F0: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x004479F4: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x004479F8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004479FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00447A00: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x00447A04: beq         $v0, $zero, L_00447A14
    if (ctx->r2 == 0) {
        // 0x00447A08: nop
    
            goto L_00447A14;
    }
    // 0x00447A08: nop

    // 0x00447A0C: jalr        $v0
    // 0x00447A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00447A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00447A14:
    // 0x00447A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00447A18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447A1C: jr          $ra
    // 0x00447A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
