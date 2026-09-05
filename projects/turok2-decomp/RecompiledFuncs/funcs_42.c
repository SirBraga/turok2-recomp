#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00257714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257714: sw          $v0, 0xC04($a0)
    MEM_W(0XC04, ctx->r4) = ctx->r2;
    // 0x00257718: jr          $ra
    // 0x0025771C: nop

    return;
    // 0x0025771C: nop

;}
RECOMP_FUNC void func_00275224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00275228: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x0027522C: jr          $ra
    // 0x00275230: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    return;
    // 0x00275230: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0026C934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C934: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026C938: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026C93C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026C940: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026C944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C948: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x0026C94C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x0026C950: bne         $s0, $a1, L_0026C9A4
    if (ctx->r16 != ctx->r5) {
        // 0x0026C954: nop
    
            goto L_0026C9A4;
    }
    // 0x0026C954: nop

    // 0x0026C958: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0026C95C: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x0026C960: beq         $v0, $zero, L_0026C9A4
    if (ctx->r2 == 0) {
        // 0x0026C964: andi        $v0, $v1, 0xFFFB
        ctx->r2 = ctx->r3 & 0XFFFB;
            goto L_0026C9A4;
    }
    // 0x0026C964: andi        $v0, $v1, 0xFFFB
    ctx->r2 = ctx->r3 & 0XFFFB;
    // 0x0026C968: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0026C96C: beq         $a0, $zero, L_0026C97C
    if (ctx->r4 == 0) {
        // 0x0026C970: sh          $v0, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r2;
            goto L_0026C97C;
    }
    // 0x0026C970: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x0026C974: jal         0x0026C934
    // 0x0026C978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C934(rdram, ctx);
        goto after_0;
    // 0x0026C978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0026C97C:
    // 0x0026C97C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0026C980: beq         $a0, $zero, L_0026C990
    if (ctx->r4 == 0) {
        // 0x0026C984: nop
    
            goto L_0026C990;
    }
    // 0x0026C984: nop

    // 0x0026C988: jal         0x0026C934
    // 0x0026C98C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C934(rdram, ctx);
        goto after_1;
    // 0x0026C98C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0026C990:
    // 0x0026C990: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x0026C994: beq         $a0, $zero, L_0026C9A4
    if (ctx->r4 == 0) {
        // 0x0026C998: nop
    
            goto L_0026C9A4;
    }
    // 0x0026C998: nop

    // 0x0026C99C: jal         0x0026C934
    // 0x0026C9A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026C934(rdram, ctx);
        goto after_2;
    // 0x0026C9A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0026C9A4:
    // 0x0026C9A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026C9A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026C9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026C9B0: jr          $ra
    // 0x0026C9B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026C9B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029D444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D444: jr          $ra
    // 0x0029D448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029D448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00423E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423E10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00423E14: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00423E18: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00423E1C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00423E20: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x00423E24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00423E28: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00423E2C: sw          $v0, -0x6718($at)
    MEM_W(-0X6718, ctx->r1) = ctx->r2;
    // 0x00423E30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00423E34: bne         $v1, $v0, L_00423E68
    if (ctx->r3 != ctx->r2) {
        // 0x00423E38: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_00423E68;
    }
    // 0x00423E38: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00423E3C: jal         0x00266B80
    // 0x00423E40: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00423E40: nop

    after_0:
    // 0x00423E44: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00423E48: beq         $v0, $v1, L_00423E60
    if (ctx->r2 == ctx->r3) {
        // 0x00423E4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00423E60;
    }
    // 0x00423E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423E50: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423E54: sw          $v0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r2;
    // 0x00423E58: j           L_00423E68
    // 0x00423E5C: nop

        goto L_00423E68;
    // 0x00423E5C: nop

L_00423E60:
    // 0x00423E60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423E64: sw          $zero, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = 0;
L_00423E68:
    // 0x00423E68: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x00423E6C: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x00423E70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00423E74: beq         $v1, $v0, L_00423EA4
    if (ctx->r3 == ctx->r2) {
        // 0x00423E78: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00423EA4;
    }
    // 0x00423E78: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00423E7C: beql        $v0, $zero, L_00423E94
    if (ctx->r2 == 0) {
        // 0x00423E80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00423E94;
    }
    goto skip_0;
    // 0x00423E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x00423E84: beq         $v1, $zero, L_00423EC4
    if (ctx->r3 == 0) {
        // 0x00423E88: nop
    
            goto L_00423EC4;
    }
    // 0x00423E88: nop

    // 0x00423E8C: j           L_00423EE4
    // 0x00423E90: nop

        goto L_00423EE4;
    // 0x00423E90: nop

L_00423E94:
    // 0x00423E94: beq         $v1, $v0, L_00423EC4
    if (ctx->r3 == ctx->r2) {
        // 0x00423E98: nop
    
            goto L_00423EC4;
    }
    // 0x00423E98: nop

    // 0x00423E9C: j           L_00423EE4
    // 0x00423EA0: nop

        goto L_00423EE4;
    // 0x00423EA0: nop

L_00423EA4:
    // 0x00423EA4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423EA8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x00423EAC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00423EB0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00423EB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423EB8: addiu       $v0, $v0, 0x2054
    ctx->r2 = ADD32(ctx->r2, 0X2054);
    // 0x00423EBC: j           L_00423EE0
    // 0x00423EC0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_00423EE0;
    // 0x00423EC0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_00423EC4:
    // 0x00423EC4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423EC8: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x00423ECC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00423ED0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00423ED4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00423ED8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423EDC: addiu       $v0, $v0, 0x20E0
    ctx->r2 = ADD32(ctx->r2, 0X20E0);
L_00423EE0:
    // 0x00423EE0: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
L_00423EE4:
    // 0x00423EE4: beq         $s0, $zero, L_00423FF8
    if (ctx->r16 == 0) {
        // 0x00423EE8: nop
    
            goto L_00423FF8;
    }
    // 0x00423EE8: nop

    // 0x00423EEC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00423EF0: lw          $v1, 0x2038($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2038);
    // 0x00423EF4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423EF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00423EFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00423F00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F08: lw          $t0, 0x216C($at)
    ctx->r8 = MEM_W(ctx->r1, 0X216C);
    // 0x00423F0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F14: lw          $t1, 0x2170($at)
    ctx->r9 = MEM_W(ctx->r1, 0X2170);
    // 0x00423F18: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F20: lw          $t2, 0x2174($at)
    ctx->r10 = MEM_W(ctx->r1, 0X2174);
    // 0x00423F24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F2C: lw          $t3, 0x2178($at)
    ctx->r11 = MEM_W(ctx->r1, 0X2178);
    // 0x00423F30: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00423F34: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00423F38: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00423F3C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x00423F40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423F48: lw          $t0, 0x217C($at)
    ctx->r8 = MEM_W(ctx->r1, 0X217C);
    // 0x00423F4C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00423F50: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x00423F54: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00423F58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00423F5C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x00423F60: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x00423F64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423F68: sw          $v0, 0x2044($at)
    MEM_W(0X2044, ctx->r1) = ctx->r2;
    // 0x00423F6C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00423F70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F74: sw          $v1, -0x4770($at)
    MEM_W(-0X4770, ctx->r1) = ctx->r3;
    // 0x00423F78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F7C: sw          $a0, -0x476C($at)
    MEM_W(-0X476C, ctx->r1) = ctx->r4;
    // 0x00423F80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F84: sw          $a1, -0x4768($at)
    MEM_W(-0X4768, ctx->r1) = ctx->r5;
    // 0x00423F88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00423F8C: sw          $a2, -0x4764($at)
    MEM_W(-0X4764, ctx->r1) = ctx->r6;
    // 0x00423F90: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00423F94: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00423F98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00423F9C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00423FA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423FA4: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // 0x00423FA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423FAC: sw          $a0, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r4;
    // 0x00423FB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00423FB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00423FB8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00423FBC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x00423FC0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00423FC4: jal         0x0042464C
    // 0x00423FC8: nop

    func_0042464C(rdram, ctx);
        goto after_1;
    // 0x00423FC8: nop

    after_1:
    // 0x00423FCC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00423FD0: lw          $v0, 0x2044($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2044);
    // 0x00423FD4: beq         $v0, $zero, L_00423FE0
    if (ctx->r2 == 0) {
        // 0x00423FD8: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_00423FE0;
    }
    // 0x00423FD8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x00423FDC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_00423FE0:
    // 0x00423FE0: jal         0x0029AAD0
    // 0x00423FE4: nop

    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x00423FE4: nop

    after_2:
    // 0x00423FE8: jal         0x0029AAD0
    // 0x00423FEC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_3;
    // 0x00423FEC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x00423FF0: jal         0x0029AAD0
    // 0x00423FF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_4;
    // 0x00423FF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
L_00423FF8:
    // 0x00423FF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00423FFC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00424000: jr          $ra
    // 0x00424004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00424004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002653F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002653F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002653FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00265400: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00265404: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00265408: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0026540C: lb          $v1, 0x1D($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1D);
    // 0x00265410: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00265414: beq         $v1, $v0, L_00265534
    if (ctx->r3 == ctx->r2) {
        // 0x00265418: nop
    
            goto L_00265534;
    }
    // 0x00265418: nop

    // 0x0026541C: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00265420: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00265424: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00265428: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026542C: lwc1        $f0, 0x7C94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C94);
    // 0x00265430: lh          $v0, 0xBA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XBA);
    // 0x00265434: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00265438: beq         $v0, $v1, L_002654E4
    if (ctx->r2 == ctx->r3) {
        // 0x0026543C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002654E4;
    }
    // 0x0026543C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265440: lbu         $v0, 0xC6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC6);
    // 0x00265444: lh          $v1, 0xDC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDC);
    // 0x00265448: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x0026544C: sra         $v0, $a0, 24
    ctx->r2 = S32(SIGNED(ctx->r4) >> 24);
    // 0x00265450: bnel        $v1, $v0, L_002654E4
    if (ctx->r3 != ctx->r2) {
        // 0x00265454: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002654E4;
    }
    goto skip_0;
    // 0x00265454: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00265458: lh          $v1, 0xDE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDE);
    // 0x0026545C: bne         $v1, $v0, L_002654E4
    if (ctx->r3 != ctx->r2) {
        // 0x00265460: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002654E4;
    }
    // 0x00265460: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00265464: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00265468: beq         $v0, $zero, L_00265480
    if (ctx->r2 == 0) {
        // 0x0026546C: nop
    
            goto L_00265480;
    }
    // 0x0026546C: nop

    // 0x00265470: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265474: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00265478: beq         $v0, $zero, L_002654E4
    if (ctx->r2 == 0) {
        // 0x0026547C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002654E4;
    }
    // 0x0026547C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00265480:
    // 0x00265480: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x00265484: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00265488: beq         $v0, $zero, L_002654BC
    if (ctx->r2 == 0) {
        // 0x0026548C: nop
    
            goto L_002654BC;
    }
    // 0x0026548C: nop

    // 0x00265490: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00265494: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x00265498: beq         $v0, $zero, L_002654BC
    if (ctx->r2 == 0) {
        // 0x0026549C: nop
    
            goto L_002654BC;
    }
    // 0x0026549C: nop

    // 0x002654A0: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x002654A4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002654A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002654AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002654B0: lwc1        $f1, 0x108($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X108);
    // 0x002654B4: j           L_002654D4
    // 0x002654B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_002654D4;
    // 0x002654B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002654BC:
    // 0x002654BC: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x002654C0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002654C4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002654C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002654CC: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x002654D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002654D4:
    // 0x002654D4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x002654D8: nop

    // 0x002654DC: bc1fl       L_002654E4
    if (!c1cs) {
        // 0x002654E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002654E4;
    }
    goto skip_1;
    // 0x002654E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
L_002654E4:
    // 0x002654E4: beq         $v0, $zero, L_00265534
    if (ctx->r2 == 0) {
        // 0x002654E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00265534;
    }
    // 0x002654E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002654EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002654F0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x002654F4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x002654F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x002654FC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00265500: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00265504: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x00265508: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0026550C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00265510: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00265514: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x00265518: jal         0x00237EE4
    // 0x0026551C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00237EE4(rdram, ctx);
        goto after_0;
    // 0x0026551C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x00265520: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00265524: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00265528: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0026552C: jal         0x00220260
    // 0x00265530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x00265530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_00265534:
    // 0x00265534: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00265538: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0026553C: jr          $ra
    // 0x00265540: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00265540: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004205B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004205B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004205BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004205C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x004205C4 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004205C4(rdram, ctx);
;}
RECOMP_FUNC void func_0045D930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045D934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045D938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0045D93C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045D940: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0045D944: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045D948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0045D94C: jal         0x00275A74
    // 0x0045D950: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_00275A74(rdram, ctx);
        goto after_0;
    // 0x0045D950: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0045D954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0045D958: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0045D95C: jal         0x00416454
    // 0x0045D960: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416454(rdram, ctx);
        goto after_1;
    // 0x0045D960: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0045D964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045D968: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0045D96C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045D970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045D974: jr          $ra
    // 0x0045D978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045D978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025689C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025689C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002568A0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x002568A4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x002568A8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x002568AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002568B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002568B4: lw          $a0, 0x1A8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1A8);
    // 0x002568B8: jal         0x00253770
    // 0x002568BC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    func_00253770(rdram, ctx);
        goto after_0;
    // 0x002568BC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    after_0:
    // 0x002568C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002568C4: jr          $ra
    // 0x002568C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002568C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0023EF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023EF30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0023EF34: addiu       $v1, $v1, -0x2E50
    ctx->r3 = ADD32(ctx->r3, -0X2E50);
    // 0x0023EF38: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x0023EF3C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_0023EF40:
    // 0x0023EF40: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x0023EF44: bne         $v0, $a0, L_0023EF54
    if (ctx->r2 != ctx->r4) {
        // 0x0023EF48: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_0023EF54;
    }
    // 0x0023EF48: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0023EF4C: jr          $ra
    // 0x0023EF50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    return;
    // 0x0023EF50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_0023EF54:
    // 0x0023EF54: bne         $a1, $a2, L_0023EF40
    if (ctx->r5 != ctx->r6) {
        // 0x0023EF58: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_0023EF40;
    }
    // 0x0023EF58: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x0023EF5C: jr          $ra
    // 0x0023EF60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0023EF60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00245FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245FC8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00245FCC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00245FD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00245FD4: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00245FD8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00245FDC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00245FE0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00245FE4: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x00245FE8: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
L_00245FEC:
    // 0x00245FEC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00245FF0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00245FF4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00245FF8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00245FFC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00246000: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00246004: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00246008: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x0024600C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00246010: bne         $v0, $a0, L_00245FEC
    if (ctx->r2 != ctx->r4) {
        // 0x00246014: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00245FEC;
    }
    // 0x00246014: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00246018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0024601C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00246020: jal         0x002671B4
    // 0x00246024: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    func_002671B4(rdram, ctx);
        goto after_0;
    // 0x00246024: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    after_0:
    // 0x00246028: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0024602C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246030: lwc1        $f0, 0x54($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X54);
    // 0x00246034: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246038: swc1        $f1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024603C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x00246040: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00246044: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x00246048: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x0024604C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00246050: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x00246054: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00246058: jal         0x002671B4
    // 0x0024605C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002671B4(rdram, ctx);
        goto after_1;
    // 0x0024605C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00246060: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x00246064: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246068: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024606C: lwc1        $f0, 0x54($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X54);
    // 0x00246070: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00246074: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00246078: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x0024607C: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00246080: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00246084: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00246088: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x0024608C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x00246090: jal         0x00239F00
    // 0x00246094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_2;
    // 0x00246094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00246098: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0024609C: lw          $v1, 0x1CE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CE0);
    // 0x002460A0: beql        $v1, $s1, L_002460A8
    if (ctx->r3 == ctx->r17) {
        // 0x002460A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002460A8;
    }
    goto skip_0;
    // 0x002460A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_002460A8:
    // 0x002460A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002460AC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x002460B0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
L_002460B4:
    // 0x002460B4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x002460B8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x002460BC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x002460C0: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x002460C4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x002460C8: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x002460CC: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x002460D0: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x002460D4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002460D8: bne         $v1, $a1, L_002460B4
    if (ctx->r3 != ctx->r5) {
        // 0x002460DC: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_002460B4;
    }
    // 0x002460DC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x002460E0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x002460E4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x002460E8: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x002460EC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x002460F0: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x002460F4: jr          $ra
    // 0x002460F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x002460F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_002051F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002051F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002051F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002051FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00205200: jal         0x0029DFF0
    // 0x00205204: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205204: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00205208: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020520C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205210: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205218: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020521C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205220: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205224: beq         $v1, $v0, L_00205250
    if (ctx->r3 == ctx->r2) {
        // 0x00205228: nop
    
            goto L_00205250;
    }
    // 0x00205228: nop

    // 0x0020522C: jal         0x0029E010
    // 0x00205230: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00205230: nop

    after_1:
    // 0x00205234: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205238: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x0020523C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205240: jal         0x0029B6F0
    // 0x00205244: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00205244: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205248: j           L_00205258
    // 0x0020524C: nop

        goto L_00205258;
    // 0x0020524C: nop

L_00205250:
    // 0x00205250: jal         0x0029E010
    // 0x00205254: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00205254: nop

    after_3:
L_00205258:
    // 0x00205258: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x0020525C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00205260: bne         $v0, $zero, L_00205278
    if (ctx->r2 != 0) {
        // 0x00205264: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_00205278;
    }
    // 0x00205264: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205268: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0020526C: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x00205270: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00205274: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00205278:
    // 0x00205278: jal         0x0029DFF0
    // 0x0020527C: nop

    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x0020527C: nop

    after_4:
    // 0x00205280: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205284: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205288: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0020528C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205290: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205294: beq         $v1, $zero, L_002052C0
    if (ctx->r3 == 0) {
        // 0x00205298: nop
    
            goto L_002052C0;
    }
    // 0x00205298: nop

    // 0x0020529C: jal         0x0029E010
    // 0x002052A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x002052A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x002052A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002052A8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002052AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002052B0: jal         0x0029B820
    // 0x002052B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x002052B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x002052B8: j           L_002052C8
    // 0x002052BC: nop

        goto L_002052C8;
    // 0x002052BC: nop

L_002052C0:
    // 0x002052C0: jal         0x0029E010
    // 0x002052C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x002052C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
L_002052C8:
    // 0x002052C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002052CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002052D0: jr          $ra
    // 0x002052D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002052D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020EF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EF60: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0020EF64: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020EF68: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020EF6C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020EF70: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020EF74: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020EF78: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020EF7C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020EF80: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020EF84: jr          $ra
    // 0x0020EF88: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020EF88: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_004229DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004229DC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004229E0: lw          $v1, 0x9C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9C0);
    // 0x004229E4: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x004229E8: beq         $v0, $zero, L_00422A04
    if (ctx->r2 == 0) {
        // 0x004229EC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00422A04;
    }
    // 0x004229EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004229F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004229F4: addu        $at, $at, $v0
    gpr jr_addend_004229FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004229F8: lw          $v0, 0x1530($at)
    ctx->r2 = ADD32(ctx->r1, 0X1530);
    // 0x004229FC: jr          $v0
    // 0x00422A00: nop

    switch (jr_addend_004229FC >> 2) {
        case 0: goto L_00422A04; break;
        case 1: goto L_00422A14; break;
        case 2: goto L_00422A24; break;
        case 3: goto L_00422A34; break;
        case 4: goto L_00422A44; break;
        case 5: goto L_00422A54; break;
        case 6: goto L_00422A64; break;
        case 7: goto L_00422A74; break;
        case 8: goto L_00422A84; break;
        case 9: goto L_00422A94; break;
        case 10: goto L_00422AA4; break;
        case 11: goto L_00422AB4; break;
        case 12: goto L_00422AC4; break;
        case 13: goto L_00422AD4; break;
        case 14: goto L_00422AE4; break;
        case 15: goto L_00422AF4; break;
        default: switch_error(__func__, 0x004229FC, 0x800C1530);
    }
    // 0x00422A00: nop

L_00422A04:
    // 0x00422A04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A08: addiu       $v0, $v0, 0x4BD0
    ctx->r2 = ADD32(ctx->r2, 0X4BD0);
    // 0x00422A0C: j           L_00422B00
    // 0x00422A10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A10: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422A14:
    // 0x00422A14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00422A18: addiu       $v0, $v0, 0x4C10
    ctx->r2 = ADD32(ctx->r2, 0X4C10);
    // 0x00422A1C: j           L_00422B00
    // 0x00422A20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00422B00;
    // 0x00422A20: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00422A24:
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
L_00422A34:
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
L_00422A44:
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
L_00422A54:
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
L_00422A64:
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
L_00422A74:
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
L_00422A84:
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
L_00422A94:
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
L_00422AA4:
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
L_00422AB4:
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
L_00422AC4:
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
L_00422AD4:
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
L_00422AE4:
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
L_00422AF4:
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
RECOMP_FUNC void func_0023AB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023AB18: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x0023AB1C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0023AB20: lw          $s1, 0xE0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE0);
    // 0x0023AB24: sdc1        $f22, 0xC8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XC8, ctx->r29);
    // 0x0023AB28: lwc1        $f22, 0xE4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x0023AB2C: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x0023AB30: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0023AB34: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0023AB38: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023AB3C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0023AB40: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0023AB44: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x0023AB48: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x0023AB4C: sdc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XC0, ctx->r29);
    // 0x0023AB50: sdc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB8, ctx->r29);
    // 0x0023AB54: beq         $s1, $zero, L_0023B1F8
    if (ctx->r17 == 0) {
        // 0x0023AB58: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_0023B1F8;
    }
    // 0x0023AB58: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0023AB5C: lw          $v1, 0x84($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X84);
    // 0x0023AB60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023AB64: bne         $v1, $v0, L_0023ABB4
    if (ctx->r3 != ctx->r2) {
        // 0x0023AB68: nop
    
            goto L_0023ABB4;
    }
    // 0x0023AB68: nop

    // 0x0023AB6C: lwc1        $f1, 0x64($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X64);
    // 0x0023AB70: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0023AB74: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023AB78: nop

    // 0x0023AB7C: bc1f        L_0023ABB4
    if (!c1cs) {
        // 0x0023AB80: nop
    
            goto L_0023ABB4;
    }
    // 0x0023AB80: nop

    // 0x0023AB84: lwc1        $f1, 0x68($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X68);
    // 0x0023AB88: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023AB8C: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023AB90: nop

    // 0x0023AB94: bc1f        L_0023ABB4
    if (!c1cs) {
        // 0x0023AB98: nop
    
            goto L_0023ABB4;
    }
    // 0x0023AB98: nop

    // 0x0023AB9C: lwc1        $f1, 0x6C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X6C);
    // 0x0023ABA0: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023ABA4: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0023ABA8: nop

    // 0x0023ABAC: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023ABB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B360;
    }
    // 0x0023ABB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023ABB4:
    // 0x0023ABB4: lwc1        $f3, 0x0($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0023ABB8: lwc1        $f0, 0x58($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X58);
    // 0x0023ABBC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023ABC0: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023ABC4: lwc1        $f0, 0x5C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x0023ABC8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023ABCC: lwc1        $f1, 0x60($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X60);
    // 0x0023ABD0: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023ABD4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023ABD8: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023ABDC: add.s       $f20, $f3, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023ABE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023ABE4: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x0023ABE8: nop

    // 0x0023ABEC: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023ABF0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B360;
    }
    // 0x0023ABF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023ABF4: beq         $a3, $zero, L_0023AC0C
    if (ctx->r7 == 0) {
        // 0x0023ABF8: nop
    
            goto L_0023AC0C;
    }
    // 0x0023ABF8: nop

    // 0x0023ABFC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0023AC00: nop

    // 0x0023AC04: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023AC08: nop
    
            goto L_0023B360;
    }
    // 0x0023AC08: nop

L_0023AC0C:
    // 0x0023AC0C: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x0023AC10: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023AC14: jal         0x0020EF2C
    // 0x0023AC18: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023AC18: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x0023AC1C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0023AC20: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0023AC24: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023AC28: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0023AC2C: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0023AC30: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023AC34: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0023AC38: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x0023AC3C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0023AC40: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0023AC44: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023AC48: lwc1        $f1, 0x8($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X8);
    // 0x0023AC4C: div.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0023AC50: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x0023AC54: nop

    // 0x0023AC58: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023AC5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B360;
    }
    // 0x0023AC5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023AC60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023AC64: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0023AC68: nop

    // 0x0023AC6C: bc1f        L_0023AC7C
    if (!c1cs) {
        // 0x0023AC70: nop
    
            goto L_0023AC7C;
    }
    // 0x0023AC70: nop

    // 0x0023AC74: beq         $s2, $zero, L_0023B360
    if (ctx->r18 == 0) {
        // 0x0023AC78: nop
    
            goto L_0023B360;
    }
    // 0x0023AC78: nop

L_0023AC7C:
    // 0x0023AC7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AC80: lwc1        $f0, 0x6630($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6630);
    // 0x0023AC84: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0023AC88: nop

    // 0x0023AC8C: bc1tl       L_0023AC94
    if (c1cs) {
        // 0x0023AC90: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_0023AC94;
    }
    goto skip_0;
    // 0x0023AC90: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    skip_0:
L_0023AC94:
    // 0x0023AC94: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0023AC98: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023AC9C: lw          $v0, 0x1ADC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1ADC);
    // 0x0023ACA0: addiu       $a0, $s4, 0x28
    ctx->r4 = ADD32(ctx->r20, 0X28);
    // 0x0023ACA4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0023ACA8: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0023ACAC: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0023ACB0: sw          $t0, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r8;
    // 0x0023ACB4: sw          $t1, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r9;
    // 0x0023ACB8: sw          $t2, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r10;
    // 0x0023ACBC: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x0023ACC0: addiu       $a3, $s4, 0x4C
    ctx->r7 = ADD32(ctx->r20, 0X4C);
    // 0x0023ACC4: swc1        $f21, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f_odd[(21 - 1) * 2];
    // 0x0023ACC8: jal         0x0020EF8C
    // 0x0023ACCC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_0020EF8C(rdram, ctx);
        goto after_1;
    // 0x0023ACCC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_1:
    // 0x0023ACD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0023ACD4: bne         $s1, $v0, L_0023ACF0
    if (ctx->r17 != ctx->r2) {
        // 0x0023ACD8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0023ACF0;
    }
    // 0x0023ACD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023ACDC: lw          $v0, 0x94($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X94);
    // 0x0023ACE0: beq         $v0, $zero, L_0023ACEC
    if (ctx->r2 == 0) {
        // 0x0023ACE4: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_0023ACEC;
    }
    // 0x0023ACE4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x0023ACE8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_0023ACEC:
    // 0x0023ACEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_0023ACF0:
    // 0x0023ACF0: bne         $s1, $v0, L_0023AD74
    if (ctx->r17 != ctx->r2) {
        // 0x0023ACF4: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_0023AD74;
    }
    // 0x0023ACF4: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x0023ACF8: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x0023ACFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AD00: lwc1        $f0, 0x6634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6634);
    // 0x0023AD04: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x0023AD08: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023AD0C: nop

    // 0x0023AD10: bc1f        L_0023AD78
    if (!c1cs) {
        // 0x0023AD14: sltiu       $v0, $v1, 0x7
        ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
            goto L_0023AD78;
    }
    // 0x0023AD14: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x0023AD18: lwc1        $f0, 0x58($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X58);
    // 0x0023AD1C: mul.s       $f3, $f0, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023AD20: lwc1        $f1, 0x60($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X60);
    // 0x0023AD24: mul.s       $f2, $f1, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023AD28: lwc1        $f0, 0x5C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x0023AD2C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023AD30: add.s       $f0, $f3, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023AD34: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0023AD38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AD3C: lwc1        $f1, 0x6638($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6638);
    // 0x0023AD40: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0023AD44: nop

    // 0x0023AD48: bc1f        L_0023AD78
    if (!c1cs) {
        // 0x0023AD4C: nop
    
            goto L_0023AD78;
    }
    // 0x0023AD4C: nop

    // 0x0023AD50: add.s       $f1, $f3, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023AD54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AD58: lwc1        $f0, 0x663C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X663C);
    // 0x0023AD5C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023AD60: nop

    // 0x0023AD64: bc1f        L_0023AD70
    if (!c1cs) {
        // 0x0023AD68: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_0023AD70;
    }
    // 0x0023AD68: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x0023AD6C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0023AD70:
    // 0x0023AD70: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
L_0023AD74:
    // 0x0023AD74: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
L_0023AD78:
    // 0x0023AD78: beq         $v0, $zero, L_0023B35C
    if (ctx->r2 == 0) {
        // 0x0023AD7C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0023B35C;
    }
    // 0x0023AD7C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0023AD80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AD84: addu        $at, $at, $v0
    gpr jr_addend_0023AD8C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0023AD88: lw          $v0, 0x6640($at)
    ctx->r2 = ADD32(ctx->r1, 0X6640);
    // 0x0023AD8C: jr          $v0
    // 0x0023AD90: nop

    switch (jr_addend_0023AD8C >> 2) {
        case 0: goto L_0023ADE4; break;
        case 1: goto L_0023AF40; break;
        case 2: goto L_0023AE0C; break;
        case 3: goto L_0023B070; break;
        case 4: goto L_0023B184; break;
        case 5: goto L_0023B35C; break;
        case 6: goto L_0023AD94; break;
        default: switch_error(__func__, 0x0023AD8C, 0x800A6640);
    }
    // 0x0023AD90: nop

L_0023AD94:
    // 0x0023AD94: lw          $v1, 0x90($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X90);
    // 0x0023AD98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023AD9C: sw          $zero, 0x88($s4)
    MEM_W(0X88, ctx->r20) = 0;
    // 0x0023ADA0: beq         $v1, $zero, L_0023ADC4
    if (ctx->r3 == 0) {
        // 0x0023ADA4: sw          $v0, 0xC($s4)
        MEM_W(0XC, ctx->r20) = ctx->r2;
            goto L_0023ADC4;
    }
    // 0x0023ADA4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    // 0x0023ADA8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0023ADAC: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x0023ADB0: lw          $t1, 0x1C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C);
    // 0x0023ADB4: lw          $t2, 0x20($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X20);
    // 0x0023ADB8: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0023ADBC: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0023ADC0: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
L_0023ADC4:
    // 0x0023ADC4: lw          $t0, 0x4C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4C);
    // 0x0023ADC8: lw          $t1, 0x50($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X50);
    // 0x0023ADCC: lw          $t2, 0x54($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X54);
    // 0x0023ADD0: sw          $t0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r8;
    // 0x0023ADD4: sw          $t1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r9;
    // 0x0023ADD8: sw          $t2, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r10;
    // 0x0023ADDC: j           L_0023B360
    // 0x0023ADE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0023B360;
    // 0x0023ADE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023ADE4:
    // 0x0023ADE4: lw          $v1, 0x90($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X90);
    // 0x0023ADE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023ADEC: sw          $zero, 0x88($s4)
    MEM_W(0X88, ctx->r20) = 0;
    // 0x0023ADF0: beq         $v1, $zero, L_0023B35C
    if (ctx->r3 == 0) {
        // 0x0023ADF4: sw          $v0, 0xC($s4)
        MEM_W(0XC, ctx->r20) = ctx->r2;
            goto L_0023B35C;
    }
    // 0x0023ADF4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    // 0x0023ADF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023ADFC: swc1        $f0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->f0.u32l;
    // 0x0023AE00: swc1        $f0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f0.u32l;
    // 0x0023AE04: j           L_0023B35C
    // 0x0023AE08: swc1        $f0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f0.u32l;
        goto L_0023B35C;
    // 0x0023AE08: swc1        $f0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f0.u32l;
L_0023AE0C:
    // 0x0023AE0C: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023AE10: bne         $v0, $zero, L_0023AE24
    if (ctx->r2 != 0) {
        // 0x0023AE14: sw          $zero, 0x88($s4)
        MEM_W(0X88, ctx->r20) = 0;
            goto L_0023AE24;
    }
    // 0x0023AE14: sw          $zero, 0x88($s4)
    MEM_W(0X88, ctx->r20) = 0;
    // 0x0023AE18: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023AE1C: beq         $v0, $zero, L_0023AE7C
    if (ctx->r2 == 0) {
        // 0x0023AE20: nop
    
            goto L_0023AE7C;
    }
    // 0x0023AE20: nop

L_0023AE24:
    // 0x0023AE24: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0023AE28: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023AE2C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023AE30: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023AE34: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023AE38: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023AE3C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023AE40: jal         0x00298470
    // 0x0023AE44: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x0023AE44: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_2:
    // 0x0023AE48: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023AE4C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023AE50: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0023AE54: nop

    // 0x0023AE58: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023AE5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B360;
    }
    // 0x0023AE5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023AE60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AE64: lwc1        $f0, 0x665C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X665C);
    // 0x0023AE68: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023AE6C: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023AE70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023AE74: jal         0x0020EF60
    // 0x0023AE78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0023AE78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_0023AE7C:
    // 0x0023AE7C: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023AE80: beq         $v0, $zero, L_0023AED4
    if (ctx->r2 == 0) {
        // 0x0023AE84: addiu       $a0, $sp, 0x90
        ctx->r4 = ADD32(ctx->r29, 0X90);
            goto L_0023AED4;
    }
    // 0x0023AE84: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x0023AE88: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0023AE8C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x0023AE90: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0023AE94: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x0023AE98: jal         0x0020F144
    // 0x0023AE9C: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_0020F144(rdram, ctx);
        goto after_4;
    // 0x0023AE9C: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_4:
    // 0x0023AEA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AEA4: lwc1        $f0, 0x6660($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6660);
    // 0x0023AEA8: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0023AEAC: addiu       $a0, $s4, 0x10
    ctx->r4 = ADD32(ctx->r20, 0X10);
    // 0x0023AEB0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023AEB4: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x0023AEB8: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x0023AEBC: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x0023AEC0: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0023AEC4: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0023AEC8: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    // 0x0023AECC: jal         0x0020EF60
    // 0x0023AED0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x0023AED0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_5:
L_0023AED4:
    // 0x0023AED4: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023AED8: beq         $v0, $zero, L_0023B354
    if (ctx->r2 == 0) {
        // 0x0023AEDC: addiu       $s1, $sp, 0x30
        ctx->r17 = ADD32(ctx->r29, 0X30);
            goto L_0023B354;
    }
    // 0x0023AEDC: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0023AEE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AEE4: lwc1        $f20, 0x6664($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6664);
    // 0x0023AEE8: sub.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0023AEEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023AEF0: addiu       $a1, $s4, 0x58
    ctx->r5 = ADD32(ctx->r20, 0X58);
    // 0x0023AEF4: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0023AEF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023AEFC: jal         0x0020EF60
    // 0x0023AF00: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    func_0020EF60(rdram, ctx);
        goto after_6;
    // 0x0023AF00: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    after_6:
    // 0x0023AF04: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x0023AF08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023AF0C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x0023AF10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023AF14: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x0023AF18: jal         0x0020F144
    // 0x0023AF1C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020F144(rdram, ctx);
        goto after_7;
    // 0x0023AF1C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x0023AF20: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x0023AF24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023AF28: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0023AF2C: jal         0x0020EF60
    // 0x0023AF30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x0023AF30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0023AF34: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x0023AF38: j           L_0023B344
    // 0x0023AF3C: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
        goto L_0023B344;
    // 0x0023AF3C: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
L_0023AF40:
    // 0x0023AF40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023AF44: sw          $v0, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->r2;
    // 0x0023AF48: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0023AF4C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0023AF50: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0023AF54: sw          $t0, 0x70($s4)
    MEM_W(0X70, ctx->r20) = ctx->r8;
    // 0x0023AF58: sw          $t1, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->r9;
    // 0x0023AF5C: sw          $t2, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->r10;
    // 0x0023AF60: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023AF64: bne         $v0, $zero, L_0023AF78
    if (ctx->r2 != 0) {
        // 0x0023AF68: nop
    
            goto L_0023AF78;
    }
    // 0x0023AF68: nop

    // 0x0023AF6C: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023AF70: beq         $v0, $zero, L_0023AFD0
    if (ctx->r2 == 0) {
        // 0x0023AF74: nop
    
            goto L_0023AFD0;
    }
    // 0x0023AF74: nop

L_0023AF78:
    // 0x0023AF78: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0023AF7C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023AF80: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023AF84: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023AF88: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023AF8C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023AF90: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023AF94: jal         0x00298470
    // 0x0023AF98: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_9;
    // 0x0023AF98: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_9:
    // 0x0023AF9C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023AFA0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023AFA4: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0023AFA8: nop

    // 0x0023AFAC: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023AFB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B360;
    }
    // 0x0023AFB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023AFB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AFB8: lwc1        $f0, 0x6668($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6668);
    // 0x0023AFBC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023AFC0: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023AFC4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023AFC8: jal         0x0020EF60
    // 0x0023AFCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_10;
    // 0x0023AFCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_0023AFD0:
    // 0x0023AFD0: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023AFD4: beq         $v0, $zero, L_0023B020
    if (ctx->r2 == 0) {
        // 0x0023AFD8: addiu       $a0, $sp, 0x90
        ctx->r4 = ADD32(ctx->r29, 0X90);
            goto L_0023B020;
    }
    // 0x0023AFD8: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x0023AFDC: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0023AFE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0023AFE4: jal         0x0020F1D8
    // 0x0023AFE8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_0020F1D8(rdram, ctx);
        goto after_11;
    // 0x0023AFE8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_11:
    // 0x0023AFEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023AFF0: lwc1        $f0, 0x666C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X666C);
    // 0x0023AFF4: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0023AFF8: addiu       $a0, $s4, 0x10
    ctx->r4 = ADD32(ctx->r20, 0X10);
    // 0x0023AFFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023B000: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x0023B004: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x0023B008: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x0023B00C: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0023B010: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0023B014: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    // 0x0023B018: jal         0x0020EF60
    // 0x0023B01C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_12;
    // 0x0023B01C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_12:
L_0023B020:
    // 0x0023B020: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023B024: beq         $v0, $zero, L_0023B354
    if (ctx->r2 == 0) {
        // 0x0023B028: addiu       $s1, $sp, 0x30
        ctx->r17 = ADD32(ctx->r29, 0X30);
            goto L_0023B354;
    }
    // 0x0023B028: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0023B02C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B030: lwc1        $f20, 0x6670($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6670);
    // 0x0023B034: sub.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0023B038: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023B03C: addiu       $a1, $s4, 0x58
    ctx->r5 = ADD32(ctx->r20, 0X58);
    // 0x0023B040: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0023B044: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023B048: jal         0x0020EF60
    // 0x0023B04C: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    func_0020EF60(rdram, ctx);
        goto after_13;
    // 0x0023B04C: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    after_13:
    // 0x0023B050: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0023B054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B058: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023B05C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x0023B060: jal         0x0020F1D8
    // 0x0023B064: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020F1D8(rdram, ctx);
        goto after_14;
    // 0x0023B064: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_14:
    // 0x0023B068: j           L_0023B300
    // 0x0023B06C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
        goto L_0023B300;
    // 0x0023B06C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
L_0023B070:
    // 0x0023B070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023B074: sw          $v0, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->r2;
    // 0x0023B078: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0023B07C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0023B080: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0023B084: sw          $t0, 0x70($s4)
    MEM_W(0X70, ctx->r20) = ctx->r8;
    // 0x0023B088: sw          $t1, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->r9;
    // 0x0023B08C: sw          $t2, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->r10;
    // 0x0023B090: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023B094: bne         $v0, $zero, L_0023B0A8
    if (ctx->r2 != 0) {
        // 0x0023B098: nop
    
            goto L_0023B0A8;
    }
    // 0x0023B098: nop

    // 0x0023B09C: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023B0A0: beq         $v0, $zero, L_0023B100
    if (ctx->r2 == 0) {
        // 0x0023B0A4: nop
    
            goto L_0023B100;
    }
    // 0x0023B0A4: nop

L_0023B0A8:
    // 0x0023B0A8: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0023B0AC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023B0B0: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023B0B4: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023B0B8: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023B0BC: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023B0C0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023B0C4: jal         0x00298470
    // 0x0023B0C8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_15;
    // 0x0023B0C8: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_15:
    // 0x0023B0CC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023B0D0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023B0D4: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0023B0D8: nop

    // 0x0023B0DC: bc1t        L_0023B360
    if (c1cs) {
        // 0x0023B0E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023B360;
    }
    // 0x0023B0E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023B0E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B0E8: lwc1        $f0, 0x6674($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6674);
    // 0x0023B0EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023B0F0: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023B0F4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023B0F8: jal         0x0020EF60
    // 0x0023B0FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_16;
    // 0x0023B0FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_16:
L_0023B100:
    // 0x0023B100: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023B104: beq         $v0, $zero, L_0023B134
    if (ctx->r2 == 0) {
        // 0x0023B108: addiu       $a0, $sp, 0x90
        ctx->r4 = ADD32(ctx->r29, 0X90);
            goto L_0023B134;
    }
    // 0x0023B108: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x0023B10C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0023B110: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x0023B114: jal         0x0020F3C0
    // 0x0023B118: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_0020F3C0(rdram, ctx);
        goto after_17;
    // 0x0023B118: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_17:
    // 0x0023B11C: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x0023B120: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x0023B124: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x0023B128: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0023B12C: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x0023B130: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
L_0023B134:
    // 0x0023B134: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023B138: beq         $v0, $zero, L_0023B354
    if (ctx->r2 == 0) {
        // 0x0023B13C: addiu       $s1, $sp, 0x30
        ctx->r17 = ADD32(ctx->r29, 0X30);
            goto L_0023B354;
    }
    // 0x0023B13C: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x0023B140: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B144: lwc1        $f0, 0x6678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6678);
    // 0x0023B148: sub.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f21.fl;
    // 0x0023B14C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023B150: addiu       $a1, $s4, 0x58
    ctx->r5 = ADD32(ctx->r20, 0X58);
    // 0x0023B154: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023B158: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023B15C: jal         0x0020EF60
    // 0x0023B160: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    func_0020EF60(rdram, ctx);
        goto after_18;
    // 0x0023B160: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    after_18:
    // 0x0023B164: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0023B168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B16C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023B170: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x0023B174: jal         0x0020F3C0
    // 0x0023B178: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020F3C0(rdram, ctx);
        goto after_19;
    // 0x0023B178: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_19:
    // 0x0023B17C: j           L_0023B314
    // 0x0023B180: addiu       $s1, $s4, 0x1C
    ctx->r17 = ADD32(ctx->r20, 0X1C);
        goto L_0023B314;
    // 0x0023B180: addiu       $s1, $s4, 0x1C
    ctx->r17 = ADD32(ctx->r20, 0X1C);
L_0023B184:
    // 0x0023B184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023B188: sw          $v0, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->r2;
    // 0x0023B18C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0023B190: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0023B194: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0023B198: sw          $t0, 0x70($s4)
    MEM_W(0X70, ctx->r20) = ctx->r8;
    // 0x0023B19C: sw          $t1, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->r9;
    // 0x0023B1A0: sw          $t2, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->r10;
    // 0x0023B1A4: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023B1A8: bne         $v0, $zero, L_0023B1BC
    if (ctx->r2 != 0) {
        // 0x0023B1AC: nop
    
            goto L_0023B1BC;
    }
    // 0x0023B1AC: nop

    // 0x0023B1B0: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023B1B4: beq         $v0, $zero, L_0023B218
    if (ctx->r2 == 0) {
        // 0x0023B1B8: nop
    
            goto L_0023B218;
    }
    // 0x0023B1B8: nop

L_0023B1BC:
    // 0x0023B1BC: lwc1        $f1, 0x0($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X0);
    // 0x0023B1C0: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0023B1C4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0023B1C8: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023B1CC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0023B1D0: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0023B1D4: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0023B1D8: jal         0x00298470
    // 0x0023B1DC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_20;
    // 0x0023B1DC: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_20:
    // 0x0023B1E0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0023B1E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0023B1E8: c.eq.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl == ctx->f1.fl;
    // 0x0023B1EC: nop

    // 0x0023B1F0: bc1f        L_0023B200
    if (!c1cs) {
        // 0x0023B1F4: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_0023B200;
    }
    // 0x0023B1F4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_0023B1F8:
    // 0x0023B1F8: j           L_0023B360
    // 0x0023B1FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0023B360;
    // 0x0023B1FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023B200:
    // 0x0023B200: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B204: lwc1        $f0, 0x667C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X667C);
    // 0x0023B208: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0023B20C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023B210: jal         0x0020EF60
    // 0x0023B214: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_21;
    // 0x0023B214: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_21:
L_0023B218:
    // 0x0023B218: lw          $v0, 0x90($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X90);
    // 0x0023B21C: beq         $v0, $zero, L_0023B288
    if (ctx->r2 == 0) {
        // 0x0023B220: addiu       $s2, $sp, 0x60
        ctx->r18 = ADD32(ctx->r29, 0X60);
            goto L_0023B288;
    }
    // 0x0023B220: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
    // 0x0023B224: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0023B228: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x0023B22C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0023B230: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023B234: jal         0x0020F1D8
    // 0x0023B238: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_0020F1D8(rdram, ctx);
        goto after_22;
    // 0x0023B238: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_22:
    // 0x0023B23C: addiu       $s1, $sp, 0x70
    ctx->r17 = ADD32(ctx->r29, 0X70);
    // 0x0023B240: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023B244: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x0023B248: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023B24C: jal         0x0020F3C0
    // 0x0023B250: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_0020F3C0(rdram, ctx);
        goto after_23;
    // 0x0023B250: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_23:
    // 0x0023B254: addiu       $s0, $s4, 0x10
    ctx->r16 = ADD32(ctx->r20, 0X10);
    // 0x0023B258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B25C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0023B260: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x0023B264: jal         0x0020EF8C
    // 0x0023B268: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_0020EF8C(rdram, ctx);
        goto after_24;
    // 0x0023B268: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_24:
    // 0x0023B26C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B270: lwc1        $f0, 0x6680($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6680);
    // 0x0023B274: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0023B278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B27C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0023B280: jal         0x0020EF60
    // 0x0023B284: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_25;
    // 0x0023B284: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_25:
L_0023B288:
    // 0x0023B288: lw          $v0, 0x8C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8C);
    // 0x0023B28C: beq         $v0, $zero, L_0023B354
    if (ctx->r2 == 0) {
        // 0x0023B290: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_0023B354;
    }
    // 0x0023B290: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x0023B294: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023B298: lwc1        $f20, 0x6684($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6684);
    // 0x0023B29C: sub.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = ctx->f20.fl - ctx->f21.fl;
    // 0x0023B2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B2A4: addiu       $a1, $s4, 0x58
    ctx->r5 = ADD32(ctx->r20, 0X58);
    // 0x0023B2A8: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0023B2AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0023B2B0: jal         0x0020EF60
    // 0x0023B2B4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    func_0020EF60(rdram, ctx);
        goto after_26;
    // 0x0023B2B4: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    after_26:
    // 0x0023B2B8: addiu       $s3, $sp, 0x60
    ctx->r19 = ADD32(ctx->r29, 0X60);
    // 0x0023B2BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0023B2C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023B2C4: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x0023B2C8: jal         0x0020F1D8
    // 0x0023B2CC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020F1D8(rdram, ctx);
        goto after_27;
    // 0x0023B2CC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_27:
    // 0x0023B2D0: addiu       $s1, $sp, 0x70
    ctx->r17 = ADD32(ctx->r29, 0X70);
    // 0x0023B2D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023B2D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0023B2DC: jal         0x0020F3C0
    // 0x0023B2E0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020F3C0(rdram, ctx);
        goto after_28;
    // 0x0023B2E0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_28:
    // 0x0023B2E4: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x0023B2E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B2EC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0023B2F0: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x0023B2F4: jal         0x0020EF8C
    // 0x0023B2F8: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_0020EF8C(rdram, ctx);
        goto after_29;
    // 0x0023B2F8: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_29:
    // 0x0023B2FC: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
L_0023B300:
    // 0x0023B300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B304: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x0023B308: jal         0x0020EF60
    // 0x0023B30C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_30;
    // 0x0023B30C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_30:
    // 0x0023B310: addiu       $s1, $s4, 0x1C
    ctx->r17 = ADD32(ctx->r20, 0X1C);
L_0023B314:
    // 0x0023B314: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023B318: addiu       $a1, $s4, 0x28
    ctx->r5 = ADD32(ctx->r20, 0X28);
    // 0x0023B31C: jal         0x0020EEF8
    // 0x0023B320: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_31;
    // 0x0023B320: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_31:
    // 0x0023B324: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x0023B328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023B32C: lui         $a2, 0x3E51
    ctx->r6 = S32(0X3E51 << 16);
    // 0x0023B330: ori         $a2, $a2, 0xB717
    ctx->r6 = ctx->r6 | 0XB717;
    // 0x0023B334: jal         0x0020EF60
    // 0x0023B338: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020EF60(rdram, ctx);
        goto after_32;
    // 0x0023B338: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_32:
    // 0x0023B33C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0023B340: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_0023B344:
    // 0x0023B344: jal         0x0020EEF8
    // 0x0023B348: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_33;
    // 0x0023B348: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_33:
    // 0x0023B34C: j           L_0023B360
    // 0x0023B350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0023B360;
    // 0x0023B350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023B354:
    // 0x0023B354: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023B358: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
L_0023B35C:
    // 0x0023B35C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023B360:
    // 0x0023B360: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x0023B364: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x0023B368: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x0023B36C: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0023B370: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0023B374: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0023B378: ldc1        $f22, 0xC8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XC8);
    // 0x0023B37C: ldc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XC0);
    // 0x0023B380: ldc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB8);
    // 0x0023B384: jr          $ra
    // 0x0023B388: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x0023B388: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_002086BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002086BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002086C0: lui         $t1, 0x708
    ctx->r9 = S32(0X708 << 16);
    // 0x002086C4: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x002086C8: lui         $t3, 0x707
    ctx->r11 = S32(0X707 << 16);
    // 0x002086CC: ori         $t3, $t3, 0xF400
    ctx->r11 = ctx->r11 | 0XF400;
    // 0x002086D0: lui         $t5, 0xF588
    ctx->r13 = S32(0XF588 << 16);
    // 0x002086D4: ori         $t5, $t5, 0x400
    ctx->r13 = ctx->r13 | 0X400;
    // 0x002086D8: lui         $t4, 0x8
    ctx->r12 = S32(0X8 << 16);
    // 0x002086DC: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x002086E0: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x002086E4: ori         $t6, $t6, 0xC03C
    ctx->r14 = ctx->r14 | 0XC03C;
    // 0x002086E8: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x002086EC: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x002086F0: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x002086F4: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x002086F8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x002086FC: addiu       $t8, $t8, -0x4BA8
    ctx->r24 = ADD32(ctx->r24, -0X4BA8);
    // 0x00208700: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00208704: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x00208708: lui         $v0, 0xFD90
    ctx->r2 = S32(0XFD90 << 16);
    // 0x0020870C: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00208710: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00208714: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x00208718: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0020871C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00208720: addiu       $v0, $v0, -0x4A80
    ctx->r2 = ADD32(ctx->r2, -0X4A80);
    // 0x00208724: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x00208728: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x0020872C: lui         $v0, 0xF590
    ctx->r2 = S32(0XF590 << 16);
    // 0x00208730: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x00208734: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00208738: addiu       $t1, $v1, 0x10
    ctx->r9 = ADD32(ctx->r3, 0X10);
    // 0x0020873C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00208740: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x00208744: addiu       $t2, $v1, 0x18
    ctx->r10 = ADD32(ctx->r3, 0X18);
    // 0x00208748: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x0020874C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x00208750: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x00208754: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x00208758: addiu       $t0, $v1, 0x20
    ctx->r8 = ADD32(ctx->r3, 0X20);
    // 0x0020875C: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x00208760: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x00208764: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x00208768: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x0020876C: addiu       $t1, $v1, 0x28
    ctx->r9 = ADD32(ctx->r3, 0X28);
    // 0x00208770: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x00208774: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x00208778: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x0020877C: addiu       $t2, $v1, 0x30
    ctx->r10 = ADD32(ctx->r3, 0X30);
    // 0x00208780: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x00208784: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x00208788: sw          $t5, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r13;
    // 0x0020878C: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x00208790: addiu       $t0, $v1, 0x38
    ctx->r8 = ADD32(ctx->r3, 0X38);
    // 0x00208794: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x00208798: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x0020879C: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x002087A0: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x002087A4: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x002087A8: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x002087AC: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x002087B0: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x002087B4: sw          $a2, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r6;
    // 0x002087B8: addiu       $a2, $v1, 0x40
    ctx->r6 = ADD32(ctx->r3, 0X40);
    // 0x002087BC: addiu       $v0, $v1, 0x48
    ctx->r2 = ADD32(ctx->r3, 0X48);
    // 0x002087C0: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x002087C4: sw          $t7, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r15;
    // 0x002087C8: sw          $a0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r4;
    // 0x002087CC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x002087D0: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x002087D4: beq         $a1, $zero, L_002087E4
    if (ctx->r5 == 0) {
        // 0x002087D8: sw          $v0, 0x40($v1)
        MEM_W(0X40, ctx->r3) = ctx->r2;
            goto L_002087E4;
    }
    // 0x002087D8: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x002087DC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x002087E0: addiu       $t8, $t8, -0x4B20
    ctx->r24 = ADD32(ctx->r24, -0X4B20);
L_002087E4:
    // 0x002087E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002087E8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x002087EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002087F0: sw          $v0, -0x477C($at)
    MEM_W(-0X477C, ctx->r1) = ctx->r2;
    // 0x002087F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002087F8: sw          $v0, -0x4780($at)
    MEM_W(-0X4780, ctx->r1) = ctx->r2;
    // 0x002087FC: jal         0x00207A54
    // 0x00208800: nop

    entry_00207A54(rdram, ctx);
        goto after_0;
    // 0x00208800: nop

    after_0:
    // 0x00208804: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00208808: jr          $ra
    // 0x0020880C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0020880C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00427164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427164: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00427168: lw          $v0, 0x2220($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2220);
    // 0x0042716C: jr          $ra
    // 0x00427170: nop

    return;
    // 0x00427170: nop

;}
RECOMP_FUNC void func_00412DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412DD0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412DD4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412DDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00412DE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00412DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00412DE8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00412DEC: jal         0x002017D4
    // 0x00412DF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00412DF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x00412DF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412DF8: jal         0x002017D4
    // 0x00412DFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00412DFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00412E00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00412E04: jal         0x002017D4
    // 0x00412E08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00412E08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x00412E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00412E10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00412E14: jr          $ra
    // 0x00412E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021836C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021836C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00218370: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00218374: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00218378: lw          $v0, 0x8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8);
    // 0x0021837C: lw          $v1, 0xC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC);
    // 0x00218380: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00218384: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00218388: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x0021838C: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x00218390: jr          $ra
    // 0x00218394: nop

    return;
    // 0x00218394: nop

;}
RECOMP_FUNC void func_00268B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268B48: jr          $ra
    // 0x00268B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00268B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040EB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EB34: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x0040EB38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0040EB3C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0040EB40: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040EB44: jal         0x002535E4
    // 0x0040EB48: nop

    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x0040EB48: nop

    after_0:
    // 0x0040EB4C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0040EB50: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0040EB54: jal         0x00225D0C
    // 0x0040EB58: nop

    func_00225D0C(rdram, ctx);
        goto after_1;
    // 0x0040EB58: nop

    after_1:
    // 0x0040EB5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040EB60: jr          $ra
    // 0x0040EB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040EB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00219994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00219998: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0021999C: jal         0x0021793C
    // 0x002199A0: nop

    func_0021793C(rdram, ctx);
        goto after_0;
    // 0x002199A0: nop

    after_0:
    // 0x002199A4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002199A8: jal         0x002017D4
    // 0x002199AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002199AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x002199B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002199B4: jal         0x002017D4
    // 0x002199B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002199B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x002199BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002199C0: jr          $ra
    // 0x002199C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002199C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045F8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045F8EC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0045F8F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045F8F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0045F8F8: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0045F8FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0045F900: bne         $v1, $v0, L_0045F938
    if (ctx->r3 != ctx->r2) {
            // 0x0045F904: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_0045F938(rdram, ctx);
    return;
    }
    // 0x0045F904: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045F908: sll         $v1, $a0, 7
    ctx->r3 = S32(ctx->r4 << 7);
    // 0x0045F90C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0045F910: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045F914: lw          $a0, 0x2224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2224);
    // 0x0045F918: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045F91C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0045F920: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x0045F924: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0045F928: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0045F92C: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    // 0x0045F930: jr          $ra
    // 0x0045F934: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    return;
    // 0x0045F934: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_00402ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00402ADC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00402AE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00402AE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00402AE8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00402AEC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00402AF0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00402AF4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00402AF8: addiu       $a1, $zero, 0x451
    ctx->r5 = ADD32(0, 0X451);
    // 0x00402AFC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x00402B00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00402B04: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x00402B08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00402B0C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x00402B10: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00402B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00402B18: jal         0x00225F6C
    // 0x00402B1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00225F6C(rdram, ctx);
        goto after_0;
    // 0x00402B1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x00402B20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00402B24: blez        $a1, L_00402B5C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00402B28: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00402B5C;
    }
    // 0x00402B28: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00402B2C: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x00402B30: addiu       $a3, $a3, 0x3660
    ctx->r7 = ADD32(ctx->r7, 0X3660);
    // 0x00402B34: lui         $a2, 0x26
    ctx->r6 = S32(0X26 << 16);
    // 0x00402B38: addiu       $a2, $a2, -0x1B48
    ctx->r6 = ADD32(ctx->r6, -0X1B48);
    // 0x00402B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00402B40:
    // 0x00402B40: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00402B44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00402B48: sw          $a3, 0x234($v0)
    MEM_W(0X234, ctx->r2) = ctx->r7;
    // 0x00402B4C: sw          $a2, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r6;
    // 0x00402B50: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00402B54: bne         $v0, $zero, L_00402B40
    if (ctx->r2 != 0) {
        // 0x00402B58: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00402B40;
    }
    // 0x00402B58: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00402B5C:
    // 0x00402B5C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00402B60: addiu       $a0, $a0, -0xC60
    ctx->r4 = ADD32(ctx->r4, -0XC60);
    // 0x00402B64: jal         0x00401E30
    // 0x00402B68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00401E30(rdram, ctx);
        goto after_1;
    // 0x00402B68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00402B6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00402B70: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00402B74: jal         0x00243414
    // 0x00402B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00402B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00402B7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00402B80: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00402B84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00402B88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00402B8C: jr          $ra
    // 0x00402B90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00402B90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00225778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00225778: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0022577C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00225780: lwc1        $f4, 0x5FF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5FF4);
    // 0x00225784: lw          $t1, 0xE8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XE8);
    // 0x00225788: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x0022578C: blez        $t1, L_00225840
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00225790: addu        $t0, $v1, $zero
        ctx->r8 = ADD32(ctx->r3, 0);
            goto L_00225840;
    }
    // 0x00225790: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x00225794: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x00225798: lw          $a0, 0xE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE0);
L_0022579C:
    // 0x0022579C: beql        $a0, $a1, L_00225834
    if (ctx->r4 == ctx->r5) {
        // 0x002257A0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00225834;
    }
    goto skip_0;
    // 0x002257A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x002257A4: beq         $a2, $t2, L_002257B8
    if (ctx->r6 == ctx->r10) {
        // 0x002257A8: nop
    
            goto L_002257B8;
    }
    // 0x002257A8: nop

    // 0x002257AC: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
    // 0x002257B0: bnel        $v0, $a2, L_00225834
    if (ctx->r2 != ctx->r6) {
        // 0x002257B4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00225834;
    }
    goto skip_1;
    // 0x002257B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
L_002257B8:
    // 0x002257B8: beq         $a3, $t2, L_002257D0
    if (ctx->r7 == ctx->r10) {
        // 0x002257BC: nop
    
            goto L_002257D0;
    }
    // 0x002257BC: nop

    // 0x002257C0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002257C4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002257C8: bnel        $v0, $a3, L_00225834
    if (ctx->r2 != ctx->r7) {
        // 0x002257CC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00225834;
    }
    goto skip_2;
    // 0x002257CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
L_002257D0:
    // 0x002257D0: beq         $t3, $zero, L_002257E4
    if (ctx->r11 == 0) {
        // 0x002257D4: nop
    
            goto L_002257E4;
    }
    // 0x002257D4: nop

    // 0x002257D8: lw          $v0, 0x144($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X144);
    // 0x002257DC: beql        $v0, $zero, L_00225834
    if (ctx->r2 == 0) {
        // 0x002257E0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00225834;
    }
    goto skip_3;
    // 0x002257E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
L_002257E4:
    // 0x002257E4: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x002257E8: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x002257EC: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002257F0: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x002257F4: lwc1        $f3, 0x8($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X8);
    // 0x002257F8: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x002257FC: sub.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x00225800: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x00225804: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x00225808: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0022580C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00225810: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00225814: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x00225818: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0022581C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x00225820: nop

    // 0x00225824: bc1f        L_00225834
    if (!c1cs) {
        // 0x00225828: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_00225834;
    }
    // 0x00225828: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0022582C: mov.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
    // 0x00225830: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
L_00225834:
    // 0x00225834: slt         $v0, $v1, $t1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x00225838: bne         $v0, $zero, L_0022579C
    if (ctx->r2 != 0) {
        // 0x0022583C: addiu       $a0, $a0, 0x288
        ctx->r4 = ADD32(ctx->r4, 0X288);
            goto L_0022579C;
    }
    // 0x0022583C: addiu       $a0, $a0, 0x288
    ctx->r4 = ADD32(ctx->r4, 0X288);
L_00225840:
    // 0x00225840: jr          $ra
    // 0x00225844: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    return;
    // 0x00225844: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
;}
RECOMP_FUNC void func_002933B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002933B0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002933B4: beq         $v1, $zero, L_002933C4
    if (ctx->r3 == 0) {
        // 0x002933B8: nop
    
            goto L_002933C4;
    }
    // 0x002933B8: nop

    // 0x002933BC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x002933C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_002933C4:
    // 0x002933C4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x002933C8: beq         $v1, $zero, L_002933D8
    if (ctx->r3 == 0) {
        // 0x002933CC: nop
    
            goto L_002933D8;
    }
    // 0x002933CC: nop

    // 0x002933D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002933D4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_002933D8:
    // 0x002933D8: jr          $ra
    // 0x002933DC: nop

    return;
    // 0x002933DC: nop

;}
RECOMP_FUNC void func_0041B580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B580: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B584: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B588: xori        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 ^ 0X80;
    // 0x0041B58C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B590: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B594: jr          $ra
    // 0x0041B598: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B598: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004570F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E274:
    // 0x004570F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
L_0041E27C:
    // 0x004570FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00457100: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00457104: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x00457108: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0045710C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00457110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00457114: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x00457118: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0045711C: lw          $v0, 0x328($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X328);
    // 0x00457120: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00457124: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457128: sw          $zero, 0x984($at)
    MEM_W(0X984, ctx->r1) = 0;
    // 0x0045712C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457130: sw          $zero, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = 0;
    // 0x00457134: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457138: sw          $s2, 0x994($at)
    MEM_W(0X994, ctx->r1) = ctx->r18;
    // 0x0045713C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457140: sw          $s2, 0x9B4($at)
    MEM_W(0X9B4, ctx->r1) = ctx->r18;
    // 0x00457144: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00457148: sw          $s2, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = ctx->r18;
    // 0x0045714C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457150: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x00457154: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457158: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0045715C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00457160: sw          $v0, 0x328($v1)
    MEM_W(0X328, ctx->r3) = ctx->r2;
    // 0x00457164: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00457168: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0045716C: lw          $v1, 0x2020($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2020);
    // 0x00457170: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x00457174: beq         $v1, $zero, L_004571A8
    if (ctx->r3 == 0) {
        // 0x00457178: nop
    
            goto L_004571A8;
    }
    // 0x00457178: nop

    // 0x0045717C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00457180: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x00457184: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457188: addiu       $a1, $a1, -0x78B4
    ctx->r5 = ADD32(ctx->r5, -0X78B4);
    // 0x0045718C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00457190: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x00457194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00457198: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0045719C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x004571A0: j           L_0041E274
    // 0x004571A4: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    entry_0041E274(rdram, ctx);
    return;
    // 0x004571A4: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_004571A8:
    // 0x004571A8: jal         0x004263A0
    // 0x004571AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_0;
    // 0x004571AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004571B0: jal         0x0042647C
    // 0x004571B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042647C(rdram, ctx);
        goto after_1;
    // 0x004571B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004571B8: bne         $v0, $zero, L_004571D0
    if (ctx->r2 != 0) {
        // 0x004571BC: nop
    
            goto L_004571D0;
    }
    // 0x004571BC: nop

    // 0x004571C0: jal         0x0041D948
    // 0x004571C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_0041D948(rdram, ctx);
        goto after_2;
    // 0x004571C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x004571C8: j           L_0041E27C
    // 0x004571CC: nop

    entry_0041E27C(rdram, ctx);
    return;
    // 0x004571CC: nop

L_004571D0:
    // 0x004571D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004571D4: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x004571D8: jal         0x004264B4
    // 0x004571DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_004264B4(rdram, ctx);
        goto after_3;
    // 0x004571DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x004571E0: beq         $v0, $zero, L_00457214
    if (ctx->r2 == 0) {
        // 0x004571E4: nop
    
            goto L_00457214;
    }
    // 0x004571E4: nop

    // 0x004571E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004571EC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x004571F0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x004571F4: addiu       $v0, $v0, -0x78B4
    ctx->r2 = ADD32(ctx->r2, -0X78B4);
    // 0x004571F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004571FC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00457200: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00457204: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457208: addiu       $a1, $a1, -0x4474
    ctx->r5 = ADD32(ctx->r5, -0X4474);
    // 0x0045720C: j           L_0041E274
    // 0x00457210: nop

    entry_0041E274(rdram, ctx);
    return;
    // 0x00457210: nop

L_00457214:
    // 0x00457214: jal         0x00426AF8
    // 0x00457218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426AF8(rdram, ctx);
        goto after_4;
    // 0x00457218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0045721C: beq         $v0, $zero, L_00457250
    if (ctx->r2 == 0) {
        // 0x00457220: nop
    
            goto L_00457250;
    }
    // 0x00457220: nop

    // 0x00457224: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457228: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0045722C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x00457230: addiu       $v0, $v0, -0x4A38
    ctx->r2 = ADD32(ctx->r2, -0X4A38);
    // 0x00457234: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457238: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0045723C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x00457240: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457244: addiu       $a1, $a1, -0x4084
    ctx->r5 = ADD32(ctx->r5, -0X4084);
    // 0x00457248: j           L_0041E274
    // 0x0045724C: nop

    entry_0041E274(rdram, ctx);
    return;
    // 0x0045724C: nop

L_00457250:
    // 0x00457250: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00457254: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00457258: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0045725C: addiu       $v0, $v0, -0x78B4
    ctx->r2 = ADD32(ctx->r2, -0X78B4);
    // 0x00457260: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00457264: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x00457268: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0045726C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00457270: addiu       $a1, $a1, -0x44E0
    ctx->r5 = ADD32(ctx->r5, -0X44E0);
    // 0x00457274: jal         0x00416644
    // 0x00457278: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x00457278: nop

    after_5:
    // 0x0045727C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00457280: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00457284: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00457288: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0045728C: jr          $ra
    // 0x00457290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00457290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00245848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00245848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0024584C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00245850: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00245854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00245858: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024585C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00245860: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x00245864: beq         $v0, $zero, L_00245884
    if (ctx->r2 == 0) {
        // 0x00245868: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00245884;
    }
    // 0x00245868: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024586C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x00245870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00245874: bne         $v1, $v0, L_00245884
    if (ctx->r3 != ctx->r2) {
        // 0x00245878: nop
    
            goto L_00245884;
    }
    // 0x00245878: nop

    // 0x0024587C: jal         0x00246918
    // 0x00245880: nop

    func_00246918(rdram, ctx);
        goto after_0;
    // 0x00245880: nop

    after_0:
L_00245884:
    // 0x00245884: lbu         $v0, 0xC9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC9);
    // 0x00245888: beq         $v0, $zero, L_002458A4
    if (ctx->r2 == 0) {
        // 0x0024588C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_002458A4;
    }
    // 0x0024588C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        turok2_patch_scale_freeze(rdram, ctx);

    // 0x00245890: sb          $v0, 0xC9($s0)
    MEM_B(0XC9, ctx->r16) = ctx->r2;
    // 0x00245894: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00245898: sw          $zero, 0x6D28($at)
    MEM_W(0X6D28, ctx->r1) = 0;
    // 0x0024589C: j           L_00245984
    // 0x002458A0: nop

        goto L_00245984;
    // 0x002458A0: nop

L_002458A4:
    // 0x002458A4: lw          $v0, 0x16C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X16C);
    // 0x002458A8: beq         $v0, $zero, L_00245984
    if (ctx->r2 == 0) {
        // 0x002458AC: addiu       $s2, $zero, 0x2
        ctx->r18 = ADD32(0, 0X2);
            goto L_00245984;
    }
    // 0x002458AC: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x002458B0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002458B4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002458B8: bne         $v0, $s2, L_002458E0
    if (ctx->r2 != ctx->r18) {
        // 0x002458BC: nop
    
            goto L_002458E0;
    }
    // 0x002458BC: nop

    // 0x002458C0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x002458C4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x002458C8: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x002458CC: sw          $a2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r6;
    // 0x002458D0: sw          $a3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r7;
    // 0x002458D4: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x002458D8: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x002458DC: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
L_002458E0:
    // 0x002458E0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x002458E4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x002458E8: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x002458EC: sw          $a2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r6;
    // 0x002458F0: sw          $a3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r7;
    // 0x002458F4: sw          $t0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r8;
    // 0x002458F8: lwc1        $f1, 0x40($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X40);
    // 0x002458FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00245900: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00245904: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00245908: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024590C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00245910: jal         0x00242E34
    // 0x00245914: swc1        $f1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_00242E34(rdram, ctx);
        goto after_1;
    // 0x00245914: swc1        $f1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_1:
    // 0x00245918: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x0024591C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00245920: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00245924: beq         $v0, $zero, L_00245934
    if (ctx->r2 == 0) {
        // 0x00245928: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00245934;
    }
    // 0x00245928: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024592C: jal         0x00242C00
    // 0x00245930: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00242C00(rdram, ctx);
        goto after_2;
    // 0x00245930: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_00245934:
    // 0x00245934: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x00245938: beq         $v0, $zero, L_00245948
    if (ctx->r2 == 0) {
        // 0x0024593C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00245948;
    }
    // 0x0024593C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00245940: jalr        $v0
    // 0x00245944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x00245944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_00245948:
    // 0x00245948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024594C: jal         0x00243170
    // 0x00245950: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00243170(rdram, ctx);
        goto after_4;
    // 0x00245950: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00245954: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00245958: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0024595C: beq         $v0, $s2, L_00245984
    if (ctx->r2 == ctx->r18) {
        // 0x00245960: nop
    
            goto L_00245984;
    }
    // 0x00245960: nop

    // 0x00245964: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00245968: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x0024596C: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x00245970: sw          $a2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r6;
    // 0x00245974: sw          $a3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r7;
    // 0x00245978: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x0024597C: lwc1        $f0, 0x50($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00245980: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
L_00245984:
    // 0x00245984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00245988: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024598C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00245990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00245994: jr          $ra
    // 0x00245998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00245998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00451490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451494: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x00451498: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0045149C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004514A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004514A4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004514A8: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x004514AC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004514B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004514B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004514B8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004514BC: lb          $v0, 0x26($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X26);
    // 0x004514C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004514C4: jal         0x0041648C
    // 0x004514C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x004514C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x004514CC: sb          $v0, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r2;
    // 0x004514D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004514D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004514D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004514DC: jr          $ra
    // 0x004514E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004514E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023CA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CA98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023CA9C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023CAA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023CAA4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023CAA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023CAAC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023CAB0: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x0023CAB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023CAB8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023CABC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023CAC0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023CAC4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0023CAC8: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x0023CACC: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x0023CAD0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023CAD4: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0023CAD8: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0023CADC: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x0023CAE0: lw          $a3, 0x28($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X28);
    // 0x0023CAE4: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x0023CAE8: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0023CAEC: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x0023CAF0: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x0023CAF4: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x0023CAF8: lw          $a3, 0x58($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X58);
    // 0x0023CAFC: lw          $t0, 0x5C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X5C);
    // 0x0023CB00: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0023CB04: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x0023CB08: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x0023CB0C: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x0023CB10: lw          $a3, 0x34($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X34);
    // 0x0023CB14: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x0023CB18: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0023CB1C: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x0023CB20: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x0023CB24: jal         0x0020EF2C
    // 0x0023CB28: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023CB28: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x0023CB2C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023CB30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023CB34: jal         0x0020EF2C
    // 0x0023CB38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023CB38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023CB3C: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023CB40: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023CB44: jal         0x0020EFDC
    // 0x0023CB48: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023CB48: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023CB4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023CB50: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023CB54: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023CB58: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023CB5C: jr          $ra
    // 0x0023CB60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023CB60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00215A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00215A00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00215A04: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00215A08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00215A0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00215A10: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00215A14: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00215A18: addiu       $v0, $v0, 0x585C
    ctx->r2 = ADD32(ctx->r2, 0X585C);
    // 0x00215A1C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00215A20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00215A24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00215A28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00215A2C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00215A30: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00215A34: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x00215A38: jal         0x0020367C
    // 0x00215A3C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00215A3C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x00215A40: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00215A44: beq         $s0, $zero, L_00215AA8
    if (ctx->r16 == 0) {
        // 0x00215A48: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00215AA8;
    }
    // 0x00215A48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00215A4C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00215A50: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x00215A54: jal         0x0020185C
    // 0x00215A58: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x00215A58: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x00215A5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00215A60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00215A64: jal         0x002051F4
    // 0x00215A68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x00215A68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00215A6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00215A70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00215A74: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x00215A78: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00215A7C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00215A80: addiu       $v0, $v0, -0x4B50
    ctx->r2 = ADD32(ctx->r2, -0X4B50);
    // 0x00215A84: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00215A88: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00215A8C: addiu       $v0, $v0, 0x5870
    ctx->r2 = ADD32(ctx->r2, 0X5870);
    // 0x00215A90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00215A94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00215A98: jal         0x0020367C
    // 0x00215A9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_3;
    // 0x00215A9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x00215AA0: j           L_00215AAC
    // 0x00215AA4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_00215AAC;
    // 0x00215AA4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00215AA8:
    // 0x00215AA8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00215AAC:
    // 0x00215AAC: beq         $s0, $zero, L_00215AC8
    if (ctx->r16 == 0) {
        // 0x00215AB0: nop
    
            goto L_00215AC8;
    }
    // 0x00215AB0: nop

    // 0x00215AB4: jal         0x0020BEE8
    // 0x00215AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0020BEE8(rdram, ctx);
        goto after_4;
    // 0x00215AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00215ABC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00215AC0: jal         0x002051F4
    // 0x00215AC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_5;
    // 0x00215AC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_00215AC8:
    // 0x00215AC8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00215ACC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00215AD0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00215AD4: jr          $ra
    // 0x00215AD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00215AD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00451108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418148:
    // 0x00451108: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
L_0041814C:
    // 0x0045110C: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00451110: lb          $v1, 0x2B($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2B);
    // 0x00451114: beq         $v1, $zero, L_0045112C
    if (ctx->r3 == 0) {
        // 0x00451118: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045112C;
    }
    // 0x00451118: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045111C: beq         $v1, $v0, L_0045113C
    if (ctx->r3 == ctx->r2) {
        // 0x00451120: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045113C;
    }
    // 0x00451120: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451124: j           L_0041814C
    // 0x00451128: nop

    entry_0041814C(rdram, ctx);
    return;
    // 0x00451128: nop

L_0045112C:
    // 0x0045112C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00451130: addiu       $v0, $v0, 0x4210
    ctx->r2 = ADD32(ctx->r2, 0X4210);
    // 0x00451134: j           L_00418148
    // 0x00451138: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418148(rdram, ctx);
    return;
    // 0x00451138: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045113C:
    // 0x0045113C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00451140: addiu       $v0, $v0, 0x4220
    ctx->r2 = ADD32(ctx->r2, 0X4220);
    // 0x00451144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00451148: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045114C: jr          $ra
    // 0x00451150: nop

    return;
    // 0x00451150: nop

;}
RECOMP_FUNC void func_00460084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00460084: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00460088: lw          $v0, 0x2220($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2220);
    // 0x0046008C: jr          $ra
    // 0x00460090: nop

    return;
    // 0x00460090: nop

;}
RECOMP_FUNC void func_0025ECDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025ECDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025ECE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0025ECE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025ECE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0025ECEC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0025ECF0: jal         0x0021D928
    // 0x0025ECF4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    func_0021D928(rdram, ctx);
        goto after_0;
    // 0x0025ECF4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0025ECF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0025ECFC: lb          $v1, 0x1B($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1B);
    // 0x0025ED00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0025ED04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0025ED08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0025ED0C: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x0025ED10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0025ED14: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x0025ED18: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x0025ED1C: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x0025ED20: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x0025ED24: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0025ED28: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0025ED2C: lw          $a1, 0x98($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X98);
    // 0x0025ED30: jal         0x0020B258
    // 0x0025ED34: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    func_0020B258(rdram, ctx);
        goto after_1;
    // 0x0025ED34: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_1:
    // 0x0025ED38: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0025ED3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0025ED40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0025ED44: jr          $ra
    // 0x0025ED48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0025ED48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0020F908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F908: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0020F90C: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x0020F910: beq         $a3, $zero, L_0020F9CC
    if (ctx->r7 == 0) {
        // 0x0020F914: addiu       $v0, $a3, -0x1
        ctx->r2 = ADD32(ctx->r7, -0X1);
            goto L_0020F9CC;
    }
    // 0x0020F914: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x0020F918: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0020F91C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x0020F920: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_0020F924:
    // 0x0020F924: lwc1        $f5, 0x0($v1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0020F928: lwc1        $f1, 0x0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x0020F92C: mul.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f5.fl);
    // 0x0020F930: lwc1        $f4, -0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, -0X4);
    // 0x0020F934: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x0020F938: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0020F93C: lwc1        $f3, 0x0($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F940: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x0020F944: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0020F948: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x0020F94C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020F950: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x0020F954: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020F958: swc1        $f1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020F95C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0020F960: mul.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f5.fl);
    // 0x0020F964: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x0020F968: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0020F96C: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020F970: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0020F974: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020F978: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F97C: lwc1        $f1, 0x34($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X34);
    // 0x0020F980: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020F984: swc1        $f0, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0020F988: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020F98C: mul.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f5.fl);
    // 0x0020F990: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x0020F994: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0020F998: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020F99C: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x0020F9A0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F9A4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x0020F9A8: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0020F9AC: lwc1        $f0, 0x38($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X38);
    // 0x0020F9B0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x0020F9B4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0020F9B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0020F9BC: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x0020F9C0: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    // 0x0020F9C4: bne         $v0, $a3, L_0020F924
    if (ctx->r2 != ctx->r7) {
        // 0x0020F9C8: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_0020F924;
    }
    // 0x0020F9C8: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_0020F9CC:
    // 0x0020F9CC: jr          $ra
    // 0x0020F9D0: nop

    return;
    // 0x0020F9D0: nop

;}
RECOMP_FUNC void func_00206528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0020652C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00206530: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00206534: addiu       $s0, $s0, -0x7DE8
    ctx->r16 = ADD32(ctx->r16, -0X7DE8);
    // 0x00206538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0020653C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00206540: jal         0x0020656C
    // 0x00206544: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020656C(rdram, ctx);
        goto after_0;
    // 0x00206544: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00206548: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0020654C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00206550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00206554: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00206558: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020655C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00206560: sw          $zero, -0x7DF8($at)
    MEM_W(-0X7DF8, ctx->r1) = 0;
    // 0x00206564: jr          $ra
    // 0x00206568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00206568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00236D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236D48: jr          $ra
    // 0x00236D4C: nop

    return;
    // 0x00236D4C: nop

;}
RECOMP_FUNC void func_00454818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00454818: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0045481C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x00454820: xori        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 ^ 0X2000;
    // 0x00454824: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00454828: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0045482C: jr          $ra
    // 0x00454830: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00454830: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002975A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002975A8: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x002975AC: jr          $ra
    // 0x002975B0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x002975B0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
;}
RECOMP_FUNC void func_002626A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002626A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002626AC: addiu       $v0, $v0, 0x1DE0
    ctx->r2 = ADD32(ctx->r2, 0X1DE0);
    // 0x002626B0: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x002626B4: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002626B8: addiu       $v0, $v0, 0x27B8
    ctx->r2 = ADD32(ctx->r2, 0X27B8);
    // 0x002626BC: sw          $v0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r2;
    // 0x002626C0: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002626C4: addiu       $v0, $v0, 0x2BE0
    ctx->r2 = ADD32(ctx->r2, 0X2BE0);
    // 0x002626C8: sw          $v0, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = ctx->r2;
    // 0x002626CC: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x002626D0: addiu       $v0, $v0, 0x2A1C
    ctx->r2 = ADD32(ctx->r2, 0X2A1C);
    // 0x002626D4: lui         $a0, 0x26
    ctx->r4 = S32(0X26 << 16);
    // 0x002626D8: addiu       $a0, $a0, 0x2B58
    ctx->r4 = ADD32(ctx->r4, 0X2B58);
    // 0x002626DC: sw          $v0, 0x104($a1)
    MEM_W(0X104, ctx->r5) = ctx->r2;
    // 0x002626E0: jr          $ra
    // 0x002626E4: sw          $a0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r4;
    return;
    // 0x002626E4: sw          $a0, 0x108($a1)
    MEM_W(0X108, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_00452314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0040DDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DDB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0040DDB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040DDBC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040DDC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0040DDC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040DDC8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0040DDCC: beq         $v1, $zero, L_0040DE54
    if (ctx->r3 == 0) {
        // 0x0040DDD0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0040DE54;
    }
    // 0x0040DDD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040DDD4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x0040DDD8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x0040DDDC: bltzl       $v0, L_0040DDE4
    if (SIGNED(ctx->r2) < 0) {
        // 0x0040DDE0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0040DDE4;
    }
    goto skip_0;
    // 0x0040DDE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_0040DDE4:
    // 0x0040DDE4: lwc1        $f1, 0x118($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X118);
    // 0x0040DDE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0040DDEC: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x0040DDF0: nop

    // 0x0040DDF4: bc1f        L_0040DE3C
    if (!c1cs) {
        // 0x0040DDF8: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0040DE3C;
    }
    // 0x0040DDF8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0040DDFC: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040DE00: addiu       $a1, $a1, 0x2464
    ctx->r5 = ADD32(ctx->r5, 0X2464);
    // 0x0040DE04: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0040DE08: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040DE0C: lwc1        $f0, 0x908($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X908);
    // 0x0040DE10: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x0040DE14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040DE18: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0040DE1C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040DE20: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0040DE24: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    // 0x0040DE28: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040DE2C: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x0040DE30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040DE34: jal         0x00236314
    // 0x0040DE38: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040DE38: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    after_0:
L_0040DE3C:
    // 0x0040DE3C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0040DE40: bne         $v0, $zero, L_0040DE54
    if (ctx->r2 != 0) {
        // 0x0040DE44: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040DE54;
    }
    // 0x0040DE44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040DE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040DE4C: jal         0x00243414
    // 0x0040DE50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040DE50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
L_0040DE54:
    // 0x0040DE54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0040DE58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040DE5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040DE60: jr          $ra
    // 0x0040DE64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0040DE64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004151B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004151B4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x004151B8: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x004151BC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x004151C0: slti        $t1, $a1, 0x12
    ctx->r9 = SIGNED(ctx->r5) < 0X12 ? 1 : 0;
    // 0x004151C4: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x004151C8: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x004151CC: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x004151D0: lui         $t5, 0x8
    ctx->r13 = S32(0X8 << 16);
    // 0x004151D4: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x004151D8: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x004151DC: lui         $t2, 0x10
    ctx->r10 = S32(0X10 << 16);
    // 0x004151E0: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x004151E4: lui         $t0, 0x180
    ctx->r8 = S32(0X180 << 16);
    // 0x004151E8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004151EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004151F0: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x004151F4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x004151F8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x004151FC: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
L_00415200:
    // 0x00415200: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00415204: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x00415208: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x0041520C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x00415210: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x00415214: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00415218: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x0041521C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00415220: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00415224: bgez        $v1, L_0041523C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00415228: nop
    
            goto L_0041523C;
    }
    // 0x00415228: nop

    // 0x0041522C: lhu         $v0, 0x12($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X12);
    // 0x00415230: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00415234: j           L_0041524C
    // 0x00415238: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
        goto L_0041524C;
    // 0x00415238: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
L_0041523C:
    // 0x0041523C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x00415240: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00415244: beql        $v0, $zero, L_0041524C
    if (ctx->r2 == 0) {
        // 0x00415248: sh          $zero, 0x0($a3)
        MEM_H(0X0, ctx->r7) = 0;
            goto L_0041524C;
    }
    goto skip_0;
    // 0x00415248: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    skip_0:
L_0041524C:
    // 0x0041524C: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x00415250: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x00415254: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00415258: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041525C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00415260: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00415264: beq         $a1, $t9, L_004152B4
    if (ctx->r5 == ctx->r25) {
        // 0x00415268: subu        $a2, $a2, $v0
        ctx->r6 = SUB32(ctx->r6, ctx->r2);
            goto L_004152B4;
    }
    // 0x00415268: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x0041526C: beq         $t1, $zero, L_00415284
    if (ctx->r9 == 0) {
        // 0x00415270: nop
    
            goto L_00415284;
    }
    // 0x00415270: nop

    // 0x00415274: beq         $a1, $t8, L_0041529C
    if (ctx->r5 == ctx->r24) {
        // 0x00415278: nop
    
            goto L_0041529C;
    }
    // 0x00415278: nop

    // 0x0041527C: j           L_004152F4
    // 0x00415280: nop

        goto L_004152F4;
    // 0x00415280: nop

L_00415284:
    // 0x00415284: beq         $a1, $t7, L_004152CC
    if (ctx->r5 == ctx->r15) {
        // 0x00415288: nop
    
            goto L_004152CC;
    }
    // 0x00415288: nop

    // 0x0041528C: beq         $a1, $t6, L_004152E4
    if (ctx->r5 == ctx->r14) {
        // 0x00415290: nop
    
            goto L_004152E4;
    }
    // 0x00415290: nop

    // 0x00415294: j           L_004152F4
    // 0x00415298: nop

        goto L_004152F4;
    // 0x00415298: nop

L_0041529C:
    // 0x0041529C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152A0: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x004152A4: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152A8: sb          $a2, 0x11($a0)
        MEM_B(0X11, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_1;
    // 0x004152A8: sb          $a2, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r6;
    skip_1:
    // 0x004152AC: j           L_004152F4
    // 0x004152B0: nop

        goto L_004152F4;
    // 0x004152B0: nop

L_004152B4:
    // 0x004152B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152B8: and         $v0, $v0, $t4
    ctx->r2 = ctx->r2 & ctx->r12;
    // 0x004152BC: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152C0: sb          $a2, 0x10($a0)
        MEM_B(0X10, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_2;
    // 0x004152C0: sb          $a2, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r6;
    skip_2:
    // 0x004152C4: j           L_004152F4
    // 0x004152C8: nop

        goto L_004152F4;
    // 0x004152C8: nop

L_004152CC:
    // 0x004152CC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152D0: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x004152D4: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152D8: sb          $a2, 0x13($a0)
        MEM_B(0X13, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_3;
    // 0x004152D8: sb          $a2, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r6;
    skip_3:
    // 0x004152DC: j           L_004152F4
    // 0x004152E0: nop

        goto L_004152F4;
    // 0x004152E0: nop

L_004152E4:
    // 0x004152E4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152E8: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x004152EC: bnel        $v0, $zero, L_004152F4
    if (ctx->r2 != 0) {
        // 0x004152F0: sb          $a2, 0x12($a0)
        MEM_B(0X12, ctx->r4) = ctx->r6;
            goto L_004152F4;
    }
    goto skip_4;
    // 0x004152F0: sb          $a2, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r6;
    skip_4:
L_004152F4:
    // 0x004152F4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004152F8: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x004152FC: bne         $v0, $t0, L_00415200
    if (ctx->r2 != ctx->r8) {
        // 0x00415300: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00415200;
    }
    // 0x00415300: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00415304: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00415308: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0041530C: beq         $v0, $zero, L_00415200
    if (ctx->r2 == 0) {
        // 0x00415310: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00415200;
    }
    // 0x00415310: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00415314: jr          $ra
    // 0x00415318: nop

    return;
    // 0x00415318: nop

;}
RECOMP_FUNC void func_00216964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00216964: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00216968: lwc1        $f1, 0x596C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X596C);
    // 0x0021696C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00216970: c.eq.s      $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f12.fl == ctx->f1.fl;
    // 0x00216974: nop

    // 0x00216978: bc1f        L_00216988
    if (!c1cs) {
        // 0x0021697C: nop
    
            goto L_00216988;
    }
    // 0x0021697C: nop

L_00216980:
    // 0x00216980: jr          $ra
    // 0x00216984: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    return;
    // 0x00216984: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_00216988:
    // 0x00216988: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021698C: lwc1        $f0, 0x5970($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5970);
    // 0x00216990: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x00216994: nop

    // 0x00216998: bc1t        L_00216980
    if (c1cs) {
        // 0x0021699C: nop
    
            goto L_00216980;
    }
    // 0x0021699C: nop

    // 0x002169A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002169A4: lwc1        $f1, 0x5974($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5974);
    // 0x002169A8: div.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    // 0x002169AC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002169B0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x002169B4: nop

    // 0x002169B8: bc1f        L_002169D0
    if (!c1cs) {
        // 0x002169BC: nop
    
            goto L_002169D0;
    }
    // 0x002169BC: nop

    // 0x002169C0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002169C4: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002169C8: j           L_002169F4
    // 0x002169CC: nop

        goto L_002169F4;
    // 0x002169CC: nop

L_002169D0:
    // 0x002169D0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002169D4: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002169D8: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002169DC: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002169E0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002169E4: nop

    // 0x002169E8: bc1t        L_002169FC
    if (c1cs) {
        // 0x002169EC: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_002169FC;
    }
    // 0x002169EC: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x002169F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_002169F4:
    // 0x002169F4: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x002169F8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
L_002169FC:
    // 0x002169FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00216A00: lwc1        $f0, -0x34B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X34B0);
    // 0x00216A04: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00216A08: nop

    // 0x00216A0C: bc1fl       L_00216A1C
    if (!c1cs) {
            // 0x00216A10: div.s       $f1, $f12, $f14
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f1.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    func_00216A1C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00216A10: div.s       $f1, $f12, $f14
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f1.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    skip_0:
    // 0x00216A14: jr          $ra
    // 0x00216A18: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x00216A18: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_002858A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002858A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002858A8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002858AC: addiu       $a0, $a0, 0x6758
    ctx->r4 = ADD32(ctx->r4, 0X6758);
    // 0x002858B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002858B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002858B8: jal         0x0029B820
    // 0x002858BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x002858BC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002858C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002858C4: jr          $ra
    // 0x002858C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002858C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004198DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004198DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004198E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004198E4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004198E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004198EC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x004198F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004198F4: jal         0x00275904
    // 0x004198F8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_00275904(rdram, ctx);
        goto after_0;
    // 0x004198F8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x004198FC: jal         0x002759B4
    // 0x00419900: nop

    func_002759B4(rdram, ctx);
        goto after_1;
    // 0x00419900: nop

    after_1:
    // 0x00419904: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00419908: lw          $a0, 0x1F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F78);
    // 0x0041990C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00419910: sw          $v0, 0x1F70($at)
    MEM_W(0X1F70, ctx->r1) = ctx->r2;
    // 0x00419914: jal         0x002759C4
    // 0x00419918: nop

    func_002759C4(rdram, ctx);
        goto after_2;
    // 0x00419918: nop

    after_2:
    // 0x0041991C: jal         0x0027598C
    // 0x00419920: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0027598C(rdram, ctx);
        goto after_3;
    // 0x00419920: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x00419924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00419928: sw          $zero, 0x1F74($at)
    MEM_W(0X1F74, ctx->r1) = 0;
    // 0x0041992C: jal         0x00285CC4
    // 0x00419930: nop

    func_00285CC4(rdram, ctx);
        goto after_4;
    // 0x00419930: nop

    after_4:
    // 0x00419934: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00419938: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0041993C: addiu       $a2, $a2, -0x6B4C
    ctx->r6 = ADD32(ctx->r6, -0X6B4C);
    // 0x00419940: jal         0x00416894
    // 0x00419944: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00416894(rdram, ctx);
        goto after_5;
    // 0x00419944: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00419948: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041994C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419958: jr          $ra
    // 0x0041995C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041995C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00235AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235AD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00235AD4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00235AD8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00235ADC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00235AE0: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00235AE4: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x00235AE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235AEC: lwc1        $f20, 0x6508($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6508);
    // 0x00235AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00235AF4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x00235AF8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00235AFC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x00235B00: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x00235B04: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00235B08: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x00235B0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00235B10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00235B14: jal         0x0020EFDC
    // 0x00235B18: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_0;
    // 0x00235B18: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x00235B1C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00235B20: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00235B24: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00235B28: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00235B2C: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00235B30: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00235B34: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00235B38: jal         0x00298470
    // 0x00235B3C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x00235B3C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_1:
    // 0x00235B40: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00235B44: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x00235B48: nop

    // 0x00235B4C: bc1f        L_00235B68
    if (!c1cs) {
        // 0x00235B50: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00235B68;
    }
    // 0x00235B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00235B54: swc1        $f1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00235B58: swc1        $f1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00235B5C: swc1        $f1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00235B60: j           L_00235BF4
    // 0x00235B64: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
        goto L_00235BF4;
    // 0x00235B64: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
L_00235B68:
    // 0x00235B68: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00235B6C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00235B70: jal         0x0020EF60
    // 0x00235B74: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_2;
    // 0x00235B74: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_2:
    // 0x00235B78: lwc1        $f2, 0x10($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X10);
    // 0x00235B7C: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x00235B80: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00235B84: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x00235B88: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x00235B8C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00235B90: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x00235B94: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x00235B98: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00235B9C: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x00235BA0: jal         0x0021153C
    // 0x00235BA4: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    func_0021153C(rdram, ctx);
        goto after_3;
    // 0x00235BA4: add.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f12.fl;
    after_3:
    // 0x00235BA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00235BAC: lwc1        $f1, 0x650C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X650C);
    // 0x00235BB0: mul.s       $f20, $f0, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00235BB4: jal         0x002982F0
    // 0x00235BB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x00235BB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x00235BBC: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x00235BC0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00235BC4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00235BC8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00235BCC: lwc1        $f1, 0x28($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x00235BD0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00235BD4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00235BD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00235BDC: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00235BE0: swc1        $f3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00235BE4: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x00235BE8: jal         0x002974C0
    // 0x00235BEC: swc1        $f1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x00235BEC: swc1        $f1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_5:
    // 0x00235BF0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_00235BF4:
    // 0x00235BF4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x00235BF8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x00235BFC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x00235C00: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x00235C04: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x00235C08: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x00235C0C: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x00235C10: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    // 0x00235C14: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x00235C18: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00235C1C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00235C20: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00235C24: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x00235C28: jr          $ra
    // 0x00235C2C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00235C2C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_00259F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259F14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259F18: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259F1C: lhu         $a3, 0x92($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X92);
    // 0x00259F20: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259F24: addiu       $a2, $a2, -0x7C0
    ctx->r6 = ADD32(ctx->r6, -0X7C0);
    // 0x00259F28: jal         0x00245A98
    // 0x00259F2C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259F2C: nop

    after_0:
    // 0x00259F30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259F34: jr          $ra
    // 0x00259F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00468788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00468788: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x0046878C: addiu       $a2, $a2, 0x56B0
    ctx->r6 = ADD32(ctx->r6, 0X56B0);
    // 0x00468790: lw          $v0, 0x1B4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1B4);
    // 0x00468794: blez        $v0, L_00468844
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00468798: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00468844;
    }
    // 0x00468798: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0046879C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x004687A0: lw          $a3, 0x6D20($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D20);
    // 0x004687A4: lui         $t3, 0x1234
    ctx->r11 = S32(0X1234 << 16);
    // 0x004687A8: ori         $t3, $t3, 0x5678
    ctx->r11 = ctx->r11 | 0X5678;
    // 0x004687AC: lui         $t2, 0x8765
    ctx->r10 = S32(0X8765 << 16);
    // 0x004687B0: ori         $t2, $t2, 0x4321
    ctx->r10 = ctx->r10 | 0X4321;
    // 0x004687B4: lui         $t1, 0x1234
    ctx->r9 = S32(0X1234 << 16);
    // 0x004687B8: ori         $t1, $t1, 0x8765
    ctx->r9 = ctx->r9 | 0X8765;
    // 0x004687BC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x004687C0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_004687C4:
    // 0x004687C4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004687C8: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004687CC: mflo        $t4
    ctx->r12 = lo;
    // 0x004687D0: nop

    // 0x004687D4: nop

    // 0x004687D8: mult        $t4, $t3
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004687DC: lw          $v1, 0x1C4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C4);
    // 0x004687E0: mflo        $t4
    ctx->r12 = lo;
    // 0x004687E4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x004687E8: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x004687EC: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x004687F0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004687F4: mflo        $t4
    ctx->r12 = lo;
    // 0x004687F8: nop

    // 0x004687FC: nop

    // 0x00468800: mult        $t4, $t2
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468804: mflo        $t4
    ctx->r12 = lo;
    // 0x00468808: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0046880C: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
    // 0x00468810: lw          $v0, 0x114($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X114);
    // 0x00468814: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468818: mflo        $t4
    ctx->r12 = lo;
    // 0x0046881C: nop

    // 0x00468820: nop

    // 0x00468824: mult        $t4, $t1
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468828: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0046882C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x00468830: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00468834: mflo        $t4
    ctx->r12 = lo;
    // 0x00468838: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x0046883C: bne         $v0, $zero, L_004687C4
    if (ctx->r2 != 0) {
        // 0x00468840: sw          $v1, 0x1C4($a2)
        MEM_W(0X1C4, ctx->r6) = ctx->r3;
            goto L_004687C4;
    }
    // 0x00468840: sw          $v1, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r3;
L_00468844:
    // 0x00468844: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00468848: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x0046884C: lw          $v0, 0x194($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X194);
    // 0x00468850: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468854: mflo        $t4
    ctx->r12 = lo;
    // 0x00468858: lui         $v0, 0x8765
    ctx->r2 = S32(0X8765 << 16);
    // 0x0046885C: ori         $v0, $v0, 0x1234
    ctx->r2 = ctx->r2 | 0X1234;
    // 0x00468860: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00468864: lw          $v0, 0x1C4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C4);
    // 0x00468868: mflo        $t4
    ctx->r12 = lo;
    // 0x0046886C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x00468870: jr          $ra
    // 0x00468874: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
    return;
    // 0x00468874: sw          $v0, 0x1C4($a2)
    MEM_W(0X1C4, ctx->r6) = ctx->r2;
;}
