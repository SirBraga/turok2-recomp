#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0026609C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026609C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002660A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002660A4: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x002660A8: beq         $v0, $zero, L_002660C4
    if (ctx->r2 == 0) {
        // 0x002660AC: nop
    
            goto L_002660C4;
    }
    // 0x002660AC: nop

    // 0x002660B0: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002660B4: beq         $v0, $zero, L_002660C4
    if (ctx->r2 == 0) {
        // 0x002660B8: nop
    
            goto L_002660C4;
    }
    // 0x002660B8: nop

    // 0x002660BC: jalr        $v0
    // 0x002660C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x002660C0: nop

    after_0:
L_002660C4:
    // 0x002660C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002660C8: jr          $ra
    // 0x002660CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002660CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00236EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236EA0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00236EA4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x00236EA8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00236EAC: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x00236EB0: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00236EB4: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x00236EB8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00236EBC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00236EC0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00236EC4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x00236EC8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x00236ECC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x00236ED0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
        turok2_patch_restore_resource_table(rdram, ctx);

    // 0x00236ED4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00236ED8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00236EDC: beq         $v1, $v0, L_00236F00
    if (ctx->r3 == ctx->r2) {
        // 0x00236EE0: addu        $s5, $a2, $zero
        ctx->r21 = ADD32(ctx->r6, 0);
            goto L_00236F00;
    }
    // 0x00236EE0: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00236EE4: sll         $v0, $s5, 3
    ctx->r2 = S32(ctx->r21 << 3);
    // 0x00236EE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00236EEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00236EF0: lw          $v0, -0x2F7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F7C);
    // 0x00236EF4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00236EF8: beq         $v0, $zero, L_00237244
    if (ctx->r2 == 0) {
        // 0x00236EFC: nop
    
            goto L_00237244;
    }
    // 0x00236EFC: nop

L_00236F00:
    // 0x00236F00: sll         $a2, $s5, 3
    ctx->r6 = S32(ctx->r21 << 3);
    // 0x00236F04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00236F08: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00236F0C: lw          $v1, -0x2F7C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X2F7C);
    // 0x00236F10: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00236F14: bne         $v0, $zero, L_00236F9C
    if (ctx->r2 != 0) {
        // 0x00236F18: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_00236F9C;
    }
    // 0x00236F18: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x00236F1C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00236F20: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x00236F24: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x00236F28: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x00236F2C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00236F30: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00236F34: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x00236F38: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00236F3C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x00236F40: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00236F44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00236F48: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00236F4C: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x00236F50: beq         $v0, $zero, L_00237244
    if (ctx->r2 == 0) {
        // 0x00236F54: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00237244;
    }
    // 0x00236F54: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00236F58: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00236F5C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00236F60: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00236F64: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00236F68: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00236F6C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00236F70: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x00236F74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00236F78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00236F7C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x00236F80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00236F84: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00236F88: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00236F8C: jalr        $v0
    // 0x00236F90: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_0;
    // 0x00236F90: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_0:
    // 0x00236F94: j           L_00237244
    // 0x00236F98: nop

        goto L_00237244;
    // 0x00236F98: nop

L_00236F9C:
    // 0x00236F9C: beq         $v0, $zero, L_002370F8
    if (ctx->r2 == 0) {
        // 0x00236FA0: nop
    
            goto L_002370F8;
    }
    // 0x00236FA0: nop

    // 0x00236FA4: lw          $s2, 0xE8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XE8);
    // 0x00236FA8: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x00236FAC: blez        $s2, L_0023704C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00236FB0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0023704C;
    }
    // 0x00236FB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00236FB4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00236FB8: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_00236FBC:
    // 0x00236FBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00236FC0: beql        $a0, $s4, L_00237040
    if (ctx->r4 == ctx->r20) {
        // 0x00236FC4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00237040;
    }
    goto skip_0;
    // 0x00236FC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00236FC8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00236FCC: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x00236FD0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x00236FD4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x00236FD8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00236FDC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00236FE0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x00236FE4: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00236FE8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x00236FEC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00236FF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00236FF4: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00236FF8: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x00236FFC: beq         $v0, $zero, L_0023703C
    if (ctx->r2 == 0) {
        // 0x00237000: addu        $a1, $s6, $zero
        ctx->r5 = ADD32(ctx->r22, 0);
            goto L_0023703C;
    }
    // 0x00237000: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00237004: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00237008: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x0023700C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00237010: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00237014: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00237018: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x0023701C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00237020: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237024: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x00237028: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0023702C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00237030: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00237034: jalr        $v0
    // 0x00237038: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_1;
    // 0x00237038: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_1:
L_0023703C:
    // 0x0023703C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00237040:
    // 0x00237040: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00237044: bne         $v0, $zero, L_00236FBC
    if (ctx->r2 != 0) {
        // 0x00237048: addiu       $s1, $s1, 0x288
        ctx->r17 = ADD32(ctx->r17, 0X288);
            goto L_00236FBC;
    }
    // 0x00237048: addiu       $s1, $s1, 0x288
    ctx->r17 = ADD32(ctx->r17, 0X288);
L_0023704C:
    // 0x0023704C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00237050: lw          $s0, -0x6770($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6770);
    // 0x00237054: beq         $s0, $zero, L_00237244
    if (ctx->r16 == 0) {
        // 0x00237058: sll         $s1, $s5, 3
        ctx->r17 = S32(ctx->r21 << 3);
            goto L_00237244;
    }
    // 0x00237058: sll         $s1, $s5, 3
    ctx->r17 = S32(ctx->r21 << 3);
L_0023705C:
    // 0x0023705C: beq         $s0, $s4, L_002370E4
    if (ctx->r16 == ctx->r20) {
        // 0x00237060: addiu       $v0, $s0, 0x288
        ctx->r2 = ADD32(ctx->r16, 0X288);
            goto L_002370E4;
    }
    // 0x00237060: addiu       $v0, $s0, 0x288
    ctx->r2 = ADD32(ctx->r16, 0X288);
    // 0x00237064: beq         $v0, $s4, L_002370E4
    if (ctx->r2 == ctx->r20) {
        // 0x00237068: nop
    
            goto L_002370E4;
    }
    // 0x00237068: nop

    // 0x0023706C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x00237070: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x00237074: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x00237078: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x0023707C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00237080: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00237084: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x00237088: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x0023708C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x00237090: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00237094: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237098: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x0023709C: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x002370A0: beq         $v0, $zero, L_002370E4
    if (ctx->r2 == 0) {
        // 0x002370A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002370E4;
    }
    // 0x002370A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002370A8: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x002370AC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x002370B0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x002370B4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x002370B8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x002370BC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x002370C0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x002370C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x002370C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x002370CC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x002370D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002370D4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x002370D8: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x002370DC: jalr        $v0
    // 0x002370E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_2;
    // 0x002370E0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_2:
L_002370E4:
    // 0x002370E4: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x002370E8: beq         $s0, $zero, L_00237244
    if (ctx->r16 == 0) {
        // 0x002370EC: nop
    
            goto L_00237244;
    }
    // 0x002370EC: nop

    // 0x002370F0: j           L_0023705C
    // 0x002370F4: nop

        goto L_0023705C;
    // 0x002370F4: nop

L_002370F8:
    // 0x002370F8: lw          $s2, 0xDF8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XDF8);
    // 0x002370FC: blez        $s2, L_002371A0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x00237100: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_002371A0;
    }
    // 0x00237100: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00237104: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00237108: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_0023710C:
    // 0x0023710C: lw          $a0, 0xBF8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XBF8);
    // 0x00237110: beql        $a0, $s4, L_00237194
    if (ctx->r4 == ctx->r20) {
        // 0x00237114: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00237194;
    }
    goto skip_1;
    // 0x00237114: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x00237118: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x0023711C: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x00237120: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x00237124: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x00237128: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x0023712C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00237130: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x00237134: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x00237138: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x0023713C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00237140: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237144: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00237148: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x0023714C: beql        $v0, $zero, L_00237194
    if (ctx->r2 == 0) {
        // 0x00237150: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00237194;
    }
    goto skip_2;
    // 0x00237150: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x00237154: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00237158: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x0023715C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00237160: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00237164: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00237168: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x0023716C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x00237170: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x00237174: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237178: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x0023717C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237180: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00237184: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00237188: jalr        $v0
    // 0x0023718C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_3;
    // 0x0023718C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_3:
    // 0x00237190: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00237194:
    // 0x00237194: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00237198: bne         $v0, $zero, L_0023710C
    if (ctx->r2 != 0) {
        // 0x0023719C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0023710C;
    }
    // 0x0023719C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_002371A0:
    // 0x002371A0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x002371A4: lw          $s0, -0x6770($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6770);
    // 0x002371A8: beq         $s0, $zero, L_00237244
    if (ctx->r16 == 0) {
        // 0x002371AC: sll         $s1, $s5, 3
        ctx->r17 = S32(ctx->r21 << 3);
            goto L_00237244;
    }
    // 0x002371AC: sll         $s1, $s5, 3
    ctx->r17 = S32(ctx->r21 << 3);
L_002371B0:
    // 0x002371B0: beq         $s0, $s4, L_00237238
    if (ctx->r16 == ctx->r20) {
        // 0x002371B4: addiu       $v0, $s0, 0x288
        ctx->r2 = ADD32(ctx->r16, 0X288);
            goto L_00237238;
    }
    // 0x002371B4: addiu       $v0, $s0, 0x288
    ctx->r2 = ADD32(ctx->r16, 0X288);
    // 0x002371B8: beq         $v0, $s4, L_00237238
    if (ctx->r2 == ctx->r20) {
        // 0x002371BC: nop
    
            goto L_00237238;
    }
    // 0x002371BC: nop

    // 0x002371C0: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x002371C4: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x002371C8: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x002371CC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x002371D0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x002371D4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x002371D8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x002371DC: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x002371E0: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x002371E4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x002371E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002371EC: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x002371F0: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    // 0x002371F4: beq         $v0, $zero, L_00237238
    if (ctx->r2 == 0) {
        // 0x002371F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00237238;
    }
    // 0x002371F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002371FC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00237200: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00237204: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x00237208: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0023720C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00237210: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00237214: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x00237218: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0023721C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00237220: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x00237224: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00237228: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x0023722C: lw          $v0, -0x2F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F80);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00237230: jalr        $v0
    // 0x00237234: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_4;
    // 0x00237234: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
L_00237238:
    // 0x00237238: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x0023723C: bne         $s0, $zero, L_002371B0
    if (ctx->r16 != 0) {
        // 0x00237240: nop
    
            goto L_002371B0;
    }
    // 0x00237240: nop

L_00237244:
    // 0x00237244: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00237248: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0023724C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x00237250: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x00237254: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00237258: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0023725C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00237260: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00237264: jr          $ra
    // 0x00237268: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00237268: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00201848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201848: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0020184C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x00201850: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00201854: jr          $ra
    // 0x00201858: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    return;
    // 0x00201858: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
;}
RECOMP_FUNC void func_0028D0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D0E0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D0E4: lw          $v0, -0xD70($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD70);
    // 0x0028D0E8: jr          $ra
    // 0x0028D0EC: nop

    return;
    // 0x0028D0EC: nop

;}
RECOMP_FUNC void func_00273E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273E78: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00273E7C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_00273E80:
    // 0x00273E80: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x00273E84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00273E88: bgez        $v0, L_00273E80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00273E8C: addiu       $a0, $a0, 0xCC
        ctx->r4 = ADD32(ctx->r4, 0XCC);
            goto L_00273E80;
    }
    // 0x00273E8C: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, 0XCC);
    // 0x00273E90: jr          $ra
    // 0x00273E94: nop

    return;
    // 0x00273E94: nop

;}
RECOMP_FUNC void func_002A37CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0045511C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C174:
    // 0x0045511C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
L_0041C178:
    // 0x00455120: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00455124: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x00455128: beq         $v0, $zero, L_0045513C
    if (ctx->r2 == 0) {
        // 0x0045512C: nop
    
            goto L_0045513C;
    }
    // 0x0045512C: nop

    // 0x00455130: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00455134: bnel        $v0, $zero, L_0045513C
    if (ctx->r2 != 0) {
        // 0x00455138: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0045513C;
    }
    goto skip_0;
    // 0x00455138: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0045513C:
    // 0x0045513C: lbu         $v1, 0x2E($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2E);
    // 0x00455140: beq         $v1, $zero, L_00455158
    if (ctx->r3 == 0) {
        // 0x00455144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00455158;
    }
    // 0x00455144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455148: beq         $v1, $v0, L_00455168
    if (ctx->r3 == ctx->r2) {
        // 0x0045514C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00455168;
    }
    // 0x0045514C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455150: j           L_0041C178
    // 0x00455154: nop

    entry_0041C178(rdram, ctx);
    return;
    // 0x00455154: nop

L_00455158:
    // 0x00455158: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045515C: addiu       $v0, $v0, 0x3F78
    ctx->r2 = ADD32(ctx->r2, 0X3F78);
    // 0x00455160: j           L_0041C174
    // 0x00455164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_0041C174(rdram, ctx);
    return;
    // 0x00455164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00455168:
    // 0x00455168: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045516C: addiu       $v0, $v0, 0x3F60
    ctx->r2 = ADD32(ctx->r2, 0X3F60);
    // 0x00455170: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00455174: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455178: jr          $ra
    // 0x0045517C: nop

    return;
    // 0x0045517C: nop

;}
RECOMP_FUNC void func_0042F700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F700: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0042F704: beq         $a1, $zero, L_0042F754
    if (ctx->r5 == 0) {
        // 0x0042F708: addiu       $a2, $a1, -0x1
        ctx->r6 = ADD32(ctx->r5, -0X1);
            goto L_0042F754;
    }
    // 0x0042F708: addiu       $a2, $a1, -0x1
    ctx->r6 = ADD32(ctx->r5, -0X1);
    // 0x0042F70C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x0042F710: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x0042F714: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_0042F718:
    // 0x0042F718: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x0042F71C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0042F720: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x0042F724: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0042F728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042F72C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0042F730: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x0042F734: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0042F738: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x0042F73C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0042F740: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x0042F744: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0042F748: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x0042F74C: bne         $a2, $t0, L_0042F718
    if (ctx->r6 != ctx->r8) {
        // 0x0042F750: or          $a3, $a3, $v0
        ctx->r7 = ctx->r7 | ctx->r2;
            goto L_0042F718;
    }
    // 0x0042F750: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_0042F754:
    // 0x0042F754: jr          $ra
    // 0x0042F758: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x0042F758: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_0027BB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BB74: jr          $ra
    // 0x0027BB78: nop

    return;
    // 0x0027BB78: nop

;}
RECOMP_FUNC void func_0026613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026613C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00266140: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00266144: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00266148: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026614C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00266150: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266154: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266158: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026615C: jal         0x00220408
    // 0x00266160: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00266160: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00266164: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00266168: bne         $v0, $v1, L_002661E0
    if (ctx->r2 != ctx->r3) {
        // 0x0026616C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002661E0;
    }
    // 0x0026616C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00266170: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00266174: jal         0x00243414
    // 0x00266178: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x00266178: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    after_1:
    // 0x0026617C: lhu         $v1, 0xB8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB8);
    // 0x00266180: addiu       $v0, $zero, 0x64C
    ctx->r2 = ADD32(0, 0X64C);
    // 0x00266184: beq         $v1, $v0, L_002661B8
    if (ctx->r3 == ctx->r2) {
        // 0x00266188: slti        $v0, $v1, 0x64D
        ctx->r2 = SIGNED(ctx->r3) < 0X64D ? 1 : 0;
            goto L_002661B8;
    }
    // 0x00266188: slti        $v0, $v1, 0x64D
    ctx->r2 = SIGNED(ctx->r3) < 0X64D ? 1 : 0;
    // 0x0026618C: beq         $v0, $zero, L_002661A4
    if (ctx->r2 == 0) {
        // 0x00266190: addiu       $v0, $zero, 0x64B
        ctx->r2 = ADD32(0, 0X64B);
            goto L_002661A4;
    }
    // 0x00266190: addiu       $v0, $zero, 0x64B
    ctx->r2 = ADD32(0, 0X64B);
    // 0x00266194: beq         $v1, $v0, L_002661CC
    if (ctx->r3 == ctx->r2) {
        // 0x00266198: lui         $v1, 0xF7FF
        ctx->r3 = S32(0XF7FF << 16);
            goto L_002661CC;
    }
    // 0x00266198: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x0026619C: j           L_002661EC
    // 0x002661A0: nop

        goto L_002661EC;
    // 0x002661A0: nop

L_002661A4:
    // 0x002661A4: addiu       $v0, $zero, 0x64E
    ctx->r2 = ADD32(0, 0X64E);
    // 0x002661A8: beq         $v1, $v0, L_002661CC
    if (ctx->r3 == ctx->r2) {
        // 0x002661AC: lui         $v1, 0xF7FF
        ctx->r3 = S32(0XF7FF << 16);
            goto L_002661CC;
    }
    // 0x002661AC: lui         $v1, 0xF7FF
    ctx->r3 = S32(0XF7FF << 16);
    // 0x002661B0: j           L_002661EC
    // 0x002661B4: nop

        goto L_002661EC;
    // 0x002661B4: nop

L_002661B8:
    // 0x002661B8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002661BC: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x002661C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002661C4: j           L_002661D4
    // 0x002661C8: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
        goto L_002661D4;
    // 0x002661C8: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
L_002661CC:
    // 0x002661CC: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002661D0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
L_002661D4:
    // 0x002661D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002661D8: j           L_002661EC
    // 0x002661DC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
        goto L_002661EC;
    // 0x002661DC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_002661E0:
    // 0x002661E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002661E4: jal         0x00243414
    // 0x002661E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x002661E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_002661EC:
    // 0x002661EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002661F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002661F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002661F8: jr          $ra
    // 0x002661FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002661FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041CDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CDBC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0041CDC0: lw          $v1, 0x1C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CDC4: beq         $v1, $zero, L_0041CDD0
    if (ctx->r3 == 0) {
        // 0x0041CDC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041CDD0;
    }
    // 0x0041CDC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041CDCC: sw          $v0, 0xBF8($v1)
    MEM_W(0XBF8, ctx->r3) = ctx->r2;
L_0041CDD0:
    // 0x0041CDD0: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CDD4: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x0041CDD8: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x0041CDDC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CDE0: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x0041CDE4: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CDE8: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x0041CDEC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CDF0: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x0041CDF4: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CDF8: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x0041CDFC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CE00: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x0041CE04: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CE08: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041CE0C: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x0041CE10: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041CE14: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CE18: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x0041CE1C: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CE20: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x0041CE24: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CE28: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x0041CE2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041CE30: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041CE34: beq         $v0, $zero, L_0041CE54
    if (ctx->r2 == 0) {
            // 0x0041CE38: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    func_0041CE54(rdram, ctx);
    return;
    }
    // 0x0041CE38: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041CE3C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0041CE40: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x0041CE44: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041CE48: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041CE4C: jr          $ra
    // 0x0041CE50: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
    return;
    // 0x0041CE50: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_00253CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00253CFC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00253D00: bne         $v0, $zero, L_00253D18
    if (ctx->r2 != 0) {
            // 0x00253D04: nop

    func_00253D18(rdram, ctx);
    return;
    }
    // 0x00253D04: nop

    // 0x00253D08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00253D0C: lwc1        $f0, 0x70FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X70FC);
    // 0x00253D10: jr          $ra
    // 0x00253D14: nop

    return;
    // 0x00253D14: nop

;}
RECOMP_FUNC void func_00419AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419AC8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419ACC: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419AD0: addiu       $a2, $a2, -0x3570
    ctx->r6 = ADD32(ctx->r6, -0X3570);
    // 0x00419AD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419AD8: jal         0x00416894
    // 0x00419ADC: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419ADC: nop

    after_0:
    // 0x00419AE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419AE8: jr          $ra
    // 0x00419AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040C518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0040C51C: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x0040C520: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x0040C524: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0040C528: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x0040C52C: sh          $a2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r6;
    // 0x0040C530: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x0040C534: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x0040C538: sb          $zero, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = 0;
    // 0x0040C53C: sb          $zero, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = 0;
    // 0x0040C540: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0040C544: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x0040C548: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x0040C54C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0040C550: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0040C554: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0040C558: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0040C55C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0040C560: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0040C564: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x0040C568: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x0040C56C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x0040C570: jal         0x00236EA0
    // 0x0040C574: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_0;
    // 0x0040C574: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x0040C578: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0040C57C: jr          $ra
    // 0x0040C580: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040C580: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0024CF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024CF58: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x0024CF5C: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x0024CF60: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x0024CF64: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x0024CF68: sdc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X60, ctx->r29);
    // 0x0024CF6C: sdc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X58, ctx->r29);
    // 0x0024CF70: lw          $s1, 0x51C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X51C);
    // 0x0024CF74: beq         $s1, $zero, L_0024D1DC
    if (ctx->r17 == 0) {
        // 0x0024CF78: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_0024D1DC;
    }
    // 0x0024CF78: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0024CF7C: lw          $v1, 0x510($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X510);
    // 0x0024CF80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024CF84: bne         $v1, $v0, L_0024D06C
    if (ctx->r3 != ctx->r2) {
        // 0x0024CF88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0024D06C;
    }
    // 0x0024CF88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0024CF8C: lwc1        $f1, 0xACC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XACC);
    // 0x0024CF90: lwc1        $f0, 0xAD8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAD8);
    // 0x0024CF94: lwc1        $f2, 0xAC8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XAC8);
    // 0x0024CF98: lwc1        $f3, 0xAD4($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0XAD4);
    // 0x0024CF9C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0024CFA0: lwc1        $f4, 0xAB0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XAB0);
    // 0x0024CFA4: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024CFA8: lwc1        $f0, 0xAD0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAD0);
    // 0x0024CFAC: lwc1        $f1, 0xADC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XADC);
    // 0x0024CFB0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024CFB4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0024CFB8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0024CFBC: lwc1        $f1, 0xAE0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAE0);
    // 0x0024CFC0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024CFC4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0024CFC8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0024CFCC: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0024CFD0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0024CFD4: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0024CFD8: lwc1        $f1, 0xAE8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAE8);
    // 0x0024CFDC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024CFE0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0024CFE4: lwc1        $f0, 0xAE4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAE4);
    // 0x0024CFE8: lwc1        $f1, 0xB24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XB24);
    // 0x0024CFEC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024CFF0: lwc1        $f1, 0xAC0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAC0);
    // 0x0024CFF4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024CFF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024CFFC: lwc1        $f1, 0x6CDC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CDC);
    // 0x0024D000: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024D004: nop

    // 0x0024D008: bc1f        L_0024D018
    if (!c1cs) {
        // 0x0024D00C: sub.s       $f2, $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
            goto L_0024D018;
    }
    // 0x0024D00C: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x0024D010: j           L_0024D01C
    // 0x0024D014: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
        goto L_0024D01C;
    // 0x0024D014: swc1        $f1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
L_0024D018:
    // 0x0024D018: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_0024D01C:
    // 0x0024D01C: lw          $t0, 0x40($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X40);
    // 0x0024D020: lw          $t1, 0x44($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X44);
    // 0x0024D024: lw          $t2, 0x48($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X48);
    // 0x0024D028: lw          $t3, 0x4C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4C);
    // 0x0024D02C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0024D030: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0024D034: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0024D038: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x0024D03C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0024D040: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0024D044: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D048: lwc1        $f0, 0x6CE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CE0);
    // 0x0024D04C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x0024D050: lwc1        $f1, 0xB90($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XB90);
    // 0x0024D054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0024D058: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x0024D05C: swc1        $f1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0024D060: lw          $a2, 0x50($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X50);
    // 0x0024D064: j           L_0024D1D4
    // 0x0024D068: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_0024D1D4;
    // 0x0024D068: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0024D06C:
    // 0x0024D06C: bne         $v1, $v0, L_0024D1DC
    if (ctx->r3 != ctx->r2) {
        // 0x0024D070: nop
    
            goto L_0024D1DC;
    }
    // 0x0024D070: nop

    // 0x0024D074: lw          $a0, 0xA64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA64);
    // 0x0024D078: andi        $v0, $a0, 0x200
    ctx->r2 = ctx->r4 & 0X200;
    // 0x0024D07C: beq         $v0, $zero, L_0024D0A8
    if (ctx->r2 == 0) {
        // 0x0024D080: andi        $v0, $a0, 0x100
        ctx->r2 = ctx->r4 & 0X100;
            goto L_0024D0A8;
    }
    // 0x0024D080: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
    // 0x0024D084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D088: lwc1        $f0, -0x1CF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x0024D08C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D090: lwc1        $f1, 0x6CE4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CE4);
    // 0x0024D094: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024D098: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D09C: swc1        $f0, -0x1CF8($at)
    MEM_W(-0X1CF8, ctx->r1) = ctx->f0.u32l;
    // 0x0024D0A0: j           L_0024D118
    // 0x0024D0A4: nop

        goto L_0024D118;
    // 0x0024D0A4: nop

L_0024D0A8:
    // 0x0024D0A8: beq         $v0, $zero, L_0024D0D4
    if (ctx->r2 == 0) {
        // 0x0024D0AC: andi        $v0, $a0, 0x800
        ctx->r2 = ctx->r4 & 0X800;
            goto L_0024D0D4;
    }
    // 0x0024D0AC: andi        $v0, $a0, 0x800
    ctx->r2 = ctx->r4 & 0X800;
    // 0x0024D0B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D0B4: lwc1        $f0, -0x1CF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x0024D0B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D0BC: lwc1        $f1, 0x6CE8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CE8);
    // 0x0024D0C0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0024D0C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D0C8: swc1        $f0, -0x1CF8($at)
    MEM_W(-0X1CF8, ctx->r1) = ctx->f0.u32l;
    // 0x0024D0CC: j           L_0024D118
    // 0x0024D0D0: nop

        goto L_0024D118;
    // 0x0024D0D0: nop

L_0024D0D4:
    // 0x0024D0D4: beq         $v0, $zero, L_0024D0F4
    if (ctx->r2 == 0) {
        // 0x0024D0D8: andi        $v0, $a0, 0x400
        ctx->r2 = ctx->r4 & 0X400;
            goto L_0024D0F4;
    }
    // 0x0024D0D8: andi        $v0, $a0, 0x400
    ctx->r2 = ctx->r4 & 0X400;
    // 0x0024D0DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D0E0: lwc1        $f0, -0x1CF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1CF4);
    // 0x0024D0E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D0E8: lwc1        $f1, 0x6CEC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CEC);
    // 0x0024D0EC: j           L_0024D110
    // 0x0024D0F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
        goto L_0024D110;
    // 0x0024D0F0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
L_0024D0F4:
    // 0x0024D0F4: beq         $v0, $zero, L_0024D118
    if (ctx->r2 == 0) {
        // 0x0024D0F8: nop
    
            goto L_0024D118;
    }
    // 0x0024D0F8: nop

    // 0x0024D0FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D100: lwc1        $f0, -0x1CF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1CF4);
    // 0x0024D104: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D108: lwc1        $f1, 0x6CF0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CF0);
    // 0x0024D10C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
L_0024D110:
    // 0x0024D110: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D114: swc1        $f0, -0x1CF4($at)
    MEM_W(-0X1CF4, ctx->r1) = ctx->f0.u32l;
L_0024D118:
    // 0x0024D118: lwc1        $f21, 0x50($s0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r16, 0X50);
    // 0x0024D11C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D120: lwc1        $f0, -0x1CF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x0024D124: add.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f0.fl;
    // 0x0024D128: jal         0x002982F0
    // 0x0024D12C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x0024D12C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_0:
    // 0x0024D130: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D134: lwc1        $f1, -0x1CF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1CF4);
    // 0x0024D138: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024D13C: lwc1        $f20, 0x4($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0024D140: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0024D144: jal         0x002974C0
    // 0x0024D148: add.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f1.fl;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x0024D148: add.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f1.fl;
    after_1:
    // 0x0024D14C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0024D150: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024D154: lwc1        $f3, -0x1CF4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X1CF4);
    // 0x0024D158: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0024D15C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D160: lwc1        $f1, 0x6CF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6CF4);
    // 0x0024D164: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0024D168: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x0024D16C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x0024D170: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0024D174: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0024D178: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0024D17C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024D180: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x0024D184: add.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f3.fl;
    // 0x0024D188: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x0024D18C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024D190: lwc1        $f0, 0x6CF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CF8);
    // 0x0024D194: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024D198: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x0024D19C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x0024D1A0: lw          $t0, 0x40($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X40);
    // 0x0024D1A4: lw          $t1, 0x44($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X44);
    // 0x0024D1A8: lw          $t2, 0x48($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X48);
    // 0x0024D1AC: lw          $t3, 0x4C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4C);
    // 0x0024D1B0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x0024D1B4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x0024D1B8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0024D1BC: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x0024D1C0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x0024D1C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0024D1C8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x0024D1CC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x0024D1D0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_0024D1D4:
    // 0x0024D1D4: jal         0x00280C94
    // 0x0024D1D8: nop

    func_00280C94(rdram, ctx);
        goto after_2;
    // 0x0024D1D8: nop

    after_2:
L_0024D1DC:
    // 0x0024D1DC: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x0024D1E0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x0024D1E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x0024D1E8: ldc1        $f21, 0x60($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X60);
    // 0x0024D1EC: ldc1        $f20, 0x58($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X58);
    // 0x0024D1F0: jr          $ra
    // 0x0024D1F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x0024D1F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0043F000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004063E4:
    // 0x0043F000: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
L_00406460:
    // 0x0043F004: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
L_004064D8:
    // 0x0043F008: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_00406570:
    // 0x0043F00C: sw          $s4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r20;
    // 0x0043F010: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0043F014: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0043F018: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0043F01C: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
    // 0x0043F020: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0043F024: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x0043F028: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x0043F02C: sw          $s3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r19;
    // 0x0043F030: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x0043F034: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x0043F038: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x0043F03C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043F040: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0043F044: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043F048: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x0043F04C: jal         0x00246108
    // 0x0043F050: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0043F050: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x0043F054: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x0043F058: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x0043F05C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043F060: addiu       $s1, $s1, -0x62C
    ctx->r17 = ADD32(ctx->r17, -0X62C);
    // 0x0043F064: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043F068: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x0043F06C: sw          $s3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r19;
    // 0x0043F070: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0043F074: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043F078: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x0043F07C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0043F080: beq         $a0, $zero, L_0043F338
    if (ctx->r4 == 0) {
        // 0x0043F084: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0043F338;
    }
    // 0x0043F084: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0043F088: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0043F08C: bne         $v1, $v0, L_0043F0C8
    if (ctx->r3 != ctx->r2) {
        // 0x0043F090: nop
    
            goto L_0043F0C8;
    }
    // 0x0043F090: nop

    // 0x0043F094: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x0043F098: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x0043F09C: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x0043F0A0: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x0043F0A4: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x0043F0A8: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x0043F0AC: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x0043F0B0: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x0043F0B4: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x0043F0B8: jal         0x00246310
    // 0x0043F0BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_1;
    // 0x0043F0BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0043F0C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0043F0C4: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
L_0043F0C8:
    // 0x0043F0C8: lw          $t0, 0x5C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X5C);
    // 0x0043F0CC: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
    // 0x0043F0D0: lw          $t2, 0x64($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X64);
    // 0x0043F0D4: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x0043F0D8: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x0043F0DC: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x0043F0E0: beq         $v1, $s3, L_0043F0F0
    if (ctx->r3 == ctx->r19) {
        // 0x0043F0E4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0043F0F0;
    }
    // 0x0043F0E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0043F0E8: bne         $v1, $v0, L_0043F10C
    if (ctx->r3 != ctx->r2) {
        // 0x0043F0EC: addiu       $a0, $sp, 0xA0
        ctx->r4 = ADD32(ctx->r29, 0XA0);
            goto L_0043F10C;
    }
    // 0x0043F0EC: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
L_0043F0F0:
    // 0x0043F0F0: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x0043F0F4: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x0043F0F8: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x0043F0FC: jal         0x00246310
    // 0x0043F100: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00246310(rdram, ctx);
        goto after_2;
    // 0x0043F100: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0043F104: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0043F108: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
L_0043F10C:
    // 0x0043F10C: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x0043F110: jal         0x0020EF2C
    // 0x0043F114: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020EF2C(rdram, ctx);
        goto after_3;
    // 0x0043F114: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_3:
    // 0x0043F118: lwc1        $f0, 0xA0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x0043F11C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0043F120: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x0043F124: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0043F128: jal         0x00298470
    // 0x0043F12C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_4;
    // 0x0043F12C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x0043F130: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F134: lwc1        $f1, 0x4A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4A4);
    // 0x0043F138: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0043F13C: nop

    // 0x0043F140: bc1f        L_0043F338
    if (!c1cs) {
        // 0x0043F144: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_0043F338;
    }
    // 0x0043F144: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0043F148: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043F14C: addiu       $s0, $s0, -0x628
    ctx->r16 = ADD32(ctx->r16, -0X628);
    // 0x0043F150: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0043F154: bne         $a0, $a1, L_0043F1E8
    if (ctx->r4 != ctx->r5) {
        // 0x0043F158: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0043F1E8;
    }
    // 0x0043F158: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0043F15C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F160: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x0043F164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043F168: bne         $v1, $v0, L_0043F180
    if (ctx->r3 != ctx->r2) {
        // 0x0043F16C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043F180;
    }
    // 0x0043F16C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043F170: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043F174: addiu       $v0, $v0, 0xF28
    ctx->r2 = ADD32(ctx->r2, 0XF28);
    // 0x0043F178: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x0043F17C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0043F180:
    // 0x0043F180: bne         $v1, $v0, L_0043F194
    if (ctx->r3 != ctx->r2) {
        // 0x0043F184: nop
    
            goto L_0043F194;
    }
    // 0x0043F184: nop

    // 0x0043F188: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043F18C: addiu       $v0, $v0, 0x1004
    ctx->r2 = ADD32(ctx->r2, 0X1004);
    // 0x0043F190: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0043F194:
    // 0x0043F194: bne         $v1, $a0, L_0043F1A8
    if (ctx->r3 != ctx->r4) {
        // 0x0043F198: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_0043F1A8;
    }
    // 0x0043F198: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0043F19C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043F1A0: addiu       $v0, $v0, 0x1158
    ctx->r2 = ADD32(ctx->r2, 0X1158);
    // 0x0043F1A4: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0043F1A8:
    // 0x0043F1A8: lw          $a0, -0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X60);
    // 0x0043F1AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043F1B0: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x0043F1B4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0043F1B8: jal         0x00243414
    // 0x0043F1BC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x0043F1BC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_5:
    // 0x0043F1C0: lw          $a0, -0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X64);
    // 0x0043F1C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0043F1C8: jal         0x00243414
    // 0x0043F1CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_6;
    // 0x0043F1CC: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_6:
    // 0x0043F1D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043F1D4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0043F1D8: jal         0x00243414
    // 0x0043F1DC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_00243414(rdram, ctx);
        goto after_7;
    // 0x0043F1DC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_7:
    // 0x0043F1E0: j           L_00406570
    // 0x0043F1E4: nop

    entry_00406570(rdram, ctx);
    return;
    // 0x0043F1E4: nop

L_0043F1E8:
    // 0x0043F1E8: bne         $a0, $v0, L_0043F25C
    if (ctx->r4 != ctx->r2) {
        // 0x0043F1EC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0043F25C;
    }
    // 0x0043F1EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0043F1F0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F1F4: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x0043F1F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043F1FC: bne         $v1, $v0, L_0043F214
    if (ctx->r3 != ctx->r2) {
        // 0x0043F200: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043F214;
    }
    // 0x0043F200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043F204: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043F208: addiu       $v0, $v0, 0xF28
    ctx->r2 = ADD32(ctx->r2, 0XF28);
    // 0x0043F20C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x0043F210: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_0043F214:
    // 0x0043F214: bne         $v1, $v0, L_0043F228
    if (ctx->r3 != ctx->r2) {
        // 0x0043F218: nop
    
            goto L_0043F228;
    }
    // 0x0043F218: nop

    // 0x0043F21C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043F220: addiu       $v0, $v0, 0x1004
    ctx->r2 = ADD32(ctx->r2, 0X1004);
    // 0x0043F224: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0043F228:
    // 0x0043F228: bne         $v1, $a1, L_0043F23C
    if (ctx->r3 != ctx->r5) {
        // 0x0043F22C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043F23C;
    }
    // 0x0043F22C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043F230: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0043F234: addiu       $v0, $v0, 0x1158
    ctx->r2 = ADD32(ctx->r2, 0X1158);
    // 0x0043F238: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0043F23C:
    // 0x0043F23C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0043F240: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x0043F244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043F248: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x0043F24C: jal         0x00243414
    // 0x0043F250: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_8;
    // 0x0043F250: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    after_8:
    // 0x0043F254: j           L_00406570
    // 0x0043F258: nop

    entry_00406570(rdram, ctx);
    return;
    // 0x0043F258: nop

L_0043F25C:
    // 0x0043F25C: bne         $a0, $v0, L_0043F33C
    if (ctx->r4 != ctx->r2) {
        // 0x0043F260: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043F33C;
    }
    // 0x0043F260: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0043F264: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F268: lw          $v1, -0xA00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XA00);
    // 0x0043F26C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0043F270: lw          $a1, -0x4B8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4B8);
    // 0x0043F274: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043F278: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0043F27C: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x0043F280: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x0043F284: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043F288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F28C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0043F290: lw          $a0, 0x18F0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X18F0);
    // 0x0043F294: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043F298: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0043F29C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x0043F2A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F2A4: sw          $v1, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = ctx->r3;
    // 0x0043F2A8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0043F2AC: nop

    // 0x0043F2B0: bc1f        L_0043F2E8
    if (!c1cs) {
        // 0x0043F2B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0043F2E8;
    }
    // 0x0043F2B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043F2B8: lw          $v1, -0x3D0($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X3D0);
    // 0x0043F2BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F2C0: sw          $zero, -0xA00($at)
    MEM_W(-0XA00, ctx->r1) = 0;
    // 0x0043F2C4: beq         $v1, $v0, L_0043F2E8
    if (ctx->r3 == ctx->r2) {
        // 0x0043F2C8: addu        $v0, $a1, $v0
        ctx->r2 = ADD32(ctx->r5, ctx->r2);
            goto L_0043F2E8;
    }
    // 0x0043F2C8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x0043F2CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F2D0: sw          $v0, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = ctx->r2;
    // 0x0043F2D4: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x0043F2D8: bne         $v0, $zero, L_0043F2E8
    if (ctx->r2 != 0) {
        // 0x0043F2DC: nop
    
            goto L_0043F2E8;
    }
    // 0x0043F2DC: nop

    // 0x0043F2E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F2E4: sw          $zero, -0x4B8($at)
    MEM_W(-0X4B8, ctx->r1) = 0;
L_0043F2E8:
    // 0x0043F2E8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F2EC: lw          $v1, -0x4B8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4B8);
    // 0x0043F2F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043F2F4: lw          $a0, -0xA00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA00);
    // 0x0043F2F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043F2FC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x0043F300: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0043F304: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F308: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0043F30C: lw          $v1, 0x18F0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X18F0);
    // 0x0043F310: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043F314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043F318: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x0043F31C: addiu       $t3, $t3, -0x5D0
    ctx->r11 = ADD32(ctx->r11, -0X5D0);
    // 0x0043F320: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0043F324: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0043F328: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x0043F32C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x0043F330: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x0043F334: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
L_0043F338:
    // 0x0043F338: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0043F33C:
    // 0x0043F33C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0043F340: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0043F344: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x0043F348: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0043F34C: jal         0x00245BAC
    // 0x0043F350: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00245BAC(rdram, ctx);
        goto after_9;
    // 0x0043F350: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_9:
    // 0x0043F354: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x0043F358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043F35C: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x0043F360: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043F364: addiu       $s1, $s1, -0x5D0
    ctx->r17 = ADD32(ctx->r17, -0X5D0);
    // 0x0043F368: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x0043F36C: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x0043F370: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x0043F374: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x0043F378: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x0043F37C: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x0043F380: jal         0x0020EF2C
    // 0x0043F384: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_0020EF2C(rdram, ctx);
        goto after_10;
    // 0x0043F384: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_10:
    // 0x0043F388: jal         0x0020EAA0
    // 0x0043F38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_11;
    // 0x0043F38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x0043F390: lw          $v1, -0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X58);
    // 0x0043F394: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043F398: beq         $v1, $v0, L_0043F3AC
    if (ctx->r3 == ctx->r2) {
        // 0x0043F39C: mov.s       $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
            goto L_0043F3AC;
    }
    // 0x0043F39C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0043F3A0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0043F3A4: bne         $v1, $v0, L_0043F410
    if (ctx->r3 != ctx->r2) {
        // 0x0043F3A8: nop
    
            goto L_0043F410;
    }
    // 0x0043F3A8: nop

L_0043F3AC:
    // 0x0043F3AC: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0043F3B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F3B4: lwc1        $f0, 0x4A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A8);
    // 0x0043F3B8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0043F3BC: nop

    // 0x0043F3C0: bc1f        L_0043F3D8
    if (!c1cs) {
        // 0x0043F3C4: nop
    
            goto L_0043F3D8;
    }
    // 0x0043F3C4: nop

    // 0x0043F3C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F3CC: lwc1        $f0, 0x4AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4AC);
    // 0x0043F3D0: j           L_004063E4
    // 0x0043F3D4: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    entry_004063E4(rdram, ctx);
    return;
    // 0x0043F3D4: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
L_0043F3D8:
    // 0x0043F3D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F3DC: lwc1        $f0, 0x4B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4B0);
    // 0x0043F3E0: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0043F3E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F3E8: lwc1        $f20, 0x4B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4B4);
    // 0x0043F3EC: jal         0x002982F0
    // 0x0043F3F0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_12;
    // 0x0043F3F0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_12:
    // 0x0043F3F4: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0043F3F8: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0043F3FC: jal         0x002974C0
    // 0x0043F400: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_13;
    // 0x0043F400: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    after_13:
    // 0x0043F404: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0043F408: j           L_00406460
    // 0x0043F40C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    entry_00406460(rdram, ctx);
    return;
    // 0x0043F40C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
L_0043F410:
    // 0x0043F410: lwc1        $f14, -0x41C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, -0X41C);
    // 0x0043F414: lui         $a2, 0x45A0
    ctx->r6 = S32(0X45A0 << 16);
    // 0x0043F418: jal         0x0021160C
    // 0x0043F41C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021160C(rdram, ctx);
        goto after_14;
    // 0x0043F41C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_14:
    // 0x0043F420: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0043F424: jal         0x002982F0
    // 0x0043F428: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_15;
    // 0x0043F428: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_15:
    // 0x0043F42C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0043F430: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x0043F434: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043F438: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0043F43C: jal         0x002974C0
    // 0x0043F440: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_16;
    // 0x0043F440: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    after_16:
    // 0x0043F444: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0043F448: lwc1        $f1, 0x20($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X20);
    // 0x0043F44C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043F450: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F454: lwc1        $f0, 0x4B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4B8);
    // 0x0043F458: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0043F45C: swc1        $f1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043F460: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043F464: addiu       $a0, $a0, -0x61F
    ctx->r4 = ADD32(ctx->r4, -0X61F);
    // 0x0043F468: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0043F46C: beq         $v0, $zero, L_0043F570
    if (ctx->r2 == 0) {
        // 0x0043F470: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043F570;
    }
    // 0x0043F470: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043F474: lw          $v1, -0x9($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X9);
    // 0x0043F478: beq         $v1, $v0, L_0043F570
    if (ctx->r3 == ctx->r2) {
        // 0x0043F47C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_0043F570;
    }
    // 0x0043F47C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0043F480: beq         $v1, $v0, L_0043F570
    if (ctx->r3 == ctx->r2) {
        // 0x0043F484: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0043F570;
    }
    // 0x0043F484: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043F488: lw          $a0, 0x23($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X23);
    // 0x0043F48C: bnel        $a0, $v0, L_0043F564
    if (ctx->r4 != ctx->r2) {
        // 0x0043F490: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043F564;
    }
    goto skip_0;
    // 0x0043F490: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0043F494: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F498: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0043F49C: beq         $v1, $a0, L_0043F4CC
    if (ctx->r3 == ctx->r4) {
        // 0x0043F4A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0043F4CC;
    }
    // 0x0043F4A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043F4A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043F4A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F4AC: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x0043F4B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043F4B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043F4B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0043F4BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F4C0: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x0043F4C4: j           L_004064D8
    // 0x0043F4C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    entry_004064D8(rdram, ctx);
    return;
    // 0x0043F4C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_0043F4CC:
    // 0x0043F4CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F4D0: sw          $zero, -0x608($at)
    MEM_W(-0X608, ctx->r1) = 0;
    // 0x0043F4D4: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_0043F4D8:
    // 0x0043F4D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043F4DC: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x0043F4E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043F4E4: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x0043F4E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043F4EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0043F4F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043F4F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043F4F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043F4FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F500: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x0043F504: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0043F508: bne         $v0, $s0, L_0043F518
    if (ctx->r2 != ctx->r16) {
        // 0x0043F50C: nop
    
            goto L_0043F518;
    }
    // 0x0043F50C: nop

    // 0x0043F510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F514: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_0043F518:
    // 0x0043F518: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043F51C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043F520: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x0043F524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F528: lwc1        $f14, 0x4BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BC);
    // 0x0043F52C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x0043F530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0043F534: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0043F538: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0043F53C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043F540: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x0043F544: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0043F548: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0043F54C: jal         0x002119FC
    // 0x0043F550: nop

    func_002119FC(rdram, ctx);
        goto after_17;
    // 0x0043F550: nop

    after_17:
    // 0x0043F554: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0043F558: nop

    // 0x0043F55C: bc1t        L_0043F4D8
    if (c1cs) {
        // 0x0043F560: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0043F4D8;
    }
    // 0x0043F560: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0043F564:
    // 0x0043F564: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x0043F568: jal         0x00404C44
    // 0x0043F56C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00404C44(rdram, ctx);
        goto after_18;
    // 0x0043F56C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_18:
L_0043F570:
    // 0x0043F570: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x0043F574: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x0043F578: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0043F57C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x0043F580: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x0043F584: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x0043F588: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0043F58C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x0043F590: jr          $ra
    // 0x0043F594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x0043F594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_0022D2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0022D2FC: mtc1        $a3, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r7;
    // 0x0022D300: addiu       $sp, $sp, -0x238
    ctx->r29 = ADD32(ctx->r29, -0X238);
    // 0x0022D304: sw          $s4, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->r20;
    // 0x0022D308: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0022D30C: sw          $s7, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->r23;
    // 0x0022D310: sw          $s6, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r22;
    // 0x0022D314: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0022D318: sw          $ra, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r31;
    // 0x0022D31C: sw          $s5, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->r21;
    // 0x0022D320: sw          $s3, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r19;
    // 0x0022D324: sw          $s2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r18;
    // 0x0022D328: sw          $s1, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->r17;
    // 0x0022D32C: sw          $s0, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->r16;
    // 0x0022D330: sdc1        $f23, 0x230($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X230, ctx->r29);
    // 0x0022D334: sdc1        $f22, 0x228($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X228, ctx->r29);
    // 0x0022D338: sdc1        $f21, 0x220($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X220, ctx->r29);
    // 0x0022D33C: sdc1        $f20, 0x218($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X218, ctx->r29);
    // 0x0022D340: lw          $s5, 0xF8($s4)
    ctx->r21 = MEM_W(ctx->r20, 0XF8);
    // 0x0022D344: beq         $s6, $zero, L_0022D430
    if (ctx->r22 == 0) {
        // 0x0022D348: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_0022D430;
    }
    // 0x0022D348: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0022D34C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0022D350: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0022D354: beq         $v0, $zero, L_0022D3F0
    if (ctx->r2 == 0) {
        // 0x0022D358: addu        $v1, $s5, $zero
        ctx->r3 = ADD32(ctx->r21, 0);
            goto L_0022D3F0;
    }
    // 0x0022D358: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x0022D35C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D360: lwc1        $f0, 0x6250($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6250);
    // 0x0022D364: mov.s       $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    ctx->f4.fl = ctx->f5.fl;
    // 0x0022D368: sub.s       $f1, $f4, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0022D36C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0022D370: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x0022D374: nop

    // 0x0022D378: bc1t        L_0022D3C0
    if (c1cs) {
        // 0x0022D37C: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_0022D3C0;
    }
    // 0x0022D37C: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    // 0x0022D380: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D384: lwc1        $f0, 0x6254($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6254);
    // 0x0022D388: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022D38C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D390: lwc1        $f2, 0x6258($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6258);
    // 0x0022D394: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0022D398: nop

    // 0x0022D39C: bc1t        L_0022D3C0
    if (c1cs) {
        // 0x0022D3A0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_0022D3C0;
    }
    // 0x0022D3A0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x0022D3A4: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x0022D3A8: nop

    // 0x0022D3AC: bc1t        L_0022D3C0
    if (c1cs) {
        // 0x0022D3B0: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_0022D3C0;
    }
    // 0x0022D3B0: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    // 0x0022D3B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D3B8: lwc1        $f0, 0x625C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X625C);
    // 0x0022D3BC: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_0022D3C0:
    // 0x0022D3C0: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x0022D3C4: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0022D3C8: lwc1        $f3, 0x1C($v0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x0022D3CC: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0022D3D0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0022D3D4: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0022D3D8: mul.s       $f4, $f4, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f3.fl);
    // 0x0022D3DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D3E0: lwc1        $f0, 0x6260($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6260);
    // 0x0022D3E4: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0022D3E8: j           L_0022D3F8
    // 0x0022D3EC: nop

        goto L_0022D3F8;
    // 0x0022D3EC: nop

L_0022D3F0:
    // 0x0022D3F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D3F4: lwc1        $f4, 0x6264($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6264);
L_0022D3F8:
    // 0x0022D3F8: lwc1        $f2, 0x6C($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0X6C);
    // 0x0022D3FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D400: lwc1        $f1, 0x6268($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6268);
    // 0x0022D404: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0022D408: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D40C: lwc1        $f0, 0x626C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X626C);
    // 0x0022D410: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022D414: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D418: lwc1        $f0, 0x6270($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6270);
    // 0x0022D41C: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x0022D420: add.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f1.fl;
    // 0x0022D424: mul.s       $f23, $f0, $f2
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f23.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0022D428: j           L_0022D438
    // 0x0022D42C: nop

        goto L_0022D438;
    // 0x0022D42C: nop

L_0022D430:
    // 0x0022D430: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D434: lwc1        $f23, 0x6274($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6274);
L_0022D438:
    // 0x0022D438: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0022D43C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0022D440: beq         $v0, $zero, L_0022D464
    if (ctx->r2 == 0) {
        // 0x0022D444: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0022D464;
    }
    // 0x0022D444: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0022D448: lwc1        $f0, 0x130($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X130);
    // 0x0022D44C: lwc1        $f1, 0x134($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X134);
    // 0x0022D450: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022D454: nop

    // 0x0022D458: mul.s       $f22, $f0, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x0022D45C: j           L_0022D46C
    // 0x0022D460: addiu       $s3, $sp, 0x150
    ctx->r19 = ADD32(ctx->r29, 0X150);
        goto L_0022D46C;
    // 0x0022D460: addiu       $s3, $sp, 0x150
    ctx->r19 = ADD32(ctx->r29, 0X150);
L_0022D464:
    // 0x0022D464: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0022D468: addiu       $s3, $sp, 0x150
    ctx->r19 = ADD32(ctx->r29, 0X150);
L_0022D46C:
    // 0x0022D46C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0022D470: jal         0x0022D09C
    // 0x0022D474: addiu       $a2, $sp, 0x170
    ctx->r6 = ADD32(ctx->r29, 0X170);
    func_0022D09C(rdram, ctx);
        goto after_0;
    // 0x0022D474: addiu       $a2, $sp, 0x170
    ctx->r6 = ADD32(ctx->r29, 0X170);
    after_0:
    // 0x0022D478: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022D47C: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x0022D480: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022D484: bne         $v0, $zero, L_0022D5F8
    if (ctx->r2 != 0) {
        // 0x0022D488: nop
    
            goto L_0022D5F8;
    }
    // 0x0022D488: nop

    // 0x0022D48C: lwc1        $f1, 0x11C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X11C);
    // 0x0022D490: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0022D494: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x0022D498: nop

    // 0x0022D49C: bc1f        L_0022D5F8
    if (!c1cs) {
        // 0x0022D4A0: nop
    
            goto L_0022D5F8;
    }
    // 0x0022D4A0: nop

    // 0x0022D4A4: lw          $v0, 0x2C($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X2C);
    // 0x0022D4A8: lb          $v0, 0x18($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X18);
    // 0x0022D4AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D4B0: lwc1        $f20, 0x6278($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6278);
    // 0x0022D4B4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0022D4B8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0022D4BC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022D4C0: nop

    // 0x0022D4C4: bc1tl       L_0022D4CC
    if (c1cs) {
        // 0x0022D4C8: div.s       $f20, $f1, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
            goto L_0022D4CC;
    }
    goto skip_0;
    // 0x0022D4C8: div.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    skip_0:
L_0022D4CC:
    // 0x0022D4CC: mov.s       $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    ctx->f1.fl = ctx->f21.fl;
    // 0x0022D4D0: lw          $t0, 0x150($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X150);
    // 0x0022D4D4: lw          $t1, 0x154($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X154);
    // 0x0022D4D8: lw          $t2, 0x158($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X158);
    // 0x0022D4DC: sw          $t0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r8;
    // 0x0022D4E0: sw          $t1, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r9;
    // 0x0022D4E4: sw          $t2, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r10;
    // 0x0022D4E8: lwc1        $f0, 0x188($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X188);
    // 0x0022D4EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022D4F0: nop

    // 0x0022D4F4: bc1f        L_0022D568
    if (!c1cs) {
        // 0x0022D4F8: addiu       $s2, $sp, 0x1D0
        ctx->r18 = ADD32(ctx->r29, 0X1D0);
            goto L_0022D568;
    }
    // 0x0022D4F8: addiu       $s2, $sp, 0x1D0
    ctx->r18 = ADD32(ctx->r29, 0X1D0);
    // 0x0022D4FC: addiu       $s1, $sp, 0x1C0
    ctx->r17 = ADD32(ctx->r29, 0X1C0);
    // 0x0022D500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022D504: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x0022D508: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D50C: lwc1        $f0, 0x627C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X627C);
    // 0x0022D510: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0022D514: swc1        $f1, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022D518: swc1        $f1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022D51C: jal         0x0020EFDC
    // 0x0022D520: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_1;
    // 0x0022D520: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0022D524: lwc1        $f12, 0x178($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X178);
    // 0x0022D528: jal         0x002982F0
    // 0x0022D52C: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0022D52C: nop

    after_2:
    // 0x0022D530: lwc1        $f1, 0x188($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X188);
    // 0x0022D534: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0022D538: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022D53C: nop

    // 0x0022D540: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0022D544: addiu       $s0, $sp, 0x1E0
    ctx->r16 = ADD32(ctx->r29, 0X1E0);
    // 0x0022D548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D54C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022D550: jal         0x0020EF60
    // 0x0022D554: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x0022D554: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0022D558: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0022D55C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0022D560: jal         0x0020EEF8
    // 0x0022D564: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_4;
    // 0x0022D564: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
L_0022D568:
    // 0x0022D568: lwc1        $f0, 0x18C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X18C);
    // 0x0022D56C: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x0022D570: nop

    // 0x0022D574: bc1f        L_0022D5F8
    if (!c1cs) {
        // 0x0022D578: addiu       $a1, $sp, 0x160
        ctx->r5 = ADD32(ctx->r29, 0X160);
            goto L_0022D5F8;
    }
    // 0x0022D578: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x0022D57C: addiu       $s0, $sp, 0x1B0
    ctx->r16 = ADD32(ctx->r29, 0X1B0);
    // 0x0022D580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D588: lwc1        $f0, 0x6280($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6280);
    // 0x0022D58C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0022D590: swc1        $f21, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0022D594: swc1        $f21, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x0022D598: jal         0x0020EFDC
    // 0x0022D59C: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_5;
    // 0x0022D59C: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x0022D5A0: addiu       $s1, $sp, 0x1C0
    ctx->r17 = ADD32(ctx->r29, 0X1C0);
    // 0x0022D5A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0022D5A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022D5AC: jal         0x0020EFDC
    // 0x0022D5B0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EFDC(rdram, ctx);
        goto after_6;
    // 0x0022D5B0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0022D5B4: lwc1        $f12, 0x17C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X17C);
    // 0x0022D5B8: jal         0x002982F0
    // 0x0022D5BC: nop

    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0022D5BC: nop

    after_7:
    // 0x0022D5C0: lwc1        $f1, 0x18C($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X18C);
    // 0x0022D5C4: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0022D5C8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022D5CC: nop

    // 0x0022D5D0: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0022D5D4: addiu       $s0, $sp, 0x1E0
    ctx->r16 = ADD32(ctx->r29, 0X1E0);
    // 0x0022D5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D5DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022D5E0: jal         0x0020EF60
    // 0x0022D5E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x0022D5E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x0022D5E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0022D5EC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0022D5F0: jal         0x0020EEF8
    // 0x0022D5F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EEF8(rdram, ctx);
        goto after_9;
    // 0x0022D5F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
L_0022D5F8:
    // 0x0022D5F8: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022D5FC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0022D600: beq         $v0, $zero, L_0022D7A8
    if (ctx->r2 == 0) {
        // 0x0022D604: addiu       $v0, $zero, -0x7
        ctx->r2 = ADD32(0, -0X7);
            goto L_0022D7A8;
    }
    // 0x0022D604: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
    // 0x0022D608: lb          $v1, 0x1AC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X1AC);
    // 0x0022D60C: bne         $v1, $v0, L_0022D77C
    if (ctx->r3 != ctx->r2) {
        // 0x0022D610: nop
    
            goto L_0022D77C;
    }
    // 0x0022D610: nop

    // 0x0022D614: lwc1        $f0, 0x15C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X15C);
    // 0x0022D618: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D61C: lwc1        $f1, 0x6284($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6284);
    // 0x0022D620: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022D624: lw          $a2, 0x160($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X160);
    // 0x0022D628: lw          $a3, 0x164($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X164);
    // 0x0022D62C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022D630: jal         0x0020FE00
    // 0x0022D634: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020FE00(rdram, ctx);
        goto after_10;
    // 0x0022D634: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_10:
    // 0x0022D638: lwc1        $f0, 0x170($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X170);
    // 0x0022D63C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022D640: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022D644: nop

    // 0x0022D648: bc1f        L_0022D698
    if (!c1cs) {
        // 0x0022D64C: nop
    
            goto L_0022D698;
    }
    // 0x0022D64C: nop

    // 0x0022D650: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    // 0x0022D654: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022D658: nop

    // 0x0022D65C: bc1f        L_0022D698
    if (!c1cs) {
        // 0x0022D660: nop
    
            goto L_0022D698;
    }
    // 0x0022D660: nop

    // 0x0022D664: lwc1        $f0, 0x178($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X178);
    // 0x0022D668: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022D66C: nop

    // 0x0022D670: bc1f        L_0022D698
    if (!c1cs) {
        // 0x0022D674: addiu       $s1, $sp, 0x1A0
        ctx->r17 = ADD32(ctx->r29, 0X1A0);
            goto L_0022D698;
    }
    // 0x0022D674: addiu       $s1, $sp, 0x1A0
    ctx->r17 = ADD32(ctx->r29, 0X1A0);
    // 0x0022D678: lw          $t0, 0x150($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X150);
    // 0x0022D67C: lw          $t1, 0x154($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X154);
    // 0x0022D680: lw          $t2, 0x158($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X158);
    // 0x0022D684: sw          $t0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r8;
    // 0x0022D688: sw          $t1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r9;
    // 0x0022D68C: sw          $t2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r10;
    // 0x0022D690: j           L_0022D6B4
    // 0x0022D694: nop

        goto L_0022D6B4;
    // 0x0022D694: nop

L_0022D698:
    // 0x0022D698: lw          $t0, 0x170($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X170);
    // 0x0022D69C: lw          $t1, 0x174($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X174);
    // 0x0022D6A0: lw          $t2, 0x178($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X178);
    // 0x0022D6A4: sw          $t0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r8;
    // 0x0022D6A8: sw          $t1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r9;
    // 0x0022D6AC: sw          $t2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r10;
    // 0x0022D6B0: addiu       $s1, $sp, 0x1A0
    ctx->r17 = ADD32(ctx->r29, 0X1A0);
L_0022D6B4:
    // 0x0022D6B4: jal         0x0020F040
    // 0x0022D6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_11;
    // 0x0022D6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x0022D6BC: addiu       $s0, $sp, 0x180
    ctx->r16 = ADD32(ctx->r29, 0X180);
    // 0x0022D6C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D6C4: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x0022D6C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D6CC: lwc1        $f0, 0x6288($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6288);
    // 0x0022D6D0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0022D6D4: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x0022D6D8: sw          $zero, 0x168($sp)
    MEM_W(0X168, ctx->r29) = 0;
    // 0x0022D6DC: jal         0x0020EFDC
    // 0x0022D6E0: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    func_0020EFDC(rdram, ctx);
        goto after_12;
    // 0x0022D6E0: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x0022D6E4: addiu       $s2, $sp, 0x190
    ctx->r18 = ADD32(ctx->r29, 0X190);
    // 0x0022D6E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0022D6EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022D6F0: jal         0x0020EFDC
    // 0x0022D6F4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EFDC(rdram, ctx);
        goto after_13;
    // 0x0022D6F4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_13:
    // 0x0022D6F8: addiu       $s3, $sp, 0x50
    ctx->r19 = ADD32(ctx->r29, 0X50);
    // 0x0022D6FC: jal         0x0020F79C
    // 0x0022D700: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0020F79C(rdram, ctx);
        goto after_14;
    // 0x0022D700: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_14:
    // 0x0022D704: jal         0x0020F040
    // 0x0022D708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_15;
    // 0x0022D708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x0022D70C: jal         0x0020F040
    // 0x0022D710: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0020F040(rdram, ctx);
        goto after_16;
    // 0x0022D710: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x0022D714: jal         0x0020F040
    // 0x0022D718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_17;
    // 0x0022D718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
    // 0x0022D71C: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x0022D720: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0022D724: lwc1        $f0, 0x180($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X180);
    // 0x0022D728: lwc1        $f1, 0x184($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X184);
    // 0x0022D72C: lwc1        $f2, 0x188($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X188);
    // 0x0022D730: lwc1        $f3, 0x190($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X190);
    // 0x0022D734: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x0022D738: lwc1        $f5, 0x198($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X198);
    // 0x0022D73C: lwc1        $f6, 0x1A0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x0022D740: lwc1        $f7, 0x1A4($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X1A4);
    // 0x0022D744: lwc1        $f8, 0x1A8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x0022D748: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x0022D74C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x0022D750: swc1        $f1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0022D754: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x0022D758: swc1        $f3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x0022D75C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x0022D760: swc1        $f5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0022D764: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x0022D768: swc1        $f7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x0022D76C: jal         0x0020C618
    // 0x0022D770: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    func_0020C618(rdram, ctx);
        goto after_18;
    // 0x0022D770: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    after_18:
    // 0x0022D774: j           L_0022D834
    // 0x0022D778: nop

        goto L_0022D834;
    // 0x0022D778: nop

L_0022D77C:
    // 0x0022D77C: lwc1        $f1, 0x160($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X160);
    // 0x0022D780: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D784: lwc1        $f0, 0x628C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X628C);
    // 0x0022D788: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0022D78C: lw          $a1, 0x15C($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X15C);
    // 0x0022D790: lw          $a3, 0x164($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X164);
    // 0x0022D794: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0022D798: jal         0x0020FE00
    // 0x0022D79C: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    func_0020FE00(rdram, ctx);
        goto after_19;
    // 0x0022D79C: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    after_19:
    // 0x0022D7A0: j           L_0022D834
    // 0x0022D7A4: nop

        goto L_0022D834;
    // 0x0022D7A4: nop

L_0022D7A8:
    // 0x0022D7A8: lwc1        $f0, 0x15C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X15C);
    // 0x0022D7AC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022D7B0: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022D7B4: nop

    // 0x0022D7B8: bc1f        L_0022D7E8
    if (!c1cs) {
        // 0x0022D7BC: addiu       $s0, $sp, 0x90
        ctx->r16 = ADD32(ctx->r29, 0X90);
            goto L_0022D7E8;
    }
    // 0x0022D7BC: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x0022D7C0: lwc1        $f0, 0x160($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X160);
    // 0x0022D7C4: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0022D7C8: nop

    // 0x0022D7CC: bc1f        L_0022D7E8
    if (!c1cs) {
        // 0x0022D7D0: nop
    
            goto L_0022D7E8;
    }
    // 0x0022D7D0: nop

    // 0x0022D7D4: lw          $a1, 0x164($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X164);
    // 0x0022D7D8: jal         0x00210630
    // 0x0022D7DC: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    func_00210630(rdram, ctx);
        goto after_20;
    // 0x0022D7DC: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    after_20:
    // 0x0022D7E0: j           L_0022D834
    // 0x0022D7E4: nop

        goto L_0022D834;
    // 0x0022D7E4: nop

L_0022D7E8:
    // 0x0022D7E8: lw          $a1, 0x164($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X164);
    // 0x0022D7EC: jal         0x00210630
    // 0x0022D7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210630(rdram, ctx);
        goto after_21;
    // 0x0022D7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x0022D7F4: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022D7F8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0022D7FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0022D800: bne         $v0, $zero, L_0022D80C
    if (ctx->r2 != 0) {
        // 0x0022D804: nop
    
            goto L_0022D80C;
    }
    // 0x0022D804: nop

    // 0x0022D808: lwc1        $f0, 0x15C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X15C);
L_0022D80C:
    // 0x0022D80C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0022D810: bne         $v0, $zero, L_0022D81C
    if (ctx->r2 != 0) {
        // 0x0022D814: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_0022D81C;
    }
    // 0x0022D814: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0022D818: lwc1        $f1, 0x160($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X160);
L_0022D81C:
    // 0x0022D81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D820: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0022D824: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022D828: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0022D82C: jal         0x00210284
    // 0x0022D830: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00210284(rdram, ctx);
        goto after_22;
    // 0x0022D830: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_22:
L_0022D834:
    // 0x0022D834: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0022D838: c.eq.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl == ctx->f20.fl;
    // 0x0022D83C: nop

    // 0x0022D840: bc1t        L_0022D87C
    if (c1cs) {
        // 0x0022D844: lui         $a0, 0xFF7F
        ctx->r4 = S32(0XFF7F << 16);
            goto L_0022D87C;
    }
    // 0x0022D844: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
    // 0x0022D848: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x0022D84C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0022D850: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0022D854: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x0022D858: jal         0x00210284
    // 0x0022D85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210284(rdram, ctx);
        goto after_23;
    // 0x0022D85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x0022D860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022D864: neg.s       $f9, $f22
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f9.fl = -ctx->f22.fl;
    // 0x0022D868: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0022D86C: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x0022D870: jal         0x00210318
    // 0x0022D874: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_00210318(rdram, ctx);
        goto after_24;
    // 0x0022D874: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_24:
    // 0x0022D878: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
L_0022D87C:
    // 0x0022D87C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0022D880: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022D884: lbu         $v1, 0x1AC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1AC);
    // 0x0022D888: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0022D88C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x0022D890: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x0022D894: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x0022D898: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x0022D89C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0022D8A0: beq         $v0, $zero, L_0022DA58
    if (ctx->r2 == 0) {
        // 0x0022D8A4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0022DA58;
    }
    // 0x0022D8A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022D8A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D8AC: addu        $at, $at, $v0
    gpr jr_addend_0022D8B4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0022D8B0: lw          $v0, 0x6290($at)
    ctx->r2 = ADD32(ctx->r1, 0X6290);
    // 0x0022D8B4: jr          $v0
    // 0x0022D8B8: nop

    switch (jr_addend_0022D8B4 >> 2) {
        case 0: goto L_0022D8BC; break;
        case 1: goto L_0022DA58; break;
        case 2: goto L_0022DA4C; break;
        case 3: goto L_0022D904; break;
        case 4: goto L_0022DA4C; break;
        case 5: goto L_0022D968; break;
        case 6: goto L_0022D9E8; break;
        case 7: goto L_0022DA4C; break;
        case 8: goto L_0022DA58; break;
        case 9: goto L_0022DA58; break;
        case 10: goto L_0022DA58; break;
        default: switch_error(__func__, 0x0022D8B4, 0x800A6290);
    }
    // 0x0022D8B8: nop

L_0022D8BC:
    // 0x0022D8BC: lwc1        $f1, 0x150($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X150);
    // 0x0022D8C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D8C4: lwc1        $f2, 0x62BC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X62BC);
    // 0x0022D8C8: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0022D8CC: lwc1        $f0, 0x150($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X150);
    // 0x0022D8D0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022D8D4: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x0022D8D8: lwc1        $f1, 0x154($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X154);
    // 0x0022D8DC: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0022D8E0: lwc1        $f0, 0x154($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X154);
    // 0x0022D8E4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022D8E8: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
    // 0x0022D8EC: lwc1        $f1, 0x158($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X158);
    // 0x0022D8F0: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0022D8F4: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x0022D8F8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0022D8FC: j           L_0022DA58
    // 0x0022D900: swc1        $f0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f0.u32l;
        goto L_0022DA58;
    // 0x0022D900: swc1        $f0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f0.u32l;
L_0022D904:
    // 0x0022D904: lb          $v0, 0xA($s5)
    ctx->r2 = MEM_B(ctx->r21, 0XA);
    // 0x0022D908: beq         $v0, $zero, L_0022DA58
    if (ctx->r2 == 0) {
        // 0x0022D90C: nop
    
            goto L_0022DA58;
    }
    // 0x0022D90C: nop

    // 0x0022D910: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x0022D914: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x0022D918: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x0022D91C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D920: lwc1        $f20, 0x62C0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X62C0);
    // 0x0022D924: jal         0x0026BE60
    // 0x0022D928: nop

    func_0026BE60(rdram, ctx);
        goto after_25;
    // 0x0022D928: nop

    after_25:
    // 0x0022D92C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0022D930: lwc1        $f1, 0x154($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X154);
    // 0x0022D934: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022D938: nop

    // 0x0022D93C: bc1f        L_0022D94C
    if (!c1cs) {
        // 0x0022D940: nop
    
            goto L_0022D94C;
    }
    // 0x0022D940: nop

    // 0x0022D944: j           L_0022DA54
    // 0x0022D948: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
        goto L_0022DA54;
    // 0x0022D948: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0022D94C:
    // 0x0022D94C: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x0022D950: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x0022D954: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x0022D958: jal         0x0026BE60
    // 0x0022D95C: nop

    func_0026BE60(rdram, ctx);
        goto after_26;
    // 0x0022D95C: nop

    after_26:
    // 0x0022D960: j           L_0022DA54
    // 0x0022D964: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_0022DA54;
    // 0x0022D964: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
L_0022D968:
    // 0x0022D968: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x0022D96C: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x0022D970: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x0022D974: jal         0x0026BE60
    // 0x0022D978: nop

    func_0026BE60(rdram, ctx);
        goto after_27;
    // 0x0022D978: nop

    after_27:
    // 0x0022D97C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0022D980: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0022D984: beq         $v0, $zero, L_0022D9C0
    if (ctx->r2 == 0) {
        // 0x0022D988: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_0022D9C0;
    }
    // 0x0022D988: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x0022D98C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D990: lwc1        $f0, 0x62C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62C4);
    // 0x0022D994: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0022D998: lwc1        $f1, 0x154($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X154);
    // 0x0022D99C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022D9A0: nop

    // 0x0022D9A4: bc1f        L_0022DA58
    if (!c1cs) {
        // 0x0022D9A8: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_0022DA58;
    }
    // 0x0022D9A8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0022D9AC: swc1        $f2, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f2.u32l;
    // 0x0022D9B0: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022D9B4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0022D9B8: j           L_0022DA58
    // 0x0022D9BC: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
        goto L_0022DA58;
    // 0x0022D9BC: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
L_0022D9C0:
    // 0x0022D9C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022D9C4: lwc1        $f0, 0x62C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62C8);
    // 0x0022D9C8: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0022D9CC: lwc1        $f1, 0x154($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X154);
    // 0x0022D9D0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0022D9D4: nop

    // 0x0022D9D8: bc1fl       L_0022DA54
    if (!c1cs) {
        // 0x0022D9DC: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0022DA54;
    }
    goto skip_1;
    // 0x0022D9DC: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_1:
    // 0x0022D9E0: j           L_0022DA58
    // 0x0022D9E4: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
        goto L_0022DA58;
    // 0x0022D9E4: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
L_0022D9E8:
    // 0x0022D9E8: lb          $v0, 0xA($s5)
    ctx->r2 = MEM_B(ctx->r21, 0XA);
    // 0x0022D9EC: beq         $v0, $zero, L_0022DA58
    if (ctx->r2 == 0) {
        // 0x0022D9F0: nop
    
            goto L_0022DA58;
    }
    // 0x0022D9F0: nop

    // 0x0022D9F4: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x0022D9F8: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x0022D9FC: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x0022DA00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DA04: lwc1        $f20, 0x62CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X62CC);
    // 0x0022DA08: jal         0x00269C3C
    // 0x0022DA0C: nop

    func_00269C3C(rdram, ctx);
        goto after_28;
    // 0x0022DA0C: nop

    after_28:
    // 0x0022DA10: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x0022DA14: lwc1        $f1, 0x154($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X154);
    // 0x0022DA18: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0022DA1C: nop

    // 0x0022DA20: bc1f        L_0022DA30
    if (!c1cs) {
        // 0x0022DA24: nop
    
            goto L_0022DA30;
    }
    // 0x0022DA24: nop

    // 0x0022DA28: j           L_0022DA54
    // 0x0022DA2C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
        goto L_0022DA54;
    // 0x0022DA2C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_0022DA30:
    // 0x0022DA30: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x0022DA34: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x0022DA38: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x0022DA3C: jal         0x00269C3C
    // 0x0022DA40: nop

    func_00269C3C(rdram, ctx);
        goto after_29;
    // 0x0022DA40: nop

    after_29:
    // 0x0022DA44: j           L_0022DA54
    // 0x0022DA48: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
        goto L_0022DA54;
    // 0x0022DA48: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
L_0022DA4C:
    // 0x0022DA4C: lwc1        $f0, 0x154($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X154);
    // 0x0022DA50: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
L_0022DA54:
    // 0x0022DA54: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
L_0022DA58:
    // 0x0022DA58: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x0022DA5C: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x0022DA60: jal         0x0020F510
    // 0x0022DA64: addiu       $a0, $sp, 0x150
    ctx->r4 = ADD32(ctx->r29, 0X150);
    func_0020F510(rdram, ctx);
        goto after_30;
    // 0x0022DA64: addiu       $a0, $sp, 0x150
    ctx->r4 = ADD32(ctx->r29, 0X150);
    after_30:
    // 0x0022DA68: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0022DA6C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0022DA70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022DA74: beq         $v0, $zero, L_0022DAA4
    if (ctx->r2 == 0) {
        // 0x0022DA78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0022DAA4;
    }
    // 0x0022DA78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022DA7C: lb          $v1, 0x8($s5)
    ctx->r3 = MEM_B(ctx->r21, 0X8);
    // 0x0022DA80: bne         $v1, $v0, L_0022DAA4
    if (ctx->r3 != ctx->r2) {
        // 0x0022DA84: nop
    
            goto L_0022DAA4;
    }
    // 0x0022DA84: nop

    // 0x0022DA88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DA8C: lwc1        $f0, 0x62D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62D0);
    // 0x0022DA90: mul.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0022DA94: lbu         $v0, 0x1B4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1B4);
    // 0x0022DA98: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0022DA9C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0022DAA0: mul.s       $f23, $f0, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_0022DAA4:
    // 0x0022DAA4: lw          $v0, 0xF8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XF8);
    // 0x0022DAA8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x0022DAAC: beq         $v0, $zero, L_0022DB08
    if (ctx->r2 == 0) {
        // 0x0022DAB0: addiu       $s0, $sp, 0x90
        ctx->r16 = ADD32(ctx->r29, 0X90);
            goto L_0022DB08;
    }
    // 0x0022DAB0: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x0022DAB4: lwc1        $f0, 0x134($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X134);
    // 0x0022DAB8: mul.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0022DABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DAC0: lwc1        $f1, 0x62D4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X62D4);
    // 0x0022DAC4: mul.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DAC8: lwc1        $f0, 0x12C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X12C);
    // 0x0022DACC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DAD0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022DAD4: lwc1        $f0, 0x130($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X130);
    // 0x0022DAD8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DADC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022DAE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DAE4: lwc1        $f0, 0x62D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62D8);
    // 0x0022DAE8: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022DAEC: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0022DAF0: jal         0x0021034C
    // 0x0022DAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021034C(rdram, ctx);
        goto after_31;
    // 0x0022DAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_31:
    // 0x0022DAF8: jal         0x00210C3C
    // 0x0022DAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210C3C(rdram, ctx);
        goto after_32;
    // 0x0022DAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_32:
    // 0x0022DB00: j           L_0022DB44
    // 0x0022DB04: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
        goto L_0022DB44;
    // 0x0022DB04: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_0022DB08:
    // 0x0022DB08: lwc1        $f0, 0x134($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X134);
    // 0x0022DB0C: mul.s       $f1, $f23, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0022DB10: lwc1        $f0, 0x12C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X12C);
    // 0x0022DB14: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DB18: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022DB1C: lwc1        $f0, 0x130($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X130);
    // 0x0022DB20: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DB24: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0022DB28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DB2C: lwc1        $f0, 0x62DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62DC);
    // 0x0022DB30: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0022DB34: mfc1        $a3, $f1
    ctx->r7 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0022DB38: jal         0x0021034C
    // 0x0022DB3C: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    func_0021034C(rdram, ctx);
        goto after_33;
    // 0x0022DB3C: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    after_33:
    // 0x0022DB40: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_0022DB44:
    // 0x0022DB44: jal         0x0022CF40
    // 0x0022DB48: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_0022CF40(rdram, ctx);
        goto after_34;
    // 0x0022DB48: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_34:
    // 0x0022DB4C: beq         $v0, $zero, L_0022DB68
    if (ctx->r2 == 0) {
        // 0x0022DB50: addiu       $a1, $sp, 0x90
        ctx->r5 = ADD32(ctx->r29, 0X90);
            goto L_0022DB68;
    }
    // 0x0022DB50: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x0022DB54: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x0022DB58: jal         0x0020C618
    // 0x0022DB5C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_0020C618(rdram, ctx);
        goto after_35;
    // 0x0022DB5C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_35:
    // 0x0022DB60: j           L_0022DB78
    // 0x0022DB64: addiu       $s1, $sp, 0xD0
    ctx->r17 = ADD32(ctx->r29, 0XD0);
        goto L_0022DB78;
    // 0x0022DB64: addiu       $s1, $sp, 0xD0
    ctx->r17 = ADD32(ctx->r29, 0XD0);
L_0022DB68:
    // 0x0022DB68: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x0022DB6C: jal         0x0020FF80
    // 0x0022DB70: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    func_0020FF80(rdram, ctx);
        goto after_36;
    // 0x0022DB70: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    after_36:
    // 0x0022DB74: addiu       $s1, $sp, 0xD0
    ctx->r17 = ADD32(ctx->r29, 0XD0);
L_0022DB78:
    // 0x0022DB78: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x0022DB7C: lw          $a2, 0x154($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X154);
    // 0x0022DB80: lw          $a3, 0x158($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X158);
    // 0x0022DB84: jal         0x00210318
    // 0x0022DB88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00210318(rdram, ctx);
        goto after_37;
    // 0x0022DB88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_37:
    // 0x0022DB8C: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x0022DB90: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0022DB94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0022DB98: beq         $v0, $zero, L_0022DC78
    if (ctx->r2 == 0) {
        // 0x0022DB9C: addiu       $a0, $sp, 0xD0
        ctx->r4 = ADD32(ctx->r29, 0XD0);
            goto L_0022DC78;
    }
    // 0x0022DB9C: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x0022DBA0: lb          $a0, 0x1AD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X1AD);
    // 0x0022DBA4: beq         $a0, $zero, L_0022DC74
    if (ctx->r4 == 0) {
        // 0x0022DBA8: addiu       $s0, $sp, 0x110
        ctx->r16 = ADD32(ctx->r29, 0X110);
            goto L_0022DC74;
    }
    // 0x0022DBA8: addiu       $s0, $sp, 0x110
    ctx->r16 = ADD32(ctx->r29, 0X110);
    // 0x0022DBAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DBB0: lwc1        $f0, 0x62E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X62E0);
    // 0x0022DBB4: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x0022DBB8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0022DBBC: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0022DBC0: lui         $a3, 0xC285
    ctx->r7 = S32(0XC285 << 16);
    // 0x0022DBC4: ori         $a3, $a3, 0x1EB8
    ctx->r7 = ctx->r7 | 0X1EB8;
    // 0x0022DBC8: mul.s       $f20, $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0022DBCC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x0022DBD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DBD4: lwc1        $f21, 0x62E4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X62E4);
    // 0x0022DBD8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0022DBDC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0022DBE0: mul.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x0022DBE4: jal         0x0020FC24
    // 0x0022DBE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020FC24(rdram, ctx);
        goto after_38;
    // 0x0022DBE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_38:
    // 0x0022DBEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DBF0: lwc1        $f12, 0x62E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X62E8);
    // 0x0022DBF4: mul.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x0022DBF8: jal         0x002982F0
    // 0x0022DBFC: nop

    func_002982F0(rdram, ctx);
        goto after_39;
    // 0x0022DBFC: nop

    after_39:
    // 0x0022DC00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DC04: lwc1        $f1, 0x62EC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X62EC);
    // 0x0022DC08: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0022DC0C: nop

    // 0x0022DC10: mul.s       $f0, $f21, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0022DC14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0022DC18: jal         0x00210968
    // 0x0022DC1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210968(rdram, ctx);
        goto after_40;
    // 0x0022DC1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_40:
    // 0x0022DC20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0022DC24: lwc1        $f12, 0x62F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X62F0);
    // 0x0022DC28: mul.s       $f12, $f20, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x0022DC2C: jal         0x002982F0
    // 0x0022DC30: nop

    func_002982F0(rdram, ctx);
        goto after_41;
    // 0x0022DC30: nop

    after_41:
    // 0x0022DC34: mul.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f0.fl);
    // 0x0022DC38: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0022DC3C: jal         0x00210790
    // 0x0022DC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210790(rdram, ctx);
        goto after_42;
    // 0x0022DC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_42:
    // 0x0022DC44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022DC48: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0022DC4C: lui         $a3, 0x4285
    ctx->r7 = S32(0X4285 << 16);
    // 0x0022DC50: ori         $a3, $a3, 0x1EB8
    ctx->r7 = ctx->r7 | 0X1EB8;
    // 0x0022DC54: jal         0x00210318
    // 0x0022DC58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00210318(rdram, ctx);
        goto after_43;
    // 0x0022DC58: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_43:
    // 0x0022DC5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0022DC60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0022DC64: jal         0x0020C618
    // 0x0022DC68: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020C618(rdram, ctx);
        goto after_44;
    // 0x0022DC68: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_44:
    // 0x0022DC6C: j           L_0022DC78
    // 0x0022DC70: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_0022DC78;
    // 0x0022DC70: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_0022DC74:
    // 0x0022DC74: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
L_0022DC78:
    // 0x0022DC78: jal         0x0020D274
    // 0x0022DC7C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_0020D274(rdram, ctx);
        goto after_45;
    // 0x0022DC7C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_45:
    // 0x0022DC80: lw          $ra, 0x210($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X210);
    // 0x0022DC84: lw          $s7, 0x20C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20C);
    // 0x0022DC88: lw          $s6, 0x208($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X208);
    // 0x0022DC8C: lw          $s5, 0x204($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X204);
    // 0x0022DC90: lw          $s4, 0x200($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X200);
    // 0x0022DC94: lw          $s3, 0x1FC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1FC);
    // 0x0022DC98: lw          $s2, 0x1F8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1F8);
    // 0x0022DC9C: lw          $s1, 0x1F4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1F4);
    // 0x0022DCA0: lw          $s0, 0x1F0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1F0);
    // 0x0022DCA4: ldc1        $f23, 0x230($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X230);
    // 0x0022DCA8: ldc1        $f22, 0x228($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X228);
    // 0x0022DCAC: ldc1        $f21, 0x220($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X220);
    // 0x0022DCB0: ldc1        $f20, 0x218($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X218);
    // 0x0022DCB4: jr          $ra
    // 0x0022DCB8: addiu       $sp, $sp, 0x238
    ctx->r29 = ADD32(ctx->r29, 0X238);
    return;
    // 0x0022DCB8: addiu       $sp, $sp, 0x238
    ctx->r29 = ADD32(ctx->r29, 0X238);
;}
RECOMP_FUNC void func_0026352C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026352C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00263530: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00263534: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00263538: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026353C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00263540: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00263544: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00263548: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026354C: jal         0x00220408
    // 0x00263550: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00220408(rdram, ctx);
        goto after_0;
    // 0x00263550: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00263554: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00263558: bne         $v0, $zero, L_00263580
    if (ctx->r2 != 0) {
        // 0x0026355C: nop
    
            goto L_00263580;
    }
    // 0x0026355C: nop

    // 0x00263560: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x00263564: beq         $v0, $zero, L_00263580
    if (ctx->r2 == 0) {
        // 0x00263568: nop
    
            goto L_00263580;
    }
    // 0x00263568: nop

    // 0x0026356C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x00263570: beq         $v0, $zero, L_00263580
    if (ctx->r2 == 0) {
        // 0x00263574: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00263580;
    }
    // 0x00263574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00263578: jalr        $v0
    // 0x0026357C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0026357C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_00263580:
    // 0x00263580: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00263584: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00263588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026358C: jr          $ra
    // 0x00263590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00263590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004263A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004263A0: jal         0x002052D8
    // 0x004263A4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x004263A4: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    after_0:
    // 0x004263A8: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x004263AC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x004263B0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x004263B4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x004263B8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x004263BC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x004263C0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x004263C4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x004263C8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x004263CC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x004263D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x004263D4: jr          $ra
    // 0x004263D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x004263D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00297860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00297860: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00297864: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x00297868: mtc1        $a1, $f26
    ctx->f26.u32l = ctx->r5;
    // 0x0029786C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x00297870: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x00297874: lwc1        $f31, 0x9C($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X9C);
    // 0x00297878: sdc1        $f29, 0x70($sp)
    CHECK_FR(ctx, 29);
    SD(ctx->f29.u64, 0X70, ctx->r29);
    // 0x0029787C: lwc1        $f29, 0xA0($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0XA0);
    // 0x00297880: sdc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X78, ctx->r29);
    // 0x00297884: lwc1        $f30, 0xA4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x00297888: sdc1        $f23, 0x40($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X40, ctx->r29);
    // 0x0029788C: lwc1        $f23, 0x90($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X90);
    // 0x00297890: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x00297894: lwc1        $f24, 0x94($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X94);
    // 0x00297898: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0029789C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002978A0: sdc1        $f25, 0x50($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X50, ctx->r29);
    // 0x002978A4: lwc1        $f25, 0x98($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X98);
    // 0x002978A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002978AC: sdc1        $f27, 0x60($sp)
    CHECK_FR(ctx, 27);
    SD(ctx->f27.u64, 0X60, ctx->r29);
    // 0x002978B0: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x002978B4: sdc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X30, ctx->r29);
    // 0x002978B8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x002978BC: jal         0x00297BCC
    // 0x002978C0: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    func_00297BCC(rdram, ctx);
        goto after_0;
    // 0x002978C0: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    after_0:
    // 0x002978C4: sub.s       $f23, $f23, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f23.fl = ctx->f23.fl - ctx->f26.fl;
    // 0x002978C8: mul.s       $f12, $f23, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = MUL_S(ctx->f23.fl, ctx->f23.fl);
    // 0x002978CC: sub.s       $f24, $f24, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f28.fl;
    // 0x002978D0: mul.s       $f1, $f24, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x002978D4: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x002978D8: sub.s       $f25, $f25, $f6
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f25.fl = ctx->f25.fl - ctx->f6.fl;
    // 0x002978DC: mul.s       $f0, $f25, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = MUL_S(ctx->f25.fl, ctx->f25.fl);
    // 0x002978E0: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x002978E4: jal         0x00298470
    // 0x002978E8: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x002978E8: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_1:
    // 0x002978EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002978F0: lwc1        $f1, -0x5848($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5848);
    // 0x002978F4: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002978F8: mul.s       $f23, $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f1.fl);
    // 0x002978FC: nop

    // 0x00297900: mul.s       $f25, $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f1.fl);
    // 0x00297904: nop

    // 0x00297908: mul.s       $f24, $f24, $f1
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f1.fl);
    // 0x0029790C: nop

    // 0x00297910: mul.s       $f21, $f29, $f25
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f21.fl = MUL_S(ctx->f29.fl, ctx->f25.fl);
    // 0x00297914: nop

    // 0x00297918: mul.s       $f0, $f30, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f30.fl, ctx->f24.fl);
    // 0x0029791C: nop

    // 0x00297920: mul.s       $f22, $f30, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f22.fl = MUL_S(ctx->f30.fl, ctx->f23.fl);
    // 0x00297924: nop

    // 0x00297928: mul.s       $f1, $f31, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f1.fl = MUL_S(ctx->f31.fl, ctx->f25.fl);
    // 0x0029792C: nop

    // 0x00297930: mul.s       $f20, $f31, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f31.fl, ctx->f24.fl);
    // 0x00297934: nop

    // 0x00297938: mul.s       $f2, $f29, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = MUL_S(ctx->f29.fl, ctx->f23.fl);
    // 0x0029793C: sub.s       $f21, $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = ctx->f21.fl - ctx->f0.fl;
    // 0x00297940: mul.s       $f12, $f21, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x00297944: sub.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f1.fl;
    // 0x00297948: mul.s       $f1, $f22, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x0029794C: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x00297950: mul.s       $f0, $f20, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x00297954: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x00297958: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029795C: lwc1        $f27, -0x5844($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X5844);
    // 0x00297960: jal         0x00298470
    // 0x00297964: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x00297964: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_2:
    // 0x00297968: div.s       $f1, $f27, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f27.fl, ctx->f0.fl);
    // 0x0029796C: mul.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x00297970: nop

    // 0x00297974: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x00297978: nop

    // 0x0029797C: mul.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x00297980: nop

    // 0x00297984: mul.s       $f3, $f24, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x00297988: nop

    // 0x0029798C: mul.s       $f0, $f25, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f25.fl, ctx->f22.fl);
    // 0x00297990: nop

    // 0x00297994: mul.s       $f4, $f25, $f21
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f4.fl = MUL_S(ctx->f25.fl, ctx->f21.fl);
    // 0x00297998: nop

    // 0x0029799C: mul.s       $f1, $f23, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f23.fl, ctx->f20.fl);
    // 0x002979A0: nop

    // 0x002979A4: mul.s       $f5, $f23, $f22
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f5.fl = MUL_S(ctx->f23.fl, ctx->f22.fl);
    // 0x002979A8: nop

    // 0x002979AC: mul.s       $f2, $f24, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f21.fl);
    // 0x002979B0: sub.s       $f31, $f3, $f0
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f31.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x002979B4: mul.s       $f12, $f31, $f31
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f12.fl = MUL_S(ctx->f31.fl, ctx->f31.fl);
    // 0x002979B8: sub.s       $f29, $f4, $f1
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f29.fl = ctx->f4.fl - ctx->f1.fl;
    // 0x002979BC: mul.s       $f1, $f29, $f29
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f1.fl = MUL_S(ctx->f29.fl, ctx->f29.fl);
    // 0x002979C0: sub.s       $f30, $f5, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = ctx->f5.fl - ctx->f2.fl;
    // 0x002979C4: mul.s       $f0, $f30, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x002979C8: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x002979CC: jal         0x00298470
    // 0x002979D0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x002979D0: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    after_3:
    // 0x002979D4: div.s       $f1, $f27, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f27.fl, ctx->f0.fl);
    // 0x002979D8: mul.s       $f31, $f31, $f1
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f31.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f31.fl = MUL_S(ctx->f31.fl, ctx->f1.fl);
    // 0x002979DC: nop

    // 0x002979E0: mul.s       $f29, $f29, $f1
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f29.fl = MUL_S(ctx->f29.fl, ctx->f1.fl);
    // 0x002979E4: nop

    // 0x002979E8: mul.s       $f30, $f30, $f1
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f1.fl);
    // 0x002979EC: nop

    // 0x002979F0: mul.s       $f0, $f26, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f26.fl, ctx->f21.fl);
    // 0x002979F4: nop

    // 0x002979F8: mul.s       $f2, $f28, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f28.fl, ctx->f22.fl);
    // 0x002979FC: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x00297A00: mul.s       $f3, $f6, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x00297A04: nop

    // 0x00297A08: mul.s       $f1, $f26, $f31
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f1.fl = MUL_S(ctx->f26.fl, ctx->f31.fl);
    // 0x00297A0C: nop

    // 0x00297A10: mul.s       $f4, $f28, $f29
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f29.fl);
    // 0x00297A14: nop

    // 0x00297A18: mul.s       $f5, $f6, $f30
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f5.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x00297A1C: nop

    // 0x00297A20: mul.s       $f26, $f26, $f23
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f23.fl);
    // 0x00297A24: nop

    // 0x00297A28: mul.s       $f28, $f28, $f24
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f24.fl);
    // 0x00297A2C: nop

    // 0x00297A30: mul.s       $f6, $f6, $f25
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f25.fl);
    // 0x00297A34: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00297A38: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x00297A3C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x00297A40: swc1        $f21, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x00297A44: swc1        $f22, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f22.u32l;
    // 0x00297A48: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x00297A4C: swc1        $f23, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f_odd[(23 - 1) * 2];
    // 0x00297A50: swc1        $f24, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f24.u32l;
    // 0x00297A54: swc1        $f25, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(25 - 1) * 2];
    // 0x00297A58: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00297A5C: add.s       $f1, $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f4.fl;
    // 0x00297A60: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00297A64: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x00297A68: add.s       $f26, $f26, $f28
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f28.fl;
    // 0x00297A6C: swc1        $f27, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f_odd[(27 - 1) * 2];
    // 0x00297A70: swc1        $f31, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f_odd[(31 - 1) * 2];
    // 0x00297A74: add.s       $f26, $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f6.fl;
    // 0x00297A78: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00297A7C: swc1        $f29, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f_odd[(29 - 1) * 2];
    // 0x00297A80: add.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f5.fl;
    // 0x00297A84: swc1        $f30, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f30.u32l;
    // 0x00297A88: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x00297A8C: neg.s       $f26, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f26.fl = -ctx->f26.fl;
    // 0x00297A90: swc1        $f26, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f26.u32l;
    // 0x00297A94: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x00297A98: swc1        $f1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00297A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00297AA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00297AA4: ldc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X78);
    // 0x00297AA8: ldc1        $f29, 0x70($sp)
    CHECK_FR(ctx, 29);
    ctx->f29.u64 = LD(ctx->r29, 0X70);
    // 0x00297AAC: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x00297AB0: ldc1        $f27, 0x60($sp)
    CHECK_FR(ctx, 27);
    ctx->f27.u64 = LD(ctx->r29, 0X60);
    // 0x00297AB4: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x00297AB8: ldc1        $f25, 0x50($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X50);
    // 0x00297ABC: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x00297AC0: ldc1        $f23, 0x40($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X40);
    // 0x00297AC4: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x00297AC8: ldc1        $f21, 0x30($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X30);
    // 0x00297ACC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00297AD0: jr          $ra
    // 0x00297AD4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00297AD4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_002640D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002640D4: jr          $ra
    // 0x002640D8: nop

    return;
    // 0x002640D8: nop

;}
RECOMP_FUNC void func_002387C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002387C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002387C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002387CC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002387D0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x002387D4: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x002387D8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x002387DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x002387E0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x002387E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x002387E8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x002387EC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x002387F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x002387F4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x002387F8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x002387FC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00238800: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00238804: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x00238808: jal         0x00237AFC
    // 0x0023880C: nop

    func_00237AFC(rdram, ctx);
        goto after_0;
    // 0x0023880C: nop

    after_0:
    // 0x00238810: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00238814: jr          $ra
    // 0x00238818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00238818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_002683CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002683CC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x002683D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002683D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x002683D8: beq         $v1, $v0, L_00268404
    if (ctx->r3 == ctx->r2) {
        // 0x002683DC: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_00268404;
    }
    // 0x002683DC: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x002683E0: beq         $v0, $zero, L_002683F8
    if (ctx->r2 == 0) {
        // 0x002683E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002683F8;
    }
    // 0x002683E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002683E8: beq         $v1, $v0, L_00268404
    if (ctx->r3 == ctx->r2) {
        // 0x002683EC: nop
    
            goto L_00268404;
    }
    // 0x002683EC: nop

    // 0x002683F0: j           L_00268410
    // 0x002683F4: nop

    func_00268410(rdram, ctx);
    return;
    // 0x002683F4: nop

L_002683F8:
    // 0x002683F8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x002683FC: bne         $v1, $v0, L_00268410
    if (ctx->r3 != ctx->r2) {
            // 0x00268400: nop

    func_00268410(rdram, ctx);
    return;
    }
    // 0x00268400: nop

L_00268404:
    // 0x00268404: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x00268408: jr          $ra
    // 0x0026840C: nop

    return;
    // 0x0026840C: nop

;}
RECOMP_FUNC void func_0042E920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E920: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042E924: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042E928: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042E92C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0042E930: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042E934: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0042E938: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x0042E93C: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x0042E940: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0042E944: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0042E948: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0042E94C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0042E950: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042E954: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x0042E958: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0042E95C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0042E960: jal         0x002470E8
    // 0x0042E964: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_0;
    // 0x0042E964: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_0:
    // 0x0042E968: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042E96C: sw          $s0, 0x514($a0)
    MEM_W(0X514, ctx->r4) = ctx->r16;
    // 0x0042E970: sw          $s2, 0x518($a0)
    MEM_W(0X518, ctx->r4) = ctx->r18;
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
        goto after_1;
    // 0x0042E988: sw          $zero, 0xC00($a0)
    MEM_W(0XC00, ctx->r4) = 0;
    after_1:
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
RECOMP_FUNC void func_0040AF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040AF20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0040AF24: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0040AF28: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0040AF2C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040AF30: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0040AF34: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040AF38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040AF3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040AF40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040AF44: lb          $v0, 0xC7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XC7);
    // 0x0040AF48: blez        $v0, L_0040AFAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040AF4C: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_0040AFAC;
    }
    // 0x0040AF4C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0040AF50: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0040AF54: lw          $s2, 0x1D0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1D0);
    // 0x0040AF58: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x0040AF5C: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x0040AF60: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040AF64: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040AF68:
    // 0x0040AF68: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040AF6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040AF70: beql        $v0, $zero, L_0040AF90
    if (ctx->r2 == 0) {
        // 0x0040AF74: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040AF90;
    }
    goto skip_0;
    // 0x0040AF74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040AF78: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040AF7C: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040AF80: addiu       $a1, $a1, 0x1EE4
    ctx->r5 = ADD32(ctx->r5, 0X1EE4);
    // 0x0040AF84: jal         0x00236314
    // 0x0040AF88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040AF88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040AF8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040AF90:
    // 0x0040AF90: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040AF94: bne         $v0, $zero, L_0040AF68
    if (ctx->r2 != 0) {
        // 0x0040AF98: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040AF68;
    }
    // 0x0040AF98: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040AF9C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040AFA0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040AFA4: jal         0x00243414
    // 0x0040AFA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040AFA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
L_0040AFAC:
    // 0x0040AFAC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040AFB0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040AFB4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040AFB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040AFBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040AFC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040AFC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040AFC8: jr          $ra
    // 0x0040AFCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040AFCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00299FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299FE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00299FE8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00299FEC: addiu       $v1, $v1, 0x7A50
    ctx->r3 = ADD32(ctx->r3, 0X7A50);
    // 0x00299FF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00299FF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00299FF8: bne         $v0, $zero, L_0029A030
    if (ctx->r2 != 0) {
        // 0x00299FFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0029A030;
    }
    // 0x00299FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029A000: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029A004: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029A008: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, 0X1678);
    // 0x0029A00C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0029A010: addiu       $a1, $a1, 0x1670
    ctx->r5 = ADD32(ctx->r5, 0X1670);
    // 0x0029A014: jal         0x0029B030
    // 0x0029A018: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x0029A018: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0029A01C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029A020: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, 0X1678);
    // 0x0029A024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029A028: jal         0x0029B820
    // 0x0029A02C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x0029A02C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
L_0029A030:
    // 0x0029A030: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029A034: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, 0X1678);
    // 0x0029A038: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0029A03C: jal         0x0029B6F0
    // 0x0029A040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0029A040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x0029A044: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0029A048: jr          $ra
    // 0x0029A04C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029A04C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002115F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002115F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002115F8: lwc1        $f1, -0x3734($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3734);
    // 0x002115FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00211600: lwc1        $f0, 0x5684($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5684);
    // 0x00211604: jr          $ra
    // 0x00211608: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    return;
    // 0x00211608: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
;}
RECOMP_FUNC void func_00265770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00265774: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00265778: jal         0x00243414
    // 0x0026577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0026577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00265780: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00265784: jr          $ra
    // 0x00265788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00265788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041930C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041930C: addiu       $v0, $v0, 0x614C
    ctx->r2 = ADD32(ctx->r2, 0X614C);
    // 0x00419310: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00419314: jr          $ra
    // 0x00419318: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00419318: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00200A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00200A74: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00200A78: beq         $v0, $zero, L_00200A94
    if (ctx->r2 == 0) {
        // 0x00200A7C: nop
    
            goto L_00200A94;
    }
    // 0x00200A7C: nop

    // 0x00200A80: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x00200A84: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_00200A88:
    // 0x00200A88: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00200A8C: bne         $v0, $zero, L_00200A88
    if (ctx->r2 != 0) {
        // 0x00200A90: addu        $v0, $v0, $a0
        ctx->r2 = ADD32(ctx->r2, ctx->r4);
            goto L_00200A88;
    }
    // 0x00200A90: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_00200A94:
    // 0x00200A94: jr          $ra
    // 0x00200A98: nop

    return;
    // 0x00200A98: nop

;}
RECOMP_FUNC void func_0029B16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B16C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
;}
RECOMP_FUNC void func_00211114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211114: lwc1        $f3, 0x0($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X0);
    // 0x00211118: mul.s       $f8, $f3, $f3
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f8.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0021111C: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x00211120: mul.s       $f9, $f2, $f2
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f9.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x00211124: lwc1        $f1, 0x8($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X8);
    // 0x00211128: mul.s       $f10, $f1, $f1
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0021112C: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x00211130: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00211134: add.s       $f5, $f3, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f3.fl + ctx->f3.fl;
    // 0x00211138: mul.s       $f7, $f5, $f2
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f7.fl = MUL_S(ctx->f5.fl, ctx->f2.fl);
    // 0x0021113C: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00211140: mul.s       $f6, $f0, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00211144: nop

    // 0x00211148: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0021114C: nop

    // 0x00211150: mul.s       $f11, $f0, $f2
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f11.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00211154: nop

    // 0x00211158: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0021115C: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x00211160: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00211164: add.s       $f3, $f4, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x00211168: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x0021116C: sub.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f9.fl;
    // 0x00211170: add.s       $f12, $f7, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f7.fl + ctx->f6.fl;
    // 0x00211174: sub.s       $f13, $f5, $f11
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f13.fl = ctx->f5.fl - ctx->f11.fl;
    // 0x00211178: sub.s       $f7, $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f7.fl = ctx->f7.fl - ctx->f6.fl;
    // 0x0021117C: add.s       $f6, $f4, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f9.fl;
    // 0x00211180: add.s       $f5, $f5, $f11
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f11.fl;
    // 0x00211184: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x00211188: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x0021118C: sub.s       $f4, $f4, $f9
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f9.fl;
    // 0x00211190: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x00211194: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    // 0x00211198: sub.s       $f3, $f3, $f10
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f10.fl;
    // 0x0021119C: sw          $zero, 0x34($a1)
    MEM_W(0X34, ctx->r5) = 0;
    // 0x002111A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002111A4: lwc1        $f1, 0x5654($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5654);
    // 0x002111A8: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x002111AC: sw          $zero, 0x38($a1)
    MEM_W(0X38, ctx->r5) = 0;
    // 0x002111B0: swc1        $f1, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
    // 0x002111B4: add.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x002111B8: swc1        $f12, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f12.u32l;
    // 0x002111BC: swc1        $f13, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f_odd[(13 - 1) * 2];
    // 0x002111C0: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002111C4: swc1        $f7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f_odd[(7 - 1) * 2];
    // 0x002111C8: swc1        $f5, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f_odd[(5 - 1) * 2];
    // 0x002111CC: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x002111D0: swc1        $f8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f8.u32l;
    // 0x002111D4: swc1        $f2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f2.u32l;
    // 0x002111D8: swc1        $f3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f_odd[(3 - 1) * 2];
    // 0x002111DC: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    // 0x002111E0: jr          $ra
    // 0x002111E4: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    return;
    // 0x002111E4: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_00232EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232EEC: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x00232EF0: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x00232EF4: beq         $v1, $v0, L_00232F28
    if (ctx->r3 == ctx->r2) {
        // 0x00232EF8: slti        $v0, $v1, 0x57
        ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
            goto L_00232F28;
    }
    // 0x00232EF8: slti        $v0, $v1, 0x57
    ctx->r2 = SIGNED(ctx->r3) < 0X57 ? 1 : 0;
    // 0x00232EFC: beq         $v0, $zero, L_00232F14
    if (ctx->r2 == 0) {
        // 0x00232F00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00232F14;
    }
    // 0x00232F00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00232F04: beq         $v1, $v0, L_00232F28
    if (ctx->r3 == ctx->r2) {
        // 0x00232F08: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00232F28;
    }
    // 0x00232F08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00232F0C: j           L_00232F30
    // 0x00232F10: nop

    func_00232F30(rdram, ctx);
    return;
    // 0x00232F10: nop

L_00232F14:
    // 0x00232F14: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x00232F18: beq         $v1, $v0, L_00232F28
    if (ctx->r3 == ctx->r2) {
        // 0x00232F1C: addiu       $v0, $zero, 0x126
        ctx->r2 = ADD32(0, 0X126);
            goto L_00232F28;
    }
    // 0x00232F1C: addiu       $v0, $zero, 0x126
    ctx->r2 = ADD32(0, 0X126);
    // 0x00232F20: bne         $v1, $v0, L_00232F30
    if (ctx->r3 != ctx->r2) {
            // 0x00232F24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_00232F30(rdram, ctx);
    return;
    }
    // 0x00232F24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00232F28:
    // 0x00232F28: jr          $ra
    // 0x00232F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00232F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_0041B59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B59C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B5A0: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B5A4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0041B5A8: beq         $v0, $zero, L_0041B5BC
    if (ctx->r2 == 0) {
        // 0x0041B5AC: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B5BC;
    }
    // 0x0041B5AC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B5B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B5B4: j           L_0041B5CC
    // 0x0041B5B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B5CC;
    // 0x0041B5B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B5BC:
    // 0x0041B5BC: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B5C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B5C4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B5C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B5CC:
    // 0x0041B5CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B5D0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B5D4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B5D8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0041B5DC: beq         $v0, $zero, L_0041B5F4
    if (ctx->r2 == 0) {
        // 0x0041B5E0: nop
    
            goto L_0041B5F4;
    }
    // 0x0041B5E0: nop

    // 0x0041B5E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B5E8: addiu       $v0, $v0, 0x5934
    ctx->r2 = ADD32(ctx->r2, 0X5934);
    // 0x0041B5EC: j           L_0041B600
    // 0x0041B5F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B600;
    // 0x0041B5F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B5F4:
    // 0x0041B5F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B5F8: addiu       $v0, $v0, 0x5950
    ctx->r2 = ADD32(ctx->r2, 0X5950);
    // 0x0041B5FC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B600:
    // 0x0041B600: jr          $ra
    // 0x0041B604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B604: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0042F600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F600: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x0042F604: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x0042F608: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    // 0x0042F60C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x0042F610: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x0042F614: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0042F618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0042F61C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x0042F620: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x0042F624: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    // 0x0042F628: jr          $ra
    // 0x0042F62C: sw          $a2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r6;
    return;
    // 0x0042F62C: sw          $a2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_002664D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002664D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002664DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002664E0: jal         0x00243414
    // 0x002664E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002664E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x002664E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002664EC: jr          $ra
    // 0x002664F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002664F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020BE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020BE08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0020BE0C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0020BE10: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0020BE14: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0020BE18: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0020BE1C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0020BE20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0020BE24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0020BE28: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0020BE2C: jal         0x002017D4
    // 0x0020BE30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0020BE30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x0020BE34: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0020BE38: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x0020BE3C: blez        $s4, L_0020BEC4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x0020BE40: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0020BEC4;
    }
    // 0x0020BE40: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0020BE44: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_0020BE48:
    // 0x0020BE48: jal         0x002017D4
    // 0x0020BE4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0020BE4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0020BE50: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0020BE54: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x0020BE58: blez        $s2, L_0020BEB4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x0020BE5C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0020BEB4;
    }
    // 0x0020BE5C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0020BE60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0020BE64:
    // 0x0020BE64: jal         0x002017D4
    // 0x0020BE68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x0020BE68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0020BE6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020BE70: jal         0x002017D4
    // 0x0020BE74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x0020BE74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x0020BE78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020BE7C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0020BE80: beql        $v0, $zero, L_0020BEA8
    if (ctx->r2 == 0) {
        // 0x0020BE84: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0020BEA8;
    }
    goto skip_0;
    // 0x0020BE84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0020BE88: jal         0x0020793C
    // 0x0020BE8C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_0020793C(rdram, ctx);
        goto after_4;
    // 0x0020BE8C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_4:
    // 0x0020BE90: beql        $v0, $zero, L_0020BEA8
    if (ctx->r2 == 0) {
        // 0x0020BE94: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0020BEA8;
    }
    goto skip_1;
    // 0x0020BE94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x0020BE98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0020BE9C: jal         0x002051F4
    // 0x0020BEA0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_002051F4(rdram, ctx);
        goto after_5;
    // 0x0020BEA0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_5:
    // 0x0020BEA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0020BEA8:
    // 0x0020BEA8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x0020BEAC: bne         $v0, $zero, L_0020BE64
    if (ctx->r2 != 0) {
        // 0x0020BEB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0020BE64;
    }
    // 0x0020BEB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0020BEB4:
    // 0x0020BEB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0020BEB8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x0020BEBC: bne         $v0, $zero, L_0020BE48
    if (ctx->r2 != 0) {
        // 0x0020BEC0: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_0020BE48;
    }
    // 0x0020BEC0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_0020BEC4:
    // 0x0020BEC4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0020BEC8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0020BECC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0020BED0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0020BED4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020BED8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020BEDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0020BEE0: jr          $ra
    // 0x0020BEE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0020BEE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002708C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002708C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002708C4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x002708C8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002708CC: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x002708D0: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x002708D4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002708D8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x002708DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002708E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x002708E4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x002708E8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x002708EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002708F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002708F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002708F8: beq         $s7, $v0, L_00270A2C
    if (ctx->r23 == ctx->r2) {
        // 0x002708FC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00270A2C;
    }
    // 0x002708FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00270900: jal         0x0029DFF0
    // 0x00270904: addiu       $s0, $s5, 0x110
    ctx->r16 = ADD32(ctx->r21, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00270904: addiu       $s0, $s5, 0x110
    ctx->r16 = ADD32(ctx->r21, 0X110);
    after_0:
    // 0x00270908: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0027090C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x00270910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00270914: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00270918: beq         $v1, $v0, L_00270940
    if (ctx->r3 == ctx->r2) {
        // 0x0027091C: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00270940;
    }
    // 0x0027091C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00270920: jal         0x0029E010
    // 0x00270924: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x00270924: nop

    after_1:
    // 0x00270928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027092C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270930: jal         0x0029B6F0
    // 0x00270934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x00270934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00270938: j           L_0027094C
    // 0x0027093C: addiu       $a0, $s5, 0x138
    ctx->r4 = ADD32(ctx->r21, 0X138);
        goto L_0027094C;
    // 0x0027093C: addiu       $a0, $s5, 0x138
    ctx->r4 = ADD32(ctx->r21, 0X138);
L_00270940:
    // 0x00270940: jal         0x0029E010
    // 0x00270944: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00270944: nop

    after_3:
    // 0x00270948: addiu       $a0, $s5, 0x138
    ctx->r4 = ADD32(ctx->r21, 0X138);
L_0027094C:
    // 0x0027094C: jal         0x002765F4
    // 0x00270950: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_002765F4(rdram, ctx);
        goto after_4;
    // 0x00270950: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_4:
    // 0x00270954: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00270958: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x0027095C: addiu       $fp, $zero, -0x11
    ctx->r30 = ADD32(0, -0X11);
    // 0x00270960: addiu       $s4, $s5, 0x7C
    ctx->r20 = ADD32(ctx->r21, 0X7C);
    // 0x00270964: addiu       $s3, $zero, 0x1DBC
    ctx->r19 = ADD32(0, 0X1DBC);
    // 0x00270968: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
L_0027096C:
    // 0x0027096C: lw          $v0, 0x1DC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1DC0);
    // 0x00270970: bnel        $v0, $s7, L_002709D8
    if (ctx->r2 != ctx->r23) {
        // 0x00270974: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_002709D8;
    }
    goto skip_0;
    // 0x00270974: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    skip_0:
    // 0x00270978: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x0027097C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x00270980: bne         $s0, $a3, L_002709A0
    if (ctx->r16 != ctx->r7) {
        // 0x00270984: addu        $v1, $s5, $s3
        ctx->r3 = ADD32(ctx->r21, ctx->r19);
            goto L_002709A0;
    }
    // 0x00270984: addu        $v1, $s5, $s3
    ctx->r3 = ADD32(ctx->r21, ctx->r19);
    // 0x00270988: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x0027098C: sh          $zero, 0x38($v1)
    MEM_H(0X38, ctx->r3) = 0;
    // 0x00270990: sh          $s1, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r17;
    // 0x00270994: sw          $s1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r17;
    // 0x00270998: j           L_002709D4
    // 0x0027099C: sw          $s1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r17;
        goto L_002709D4;
    // 0x0027099C: sw          $s1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r17;
L_002709A0:
    // 0x002709A0: lw          $v0, 0xA0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA0);
    // 0x002709A4: blez        $v0, L_002709BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x002709A8: nop
    
            goto L_002709BC;
    }
    // 0x002709A8: nop

    // 0x002709AC: lw          $v0, 0xA4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA4);
    // 0x002709B0: sw          $zero, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = 0;
    // 0x002709B4: and         $v0, $v0, $fp
    ctx->r2 = ctx->r2 & ctx->r30;
    // 0x002709B8: sw          $v0, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r2;
L_002709BC:
    // 0x002709BC: lh          $v0, 0x60($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X60);
    // 0x002709C0: beq         $v0, $s1, L_002709D4
    if (ctx->r2 == ctx->r17) {
        // 0x002709C4: addiu       $a0, $s5, 0x1DB8
        ctx->r4 = ADD32(ctx->r21, 0X1DB8);
            goto L_002709D4;
    }
    // 0x002709C4: addiu       $a0, $s5, 0x1DB8
    ctx->r4 = ADD32(ctx->r21, 0X1DB8);
    // 0x002709C8: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x002709CC: jal         0x00273DD8
    // 0x002709D0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00273DD8(rdram, ctx);
        goto after_5;
    // 0x002709D0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_5:
L_002709D4:
    // 0x002709D4: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_002709D8:
    // 0x002709D8: addiu       $s3, $s3, 0xCC
    ctx->r19 = ADD32(ctx->r19, 0XCC);
    // 0x002709DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x002709E0: slti        $v0, $s0, 0x11
    ctx->r2 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
    // 0x002709E4: bne         $v0, $zero, L_0027096C
    if (ctx->r2 != 0) {
        // 0x002709E8: addiu       $s2, $s2, 0xCC
        ctx->r18 = ADD32(ctx->r18, 0XCC);
            goto L_0027096C;
    }
    // 0x002709E8: addiu       $s2, $s2, 0xCC
    ctx->r18 = ADD32(ctx->r18, 0XCC);
    // 0x002709EC: jal         0x0029DFF0
    // 0x002709F0: addiu       $s0, $s5, 0x110
    ctx->r16 = ADD32(ctx->r21, 0X110);
    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x002709F0: addiu       $s0, $s5, 0x110
    ctx->r16 = ADD32(ctx->r21, 0X110);
    after_6:
    // 0x002709F4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x002709F8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002709FC: beq         $v1, $zero, L_00270A24
    if (ctx->r3 == 0) {
        // 0x00270A00: sw          $v1, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r3;
            goto L_00270A24;
    }
    // 0x00270A00: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x00270A04: jal         0x0029E010
    // 0x00270A08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00270A08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00270A0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00270A10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270A14: jal         0x0029B820
    // 0x00270A18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x00270A18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x00270A1C: j           L_00270A30
    // 0x00270A20: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
        goto L_00270A30;
    // 0x00270A20: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_00270A24:
    // 0x00270A24: jal         0x0029E010
    // 0x00270A28: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x00270A28: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
L_00270A2C:
    // 0x00270A2C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_00270A30:
    // 0x00270A30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x00270A34: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x00270A38: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x00270A3C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00270A40: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00270A44: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00270A48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00270A4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00270A50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00270A54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00270A58: jr          $ra
    // 0x00270A5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00270A5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00231EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00231EF8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x00231EFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00231F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00231F04: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00231F08: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x00231F0C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00231F10: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x00231F14: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x00231F18: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00231F1C: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231F20: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x00231F24: lhu         $a0, 0x10($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X10);
    // 0x00231F28: jal         0x0026D210
    // 0x00231F2C: nop

    func_0026D210(rdram, ctx);
        goto after_0;
    // 0x00231F2C: nop

    after_0:
    // 0x00231F30: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00231F34: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00231F38: c.eq.s      $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f21.fl == ctx->f22.fl;
    // 0x00231F3C: nop

    // 0x00231F40: bc1t        L_00231FF4
    if (c1cs) {
        // 0x00231F44: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00231FF4;
    }
    // 0x00231F44: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00231F48: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x00231F4C: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00231F50: lw          $v1, 0x150($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X150);
    // 0x00231F54: lw          $a3, 0x154($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X154);
    // 0x00231F58: lw          $t0, 0x158($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X158);
    // 0x00231F5C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x00231F60: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x00231F64: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00231F68: jal         0x0020EF60
    // 0x00231F6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020EF60(rdram, ctx);
        goto after_1;
    // 0x00231F6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00231F70: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x00231F74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00231F78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00231F7C: jal         0x0020EEF8
    // 0x00231F80: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_0020EEF8(rdram, ctx);
        goto after_2;
    // 0x00231F80: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00231F84: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x00231F88: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00231F8C: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00231F90: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00231F94: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00231F98: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00231F9C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00231FA0: jal         0x00298470
    // 0x00231FA4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_3;
    // 0x00231FA4: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_3:
    // 0x00231FA8: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00231FAC: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x00231FB0: lhu         $a0, 0x12($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12);
    // 0x00231FB4: jal         0x0026D210
    // 0x00231FB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_4;
    // 0x00231FB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x00231FBC: c.lt.s      $f22, $f21
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f22.fl < ctx->f21.fl;
    // 0x00231FC0: nop

    // 0x00231FC4: bc1f        L_00231FD8
    if (!c1cs) {
        // 0x00231FC8: nop
    
            goto L_00231FD8;
    }
    // 0x00231FC8: nop

    // 0x00231FCC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00231FD0: j           L_00231FDC
    // 0x00231FD4: nop

        goto L_00231FDC;
    // 0x00231FD4: nop

L_00231FD8:
    // 0x00231FD8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_00231FDC:
    // 0x00231FDC: nop

    // 0x00231FE0: bc1f        L_00231FF4
    if (!c1cs) {
        // 0x00231FE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00231FF4;
    }
    // 0x00231FE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00231FE8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00231FEC: jal         0x0020EF60
    // 0x00231FF0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0020EF60(rdram, ctx);
        goto after_5;
    // 0x00231FF0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
L_00231FF4:
    // 0x00231FF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00231FF8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00231FFC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00232000: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00232004: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x00232008: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0023200C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00232010: jr          $ra
    // 0x00232014: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x00232014: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0021E960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E960: lh          $v0, 0xDC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XDC);
    // 0x0021E964: sh          $a1, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r5;
    // 0x0021E968: beq         $v0, $a1, L_0021E978
    if (ctx->r2 == ctx->r5) {
        // 0x0021E96C: sb          $zero, 0xE2($a0)
        MEM_B(0XE2, ctx->r4) = 0;
            goto L_0021E978;
    }
    // 0x0021E96C: sb          $zero, 0xE2($a0)
    MEM_B(0XE2, ctx->r4) = 0;
    // 0x0021E970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021E974: sb          $v0, 0xE3($a0)
    MEM_B(0XE3, ctx->r4) = ctx->r2;
L_0021E978:
    // 0x0021E978: jr          $ra
    // 0x0021E97C: nop

    return;
    // 0x0021E97C: nop

;}
RECOMP_FUNC void func_0045A974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004219F0:
    // 0x0045A974: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0045A978: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0045A97C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0045A980: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0045A984: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0045A988: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0045A98C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x0045A990: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0045A994: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045A998: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0045A99C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0045A9A0:
    // 0x0045A9A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0045A9A4: jal         0x00426898
    // 0x0045A9A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    entry_00426898(rdram, ctx);
        goto after_0;
    // 0x0045A9A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0045A9AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0045A9B0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0045A9B4: jal         0x00426BA8
    // 0x0045A9B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    entry_00426BA8(rdram, ctx);
        goto after_1;
    // 0x0045A9B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x0045A9BC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0045A9C0: jal         0x00426C74
    // 0x0045A9C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00426C74(rdram, ctx);
        goto after_2;
    // 0x0045A9C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0045A9C8: bnel        $v0, $zero, L_0045A9E0
    if (ctx->r2 != 0) {
        // 0x0045A9CC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0045A9E0;
    }
    goto skip_0;
    // 0x0045A9CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0045A9D0: bnel        $s1, $zero, L_0045A9D8
    if (ctx->r17 != 0) {
        // 0x0045A9D4: sw          $s0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r16;
            goto L_0045A9D8;
    }
    goto skip_1;
    // 0x0045A9D4: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    skip_1:
L_0045A9D8:
    // 0x0045A9D8: j           L_004219F0
    // 0x0045A9DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    entry_004219F0(rdram, ctx);
    return;
    // 0x0045A9DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0045A9E0:
    // 0x0045A9E0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0045A9E4: bne         $v0, $zero, L_0045A9A0
    if (ctx->r2 != 0) {
        // 0x0045A9E8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0045A9A0;
    }
    // 0x0045A9E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0045A9EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045A9F0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0045A9F4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0045A9F8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0045A9FC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0045AA00: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0045AA04: jr          $ra
    // 0x0045AA08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0045AA08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0045D20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00424260:
    // 0x0045D20C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045D210: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045D214: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0045D218: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x0045D21C: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x0045D220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045D224: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045D228: beq         $v1, $v0, L_0045D258
    if (ctx->r3 == ctx->r2) {
        // 0x0045D22C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_0045D258;
    }
    // 0x0045D22C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045D230: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0045D234: beq         $v0, $zero, L_0045D24C
    if (ctx->r2 == 0) {
        // 0x0045D238: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0045D24C;
    }
    // 0x0045D238: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0045D23C: beq         $v1, $zero, L_0045D254
    if (ctx->r3 == 0) {
        // 0x0045D240: sll         $v1, $s0, 3
        ctx->r3 = S32(ctx->r16 << 3);
            goto L_0045D254;
    }
    // 0x0045D240: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x0045D244: j           L_00424260
    // 0x0045D248: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    entry_00424260(rdram, ctx);
    return;
    // 0x0045D248: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
L_0045D24C:
    // 0x0045D24C: bne         $v1, $v0, L_0045D25C
    if (ctx->r3 != ctx->r2) {
        // 0x0045D250: sll         $v1, $s0, 3
        ctx->r3 = S32(ctx->r16 << 3);
            goto L_0045D25C;
    }
    // 0x0045D250: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
L_0045D254:
    // 0x0045D254: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_0045D258:
    // 0x0045D258: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
L_0045D25C:
    // 0x0045D25C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x0045D260: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045D264: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x0045D268: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045D26C: lw          $a0, 0x2038($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2038);
    // 0x0045D270: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045D274: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0045D278: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0045D27C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045D280: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045D284: addiu       $a0, $a0, 0x2054
    ctx->r4 = ADD32(ctx->r4, 0X2054);
    // 0x0045D288: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0045D28C: jal         0x00266B80
    // 0x0045D290: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0045D290: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    after_0:
    // 0x0045D294: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0045D298: beq         $v0, $v1, L_0045D2A8
    if (ctx->r2 == ctx->r3) {
        // 0x0045D29C: ori         $a1, $zero, 0xF660
        ctx->r5 = 0 | 0XF660;
            goto L_0045D2A8;
    }
    // 0x0045D29C: ori         $a1, $zero, 0xF660
    ctx->r5 = 0 | 0XF660;
    // 0x0045D2A0: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x0045D2A4: ori         $a1, $a1, 0xA300
    ctx->r5 = ctx->r5 | 0XA300;
L_0045D2A8:
    // 0x0045D2A8: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x0045D2AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D2B0: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x0045D2B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D2B8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045D2BC: lw          $v1, 0x204C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X204C);
    // 0x0045D2C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0045D2C4: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0045D2C8: bne         $v1, $zero, L_0045D2D4
    if (ctx->r3 != 0) {
        // 0x0045D2CC: nop
    
            goto L_0045D2D4;
    }
    // 0x0045D2CC: nop

    // 0x0045D2D0: break       7
    do_break(4575952);
L_0045D2D4:
    // 0x0045D2D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0045D2D8: bne         $v1, $at, L_0045D2EC
    if (ctx->r3 != ctx->r1) {
        // 0x0045D2DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0045D2EC;
    }
    // 0x0045D2DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0045D2E0: bne         $v0, $at, L_0045D2EC
    if (ctx->r2 != ctx->r1) {
        // 0x0045D2E4: nop
    
            goto L_0045D2EC;
    }
    // 0x0045D2E4: nop

    // 0x0045D2E8: break       6
    do_break(4575976);
L_0045D2EC:
    // 0x0045D2EC: mfhi        $v1
    ctx->r3 = hi;
    // 0x0045D2F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D2F4: sw          $v1, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r3;
    // 0x0045D2F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0045D2FC: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x0045D300: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0045D304: mflo        $a2
    ctx->r6 = lo;
    // 0x0045D308: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0045D30C: beq         $v0, $zero, L_0045D378
    if (ctx->r2 == 0) {
        // 0x0045D310: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_0045D378;
    }
    // 0x0045D310: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0045D314: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D318: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045D31C: lw          $a0, 0x204C($at)
    ctx->r4 = MEM_W(ctx->r1, 0X204C);
L_0045D320:
    // 0x0045D320: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045D324: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x0045D328: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0045D32C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x0045D330: bne         $a0, $zero, L_0045D33C
    if (ctx->r4 != 0) {
        // 0x0045D334: nop
    
            goto L_0045D33C;
    }
    // 0x0045D334: nop

    // 0x0045D338: break       7
    do_break(4576056);
L_0045D33C:
    // 0x0045D33C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0045D340: bne         $a0, $at, L_0045D354
    if (ctx->r4 != ctx->r1) {
        // 0x0045D344: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0045D354;
    }
    // 0x0045D344: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0045D348: bne         $v0, $at, L_0045D354
    if (ctx->r2 != ctx->r1) {
        // 0x0045D34C: nop
    
            goto L_0045D354;
    }
    // 0x0045D34C: nop

    // 0x0045D350: break       6
    do_break(4576080);
L_0045D354:
    // 0x0045D354: mfhi        $v1
    ctx->r3 = hi;
    // 0x0045D358: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D35C: sw          $v1, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r3;
    // 0x0045D360: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0045D364: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0045D368: mflo        $v1
    ctx->r3 = lo;
    // 0x0045D36C: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0045D370: bne         $v0, $zero, L_0045D320
    if (ctx->r2 != 0) {
        // 0x0045D374: nop
    
            goto L_0045D320;
    }
    // 0x0045D374: nop

L_0045D378:
    // 0x0045D378: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x0045D37C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x0045D380: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045D384: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x0045D388: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045D38C: lw          $a0, 0x2038($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2038);
    // 0x0045D390: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0045D394: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0045D398: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0045D39C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045D3A0: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
    // 0x0045D3A4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0045D3A8: lw          $a0, 0x203C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X203C);
    // 0x0045D3AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D3B0: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0045D3B4: lw          $a1, 0x2054($at)
    ctx->r5 = MEM_W(ctx->r1, 0X2054);
    // 0x0045D3B8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0045D3BC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0045D3C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0045D3C4: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x0045D3C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D3CC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045D3D0: lw          $v1, 0x2054($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2054);
    // 0x0045D3D4: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0045D3D8: bnel        $v0, $zero, L_0045D3E0
    if (ctx->r2 != 0) {
        // 0x0045D3DC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_0045D3E0;
    }
    goto skip_0;
    // 0x0045D3DC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_0045D3E0:
    // 0x0045D3E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D3E4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x0045D3E8: lw          $v1, 0x2058($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2058);
    // 0x0045D3EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D3F0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0045D3F4: lw          $a0, 0x2058($at)
    ctx->r4 = MEM_W(ctx->r1, 0X2058);
    // 0x0045D3F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D3FC: sw          $a1, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r5;
    // 0x0045D400: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0045D404: bnel        $v0, $zero, L_0045D40C
    if (ctx->r2 != 0) {
        // 0x0045D408: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0045D40C;
    }
    goto skip_1;
    // 0x0045D408: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_0045D40C:
    // 0x0045D40C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045D410: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045D414: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045D418: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D41C: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // 0x0045D420: jr          $ra
    // 0x0045D424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045D424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00255D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255D70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00255D74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00255D78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00255D7C: lui         $v0, 0xFF7F
    ctx->r2 = S32(0XFF7F << 16);
    // 0x00255D80: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00255D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00255D88: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x00255D8C: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x00255D90: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00255D94: jal         0x0042EB04
    // 0x00255D98: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    func_0042EB04(rdram, ctx);
        goto after_0;
    // 0x00255D98: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    after_0:
    // 0x00255D9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00255DA0: addiu       $a0, $a0, -0x550F
    ctx->r4 = ADD32(ctx->r4, -0X550F);
    // 0x00255DA4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00255DA8: beq         $v0, $zero, L_00255E34
    if (ctx->r2 == 0) {
        // 0x00255DAC: nop
    
            goto L_00255E34;
    }
    // 0x00255DAC: nop

    // 0x00255DB0: addiu       $a0, $a0, -0x1281
    ctx->r4 = ADD32(ctx->r4, -0X1281);
    // 0x00255DB4: jal         0x0025340C
    // 0x00255DB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_1;
    // 0x00255DB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00255DBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00255DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00255DC4: beq         $v1, $v0, L_00255DF4
    if (ctx->r3 == ctx->r2) {
        // 0x00255DC8: nop
    
            goto L_00255DF4;
    }
    // 0x00255DC8: nop

    // 0x00255DCC: beq         $v1, $zero, L_00255DE4
    if (ctx->r3 == 0) {
        // 0x00255DD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00255DE4;
    }
    // 0x00255DD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00255DD4: beq         $v1, $v0, L_00255E04
    if (ctx->r3 == ctx->r2) {
        // 0x00255DD8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00255E04;
    }
    // 0x00255DD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00255DDC: beq         $v1, $v0, L_00255E14
    if (ctx->r3 == ctx->r2) {
        // 0x00255DE0: nop
    
            goto L_00255E14;
    }
    // 0x00255DE0: nop

L_00255DE4:
    // 0x00255DE4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255DE8: addiu       $a1, $a1, -0x5410
    ctx->r5 = ADD32(ctx->r5, -0X5410);
    // 0x00255DEC: j           L_00255E1C
    // 0x00255DF0: nop

        goto L_00255E1C;
    // 0x00255DF0: nop

L_00255DF4:
    // 0x00255DF4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255DF8: addiu       $a1, $a1, -0x53EC
    ctx->r5 = ADD32(ctx->r5, -0X53EC);
    // 0x00255DFC: j           L_00255E1C
    // 0x00255E00: nop

        goto L_00255E1C;
    // 0x00255E00: nop

L_00255E04:
    // 0x00255E04: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255E08: addiu       $a1, $a1, -0x53C8
    ctx->r5 = ADD32(ctx->r5, -0X53C8);
    // 0x00255E0C: j           L_00255E1C
    // 0x00255E10: nop

        goto L_00255E1C;
    // 0x00255E10: nop

L_00255E14:
    // 0x00255E14: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255E18: addiu       $a1, $a1, -0x53A4
    ctx->r5 = ADD32(ctx->r5, -0X53A4);
L_00255E1C:
    // 0x00255E1C: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00255E20: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00255E24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00255E28: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x00255E2C: jal         0x00416644
    // 0x00255E30: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x00255E30: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_2:
L_00255E34:
    // 0x00255E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00255E38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00255E3C: jr          $ra
    // 0x00255E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00255E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00271BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271BEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00271BF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00271BF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00271BF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00271BFC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00271C00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00271C04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00271C08: lw          $v0, 0x2B54($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2B54);
    // 0x00271C0C: beq         $v0, $zero, L_00271D38
    if (ctx->r2 == 0) {
        // 0x00271C10: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_00271D38;
    }
    // 0x00271C10: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00271C14: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x00271C18: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x00271C1C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00271C20: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00271C24: lw          $a0, 0x2B58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2B58);
    // 0x00271C28: lw          $a1, 0x2B54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2B54);
    // 0x00271C2C: jal         0x00266D8C
    // 0x00271C30: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x00271C30: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x00271C34: beq         $v0, $zero, L_00271D3C
    if (ctx->r2 == 0) {
        // 0x00271C38: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00271D3C;
    }
    // 0x00271C38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00271C3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00271C40: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00271C44: beq         $a0, $a2, L_00271D30
    if (ctx->r4 == ctx->r6) {
        // 0x00271C48: slt         $v0, $a2, $a0
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_00271D30;
    }
    // 0x00271C48: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x00271C4C: bne         $v0, $zero, L_00271C84
    if (ctx->r2 != 0) {
        // 0x00271C50: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_00271C84;
    }
    // 0x00271C50: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00271C54: lw          $v1, 0x2B5C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2B5C);
    // 0x00271C58: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00271C5C: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
L_00271C60:
    // 0x00271C60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00271C64: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x00271C68: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00271C6C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00271C70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00271C74: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00271C78: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00271C7C: beq         $v0, $zero, L_00271C60
    if (ctx->r2 == 0) {
        // 0x00271C80: addu        $s0, $s0, $v1
        ctx->r16 = ADD32(ctx->r16, ctx->r3);
            goto L_00271C60;
    }
    // 0x00271C80: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_00271C84:
    // 0x00271C84: jal         0x002113A4
    // 0x00271C88: nop

    func_002113A4(rdram, ctx);
        goto after_1;
    // 0x00271C88: nop

    after_1:
    // 0x00271C8C: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x00271C90: bne         $s0, $zero, L_00271C9C
    if (ctx->r16 != 0) {
        // 0x00271C94: nop
    
            goto L_00271C9C;
    }
    // 0x00271C94: nop

    // 0x00271C98: break       7
    do_break(2563224);
L_00271C9C:
    // 0x00271C9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00271CA0: bne         $s0, $at, L_00271CB4
    if (ctx->r16 != ctx->r1) {
        // 0x00271CA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00271CB4;
    }
    // 0x00271CA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00271CA8: bne         $v0, $at, L_00271CB4
    if (ctx->r2 != ctx->r1) {
        // 0x00271CAC: nop
    
            goto L_00271CB4;
    }
    // 0x00271CAC: nop

    // 0x00271CB0: break       6
    do_break(2563248);
L_00271CB4:
    // 0x00271CB4: mfhi        $a3
    ctx->r7 = hi;
    // 0x00271CB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x00271CBC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00271CC0: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00271CC4: beq         $v0, $zero, L_00271D08
    if (ctx->r2 == 0) {
        // 0x00271CC8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00271D08;
    }
    // 0x00271CC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00271CCC: lw          $v1, 0x2B5C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2B5C);
    // 0x00271CD0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00271CD4: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
L_00271CD8:
    // 0x00271CD8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00271CDC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00271CE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00271CE4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00271CE8: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x00271CEC: slt         $v0, $s0, $a3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00271CF0: beq         $v0, $zero, L_00271D0C
    if (ctx->r2 == 0) {
        // 0x00271CF4: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_00271D0C;
    }
    // 0x00271CF4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x00271CF8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00271CFC: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00271D00: bne         $v0, $zero, L_00271CD8
    if (ctx->r2 != 0) {
        // 0x00271D04: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_00271CD8;
    }
    // 0x00271D04: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_00271D08:
    // 0x00271D08: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_00271D0C:
    // 0x00271D0C: beq         $v0, $zero, L_00271D3C
    if (ctx->r2 == 0) {
        // 0x00271D10: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00271D3C;
    }
    // 0x00271D10: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00271D14: lw          $v0, 0x130($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X130);
    // 0x00271D18: bne         $a0, $v0, L_00271D3C
    if (ctx->r4 != ctx->r2) {
        // 0x00271D1C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00271D3C;
    }
    // 0x00271D1C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00271D20: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x00271D24: bnel        $a0, $v0, L_00271D30
    if (ctx->r4 != ctx->r2) {
        // 0x00271D28: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00271D30;
    }
    goto skip_0;
    // 0x00271D28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x00271D2C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_00271D30:
    // 0x00271D30: j           L_00271D3C
    // 0x00271D34: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
        goto L_00271D3C;
    // 0x00271D34: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00271D38:
    // 0x00271D38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00271D3C:
    // 0x00271D3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00271D40: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00271D44: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00271D48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00271D4C: jr          $ra
    // 0x00271D50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00271D50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045E674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00266924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266928: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0026692C: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x00266930: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266934: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266938: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026693C: lw          $v0, 0xD4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD4);
    // 0x00266940: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00266944: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266948: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x0026694C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00266950: jal         0x00220260
    // 0x00266954: sw          $v0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->r2;
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x00266954: sw          $v0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->r2;
    after_0:
    // 0x00266958: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026695C: jr          $ra
    // 0x00266960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029D000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029D004: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D008: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0029D00C: lw          $v0, 0x3AD4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3AD4);
    // 0x0029D010: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x0029D014: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029D018: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x0029D01C: addiu       $a2, $v0, 0x14
    ctx->r6 = ADD32(ctx->r2, 0X14);
    // 0x0029D020: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x0029D024: beq         $v0, $zero, L_0029D040
    if (ctx->r2 == 0) {
        // 0x0029D028: lui         $a0, 0xA460
        ctx->r4 = S32(0XA460 << 16);
            goto L_0029D040;
    }
    // 0x0029D028: lui         $a0, 0xA460
    ctx->r4 = S32(0XA460 << 16);
    // 0x0029D02C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
L_0029D030:
    // 0x0029D030: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0029D034: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x0029D038: bne         $v0, $zero, L_0029D030
    if (ctx->r2 != 0) {
        // 0x0029D03C: nop
    
            goto L_0029D030;
    }
    // 0x0029D03C: nop

L_0029D040:
    // 0x0029D040: lui         $a1, 0xA500
    ctx->r5 = S32(0XA500 << 16);
    // 0x0029D044: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x0029D048: lui         $a0, 0xA460
    ctx->r4 = S32(0XA460 << 16);
    // 0x0029D04C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x0029D050: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x0029D054: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x0029D058: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0029D05C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0029D060: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0029D064: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x0029D068: beq         $v0, $zero, L_0029D084
    if (ctx->r2 == 0) {
        // 0x0029D06C: lui         $a0, 0xA460
        ctx->r4 = S32(0XA460 << 16);
            goto L_0029D084;
    }
    // 0x0029D06C: lui         $a0, 0xA460
    ctx->r4 = S32(0XA460 << 16);
    // 0x0029D070: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
L_0029D074:
    // 0x0029D074: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0029D078: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x0029D07C: bne         $v0, $zero, L_0029D074
    if (ctx->r2 != 0) {
        // 0x0029D080: nop
    
            goto L_0029D074;
    }
    // 0x0029D080: nop

L_0029D084:
    // 0x0029D084: lui         $v1, 0xA500
    ctx->r3 = S32(0XA500 << 16);
    // 0x0029D088: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x0029D08C: ori         $v1, $v1, 0x510
    ctx->r3 = ctx->r3 | 0X510;
    // 0x0029D090: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029D094: jal         0x0029D0D4
    // 0x0029D098: nop

    func_0029D0D4(rdram, ctx);
        goto after_0;
    // 0x0029D098: nop

    after_0:
    // 0x0029D09C: lui         $a2, 0xA460
    ctx->r6 = S32(0XA460 << 16);
    // 0x0029D0A0: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
    // 0x0029D0A4: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x0029D0A8: ori         $a1, $a1, 0x401
    ctx->r5 = ctx->r5 | 0X401;
    // 0x0029D0AC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029D0B0: addiu       $a0, $a0, -0x76F8
    ctx->r4 = ADD32(ctx->r4, -0X76F8);
    // 0x0029D0B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029D0B8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0029D0BC: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0029D0C0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x0029D0C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029D0C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029D0CC: jr          $ra
    // 0x0029D0D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029D0D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00410A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00410A74: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410A78: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410A7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00410A80: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00410A84: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x00410A88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00410A8C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410A90: jal         0x002017D4
    // 0x00410A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00410A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00410A98: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x00410A9C: bne         $a0, $zero, L_00410AB0
    if (ctx->r4 != 0) {
        // 0x00410AA0: addiu       $v1, $v0, 0x8
        ctx->r3 = ADD32(ctx->r2, 0X8);
            goto L_00410AB0;
    }
    // 0x00410AA0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00410AA4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x00410AA8: j           L_00410B5C
    // 0x00410AAC: nop

    func_00410B5C(rdram, ctx);
    return;
    // 0x00410AAC: nop

L_00410AB0:
    // 0x00410AB0: lwc1        $f1, 0x10($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X10);
    // 0x00410AB4: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x00410AB8: nop

    // 0x00410ABC: bc1f        L_00410AD0
    if (!c1cs) {
        // 0x00410AC0: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_00410AD0;
    }
    // 0x00410AC0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00410AC4: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00410AC8: j           L_00410B5C
    // 0x00410ACC: nop

    func_00410B5C(rdram, ctx);
    return;
    // 0x00410ACC: nop

L_00410AD0:
    // 0x00410AD0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00410AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00410AD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00410ADC: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x00410AE0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x00410AE4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00410AE8: nop

    // 0x00410AEC: bc1f        L_00410B00
    if (!c1cs) {
        // 0x00410AF0: nop
    
            goto L_00410B00;
    }
    // 0x00410AF0: nop

    // 0x00410AF4: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00410AF8: j           L_00410B5C
    // 0x00410AFC: nop

    func_00410B5C(rdram, ctx);
    return;
    // 0x00410AFC: nop

L_00410B00:
    // 0x00410B00: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x00410B04: nop

    // 0x00410B08: bc1f        L_00410B28
    if (!c1cs) {
        // 0x00410B0C: nop
    
            goto L_00410B28;
    }
    // 0x00410B0C: nop

    // 0x00410B10: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_00410B14:
    // 0x00410B14: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00410B18: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00410B1C: nop

    // 0x00410B20: bc1tl       L_00410B14
    if (c1cs) {
        // 0x00410B24: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_00410B14;
    }
    goto skip_0;
    // 0x00410B24: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    skip_0:
L_00410B28:
    // 0x00410B28: lwc1        $f1, -0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, -0X4);
    // 0x00410B2C: sub.s       $f3, $f20, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00410B30: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x00410B34: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00410B38: div.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00410B3C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00410B40: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00410B44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410B48: lwc1        $f1, 0x98C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X98C);
    // 0x00410B4C: sub.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f3.fl;
    // 0x00410B50: lwc1        $f2, -0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, -0X8);
    // 0x00410B54: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x00410B58: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // turok2: reconnected split function: a stray ELF symbol at 0x00410B5C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00410B5C(rdram, ctx);
;}
RECOMP_FUNC void func_002A28D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A28D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002A28DC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002A28E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A28E4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002A28E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002A28EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002A28F0: jal         0x002A2494
    // 0x002A28F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_002A2494(rdram, ctx);
        goto after_0;
    // 0x002A28F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A28F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A28FC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2900: lw          $v1, -0x3CFC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3CFC);
    // 0x002A2904: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2908: bne         $v1, $v0, L_002A2980
    if (ctx->r3 != ctx->r2) {
        // 0x002A290C: lui         $v1, 0x8000
        ctx->r3 = S32(0X8000 << 16);
            goto L_002A2980;
    }
    // 0x002A290C: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x002A2910: ori         $v1, $v1, 0x202
    ctx->r3 = ctx->r3 | 0X202;
    // 0x002A2914: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2918: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A291C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2920: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2924: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002A2928: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x002A292C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A2930: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002A2934: addiu       $s0, $s0, -0x7AC0
    ctx->r16 = ADD32(ctx->r16, -0X7AC0);
    // 0x002A2938: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002A293C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002A2940: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x002A2944: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x002A2948: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002A294C: jal         0x0029B820
    // 0x002A2950: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A2950: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_1:
    // 0x002A2954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A2958: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A295C: jal         0x0029B6F0
    // 0x002A2960: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002A2960: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002A2964: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x002A2968: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x002A296C: beq         $v0, $zero, L_002A29D4
    if (ctx->r2 == 0) {
        // 0x002A2970: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_002A29D4;
    }
    // 0x002A2970: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x002A2974: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002A2978: j           L_002A29D4
    // 0x002A297C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_002A29D4;
    // 0x002A297C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_002A2980:
    // 0x002A2980: jal         0x002A12F0
    // 0x002A2984: nop

    func_002A12F0(rdram, ctx);
        goto after_3;
    // 0x002A2984: nop

    after_3:
    // 0x002A2988: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A298C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002A2990: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002A2994: jal         0x002A1A3C
    // 0x002A2998: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002A1A3C(rdram, ctx);
        goto after_4;
    // 0x002A2998: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002A299C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    // 0x002A29A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A29A4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002A29A8: jal         0x002A259C
    // 0x002A29AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002A259C(rdram, ctx);
        goto after_5;
    // 0x002A29AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x002A29B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002A29B4: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x002A29B8: beq         $v0, $zero, L_002A29CC
    if (ctx->r2 == 0) {
        // 0x002A29BC: sw          $v1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r3;
            goto L_002A29CC;
    }
    // 0x002A29BC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x002A29C0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x002A29C4: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002A29C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_002A29CC:
    // 0x002A29CC: jal         0x002A1324
    // 0x002A29D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002A1324(rdram, ctx);
        goto after_6;
    // 0x002A29D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_002A29D4:
    // 0x002A29D4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A29D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x002A29DC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002A29E0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002A29E4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A29E8: jr          $ra
    // 0x002A29EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002A29EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00298E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00298E08: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00298E0C: lh          $v0, 0x74($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X74);
;}
