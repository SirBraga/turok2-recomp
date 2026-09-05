#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00227C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227C10: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x00227C14: sw          $s6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r22;
    // 0x00227C18: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x00227C1C: sw          $fp, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r30;
    // 0x00227C20: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00227C24: sw          $s3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r19;
    // 0x00227C28: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00227C2C: sw          $s4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r20;
    // 0x00227C30: lui         $s4, 0x800F
    ctx->r20 = S32(0X800F << 16);
    // 0x00227C34: addiu       $s4, $s4, 0x7078
    ctx->r20 = ADD32(ctx->r20, 0X7078);
    // 0x00227C38: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00227C3C: sw          $s7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r23;
    // 0x00227C40: lw          $s7, 0xF4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XF4);
    // 0x00227C44: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x00227C48: sw          $s5, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r21;
    // 0x00227C4C: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x00227C50: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x00227C54: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x00227C58: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x00227C5C: jal         0x00224180
    // 0x00227C60: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00227C60: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    after_0:
    // 0x00227C64: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00227C68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00227C6C: beq         $s1, $v0, L_00227EB8
    if (ctx->r17 == ctx->r2) {
        // 0x00227C70: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_00227EB8;
    }
    // 0x00227C70: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00227C74: lw          $a0, 0x40($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X40);
    // 0x00227C78: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x00227C7C: jal         0x00201848
    // 0x00227C80: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00201848(rdram, ctx);
        goto after_1;
    // 0x00227C80: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00227C84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00227C88: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00227C8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00227C90: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00227C94: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00227C98: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00227C9C: addiu       $v0, $v0, 0x6070
    ctx->r2 = ADD32(ctx->r2, 0X6070);
    // 0x00227CA0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00227CA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00227CA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00227CAC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00227CB0: jal         0x0020367C
    // 0x00227CB4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x00227CB4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_2:
    // 0x00227CB8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00227CBC: beq         $s5, $zero, L_00227EB4
    if (ctx->r21 == 0) {
        // 0x00227CC0: addu        $a2, $s3, $zero
        ctx->r6 = ADD32(ctx->r19, 0);
            goto L_00227EB4;
    }
    // 0x00227CC0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00227CC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00227CC8: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x00227CCC: jal         0x0020185C
    // 0x00227CD0: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    func_0020185C(rdram, ctx);
        goto after_3;
    // 0x00227CD0: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    after_3:
    // 0x00227CD4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00227CD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00227CDC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x00227CE0: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x00227CE4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00227CE8: addiu       $v0, $v0, 0x6084
    ctx->r2 = ADD32(ctx->r2, 0X6084);
    // 0x00227CEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00227CF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00227CF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00227CF8: jal         0x0020367C
    // 0x00227CFC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_4;
    // 0x00227CFC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_4:
    // 0x00227D00: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00227D04: beql        $s2, $zero, L_00227EAC
    if (ctx->r18 == 0) {
        // 0x00227D08: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00227EAC;
    }
    goto skip_0;
    // 0x00227D08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x00227D0C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x00227D10: jal         0x002017D4
    // 0x00227D14: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00227D14: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x00227D18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00227D1C: lhu         $a1, 0x1C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X1C);
    // 0x00227D20: jal         0x00225E88
    // 0x00227D24: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_00225E88(rdram, ctx);
        goto after_6;
    // 0x00227D24: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_6:
    // 0x00227D28: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x00227D2C: jal         0x0026D210
    // 0x00227D30: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_0026D210(rdram, ctx);
        goto after_7;
    // 0x00227D30: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00227D34: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x00227D38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00227D3C: jal         0x0020EF60
    // 0x00227D40: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x00227D40: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_8:
    // 0x00227D44: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00227D48: lw          $v0, 0x6D54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D54);
    // 0x00227D4C: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x00227D50: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x00227D54: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x00227D58: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x00227D5C: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x00227D60: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x00227D64: lw          $v1, 0xDC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XDC);
    // 0x00227D68: lw          $t0, 0xE0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE0);
    // 0x00227D6C: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x00227D70: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    // 0x00227D74: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x00227D78: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x00227D7C: lw          $v1, 0xE8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE8);
    // 0x00227D80: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x00227D84: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x00227D88: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    // 0x00227D8C: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x00227D90: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x00227D94: beq         $v0, $zero, L_00227EA0
    if (ctx->r2 == 0) {
        // 0x00227D98: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00227EA0;
    }
    // 0x00227D98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00227D9C: beq         $s4, $zero, L_00227EA0
    if (ctx->r20 == 0) {
        // 0x00227DA0: nop
    
            goto L_00227EA0;
    }
    // 0x00227DA0: nop

    // 0x00227DA4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00227DA8: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00227DAC: bne         $v0, $zero, L_00227DC4
    if (ctx->r2 != 0) {
        // 0x00227DB0: nop
    
            goto L_00227DC4;
    }
    // 0x00227DB0: nop

    // 0x00227DB4: lw          $v0, 0x5324($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X5324);
    // 0x00227DB8: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x00227DBC: beq         $v0, $zero, L_00227DFC
    if (ctx->r2 == 0) {
        // 0x00227DC0: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_00227DFC;
    }
    // 0x00227DC0: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00227DC4:
    // 0x00227DC4: lw          $s0, 0x5300($s6)
    ctx->r16 = MEM_W(ctx->r22, 0X5300);
    // 0x00227DC8: beq         $s0, $zero, L_00227DF8
    if (ctx->r16 == 0) {
        // 0x00227DCC: addiu       $a0, $s6, 0x5300
        ctx->r4 = ADD32(ctx->r22, 0X5300);
            goto L_00227DF8;
    }
    // 0x00227DCC: addiu       $a0, $s6, 0x5300
    ctx->r4 = ADD32(ctx->r22, 0X5300);
    // 0x00227DD0: jal         0x00200738
    // 0x00227DD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_9;
    // 0x00227DD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00227DD8: addiu       $a0, $s6, 0x5314
    ctx->r4 = ADD32(ctx->r22, 0X5314);
    // 0x00227DDC: jal         0x00200518
    // 0x00227DE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_10;
    // 0x00227DE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00227DE4: beq         $s7, $zero, L_00227DF8
    if (ctx->r23 == 0) {
        // 0x00227DE8: sw          $s7, 0x290($s0)
        MEM_W(0X290, ctx->r16) = ctx->r23;
            goto L_00227DF8;
    }
    // 0x00227DE8: sw          $s7, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->r23;
    // 0x00227DEC: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x00227DF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00227DF4: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
L_00227DF8:
    // 0x00227DF8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00227DFC:
    // 0x00227DFC: bne         $v0, $zero, L_00227E0C
    if (ctx->r2 != 0) {
        // 0x00227E00: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00227E0C;
    }
    // 0x00227E00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00227E04: j           L_00227E9C
    // 0x00227E08: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
        goto L_00227E9C;
    // 0x00227E08: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_00227E0C:
    // 0x00227E0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00227E10: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    // 0x00227E14: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00227E18: lw          $v1, 0xC8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC8);
    // 0x00227E1C: lwc1        $f0, 0xD8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x00227E20: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x00227E24: lw          $a3, 0x6D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6D00);
    // 0x00227E28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00227E2C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00227E30: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x00227E34: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00227E38: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x00227E3C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x00227E40: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x00227E44: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x00227E48: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x00227E4C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00227E50: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00227E54: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00227E58: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x00227E5C: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x00227E60: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x00227E64: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x00227E68: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00227E6C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x00227E70: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00227E74: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x00227E78: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x00227E7C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x00227E80: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x00227E84: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x00227E88: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x00227E8C: jal         0x00219BC0
    // 0x00227E90: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    func_00219BC0(rdram, ctx);
        goto after_11;
    // 0x00227E90: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    after_11:
    // 0x00227E94: jal         0x0021E5D4
    // 0x00227E98: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0021E5D4(rdram, ctx);
        goto after_12;
    // 0x00227E98: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
L_00227E9C:
    // 0x00227E9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00227EA0:
    // 0x00227EA0: jal         0x002051F4
    // 0x00227EA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x00227EA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_13:
    // 0x00227EA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00227EAC:
    // 0x00227EAC: jal         0x002051F4
    // 0x00227EB0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_14;
    // 0x00227EB0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_14:
L_00227EB4:
    // 0x00227EB4: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_00227EB8:
    // 0x00227EB8: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x00227EBC: lw          $fp, 0xB8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB8);
    // 0x00227EC0: lw          $s7, 0xB4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XB4);
    // 0x00227EC4: lw          $s6, 0xB0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB0);
    // 0x00227EC8: lw          $s5, 0xAC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XAC);
    // 0x00227ECC: lw          $s4, 0xA8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA8);
    // 0x00227ED0: lw          $s3, 0xA4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA4);
    // 0x00227ED4: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x00227ED8: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x00227EDC: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x00227EE0: jr          $ra
    // 0x00227EE4: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x00227EE4: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_00268BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268BF8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00268BFC: jr          $ra
    // 0x00268C00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    return;
    // 0x00268C00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
;}
RECOMP_FUNC void func_0042F4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F4F0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0042F4F4: addiu       $v0, $v0, 0x56B0
    ctx->r2 = ADD32(ctx->r2, 0X56B0);
    // 0x0042F4F8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0042F4FC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0042F500: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0042F504: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x0042F508: sw          $zero, 0x350($v0)
    MEM_W(0X350, ctx->r2) = 0;
    // 0x0042F50C: jr          $ra
    // 0x0042F510: sw          $zero, 0x1C8($v0)
    MEM_W(0X1C8, ctx->r2) = 0;
    return;
    // 0x0042F510: sw          $zero, 0x1C8($v0)
    MEM_W(0X1C8, ctx->r2) = 0;
;}
RECOMP_FUNC void func_00463B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042AC10:
    // 0x00463B2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
L_0042AC18:
    // 0x00463B30: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
L_0042AE90:
    // 0x00463B34: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_0042AE9C:
    // 0x00463B38: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
L_0042AF44:
    // 0x00463B3C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00463B40: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00463B44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00463B48: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00463B4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00463B50: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463B54: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463B58: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x00463B5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00463B60: beq         $v1, $v0, L_00463B70
    if (ctx->r3 == ctx->r2) {
        // 0x00463B64: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_00463B70;
    }
    // 0x00463B64: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00463B68: jal         0x0042C88C
    // 0x00463B6C: nop

    entry_0042C88C(rdram, ctx);
        goto after_0;
    // 0x00463B6C: nop

    after_0:
L_00463B70:
    // 0x00463B70: jal         0x00284174
    // 0x00463B74: nop

    func_00284174(rdram, ctx);
        goto after_1;
    // 0x00463B74: nop

    after_1:
    // 0x00463B78: bne         $v0, $zero, L_00463C18
    if (ctx->r2 != 0) {
        // 0x00463B7C: nop
    
            goto L_00463C18;
    }
    // 0x00463B7C: nop

    // 0x00463B80: jal         0x0027BC34
    // 0x00463B84: nop

    func_0027BC34(rdram, ctx);
        goto after_2;
    // 0x00463B84: nop

    after_2:
    // 0x00463B88: bne         $v0, $zero, L_00463C18
    if (ctx->r2 != 0) {
        // 0x00463B8C: nop
    
            goto L_00463C18;
    }
    // 0x00463B8C: nop

    // 0x00463B90: beq         $s1, $zero, L_00463C18
    if (ctx->r17 == 0) {
        // 0x00463B94: nop
    
            goto L_00463C18;
    }
    // 0x00463B94: nop

    // 0x00463B98: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463B9C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463BA0: lw          $v0, -0x7048($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7048);
    // 0x00463BA4: beq         $v0, $zero, L_00463C18
    if (ctx->r2 == 0) {
        // 0x00463BA8: addiu       $v0, $zero, 0xFA0
        ctx->r2 = ADD32(0, 0XFA0);
            goto L_00463C18;
    }
    // 0x00463BA8: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    // 0x00463BAC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463BB0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463BB4: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x00463BB8: beq         $v1, $v0, L_00463C04
    if (ctx->r3 == ctx->r2) {
        // 0x00463BBC: slti        $v0, $v1, 0xFA1
        ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
            goto L_00463C04;
    }
    // 0x00463BBC: slti        $v0, $v1, 0xFA1
    ctx->r2 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
    // 0x00463BC0: beq         $v0, $zero, L_00463BE0
    if (ctx->r2 == 0) {
        // 0x00463BC4: addiu       $v0, $zero, 0x7D0
        ctx->r2 = ADD32(0, 0X7D0);
            goto L_00463BE0;
    }
    // 0x00463BC4: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x00463BC8: beq         $v1, $v0, L_00463BFC
    if (ctx->r3 == ctx->r2) {
        // 0x00463BCC: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_00463BFC;
    }
    // 0x00463BCC: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x00463BD0: beql        $v1, $v0, L_00463C10
    if (ctx->r3 == ctx->r2) {
        // 0x00463BD4: addiu       $a0, $zero, 0x8F
        ctx->r4 = ADD32(0, 0X8F);
            goto L_00463C10;
    }
    goto skip_0;
    // 0x00463BD4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    skip_0:
    // 0x00463BD8: j           L_0042AC18
    // 0x00463BDC: nop

    entry_0042AC18(rdram, ctx);
    return;
    // 0x00463BDC: nop

L_00463BE0:
    // 0x00463BE0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x00463BE4: beq         $v1, $v0, L_00463C0C
    if (ctx->r3 == ctx->r2) {
        // 0x00463BE8: addiu       $v0, $zero, 0x1770
        ctx->r2 = ADD32(0, 0X1770);
            goto L_00463C0C;
    }
    // 0x00463BE8: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    // 0x00463BEC: beql        $v1, $v0, L_00463C10
    if (ctx->r3 == ctx->r2) {
        // 0x00463BF0: addiu       $a0, $zero, 0x92
        ctx->r4 = ADD32(0, 0X92);
            goto L_00463C10;
    }
    goto skip_1;
    // 0x00463BF0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    skip_1:
    // 0x00463BF4: j           L_0042AC18
    // 0x00463BF8: nop

    entry_0042AC18(rdram, ctx);
    return;
    // 0x00463BF8: nop

L_00463BFC:
    // 0x00463BFC: j           L_0042AC10
    // 0x00463C00: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    entry_0042AC10(rdram, ctx);
    return;
    // 0x00463C00: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
L_00463C04:
    // 0x00463C04: j           L_0042AC10
    // 0x00463C08: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    entry_0042AC10(rdram, ctx);
    return;
    // 0x00463C08: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
L_00463C0C:
    // 0x00463C0C: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
L_00463C10:
    // 0x00463C10: jal         0x00412B28
    // 0x00463C14: nop

    func_00412B28(rdram, ctx);
        goto after_3;
    // 0x00463C14: nop

    after_3:
L_00463C18:
    // 0x00463C18: jal         0x00226724
    // 0x00463C1C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226724(rdram, ctx);
        goto after_4;
    // 0x00463C1C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x00463C20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00463C24: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x00463C28: jal         0x00201C08
    // 0x00463C2C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    func_00201C08(rdram, ctx);
        goto after_5;
    // 0x00463C2C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    after_5:
    // 0x00463C30: jal         0x002053A8
    // 0x00463C34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x00463C34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x00463C38: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463C3C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463C40: lw          $v1, -0x7058($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7058);
    // 0x00463C44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00463C48: beq         $v1, $v0, L_00463D08
    if (ctx->r3 == ctx->r2) {
        // 0x00463C4C: nop
    
            goto L_00463D08;
    }
    // 0x00463C4C: nop

    // 0x00463C50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00463C54: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00463C58: jal         0x002532A8
    // 0x00463C5C: nop

    func_002532A8(rdram, ctx);
        goto after_7;
    // 0x00463C5C: nop

    after_7:
    // 0x00463C60: beq         $v0, $zero, L_00463C70
    if (ctx->r2 == 0) {
        // 0x00463C64: nop
    
            goto L_00463C70;
    }
    // 0x00463C64: nop

    // 0x00463C68: jal         0x0042EA24
    // 0x00463C6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    entry_0042EA24(rdram, ctx);
        goto after_8;
    // 0x00463C6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
L_00463C70:
    // 0x00463C70: jal         0x00275F7C
    // 0x00463C74: nop

    func_00275F7C(rdram, ctx);
        goto after_9;
    // 0x00463C74: nop

    after_9:
    // 0x00463C78: jal         0x00275EFC
    // 0x00463C7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275EFC(rdram, ctx);
        goto after_10;
    // 0x00463C7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
    // 0x00463C80: jal         0x00275B58
    // 0x00463C84: nop

    func_00275B58(rdram, ctx);
        goto after_11;
    // 0x00463C84: nop

    after_11:
    // 0x00463C88: jal         0x002758DC
    // 0x00463C8C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    func_002758DC(rdram, ctx);
        goto after_12;
    // 0x00463C8C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    after_12:
    // 0x00463C90: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00463C94: jal         0x002052D8
    // 0x00463C98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_13;
    // 0x00463C98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x00463C9C: lw          $a1, 0x9C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X9C);
    // 0x00463CA0: jal         0x002052D8
    // 0x00463CA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_14;
    // 0x00463CA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x00463CA8: lw          $a1, 0xA0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA0);
    // 0x00463CAC: jal         0x002052D8
    // 0x00463CB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_15;
    // 0x00463CB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_15:
    // 0x00463CB4: lw          $a1, 0xA4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA4);
    // 0x00463CB8: jal         0x002052D8
    // 0x00463CBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_16;
    // 0x00463CBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x00463CC0: lw          $a1, 0xA8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XA8);
    // 0x00463CC4: jal         0x002052D8
    // 0x00463CC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_17;
    // 0x00463CC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_17:
    // 0x00463CCC: lw          $a1, 0xB0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB0);
    // 0x00463CD0: jal         0x002052D8
    // 0x00463CD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_18;
    // 0x00463CD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_18:
    // 0x00463CD8: lw          $a1, 0xB4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB4);
    // 0x00463CDC: jal         0x002052D8
    // 0x00463CE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_19;
    // 0x00463CE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
    // 0x00463CE4: lw          $a1, 0xCC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XCC);
    // 0x00463CE8: jal         0x002052D8
    // 0x00463CEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_20;
    // 0x00463CEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_20:
    // 0x00463CF0: lw          $a1, 0xAC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XAC);
    // 0x00463CF4: jal         0x002052D8
    // 0x00463CF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_21;
    // 0x00463CF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x00463CFC: lw          $a1, 0xC8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC8);
    // 0x00463D00: jal         0x002052D8
    // 0x00463D04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_22;
    // 0x00463D04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_22:
L_00463D08:
    // 0x00463D08: jal         0x002053A8
    // 0x00463D0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_23;
    // 0x00463D0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_23:
    // 0x00463D10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00463D14: sw          $zero, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = 0;
    // 0x00463D18: jal         0x00206068
    // 0x00463D1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_00206068(rdram, ctx);
        goto after_24;
    // 0x00463D1C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_24:
    // 0x00463D20: jal         0x00226390
    // 0x00463D24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00226390(rdram, ctx);
        goto after_25;
    // 0x00463D24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_25:
    // 0x00463D28: lw          $v0, 0x94($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X94);
    // 0x00463D2C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00463D30: jal         0x0042D140
    // 0x00463D34: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    func_0042D140(rdram, ctx);
        goto after_26;
    // 0x00463D34: addiu       $a0, $s3, 0x18B0
    ctx->r4 = ADD32(ctx->r19, 0X18B0);
    after_26:
    // 0x00463D38: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00463D3C: ori         $a0, $a0, 0x518
    ctx->r4 = ctx->r4 | 0X518;
    // 0x00463D40: jal         0x0042CEB0
    // 0x00463D44: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    entry_0042CEB0(rdram, ctx);
        goto after_27;
    // 0x00463D44: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_27:
    // 0x00463D48: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00463D4C: ori         $a0, $a0, 0x3B28
    ctx->r4 = ctx->r4 | 0X3B28;
    // 0x00463D50: jal         0x0042CFC0
    // 0x00463D54: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042CFC0(rdram, ctx);
        goto after_28;
    // 0x00463D54: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_28:
    // 0x00463D58: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00463D5C: addiu       $s0, $s0, 0x2B8
    ctx->r16 = ADD32(ctx->r16, 0X2B8);
    // 0x00463D60: jal         0x0042D330
    // 0x00463D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042D330(rdram, ctx);
        goto after_29;
    // 0x00463D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_29:
    // 0x00463D68: jal         0x00241860
    // 0x00463D6C: nop

    entry_00241860(rdram, ctx);
        goto after_30;
    // 0x00463D6C: nop

    after_30:
    // 0x00463D70: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x00463D74: ori         $a0, $a0, 0x8EBC
    ctx->r4 = ctx->r4 | 0X8EBC;
    // 0x00463D78: jal         0x0042D040
    // 0x00463D7C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    func_0042D040(rdram, ctx);
        goto after_31;
    // 0x00463D7C: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    after_31:
    // 0x00463D80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00463D84: addiu       $a0, $a0, 0x6A90
    ctx->r4 = ADD32(ctx->r4, 0X6A90);
    // 0x00463D88: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x00463D8C: addiu       $a1, $a1, 0x68B0
    ctx->r5 = ADD32(ctx->r5, 0X68B0);
    // 0x00463D90: jal         0x00275BE8
    // 0x00463D94: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_00275BE8(rdram, ctx);
        goto after_32;
    // 0x00463D94: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_32:
    // 0x00463D98: jal         0x0042EADC
    // 0x00463D9C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    func_0042EADC(rdram, ctx);
        goto after_33;
    // 0x00463D9C: addiu       $a0, $s0, -0x1C8
    ctx->r4 = ADD32(ctx->r16, -0X1C8);
    after_33:
    // 0x00463DA0: lw          $v0, 0x38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X38);
    // 0x00463DA4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00463DA8: slt         $v0, $v1, $s2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x00463DAC: beq         $v0, $zero, L_00463DBC
    if (ctx->r2 == 0) {
        // 0x00463DB0: nop
    
            goto L_00463DBC;
    }
    // 0x00463DB0: nop

    // 0x00463DB4: addiu       $s2, $v1, -0x1
    ctx->r18 = ADD32(ctx->r3, -0X1);
    // 0x00463DB8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00463DBC:
    // 0x00463DBC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463DC0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463DC4: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x00463DC8: bne         $s1, $zero, L_00463DDC
    if (ctx->r17 != 0) {
        // 0x00463DCC: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_00463DDC;
    }
    // 0x00463DCC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x00463DD0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463DD4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463DD8: sw          $zero, -0x7048($at)
    MEM_W(-0X7048, ctx->r1) = 0;
L_00463DDC:
    // 0x00463DDC: ori         $a2, $a2, 0x8E5C
    ctx->r6 = ctx->r6 | 0X8E5C;
    // 0x00463DE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00463DE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00463DE8: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    // 0x00463DEC: jal         0x0022629C
    // 0x00463DF0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    func_0022629C(rdram, ctx);
        goto after_34;
    // 0x00463DF0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    after_34:
    // 0x00463DF4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463DF8: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463DFC: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x00463E00: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x00463E04: beq         $v0, $zero, L_00463E50
    if (ctx->r2 == 0) {
        // 0x00463E08: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_00463E50;
    }
    // 0x00463E08: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x00463E0C: beq         $v0, $zero, L_00463E78
    if (ctx->r2 == 0) {
        // 0x00463E10: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_00463E78;
    }
    // 0x00463E10: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00463E14: beq         $v1, $v0, L_00463E78
    if (ctx->r3 == ctx->r2) {
        // 0x00463E18: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_00463E78;
    }
    // 0x00463E18: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x00463E1C: beq         $v0, $zero, L_00463E34
    if (ctx->r2 == 0) {
        // 0x00463E20: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_00463E34;
    }
    // 0x00463E20: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x00463E24: beq         $v1, $v0, L_00463E7C
    if (ctx->r3 == ctx->r2) {
        // 0x00463E28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00463E7C;
    }
    // 0x00463E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00463E2C: j           L_0042AE90
    // 0x00463E30: nop

    entry_0042AE90(rdram, ctx);
    return;
    // 0x00463E30: nop

L_00463E34:
    // 0x00463E34: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x00463E38: beq         $v1, $v0, L_00463E78
    if (ctx->r3 == ctx->r2) {
        // 0x00463E3C: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00463E78;
    }
    // 0x00463E3C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x00463E40: beq         $v1, $v0, L_00463E7C
    if (ctx->r3 == ctx->r2) {
        // 0x00463E44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00463E7C;
    }
    // 0x00463E44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00463E48: j           L_0042AE90
    // 0x00463E4C: nop

    entry_0042AE90(rdram, ctx);
    return;
    // 0x00463E4C: nop

L_00463E50:
    // 0x00463E50: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x00463E54: bne         $v0, $zero, L_00463E90
    if (ctx->r2 != 0) {
        // 0x00463E58: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_00463E90;
    }
    // 0x00463E58: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x00463E5C: bne         $v0, $zero, L_00463E7C
    if (ctx->r2 != 0) {
        // 0x00463E60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00463E7C;
    }
    // 0x00463E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00463E64: slti        $v0, $v1, 0x1DB3
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB3 ? 1 : 0;
    // 0x00463E68: beq         $v0, $zero, L_00463E90
    if (ctx->r2 == 0) {
        // 0x00463E6C: slti        $v0, $v1, 0x1DB1
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
            goto L_00463E90;
    }
    // 0x00463E6C: slti        $v0, $v1, 0x1DB1
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB1 ? 1 : 0;
    // 0x00463E70: bne         $v0, $zero, L_00463E90
    if (ctx->r2 != 0) {
        // 0x00463E74: nop
    
            goto L_00463E90;
    }
    // 0x00463E74: nop

L_00463E78:
    // 0x00463E78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00463E7C:
    // 0x00463E7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463E80: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463E84: sw          $v0, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = ctx->r2;
    // 0x00463E88: j           L_0042AE9C
    // 0x00463E8C: nop

    entry_0042AE9C(rdram, ctx);
    return;
    // 0x00463E8C: nop

L_00463E90:
    // 0x00463E90: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463E94: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463E98: sw          $zero, -0x705C($at)
    MEM_W(-0X705C, ctx->r1) = 0;
    // 0x00463E9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00463EA0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00463EA4: lw          $v1, -0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7030);
    // 0x00463EA8: slti        $v0, $v1, 0x1CEA
    ctx->r2 = SIGNED(ctx->r3) < 0X1CEA ? 1 : 0;
    // 0x00463EAC: beq         $v0, $zero, L_00463EF8
    if (ctx->r2 == 0) {
        // 0x00463EB0: slti        $v0, $v1, 0x1CE8
        ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
            goto L_00463EF8;
    }
    // 0x00463EB0: slti        $v0, $v1, 0x1CE8
    ctx->r2 = SIGNED(ctx->r3) < 0X1CE8 ? 1 : 0;
    // 0x00463EB4: beq         $v0, $zero, L_00463F30
    if (ctx->r2 == 0) {
        // 0x00463EB8: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_00463F30;
    }
    // 0x00463EB8: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00463EBC: beq         $v1, $v0, L_00463F30
    if (ctx->r3 == ctx->r2) {
        // 0x00463EC0: slti        $v0, $v1, 0x1BBD
        ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
            goto L_00463F30;
    }
    // 0x00463EC0: slti        $v0, $v1, 0x1BBD
    ctx->r2 = SIGNED(ctx->r3) < 0X1BBD ? 1 : 0;
    // 0x00463EC4: beq         $v0, $zero, L_00463EDC
    if (ctx->r2 == 0) {
        // 0x00463EC8: addiu       $v0, $zero, 0x123A
        ctx->r2 = ADD32(0, 0X123A);
            goto L_00463EDC;
    }
    // 0x00463EC8: addiu       $v0, $zero, 0x123A
    ctx->r2 = ADD32(0, 0X123A);
    // 0x00463ECC: beq         $v1, $v0, L_00463F30
    if (ctx->r3 == ctx->r2) {
        // 0x00463ED0: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_00463F30;
    }
    // 0x00463ED0: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x00463ED4: j           L_0042AF44
    // 0x00463ED8: nop

    entry_0042AF44(rdram, ctx);
    return;
    // 0x00463ED8: nop

L_00463EDC:
    // 0x00463EDC: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x00463EE0: beq         $v1, $v0, L_00463F30
    if (ctx->r3 == ctx->r2) {
        // 0x00463EE4: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00463F30;
    }
    // 0x00463EE4: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x00463EE8: beq         $v1, $v0, L_00463F30
    if (ctx->r3 == ctx->r2) {
        // 0x00463EEC: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_00463F30;
    }
    // 0x00463EEC: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x00463EF0: j           L_0042AF44
    // 0x00463EF4: nop

    entry_0042AF44(rdram, ctx);
    return;
    // 0x00463EF4: nop

L_00463EF8:
    // 0x00463EF8: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x00463EFC: beq         $v1, $v0, L_00463F38
    if (ctx->r3 == ctx->r2) {
        // 0x00463F00: slti        $v0, $v1, 0x1DB2
        ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
            goto L_00463F38;
    }
    // 0x00463F00: slti        $v0, $v1, 0x1DB2
    ctx->r2 = SIGNED(ctx->r3) < 0X1DB2 ? 1 : 0;
    // 0x00463F04: beq         $v0, $zero, L_00463F24
    if (ctx->r2 == 0) {
        // 0x00463F08: slti        $v0, $v1, 0x1D4E
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
            goto L_00463F24;
    }
    // 0x00463F08: slti        $v0, $v1, 0x1D4E
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4E ? 1 : 0;
    // 0x00463F0C: beq         $v0, $zero, L_00463F40
    if (ctx->r2 == 0) {
        // 0x00463F10: slti        $v0, $v1, 0x1D4C
        ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
            goto L_00463F40;
    }
    // 0x00463F10: slti        $v0, $v1, 0x1D4C
    ctx->r2 = SIGNED(ctx->r3) < 0X1D4C ? 1 : 0;
    // 0x00463F14: bne         $v0, $zero, L_00463F44
    if (ctx->r2 != 0) {
        // 0x00463F18: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_00463F44;
    }
    // 0x00463F18: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
    // 0x00463F1C: j           L_0042AF44
    // 0x00463F20: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
    entry_0042AF44(rdram, ctx);
    return;
    // 0x00463F20: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_00463F24:
    // 0x00463F24: addiu       $v0, $zero, 0x1DB2
    ctx->r2 = ADD32(0, 0X1DB2);
    // 0x00463F28: bne         $v1, $v0, L_00463F44
    if (ctx->r3 != ctx->r2) {
        // 0x00463F2C: addiu       $s0, $zero, 0x320
        ctx->r16 = ADD32(0, 0X320);
            goto L_00463F44;
    }
    // 0x00463F2C: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_00463F30:
    // 0x00463F30: j           L_0042AF44
    // 0x00463F34: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
    entry_0042AF44(rdram, ctx);
    return;
    // 0x00463F34: addiu       $s0, $zero, 0xC80
    ctx->r16 = ADD32(0, 0XC80);
L_00463F38:
    // 0x00463F38: j           L_0042AF44
    // 0x00463F3C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
    entry_0042AF44(rdram, ctx);
    return;
    // 0x00463F3C: addiu       $s0, $zero, 0x4B0
    ctx->r16 = ADD32(0, 0X4B0);
L_00463F40:
    // 0x00463F40: addiu       $s0, $zero, 0x320
    ctx->r16 = ADD32(0, 0X320);
L_00463F44:
    // 0x00463F44: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00463F48: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00463F4C: bnel        $v0, $zero, L_00463F54
    if (ctx->r2 != 0) {
        // 0x00463F50: addiu       $s0, $s0, 0x200
        ctx->r16 = ADD32(ctx->r16, 0X200);
            goto L_00463F54;
    }
    goto skip_2;
    // 0x00463F50: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    skip_2:
L_00463F54:
    // 0x00463F54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463F58: sll         $a1, $s0, 6
    ctx->r5 = S32(ctx->r16 << 6);
    // 0x00463F5C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00463F60: addiu       $a3, $a3, 0x5EB4
    ctx->r7 = ADD32(ctx->r7, 0X5EB4);
    // 0x00463F64: jal         0x00204EDC
    // 0x00463F68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00204EDC(rdram, ctx);
        goto after_35;
    // 0x00463F68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_35:
    // 0x00463F6C: addiu       $a0, $s3, 0xD0
    ctx->r4 = ADD32(ctx->r19, 0XD0);
    // 0x00463F70: sw          $v0, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r2;
    // 0x00463F74: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00463F78: jal         0x00429E40
    // 0x00463F7C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    entry_00429E40(rdram, ctx);
        goto after_36;
    // 0x00463F7C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_36:
    // 0x00463F80: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x00463F84: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x00463F88: jal         0x00201848
    // 0x00463F8C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00201848(rdram, ctx);
        goto after_37;
    // 0x00463F8C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_37:
    // 0x00463F90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463F94: addiu       $a1, $s3, 0x4C
    ctx->r5 = ADD32(ctx->r19, 0X4C);
    // 0x00463F98: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00463F9C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00463FA0: addiu       $a3, $a3, 0x5EC0
    ctx->r7 = ADD32(ctx->r7, 0X5EC0);
    // 0x00463FA4: jal         0x00205B94
    // 0x00463FA8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_38;
    // 0x00463FA8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_38:
    // 0x00463FAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463FB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00463FB4: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x00463FB8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00463FBC: addiu       $v0, $v0, -0x4A30
    ctx->r2 = ADD32(ctx->r2, -0X4A30);
    // 0x00463FC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00463FC4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463FC8: addiu       $v0, $v0, 0x5ECC
    ctx->r2 = ADD32(ctx->r2, 0X5ECC);
    // 0x00463FCC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463FD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463FD4: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x00463FD8: jal         0x00205D0C
    // 0x00463FDC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_39;
    // 0x00463FDC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_39:
    // 0x00463FE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463FE4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00463FE8: sw          $v0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r2;
    // 0x00463FEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00463FF0: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x00463FF4: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x00463FF8: sw          $v0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->r2;
    // 0x00463FFC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00464000: addiu       $v0, $v0, 0x5ED8
    ctx->r2 = ADD32(ctx->r2, 0X5ED8);
    // 0x00464004: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00464008: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0046400C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00464010: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x00464014: jal         0x00205D0C
    // 0x00464018: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_40;
    // 0x00464018: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_40:
    // 0x0046401C: lw          $a0, 0x4C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4C);
    // 0x00464020: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00464024: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x00464028: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0046402C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00464030: jal         0x00201848
    // 0x00464034: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_41;
    // 0x00464034: sw          $v0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->r2;
    after_41:
    // 0x00464038: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046403C: addiu       $a1, $s3, 0x50
    ctx->r5 = ADD32(ctx->r19, 0X50);
    // 0x00464040: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00464044: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00464048: addiu       $a3, $a3, 0x5EE4
    ctx->r7 = ADD32(ctx->r7, 0X5EE4);
    // 0x0046404C: jal         0x00205B94
    // 0x00464050: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_42;
    // 0x00464050: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_42:
    // 0x00464054: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00464058: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0046405C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x00464060: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00464064: addiu       $v0, $v0, -0x4CFC
    ctx->r2 = ADD32(ctx->r2, -0X4CFC);
    // 0x00464068: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0046406C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00464070: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x00464074: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00464078: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0046407C: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x00464080: jal         0x00205D0C
    // 0x00464084: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_43;
    // 0x00464084: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_43:
    // 0x00464088: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046408C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00464090: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    // 0x00464094: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00464098: addiu       $v0, $v0, -0x33DC
    ctx->r2 = ADD32(ctx->r2, -0X33DC);
    // 0x0046409C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004640A0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004640A4: addiu       $v0, $v0, 0x5F00
    ctx->r2 = ADD32(ctx->r2, 0X5F00);
    // 0x004640A8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004640AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004640B0: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x004640B4: jal         0x00205D0C
    // 0x004640B8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_44;
    // 0x004640B8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_44:
    // 0x004640BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004640C0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x004640C4: sw          $v0, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r2;
    // 0x004640C8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004640CC: addiu       $v0, $v0, 0x5F0C
    ctx->r2 = ADD32(ctx->r2, 0X5F0C);
    // 0x004640D0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004640D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004640D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004640DC: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x004640E0: jal         0x00205D0C
    // 0x004640E4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_45;
    // 0x004640E4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_45:
    // 0x004640E8: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x004640EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004640F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004640F4: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x004640F8: sw          $v0, -0x71B0($at)
    MEM_W(-0X71B0, ctx->r1) = ctx->r2;
    // 0x004640FC: jal         0x0042A9A0
    // 0x00464100: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    entry_0042A9A0(rdram, ctx);
        goto after_46;
    // 0x00464100: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_46:
    // 0x00464104: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00464108: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0046410C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464110: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00464114: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00464118: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x0046411C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00464120: addiu       $v0, $v0, 0x5F18
    ctx->r2 = ADD32(ctx->r2, 0X5F18);
    // 0x00464124: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00464128: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0046412C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00464130: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x00464134: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x00464138: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x0046413C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00464140: sw          $v1, -0x4760($at)
    MEM_W(-0X4760, ctx->r1) = ctx->r3;
    // 0x00464144: jal         0x00205D0C
    // 0x00464148: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_47;
    // 0x00464148: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_47:
    // 0x0046414C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00464150: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x00464154: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00464158: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0046415C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x00464160: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00464164: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00464168: sw          $v0, -0x7164($at)
    MEM_W(-0X7164, ctx->r1) = ctx->r2;
    // 0x0046416C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x00464170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00464174: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x00464178: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x0046417C: addiu       $v0, $v0, -0x46A0
    ctx->r2 = ADD32(ctx->r2, -0X46A0);
    // 0x00464180: sw          $zero, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = 0;
    // 0x00464184: sw          $zero, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = 0;
    // 0x00464188: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x0046418C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00464190: sw          $v1, -0x7160($at)
    MEM_W(-0X7160, ctx->r1) = ctx->r3;
    // 0x00464194: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00464198: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0046419C: addiu       $v0, $v0, 0x5F24
    ctx->r2 = ADD32(ctx->r2, 0X5F24);
    // 0x004641A0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004641A4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004641A8: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x004641AC: jal         0x00205D0C
    // 0x004641B0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00205D0C(rdram, ctx);
        goto after_48;
    // 0x004641B0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_48:
    // 0x004641B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004641B8: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x004641BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004641C0: jal         0x0042C6BC
    // 0x004641C4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    entry_0042C6BC(rdram, ctx);
        goto after_49;
    // 0x004641C4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_49:
    // 0x004641C8: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x004641CC: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x004641D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004641D4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x004641D8: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x004641DC: beq         $v0, $zero, L_00464210
    if (ctx->r2 == 0) {
        // 0x004641E0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_00464210;
    }
    // 0x004641E0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x004641E4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004641E8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x004641EC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x004641F0: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
L_004641F4:
    // 0x004641F4: lw          $a0, 0xE0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XE0);
    // 0x004641F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004641FC: jal         0x0021E5D4
    // 0x00464200: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_0021E5D4(rdram, ctx);
        goto after_50;
    // 0x00464200: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_50:
    // 0x00464204: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00464208: bne         $v0, $zero, L_004641F4
    if (ctx->r2 != 0) {
        // 0x0046420C: addiu       $s0, $s0, 0x288
        ctx->r16 = ADD32(ctx->r16, 0X288);
            goto L_004641F4;
    }
    // 0x0046420C: addiu       $s0, $s0, 0x288
    ctx->r16 = ADD32(ctx->r16, 0X288);
L_00464210:
    // 0x00464210: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00464214: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x00464218: beq         $s1, $zero, L_0046423C
    if (ctx->r17 == 0) {
        // 0x0046421C: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_0046423C;
    }
    // 0x0046421C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00464220:
    // 0x00464220: jal         0x0021E5D4
    // 0x00464224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021E5D4(rdram, ctx);
        goto after_51;
    // 0x00464224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_51:
    // 0x00464228: jal         0x0021E5D4
    // 0x0046422C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    func_0021E5D4(rdram, ctx);
        goto after_52;
    // 0x0046422C: addiu       $a0, $s0, 0x288
    ctx->r4 = ADD32(ctx->r16, 0X288);
    after_52:
    // 0x00464230: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x00464234: bne         $s1, $zero, L_00464220
    if (ctx->r17 != 0) {
        // 0x00464238: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00464220;
    }
    // 0x00464238: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_0046423C:
    // 0x0046423C: jal         0x0042C760
    // 0x00464240: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0042C760(rdram, ctx);
        goto after_53;
    // 0x00464240: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_53:
    // 0x00464244: lw          $s4, 0xE8($s3)
    ctx->r20 = MEM_W(ctx->r19, 0XE8);
    // 0x00464248: lw          $s1, 0xE4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0XE4);
    // 0x0046424C: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00464250: beq         $v0, $zero, L_00464290
    if (ctx->r2 == 0) {
        // 0x00464254: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_00464290;
    }
    // 0x00464254: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x00464258: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0046425C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00464260: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00464264: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
L_00464268:
    // 0x00464268: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x0046426C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00464270: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x00464274: jal         0x0021F1B4
    // 0x00464278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021F1B4(rdram, ctx);
        goto after_54;
    // 0x00464278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_54:
    // 0x0046427C: jal         0x0021A344
    // 0x00464280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021A344(rdram, ctx);
        goto after_55;
    // 0x00464280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_55:
    // 0x00464284: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00464288: bne         $v0, $zero, L_00464268
    if (ctx->r2 != 0) {
        // 0x0046428C: addiu       $s2, $s2, 0x288
        ctx->r18 = ADD32(ctx->r18, 0X288);
            goto L_00464268;
    }
    // 0x0046428C: addiu       $s2, $s2, 0x288
    ctx->r18 = ADD32(ctx->r18, 0X288);
L_00464290:
    // 0x00464290: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00464294: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x00464298: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0046429C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004642A0: jal         0x0042E7B4
    // 0x004642A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    entry_0042E7B4(rdram, ctx);
        goto after_56;
    // 0x004642A4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_56:
    // 0x004642A8: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x004642AC: jal         0x0042FE0C
    // 0x004642B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_0042FE0C(rdram, ctx);
        goto after_57;
    // 0x004642B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_57:
    // 0x004642B4: jal         0x0027ECF0
    // 0x004642B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027ECF0(rdram, ctx);
        goto after_58;
    // 0x004642B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_58:
    // 0x004642BC: lbu         $v0, 0x1281($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1281);
    // 0x004642C0: bne         $v0, $zero, L_004642DC
    if (ctx->r2 != 0) {
        // 0x004642C4: nop
    
            goto L_004642DC;
    }
    // 0x004642C4: nop

    // 0x004642C8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004642CC: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x004642D0: lw          $v0, -0x705C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X705C);
    // 0x004642D4: beq         $v0, $zero, L_004642E4
    if (ctx->r2 == 0) {
        // 0x004642D8: nop
    
            goto L_004642E4;
    }
    // 0x004642D8: nop

L_004642DC:
    // 0x004642DC: jal         0x0042BE68
    // 0x004642E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    entry_0042BE68(rdram, ctx);
        goto after_59;
    // 0x004642E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_59:
L_004642E4:
    // 0x004642E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004642E8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004642EC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004642F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004642F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004642F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004642FC: jr          $ra
    // 0x00464300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00464300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00265B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265B48: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00265B4C: lw          $v0, 0x2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C);
    // 0x00265B50: jr          $ra
    // 0x00265B54: nop

    return;
    // 0x00265B54: nop

;}
RECOMP_FUNC void func_00260730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260730: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00260734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00260738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0026073C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00260740: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00260744: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00260748: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0026074C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00260750: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00260754: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00260758: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0026075C: lw          $s4, 0x48($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X48);
    // 0x00260760: jal         0x0025E428
    // 0x00260764: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_0025E428(rdram, ctx);
        goto after_0;
    // 0x00260764: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00260768: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0026076C: bne         $v0, $v1, L_00260884
    if (ctx->r2 != ctx->r3) {
        // 0x00260770: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00260884;
    }
    // 0x00260770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00260774: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x00260778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026077C: lwc1        $f0, 0x79A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79A0);
    // 0x00260780: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260784: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x00260788: lwc1        $f14, 0x60($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X60);
    // 0x0026078C: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00260790: jal         0x0021160C
    // 0x00260794: nop

    func_0021160C(rdram, ctx);
        goto after_1;
    // 0x00260794: nop

    after_1:
    // 0x00260798: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026079C: lwc1        $f1, 0x79A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79A4);
    // 0x002607A0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002607A4: nop

    // 0x002607A8: bc1t        L_002607C8
    if (c1cs) {
        // 0x002607AC: swc1        $f0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
            goto L_002607C8;
    }
    // 0x002607AC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x002607B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002607B4: lwc1        $f1, 0x79A8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79A8);
    // 0x002607B8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002607BC: nop

    // 0x002607C0: bc1f        L_002607CC
    if (!c1cs) {
        // 0x002607C4: nop
    
            goto L_002607CC;
    }
    // 0x002607C4: nop

L_002607C8:
    // 0x002607C8: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_002607CC:
    // 0x002607CC: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x002607D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002607D4: lwc1        $f1, 0x79AC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X79AC);
    // 0x002607D8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002607DC: mul.s       $f14, $f0, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002607E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002607E4: lwc1        $f0, 0x79B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79B0);
    // 0x002607E8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x002607EC: nop

    // 0x002607F0: bc1tl       L_00260810
    if (c1cs) {
        // 0x002607F4: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260810;
    }
    goto skip_0;
    // 0x002607F4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x002607F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002607FC: lwc1        $f0, 0x79B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79B4);
    // 0x00260800: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x00260804: nop

    // 0x00260808: bc1tl       L_00260810
    if (c1cs) {
        // 0x0026080C: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260810;
    }
    goto skip_1;
    // 0x0026080C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_1:
L_00260810:
    // 0x00260810: lwc1        $f12, 0x10C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x00260814: lui         $a2, 0x3DB2
    ctx->r6 = S32(0X3DB2 << 16);
    // 0x00260818: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
    // 0x0026081C: jal         0x00211774
    // 0x00260820: nop

    func_00211774(rdram, ctx);
        goto after_2;
    // 0x00260820: nop

    after_2:
    // 0x00260824: swc1        $f0, 0x10C($s1)
    MEM_W(0X10C, ctx->r17) = ctx->f0.u32l;
    // 0x00260828: lwc1        $f1, 0x4C($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X4C);
    // 0x0026082C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260830: lwc1        $f0, 0x79B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79B8);
    // 0x00260834: mul.s       $f14, $f1, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00260838: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026083C: lwc1        $f0, 0x79BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79BC);
    // 0x00260840: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x00260844: nop

    // 0x00260848: bc1tl       L_00260868
    if (c1cs) {
        // 0x0026084C: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260868;
    }
    goto skip_2;
    // 0x0026084C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_2:
    // 0x00260850: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00260854: lwc1        $f0, 0x79C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X79C0);
    // 0x00260858: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x0026085C: nop

    // 0x00260860: bc1tl       L_00260868
    if (c1cs) {
        // 0x00260864: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_00260868;
    }
    goto skip_3;
    // 0x00260864: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_3:
L_00260868:
    // 0x00260868: lwc1        $f12, 0x110($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X110);
    // 0x0026086C: lui         $a2, 0x3E32
    ctx->r6 = S32(0X3E32 << 16);
    // 0x00260870: ori         $a2, $a2, 0xB8C4
    ctx->r6 = ctx->r6 | 0XB8C4;
    // 0x00260874: jal         0x00211774
    // 0x00260878: nop

    func_00211774(rdram, ctx);
        goto after_3;
    // 0x00260878: nop

    after_3:
    // 0x0026087C: swc1        $f0, 0x110($s1)
    MEM_W(0X110, ctx->r17) = ctx->f0.u32l;
    // 0x00260880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00260884:
    // 0x00260884: lui         $a2, 0x3E0E
    ctx->r6 = S32(0X3E0E << 16);
    // 0x00260888: ori         $a2, $a2, 0xFA36
    ctx->r6 = ctx->r6 | 0XFA36;
    // 0x0026088C: lw          $a3, 0x4C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X4C);
    // 0x00260890: jal         0x00245BAC
    // 0x00260894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_4;
    // 0x00260894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00260898: lw          $v1, 0x44($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X44);
    // 0x0026089C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002608A0: bne         $v1, $v0, L_002608FC
    if (ctx->r3 != ctx->r2) {
        // 0x002608A4: nop
    
            goto L_002608FC;
    }
    // 0x002608A4: nop

    // 0x002608A8: beq         $s4, $zero, L_002608FC
    if (ctx->r20 == 0) {
        // 0x002608AC: nop
    
            goto L_002608FC;
    }
    // 0x002608AC: nop

    // 0x002608B0: lwc1        $f0, 0x12C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X12C);
    // 0x002608B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002608B8: lwc1        $f20, 0x79C4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X79C4);
    // 0x002608BC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002608C0: nop

    // 0x002608C4: bc1f        L_002608FC
    if (!c1cs) {
        // 0x002608C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002608FC;
    }
    // 0x002608C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002608CC: jal         0x0025E428
    // 0x002608D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025E428(rdram, ctx);
        goto after_5;
    // 0x002608D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x002608D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x002608D8: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x002608DC: jal         0x0025E428
    // 0x002608E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0025E428(rdram, ctx);
        goto after_6;
    // 0x002608E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_6:
    // 0x002608E4: beq         $s0, $v0, L_002608FC
    if (ctx->r16 == ctx->r2) {
        // 0x002608E8: nop
    
            goto L_002608FC;
    }
    // 0x002608E8: nop

    // 0x002608EC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x002608F0: jal         0x002119FC
    // 0x002608F4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_7;
    // 0x002608F4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_7:
    // 0x002608F8: swc1        $f0, 0x12C($s1)
    MEM_W(0X12C, ctx->r17) = ctx->f0.u32l;
L_002608FC:
    // 0x002608FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00260900: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00260904: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00260908: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0026090C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00260910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00260914: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00260918: jr          $ra
    // 0x0026091C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0026091C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0044435C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044435C: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x00444360: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00444364: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00444368: jr          $ra
    // 0x0044436C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
    return;
    // 0x0044436C: sw          $v0, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00232EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00232EAC: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x00232EB0: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00232EB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00232EB8: bne         $v0, $zero, L_00232EC4
    if (ctx->r2 != 0) {
        // 0x00232EBC: nop
    
            goto L_00232EC4;
    }
    // 0x00232EBC: nop

    // 0x00232EC0: lwc1        $f0, 0x15C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X15C);
L_00232EC4:
    // 0x00232EC4: jr          $ra
    // 0x00232EC8: nop

    return;
    // 0x00232EC8: nop

;}
RECOMP_FUNC void func_002508D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002508D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002508D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002508D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002508DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002508E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002508E4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x002508E8: lwc1        $f1, 0xA80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA80);
    // 0x002508EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002508F0: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002508F4: nop

    // 0x002508F8: bc1f        L_00250908
    if (!c1cs) {
        // 0x002508FC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_00250908;
    }
    // 0x002508FC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00250900: j           L_0025090C
    // 0x00250904: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_0025090C;
    // 0x00250904: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_00250908:
    // 0x00250908: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_0025090C:
    // 0x0025090C: sh          $v0, 0xA08($s0)
    MEM_H(0XA08, ctx->r16) = ctx->r2;
    // 0x00250910: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00250914: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00250918: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0025091C: jal         0x002117DC
    // 0x00250920: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x00250920: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    after_0:
    // 0x00250924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250928: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025092C: addiu       $a2, $a2, -0x2190
    ctx->r6 = ADD32(ctx->r6, -0X2190);
    // 0x00250930: jal         0x0024EF70
    // 0x00250934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024EF70(rdram, ctx);
        goto after_1;
    // 0x00250934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00250938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025093C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00250940: addiu       $a2, $a2, -0x2148
    ctx->r6 = ADD32(ctx->r6, -0X2148);
    // 0x00250944: jal         0x0024F174
    // 0x00250948: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0024F174(rdram, ctx);
        goto after_2;
    // 0x00250948: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0025094C: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00250950: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x00250954: bne         $v0, $zero, L_00250988
    if (ctx->r2 != 0) {
        // 0x00250958: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00250988;
    }
    // 0x00250958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025095C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250960: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00250964: addiu       $v0, $a0, 0xCD0
    ctx->r2 = ADD32(ctx->r4, 0XCD0);
    // 0x00250968: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0025096C: sw          $zero, 0xCD0($a0)
    MEM_W(0XCD0, ctx->r4) = 0;
    // 0x00250970: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x00250974: sw          $v1, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r3;
    // 0x00250978: jal         0x0024E5F0
    // 0x0025097C: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    func_0024E5F0(rdram, ctx);
        goto after_3;
    // 0x0025097C: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    after_3:
    // 0x00250980: j           L_00250BD8
    // 0x00250984: nop

        goto L_00250BD8;
    // 0x00250984: nop

L_00250988:
    // 0x00250988: lwc1        $f0, 0xAC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC8);
    // 0x0025098C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250990: lwc1        $f1, 0x6F1C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6F1C);
    // 0x00250994: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00250998: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025099C: lwc1        $f1, 0x6F20($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6F20);
    // 0x002509A0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002509A4: nop

    // 0x002509A8: bc1f        L_002509FC
    if (!c1cs) {
        // 0x002509AC: nop
    
            goto L_002509FC;
    }
    // 0x002509AC: nop

    // 0x002509B0: lwc1        $f0, 0xA60($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA60);
    // 0x002509B4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002509B8: nop

    // 0x002509BC: bc1f        L_002509FC
    if (!c1cs) {
        // 0x002509C0: nop
    
            goto L_002509FC;
    }
    // 0x002509C0: nop

    // 0x002509C4: jal         0x00268A5C
    // 0x002509C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00268A5C(rdram, ctx);
        goto after_4;
    // 0x002509C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x002509CC: lwc1        $f1, 0xAE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAE4);
    // 0x002509D0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002509D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002509D8: lwc1        $f1, 0x6F24($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6F24);
    // 0x002509DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002509E0: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002509E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002509E8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x002509EC: jal         0x0024E5F0
    // 0x002509F0: swc1        $f0, 0xAA4($a0)
    MEM_W(0XAA4, ctx->r4) = ctx->f0.u32l;
    func_0024E5F0(rdram, ctx);
        goto after_5;
    // 0x002509F0: swc1        $f0, 0xAA4($a0)
    MEM_W(0XAA4, ctx->r4) = ctx->f0.u32l;
    after_5:
    // 0x002509F4: j           L_00250BD8
    // 0x002509F8: nop

        goto L_00250BD8;
    // 0x002509F8: nop

L_002509FC:
    // 0x002509FC: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00250A00: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x00250A04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00250A08: bne         $v0, $zero, L_00250A3C
    if (ctx->r2 != 0) {
        // 0x00250A0C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00250A3C;
    }
    // 0x00250A0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00250A10: jal         0x00268A5C
    // 0x00250A14: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    func_00268A5C(rdram, ctx);
        goto after_6;
    // 0x00250A14: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    after_6:
    // 0x00250A18: lwc1        $f1, 0xAE4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAE4);
    // 0x00250A1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250A20: lwc1        $f2, 0x6F28($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6F28);
    // 0x00250A24: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00250A28: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00250A2C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x00250A30: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00250A34: jal         0x002117DC
    // 0x00250A38: addiu       $a0, $s0, 0xAA4
    ctx->r4 = ADD32(ctx->r16, 0XAA4);
    func_002117DC(rdram, ctx);
        goto after_7;
    // 0x00250A38: addiu       $a0, $s0, 0xAA4
    ctx->r4 = ADD32(ctx->r16, 0XAA4);
    after_7:
L_00250A3C:
    // 0x00250A3C: lwc1        $f0, 0xA10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA10);
    // 0x00250A40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250A44: lwc1        $f12, 0x6F2C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F2C);
    // 0x00250A48: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00250A4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250A50: lwc1        $f20, 0x6F30($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6F30);
    // 0x00250A54: jal         0x002982F0
    // 0x00250A58: nop

    func_002982F0(rdram, ctx);
        goto after_8;
    // 0x00250A58: nop

    after_8:
    // 0x00250A5C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250A60: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00250A64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250A68: lwc1        $f12, 0x6F34($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F34);
    // 0x00250A6C: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00250A70: jal         0x002982F0
    // 0x00250A74: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_9;
    // 0x00250A74: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    after_9:
    // 0x00250A78: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250A7C: lwc1        $f1, 0xA10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA10);
    // 0x00250A80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250A84: lwc1        $f12, 0x6F38($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6F38);
    // 0x00250A88: mul.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x00250A8C: jal         0x002982F0
    // 0x00250A90: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_10;
    // 0x00250A90: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    after_10:
    // 0x00250A94: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00250A98: lw          $v0, 0xB8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8C);
    // 0x00250A9C: bne         $v0, $zero, L_00250B08
    if (ctx->r2 != 0) {
        // 0x00250AA0: swc1        $f0, 0xADC($s0)
        MEM_W(0XADC, ctx->r16) = ctx->f0.u32l;
            goto L_00250B08;
    }
    // 0x00250AA0: swc1        $f0, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = ctx->f0.u32l;
    // 0x00250AA4: lwc1        $f1, 0xA9C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA9C);
    // 0x00250AA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250AAC: lwc1        $f0, 0x6F3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F3C);
    // 0x00250AB0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250AB4: nop

    // 0x00250AB8: bc1t        L_00250B0C
    if (c1cs) {
        // 0x00250ABC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250B0C;
    }
    // 0x00250ABC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00250AC0: lw          $v0, 0x140($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X140);
    // 0x00250AC4: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x00250AC8: bne         $v0, $zero, L_00250B0C
    if (ctx->r2 != 0) {
        // 0x00250ACC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250B0C;
    }
    // 0x00250ACC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00250AD0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00250AD4: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00250AD8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00250ADC: beq         $v0, $zero, L_00250B0C
    if (ctx->r2 == 0) {
        // 0x00250AE0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00250B0C;
    }
    // 0x00250AE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00250AE4: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x00250AE8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00250AEC: beq         $v0, $zero, L_00250B08
    if (ctx->r2 == 0) {
        // 0x00250AF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00250B08;
    }
    // 0x00250AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00250AF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00250AF8: jal         0x0024E5F0
    // 0x00250AFC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024E5F0(rdram, ctx);
        goto after_11;
    // 0x00250AFC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_11:
    // 0x00250B00: j           L_00250B0C
    // 0x00250B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00250B0C;
    // 0x00250B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00250B08:
    // 0x00250B08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00250B0C:
    // 0x00250B0C: bne         $v0, $zero, L_00250BD8
    if (ctx->r2 != 0) {
        // 0x00250B10: addiu       $v0, $zero, 0x1144
        ctx->r2 = ADD32(0, 0X1144);
            goto L_00250BD8;
    }
    // 0x00250B10: addiu       $v0, $zero, 0x1144
    ctx->r2 = ADD32(0, 0X1144);
    // 0x00250B14: lw          $v1, 0xC04($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC04);
    // 0x00250B18: bne         $v1, $v0, L_00250B28
    if (ctx->r3 != ctx->r2) {
        // 0x00250B1C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00250B28;
    }
    // 0x00250B1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00250B20: lb          $v0, 0xE2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE2);
    // 0x00250B24: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
L_00250B28:
    // 0x00250B28: bne         $a0, $zero, L_00250B6C
    if (ctx->r4 != 0) {
        // 0x00250B2C: nop
    
            goto L_00250B6C;
    }
    // 0x00250B2C: nop

    // 0x00250B30: lwc1        $f1, 0xA78($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA78);
    // 0x00250B34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250B38: lwc1        $f0, 0x6F40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F40);
    // 0x00250B3C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00250B40: nop

    // 0x00250B44: bc1t        L_00250B68
    if (c1cs) {
        // 0x00250B48: addiu       $v0, $zero, 0x8A2
        ctx->r2 = ADD32(0, 0X8A2);
            goto L_00250B68;
    }
    // 0x00250B48: addiu       $v0, $zero, 0x8A2
    ctx->r2 = ADD32(0, 0X8A2);
    // 0x00250B4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250B50: lwc1        $f0, 0x6F44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F44);
    // 0x00250B54: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00250B58: nop

    // 0x00250B5C: bc1t        L_00250B68
    if (c1cs) {
        // 0x00250B60: addiu       $v0, $zero, 0x8A7
        ctx->r2 = ADD32(0, 0X8A7);
            goto L_00250B68;
    }
    // 0x00250B60: addiu       $v0, $zero, 0x8A7
    ctx->r2 = ADD32(0, 0X8A7);
    // 0x00250B64: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_00250B68:
    // 0x00250B68: sw          $v0, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r2;
L_00250B6C:
    // 0x00250B6C: lwc1        $f1, 0x1290($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1290);
    // 0x00250B70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00250B74: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00250B78: add.s       $f2, $f1, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00250B7C: lwc1        $f1, 0xA80($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XA80);
    // 0x00250B80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250B84: lwc1        $f0, 0x6F48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F48);
    // 0x00250B88: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00250B8C: nop

    // 0x00250B90: bc1f        L_00250BD8
    if (!c1cs) {
        // 0x00250B94: swc1        $f2, 0x1290($s0)
        MEM_W(0X1290, ctx->r16) = ctx->f2.u32l;
            goto L_00250BD8;
    }
    // 0x00250B94: swc1        $f2, 0x1290($s0)
    MEM_W(0X1290, ctx->r16) = ctx->f2.u32l;
    // 0x00250B98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00250B9C: lwc1        $f0, 0x6F4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F4C);
    // 0x00250BA0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00250BA4: nop

    // 0x00250BA8: bc1f        L_00250BD8
    if (!c1cs) {
        // 0x00250BAC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00250BD8;
    }
    // 0x00250BAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00250BB0: sw          $zero, 0x1290($s0)
    MEM_W(0X1290, ctx->r16) = 0;
    // 0x00250BB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00250BB8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00250BBC: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00250BC0: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00250BC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00250BC8: lh          $a0, -0x2126($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2126);
    // 0x00250BCC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00250BD0: jal         0x00275544
    // 0x00250BD4: nop

    func_00275544(rdram, ctx);
        goto after_12;
    // 0x00250BD4: nop

    after_12:
L_00250BD8:
    // 0x00250BD8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00250BDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00250BE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00250BE4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x00250BE8: jr          $ra
    // 0x00250BEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00250BEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00426AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426AF8: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00426AFC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_00426B00:
    // 0x00426B00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00426B04: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x00426B08: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x00426B0C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00426B10: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x00426B14: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x00426B18: jal         0x00425E74
    // 0x00426B1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_00425E74(rdram, ctx);
        goto after_0;
    // 0x00426B1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_0:
    // 0x00426B20: bne         $v0, $zero, L_00426BAC
    if (ctx->r2 != 0) {
        // 0x00426B24: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00426BAC;
    }
    // 0x00426B24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00426B28: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x00426B2C: beq         $v0, $zero, L_00426B44
    if (ctx->r2 == 0) {
        // 0x00426B30: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00426B44;
    }
    // 0x00426B30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00426B34: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00426B38: addiu       $v0, $v0, -0x41
    ctx->r2 = ADD32(ctx->r2, -0X41);
    // 0x00426B3C: sllv        $v0, $s7, $v0
    ctx->r2 = S32(ctx->r23 << (ctx->r2 & 31));
    // 0x00426B40: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
L_00426B44:
    // 0x00426B44: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00426B48: bne         $v0, $zero, L_00426B00
    if (ctx->r2 != 0) {
        // 0x00426B4C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00426B00;
    }
    // 0x00426B4C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00426B50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00426B54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00426B58: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x00426B5C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x00426B60: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x00426B64: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x00426B68: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x00426B6C: sllv        $v0, $v1, $s0
    ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
L_00426B70:
    // 0x00426B70: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x00426B74: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00426B78: beql        $v0, $zero, L_00426BA0
    if (ctx->r2 == 0) {
        // 0x00426B7C: slti        $v1, $s0, 0x10
        ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
            goto L_00426BA0;
    }
    goto skip_0;
    // 0x00426B7C: slti        $v1, $s0, 0x10
    ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    skip_0:
    // 0x00426B80: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00426B84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00426B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00426B8C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x00426B90: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x00426B94: bne         $v0, $zero, L_00426B70
    if (ctx->r2 != 0) {
        // 0x00426B98: sllv        $v0, $v1, $s0
        ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
            goto L_00426B70;
    }
    // 0x00426B98: sllv        $v0, $v1, $s0
    ctx->r2 = S32(ctx->r3 << (ctx->r16 & 31));
    // 0x00426B9C: slti        $v1, $s0, 0x10
    ctx->r3 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
L_00426BA0:
    // 0x00426BA0: beq         $v1, $zero, L_00426BAC
    if (ctx->r3 == 0) {
        // 0x00426BA4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00426BAC;
    }
    // 0x00426BA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00426BA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00426BAC:
    // 0x00426BAC: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00426BB0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x00426BB4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x00426BB8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x00426BBC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00426BC0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00426BC4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00426BC8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00426BCC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00426BD0: jr          $ra
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00426BD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0043F598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040675C:
    // 0x0043F598: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
L_00406864:
    // 0x0043F59C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0043F5A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0043F5A4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043F5A8: addiu       $v1, $v1, -0x61C
    ctx->r3 = ADD32(ctx->r3, -0X61C);
    // 0x0043F5AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0043F5B0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0043F5B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0043F5B8: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x0043F5BC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0043F5C0: lwc1        $f1, 0x0($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0043F5C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0043F5C8: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043F5CC: nop

    // 0x0043F5D0: bc1f        L_0043F5E8
    if (!c1cs) {
        // 0x0043F5D4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_0043F5E8;
    }
    // 0x0043F5D4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0043F5D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043F5DC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043F5E0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043F5E4: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_0043F5E8:
    // 0x0043F5E8: lw          $v0, -0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X8);
    // 0x0043F5EC: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x0043F5F0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0043F5F4: beq         $v0, $zero, L_0043F66C
    if (ctx->r2 == 0) {
        // 0x0043F5F8: nop
    
            goto L_0043F66C;
    }
    // 0x0043F5F8: nop

    // 0x0043F5FC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0043F600: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0043F604: nop

    // 0x0043F608: bc1f        L_0043F66C
    if (!c1cs) {
        // 0x0043F60C: nop
    
            goto L_0043F66C;
    }
    // 0x0043F60C: nop

    // 0x0043F610: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0043F614: beq         $v0, $zero, L_0043F66C
    if (ctx->r2 == 0) {
        // 0x0043F618: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043F66C;
    }
    // 0x0043F618: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043F61C: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x0043F620: lw          $v1, -0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC);
    // 0x0043F624: bne         $v1, $v0, L_0043F660
    if (ctx->r3 != ctx->r2) {
        // 0x0043F628: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0043F660;
    }
    // 0x0043F628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043F62C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0043F630: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x0043F634: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x0043F638: addiu       $a3, $a3, 0x1C40
    ctx->r7 = ADD32(ctx->r7, 0X1C40);
    // 0x0043F63C: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x0043F640: addiu       $t0, $t0, 0x1F50
    ctx->r8 = ADD32(ctx->r8, 0X1F50);
    // 0x0043F644: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x0043F648: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x0043F64C: ori         $v0, $v0, 0x300
    ctx->r2 = ctx->r2 | 0X300;
    // 0x0043F650: ori         $v1, $v1, 0x300
    ctx->r3 = ctx->r3 | 0X300;
    // 0x0043F654: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0043F658: j           L_00406864
    // 0x0043F65C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    entry_00406864(rdram, ctx);
    return;
    // 0x0043F65C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
L_0043F660:
    // 0x0043F660: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0043F664: j           L_00406864
    // 0x0043F668: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    entry_00406864(rdram, ctx);
    return;
    // 0x0043F668: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_0043F66C:
    // 0x0043F66C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043F670: addiu       $a0, $a0, -0x624
    ctx->r4 = ADD32(ctx->r4, -0X624);
    // 0x0043F674: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0043F678: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0043F67C: bne         $v1, $v0, L_0043F770
    if (ctx->r3 != ctx->r2) {
        // 0x0043F680: nop
    
            goto L_0043F770;
    }
    // 0x0043F680: nop

    // 0x0043F684: lw          $t1, 0x6C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X6C);
    // 0x0043F688: lw          $t2, 0x70($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X70);
    // 0x0043F68C: lw          $t3, 0x74($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X74);
    // 0x0043F690: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0043F694: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x0043F698: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x0043F69C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0043F6A0: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x0043F6A4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0043F6A8: jal         0x00246310
    // 0x0043F6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00246310(rdram, ctx);
        goto after_0;
    // 0x0043F6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0043F6B0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0043F6B4: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0043F6B8: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x0043F6BC: nop

    // 0x0043F6C0: bc1f        L_0043F6EC
    if (!c1cs) {
        // 0x0043F6C4: nop
    
            goto L_0043F6EC;
    }
    // 0x0043F6C4: nop

    // 0x0043F6C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F6CC: lwc1        $f1, 0x4C0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4C0);
    // 0x0043F6D0: neg.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = -ctx->f21.fl;
    // 0x0043F6D4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0043F6D8: nop

    // 0x0043F6DC: bc1t        L_0043F704
    if (c1cs) {
        // 0x0043F6E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0043F704;
    }
    // 0x0043F6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043F6E4: j           L_0040675C
    // 0x0043F6E8: nop

    entry_0040675C(rdram, ctx);
    return;
    // 0x0043F6E8: nop

L_0043F6EC:
    // 0x0043F6EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F6F0: lwc1        $f0, 0x4C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4C4);
    // 0x0043F6F4: c.le.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl <= ctx->f0.fl;
    // 0x0043F6F8: nop

    // 0x0043F6FC: bc1f        L_0043F75C
    if (!c1cs) {
        // 0x0043F700: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0043F75C;
    }
    // 0x0043F700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0043F704:
    // 0x0043F704: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0043F708: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F70C: lwc1        $f1, 0x4C8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4C8);
    // 0x0043F710: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0043F714: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0043F718: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F71C: lwc1        $f20, 0x4CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4CC);
    // 0x0043F720: jal         0x002982F0
    // 0x0043F724: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x0043F724: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x0043F728: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0043F72C: lwc1        $f1, 0x18($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x0043F730: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043F734: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0043F738: jal         0x002974C0
    // 0x0043F73C: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x0043F73C: swc1        $f1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x0043F740: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0043F744: lwc1        $f1, 0x20($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X20);
    // 0x0043F748: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0043F74C: swc1        $f1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043F750: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0043F754: bne         $v0, $zero, L_0043F85C
    if (ctx->r2 != 0) {
        // 0x0043F758: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0043F85C;
    }
    // 0x0043F758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0043F75C:
    // 0x0043F75C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0043F760: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0043F764: mfc1        $a3, $f21
    ctx->r7 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0043F768: jal         0x00245BAC
    // 0x0043F76C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_3;
    // 0x0043F76C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
L_0043F770:
    // 0x0043F770: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0043F774: addiu       $s1, $s1, -0x624
    ctx->r17 = ADD32(ctx->r17, -0X624);
    // 0x0043F778: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0043F77C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0043F780: bne         $v1, $v0, L_0043F86C
    if (ctx->r3 != ctx->r2) {
        // 0x0043F784: nop
    
            goto L_0043F86C;
    }
    // 0x0043F784: nop

    // 0x0043F788: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0043F78C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0043F790: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0043F794: nop

    // 0x0043F798: bc1f        L_0043F848
    if (!c1cs) {
        // 0x0043F79C: nop
    
            goto L_0043F848;
    }
    // 0x0043F79C: nop

    // 0x0043F7A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043F7A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0043F7A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F7AC: lwc1        $f0, 0x4D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4D0);
    // 0x0043F7B0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0043F7B4: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0043F7B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0043F7BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F7C0: lwc1        $f21, 0x4D4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X4D4);
    // 0x0043F7C4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0043F7C8: lwc1        $f12, -0x3C4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X3C4);
    // 0x0043F7CC: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x0043F7D0: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0043F7D4: jal         0x002982F0
    // 0x0043F7D8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0043F7D8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_4:
    // 0x0043F7DC: lwc1        $f1, -0x3C0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X3C0);
    // 0x0043F7E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043F7E4: lwc1        $f20, 0x4D8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4D8);
    // 0x0043F7E8: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0043F7EC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0043F7F0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0043F7F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043F7F8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043F7FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0043F800: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x0043F804: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0043F808: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0043F80C: lwc1        $f12, -0x3C4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X3C4);
    // 0x0043F810: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x0043F814: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x0043F818: jal         0x002974C0
    // 0x0043F81C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_002974C0(rdram, ctx);
        goto after_5;
    // 0x0043F81C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_5:
    // 0x0043F820: lwc1        $f1, -0x3C0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X3C0);
    // 0x0043F824: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0043F828: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0043F82C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0043F830: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043F834: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043F838: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0043F83C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x0043F840: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0043F844: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_0043F848:
    // 0x0043F848: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0043F84C: beq         $v0, $zero, L_0043F86C
    if (ctx->r2 == 0) {
        // 0x0043F850: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043F86C;
    }
    // 0x0043F850: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043F854: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0043F858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0043F85C:
    // 0x0043F85C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0043F860: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x0043F864: jal         0x00243414
    // 0x0043F868: nop

    func_00243414(rdram, ctx);
        goto after_6;
    // 0x0043F868: nop

    after_6:
L_0043F86C:
    // 0x0043F86C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0043F870: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0043F874: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0043F878: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0043F87C: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0043F880: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0043F884: jr          $ra
    // 0x0043F888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0043F888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00453CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AD48:
    // 0x00453CCC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
L_0041AD84:
    // 0x00453CD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00453CD4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00453CD8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x00453CDC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00453CE0: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x00453CE4: addiu       $s5, $s5, -0x5524
    ctx->r21 = ADD32(ctx->r21, -0X5524);
    // 0x00453CE8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x00453CEC: addiu       $s6, $s5, -0x4
    ctx->r22 = ADD32(ctx->r21, -0X4);
    // 0x00453CF0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00453CF4: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x00453CF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00453CFC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00453D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00453D04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00453D08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00453D0C: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
L_00453D10:
    // 0x00453D10: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00453D14: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00453D18: lw          $s2, -0x6970($at)
    ctx->r18 = MEM_W(ctx->r1, -0X6970);
    // 0x00453D1C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00453D20: jal         0x0029E4C0
    // 0x00453D24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_0;
    // 0x00453D24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00453D28: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00453D2C: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, 0X1F8C);
    // 0x00453D30: jal         0x0029E4C0
    // 0x00453D34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029E4C0(rdram, ctx);
        goto after_1;
    // 0x00453D34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00453D38: beq         $s0, $v0, L_00453D48
    if (ctx->r16 == ctx->r2) {
        // 0x00453D3C: nop
    
            goto L_00453D48;
    }
    // 0x00453D3C: nop

L_00453D40:
    // 0x00453D40: j           L_0041AD84
    // 0x00453D44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    entry_0041AD84(rdram, ctx);
    return;
    // 0x00453D44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00453D48:
    // 0x00453D48: jal         0x0029E4C0
    // 0x00453D4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_2;
    // 0x00453D4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00453D50: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00453D54: beq         $v0, $zero, L_00453D80
    if (ctx->r2 == 0) {
        // 0x00453D58: addu        $v0, $s2, $s1
        ctx->r2 = ADD32(ctx->r18, ctx->r17);
            goto L_00453D80;
    }
    // 0x00453D58: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x00453D5C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00453D60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453D64: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x00453D68: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x00453D6C: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x00453D70: bne         $v0, $v1, L_00453D40
    if (ctx->r2 != ctx->r3) {
        // 0x00453D74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00453D40;
    }
    // 0x00453D74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00453D78: j           L_0041AD48
    // 0x00453D7C: nop

    entry_0041AD48(rdram, ctx);
    return;
    // 0x00453D7C: nop

L_00453D80:
    // 0x00453D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00453D84: beql        $v0, $zero, L_00453DE0
    if (ctx->r2 == 0) {
        // 0x00453D88: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_00453DE0;
    }
    goto skip_0;
    // 0x00453D88: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x00453D8C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00453D90: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00453D94: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00453D98: lw          $v1, -0x6968($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6968);
    // 0x00453D9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00453DA0: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00453DA4: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x00453DA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x00453DAC: sw          $v0, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r2;
    // 0x00453DB0: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00453DB4: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00453DB8: lw          $v0, -0x6964($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6964);
    // 0x00453DBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00453DC0: sw          $s4, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r20;
    // 0x00453DC4: beq         $v0, $zero, L_00453DE0
    if (ctx->r2 == 0) {
        // 0x00453DC8: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_00453DE0;
    }
    // 0x00453DC8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x00453DCC: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x00453DD0: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00453DD4: lh          $a0, -0x6962($at)
    ctx->r4 = MEM_H(ctx->r1, -0X6962);
    // 0x00453DD8: jal         0x00275624
    // 0x00453DDC: nop

    func_00275624(rdram, ctx);
        goto after_3;
    // 0x00453DDC: nop

    after_3:
L_00453DE0:
    // 0x00453DE0: sltiu       $v0, $s4, 0xC
    ctx->r2 = ctx->r20 < 0XC ? 1 : 0;
    // 0x00453DE4: bne         $v0, $zero, L_00453D10
    if (ctx->r2 != 0) {
        // 0x00453DE8: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_00453D10;
    }
    // 0x00453DE8: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x00453DEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00453DF0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00453DF4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00453DF8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00453DFC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00453E00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00453E04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00453E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00453E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00453E10: jr          $ra
    // 0x00453E14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00453E14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004082A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004082A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x004082A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004082A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004082AC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x004082B0: addiu       $s0, $s0, -0x5378
    ctx->r16 = ADD32(ctx->r16, -0X5378);
    // 0x004082B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x004082B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004082BC: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x004082C0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x004082C4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x004082C8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x004082CC: bne         $v1, $v0, L_00408580
    if (ctx->r3 != ctx->r2) {
        // 0x004082D0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00408580;
    }
    // 0x004082D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004082D4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x004082D8: lw          $v1, 0x7078($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7078);
    // 0x004082DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004082E0: bne         $v1, $v0, L_00408580
    if (ctx->r3 != ctx->r2) {
        // 0x004082E4: nop
    
            goto L_00408580;
    }
    // 0x004082E4: nop

    // 0x004082E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x004082EC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x004082F0: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x004082F4: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x004082F8: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x004082FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00408300: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00408304: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00408308: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0040830C: nop

    // 0x00408310: bc1f        L_00408344
    if (!c1cs) {
        // 0x00408314: nop
    
            goto L_00408344;
    }
    // 0x00408314: nop

    // 0x00408318: jal         0x002532A8
    // 0x0040831C: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x0040831C: addiu       $a0, $s0, -0x1418
    ctx->r4 = ADD32(ctx->r16, -0X1418);
    after_0:
    // 0x00408320: lw          $a1, 0x51C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X51C);
    // 0x00408324: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x00408328: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0040832C: addiu       $a2, $a2, 0x6684
    ctx->r6 = ADD32(ctx->r6, 0X6684);
    // 0x00408330: jal         0x00281610
    // 0x00408334: addiu       $a0, $s0, -0x13D8
    ctx->r4 = ADD32(ctx->r16, -0X13D8);
    func_00281610(rdram, ctx);
        goto after_1;
    // 0x00408334: addiu       $a0, $s0, -0x13D8
    ctx->r4 = ADD32(ctx->r16, -0X13D8);
    after_1:
    // 0x00408338: jal         0x0027580C
    // 0x0040833C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    func_0027580C(rdram, ctx);
        goto after_2;
    // 0x0040833C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_2:
    // 0x00408340: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
L_00408344:
    // 0x00408344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408348: lwc1        $f0, 0x58C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X58C);
    // 0x0040834C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00408350: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x00408354: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00408358: lwc1        $f21, 0x590($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X590);
    // 0x0040835C: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x00408360: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00408364: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00408368: mul.s       $f1, $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x0040836C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00408370: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x00408374: addiu       $s0, $s0, 0xF0
    ctx->r16 = ADD32(ctx->r16, 0XF0);
    // 0x00408378: c.lt.s      $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f1.fl < ctx->f20.fl;
    // 0x0040837C: nop

    // 0x00408380: bc1t        L_00408390
    if (c1cs) {
        // 0x00408384: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00408390;
    }
    // 0x00408384: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00408388: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0040838C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_00408390:
    // 0x00408390: jal         0x0027AD88
    // 0x00408394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD88(rdram, ctx);
        goto after_3;
    // 0x00408394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00408398: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0040839C: lh          $v1, 0x46($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X46);
    // 0x004083A0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x004083A4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x004083A8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004083AC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004083B0: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x004083B4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x004083B8: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004083BC: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x004083C0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x004083C4: nop

    // 0x004083C8: bc1t        L_004083D8
    if (c1cs) {
        // 0x004083CC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_004083D8;
    }
    // 0x004083CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004083D0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x004083D4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_004083D8:
    // 0x004083D8: jal         0x0027AD90
    // 0x004083DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD90(rdram, ctx);
        goto after_4;
    // 0x004083DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004083E0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004083E4: bne         $v0, $zero, L_004084AC
    if (ctx->r2 != 0) {
        // 0x004083E8: nop
    
            goto L_004084AC;
    }
    // 0x004083E8: nop

    // 0x004083EC: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x004083F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004083F4: lwc1        $f0, 0x594($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X594);
    // 0x004083F8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004083FC: nop

    // 0x00408400: bc1f        L_0040844C
    if (!c1cs) {
        // 0x00408404: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0040844C;
    }
    // 0x00408404: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00408408: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0040840C: beq         $v0, $s2, L_0040844C
    if (ctx->r2 == ctx->r18) {
        // 0x00408410: addiu       $a1, $zero, 0x5335
        ctx->r5 = ADD32(0, 0X5335);
            goto L_0040844C;
    }
    // 0x00408410: addiu       $a1, $zero, 0x5335
    ctx->r5 = ADD32(0, 0X5335);
    // 0x00408414: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00408418: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x0040841C: jal         0x00219F74
    // 0x00408420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00219F74(rdram, ctx);
        goto after_5;
    // 0x00408420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00408424: addiu       $a0, $s0, 0x140
    ctx->r4 = ADD32(ctx->r16, 0X140);
    // 0x00408428: sb          $v0, 0xC6($a0)
    MEM_B(0XC6, ctx->r4) = ctx->r2;
    // 0x0040842C: addiu       $v0, $zero, 0x5335
    ctx->r2 = ADD32(0, 0X5335);
    // 0x00408430: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x00408434: lw          $v0, 0x140($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X140);
    // 0x00408438: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0040843C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00408440: sw          $v0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r2;
    // 0x00408444: sb          $zero, 0xC7($a0)
    MEM_B(0XC7, ctx->r4) = 0;
    // 0x00408448: sw          $s2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r18;
L_0040844C:
    // 0x0040844C: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00408450: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00408454: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00408458: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0040845C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00408460: lh          $v1, 0x46($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X46);
    // 0x00408464: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x00408468: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0040846C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00408470: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00408474: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00408478: nop

    // 0x0040847C: bc1f        L_0040849C
    if (!c1cs) {
        // 0x00408480: swc1        $f0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
            goto L_0040849C;
    }
    // 0x00408480: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x00408484: blez        $v1, L_004084A4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00408488: nop
    
            goto L_004084A4;
    }
    // 0x00408488: nop

    // 0x0040848C: jal         0x0040813C
    // 0x00408490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0040813C(rdram, ctx);
        goto after_6;
    // 0x00408490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00408494: j           L_004084AC
    // 0x00408498: nop

        goto L_004084AC;
    // 0x00408498: nop

L_0040849C:
    // 0x0040849C: bgtzl       $v0, L_004084AC
    if (SIGNED(ctx->r2) > 0) {
        // 0x004084A0: sw          $zero, 0x8($s1)
        MEM_W(0X8, ctx->r17) = 0;
            goto L_004084AC;
    }
    goto skip_0;
    // 0x004084A0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    skip_0:
L_004084A4:
    // 0x004084A4: jal         0x00407F20
    // 0x004084A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00407F20(rdram, ctx);
        goto after_7;
    // 0x004084A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_004084AC:
    // 0x004084AC: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004084B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004084B4: beq         $v1, $v0, L_00408580
    if (ctx->r3 == ctx->r2) {
        // 0x004084B8: nop
    
            goto L_00408580;
    }
    // 0x004084B8: nop

    // 0x004084BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004084C0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x004084C4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x004084C8: lw          $a1, -0x6770($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6770);
    // 0x004084CC: beq         $a0, $zero, L_00408580
    if (ctx->r4 == 0) {
        // 0x004084D0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00408580;
    }
    // 0x004084D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004084D4: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x004084D8: lui         $t0, 0x2000
    ctx->r8 = S32(0X2000 << 16);
    // 0x004084DC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
L_004084E0:
    // 0x004084E0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004084E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004084E8: bne         $v0, $t1, L_00408574
    if (ctx->r2 != ctx->r9) {
        // 0x004084EC: nop
    
            goto L_00408574;
    }
    // 0x004084EC: nop

    // 0x004084F0: lw          $v0, 0x1B8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1B8);
    // 0x004084F4: bne         $v0, $zero, L_00408574
    if (ctx->r2 != 0) {
        // 0x004084F8: nop
    
            goto L_00408574;
    }
    // 0x004084F8: nop

    // 0x004084FC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00408500: bne         $v0, $zero, L_0040854C
    if (ctx->r2 != 0) {
        // 0x00408504: nop
    
            goto L_0040854C;
    }
    // 0x00408504: nop

    // 0x00408508: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0040850C: lh          $v0, 0x44($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X44);
    // 0x00408510: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00408514: beq         $v0, $zero, L_00408528
    if (ctx->r2 == 0) {
        // 0x00408518: nop
    
            goto L_00408528;
    }
    // 0x00408518: nop

    // 0x0040851C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00408520: j           L_00408560
    // 0x00408524: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
        goto L_00408560;
    // 0x00408524: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00408528:
    // 0x00408528: lw          $v1, 0x140($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X140);
    // 0x0040852C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00408530: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00408534: sw          $v0, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r2;
    // 0x00408538: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0040853C: or          $v1, $v1, $a3
    ctx->r3 = ctx->r3 | ctx->r7;
    // 0x00408540: sw          $v1, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r3;
    // 0x00408544: j           L_00408574
    // 0x00408548: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
        goto L_00408574;
    // 0x00408548: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
L_0040854C:
    // 0x0040854C: lw          $v1, 0x1C0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C0);
    // 0x00408550: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00408554: bne         $v1, $v0, L_00408574
    if (ctx->r3 != ctx->r2) {
        // 0x00408558: nop
    
            goto L_00408574;
    }
    // 0x00408558: nop

    // 0x0040855C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
L_00408560:
    // 0x00408560: sw          $a1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r5;
    // 0x00408564: sw          $a1, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r5;
    // 0x00408568: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0040856C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00408570: sw          $v0, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r2;
L_00408574:
    // 0x00408574: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00408578: bne         $a0, $zero, L_004084E0
    if (ctx->r4 != 0) {
        // 0x0040857C: nop
    
            goto L_004084E0;
    }
    // 0x0040857C: nop

L_00408580:
    // 0x00408580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408584: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00408588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040858C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408590: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00408594: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00408598: jr          $ra
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00266964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00266968: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0026696C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00266970: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00266974: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00266978: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x0026697C: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x00266980: jal         0x002245BC
    // 0x00266984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x00266984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x00266988: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026698C: jr          $ra
    // 0x00266990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00266990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255344: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00255348: lw          $v0, 0xB8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8C);
    // 0x0025534C: bne         $v0, $zero, L_002553B0
    if (ctx->r2 != 0) {
        // 0x00255350: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002553B0;
    }
    // 0x00255350: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255354: lwc1        $f1, 0xA9C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XA9C);
    // 0x00255358: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025535C: lwc1        $f0, 0x7154($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7154);
    // 0x00255360: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00255364: nop

    // 0x00255368: bc1t        L_002553B0
    if (c1cs) {
        // 0x0025536C: nop
    
            goto L_002553B0;
    }
    // 0x0025536C: nop

    // 0x00255370: lw          $v0, 0x140($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X140);
    // 0x00255374: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x00255378: bne         $v0, $zero, L_002553B0
    if (ctx->r2 != 0) {
        // 0x0025537C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002553B0;
    }
    // 0x0025537C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255380: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x00255384: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00255388: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0025538C: beq         $v0, $zero, L_002553B0
    if (ctx->r2 == 0) {
        // 0x00255390: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002553B0;
    }
    // 0x00255390: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00255394: lw          $v0, 0xA68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA68);
    // 0x00255398: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x0025539C: beq         $v0, $zero, L_002553B0
    if (ctx->r2 == 0) {
        // 0x002553A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002553B0;
    }
    // 0x002553A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002553A4: jal         0x0024E5F0
    // 0x002553A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024E5F0(rdram, ctx);
        goto after_0;
    // 0x002553A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x002553AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002553B0:
    // 0x002553B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002553B4: jr          $ra
    // 0x002553B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002553B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00248BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00248BA8: addiu       $sp, $sp, -0x2E8
    ctx->r29 = ADD32(ctx->r29, -0X2E8);
    // 0x00248BAC: sw          $s5, 0x2C4($sp)
    MEM_W(0X2C4, ctx->r29) = ctx->r21;
    // 0x00248BB0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x00248BB4: sw          $s3, 0x2BC($sp)
    MEM_W(0X2BC, ctx->r29) = ctx->r19;
    // 0x00248BB8: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x00248BBC: sw          $s1, 0x2B4($sp)
    MEM_W(0X2B4, ctx->r29) = ctx->r17;
    // 0x00248BC0: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00248BC4: sw          $ra, 0x2D4($sp)
    MEM_W(0X2D4, ctx->r29) = ctx->r31;
    // 0x00248BC8: sw          $fp, 0x2D0($sp)
    MEM_W(0X2D0, ctx->r29) = ctx->r30;
    // 0x00248BCC: sw          $s7, 0x2CC($sp)
    MEM_W(0X2CC, ctx->r29) = ctx->r23;
    // 0x00248BD0: sw          $s6, 0x2C8($sp)
    MEM_W(0X2C8, ctx->r29) = ctx->r22;
    // 0x00248BD4: sw          $s4, 0x2C0($sp)
    MEM_W(0X2C0, ctx->r29) = ctx->r20;
    // 0x00248BD8: sw          $s2, 0x2B8($sp)
    MEM_W(0X2B8, ctx->r29) = ctx->r18;
    // 0x00248BDC: sw          $s0, 0x2B0($sp)
    MEM_W(0X2B0, ctx->r29) = ctx->r16;
    // 0x00248BE0: sdc1        $f21, 0x2E0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X2E0, ctx->r29);
    // 0x00248BE4: sdc1        $f20, 0x2D8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X2D8, ctx->r29);
    // 0x00248BE8: jal         0x0042EB04
    // 0x00248BEC: sw          $a2, 0x2F0($sp)
    MEM_W(0X2F0, ctx->r29) = ctx->r6;
    func_0042EB04(rdram, ctx);
        goto after_0;
    // 0x00248BEC: sw          $a2, 0x2F0($sp)
    MEM_W(0X2F0, ctx->r29) = ctx->r6;
    after_0:
    // 0x00248BF0: lw          $a0, 0xA50($s5)
    ctx->r4 = MEM_W(ctx->r21, 0XA50);
    // 0x00248BF4: jal         0x00285BD0
    // 0x00248BF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00285BD0(rdram, ctx);
        goto after_1;
    // 0x00248BF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00248BFC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00248C00: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00248C04: beq         $v0, $zero, L_00248C10
    if (ctx->r2 == 0) {
        // 0x00248C08: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00248C10;
    }
    // 0x00248C08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00248C0C: sltu        $s0, $s0, $s1
    ctx->r16 = ctx->r16 < ctx->r17 ? 1 : 0;
L_00248C10:
    // 0x00248C10: bne         $s0, $zero, L_00248E38
    if (ctx->r16 != 0) {
        // 0x00248C14: addiu       $v0, $zero, 0x1770
        ctx->r2 = ADD32(0, 0X1770);
            goto L_00248E38;
    }
    // 0x00248C14: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    // 0x00248C18: beq         $s3, $v0, L_00248CE8
    if (ctx->r19 == ctx->r2) {
        // 0x00248C1C: slti        $v0, $s3, 0x1771
        ctx->r2 = SIGNED(ctx->r19) < 0X1771 ? 1 : 0;
            goto L_00248CE8;
    }
    // 0x00248C1C: slti        $v0, $s3, 0x1771
    ctx->r2 = SIGNED(ctx->r19) < 0X1771 ? 1 : 0;
    // 0x00248C20: beq         $v0, $zero, L_00248C6C
    if (ctx->r2 == 0) {
        // 0x00248C24: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_00248C6C;
    }
    // 0x00248C24: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x00248C28: beq         $s3, $v0, L_00248CD8
    if (ctx->r19 == ctx->r2) {
        // 0x00248C2C: slti        $v0, $s3, 0xBB9
        ctx->r2 = SIGNED(ctx->r19) < 0XBB9 ? 1 : 0;
            goto L_00248CD8;
    }
    // 0x00248C2C: slti        $v0, $s3, 0xBB9
    ctx->r2 = SIGNED(ctx->r19) < 0XBB9 ? 1 : 0;
    // 0x00248C30: beq         $v0, $zero, L_00248C50
    if (ctx->r2 == 0) {
        // 0x00248C34: addiu       $v0, $zero, 0x3E8
        ctx->r2 = ADD32(0, 0X3E8);
            goto L_00248C50;
    }
    // 0x00248C34: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x00248C38: beq         $s3, $v0, L_00248CD0
    if (ctx->r19 == ctx->r2) {
        // 0x00248C3C: addiu       $v0, $zero, 0x7D0
        ctx->r2 = ADD32(0, 0X7D0);
            goto L_00248CD0;
    }
    // 0x00248C3C: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x00248C40: beq         $s3, $v0, L_00248CEC
    if (ctx->r19 == ctx->r2) {
        // 0x00248C44: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_00248CEC;
    }
    // 0x00248C44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x00248C48: j           L_00248E38
    // 0x00248C4C: nop

        goto L_00248E38;
    // 0x00248C4C: nop

L_00248C50:
    // 0x00248C50: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    // 0x00248C54: beq         $s3, $v0, L_00248CE0
    if (ctx->r19 == ctx->r2) {
        // 0x00248C58: addiu       $v0, $zero, 0x1388
        ctx->r2 = ADD32(0, 0X1388);
            goto L_00248CE0;
    }
    // 0x00248C58: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x00248C5C: beq         $s3, $v0, L_00248CEC
    if (ctx->r19 == ctx->r2) {
        // 0x00248C60: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_00248CEC;
    }
    // 0x00248C60: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x00248C64: j           L_00248E38
    // 0x00248C68: nop

        goto L_00248E38;
    // 0x00248C68: nop

L_00248C6C:
    // 0x00248C6C: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x00248C70: beq         $s3, $v0, L_00248D64
    if (ctx->r19 == ctx->r2) {
        // 0x00248C74: slti        $v0, $s3, 0x1C85
        ctx->r2 = SIGNED(ctx->r19) < 0X1C85 ? 1 : 0;
            goto L_00248D64;
    }
    // 0x00248C74: slti        $v0, $s3, 0x1C85
    ctx->r2 = SIGNED(ctx->r19) < 0X1C85 ? 1 : 0;
    // 0x00248C78: beq         $v0, $zero, L_00248C98
    if (ctx->r2 == 0) {
        // 0x00248C7C: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_00248C98;
    }
    // 0x00248C7C: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00248C80: beq         $s3, $v0, L_00248D04
    if (ctx->r19 == ctx->r2) {
        // 0x00248C84: addiu       $v0, $zero, 0x1C20
        ctx->r2 = ADD32(0, 0X1C20);
            goto L_00248D04;
    }
    // 0x00248C84: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x00248C88: beq         $s3, $v0, L_00248D34
    if (ctx->r19 == ctx->r2) {
        // 0x00248C8C: nop
    
            goto L_00248D34;
    }
    // 0x00248C8C: nop

    // 0x00248C90: j           L_00248E38
    // 0x00248C94: nop

        goto L_00248E38;
    // 0x00248C94: nop

L_00248C98:
    // 0x00248C98: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x00248C9C: beq         $s3, $v0, L_00248DD0
    if (ctx->r19 == ctx->r2) {
        // 0x00248CA0: slti        $v0, $s3, 0x1D4D
        ctx->r2 = SIGNED(ctx->r19) < 0X1D4D ? 1 : 0;
            goto L_00248DD0;
    }
    // 0x00248CA0: slti        $v0, $s3, 0x1D4D
    ctx->r2 = SIGNED(ctx->r19) < 0X1D4D ? 1 : 0;
    // 0x00248CA4: beq         $v0, $zero, L_00248CBC
    if (ctx->r2 == 0) {
        // 0x00248CA8: addiu       $v0, $zero, 0x1CE8
        ctx->r2 = ADD32(0, 0X1CE8);
            goto L_00248CBC;
    }
    // 0x00248CA8: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00248CAC: beq         $s3, $v0, L_00248D94
    if (ctx->r19 == ctx->r2) {
        // 0x00248CB0: nop
    
            goto L_00248D94;
    }
    // 0x00248CB0: nop

    // 0x00248CB4: j           L_00248E38
    // 0x00248CB8: nop

        goto L_00248E38;
    // 0x00248CB8: nop

L_00248CBC:
    // 0x00248CBC: addiu       $v0, $zero, 0x1DB1
    ctx->r2 = ADD32(0, 0X1DB1);
    // 0x00248CC0: beq         $s3, $v0, L_00248E0C
    if (ctx->r19 == ctx->r2) {
        // 0x00248CC4: nop
    
            goto L_00248E0C;
    }
    // 0x00248CC4: nop

    // 0x00248CC8: j           L_00248E38
    // 0x00248CCC: nop

        goto L_00248E38;
    // 0x00248CCC: nop

L_00248CD0:
    // 0x00248CD0: j           L_00248CEC
    // 0x00248CD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_00248CEC;
    // 0x00248CD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00248CD8:
    // 0x00248CD8: j           L_00248CEC
    // 0x00248CDC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_00248CEC;
    // 0x00248CDC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_00248CE0:
    // 0x00248CE0: j           L_00248CEC
    // 0x00248CE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_00248CEC;
    // 0x00248CE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00248CE8:
    // 0x00248CE8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_00248CEC:
    // 0x00248CEC: jal         0x00424A60
    // 0x00248CF0: nop

    func_00424A60(rdram, ctx);
        goto after_2;
    // 0x00248CF0: nop

    after_2:
    // 0x00248CF4: bne         $v0, $zero, L_00248E38
    if (ctx->r2 != 0) {
        // 0x00248CF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248E38;
    }
    // 0x00248CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248CFC: j           L_00248E38
    // 0x00248D00: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
        goto L_00248E38;
    // 0x00248D00: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
L_00248D04:
    // 0x00248D04: jal         0x00424A60
    // 0x00248D08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00424A60(rdram, ctx);
        goto after_3;
    // 0x00248D08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x00248D0C: beq         $v0, $zero, L_00248D28
    if (ctx->r2 == 0) {
        // 0x00248D10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248D28;
    }
    // 0x00248D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248D14: lw          $v0, 0x9D0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9D0);
    // 0x00248D18: bnel        $v0, $zero, L_00248E38
    if (ctx->r2 != 0) {
        // 0x00248D1C: addiu       $s3, $zero, 0x7CF
        ctx->r19 = ADD32(0, 0X7CF);
            goto L_00248E38;
    }
    goto skip_0;
    // 0x00248D1C: addiu       $s3, $zero, 0x7CF
    ctx->r19 = ADD32(0, 0X7CF);
    skip_0:
    // 0x00248D20: j           L_00248E38
    // 0x00248D24: nop

        goto L_00248E38;
    // 0x00248D24: nop

L_00248D28:
    // 0x00248D28: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
    // 0x00248D2C: j           L_00248E38
    // 0x00248D30: addiu       $s3, $zero, 0x3E8
    ctx->r19 = ADD32(0, 0X3E8);
        goto L_00248E38;
    // 0x00248D30: addiu       $s3, $zero, 0x3E8
    ctx->r19 = ADD32(0, 0X3E8);
L_00248D34:
    // 0x00248D34: jal         0x00424A60
    // 0x00248D38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_00424A60(rdram, ctx);
        goto after_4;
    // 0x00248D38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x00248D3C: beq         $v0, $zero, L_00248D58
    if (ctx->r2 == 0) {
        // 0x00248D40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248D58;
    }
    // 0x00248D40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248D44: lw          $v0, 0x9D4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9D4);
    // 0x00248D48: bnel        $v0, $zero, L_00248E38
    if (ctx->r2 != 0) {
        // 0x00248D4C: addiu       $s3, $zero, 0xBB7
        ctx->r19 = ADD32(0, 0XBB7);
            goto L_00248E38;
    }
    goto skip_1;
    // 0x00248D4C: addiu       $s3, $zero, 0xBB7
    ctx->r19 = ADD32(0, 0XBB7);
    skip_1:
    // 0x00248D50: j           L_00248E38
    // 0x00248D54: nop

        goto L_00248E38;
    // 0x00248D54: nop

L_00248D58:
    // 0x00248D58: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
    // 0x00248D5C: j           L_00248E38
    // 0x00248D60: addiu       $s3, $zero, 0x7D0
    ctx->r19 = ADD32(0, 0X7D0);
        goto L_00248E38;
    // 0x00248D60: addiu       $s3, $zero, 0x7D0
    ctx->r19 = ADD32(0, 0X7D0);
L_00248D64:
    // 0x00248D64: jal         0x00424A60
    // 0x00248D68: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_00424A60(rdram, ctx);
        goto after_5;
    // 0x00248D68: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x00248D6C: beq         $v0, $zero, L_00248D88
    if (ctx->r2 == 0) {
        // 0x00248D70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248D88;
    }
    // 0x00248D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248D74: lw          $v0, 0x9D8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9D8);
    // 0x00248D78: bnel        $v0, $zero, L_00248E38
    if (ctx->r2 != 0) {
        // 0x00248D7C: addiu       $s3, $zero, 0xF9F
        ctx->r19 = ADD32(0, 0XF9F);
            goto L_00248E38;
    }
    goto skip_2;
    // 0x00248D7C: addiu       $s3, $zero, 0xF9F
    ctx->r19 = ADD32(0, 0XF9F);
    skip_2:
    // 0x00248D80: j           L_00248E38
    // 0x00248D84: nop

        goto L_00248E38;
    // 0x00248D84: nop

L_00248D88:
    // 0x00248D88: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
    // 0x00248D8C: j           L_00248E38
    // 0x00248D90: addiu       $s3, $zero, 0xBB8
    ctx->r19 = ADD32(0, 0XBB8);
        goto L_00248E38;
    // 0x00248D90: addiu       $s3, $zero, 0xBB8
    ctx->r19 = ADD32(0, 0XBB8);
L_00248D94:
    // 0x00248D94: jal         0x00424A60
    // 0x00248D98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_00424A60(rdram, ctx);
        goto after_6;
    // 0x00248D98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x00248D9C: beq         $v0, $zero, L_00248DC4
    if (ctx->r2 == 0) {
        // 0x00248DA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248DC4;
    }
    // 0x00248DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248DA4: lw          $v0, 0x9DC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9DC);
    // 0x00248DA8: beq         $v0, $zero, L_00248E38
    if (ctx->r2 == 0) {
        // 0x00248DAC: nop
    
            goto L_00248E38;
    }
    // 0x00248DAC: nop

    // 0x00248DB0: lw          $v0, 0x9E4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9E4);
    // 0x00248DB4: beq         $v0, $zero, L_00248E38
    if (ctx->r2 == 0) {
        // 0x00248DB8: addiu       $s3, $zero, 0x1CE9
        ctx->r19 = ADD32(0, 0X1CE9);
            goto L_00248E38;
    }
    // 0x00248DB8: addiu       $s3, $zero, 0x1CE9
    ctx->r19 = ADD32(0, 0X1CE9);
    // 0x00248DBC: j           L_00248E38
    // 0x00248DC0: addiu       $s3, $zero, 0x1387
    ctx->r19 = ADD32(0, 0X1387);
        goto L_00248E38;
    // 0x00248DC0: addiu       $s3, $zero, 0x1387
    ctx->r19 = ADD32(0, 0X1387);
L_00248DC4:
    // 0x00248DC4: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
    // 0x00248DC8: j           L_00248E38
    // 0x00248DCC: addiu       $s3, $zero, 0xFA0
    ctx->r19 = ADD32(0, 0XFA0);
        goto L_00248E38;
    // 0x00248DCC: addiu       $s3, $zero, 0xFA0
    ctx->r19 = ADD32(0, 0XFA0);
L_00248DD0:
    // 0x00248DD0: jal         0x00424A60
    // 0x00248DD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_00424A60(rdram, ctx);
        goto after_7;
    // 0x00248DD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x00248DD8: beq         $v0, $zero, L_00248E00
    if (ctx->r2 == 0) {
        // 0x00248DDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248E00;
    }
    // 0x00248DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248DE0: lw          $v0, 0x9E0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9E0);
    // 0x00248DE4: beq         $v0, $zero, L_00248E38
    if (ctx->r2 == 0) {
        // 0x00248DE8: nop
    
            goto L_00248E38;
    }
    // 0x00248DE8: nop

    // 0x00248DEC: lw          $v0, 0x9E8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9E8);
    // 0x00248DF0: beq         $v0, $zero, L_00248E38
    if (ctx->r2 == 0) {
        // 0x00248DF4: addiu       $s3, $zero, 0x1D4D
        ctx->r19 = ADD32(0, 0X1D4D);
            goto L_00248E38;
    }
    // 0x00248DF4: addiu       $s3, $zero, 0x1D4D
    ctx->r19 = ADD32(0, 0X1D4D);
    // 0x00248DF8: j           L_00248E38
    // 0x00248DFC: addiu       $s3, $zero, 0x176F
    ctx->r19 = ADD32(0, 0X176F);
        goto L_00248E38;
    // 0x00248DFC: addiu       $s3, $zero, 0x176F
    ctx->r19 = ADD32(0, 0X176F);
L_00248E00:
    // 0x00248E00: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
    // 0x00248E04: j           L_00248E38
    // 0x00248E08: addiu       $s3, $zero, 0x1388
    ctx->r19 = ADD32(0, 0X1388);
        goto L_00248E38;
    // 0x00248E08: addiu       $s3, $zero, 0x1388
    ctx->r19 = ADD32(0, 0X1388);
L_00248E0C:
    // 0x00248E0C: jal         0x00424A60
    // 0x00248E10: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_00424A60(rdram, ctx);
        goto after_8;
    // 0x00248E10: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_8:
    // 0x00248E14: beq         $v0, $zero, L_00248E30
    if (ctx->r2 == 0) {
        // 0x00248E18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00248E30;
    }
    // 0x00248E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00248E1C: lw          $v0, 0x9EC($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9EC);
    // 0x00248E20: bnel        $v0, $zero, L_00248E38
    if (ctx->r2 != 0) {
        // 0x00248E24: addiu       $s3, $zero, 0x1B57
        ctx->r19 = ADD32(0, 0X1B57);
            goto L_00248E38;
    }
    goto skip_3;
    // 0x00248E24: addiu       $s3, $zero, 0x1B57
    ctx->r19 = ADD32(0, 0X1B57);
    skip_3:
    // 0x00248E28: j           L_00248E38
    // 0x00248E2C: nop

        goto L_00248E38;
    // 0x00248E2C: nop

L_00248E30:
    // 0x00248E30: sw          $v0, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = ctx->r2;
    // 0x00248E34: addiu       $s3, $zero, 0x1770
    ctx->r19 = ADD32(0, 0X1770);
L_00248E38:
    // 0x00248E38: bnel        $s1, $zero, L_00248E40
    if (ctx->r17 != 0) {
        // 0x00248E3C: sw          $zero, 0xC00($s5)
        MEM_W(0XC00, ctx->r21) = 0;
            goto L_00248E40;
    }
    goto skip_4;
    // 0x00248E3C: sw          $zero, 0xC00($s5)
    MEM_W(0XC00, ctx->r21) = 0;
    skip_4:
L_00248E40:
    // 0x00248E40: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x00248E44: beq         $s3, $v0, L_00248EC8
    if (ctx->r19 == ctx->r2) {
        // 0x00248E48: nop
    
            goto L_00248EC8;
    }
    // 0x00248E48: nop

    // 0x00248E4C: slti        $v0, $s3, 0xBB9
    ctx->r2 = SIGNED(ctx->r19) < 0XBB9 ? 1 : 0;
    // 0x00248E50: beq         $v0, $zero, L_00248E74
    if (ctx->r2 == 0) {
        // 0x00248E54: addiu       $v0, $zero, 0x3E8
        ctx->r2 = ADD32(0, 0X3E8);
            goto L_00248E74;
    }
    // 0x00248E54: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x00248E58: beq         $s3, $v0, L_00248EB0
    if (ctx->r19 == ctx->r2) {
        // 0x00248E5C: nop
    
            goto L_00248EB0;
    }
    // 0x00248E5C: nop

    // 0x00248E60: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x00248E64: beq         $s3, $v0, L_00248EBC
    if (ctx->r19 == ctx->r2) {
        // 0x00248E68: nop
    
            goto L_00248EBC;
    }
    // 0x00248E68: nop

    // 0x00248E6C: j           L_00248EF8
    // 0x00248E70: nop

        goto L_00248EF8;
    // 0x00248E70: nop

L_00248E74:
    // 0x00248E74: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x00248E78: beq         $s3, $v0, L_00248EE0
    if (ctx->r19 == ctx->r2) {
        // 0x00248E7C: nop
    
            goto L_00248EE0;
    }
    // 0x00248E7C: nop

    // 0x00248E80: slti        $v0, $s3, 0x1389
    ctx->r2 = SIGNED(ctx->r19) < 0X1389 ? 1 : 0;
    // 0x00248E84: beq         $v0, $zero, L_00248E9C
    if (ctx->r2 == 0) {
        // 0x00248E88: addiu       $v0, $zero, 0xFA0
        ctx->r2 = ADD32(0, 0XFA0);
            goto L_00248E9C;
    }
    // 0x00248E88: addiu       $v0, $zero, 0xFA0
    ctx->r2 = ADD32(0, 0XFA0);
    // 0x00248E8C: beq         $s3, $v0, L_00248ED4
    if (ctx->r19 == ctx->r2) {
        // 0x00248E90: nop
    
            goto L_00248ED4;
    }
    // 0x00248E90: nop

    // 0x00248E94: j           L_00248EF8
    // 0x00248E98: nop

        goto L_00248EF8;
    // 0x00248E98: nop

L_00248E9C:
    // 0x00248E9C: addiu       $v0, $zero, 0x1770
    ctx->r2 = ADD32(0, 0X1770);
    // 0x00248EA0: beq         $s3, $v0, L_00248EEC
    if (ctx->r19 == ctx->r2) {
        // 0x00248EA4: nop
    
            goto L_00248EEC;
    }
    // 0x00248EA4: nop

    // 0x00248EA8: j           L_00248EF8
    // 0x00248EAC: nop

        goto L_00248EF8;
    // 0x00248EAC: nop

L_00248EB0:
    // 0x00248EB0: lw          $v0, 0x9F8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9F8);
    // 0x00248EB4: j           L_00248EF4
    // 0x00248EB8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_00248EF4;
    // 0x00248EB8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_00248EBC:
    // 0x00248EBC: lw          $v0, 0x9F8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9F8);
    // 0x00248EC0: j           L_00248EF4
    // 0x00248EC4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_00248EF4;
    // 0x00248EC4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_00248EC8:
    // 0x00248EC8: lw          $v0, 0x9F8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9F8);
    // 0x00248ECC: j           L_00248EF4
    // 0x00248ED0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_00248EF4;
    // 0x00248ED0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_00248ED4:
    // 0x00248ED4: lw          $v0, 0x9F8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9F8);
    // 0x00248ED8: j           L_00248EF4
    // 0x00248EDC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
        goto L_00248EF4;
    // 0x00248EDC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_00248EE0:
    // 0x00248EE0: lw          $v0, 0x9F8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9F8);
    // 0x00248EE4: j           L_00248EF4
    // 0x00248EE8: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_00248EF4;
    // 0x00248EE8: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_00248EEC:
    // 0x00248EEC: lw          $v0, 0x9F8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X9F8);
    // 0x00248EF0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_00248EF4:
    // 0x00248EF4: sw          $v0, 0x9F8($s5)
    MEM_W(0X9F8, ctx->r21) = ctx->r2;
L_00248EF8:
    // 0x00248EF8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x00248EFC: addiu       $s1, $s1, -0x550F
    ctx->r17 = ADD32(ctx->r17, -0X550F);
    // 0x00248F00: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00248F04: beq         $v0, $zero, L_0024900C
    if (ctx->r2 == 0) {
        // 0x00248F08: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_0024900C;
    }
    // 0x00248F08: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00248F0C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00248F10: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00248F14: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00248F18: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x00248F1C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00248F20: jal         0x0042C194
    // 0x00248F24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_0042C194(rdram, ctx);
        goto after_9;
    // 0x00248F24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x00248F28: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x00248F2C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x00248F30: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x00248F34: blez        $s7, L_00248FA8
    if (SIGNED(ctx->r23) <= 0) {
        // 0x00248F38: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00248FA8;
    }
    // 0x00248F38: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00248F3C: addiu       $fp, $sp, 0x18
    ctx->r30 = ADD32(ctx->r29, 0X18);
    // 0x00248F40: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
L_00248F44:
    // 0x00248F44: addu        $s1, $s4, $fp
    ctx->r17 = ADD32(ctx->r20, ctx->r30);
    // 0x00248F48: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00248F4C: lw          $s0, -0x6770($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6770);
    // 0x00248F50: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00248F54: beq         $s0, $zero, L_00248F80
    if (ctx->r16 == 0) {
        // 0x00248F58: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_00248F80;
    }
    // 0x00248F58: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
L_00248F5C:
    // 0x00248F5C: lw          $v0, 0x51C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X51C);
    // 0x00248F60: beq         $v0, $zero, L_00248F74
    if (ctx->r2 == 0) {
        // 0x00248F64: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00248F74;
    }
    // 0x00248F64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00248F68: jal         0x0020F6BC
    // 0x00248F6C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_0020F6BC(rdram, ctx);
        goto after_10;
    // 0x00248F6C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_10:
    // 0x00248F70: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_00248F74:
    // 0x00248F74: lw          $s0, 0x1320($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1320);
    // 0x00248F78: bne         $s0, $zero, L_00248F5C
    if (ctx->r16 != 0) {
        // 0x00248F7C: nop
    
            goto L_00248F5C;
    }
    // 0x00248F7C: nop

L_00248F80:
    // 0x00248F80: c.le.s      $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f21.fl <= ctx->f20.fl;
    // 0x00248F84: nop

    // 0x00248F88: bc1fl       L_00248F9C
    if (!c1cs) {
        // 0x00248F8C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00248F9C;
    }
    goto skip_5;
    // 0x00248F8C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x00248F90: mov.s       $f21, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    ctx->f21.fl = ctx->f20.fl;
    // 0x00248F94: addu        $s6, $s2, $zero
    ctx->r22 = ADD32(ctx->r18, 0);
    // 0x00248F98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00248F9C:
    // 0x00248F9C: slt         $v0, $s2, $s7
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x00248FA0: bne         $v0, $zero, L_00248F44
    if (ctx->r2 != 0) {
        // 0x00248FA4: addiu       $s4, $s4, 0x14
        ctx->r20 = ADD32(ctx->r20, 0X14);
            goto L_00248F44;
    }
    // 0x00248FA4: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
L_00248FA8:
    // 0x00248FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00248FAC: beq         $s6, $v0, L_002490CC
    if (ctx->r22 == ctx->r2) {
        // 0x00248FB0: sll         $v0, $s6, 2
        ctx->r2 = S32(ctx->r22 << 2);
            goto L_002490CC;
    }
    // 0x00248FB0: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
    // 0x00248FB4: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x00248FB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00248FBC: addiu       $v1, $sp, 0x30
    ctx->r3 = ADD32(ctx->r29, 0X30);
    // 0x00248FC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00248FC4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x00248FC8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x00248FCC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x00248FD0: sw          $t0, 0x28C($s5)
    MEM_W(0X28C, ctx->r21) = ctx->r8;
    // 0x00248FD4: sw          $t1, 0x290($s5)
    MEM_W(0X290, ctx->r21) = ctx->r9;
    // 0x00248FD8: sw          $t2, 0x294($s5)
    MEM_W(0X294, ctx->r21) = ctx->r10;
    // 0x00248FDC: lw          $t0, 0x28C($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X28C);
    // 0x00248FE0: lw          $t1, 0x290($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X290);
    // 0x00248FE4: lw          $t2, 0x294($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X294);
    // 0x00248FE8: sw          $t0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r8;
    // 0x00248FEC: sw          $t1, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r9;
    // 0x00248FF0: sw          $t2, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r10;
    // 0x00248FF4: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00248FF8: swc1        $f0, 0x2D8($s5)
    MEM_W(0X2D8, ctx->r21) = ctx->f0.u32l;
    // 0x00248FFC: swc1        $f0, 0x50($s5)
    MEM_W(0X50, ctx->r21) = ctx->f0.u32l;
    // 0x00249000: lh          $a1, 0x12($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X12);
    // 0x00249004: j           L_002490A4
    // 0x00249008: nop

        goto L_002490A4;
    // 0x00249008: nop

L_0024900C:
    // 0x0024900C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00249010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00249014: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00249018: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x0024901C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00249020: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00249024: jal         0x0042C194
    // 0x00249028: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_0042C194(rdram, ctx);
        goto after_11;
    // 0x00249028: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_11:
    // 0x0024902C: beq         $v0, $zero, L_002490CC
    if (ctx->r2 == 0) {
        // 0x00249030: nop
    
            goto L_002490CC;
    }
    // 0x00249030: nop

    // 0x00249034: lh          $v1, 0x28($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X28);
    // 0x00249038: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0024903C: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x00249040: bne         $v1, $v0, L_002490CC
    if (ctx->r3 != ctx->r2) {
        // 0x00249044: nop
    
            goto L_002490CC;
    }
    // 0x00249044: nop

    // 0x00249048: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0024904C: bne         $v0, $zero, L_00249064
    if (ctx->r2 != 0) {
        // 0x00249050: nop
    
            goto L_00249064;
    }
    // 0x00249050: nop

    // 0x00249054: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00249058: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0024905C: beq         $v0, $zero, L_002490CC
    if (ctx->r2 == 0) {
        // 0x00249060: nop
    
            goto L_002490CC;
    }
    // 0x00249060: nop

L_00249064:
    // 0x00249064: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00249068: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x0024906C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x00249070: sw          $t0, 0x28C($s5)
    MEM_W(0X28C, ctx->r21) = ctx->r8;
    // 0x00249074: sw          $t1, 0x290($s5)
    MEM_W(0X290, ctx->r21) = ctx->r9;
    // 0x00249078: sw          $t2, 0x294($s5)
    MEM_W(0X294, ctx->r21) = ctx->r10;
    // 0x0024907C: lw          $t0, 0x28C($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X28C);
    // 0x00249080: lw          $t1, 0x290($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X290);
    // 0x00249084: lw          $t2, 0x294($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X294);
    // 0x00249088: sw          $t0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r8;
    // 0x0024908C: sw          $t1, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r9;
    // 0x00249090: sw          $t2, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r10;
    // 0x00249094: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x00249098: swc1        $f0, 0x2D8($s5)
    MEM_W(0X2D8, ctx->r21) = ctx->f0.u32l;
    // 0x0024909C: swc1        $f0, 0x50($s5)
    MEM_W(0X50, ctx->r21) = ctx->f0.u32l;
    // 0x002490A0: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
L_002490A4:
    // 0x002490A4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002490A8: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002490AC: jal         0x002242F8
    // 0x002490B0: nop

    func_002242F8(rdram, ctx);
        goto after_12;
    // 0x002490B0: nop

    after_12:
    // 0x002490B4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002490B8: sw          $v0, 0x298($a0)
    MEM_W(0X298, ctx->r4) = ctx->r2;
    // 0x002490BC: jal         0x0042DE74
    // 0x002490C0: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    func_0042DE74(rdram, ctx);
        goto after_13;
    // 0x002490C0: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    after_13:
    // 0x002490C4: j           L_002490E0
    // 0x002490C8: nop

        goto L_002490E0;
    // 0x002490C8: nop

L_002490CC:
    // 0x002490CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002490D0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002490D4: lw          $a2, 0x2F0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2F0);
    // 0x002490D8: jal         0x0042C700
    // 0x002490DC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0042C700(rdram, ctx);
        goto after_14;
    // 0x002490DC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_14:
L_002490E0:
    // 0x002490E0: lw          $ra, 0x2D4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2D4);
    // 0x002490E4: lw          $fp, 0x2D0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X2D0);
    // 0x002490E8: lw          $s7, 0x2CC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2CC);
    // 0x002490EC: lw          $s6, 0x2C8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C8);
    // 0x002490F0: lw          $s5, 0x2C4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C4);
    // 0x002490F4: lw          $s4, 0x2C0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C0);
    // 0x002490F8: lw          $s3, 0x2BC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2BC);
    // 0x002490FC: lw          $s2, 0x2B8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2B8);
    // 0x00249100: lw          $s1, 0x2B4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2B4);
    // 0x00249104: lw          $s0, 0x2B0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2B0);
    // 0x00249108: ldc1        $f21, 0x2E0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X2E0);
    // 0x0024910C: ldc1        $f20, 0x2D8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X2D8);
    // 0x00249110: jr          $ra
    // 0x00249114: addiu       $sp, $sp, 0x2E8
    ctx->r29 = ADD32(ctx->r29, 0X2E8);
    return;
    // 0x00249114: addiu       $sp, $sp, 0x2E8
    ctx->r29 = ADD32(ctx->r29, 0X2E8);
;}
RECOMP_FUNC void func_00226660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226660: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00226664: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00226668: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x0022666C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00226670: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00226674: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00226678: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0022667C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00226680: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x00226684: beq         $s2, $zero, L_0022669C
    if (ctx->r18 == 0) {
        // 0x00226688: sw          $ra, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r31;
            goto L_0022669C;
    }
    // 0x00226688: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0022668C: lw          $a0, 0x1174($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1174);
    // 0x00226690: lw          $a1, 0x116C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X116C);
    // 0x00226694: j           L_002266A8
    // 0x00226698: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
        goto L_002266A8;
    // 0x00226698: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
L_0022669C:
    // 0x0022669C: lw          $a0, 0x1170($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1170);
    // 0x002266A0: lw          $a1, 0x1168($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1168);
    // 0x002266A4: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
L_002266A8:
    // 0x002266A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002266AC: jal         0x00266D8C
    // 0x002266B0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00266D8C(rdram, ctx);
        goto after_0;
    // 0x002266B0: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x002266B4: beql        $v0, $zero, L_00226704
    if (ctx->r2 == 0) {
        // 0x002266B8: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_00226704;
    }
    goto skip_0;
    // 0x002266B8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x002266BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x002266C0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002266C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002266C8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x002266CC: beq         $s2, $zero, L_002266E0
    if (ctx->r18 == 0) {
        // 0x002266D0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_002266E0;
    }
    // 0x002266D0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x002266D4: lw          $v0, 0x117C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X117C);
    // 0x002266D8: j           L_002266E8
    // 0x002266DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_002266E8;
    // 0x002266DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_002266E0:
    // 0x002266E0: lw          $v0, 0x1178($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1178);
    // 0x002266E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_002266E8:
    // 0x002266E8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x002266EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x002266F0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x002266F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x002266F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002266FC: j           L_00226708
    // 0x00226700: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
        goto L_00226708;
    // 0x00226700: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
L_00226704:
    // 0x00226704: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
L_00226708:
    // 0x00226708: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0022670C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00226710: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00226714: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00226718: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0022671C: jr          $ra
    // 0x00226720: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00226720: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004154C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004154C4: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
    // 0x004154C8: j           L_00415500
    // 0x004154CC: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    func_00415500(rdram, ctx);
    return;
    // 0x004154CC: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x004154D0: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x004154D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004154D8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x004154DC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x004154E0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x004154E4: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x004154E8: nop

    // 0x004154EC: bc1f        L_00415500
    if (!c1cs) {
            // 0x004154F0: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    func_00415500(rdram, ctx);
    return;
    }
    // 0x004154F0: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
    // 0x004154F4: swc1        $f1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x004154F8: j           L_004156D8
    // 0x004154FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    func_004156D8(rdram, ctx);
    return;
    // 0x004154FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // turok2: reconnected split function: a stray ELF symbol at 0x00415500 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00415500(rdram, ctx);
;}
RECOMP_FUNC void func_002803E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002803E8: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x002803EC: sdc1        $f24, 0x100($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X100, ctx->r29);
    // 0x002803F0: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x002803F4: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x002803F8: sdc1        $f22, 0xF0($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XF0, ctx->r29);
    // 0x002803FC: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x00280400: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00280404: addiu       $v0, $v0, -0x64C0
    ctx->r2 = ADD32(ctx->r2, -0X64C0);
    // 0x00280408: sdc1        $f23, 0xF8($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XF8, ctx->r29);
    // 0x0028040C: mtc1        $a3, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r7;
    // 0x00280410: addiu       $a0, $v0, 0x50
    ctx->r4 = ADD32(ctx->r2, 0X50);
    // 0x00280414: sw          $ra, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r31;
    // 0x00280418: sw          $fp, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r30;
    // 0x0028041C: sw          $s7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r23;
    // 0x00280420: sw          $s6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r22;
    // 0x00280424: sw          $s5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r21;
    // 0x00280428: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x0028042C: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x00280430: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x00280434: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x00280438: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x0028043C: sdc1        $f26, 0x110($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X110, ctx->r29);
    // 0x00280440: sdc1        $f25, 0x108($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X108, ctx->r29);
    // 0x00280444: sdc1        $f21, 0xE8($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE8, ctx->r29);
    // 0x00280448: sdc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE0, ctx->r29);
    // 0x0028044C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x00280450: addiu       $t3, $t3, -0x64F8
    ctx->r11 = ADD32(ctx->r11, -0X64F8);
    // 0x00280454: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00280458: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0028045C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00280460: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00280464: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00280468: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x0028046C: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x00280470: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x00280474: lw          $t2, 0x14($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X14);
    // 0x00280478: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x0028047C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x00280480: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x00280484: lw          $t0, 0x18($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X18);
    // 0x00280488: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x0028048C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x00280490: addiu       $t3, $t3, -0x64DC
    ctx->r11 = ADD32(ctx->r11, -0X64DC);
    // 0x00280494: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00280498: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x0028049C: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x002804A0: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x002804A4: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x002804A8: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x002804AC: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x002804B0: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x002804B4: lw          $t2, 0x14($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X14);
    // 0x002804B8: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x002804BC: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x002804C0: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x002804C4: lw          $t0, 0x18($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X18);
    // 0x002804C8: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
L_002804CC:
    // 0x002804CC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002804D0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x002804D4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x002804D8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x002804DC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x002804E0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002804E4: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x002804E8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x002804EC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x002804F0: bne         $v0, $a0, L_002804CC
    if (ctx->r2 != ctx->r4) {
        // 0x002804F4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002804CC;
    }
    // 0x002804F4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002804F8: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x002804FC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00280500: c.eq.s      $f23, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f23.fl == ctx->f26.fl;
    // 0x00280504: nop

    // 0x00280508: bc1t        L_00280A54
    if (c1cs) {
        // 0x0028050C: sw          $t0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r8;
            goto L_00280A54;
    }
    // 0x0028050C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00280510: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00280514: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x00280518: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x0028051C: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00280520: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00280524: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00280528: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0028052C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280530: sub.s       $f21, $f0, $f24
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f21.fl = ctx->f0.fl - ctx->f24.fl;
    // 0x00280534: ori         $a1, $a1, 0x1201
    ctx->r5 = ctx->r5 | 0X1201;
    // 0x00280538: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028053C: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00280540: mul.s       $f1, $f21, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x00280544: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x00280548: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028054C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x00280550: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00280554: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280558: sub.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x0028055C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00280560: addiu       $v1, $v1, -0x71DC
    ctx->r3 = ADD32(ctx->r3, -0X71DC);
    // 0x00280564: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00280568: mul.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x0028056C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00280570: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00280574: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00280578: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x0028057C: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    // 0x00280580: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00280584: jal         0x00298470
    // 0x00280588: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00280588: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    after_0:
    // 0x0028058C: lw          $t0, 0x128($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X128);
    // 0x00280590: bne         $t0, $zero, L_00280608
    if (ctx->r8 != 0) {
        // 0x00280594: mov.s       $f25, $f0
        CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    ctx->f25.fl = ctx->f0.fl;
            goto L_00280608;
    }
    // 0x00280594: mov.s       $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    ctx->f25.fl = ctx->f0.fl;
    // 0x00280598: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028059C: lw          $v0, 0x2030($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2030);
    // 0x002805A0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002805A4: mflo        $v1
    ctx->r3 = lo;
    // 0x002805A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002805AC: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x002805B0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002805B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002805B8: lwc1        $f1, -0x646C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X646C);
    // 0x002805BC: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x002805C0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002805C4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002805C8: mflo        $v0
    ctx->r2 = lo;
    // 0x002805CC: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x002805D0: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x002805D4: mul.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x002805D8: jal         0x00298470
    // 0x002805DC: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_1;
    // 0x002805DC: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_1:
    // 0x002805E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002805E4: lwc1        $f2, -0x6468($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6468);
    // 0x002805E8: div.s       $f1, $f25, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f25.fl, ctx->f0.fl);
    // 0x002805EC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x002805F0: nop

    // 0x002805F4: bc1fl       L_00280604
    if (!c1cs) {
        // 0x002805F8: sub.s       $f0, $f2, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
            goto L_00280604;
    }
    goto skip_0;
    // 0x002805F8: sub.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
    skip_0:
    // 0x002805FC: j           L_00280608
    // 0x00280600: mov.s       $f23, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 26);
    ctx->f23.fl = ctx->f26.fl;
        goto L_00280608;
    // 0x00280600: mov.s       $f23, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 26);
    ctx->f23.fl = ctx->f26.fl;
L_00280604:
    // 0x00280604: mul.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
L_00280608:
    // 0x00280608: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028060C: lwc1        $f0, -0x6464($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6464);
    // 0x00280610: mul.s       $f25, $f25, $f0
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f25.fl = MUL_S(ctx->f25.fl, ctx->f0.fl);
    // 0x00280614: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00280618: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x0028061C: nop

    // 0x00280620: bc1f        L_0028062C
    if (!c1cs) {
        // 0x00280624: mov.s       $f1, $f21
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    ctx->f1.fl = ctx->f21.fl;
            goto L_0028062C;
    }
    // 0x00280624: mov.s       $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    ctx->f1.fl = ctx->f21.fl;
    // 0x00280628: neg.s       $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = -ctx->f21.fl;
L_0028062C:
    // 0x0028062C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x00280630: nop

    // 0x00280634: bc1f        L_00280658
    if (!c1cs) {
        // 0x00280638: nop
    
            goto L_00280658;
    }
    // 0x00280638: nop

    // 0x0028063C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x00280640: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00280644: nop

    // 0x00280648: bc1f        L_002806A8
    if (!c1cs) {
        // 0x0028064C: nop
    
            goto L_002806A8;
    }
    // 0x0028064C: nop

    // 0x00280650: j           L_00280668
    // 0x00280654: nop

        goto L_00280668;
    // 0x00280654: nop

L_00280658:
    // 0x00280658: c.lt.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl < ctx->f1.fl;
    // 0x0028065C: nop

    // 0x00280660: bc1f        L_002806A8
    if (!c1cs) {
        // 0x00280664: nop
    
            goto L_002806A8;
    }
    // 0x00280664: nop

L_00280668:
    // 0x00280668: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0028066C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280670: lwc1        $f26, -0x6460($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X6460);
    // 0x00280674: c.lt.s      $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f0.fl < ctx->f21.fl;
    // 0x00280678: nop

    // 0x0028067C: bc1f        L_0028068C
    if (!c1cs) {
        // 0x00280680: nop
    
            goto L_0028068C;
    }
    // 0x00280680: nop

    // 0x00280684: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280688: lwc1        $f26, -0x645C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X645C);
L_0028068C:
    // 0x0028068C: c.lt.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl < ctx->f0.fl;
    // 0x00280690: nop

    // 0x00280694: bc1fl       L_002806E8
    if (!c1cs) {
        // 0x00280698: div.s       $f21, $f20, $f21
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
            goto L_002806E8;
    }
    goto skip_1;
    // 0x00280698: div.s       $f21, $f20, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f21.fl);
    skip_1:
    // 0x0028069C: neg.s       $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = -ctx->f21.fl;
    // 0x002806A0: j           L_002806E8
    // 0x002806A4: div.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
        goto L_002806E8;
    // 0x002806A4: div.s       $f21, $f20, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
L_002806A8:
    // 0x002806A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002806AC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x002806B0: nop

    // 0x002806B4: bc1fl       L_002806C8
    if (!c1cs) {
        // 0x002806B8: div.s       $f26, $f21, $f20
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = DIV_S(ctx->f21.fl, ctx->f20.fl);
            goto L_002806C8;
    }
    goto skip_2;
    // 0x002806B8: div.s       $f26, $f21, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = DIV_S(ctx->f21.fl, ctx->f20.fl);
    skip_2:
    // 0x002806BC: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x002806C0: div.s       $f26, $f21, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = DIV_S(ctx->f21.fl, ctx->f0.fl);
    // 0x002806C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_002806C8:
    // 0x002806C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002806CC: lwc1        $f21, -0x6458($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6458);
    // 0x002806D0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002806D4: nop

    // 0x002806D8: bc1f        L_002806E8
    if (!c1cs) {
        // 0x002806DC: nop
    
            goto L_002806E8;
    }
    // 0x002806DC: nop

    // 0x002806E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002806E4: lwc1        $f21, -0x6454($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6454);
L_002806E8:
    // 0x002806E8: lw          $t0, 0x128($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X128);
    // 0x002806EC: beq         $t0, $zero, L_00280818
    if (ctx->r8 == 0) {
        // 0x002806F0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00280818;
    }
    // 0x002806F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x002806F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002806F8: lwc1        $f3, -0x6450($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6450);
    // 0x002806FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00280700: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00280704: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280708: add.s       $f6, $f0, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0028070C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00280710: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00280714: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00280718: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0028071C: add.s       $f5, $f24, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = ctx->f24.fl + ctx->f3.fl;
    // 0x00280720: sub.s       $f1, $f6, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x00280724: sub.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f24.fl;
    // 0x00280728: c.le.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl <= ctx->f4.fl;
    // 0x0028072C: nop

    // 0x00280730: bc1t        L_0028073C
    if (c1cs) {
        // 0x00280734: add.s       $f2, $f22, $f3
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f3.fl;
            goto L_0028073C;
    }
    // 0x00280734: add.s       $f2, $f22, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f22.fl + ctx->f3.fl;
    // 0x00280738: mov.s       $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    ctx->f1.fl = ctx->f4.fl;
L_0028073C:
    // 0x0028073C: c.le.s      $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f1.fl <= ctx->f2.fl;
    // 0x00280740: nop

    // 0x00280744: bc1fl       L_0028074C
    if (!c1cs) {
        // 0x00280748: mov.s       $f1, $f2
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
            goto L_0028074C;
    }
    goto skip_3;
    // 0x00280748: mov.s       $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    ctx->f1.fl = ctx->f2.fl;
    skip_3:
L_0028074C:
    // 0x0028074C: c.le.s      $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f1.fl <= ctx->f5.fl;
    // 0x00280750: nop

    // 0x00280754: bc1fl       L_0028075C
    if (!c1cs) {
        // 0x00280758: mov.s       $f1, $f5
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    ctx->f1.fl = ctx->f5.fl;
            goto L_0028075C;
    }
    goto skip_4;
    // 0x00280758: mov.s       $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    ctx->f1.fl = ctx->f5.fl;
    skip_4:
L_0028075C:
    // 0x0028075C: c.le.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl <= ctx->f3.fl;
    // 0x00280760: nop

    // 0x00280764: bc1fl       L_0028076C
    if (!c1cs) {
        // 0x00280768: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_0028076C;
    }
    goto skip_5;
    // 0x00280768: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_5:
L_0028076C:
    // 0x0028076C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00280770: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00280774: nop

    // 0x00280778: bc1fl       L_00280788
    if (!c1cs) {
        // 0x0028077C: sub.s       $f0, $f6, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f22.fl;
            goto L_00280788;
    }
    goto skip_6;
    // 0x0028077C: sub.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f22.fl;
    skip_6:
    // 0x00280780: j           L_002807D0
    // 0x00280784: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
        goto L_002807D0;
    // 0x00280784: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
L_00280788:
    // 0x00280788: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0028078C: nop

    // 0x00280790: bc1fl       L_00280798
    if (!c1cs) {
        // 0x00280794: mov.s       $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
            goto L_00280798;
    }
    goto skip_7;
    // 0x00280794: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    skip_7:
L_00280798:
    // 0x00280798: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0028079C: nop

    // 0x002807A0: bc1fl       L_002807A8
    if (!c1cs) {
        // 0x002807A4: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_002807A8;
    }
    goto skip_8;
    // 0x002807A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_8:
L_002807A8:
    // 0x002807A8: c.le.s      $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f0.fl <= ctx->f5.fl;
    // 0x002807AC: nop

    // 0x002807B0: bc1fl       L_002807B8
    if (!c1cs) {
        // 0x002807B4: mov.s       $f0, $f5
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    ctx->f0.fl = ctx->f5.fl;
            goto L_002807B8;
    }
    goto skip_9;
    // 0x002807B4: mov.s       $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    ctx->f0.fl = ctx->f5.fl;
    skip_9:
L_002807B8:
    // 0x002807B8: c.le.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x002807BC: nop

    // 0x002807C0: bc1fl       L_002807C8
    if (!c1cs) {
        // 0x002807C4: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_002807C8;
    }
    goto skip_10;
    // 0x002807C4: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    skip_10:
L_002807C8:
    // 0x002807C8: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x002807CC: mul.s       $f23, $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f23.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
L_002807D0:
    // 0x002807D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002807D4: lwc1        $f1, -0x644C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X644C);
    // 0x002807D8: c.lt.s      $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f1.fl < ctx->f23.fl;
    // 0x002807DC: nop

    // 0x002807E0: bc1t        L_00280800
    if (c1cs) {
        // 0x002807E4: mov.s       $f0, $f23
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    ctx->f0.fl = ctx->f23.fl;
            goto L_00280800;
    }
    // 0x002807E4: mov.s       $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    ctx->f0.fl = ctx->f23.fl;
    // 0x002807E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002807EC: c.lt.s      $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f23.fl < ctx->f0.fl;
    // 0x002807F0: nop

    // 0x002807F4: bc1tl       L_00280814
    if (c1cs) {
        // 0x002807F8: mov.s       $f23, $f0
        CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
            goto L_00280814;
    }
    goto skip_11;
    // 0x002807F8: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
    skip_11:
    // 0x002807FC: mov.s       $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    ctx->f0.fl = ctx->f23.fl;
L_00280800:
    // 0x00280800: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00280804: nop

    // 0x00280808: bc1tl       L_00280810
    if (c1cs) {
        // 0x0028080C: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00280810;
    }
    goto skip_12;
    // 0x0028080C: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_12:
L_00280810:
    // 0x00280810: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
L_00280814:
    // 0x00280814: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00280818:
    // 0x00280818: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x0028081C: addiu       $s5, $s5, -0x71DC
    ctx->r21 = ADD32(ctx->r21, -0X71DC);
    // 0x00280820: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280824: lwc1        $f20, -0x6448($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6448);
    // 0x00280828: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x0028082C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x00280830: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x00280834: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x00280838: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x0028083C: addiu       $s6, $sp, 0x60
    ctx->r22 = ADD32(ctx->r29, 0X60);
    // 0x00280840: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
L_00280844:
    // 0x00280844: mul.s       $f0, $f26, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = MUL_S(ctx->f26.fl, ctx->f25.fl);
    // 0x00280848: nop

    // 0x0028084C: mul.s       $f1, $f21, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f25.fl);
    // 0x00280850: add.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x00280854: lw          $t1, 0x128($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X128);
    // 0x00280858: beq         $t1, $zero, L_00280878
    if (ctx->r9 == 0) {
        // 0x0028085C: add.s       $f22, $f22, $f1
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f1.fl;
            goto L_00280878;
    }
    // 0x0028085C: add.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f1.fl;
    // 0x00280860: bne         $s0, $zero, L_0028087C
    if (ctx->r16 != 0) {
        // 0x00280864: addu        $v0, $sp, $s1
        ctx->r2 = ADD32(ctx->r29, ctx->r17);
            goto L_0028087C;
    }
    // 0x00280864: addu        $v0, $sp, $s1
    ctx->r2 = ADD32(ctx->r29, ctx->r17);
    // 0x00280868: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028086C: lwc1        $f1, -0x6444($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6444);
    // 0x00280870: j           L_0028088C
    // 0x00280874: nop

        goto L_0028088C;
    // 0x00280874: nop

L_00280878:
    // 0x00280878: addu        $v0, $sp, $s1
    ctx->r2 = ADD32(ctx->r29, ctx->r17);
L_0028087C:
    // 0x0028087C: lwc1        $f1, 0x20($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X20);
    // 0x00280880: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280884: lwc1        $f0, -0x6440($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6440);
    // 0x00280888: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
L_0028088C:
    // 0x0028088C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280890: lwc1        $f0, -0x643C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X643C);
    // 0x00280894: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00280898: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028089C: lwc1        $f0, -0x6438($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6438);
    // 0x002808A0: mul.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002808A4: neg.s       $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = -ctx->f3.fl;
    // 0x002808A8: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x002808AC: nop

    // 0x002808B0: bc1f        L_00280A54
    if (!c1cs) {
        // 0x002808B4: nop
    
            goto L_00280A54;
    }
    // 0x002808B4: nop

    // 0x002808B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002808BC: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x002808C0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002808C4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x002808C8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x002808CC: nop

    // 0x002808D0: bc1f        L_00280A54
    if (!c1cs) {
        // 0x002808D4: nop
    
            goto L_00280A54;
    }
    // 0x002808D4: nop

    // 0x002808D8: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x002808DC: nop

    // 0x002808E0: bc1f        L_00280A54
    if (!c1cs) {
        // 0x002808E4: nop
    
            goto L_00280A54;
    }
    // 0x002808E4: nop

    // 0x002808E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002808EC: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x002808F0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002808F4: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x002808F8: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x002808FC: nop

    // 0x00280900: bc1f        L_00280A54
    if (!c1cs) {
        // 0x00280904: nop
    
            goto L_00280A54;
    }
    // 0x00280904: nop

    // 0x00280908: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    // 0x0028090C: beq         $t2, $zero, L_00280974
    if (ctx->r10 == 0) {
        // 0x00280910: nop
    
            goto L_00280974;
    }
    // 0x00280910: nop

    // 0x00280914: bne         $s0, $zero, L_00280974
    if (ctx->r16 != 0) {
        // 0x00280918: lui         $t3, 0xFB00
        ctx->r11 = S32(0XFB00 << 16);
            goto L_00280974;
    }
    // 0x00280918: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x0028091C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00280920: lwc1        $f0, -0x6434($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6434);
    // 0x00280924: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x00280928: mul.s       $f0, $f23, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f23.fl, ctx->f0.fl);
    // 0x0028092C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00280930: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00280934: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00280938: nop

    // 0x0028093C: bc1t        L_00280954
    if (c1cs) {
        // 0x00280940: sw          $t3, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r11;
            goto L_00280954;
    }
    // 0x00280940: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x00280944: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00280948: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x0028094C: j           L_00280968
    // 0x00280950: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
        goto L_00280968;
    // 0x00280950: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
L_00280954:
    // 0x00280954: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00280958: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0028095C: mfc1        $v1, $f7
    ctx->r3 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00280960: or          $v1, $v1, $fp
    ctx->r3 = ctx->r3 | ctx->r30;
    // 0x00280964: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
L_00280968:
    // 0x00280968: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0028096C: j           L_002809F8
    // 0x00280970: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
        goto L_002809F8;
    // 0x00280970: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
L_00280974:
    // 0x00280974: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x00280978: addu        $v0, $sp, $s1
    ctx->r2 = ADD32(ctx->r29, ctx->r17);
    // 0x0028097C: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x00280980: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x00280984: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x00280988: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0028098C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x00280990: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x00280994: addu        $v0, $s6, $s3
    ctx->r2 = ADD32(ctx->r22, ctx->r19);
    // 0x00280998: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x0028099C: addu        $v0, $s6, $s4
    ctx->r2 = ADD32(ctx->r22, ctx->r20);
    // 0x002809A0: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x002809A4: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x002809A8: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x002809AC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x002809B0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002809B4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x002809B8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002809BC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x002809C0: nop

    // 0x002809C4: bc1t        L_002809DC
    if (c1cs) {
        // 0x002809C8: or          $v1, $a0, $v0
        ctx->r3 = ctx->r4 | ctx->r2;
            goto L_002809DC;
    }
    // 0x002809C8: or          $v1, $a0, $v0
    ctx->r3 = ctx->r4 | ctx->r2;
    // 0x002809CC: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002809D0: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002809D4: j           L_002809F0
    // 0x002809D8: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
        goto L_002809F0;
    // 0x002809D8: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
L_002809DC:
    // 0x002809DC: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x002809E0: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002809E4: mfc1        $v0, $f7
    ctx->r2 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x002809E8: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x002809EC: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
L_002809F0:
    // 0x002809F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002809F4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_002809F8:
    // 0x002809F8: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002809FC: sub.s       $f0, $f24, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f3.fl;
    // 0x00280A00: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00280A04: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00280A08: swc1        $f1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x00280A0C: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x00280A10: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00280A14: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00280A18: sub.s       $f0, $f22, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x00280A1C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00280A20: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00280A24: trunc.w.s   $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(7 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00280A28: mfc1        $a3, $f7
    ctx->r7 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x00280A2C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x00280A30: jal         0x0027B320
    // 0x00280A34: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_2;
    // 0x00280A34: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_2:
    // 0x00280A38: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00280A3C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x00280A40: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x00280A44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00280A48: slti        $v0, $s0, 0x7
    ctx->r2 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x00280A4C: bne         $v0, $zero, L_00280844
    if (ctx->r2 != 0) {
        // 0x00280A50: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_00280844;
    }
    // 0x00280A50: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_00280A54:
    // 0x00280A54: lw          $ra, 0xDC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XDC);
    // 0x00280A58: lw          $fp, 0xD8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD8);
    // 0x00280A5C: lw          $s7, 0xD4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XD4);
    // 0x00280A60: lw          $s6, 0xD0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD0);
    // 0x00280A64: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x00280A68: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x00280A6C: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x00280A70: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x00280A74: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x00280A78: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x00280A7C: ldc1        $f26, 0x110($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X110);
    // 0x00280A80: ldc1        $f25, 0x108($sp)
    CHECK_FR(ctx, 25);
    ctx->f25.u64 = LD(ctx->r29, 0X108);
    // 0x00280A84: ldc1        $f24, 0x100($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X100);
    // 0x00280A88: ldc1        $f23, 0xF8($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0XF8);
    // 0x00280A8C: ldc1        $f22, 0xF0($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XF0);
    // 0x00280A90: ldc1        $f21, 0xE8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE8);
    // 0x00280A94: ldc1        $f20, 0xE0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE0);
    // 0x00280A98: jr          $ra
    // 0x00280A9C: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x00280A9C: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_00267E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267E74: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00267E78: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00267E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267E80: beq         $a0, $v0, L_00267E94
    if (ctx->r4 == ctx->r2) {
        // 0x00267E84: nop
    
            goto L_00267E94;
    }
    // 0x00267E84: nop

    // 0x00267E88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00267E8C: bne         $a0, $v0, L_00267EA0
    if (ctx->r4 != ctx->r2) {
            // 0x00267E90: nop

    func_00267EA0(rdram, ctx);
    return;
    }
    // 0x00267E90: nop

L_00267E94:
    // 0x00267E94: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00267E98: jr          $ra
    // 0x00267E9C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    return;
    // 0x00267E9C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
;}
RECOMP_FUNC void func_00268304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268304: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00268308: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0026830C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00268310: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x00268314: beq         $v0, $zero, L_002683BC
    if (ctx->r2 == 0) {
        // 0x00268318: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002683BC;
    }
    // 0x00268318: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0026831C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00268320: addu        $at, $at, $v0
    gpr jr_addend_00268328 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00268324: lw          $v0, 0x7E98($at)
    ctx->r2 = ADD32(ctx->r1, 0X7E98);
    // 0x00268328: jr          $v0
    // 0x0026832C: nop

    switch (jr_addend_00268328 >> 2) {
        case 0: goto L_00268340; break;
        case 1: goto L_00268350; break;
        case 2: goto L_002683BC; break;
        case 3: goto L_002683BC; break;
        case 4: goto L_0026837C; break;
        case 5: goto L_002683BC; break;
        case 6: goto L_002683BC; break;
        case 7: goto L_0026838C; break;
        case 8: goto L_002683BC; break;
        case 9: goto L_002683BC; break;
        case 10: goto L_00268330; break;
        default: switch_error(__func__, 0x00268328, 0x800A7E98);
    }
    // 0x0026832C: nop

L_00268330:
    // 0x00268330: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00268334: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00268338: jr          $ra
    // 0x0026833C: nop

    return;
    // 0x0026833C: nop

L_00268340:
    // 0x00268340: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00268344: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x00268348: jr          $ra
    // 0x0026834C: nop

    return;
    // 0x0026834C: nop

L_00268350:
    // 0x00268350: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00268354: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x00268358: bne         $v0, $zero, L_00268370
    if (ctx->r2 != 0) {
        // 0x0026835C: nop
    
            goto L_00268370;
    }
    // 0x0026835C: nop

    // 0x00268360: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00268364: lwc1        $f0, 0x7EC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7EC4);
    // 0x00268368: jr          $ra
    // 0x0026836C: nop

    return;
    // 0x0026836C: nop

L_00268370:
    // 0x00268370: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x00268374: jr          $ra
    // 0x00268378: nop

    return;
    // 0x00268378: nop

L_0026837C:
    // 0x0026837C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00268380: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00268384: jr          $ra
    // 0x00268388: nop

    return;
    // 0x00268388: nop

L_0026838C:
    // 0x0026838C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00268390: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00268394: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00268398: beq         $v0, $zero, L_002683B0
    if (ctx->r2 == 0) {
        // 0x0026839C: nop
    
            goto L_002683B0;
    }
    // 0x0026839C: nop

    // 0x002683A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002683A4: lwc1        $f0, 0x7EC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7EC8);
    // 0x002683A8: jr          $ra
    // 0x002683AC: nop

    return;
    // 0x002683AC: nop

L_002683B0:
    // 0x002683B0: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x002683B4: jr          $ra
    // 0x002683B8: nop

    return;
    // 0x002683B8: nop

L_002683BC:
    // 0x002683BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002683C0: lwc1        $f0, 0x7ECC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7ECC);
    // 0x002683C4: jr          $ra
    // 0x002683C8: nop

    return;
    // 0x002683C8: nop

;}
RECOMP_FUNC void func_0020F144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020F144: lwc1        $f5, 0x0($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020F148: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0020F14C: mul.s       $f3, $f5, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x0020F150: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020F154: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x0020F158: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F15C: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020F160: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F164: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020F168: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0020F16C: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0020F170: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x0020F174: mul.s       $f2, $f6, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f3.fl);
    // 0x0020F178: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0020F17C: mul.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x0020F180: sub.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x0020F184: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x0020F188: swc1        $f5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x0020F18C: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020F190: mul.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020F194: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020F198: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020F19C: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x0020F1A0: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0020F1A4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020F1A8: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020F1AC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0020F1B0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0020F1B4: swc1        $f0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f0.u32l;
    // 0x0020F1B8: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x0020F1BC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x0020F1C0: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x0020F1C4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0020F1C8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x0020F1CC: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x0020F1D0: jr          $ra
    // 0x0020F1D4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x0020F1D4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_0044B314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004123AC:
    // 0x0044B314: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0044B318: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0044B31C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0044B320: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B324: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x0044B328: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0044B32C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0044B330: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x0044B334: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0044B338: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0044B33C: beq         $v0, $zero, L_0044B41C
    if (ctx->r2 == 0) {
        // 0x0044B340: sw          $s1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r17;
            goto L_0044B41C;
    }
    // 0x0044B340: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0044B344: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0044B348: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0044B34C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x0044B350: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0044B354: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x0044B358: lhu         $s2, 0x4($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X4);
    // 0x0044B35C: lhu         $s1, 0xA($v1)
    ctx->r17 = MEM_HU(ctx->r3, 0XA);
    // 0x0044B360: jal         0x0020185C
    // 0x0044B364: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x0044B364: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0044B368: bne         $v0, $zero, L_0044B378
    if (ctx->r2 != 0) {
        // 0x0044B36C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0044B378;
    }
    // 0x0044B36C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B370: j           L_004123AC
    // 0x0044B374: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    entry_004123AC(rdram, ctx);
    return;
    // 0x0044B374: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0044B378:
    // 0x0044B378: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044B37C: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x0044B380: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0044B384: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B388: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0044B38C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0044B390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044B394: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0044B398: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0044B39C: jal         0x0020367C
    // 0x0044B3A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0044B3A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x0044B3A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0044B3A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0044B3AC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0044B3B0: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x0044B3B4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0044B3B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0044B3BC: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x0044B3C0: blez        $a2, L_0044B3F0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x0044B3C4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_0044B3F0;
    }
    // 0x0044B3C4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_0044B3C8:
    // 0x0044B3C8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0044B3CC: bnel        $v0, $s2, L_0044B3E4
    if (ctx->r2 != ctx->r18) {
        // 0x0044B3D0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_0044B3E4;
    }
    goto skip_0;
    // 0x0044B3D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x0044B3D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0044B3D8: beql        $v0, $s1, L_0044B3E0
    if (ctx->r2 == ctx->r17) {
        // 0x0044B3DC: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0044B3E0;
    }
    goto skip_1;
    // 0x0044B3DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    skip_1:
L_0044B3E0:
    // 0x0044B3E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_0044B3E4:
    // 0x0044B3E4: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0044B3E8: bne         $v0, $zero, L_0044B3C8
    if (ctx->r2 != 0) {
        // 0x0044B3EC: addiu       $v1, $v1, 0x4C
        ctx->r3 = ADD32(ctx->r3, 0X4C);
            goto L_0044B3C8;
    }
    // 0x0044B3EC: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
L_0044B3F0:
    // 0x0044B3F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044B3F4: beq         $s0, $v0, L_0044B414
    if (ctx->r16 == ctx->r2) {
        // 0x0044B3F8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_0044B414;
    }
    // 0x0044B3F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0044B3FC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0044B400: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0044B404: sw          $s3, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r19;
    // 0x0044B408: sw          $s1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r17;
    // 0x0044B40C: sw          $s0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r16;
    // 0x0044B410: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
L_0044B414:
    // 0x0044B414: jal         0x002051F4
    // 0x0044B418: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x0044B418: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0044B41C:
    // 0x0044B41C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0044B420: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0044B424: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0044B428: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0044B42C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0044B430: jr          $ra
    // 0x0044B434: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0044B434: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002A51E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0029D190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D190: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0029D194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029D198: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029D19C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029D1A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0029D1A4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0029D1A8: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0029D1AC: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x0029D1B0: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x0029D1B4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x0029D1B8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0029D1BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0029D1C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029D1C4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0029D1C8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029D1CC: beq         $v0, $zero, L_0029D1EC
    if (ctx->r2 == 0) {
        // 0x0029D1D0: nop
    
            goto L_0029D1EC;
    }
    // 0x0029D1D0: nop

    // 0x0029D1D4: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D1D8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_0029D1DC:
    // 0x0029D1DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029D1E0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x0029D1E4: bne         $v0, $zero, L_0029D1DC
    if (ctx->r2 != 0) {
        // 0x0029D1E8: nop
    
            goto L_0029D1DC;
    }
    // 0x0029D1E8: nop

L_0029D1EC:
    // 0x0029D1EC: lbu         $a2, 0x9($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X9);
    // 0x0029D1F0: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0029D1F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029D1F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029D1FC: lw          $a1, -0x7680($at)
    ctx->r5 = MEM_W(ctx->r1, -0X7680);
    // 0x0029D200: beq         $a1, $s0, L_0029D2E0
    if (ctx->r5 == ctx->r16) {
        // 0x0029D204: nop
    
            goto L_0029D2E0;
    }
    // 0x0029D204: nop

    // 0x0029D208: bne         $a2, $zero, L_0029D270
    if (ctx->r6 != 0) {
        // 0x0029D20C: nop
    
            goto L_0029D270;
    }
    // 0x0029D20C: nop

    // 0x0029D210: lbu         $v1, 0x5($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X5);
    // 0x0029D214: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x0029D218: beq         $v1, $v0, L_0029D228
    if (ctx->r3 == ctx->r2) {
        // 0x0029D21C: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D228;
    }
    // 0x0029D21C: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D220: ori         $v1, $v1, 0x14
    ctx->r3 = ctx->r3 | 0X14;
    // 0x0029D224: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D228:
    // 0x0029D228: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x0029D22C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x0029D230: beq         $v1, $v0, L_0029D240
    if (ctx->r3 == ctx->r2) {
        // 0x0029D234: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D240;
    }
    // 0x0029D234: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D238: ori         $v1, $v1, 0x1C
    ctx->r3 = ctx->r3 | 0X1C;
    // 0x0029D23C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D240:
    // 0x0029D240: lbu         $v1, 0x7($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X7);
    // 0x0029D244: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x0029D248: beq         $v1, $v0, L_0029D258
    if (ctx->r3 == ctx->r2) {
        // 0x0029D24C: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D258;
    }
    // 0x0029D24C: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D250: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x0029D254: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D258:
    // 0x0029D258: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x0029D25C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x0029D260: beq         $v1, $v0, L_0029D2D0
    if (ctx->r3 == ctx->r2) {
        // 0x0029D264: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D2D0;
    }
    // 0x0029D264: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D268: j           L_0029D2CC
    // 0x0029D26C: ori         $v1, $v1, 0x18
    ctx->r3 = ctx->r3 | 0X18;
        goto L_0029D2CC;
    // 0x0029D26C: ori         $v1, $v1, 0x18
    ctx->r3 = ctx->r3 | 0X18;
L_0029D270:
    // 0x0029D270: lbu         $v1, 0x5($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X5);
    // 0x0029D274: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x0029D278: beq         $v1, $v0, L_0029D288
    if (ctx->r3 == ctx->r2) {
        // 0x0029D27C: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D288;
    }
    // 0x0029D27C: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D280: ori         $v1, $v1, 0x24
    ctx->r3 = ctx->r3 | 0X24;
    // 0x0029D284: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D288:
    // 0x0029D288: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x0029D28C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x0029D290: beq         $v1, $v0, L_0029D2A0
    if (ctx->r3 == ctx->r2) {
        // 0x0029D294: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D2A0;
    }
    // 0x0029D294: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D298: ori         $v1, $v1, 0x2C
    ctx->r3 = ctx->r3 | 0X2C;
    // 0x0029D29C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D2A0:
    // 0x0029D2A0: lbu         $v1, 0x7($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X7);
    // 0x0029D2A4: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x0029D2A8: beq         $v1, $v0, L_0029D2B8
    if (ctx->r3 == ctx->r2) {
        // 0x0029D2AC: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D2B8;
    }
    // 0x0029D2AC: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D2B0: ori         $v1, $v1, 0x30
    ctx->r3 = ctx->r3 | 0X30;
    // 0x0029D2B4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D2B8:
    // 0x0029D2B8: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x0029D2BC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x0029D2C0: beq         $v1, $v0, L_0029D2D0
    if (ctx->r3 == ctx->r2) {
        // 0x0029D2C4: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D2D0;
    }
    // 0x0029D2C4: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D2C8: ori         $v1, $v1, 0x28
    ctx->r3 = ctx->r3 | 0X28;
L_0029D2CC:
    // 0x0029D2CC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_0029D2D0:
    // 0x0029D2D0: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0029D2D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0029D2D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029D2DC: sw          $s0, -0x7680($at)
    MEM_W(-0X7680, ctx->r1) = ctx->r16;
L_0029D2E0:
    // 0x0029D2E0: jal         0x0029BF80
    // 0x0029D2E4: nop

    func_0029BF80(rdram, ctx);
        goto after_0;
    // 0x0029D2E4: nop

    after_0:
    // 0x0029D2E8: lui         $a2, 0xA460
    ctx->r6 = S32(0XA460 << 16);
    // 0x0029D2EC: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
    // 0x0029D2F0: lui         $a1, 0x1FFF
    ctx->r5 = S32(0X1FFF << 16);
    // 0x0029D2F4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x0029D2F8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0029D2FC: lui         $a0, 0xA460
    ctx->r4 = S32(0XA460 << 16);
    // 0x0029D300: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029D304: or          $v1, $v1, $s3
    ctx->r3 = ctx->r3 | ctx->r19;
    // 0x0029D308: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x0029D30C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x0029D310: beql        $s1, $zero, L_0029D32C
    if (ctx->r17 == 0) {
        // 0x0029D314: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_0029D32C;
    }
    goto skip_0;
    // 0x0029D314: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    skip_0:
    // 0x0029D318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029D31C: beq         $s1, $v0, L_0029D334
    if (ctx->r17 == ctx->r2) {
        // 0x0029D320: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0029D334;
    }
    // 0x0029D320: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0029D324: j           L_0029D348
    // 0x0029D328: nop

        goto L_0029D348;
    // 0x0029D328: nop

L_0029D32C:
    // 0x0029D32C: j           L_0029D33C
    // 0x0029D330: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
        goto L_0029D33C;
    // 0x0029D330: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
L_0029D334:
    // 0x0029D334: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x0029D338: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
L_0029D33C:
    // 0x0029D33C: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x0029D340: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0029D344: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0029D348:
    // 0x0029D348: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0029D34C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0029D350: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029D354: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029D358: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029D35C: jr          $ra
    // 0x0029D360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0029D360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00412B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412B28: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00412B2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412B30: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x00412B34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00412B38: lw          $a0, -0x6770($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6770);
    // 0x00412B3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00412B40: beq         $v0, $zero, L_00412B90
    if (ctx->r2 == 0) {
        // 0x00412B44: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_00412B90;
    }
    // 0x00412B44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00412B48: addiu       $a1, $a3, -0x8D
    ctx->r5 = ADD32(ctx->r7, -0X8D);
    // 0x00412B4C: sltiu       $v0, $a1, 0x6
    ctx->r2 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x00412B50: beq         $v0, $zero, L_00412B88
    if (ctx->r2 == 0) {
        // 0x00412B54: nop
    
            goto L_00412B88;
    }
    // 0x00412B54: nop

    // 0x00412B58: beq         $a0, $zero, L_00412B88
    if (ctx->r4 == 0) {
        // 0x00412B5C: addiu       $a0, $a0, 0x9F4
        ctx->r4 = ADD32(ctx->r4, 0X9F4);
            goto L_00412B88;
    }
    // 0x00412B5C: addiu       $a0, $a0, 0x9F4
    ctx->r4 = ADD32(ctx->r4, 0X9F4);
    // 0x00412B60: sra         $v0, $a1, 3
    ctx->r2 = S32(SIGNED(ctx->r5) >> 3);
    // 0x00412B64: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x00412B68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00412B6C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00412B70: lbu         $a2, 0x0($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X0);
    // 0x00412B74: sllv        $v1, $v1, $a1
    ctx->r3 = S32(ctx->r3 << (ctx->r5 & 31));
    // 0x00412B78: and         $v0, $a2, $v1
    ctx->r2 = ctx->r6 & ctx->r3;
    // 0x00412B7C: bne         $v0, $zero, L_00412B90
    if (ctx->r2 != 0) {
        // 0x00412B80: or          $v0, $a2, $v1
        ctx->r2 = ctx->r6 | ctx->r3;
            goto L_00412B90;
    }
    // 0x00412B80: or          $v0, $a2, $v1
    ctx->r2 = ctx->r6 | ctx->r3;
    // 0x00412B84: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_00412B88:
    // 0x00412B88: jal         0x00412438
    // 0x00412B8C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    func_00412438(rdram, ctx);
        goto after_0;
    // 0x00412B8C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_0:
L_00412B90:
    // 0x00412B90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00412B94: jr          $ra
    // 0x00412B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00412B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00256148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025614C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256150: jal         0x00255FF4
    // 0x00256154: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x00256154: nop

    after_0:
    // 0x00256158: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025615C: jr          $ra
    // 0x00256160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040765C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040765C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00407660: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407664: lwc1        $f0, 0x52C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X52C);
    // 0x00407668: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040766C: lwc1        $f1, 0x530($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X530);
    // 0x00407670: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407674: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x00407678: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040767C: addiu       $v0, $v0, -0x618
    ctx->r2 = ADD32(ctx->r2, -0X618);
    // 0x00407680: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x00407684: jr          $ra
    // 0x00407688: swc1        $f1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x00407688: swc1        $f1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0028F80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028F80C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0028F810: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0028F814: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0028F818: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0028F81C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0028F820: jr          $ra
    // 0x0028F824: nop

    return;
    // 0x0028F824: nop

;}
RECOMP_FUNC void func_0040B1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B1E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0040B1EC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0040B1F0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0040B1F4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x0040B1F8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0040B1FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040B200: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040B204: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040B208: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040B20C: lb          $v0, 0xC7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XC7);
    // 0x0040B210: blez        $v0, L_0040B274
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040B214: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_0040B274;
    }
    // 0x0040B214: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0040B218: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x0040B21C: lw          $s2, 0x1D0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X1D0);
    // 0x0040B220: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x0040B224: addiu       $s3, $s3, -0x490
    ctx->r19 = ADD32(ctx->r19, -0X490);
    // 0x0040B228: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040B22C: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_0040B230:
    // 0x0040B230: srav        $v0, $s2, $s0
    ctx->r2 = S32(SIGNED(ctx->r18) >> (ctx->r16 & 31));
    // 0x0040B234: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0040B238: beql        $v0, $zero, L_0040B258
    if (ctx->r2 == 0) {
        // 0x0040B23C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0040B258;
    }
    goto skip_0;
    // 0x0040B23C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x0040B240: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0040B244: lui         $a1, 0x43
    ctx->r5 = S32(0X43 << 16);
    // 0x0040B248: addiu       $a1, $a1, 0x1EE4
    ctx->r5 = ADD32(ctx->r5, 0X1EE4);
    // 0x0040B24C: jal         0x00236314
    // 0x0040B250: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_00236314(rdram, ctx);
        goto after_0;
    // 0x0040B250: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x0040B254: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_0040B258:
    // 0x0040B258: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x0040B25C: bne         $v0, $zero, L_0040B230
    if (ctx->r2 != 0) {
        // 0x0040B260: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_0040B230;
    }
    // 0x0040B260: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x0040B264: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x0040B268: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0040B26C: jal         0x00243414
    // 0x0040B270: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x0040B270: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_0040B274:
    // 0x0040B274: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0040B278: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040B27C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040B280: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040B284: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040B288: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040B28C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040B290: jr          $ra
    // 0x0040B294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040B294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_002656BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002656BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002656C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002656C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002656C8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002656CC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x002656D0: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x002656D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002656D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002656DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002656E0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x002656E4: jal         0x00220260
    // 0x002656E8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x002656E8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x002656EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002656F0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x002656F4: jal         0x0026E110
    // 0x002656F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0026E110(rdram, ctx);
        goto after_1;
    // 0x002656F8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002656FC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00265700: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x00265704: jal         0x002365F8
    // 0x00265708: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002365F8(rdram, ctx);
        goto after_2;
    // 0x00265708: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0026570C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00265710: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00265714: beq         $v1, $v0, L_0026575C
    if (ctx->r3 == ctx->r2) {
        // 0x00265718: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0026575C;
    }
    // 0x00265718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0026571C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00265720: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00265724: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00265728: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026572C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00265730: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x00265734: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x00265738: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0026573C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x00265740: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x00265744: jal         0x00237EE4
    // 0x00265748: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_00237EE4(rdram, ctx);
        goto after_3;
    // 0x00265748: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_3:
    // 0x0026574C: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x00265750: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00265754: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00265758: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_0026575C:
    // 0x0026575C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00265760: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00265764: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00265768: jr          $ra
    // 0x0026576C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0026576C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00256244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256248: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025624C: jal         0x00251698
    // 0x00256250: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_00251698(rdram, ctx);
        goto after_0;
    // 0x00256250: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x00256254: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256258: jr          $ra
    // 0x0025625C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025625C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029DFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DFD0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x0029DFD4: jr          $ra
    // 0x0029DFD8: nop

    return;
    // 0x0029DFD8: nop

;}
RECOMP_FUNC void func_0045DEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_004089E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004089E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x004089E4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x004089E8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x004089EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x004089F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x004089F4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x004089F8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004089FC: addiu       $a2, $s2, 0x18
    ctx->r6 = ADD32(ctx->r18, 0X18);
    // 0x00408A00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00408A04: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00408A08: lw          $a1, 0x14($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X14);
    // 0x00408A0C: jal         0x0021EBE4
    // 0x00408A10: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    func_0021EBE4(rdram, ctx);
        goto after_0;
    // 0x00408A10: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    after_0:
    // 0x00408A14: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x00408A18: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00408A1C: sllv        $v0, $s0, $v0
    ctx->r2 = S32(ctx->r16 << (ctx->r2 & 31));
    // 0x00408A20: sw          $v0, 0x14C($s3)
    MEM_W(0X14C, ctx->r19) = ctx->r2;
    // 0x00408A24: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x00408A28: beq         $v0, $zero, L_00408A3C
    if (ctx->r2 == 0) {
        // 0x00408A2C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00408A3C;
    }
    // 0x00408A2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00408A30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00408A34: jal         0x0021DC84
    // 0x00408A38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0021DC84(rdram, ctx);
        goto after_1;
    // 0x00408A38: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
L_00408A3C:
    // 0x00408A3C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00408A40: beq         $v0, $zero, L_00408B04
    if (ctx->r2 == 0) {
        // 0x00408A44: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00408B04;
    }
    // 0x00408A44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00408A48: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00408A4C: lw          $v1, 0x280($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X280);
    // 0x00408A50: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00408A54: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x00408A58: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00408A5C: addiu       $v0, $v0, 0x208
    ctx->r2 = ADD32(ctx->r2, 0X208);
    // 0x00408A60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00408A64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00408A68: addiu       $v0, $v0, 0x570
    ctx->r2 = ADD32(ctx->r2, 0X570);
    // 0x00408A6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00408A70: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00408A74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00408A78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00408A7C: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x00408A80: jal         0x00203CA0
    // 0x00408A84: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    func_00203CA0(rdram, ctx);
        goto after_2;
    // 0x00408A84: or          $a1, $v1, $a1
    ctx->r5 = ctx->r3 | ctx->r5;
    after_2:
    // 0x00408A88: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00408A8C: beq         $s1, $zero, L_00408B04
    if (ctx->r17 == 0) {
        // 0x00408A90: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00408B04;
    }
    // 0x00408A90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00408A94: jal         0x0020565C
    // 0x00408A98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0020565C(rdram, ctx);
        goto after_3;
    // 0x00408A98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00408A9C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00408AA0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00408AA4: bne         $v0, $s0, L_00408ACC
    if (ctx->r2 != ctx->r16) {
        // 0x00408AA8: addiu       $s0, $v1, 0x8
        ctx->r16 = ADD32(ctx->r3, 0X8);
            goto L_00408ACC;
    }
    // 0x00408AA8: addiu       $s0, $v1, 0x8
    ctx->r16 = ADD32(ctx->r3, 0X8);
    // 0x00408AAC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x00408AB0: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x00408AB4: addu        $s0, $v1, $s0
    ctx->r16 = ADD32(ctx->r3, ctx->r16);
    // 0x00408AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408ABC: jal         0x00214F68
    // 0x00408AC0: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    entry_00214F68(rdram, ctx);
        goto after_4;
    // 0x00408AC0: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    after_4:
    // 0x00408AC4: j           L_00408AD0
    // 0x00408AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_00408AD0;
    // 0x00408AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00408ACC:
    // 0x00408ACC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_00408AD0:
    // 0x00408AD0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00408AD4: lw          $v1, -0x49C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X49C);
    // 0x00408AD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00408ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00408AE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00408AE4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00408AE8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00408AEC: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00408AF0: jal         0x0020B6A0
    // 0x00408AF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0020B6A0(rdram, ctx);
        goto after_5;
    // 0x00408AF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x00408AF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00408AFC: jal         0x002051F4
    // 0x00408B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_6;
    // 0x00408B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
L_00408B04:
    // 0x00408B04: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00408B08: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00408B0C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00408B10: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00408B14: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00408B18: jr          $ra
    // 0x00408B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00408B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025A7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A7E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A7E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A7EC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A7F0: lhu         $a3, 0x86($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X86);
    // 0x0025A7F4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A7F8: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    // 0x0025A7FC: jal         0x00245A98
    // 0x0025A800: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A800: nop

    after_0:
    // 0x0025A804: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A808: jr          $ra
    // 0x0025A80C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A80C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021EA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021EA3C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x0021EA40: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0021EA44: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0021EA48: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0021EA4C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0021EA50: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x0021EA54: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0021EA58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0021EA5C: sw          $ra, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r31;
    // 0x0021EA60: jal         0x0026D5DC
    // 0x0021EA64: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    func_0026D5DC(rdram, ctx);
        goto after_0;
    // 0x0021EA64: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    after_0:
    // 0x0021EA68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021EA6C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x0021EA70: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x0021EA74: beq         $v1, $v0, L_0021EABC
    if (ctx->r3 == ctx->r2) {
        // 0x0021EA78: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_0021EABC;
    }
    // 0x0021EA78: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021EA7C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0021EA80:
    // 0x0021EA80: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0021EA84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0021EA88: jal         0x00219F74
    // 0x0021EA8C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_00219F74(rdram, ctx);
        goto after_1;
    // 0x0021EA8C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0021EA90: beql        $v0, $s1, L_0021EAAC
    if (ctx->r2 == ctx->r17) {
        // 0x0021EA94: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0021EAAC;
    }
    goto skip_0;
    // 0x0021EA94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x0021EA98: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x0021EA9C: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x0021EAA0: jal         0x0026D5E4
    // 0x0021EAA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D5E4(rdram, ctx);
        goto after_2;
    // 0x0021EAA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x0021EAA8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_0021EAAC:
    // 0x0021EAAC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x0021EAB0: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x0021EAB4: bne         $v0, $s1, L_0021EA80
    if (ctx->r2 != ctx->r17) {
        // 0x0021EAB8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0021EA80;
    }
    // 0x0021EAB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0021EABC:
    // 0x0021EABC: jal         0x0026D628
    // 0x0021EAC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D628(rdram, ctx);
        goto after_3;
    // 0x0021EAC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x0021EAC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0021EAC8: lw          $ra, 0x88($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X88);
    // 0x0021EACC: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x0021EAD0: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0021EAD4: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0021EAD8: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0021EADC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0021EAE0: jr          $ra
    // 0x0021EAE4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x0021EAE4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00267DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267DE4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00267DE8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00267DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267DF0: beq         $a0, $v0, L_00267E04
    if (ctx->r4 == ctx->r2) {
        // 0x00267DF4: nop
    
            goto L_00267E04;
    }
    // 0x00267DF4: nop

    // 0x00267DF8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00267DFC: bne         $a0, $v0, L_00267E10
    if (ctx->r4 != ctx->r2) {
            // 0x00267E00: nop

    func_00267E10(rdram, ctx);
    return;
    }
    // 0x00267E00: nop

L_00267E04:
    // 0x00267E04: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00267E08: jr          $ra
    // 0x00267E0C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    return;
    // 0x00267E0C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
;}
RECOMP_FUNC void func_0021FC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021FC4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0021FC50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021FC54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021FC58: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021FC5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0021FC60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021FC64: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0021FC68: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x0021FC6C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x0021FC70: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x0021FC74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0021FC78: bne         $a1, $v0, L_0021FCEC
    if (ctx->r5 != ctx->r2) {
        // 0x0021FC7C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0021FCEC;
    }
    // 0x0021FC7C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0021FC80: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0021FC84: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0021FC88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0021FC8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0021FC90: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x0021FC94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FC98: lwc1        $f1, 0x5D2C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D2C);
    // 0x0021FC9C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FCA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FCA4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FCA8: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x0021FCAC: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x0021FCB0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FCB4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FCB8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FCBC: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x0021FCC0: lh          $v0, 0x10($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X10);
    // 0x0021FCC4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FCC8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FCCC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FCD0: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x0021FCD4: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x0021FCD8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021FCDC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021FCE0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0021FCE4: j           L_0021FD1C
    // 0x0021FCE8: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_0021FD1C;
    // 0x0021FCE8: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_0021FCEC:
    // 0x0021FCEC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0021FCF0: jal         0x002017D4
    // 0x0021FCF4: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0021FCF4: nop

    after_0:
    // 0x0021FCF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021FCFC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x0021FD00: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x0021FD04: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x0021FD08: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x0021FD0C: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x0021FD10: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x0021FD14: jal         0x0020DAA4
    // 0x0021FD18: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_0020DAA4(rdram, ctx);
        goto after_1;
    // 0x0021FD18: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_1:
L_0021FD1C:
    // 0x0021FD1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021FD20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0021FD24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0021FD28: jr          $ra
    // 0x0021FD2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0021FD2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_004402C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004402C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004402CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x004402D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x004402D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004402D8: lwc1        $f0, 0x508($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X508);
    // 0x004402DC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004402E0: addiu       $v0, $v0, -0x62E
    ctx->r2 = ADD32(ctx->r2, -0X62E);
    // 0x004402E4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x004402E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x004402EC: swc1        $f0, 0x1FC($s0)
    MEM_W(0X1FC, ctx->r16) = ctx->f0.u32l;
    // 0x004402F0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x004402F4: sw          $zero, 0x1A($v0)
    MEM_W(0X1A, ctx->r2) = 0;
    // 0x004402F8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x004402FC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00440300: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00440304: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00440308: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0044030C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00440310: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00440314: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x00440318: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0044031C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x00440320: jal         0x00275544
    // 0x00440324: addiu       $a0, $zero, 0x2779
    ctx->r4 = ADD32(0, 0X2779);
    func_00275544(rdram, ctx);
        goto after_0;
    // 0x00440324: addiu       $a0, $zero, 0x2779
    ctx->r4 = ADD32(0, 0X2779);
    after_0:
    // 0x00440328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0044032C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00440330: jal         0x00246860
    // 0x00440334: addiu       $a2, $zero, 0x3B21
    ctx->r6 = ADD32(0, 0X3B21);
    func_00246860(rdram, ctx);
        goto after_1;
    // 0x00440334: addiu       $a2, $zero, 0x3B21
    ctx->r6 = ADD32(0, 0X3B21);
    after_1:
    // 0x00440338: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x0044033C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00440340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00440344: jr          $ra
    // 0x00440348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00440348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00255714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00255718: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025571C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00255720: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255724: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00255728: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0025572C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00255730: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x00255734: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00255738: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0025573C: jal         0x002117DC
    // 0x00255740: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x00255740: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    after_0:
    // 0x00255744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00255748: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025574C: addiu       $a2, $a2, -0x2190
    ctx->r6 = ADD32(ctx->r6, -0X2190);
    // 0x00255750: jal         0x0024EF70
    // 0x00255754: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024EF70(rdram, ctx);
        goto after_1;
    // 0x00255754: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00255758: lw          $v0, 0xA18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA18);
    // 0x0025575C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00255760: bne         $v0, $zero, L_00255778
    if (ctx->r2 != 0) {
        // 0x00255764: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00255778;
    }
    // 0x00255764: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00255768: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025576C: addiu       $a2, $a2, -0x2244
    ctx->r6 = ADD32(ctx->r6, -0X2244);
    // 0x00255770: jal         0x0024F174
    // 0x00255774: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0024F174(rdram, ctx);
        goto after_2;
    // 0x00255774: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_00255778:
    // 0x00255778: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0025577C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x00255780: nop

    // 0x00255784: bc1f        L_002557AC
    if (!c1cs) {
        // 0x00255788: nop
    
            goto L_002557AC;
    }
    // 0x00255788: nop

    // 0x0025578C: jal         0x002685F0
    // 0x00255790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002685F0(rdram, ctx);
        goto after_3;
    // 0x00255790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00255794: beq         $v0, $zero, L_002557A8
    if (ctx->r2 == 0) {
        // 0x00255798: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002557A8;
    }
    // 0x00255798: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025579C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002557A0: jal         0x0024E5F0
    // 0x002557A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_4;
    // 0x002557A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
L_002557A8:
    // 0x002557A8: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
L_002557AC:
    // 0x002557AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x002557B0: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x002557B4: nop

    // 0x002557B8: bc1f        L_00255828
    if (!c1cs) {
        // 0x002557BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00255828;
    }
    // 0x002557BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002557C0: jal         0x00267648
    // 0x002557C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00267648(rdram, ctx);
        goto after_5;
    // 0x002557C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x002557C8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x002557CC: nop

    // 0x002557D0: bc1f        L_00255804
    if (!c1cs) {
        // 0x002557D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00255804;
    }
    // 0x002557D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002557D8: jal         0x00267648
    // 0x002557DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00267648(rdram, ctx);
        goto after_6;
    // 0x002557DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x002557E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002557E4: lwc1        $f1, 0x7180($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7180);
    // 0x002557E8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x002557EC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002557F0: nop

    // 0x002557F4: bc1t        L_00255824
    if (c1cs) {
        // 0x002557F8: addiu       $v0, $zero, 0x7F8
        ctx->r2 = ADD32(0, 0X7F8);
            goto L_00255824;
    }
    // 0x002557F8: addiu       $v0, $zero, 0x7F8
    ctx->r2 = ADD32(0, 0X7F8);
    // 0x002557FC: j           L_00255828
    // 0x00255800: nop

        goto L_00255828;
    // 0x00255800: nop

L_00255804:
    // 0x00255804: jal         0x00267648
    // 0x00255808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00267648(rdram, ctx);
        goto after_7;
    // 0x00255808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x0025580C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255810: lwc1        $f1, 0x7184($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7184);
    // 0x00255814: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00255818: nop

    // 0x0025581C: bc1f        L_00255828
    if (!c1cs) {
        // 0x00255820: addiu       $v0, $zero, 0x7F8
        ctx->r2 = ADD32(0, 0X7F8);
            goto L_00255828;
    }
    // 0x00255820: addiu       $v0, $zero, 0x7F8
    ctx->r2 = ADD32(0, 0X7F8);
L_00255824:
    // 0x00255824: sw          $v0, 0xC04($s1)
    MEM_W(0XC04, ctx->r17) = ctx->r2;
L_00255828:
    // 0x00255828: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025582C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00255830: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255834: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00255838: jr          $ra
    // 0x0025583C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0025583C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00271570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271570: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00271574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00271578: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0027157C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00271580: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00271584: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00271588: jal         0x00274144
    // 0x0027158C: addiu       $a0, $s0, 0x1DB8
    ctx->r4 = ADD32(ctx->r16, 0X1DB8);
    func_00274144(rdram, ctx);
        goto after_0;
    // 0x0027158C: addiu       $a0, $s0, 0x1DB8
    ctx->r4 = ADD32(ctx->r16, 0X1DB8);
    after_0:
    // 0x00271590: addiu       $a0, $s0, 0x138
    ctx->r4 = ADD32(ctx->r16, 0X138);
    // 0x00271594: jal         0x002766C8
    // 0x00271598: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002766C8(rdram, ctx);
        goto after_1;
    // 0x00271598: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0027159C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002715A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002715A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002715A8: jr          $ra
    // 0x002715AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002715AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002A1B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A1B24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A1B28: lw          $v0, -0x3D00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D00);
    // 0x002A1B2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002A1B30: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x002A1B34: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002A1B38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x002A1B3C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002A1B40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A1B44: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x002A1B48: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x002A1B4C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x002A1B50: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002A1B54: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x002A1B58: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x002A1B5C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x002A1B60: bne         $v0, $zero, L_002A1B6C
    if (ctx->r2 != 0) {
        // 0x002A1B64: sw          $s3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r19;
            goto L_002A1B6C;
    }
    // 0x002A1B64: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x002A1B68: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_002A1B6C:
    // 0x002A1B6C: beq         $s0, $zero, L_002A1BA0
    if (ctx->r16 == 0) {
        // 0x002A1B70: sltiu       $v0, $s0, 0x4
        ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
            goto L_002A1BA0;
    }
    // 0x002A1B70: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x002A1B74: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
L_002A1B78:
    // 0x002A1B78: beq         $v0, $zero, L_002A1B9C
    if (ctx->r2 == 0) {
        // 0x002A1B7C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1B9C;
    }
    // 0x002A1B7C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1B80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002A1B84: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x002A1B88: jal         0x002A19C8
    // 0x002A1B8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_002A19C8(rdram, ctx);
        goto after_0;
    // 0x002A1B8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x002A1B90: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1B94: bne         $s0, $zero, L_002A1B78
    if (ctx->r16 != 0) {
        // 0x002A1B98: andi        $v0, $s2, 0x3
        ctx->r2 = ctx->r18 & 0X3;
            goto L_002A1B78;
    }
    // 0x002A1B98: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
L_002A1B9C:
    // 0x002A1B9C: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
L_002A1BA0:
    // 0x002A1BA0: bne         $v0, $zero, L_002A1C64
    if (ctx->r2 != 0) {
        // 0x002A1BA4: lui         $v0, 0x8013
        ctx->r2 = S32(0X8013 << 16);
            goto L_002A1C64;
    }
    // 0x002A1BA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x002A1BA8: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x002A1BAC: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x002A1BB0: addiu       $s5, $v0, -0x7F10
    ctx->r21 = ADD32(ctx->r2, -0X7F10);
    // 0x002A1BB4: addiu       $s3, $s1, 0x3
    ctx->r19 = ADD32(ctx->r17, 0X3);
    // 0x002A1BB8: sltiu       $v0, $s0, 0x10
    ctx->r2 = ctx->r16 < 0X10 ? 1 : 0;
L_002A1BBC:
    // 0x002A1BBC: bne         $v0, $zero, L_002A1C1C
    if (ctx->r2 != 0) {
        // 0x002A1BC0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1C1C;
    }
    // 0x002A1BC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002A1BC4: andi        $v0, $s1, 0xF
    ctx->r2 = ctx->r17 & 0XF;
    // 0x002A1BC8: bne         $v0, $zero, L_002A1C1C
    if (ctx->r2 != 0) {
        // 0x002A1BCC: nop
    
            goto L_002A1C1C;
    }
    // 0x002A1BCC: nop

    // 0x002A1BD0: beq         $s4, $s6, L_002A1C18
    if (ctx->r20 == ctx->r22) {
        // 0x002A1BD4: addiu       $a0, $s7, -0x7EF0
        ctx->r4 = ADD32(ctx->r23, -0X7EF0);
            goto L_002A1C18;
    }
    // 0x002A1BD4: addiu       $a0, $s7, -0x7EF0
    ctx->r4 = ADD32(ctx->r23, -0X7EF0);
    // 0x002A1BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002A1BDC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x002A1BE0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x002A1BE4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002A1BE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x002A1BEC: jal         0x002A2FB0
    // 0x002A1BF0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_002A2FB0(rdram, ctx);
        goto after_1;
    // 0x002A1BF0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_1:
    // 0x002A1BF4: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x002A1BF8: beq         $s4, $s6, L_002A1C5C
    if (ctx->r20 == ctx->r22) {
        // 0x002A1BFC: sltiu       $v0, $s0, 0x4
        ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
            goto L_002A1C5C;
    }
    // 0x002A1BFC: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x002A1C00: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002A1C04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002A1C08: jal         0x0029B6F0
    // 0x002A1C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002A1C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002A1C10: j           L_002A1C58
    // 0x002A1C14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_002A1C58;
    // 0x002A1C14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_002A1C18:
    // 0x002A1C18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002A1C1C:
    // 0x002A1C1C: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x002A1C20: lbu         $v0, -0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X2);
    // 0x002A1C24: lbu         $v1, -0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, -0X1);
    // 0x002A1C28: lbu         $a2, 0x0($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X0);
    // 0x002A1C2C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x002A1C30: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x002A1C34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002A1C38: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x002A1C3C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x002A1C40: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x002A1C44: jal         0x002A1350
    // 0x002A1C48: or          $a1, $a1, $a2
    ctx->r5 = ctx->r5 | ctx->r6;
    func_002A1350(rdram, ctx);
        goto after_3;
    // 0x002A1C48: or          $a1, $a1, $a2
    ctx->r5 = ctx->r5 | ctx->r6;
    after_3:
    // 0x002A1C4C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x002A1C50: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x002A1C54: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
L_002A1C58:
    // 0x002A1C58: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
L_002A1C5C:
    // 0x002A1C5C: beq         $v0, $zero, L_002A1BBC
    if (ctx->r2 == 0) {
        // 0x002A1C60: sltiu       $v0, $s0, 0x10
        ctx->r2 = ctx->r16 < 0X10 ? 1 : 0;
            goto L_002A1BBC;
    }
    // 0x002A1C60: sltiu       $v0, $s0, 0x10
    ctx->r2 = ctx->r16 < 0X10 ? 1 : 0;
L_002A1C64:
    // 0x002A1C64: beq         $s0, $zero, L_002A1C88
    if (ctx->r16 == 0) {
        // 0x002A1C68: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1C88;
    }
    // 0x002A1C68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002A1C6C:
    // 0x002A1C6C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x002A1C70: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x002A1C74: jal         0x002A19C8
    // 0x002A1C78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_002A19C8(rdram, ctx);
        goto after_4;
    // 0x002A1C78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_4:
    // 0x002A1C7C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x002A1C80: bne         $s0, $zero, L_002A1C6C
    if (ctx->r16 != 0) {
        // 0x002A1C84: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002A1C6C;
    }
    // 0x002A1C84: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002A1C88:
    // 0x002A1C88: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x002A1C8C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x002A1C90: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x002A1C94: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x002A1C98: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x002A1C9C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x002A1CA0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x002A1CA4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x002A1CA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x002A1CAC: jr          $ra
    // 0x002A1CB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002A1CB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00251A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00251A2C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x00251A30: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x00251A34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00251A38: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x00251A3C: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x00251A40: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x00251A44: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x00251A48: sdc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X88, ctx->r29);
    // 0x00251A4C: sdc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X80, ctx->r29);
    // 0x00251A50: lwc1        $f0, 0xBDC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XBDC);
    // 0x00251A54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251A58: lwc1        $f12, 0x702C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X702C);
    // 0x00251A5C: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00251A60: lw          $s0, 0xBB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XBB0);
    // 0x00251A64: jal         0x002974C0
    // 0x00251A68: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    func_002974C0(rdram, ctx);
        goto after_0;
    // 0x00251A68: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00251A6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251A70: lwc1        $f1, 0x7030($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7030);
    // 0x00251A74: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00251A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251A7C: lwc1        $f1, 0x7034($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7034);
    // 0x00251A80: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251A84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251A88: lwc1        $f1, 0x7038($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7038);
    // 0x00251A8C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00251A90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251A94: lwc1        $f1, 0x703C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X703C);
    // 0x00251A98: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251A9C: lwc1        $f2, 0xA54($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XA54);
    // 0x00251AA0: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00251AA4: lwc1        $f1, 0xBDC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XBDC);
    // 0x00251AA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00251AAC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00251AB0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00251AB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251AB8: lwc1        $f21, 0x7040($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7040);
    // 0x00251ABC: mul.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f21.fl);
    // 0x00251AC0: swc1        $f1, 0xBDC($s1)
    MEM_W(0XBDC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00251AC4: lwc1        $f20, 0x50($s2)
    ctx->f20.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00251AC8: add.s       $f2, $f20, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x00251ACC: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x00251AD0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x00251AD4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x00251AD8: jal         0x002117DC
    // 0x00251ADC: addiu       $a0, $s2, 0x50
    ctx->r4 = ADD32(ctx->r18, 0X50);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x00251ADC: addiu       $a0, $s2, 0x50
    ctx->r4 = ADD32(ctx->r18, 0X50);
    after_1:
    // 0x00251AE0: lwc1        $f1, 0xA54($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA54);
    // 0x00251AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251AE8: lwc1        $f0, 0x7044($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7044);
    // 0x00251AEC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00251AF0: lwc1        $f0, 0x50($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X50);
    // 0x00251AF4: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00251AF8: add.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f1.fl;
    // 0x00251AFC: mul.s       $f20, $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f21.fl);
    // 0x00251B00: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x00251B04: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x00251B08: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00251B0C: jal         0x002117DC
    // 0x00251B10: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_2;
    // 0x00251B10: addiu       $a0, $s1, 0xAD0
    ctx->r4 = ADD32(ctx->r17, 0XAD0);
    after_2:
    // 0x00251B14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00251B18: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00251B1C: addiu       $a2, $a2, -0x2160
    ctx->r6 = ADD32(ctx->r6, -0X2160);
    // 0x00251B20: jal         0x0024EF70
    // 0x00251B24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0024EF70(rdram, ctx);
        goto after_3;
    // 0x00251B24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00251B28: lw          $v0, 0xA70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA70);
    // 0x00251B2C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x00251B30: beq         $v0, $zero, L_00251B64
    if (ctx->r2 == 0) {
        // 0x00251B34: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00251B64;
    }
    // 0x00251B34: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00251B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00251B3C: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x00251B40: jal         0x00243414
    // 0x00251B44: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x00251B44: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    after_4:
    // 0x00251B48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00251B4C: lwc1        $f0, -0x221C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X221C);
    // 0x00251B50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251B54: lwc1        $f1, 0x7048($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7048);
    // 0x00251B58: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00251B5C: swc1        $f1, 0xAAC($s1)
    MEM_W(0XAAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00251B60: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
L_00251B64:
    // 0x00251B64: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x00251B68: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x00251B6C: lwc1        $f2, 0xBE0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XBE0);
    // 0x00251B70: c.lt.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl < ctx->f3.fl;
    // 0x00251B74: nop

    // 0x00251B78: bc1tl       L_00251B80
    if (c1cs) {
        // 0x00251B7C: neg.s       $f1, $f1
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
            goto L_00251B80;
    }
    goto skip_0;
    // 0x00251B7C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    skip_0:
L_00251B80:
    // 0x00251B80: lwc1        $f0, 0xA7C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x00251B84: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00251B88: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x00251B8C: nop

    // 0x00251B90: bc1f        L_00251BB4
    if (!c1cs) {
        // 0x00251B94: nop
    
            goto L_00251BB4;
    }
    // 0x00251B94: nop

    // 0x00251B98: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00251B9C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00251BA0: nop

    // 0x00251BA4: bc1f        L_00251BE4
    if (!c1cs) {
        // 0x00251BA8: nop
    
            goto L_00251BE4;
    }
    // 0x00251BA8: nop

    // 0x00251BAC: j           L_00251BC4
    // 0x00251BB0: nop

        goto L_00251BC4;
    // 0x00251BB0: nop

L_00251BB4:
    // 0x00251BB4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00251BB8: nop

    // 0x00251BBC: bc1f        L_00251BE4
    if (!c1cs) {
        // 0x00251BC0: nop
    
            goto L_00251BE4;
    }
    // 0x00251BC0: nop

L_00251BC4:
    // 0x00251BC4: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x00251BC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251BCC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00251BD0: nop

    // 0x00251BD4: bc1tl       L_00251C04
    if (c1cs) {
        // 0x00251BD8: sub.s       $f0, $f2, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
            goto L_00251C04;
    }
    goto skip_1;
    // 0x00251BD8: sub.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
    skip_1:
    // 0x00251BDC: j           L_00251C04
    // 0x00251BE0: add.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f1.fl;
        goto L_00251C04;
    // 0x00251BE0: add.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f1.fl;
L_00251BE4:
    // 0x00251BE4: lwc1        $f0, 0xA7C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA7C);
    // 0x00251BE8: add.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x00251BEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251BF0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00251BF4: nop

    // 0x00251BF8: bc1fl       L_00251C04
    if (!c1cs) {
        // 0x00251BFC: add.s       $f0, $f2, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f1.fl;
            goto L_00251C04;
    }
    goto skip_2;
    // 0x00251BFC: add.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f1.fl;
    skip_2:
    // 0x00251C00: sub.s       $f0, $f2, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f1.fl;
L_00251C04:
    // 0x00251C04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00251C08: lwc1        $f1, -0x1CBC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X1CBC);
    // 0x00251C0C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00251C10: nop

    // 0x00251C14: bc1f        L_00251CEC
    if (!c1cs) {
        // 0x00251C18: swc1        $f0, 0xBE0($s1)
        MEM_W(0XBE0, ctx->r17) = ctx->f0.u32l;
            goto L_00251CEC;
    }
    // 0x00251C18: swc1        $f0, 0xBE0($s1)
    MEM_W(0XBE0, ctx->r17) = ctx->f0.u32l;
    // 0x00251C1C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00251C20: swc1        $f0, 0xBE0($s1)
    MEM_W(0XBE0, ctx->r17) = ctx->f0.u32l;
    // 0x00251C24: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x00251C28: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x00251C2C: beq         $v1, $v0, L_00251C54
    if (ctx->r3 == ctx->r2) {
        // 0x00251C30: nop
    
            goto L_00251C54;
    }
    // 0x00251C30: nop

    // 0x00251C34: lwc1        $f0, 0xA78($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x00251C38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251C3C: lwc1        $f2, 0x704C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X704C);
    // 0x00251C40: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x00251C44: lwc1        $f1, 0xA7C($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA7C);
    // 0x00251C48: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00251C4C: swc1        $f0, 0xA78($s1)
    MEM_W(0XA78, ctx->r17) = ctx->f0.u32l;
    // 0x00251C50: swc1        $f1, 0xA7C($s1)
    MEM_W(0XA7C, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00251C54:
    // 0x00251C54: lwc1        $f2, 0xA78($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x00251C58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251C5C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00251C60: nop

    // 0x00251C64: bc1f        L_00251C84
    if (!c1cs) {
        // 0x00251C68: nop
    
            goto L_00251C84;
    }
    // 0x00251C68: nop

    // 0x00251C6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251C70: lwc1        $f1, 0x7050($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7050);
    // 0x00251C74: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00251C78: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00251C7C: j           L_00251C90
    // 0x00251C80: nop

        goto L_00251C90;
    // 0x00251C80: nop

L_00251C84:
    // 0x00251C84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251C88: lwc1        $f0, 0x7054($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7054);
    // 0x00251C8C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
L_00251C90:
    // 0x00251C90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251C94: lwc1        $f1, 0x7058($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7058);
    // 0x00251C98: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00251C9C: nop

    // 0x00251CA0: bc1tl       L_00251CA8
    if (c1cs) {
        // 0x00251CA4: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00251CA8;
    }
    goto skip_3;
    // 0x00251CA4: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_3:
L_00251CA8:
    // 0x00251CA8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x00251CAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251CB0: lwc1        $f0, 0x705C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X705C);
    // 0x00251CB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00251CB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00251CC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00251CC4: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00251CC8: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00251CCC: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x00251CD0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00251CD4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00251CD8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00251CDC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00251CE0: lw          $a0, 0x51C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X51C);
    // 0x00251CE4: jal         0x002811CC
    // 0x00251CE8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_002811CC(rdram, ctx);
        goto after_5;
    // 0x00251CE8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_5:
L_00251CEC:
    // 0x00251CEC: lwc1        $f1, 0xA78($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XA78);
    // 0x00251CF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251CF4: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00251CF8: nop

    // 0x00251CFC: bc1f        L_00251D14
    if (!c1cs) {
        // 0x00251D00: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00251D14;
    }
    // 0x00251D00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00251D04: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00251D08: addiu       $a2, $a2, -0x2220
    ctx->r6 = ADD32(ctx->r6, -0X2220);
    // 0x00251D0C: j           L_00251D20
    // 0x00251D10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
        goto L_00251D20;
    // 0x00251D10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_00251D14:
    // 0x00251D14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00251D18: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00251D1C: addiu       $a2, $a2, -0x21FC
    ctx->r6 = ADD32(ctx->r6, -0X21FC);
L_00251D20:
    // 0x00251D20: jal         0x0024F174
    // 0x00251D24: nop

    func_0024F174(rdram, ctx);
        goto after_6;
    // 0x00251D24: nop

    after_6:
    // 0x00251D28: lwc1        $f2, 0xA78($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XA78);
    // 0x00251D2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251D30: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00251D34: nop

    // 0x00251D38: bc1f        L_00251D64
    if (!c1cs) {
        // 0x00251D3C: nop
    
            goto L_00251D64;
    }
    // 0x00251D3C: nop

    // 0x00251D40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251D44: lwc1        $f1, 0x7060($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7060);
    // 0x00251D48: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00251D4C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00251D50: nop

    // 0x00251D54: bc1f        L_00251D88
    if (!c1cs) {
        // 0x00251D58: nop
    
            goto L_00251D88;
    }
    // 0x00251D58: nop

    // 0x00251D5C: j           L_00251D7C
    // 0x00251D60: nop

        goto L_00251D7C;
    // 0x00251D60: nop

L_00251D64:
    // 0x00251D64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251D68: lwc1        $f0, 0x7064($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7064);
    // 0x00251D6C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x00251D70: nop

    // 0x00251D74: bc1f        L_00251D88
    if (!c1cs) {
        // 0x00251D78: nop
    
            goto L_00251D88;
    }
    // 0x00251D78: nop

L_00251D7C:
    // 0x00251D7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251D80: lwc1        $f0, 0x7068($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7068);
    // 0x00251D84: swc1        $f0, 0xAAC($s1)
    MEM_W(0XAAC, ctx->r17) = ctx->f0.u32l;
L_00251D88:
    // 0x00251D88: lw          $v1, 0xBB4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XBB4);
    // 0x00251D8C: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x00251D90: bne         $v1, $v0, L_00251DC0
    if (ctx->r3 != ctx->r2) {
        // 0x00251D94: nop
    
            goto L_00251DC0;
    }
    // 0x00251D94: nop

    // 0x00251D98: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x00251D9C: addiu       $s3, $s3, -0x2350
    ctx->r19 = ADD32(ctx->r19, -0X2350);
    // 0x00251DA0: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x00251DA4: addiu       $t3, $t3, -0x2344
    ctx->r11 = ADD32(ctx->r11, -0X2344);
    // 0x00251DA8: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00251DAC: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00251DB0: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00251DB4: sw          $t0, 0xBB8($s1)
    MEM_W(0XBB8, ctx->r17) = ctx->r8;
    // 0x00251DB8: sw          $t1, 0xBBC($s1)
    MEM_W(0XBBC, ctx->r17) = ctx->r9;
    // 0x00251DBC: sw          $t2, 0xBC0($s1)
    MEM_W(0XBC0, ctx->r17) = ctx->r10;
L_00251DC0:
    // 0x00251DC0: beq         $s3, $zero, L_00251E00
    if (ctx->r19 == 0) {
        // 0x00251DC4: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_00251E00;
    }
    // 0x00251DC4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x00251DC8: lw          $a1, 0x50($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X50);
    // 0x00251DCC: jal         0x002105A4
    // 0x00251DD0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_002105A4(rdram, ctx);
        goto after_7;
    // 0x00251DD0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x00251DD4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00251DD8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00251DDC: addiu       $s0, $s1, 0xAE0
    ctx->r16 = ADD32(ctx->r17, 0XAE0);
    // 0x00251DE0: jal         0x0020F85C
    // 0x00251DE4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020F85C(rdram, ctx);
        goto after_8;
    // 0x00251DE4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00251DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00251DEC: lui         $a2, 0x4123
    ctx->r6 = S32(0X4123 << 16);
    // 0x00251DF0: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x00251DF4: jal         0x0020EF60
    // 0x00251DF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_9;
    // 0x00251DF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_9:
    // 0x00251DFC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_00251E00:
    // 0x00251E00: sh          $v0, 0xB14($s1)
    MEM_H(0XB14, ctx->r17) = ctx->r2;
    // 0x00251E04: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00251E08: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x00251E0C: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x00251E10: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x00251E14: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x00251E18: ldc1        $f21, 0x88($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X88);
    // 0x00251E1C: ldc1        $f20, 0x80($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X80);
    // 0x00251E20: jr          $ra
    // 0x00251E24: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x00251E24: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_00256A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256A80: sw          $v0, 0x524($a0)
    MEM_W(0X524, ctx->r4) = ctx->r2;
    // 0x00256A84: jr          $ra
    // 0x00256A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x00256A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_002648BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002648BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002648C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002648C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002648C8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002648CC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002648D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002648D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002648D8: jal         0x00220260
    // 0x002648DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x002648DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x002648E0: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002648E4: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x002648E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002648EC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x002648F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002648F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002648F8: jr          $ra
    // 0x002648FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002648FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045165C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045165C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451660: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00451664: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045166C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451670: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451674: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451678: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0045167C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00451680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451684: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451688: lb          $v0, 0x28($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X28);
    // 0x0045168C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451690: jal         0x0041648C
    // 0x00451694: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451694: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451698: sb          $v0, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r2;
    // 0x0045169C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004516A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004516A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004516A8: jr          $ra
    // 0x004516AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004516AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0021A150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021A150: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0021A154: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0021A158: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0021A15C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0021A160: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x0021A164: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x0021A168: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0021A16C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0021A170: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0021A174: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0021A178: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0021A17C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0021A180: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0021A184: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021A188: lw          $v1, 0xD4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD4);
    // 0x0021A18C: lhu         $a2, 0x2($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2);
    // 0x0021A190: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0021A194: jal         0x00201848
    // 0x0021A198: sw          $v1, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r3;
    func_00201848(rdram, ctx);
        goto after_0;
    // 0x0021A198: sw          $v1, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r3;
    after_0:
    // 0x0021A19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A1A0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0021A1A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021A1A8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0021A1AC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x0021A1B0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021A1B4: addiu       $v0, $v0, 0x5AD8
    ctx->r2 = ADD32(ctx->r2, 0X5AD8);
    // 0x0021A1B8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0021A1BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021A1C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021A1C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021A1C8: jal         0x0020367C
    // 0x0021A1CC: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x0021A1CC: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_1:
    // 0x0021A1D0: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0021A1D4: beq         $s5, $zero, L_0021A320
    if (ctx->r21 == 0) {
        // 0x0021A1D8: addu        $a2, $s4, $zero
        ctx->r6 = ADD32(ctx->r20, 0);
            goto L_0021A320;
    }
    // 0x0021A1D8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0021A1DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021A1E0: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x0021A1E4: addiu       $a3, $s2, 0xB4
    ctx->r7 = ADD32(ctx->r18, 0XB4);
    // 0x0021A1E8: jal         0x0020185C
    // 0x0021A1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020185C(rdram, ctx);
        goto after_2;
    // 0x0021A1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0021A1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021A1F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021A1F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0021A1FC: addiu       $a3, $s2, 0xB0
    ctx->r7 = ADD32(ctx->r18, 0XB0);
    // 0x0021A200: jal         0x0020185C
    // 0x0021A204: sw          $v0, 0xAC($s2)
    MEM_W(0XAC, ctx->r18) = ctx->r2;
    func_0020185C(rdram, ctx);
        goto after_3;
    // 0x0021A204: sw          $v0, 0xAC($s2)
    MEM_W(0XAC, ctx->r18) = ctx->r2;
    after_3:
    // 0x0021A208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0021A20C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0021A210: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x0021A214: jal         0x00201848
    // 0x0021A218: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_4;
    // 0x0021A218: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    after_4:
    // 0x0021A21C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A220: sw          $v0, 0xA8($s2)
    MEM_W(0XA8, ctx->r18) = ctx->r2;
    // 0x0021A224: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021A228: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x0021A22C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021A230: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021A234: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021A238: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x0021A23C: lw          $a1, 0xA4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XA4);
    // 0x0021A240: lw          $a2, 0xB0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XB0);
    // 0x0021A244: jal         0x0020367C
    // 0x0021A248: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    func_0020367C(rdram, ctx);
        goto after_5;
    // 0x0021A248: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    after_5:
    // 0x0021A24C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x0021A250: beq         $s4, $zero, L_0021A314
    if (ctx->r20 == 0) {
        // 0x0021A254: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0021A314;
    }
    // 0x0021A254: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0021A258: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    // 0x0021A25C: jal         0x002017D4
    // 0x0021A260: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x0021A260: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0021A264: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021A268: addiu       $a1, $s2, 0x140
    ctx->r5 = ADD32(ctx->r18, 0X140);
    // 0x0021A26C: lw          $v1, 0x244($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X244);
    // 0x0021A270: jalr        $v1
    // 0x0021A274: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_7;
    // 0x0021A274: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x0021A278: addiu       $a0, $s2, 0x58
    ctx->r4 = ADD32(ctx->r18, 0X58);
    // 0x0021A27C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0021A280: jal         0x0020C0D0
    // 0x0021A284: addiu       $a2, $s2, 0xBC
    ctx->r6 = ADD32(ctx->r18, 0XBC);
    func_0020C0D0(rdram, ctx);
        goto after_8;
    // 0x0021A284: addiu       $a2, $s2, 0xBC
    ctx->r6 = ADD32(ctx->r18, 0XBC);
    after_8:
    // 0x0021A288: jal         0x00219910
    // 0x0021A28C: addiu       $a0, $s2, 0xD8
    ctx->r4 = ADD32(ctx->r18, 0XD8);
    func_00219910(rdram, ctx);
        goto after_9;
    // 0x0021A28C: addiu       $a0, $s2, 0xD8
    ctx->r4 = ADD32(ctx->r18, 0XD8);
    after_9:
    // 0x0021A290: jal         0x00219910
    // 0x0021A294: addiu       $a0, $s2, 0xEC
    ctx->r4 = ADD32(ctx->r18, 0XEC);
    func_00219910(rdram, ctx);
        goto after_10;
    // 0x0021A294: addiu       $a0, $s2, 0xEC
    ctx->r4 = ADD32(ctx->r18, 0XEC);
    after_10:
    // 0x0021A298: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0021A29C: jal         0x002017D4
    // 0x0021A2A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x0021A2A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x0021A2A4: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x0021A2A8: sh          $v0, 0xBA($s2)
    MEM_H(0XBA, ctx->r18) = ctx->r2;
    // 0x0021A2AC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x0021A2B0: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0021A2B4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021A2B8: blez        $s3, L_0021A2D8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x0021A2BC: sw          $v0, 0xD4($s2)
        MEM_W(0XD4, ctx->r18) = ctx->r2;
            goto L_0021A2D8;
    }
    // 0x0021A2BC: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    // 0x0021A2C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0021A2C4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0021A2C8: jal         0x00219F74
    // 0x0021A2CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_12;
    // 0x0021A2CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_12:
    // 0x0021A2D0: j           L_0021A2DC
    // 0x0021A2D4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
        goto L_0021A2DC;
    // 0x0021A2D4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_0021A2D8:
    // 0x0021A2D8: negu        $s3, $s3
    ctx->r19 = SUB32(0, ctx->r19);
L_0021A2DC:
    // 0x0021A2DC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0021A2E0: beql        $s3, $v1, L_0021A2E8
    if (ctx->r19 == ctx->r3) {
        // 0x0021A2E4: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0021A2E8;
    }
    goto skip_0;
    // 0x0021A2E4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_0:
L_0021A2E8:
    // 0x0021A2E8: lh          $v0, 0xDC($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XDC);
    // 0x0021A2EC: sh          $s3, 0xDE($s2)
    MEM_H(0XDE, ctx->r18) = ctx->r19;
    // 0x0021A2F0: beq         $v0, $s3, L_0021A300
    if (ctx->r2 == ctx->r19) {
        // 0x0021A2F4: sb          $zero, 0xE2($s2)
        MEM_B(0XE2, ctx->r18) = 0;
            goto L_0021A300;
    }
    // 0x0021A2F4: sb          $zero, 0xE2($s2)
    MEM_B(0XE2, ctx->r18) = 0;
    // 0x0021A2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021A2FC: sb          $v0, 0xE3($s2)
    MEM_B(0XE3, ctx->r18) = ctx->r2;
L_0021A300:
    // 0x0021A300: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A304: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x0021A308: sb          $v1, 0x175($s2)
    MEM_B(0X175, ctx->r18) = ctx->r3;
    // 0x0021A30C: jal         0x002051F4
    // 0x0021A310: sb          $s3, 0x206($s2)
    MEM_B(0X206, ctx->r18) = ctx->r19;
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x0021A310: sb          $s3, 0x206($s2)
    MEM_B(0X206, ctx->r18) = ctx->r19;
    after_13:
L_0021A314:
    // 0x0021A314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021A318: jal         0x002051F4
    // 0x0021A31C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_14;
    // 0x0021A31C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_14:
L_0021A320:
    // 0x0021A320: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0021A324: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0021A328: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0021A32C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0021A330: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0021A334: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0021A338: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021A33C: jr          $ra
    // 0x0021A340: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0021A340: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00218748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218748: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0021874C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00218750: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00218754: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00218758: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0021875C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00218760: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x00218764: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00218768: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0021876C: jal         0x002017D4
    // 0x00218770: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00218770: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00218774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0021877C: jal         0x002017D4
    // 0x00218780: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00218780: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_1:
    // 0x00218784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218788: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0021878C: jal         0x002017D4
    // 0x00218790: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00218790: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00218794: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00218798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0021879C: jal         0x002017D4
    // 0x002187A0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002187A0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_3:
    // 0x002187A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002187A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002187AC: jal         0x002017D4
    // 0x002187B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x002187B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002187B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002187B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002187BC: lwc1        $f2, 0xC($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0XC);
    // 0x002187C0: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x002187C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002187C8: lwc1        $f0, 0x59F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X59F8);
    // 0x002187CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002187D0: lwc1        $f1, 0x59FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X59FC);
    // 0x002187D4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x002187D8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x002187DC: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x002187E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x002187E4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x002187E8: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x002187EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002187F0: sw          $s1, 0x6798($at)
    MEM_W(0X6798, ctx->r1) = ctx->r17;
    // 0x002187F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002187F8: sw          $zero, 0x6794($at)
    MEM_W(0X6794, ctx->r1) = 0;
    // 0x002187FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00218800: swc1        $f0, 0x679C($at)
    MEM_W(0X679C, ctx->r1) = ctx->f0.u32l;
    // 0x00218804: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00218808: swc1        $f1, 0x67A0($at)
    MEM_W(0X67A0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x0021880C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00218810: swc1        $f2, 0x6790($at)
    MEM_W(0X6790, ctx->r1) = ctx->f2.u32l;
    // 0x00218814: jal         0x00216604
    // 0x00218818: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00216604(rdram, ctx);
        goto after_5;
    // 0x00218818: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x0021881C: beq         $v0, $zero, L_00218888
    if (ctx->r2 == 0) {
        // 0x00218820: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00218888;
    }
    // 0x00218820: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00218824: lwc1        $f2, 0xC($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0XC);
    // 0x00218828: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0021882C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00218830: lwc1        $f0, 0x5A00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A00);
    // 0x00218834: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00218838: lwc1        $f1, 0x5A04($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5A04);
    // 0x0021883C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00218840: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x00218844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00218848: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0021884C: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x00218850: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00218854: sw          $zero, 0x6798($at)
    MEM_W(0X6798, ctx->r1) = 0;
    // 0x00218858: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021885C: sw          $s1, 0x6794($at)
    MEM_W(0X6794, ctx->r1) = ctx->r17;
    // 0x00218860: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00218864: swc1        $f0, 0x679C($at)
    MEM_W(0X679C, ctx->r1) = ctx->f0.u32l;
    // 0x00218868: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0021886C: swc1        $f1, 0x67A0($at)
    MEM_W(0X67A0, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00218870: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00218874: swc1        $f2, 0x6790($at)
    MEM_W(0X6790, ctx->r1) = ctx->f2.u32l;
    // 0x00218878: jal         0x00216604
    // 0x0021887C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_00216604(rdram, ctx);
        goto after_6;
    // 0x0021887C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_6:
    // 0x00218880: j           L_0021888C
    // 0x00218884: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_0021888C;
    // 0x00218884: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_00218888:
    // 0x00218888: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021888C:
    // 0x0021888C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00218890: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00218894: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00218898: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0021889C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x002188A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x002188A4: jr          $ra
    // 0x002188A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002188A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_00293E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293E74: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293E78: lw          $a2, 0x40($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X40);
    // 0x00293E7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00293E80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x00293E84: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293E88: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293E8C: sh          $a1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r5;
    // 0x00293E90: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00293E94: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293E98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293E9C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293EA0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x00293EA4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x00293EA8: jal         0x00291034
    // 0x00293EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x00293EB0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293EB4: jr          $ra
    // 0x00293EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
