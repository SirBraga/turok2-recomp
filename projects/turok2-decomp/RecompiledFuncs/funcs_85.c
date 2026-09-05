#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00455D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455D10: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00455D14: lw          $v1, 0x1C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1C);
    // 0x00455D18: beq         $v1, $zero, L_00455D24
    if (ctx->r3 == 0) {
        // 0x00455D1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00455D24;
    }
    // 0x00455D1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00455D20: sw          $v0, 0xBF8($v1)
    MEM_W(0XBF8, ctx->r3) = ctx->r2;
L_00455D24:
    // 0x00455D24: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455D28: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x00455D2C: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x00455D30: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455D34: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x00455D38: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455D3C: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x00455D40: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455D44: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x00455D48: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455D4C: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x00455D50: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00455D54: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x00455D58: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455D5C: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x00455D60: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x00455D64: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00455D68: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455D6C: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x00455D70: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x00455D74: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x00455D78: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00455D7C: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x00455D80: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455D84: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00455D88: beq         $v0, $zero, L_00455DA8
    if (ctx->r2 == 0) {
            // 0x00455D8C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    func_00455DA8(rdram, ctx);
    return;
    }
    // 0x00455D8C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x00455D90: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x00455D94: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x00455D98: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x00455D9C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x00455DA0: jr          $ra
    // 0x00455DA4: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
    return;
    // 0x00455DA4: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_00462EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042A44C:
    // 0x00462EC0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
L_0042A594:
    // 0x00462EC4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
L_0042A6DC:
    // 0x00462EC8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_0042A824:
    // 0x00462ECC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
L_0042A96C:
    // 0x00462ED0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00462ED4: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x00462ED8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00462EDC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00462EE0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00462EE4: jal         0x00226390
    // 0x00462EE8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    func_00226390(rdram, ctx);
        goto after_0;
    // 0x00462EE8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_0:
    // 0x00462EEC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00462EF0: jal         0x0042C414
    // 0x00462EF4: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    func_0042C414(rdram, ctx);
        goto after_1;
    // 0x00462EF4: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    after_1:
    // 0x00462EF8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00462EFC: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00462F00: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x00462F04: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x00462F08: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x00462F0C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00462F10: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00462F14: sw          $s2, -0x7058($at)
    MEM_W(-0X7058, ctx->r1) = ctx->r18;
    // 0x00462F18: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00462F1C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00462F20: sw          $zero, -0x7148($at)
    MEM_W(-0X7148, ctx->r1) = 0;
    // 0x00462F24: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00462F28: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00462F2C: sw          $zero, -0x715C($at)
    MEM_W(-0X715C, ctx->r1) = 0;
    // 0x00462F30: jal         0x0042E7B4
    // 0x00462F34: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    entry_0042E7B4(rdram, ctx);
        goto after_2;
    // 0x00462F34: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_2:
    // 0x00462F38: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00462F3C: ori         $v0, $v0, 0x8EA8
    ctx->r2 = ctx->r2 | 0X8EA8;
    // 0x00462F40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00462F44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00462F48: lwc1        $f1, 0x5EA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5EA0);
    // 0x00462F4C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x00462F50: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x00462F54: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x00462F58: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00462F5C: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00462F60: swc1        $f0, -0x7158($at)
    MEM_W(-0X7158, ctx->r1) = ctx->f0.u32l;
    // 0x00462F64: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00462F68: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x00462F6C: swc1        $f1, -0x714C($at)
    MEM_W(-0X714C, ctx->r1) = ctx->f_odd[(1 - 1) * 2];
    // 0x00462F70: jal         0x002053A8
    // 0x00462F74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_3;
    // 0x00462F74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x00462F78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462F7C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00462F80: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00462F84: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    // 0x00462F88: jal         0x00205B94
    // 0x00462F8C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00205B94(rdram, ctx);
        goto after_4;
    // 0x00462F8C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00462F90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00462F94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00462F98: jal         0x00201848
    // 0x00462F9C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00201848(rdram, ctx);
        goto after_5;
    // 0x00462F9C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x00462FA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462FA4: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x00462FA8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00462FAC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00462FB0: addiu       $a3, $a3, 0x5D9C
    ctx->r7 = ADD32(ctx->r7, 0X5D9C);
    // 0x00462FB4: jal         0x00205B94
    // 0x00462FB8: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_6;
    // 0x00462FB8: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    after_6:
    // 0x00462FBC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00462FC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00462FC4: jal         0x00201848
    // 0x00462FC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00201848(rdram, ctx);
        goto after_7;
    // 0x00462FC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x00462FCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462FD0: addiu       $a1, $s3, 0x3C
    ctx->r5 = ADD32(ctx->r19, 0X3C);
    // 0x00462FD4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00462FD8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00462FDC: addiu       $a3, $a3, 0x5DAC
    ctx->r7 = ADD32(ctx->r7, 0X5DAC);
    // 0x00462FE0: jal         0x00205B94
    // 0x00462FE4: sw          $a2, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_8;
    // 0x00462FE4: sw          $a2, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r6;
    after_8:
    // 0x00462FE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462FEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00462FF0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00462FF4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00462FF8: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x00462FFC: addiu       $s1, $s1, 0x5DC0
    ctx->r17 = ADD32(ctx->r17, 0X5DC0);
    // 0x00463000: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00463008: jal         0x00205D0C
    // 0x0046300C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_00205D0C(rdram, ctx);
        goto after_9;
    // 0x0046300C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_9:
    // 0x00463010: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463014: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00463018: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0046301C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00463020: jal         0x00201848
    // 0x00463024: sw          $v0, 0x74($s3)
    MEM_W(0X74, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_10;
    // 0x00463024: sw          $v0, 0x74($s3)
    MEM_W(0X74, ctx->r19) = ctx->r2;
    after_10:
    // 0x00463028: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046302C: addiu       $a1, $s3, 0x40
    ctx->r5 = ADD32(ctx->r19, 0X40);
    // 0x00463030: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00463034: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00463038: addiu       $a3, $a3, 0x5DD0
    ctx->r7 = ADD32(ctx->r7, 0X5DD0);
    // 0x0046303C: jal         0x00205B94
    // 0x00463040: sw          $a2, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_11;
    // 0x00463040: sw          $a2, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r6;
    after_11:
    // 0x00463044: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0046304C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00463050: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00463054: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00463058: addiu       $v0, $v0, -0x34FC
    ctx->r2 = ADD32(ctx->r2, -0X34FC);
    // 0x0046305C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00463060: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463064: addiu       $v0, $v0, 0x5DE0
    ctx->r2 = ADD32(ctx->r2, 0X5DE0);
    // 0x00463068: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x0046306C: jal         0x00205D0C
    // 0x00463070: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_12;
    // 0x00463070: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x00463074: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463078: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0046307C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00463080: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00463084: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00463088: sw          $v0, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->r2;
    // 0x0046308C: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00463090: addiu       $v0, $v0, -0x362C
    ctx->r2 = ADD32(ctx->r2, -0X362C);
    // 0x00463094: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00463098: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0046309C: addiu       $v0, $v0, 0x5DF0
    ctx->r2 = ADD32(ctx->r2, 0X5DF0);
    // 0x004630A0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004630A4: jal         0x00205D0C
    // 0x004630A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_13;
    // 0x004630A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_13:
    // 0x004630AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004630B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x004630B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x004630B8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004630BC: sw          $v0, 0x94($s3)
    MEM_W(0X94, ctx->r19) = ctx->r2;
    // 0x004630C0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004630C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004630C8: jal         0x00205D0C
    // 0x004630CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_00205D0C(rdram, ctx);
        goto after_14;
    // 0x004630CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_14:
    // 0x004630D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004630D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x004630D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004630DC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x004630E0: jal         0x00201848
    // 0x004630E4: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_15;
    // 0x004630E4: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    after_15:
    // 0x004630E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004630EC: addiu       $a1, $s3, 0x44
    ctx->r5 = ADD32(ctx->r19, 0X44);
    // 0x004630F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004630F4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x004630F8: addiu       $a3, $a3, 0x5E04
    ctx->r7 = ADD32(ctx->r7, 0X5E04);
    // 0x004630FC: jal         0x00205B94
    // 0x00463100: sw          $a2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_16;
    // 0x00463100: sw          $a2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r6;
    after_16:
    // 0x00463104: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463108: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x0046310C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00463110: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00463114: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463118: addiu       $v0, $v0, 0x5E14
    ctx->r2 = ADD32(ctx->r2, 0X5E14);
    // 0x0046311C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463120: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00463124: jal         0x00205D0C
    // 0x00463128: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_17;
    // 0x00463128: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_17:
    // 0x0046312C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463130: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x00463134: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00463138: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0046313C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00463140: sw          $v0, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->r2;
    // 0x00463144: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463148: addiu       $v0, $v0, 0x5E28
    ctx->r2 = ADD32(ctx->r2, 0X5E28);
    // 0x0046314C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463150: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00463154: jal         0x00205D0C
    // 0x00463158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_18;
    // 0x00463158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x0046315C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463160: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x00463164: addiu       $a3, $s3, 0x30
    ctx->r7 = ADD32(ctx->r19, 0X30);
    // 0x00463168: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0046316C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00463170: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00463174: addiu       $v0, $v0, -0x4540
    ctx->r2 = ADD32(ctx->r2, -0X4540);
    // 0x00463178: sw          $v0, 0x6C($s3)
    MEM_W(0X6C, ctx->r19) = ctx->r2;
    // 0x0046317C: jal         0x0020185C
    // 0x00463180: sw          $v1, 0x80($s3)
    MEM_W(0X80, ctx->r19) = ctx->r3;
    func_0020185C(rdram, ctx);
        goto after_19;
    // 0x00463180: sw          $v1, 0x80($s3)
    MEM_W(0X80, ctx->r19) = ctx->r3;
    after_19:
    // 0x00463184: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463188: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x0046318C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00463190: addiu       $a3, $s3, 0x34
    ctx->r7 = ADD32(ctx->r19, 0X34);
    // 0x00463194: sw          $v0, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->r2;
    // 0x00463198: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0046319C: addiu       $v0, $v0, 0x6AC0
    ctx->r2 = ADD32(ctx->r2, 0X6AC0);
    // 0x004631A0: jal         0x0020185C
    // 0x004631A4: sw          $v0, 0x70($s3)
    MEM_W(0X70, ctx->r19) = ctx->r2;
    func_0020185C(rdram, ctx);
        goto after_20;
    // 0x004631A4: sw          $v0, 0x70($s3)
    MEM_W(0X70, ctx->r19) = ctx->r2;
    after_20:
    // 0x004631A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004631AC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x004631B0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004631B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x004631B8: lui         $s1, 0x20
    ctx->r17 = S32(0X20 << 16);
    // 0x004631BC: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x004631C0: sw          $v0, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r2;
    // 0x004631C4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004631C8: addiu       $v0, $v0, 0x5E38
    ctx->r2 = ADD32(ctx->r2, 0X5E38);
    // 0x004631CC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004631D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004631D4: jal         0x00205D0C
    // 0x004631D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_21;
    // 0x004631D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_21:
    // 0x004631DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004631E0: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x004631E4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x004631E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004631EC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004631F0: sw          $v0, 0x84($s3)
    MEM_W(0X84, ctx->r19) = ctx->r2;
    // 0x004631F4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004631F8: addiu       $v0, $v0, 0x5E40
    ctx->r2 = ADD32(ctx->r2, 0X5E40);
    // 0x004631FC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463200: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00463204: jal         0x00205D0C
    // 0x00463208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_22;
    // 0x00463208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_22:
    // 0x0046320C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463210: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x00463214: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00463218: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0046321C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00463220: sw          $v0, 0x8C($s3)
    MEM_W(0X8C, ctx->r19) = ctx->r2;
    // 0x00463224: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463228: addiu       $v0, $v0, 0x5E48
    ctx->r2 = ADD32(ctx->r2, 0X5E48);
    // 0x0046322C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463230: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00463234: jal         0x00205D0C
    // 0x00463238: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_23;
    // 0x00463238: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_23:
    // 0x0046323C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463240: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x00463244: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x00463248: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0046324C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x00463250: sw          $v0, 0x88($s3)
    MEM_W(0X88, ctx->r19) = ctx->r2;
    // 0x00463254: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463258: addiu       $v0, $v0, 0x5E58
    ctx->r2 = ADD32(ctx->r2, 0X5E58);
    // 0x0046325C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00463260: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00463264: jal         0x00205D0C
    // 0x00463268: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_24;
    // 0x00463268: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_24:
    // 0x0046326C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x00463274: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00463278: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0046327C: jal         0x00201848
    // 0x00463280: sw          $v0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->r2;
    func_00201848(rdram, ctx);
        goto after_25;
    // 0x00463280: sw          $v0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->r2;
    after_25:
    // 0x00463284: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463288: addiu       $a1, $s3, 0x48
    ctx->r5 = ADD32(ctx->r19, 0X48);
    // 0x0046328C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00463290: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x00463294: addiu       $a3, $a3, 0x5E68
    ctx->r7 = ADD32(ctx->r7, 0X5E68);
    // 0x00463298: jal         0x00205B94
    // 0x0046329C: sw          $a2, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_26;
    // 0x0046329C: sw          $a2, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r6;
    after_26:
    // 0x004632A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004632A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x004632A8: jal         0x00201848
    // 0x004632AC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_00201848(rdram, ctx);
        goto after_27;
    // 0x004632AC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_27:
    // 0x004632B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004632B4: addiu       $a1, $s3, 0x60
    ctx->r5 = ADD32(ctx->r19, 0X60);
    // 0x004632B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004632BC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x004632C0: addiu       $a3, $a3, 0x5E7C
    ctx->r7 = ADD32(ctx->r7, 0X5E7C);
    // 0x004632C4: jal         0x00205B94
    // 0x004632C8: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    func_00205B94(rdram, ctx);
        goto after_28;
    // 0x004632C8: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    after_28:
    // 0x004632CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004632D0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x004632D4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x004632D8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x004632DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004632E0: addiu       $v0, $v0, 0x5E8C
    ctx->r2 = ADD32(ctx->r2, 0X5E8C);
    // 0x004632E4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004632E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004632EC: jal         0x00205D0C
    // 0x004632F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_00205D0C(rdram, ctx);
        goto after_29;
    // 0x004632F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_29:
    // 0x004632F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004632F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004632FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463300: jal         0x0042C2DC
    // 0x00463304: sw          $v0, 0x90($s3)
    MEM_W(0X90, ctx->r19) = ctx->r2;
    entry_0042C2DC(rdram, ctx);
        goto after_30;
    // 0x00463304: sw          $v0, 0x90($s3)
    MEM_W(0X90, ctx->r19) = ctx->r2;
    after_30:
    // 0x00463308: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0046330C: ori         $v0, $v0, 0x8FEC
    ctx->r2 = ctx->r2 | 0X8FEC;
    // 0x00463310: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00463314: addiu       $a1, $zero, 0xDAC
    ctx->r5 = ADD32(0, 0XDAC);
    // 0x00463318: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0046331C: sw          $s4, 0x6D54($at)
    MEM_W(0X6D54, ctx->r1) = ctx->r20;
    // 0x00463320: jal         0x00224180
    // 0x00463324: addu        $s5, $s3, $v0
    ctx->r21 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_31;
    // 0x00463324: addu        $s5, $s3, $v0
    ctx->r21 = ADD32(ctx->r19, ctx->r2);
    after_31:
    // 0x00463328: bne         $v0, $s2, L_00463338
    if (ctx->r2 != ctx->r18) {
        // 0x0046332C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00463338;
    }
    // 0x0046332C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00463330: j           L_0042A44C
    // 0x00463334: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
    entry_0042A44C(rdram, ctx);
    return;
    // 0x00463334: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
L_00463338:
    // 0x00463338: jal         0x00224F84
    // 0x0046333C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00224F84(rdram, ctx);
        goto after_32;
    // 0x0046333C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_32:
    // 0x00463340: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463344: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00463348: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046334C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00463350: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463354: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463358: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x0046335C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00463360: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00463364: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463368: jal         0x0020367C
    // 0x0046336C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_0020367C(rdram, ctx);
        goto after_33;
    // 0x0046336C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_33:
    // 0x00463370: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00463374: beq         $s1, $zero, L_0046344C
    if (ctx->r17 == 0) {
        // 0x00463378: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0046344C;
    }
    // 0x00463378: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046337C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00463380: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00463384: jal         0x0020185C
    // 0x00463388: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_0020185C(rdram, ctx);
        goto after_34;
    // 0x00463388: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_34:
    // 0x0046338C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463390: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00463394: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463398: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0046339C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x004633A0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x004633A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004633A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004633AC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x004633B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004633B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004633B8: jal         0x0020367C
    // 0x004633BC: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_0020367C(rdram, ctx);
        goto after_35;
    // 0x004633BC: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_35:
    // 0x004633C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004633C4: beq         $s0, $zero, L_00463444
    if (ctx->r16 == 0) {
        // 0x004633C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00463444;
    }
    // 0x004633C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004633CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x004633D0: jal         0x002017D4
    // 0x004633D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_36;
    // 0x004633D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_36:
    // 0x004633D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004633DC: jal         0x002017D4
    // 0x004633E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_37;
    // 0x004633E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_37:
    // 0x004633E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004633E8: jal         0x002017D4
    // 0x004633EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_38;
    // 0x004633EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_38:
    // 0x004633F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004633F4: jal         0x002017D4
    // 0x004633F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_39;
    // 0x004633F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_39:
    // 0x004633FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463400: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463404: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00463408: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0046340C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00463410: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00463414: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x00463418: sw          $t1, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r9;
    // 0x0046341C: sw          $t2, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r10;
    // 0x00463420: sw          $t3, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r11;
    // 0x00463424: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00463428: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0046342C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x00463430: sw          $t0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r8;
    // 0x00463434: sw          $t1, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r9;
    // 0x00463438: jal         0x002052D8
    // 0x0046343C: sw          $t2, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_40;
    // 0x0046343C: sw          $t2, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r10;
    after_40:
    // 0x00463440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00463444:
    // 0x00463444: jal         0x002052D8
    // 0x00463448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_41;
    // 0x00463448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_41:
L_0046344C:
    // 0x0046344C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00463450: ori         $v0, $v0, 0x9008
    ctx->r2 = ctx->r2 | 0X9008;
    // 0x00463454: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00463458: addiu       $a1, $zero, 0xDAD
    ctx->r5 = ADD32(0, 0XDAD);
    // 0x0046345C: jal         0x00224180
    // 0x00463460: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_42;
    // 0x00463460: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_42:
    // 0x00463464: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00463468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0046346C: bne         $a1, $v0, L_0046347C
    if (ctx->r5 != ctx->r2) {
        // 0x00463470: nop
    
            goto L_0046347C;
    }
    // 0x00463470: nop

    // 0x00463474: j           L_0042A594
    // 0x00463478: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    entry_0042A594(rdram, ctx);
    return;
    // 0x00463478: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0046347C:
    // 0x0046347C: jal         0x00224F84
    // 0x00463480: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_43;
    // 0x00463480: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_43:
    // 0x00463484: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463488: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0046348C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463490: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00463494: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463498: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0046349C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x004634A0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x004634A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004634A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004634AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004634B0: jal         0x0020367C
    // 0x004634B4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_44;
    // 0x004634B4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_44:
    // 0x004634B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x004634BC: beq         $s1, $zero, L_00463594
    if (ctx->r17 == 0) {
        // 0x004634C0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00463594;
    }
    // 0x004634C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004634C4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004634C8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x004634CC: jal         0x0020185C
    // 0x004634D0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_0020185C(rdram, ctx);
        goto after_45;
    // 0x004634D0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_45:
    // 0x004634D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004634D8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004634DC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x004634E0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x004634E4: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x004634E8: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x004634EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004634F0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004634F4: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x004634F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004634FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463500: jal         0x0020367C
    // 0x00463504: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_46;
    // 0x00463504: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_46:
    // 0x00463508: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0046350C: beq         $s0, $zero, L_0046358C
    if (ctx->r16 == 0) {
        // 0x00463510: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0046358C;
    }
    // 0x00463510: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463514: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00463518: jal         0x002017D4
    // 0x0046351C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_47;
    // 0x0046351C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_47:
    // 0x00463520: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00463524: jal         0x002017D4
    // 0x00463528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_48;
    // 0x00463528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_48:
    // 0x0046352C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00463530: jal         0x002017D4
    // 0x00463534: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_49;
    // 0x00463534: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_49:
    // 0x00463538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0046353C: jal         0x002017D4
    // 0x00463540: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_50;
    // 0x00463540: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_50:
    // 0x00463544: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463548: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046354C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00463550: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00463554: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00463558: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0046355C: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x00463560: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x00463564: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x00463568: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x0046356C: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00463570: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x00463574: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x00463578: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0046357C: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x00463580: jal         0x002052D8
    // 0x00463584: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_51;
    // 0x00463584: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_51:
    // 0x00463588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0046358C:
    // 0x0046358C: jal         0x002052D8
    // 0x00463590: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_52;
    // 0x00463590: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_52:
L_00463594:
    // 0x00463594: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00463598: ori         $v0, $v0, 0x9024
    ctx->r2 = ctx->r2 | 0X9024;
    // 0x0046359C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004635A0: addiu       $a1, $zero, 0xDAE
    ctx->r5 = ADD32(0, 0XDAE);
    // 0x004635A4: jal         0x00224180
    // 0x004635A8: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_53;
    // 0x004635A8: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_53:
    // 0x004635AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004635B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004635B4: bne         $a1, $v0, L_004635C4
    if (ctx->r5 != ctx->r2) {
        // 0x004635B8: nop
    
            goto L_004635C4;
    }
    // 0x004635B8: nop

    // 0x004635BC: j           L_0042A6DC
    // 0x004635C0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    entry_0042A6DC(rdram, ctx);
    return;
    // 0x004635C0: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_004635C4:
    // 0x004635C4: jal         0x00224F84
    // 0x004635C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_54;
    // 0x004635C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_54:
    // 0x004635CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004635D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004635D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004635D8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x004635DC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x004635E0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004635E4: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x004635E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x004635EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004635F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x004635F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004635F8: jal         0x0020367C
    // 0x004635FC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_55;
    // 0x004635FC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_55:
    // 0x00463600: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00463604: beq         $s1, $zero, L_004636DC
    if (ctx->r17 == 0) {
        // 0x00463608: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_004636DC;
    }
    // 0x00463608: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046360C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00463610: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00463614: jal         0x0020185C
    // 0x00463618: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_0020185C(rdram, ctx);
        goto after_56;
    // 0x00463618: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_56:
    // 0x0046361C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463620: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00463624: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463628: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0046362C: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00463630: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x00463634: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00463638: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0046363C: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x00463640: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00463644: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463648: jal         0x0020367C
    // 0x0046364C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_57;
    // 0x0046364C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_57:
    // 0x00463650: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00463654: beq         $s0, $zero, L_004636D4
    if (ctx->r16 == 0) {
        // 0x00463658: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004636D4;
    }
    // 0x00463658: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046365C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00463660: jal         0x002017D4
    // 0x00463664: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_58;
    // 0x00463664: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_58:
    // 0x00463668: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0046366C: jal         0x002017D4
    // 0x00463670: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_59;
    // 0x00463670: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_59:
    // 0x00463674: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00463678: jal         0x002017D4
    // 0x0046367C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_60;
    // 0x0046367C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_60:
    // 0x00463680: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00463684: jal         0x002017D4
    // 0x00463688: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_61;
    // 0x00463688: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_61:
    // 0x0046368C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463690: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463694: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00463698: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0046369C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x004636A0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x004636A4: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x004636A8: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x004636AC: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x004636B0: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x004636B4: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x004636B8: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x004636BC: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x004636C0: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x004636C4: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x004636C8: jal         0x002052D8
    // 0x004636CC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_62;
    // 0x004636CC: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_62:
    // 0x004636D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_004636D4:
    // 0x004636D4: jal         0x002052D8
    // 0x004636D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_63;
    // 0x004636D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_63:
L_004636DC:
    // 0x004636DC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x004636E0: ori         $v0, $v0, 0x9040
    ctx->r2 = ctx->r2 | 0X9040;
    // 0x004636E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004636E8: addiu       $a1, $zero, 0xDAF
    ctx->r5 = ADD32(0, 0XDAF);
    // 0x004636EC: jal         0x00224180
    // 0x004636F0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_64;
    // 0x004636F0: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_64:
    // 0x004636F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004636F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004636FC: bne         $a1, $v0, L_0046370C
    if (ctx->r5 != ctx->r2) {
        // 0x00463700: nop
    
            goto L_0046370C;
    }
    // 0x00463700: nop

    // 0x00463704: j           L_0042A824
    // 0x00463708: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    entry_0042A824(rdram, ctx);
    return;
    // 0x00463708: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_0046370C:
    // 0x0046370C: jal         0x00224F84
    // 0x00463710: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_65;
    // 0x00463710: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_65:
    // 0x00463714: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463718: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0046371C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463720: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00463724: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463728: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0046372C: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x00463730: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00463734: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00463738: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0046373C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463740: jal         0x0020367C
    // 0x00463744: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_66;
    // 0x00463744: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_66:
    // 0x00463748: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x0046374C: beq         $s1, $zero, L_00463824
    if (ctx->r17 == 0) {
        // 0x00463750: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00463824;
    }
    // 0x00463750: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463754: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00463758: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x0046375C: jal         0x0020185C
    // 0x00463760: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_0020185C(rdram, ctx);
        goto after_67;
    // 0x00463760: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_67:
    // 0x00463764: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463768: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0046376C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463770: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x00463774: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00463778: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x0046377C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00463780: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463784: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x00463788: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0046378C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463790: jal         0x0020367C
    // 0x00463794: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_68;
    // 0x00463794: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_68:
    // 0x00463798: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0046379C: beq         $s0, $zero, L_0046381C
    if (ctx->r16 == 0) {
        // 0x004637A0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0046381C;
    }
    // 0x004637A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004637A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x004637A8: jal         0x002017D4
    // 0x004637AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_69;
    // 0x004637AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_69:
    // 0x004637B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004637B4: jal         0x002017D4
    // 0x004637B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_70;
    // 0x004637B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_70:
    // 0x004637BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004637C0: jal         0x002017D4
    // 0x004637C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_71;
    // 0x004637C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_71:
    // 0x004637C8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004637CC: jal         0x002017D4
    // 0x004637D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_72;
    // 0x004637D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_72:
    // 0x004637D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004637D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004637DC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x004637E0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x004637E4: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x004637E8: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x004637EC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x004637F0: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x004637F4: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x004637F8: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x004637FC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00463800: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x00463804: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x00463808: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x0046380C: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x00463810: jal         0x002052D8
    // 0x00463814: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_73;
    // 0x00463814: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_73:
    // 0x00463818: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0046381C:
    // 0x0046381C: jal         0x002052D8
    // 0x00463820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_74;
    // 0x00463820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_74:
L_00463824:
    // 0x00463824: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00463828: ori         $v0, $v0, 0x905C
    ctx->r2 = ctx->r2 | 0X905C;
    // 0x0046382C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00463830: addiu       $a1, $zero, 0xDB0
    ctx->r5 = ADD32(0, 0XDB0);
    // 0x00463834: jal         0x00224180
    // 0x00463838: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    func_00224180(rdram, ctx);
        goto after_75;
    // 0x00463838: addu        $s4, $s3, $v0
    ctx->r20 = ADD32(ctx->r19, ctx->r2);
    after_75:
    // 0x0046383C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00463840: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00463844: bne         $a1, $v0, L_00463854
    if (ctx->r5 != ctx->r2) {
        // 0x00463848: nop
    
            goto L_00463854;
    }
    // 0x00463848: nop

    // 0x0046384C: j           L_0042A96C
    // 0x00463850: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    entry_0042A96C(rdram, ctx);
    return;
    // 0x00463850: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
L_00463854:
    // 0x00463854: jal         0x00224F84
    // 0x00463858: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00224F84(rdram, ctx);
        goto after_76;
    // 0x00463858: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_76:
    // 0x0046385C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463860: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00463864: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463868: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x0046386C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00463870: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00463874: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x00463878: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0046387C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00463880: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00463884: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00463888: jal         0x0020367C
    // 0x0046388C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_77;
    // 0x0046388C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_77:
    // 0x00463890: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00463894: beq         $s1, $zero, L_0046396C
    if (ctx->r17 == 0) {
        // 0x00463898: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0046396C;
    }
    // 0x00463898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046389C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x004638A0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x004638A4: jal         0x0020185C
    // 0x004638A8: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_0020185C(rdram, ctx);
        goto after_78;
    // 0x004638A8: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_78:
    // 0x004638AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004638B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004638B4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x004638B8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x004638BC: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x004638C0: addiu       $v0, $v0, -0x4B70
    ctx->r2 = ADD32(ctx->r2, -0X4B70);
    // 0x004638C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x004638C8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x004638CC: addiu       $v0, $v0, 0x5D80
    ctx->r2 = ADD32(ctx->r2, 0X5D80);
    // 0x004638D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x004638D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x004638D8: jal         0x0020367C
    // 0x004638DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_0020367C(rdram, ctx);
        goto after_79;
    // 0x004638DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_79:
    // 0x004638E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004638E4: beq         $s0, $zero, L_00463964
    if (ctx->r16 == 0) {
        // 0x004638E8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00463964;
    }
    // 0x004638E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004638EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x004638F0: jal         0x002017D4
    // 0x004638F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_80;
    // 0x004638F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_80:
    // 0x004638F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004638FC: jal         0x002017D4
    // 0x00463900: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_81;
    // 0x00463900: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_81:
    // 0x00463904: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00463908: jal         0x002017D4
    // 0x0046390C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_82;
    // 0x0046390C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_82:
    // 0x00463910: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00463914: jal         0x002017D4
    // 0x00463918: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_83;
    // 0x00463918: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_83:
    // 0x0046391C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00463920: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00463924: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00463928: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0046392C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00463930: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00463934: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x00463938: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x0046393C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x00463940: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x00463944: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00463948: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x0046394C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x00463950: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x00463954: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x00463958: jal         0x002052D8
    // 0x0046395C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    func_002052D8(rdram, ctx);
        goto after_84;
    // 0x0046395C: sw          $t2, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r10;
    after_84:
    // 0x00463960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00463964:
    // 0x00463964: jal         0x002052D8
    // 0x00463968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002052D8(rdram, ctx);
        goto after_85;
    // 0x00463968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_85:
L_0046396C:
    // 0x0046396C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00463970: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00463974: jal         0x0042AB2C
    // 0x00463978: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_0042AB2C(rdram, ctx);
        goto after_86;
    // 0x00463978: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_86:
    // 0x0046397C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x00463980: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00463984: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00463988: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0046398C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00463990: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00463994: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00463998: jr          $ra
    // 0x0046399C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0046399C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_002288D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002288D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002288D4: lw          $v0, -0x3200($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3200);
    // 0x002288D8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x002288DC: sw          $v0, 0x1800($at)
    MEM_W(0X1800, ctx->r1) = ctx->r2;
    // 0x002288E0: bne         $v0, $zero, L_002288F8
    if (ctx->r2 != 0) {
            // 0x002288E4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    func_002288F8(rdram, ctx);
    return;
    }
    // 0x002288E4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002288E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002288EC: sw          $v0, -0x3200($at)
    MEM_W(-0X3200, ctx->r1) = ctx->r2;
    // 0x002288F0: jr          $ra
    // 0x002288F4: nop

    return;
    // 0x002288F4: nop

;}
RECOMP_FUNC void func_0029EA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029EA34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029EA38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029EA3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029EA40: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x0029EA44: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x0029EA48: addiu       $v1, $v0, -0x25
    ctx->r3 = ADD32(ctx->r2, -0X25);
    // 0x0029EA4C: sltiu       $v0, $v1, 0x54
    ctx->r2 = ctx->r3 < 0X54 ? 1 : 0;
    // 0x0029EA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029EA54: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x0029EA58: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0029EA5C: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0029EA60: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0029EA64: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x0029EA68: beq         $v0, $zero, L_0029EE7C
    if (ctx->r2 == 0) {
        // 0x0029EA6C: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_0029EE7C;
    }
    // 0x0029EA6C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0029EA70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0029EA74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0029EA78: addu        $at, $at, $v0
    gpr jr_addend_0029EA80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0029EA7C: lw          $v0, -0x5588($at)
    ctx->r2 = ADD32(ctx->r1, -0X5588);
    // 0x0029EA80: jr          $v0
    // 0x0029EA84: nop

    switch (jr_addend_0029EA80 >> 2) {
        case 0: goto L_0029EE64; break;
        case 1: goto L_0029EE7C; break;
        case 2: goto L_0029EE7C; break;
        case 3: goto L_0029EE7C; break;
        case 4: goto L_0029EE7C; break;
        case 5: goto L_0029EE7C; break;
        case 6: goto L_0029EE7C; break;
        case 7: goto L_0029EE7C; break;
        case 8: goto L_0029EE7C; break;
        case 9: goto L_0029EE7C; break;
        case 10: goto L_0029EE7C; break;
        case 11: goto L_0029EE7C; break;
        case 12: goto L_0029EE7C; break;
        case 13: goto L_0029EE7C; break;
        case 14: goto L_0029EE7C; break;
        case 15: goto L_0029EE7C; break;
        case 16: goto L_0029EE7C; break;
        case 17: goto L_0029EE7C; break;
        case 18: goto L_0029EE7C; break;
        case 19: goto L_0029EE7C; break;
        case 20: goto L_0029EE7C; break;
        case 21: goto L_0029EE7C; break;
        case 22: goto L_0029EE7C; break;
        case 23: goto L_0029EE7C; break;
        case 24: goto L_0029EE7C; break;
        case 25: goto L_0029EE7C; break;
        case 26: goto L_0029EE7C; break;
        case 27: goto L_0029EE7C; break;
        case 28: goto L_0029EE7C; break;
        case 29: goto L_0029EE7C; break;
        case 30: goto L_0029EE7C; break;
        case 31: goto L_0029EE7C; break;
        case 32: goto L_0029ECA0; break;
        case 33: goto L_0029EE7C; break;
        case 34: goto L_0029ECA0; break;
        case 35: goto L_0029EE7C; break;
        case 36: goto L_0029EE7C; break;
        case 37: goto L_0029EE7C; break;
        case 38: goto L_0029EE7C; break;
        case 39: goto L_0029EE7C; break;
        case 40: goto L_0029EE7C; break;
        case 41: goto L_0029EE7C; break;
        case 42: goto L_0029EE7C; break;
        case 43: goto L_0029EE7C; break;
        case 44: goto L_0029EE7C; break;
        case 45: goto L_0029EE7C; break;
        case 46: goto L_0029EE7C; break;
        case 47: goto L_0029EE7C; break;
        case 48: goto L_0029EE7C; break;
        case 49: goto L_0029EE7C; break;
        case 50: goto L_0029EE7C; break;
        case 51: goto L_0029EB9C; break;
        case 52: goto L_0029EE7C; break;
        case 53: goto L_0029EE7C; break;
        case 54: goto L_0029EE7C; break;
        case 55: goto L_0029EE7C; break;
        case 56: goto L_0029EE7C; break;
        case 57: goto L_0029EE7C; break;
        case 58: goto L_0029EE7C; break;
        case 59: goto L_0029EE7C; break;
        case 60: goto L_0029EE7C; break;
        case 61: goto L_0029EE7C; break;
        case 62: goto L_0029EA88; break;
        case 63: goto L_0029EABC; break;
        case 64: goto L_0029ECA0; break;
        case 65: goto L_0029ECA0; break;
        case 66: goto L_0029ECA0; break;
        case 67: goto L_0029EE7C; break;
        case 68: goto L_0029EABC; break;
        case 69: goto L_0029EE7C; break;
        case 70: goto L_0029EE7C; break;
        case 71: goto L_0029EE7C; break;
        case 72: goto L_0029EE7C; break;
        case 73: goto L_0029ED34; break;
        case 74: goto L_0029EB9C; break;
        case 75: goto L_0029EDD4; break;
        case 76: goto L_0029EE7C; break;
        case 77: goto L_0029EE7C; break;
        case 78: goto L_0029EE20; break;
        case 79: goto L_0029EE7C; break;
        case 80: goto L_0029EB9C; break;
        case 81: goto L_0029EE7C; break;
        case 82: goto L_0029EE7C; break;
        case 83: goto L_0029EB9C; break;
        default: switch_error(__func__, 0x0029EA80, 0x800AAA78);
    }
    // 0x0029EA84: nop

L_0029EA88:
    // 0x0029EA88: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x0029EA8C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x0029EA90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0029EA94: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x0029EA98: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0029EA9C: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x0029EAA0: addu        $a1, $a3, $a0
    ctx->r5 = ADD32(ctx->r7, ctx->r4);
    // 0x0029EAA4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x0029EAA8: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x0029EAAC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0029EAB0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x0029EAB4: j           L_0029EE90
    // 0x0029EAB8: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
        goto L_0029EE90;
    // 0x0029EAB8: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
L_0029EABC:
    // 0x0029EABC: lbu         $v1, 0x34($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34);
    // 0x0029EAC0: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x0029EAC4: beq         $v1, $v0, L_0029EAF8
    if (ctx->r3 == ctx->r2) {
        // 0x0029EAC8: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_0029EAF8;
    }
    // 0x0029EAC8: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029EACC: bne         $v1, $v0, L_0029EAF8
    if (ctx->r3 != ctx->r2) {
        // 0x0029EAD0: addiu       $v1, $zero, -0x8
        ctx->r3 = ADD32(0, -0X8);
            goto L_0029EAF8;
    }
    // 0x0029EAD0: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x0029EAD4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029EAD8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0029EADC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029EAE0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0029EAE4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029EAE8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x0029EAEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029EAF0: j           L_0029EB1C
    // 0x0029EAF4: nop

        goto L_0029EB1C;
    // 0x0029EAF4: nop

L_0029EAF8:
    // 0x0029EAF8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029EAFC: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029EB00: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029EB04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029EB08: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x0029EB0C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029EB10: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0029EB14: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0029EB18: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
L_0029EB1C:
    // 0x0029EB1C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029EB20: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x0029EB24: lbu         $v1, 0x34($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34);
    // 0x0029EB28: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0029EB2C: bne         $v1, $v0, L_0029EB4C
    if (ctx->r3 != ctx->r2) {
        // 0x0029EB30: nop
    
            goto L_0029EB4C;
    }
    // 0x0029EB30: nop

    // 0x0029EB34: lhu         $a0, 0x6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6);
    // 0x0029EB38: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0029EB3C: sra         $v1, $a0, 16
    ctx->r3 = S32(SIGNED(ctx->r4) >> 16);
    // 0x0029EB40: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x0029EB44: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029EB48: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
L_0029EB4C:
    // 0x0029EB4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0029EB50: bgez        $v0, L_0029EB64
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0029EB54: addiu       $v1, $zero, 0x2D
        ctx->r3 = ADD32(0, 0X2D);
            goto L_0029EB64;
    }
    // 0x0029EB54: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x0029EB58: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029EB5C: j           L_0029EB90
    // 0x0029EB60: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
        goto L_0029EB90;
    // 0x0029EB60: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_0029EB64:
    // 0x0029EB64: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x0029EB68: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x0029EB6C: beq         $v0, $zero, L_0029EB80
    if (ctx->r2 == 0) {
        // 0x0029EB70: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_0029EB80;
    }
    // 0x0029EB70: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0029EB74: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029EB78: j           L_0029EB8C
    // 0x0029EB7C: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
        goto L_0029EB8C;
    // 0x0029EB7C: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
L_0029EB80:
    // 0x0029EB80: beq         $v0, $zero, L_0029EC80
    if (ctx->r2 == 0) {
        // 0x0029EB84: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_0029EC80;
    }
    // 0x0029EB84: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x0029EB88: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_0029EB8C:
    // 0x0029EB8C: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_0029EB90:
    // 0x0029EB90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029EB94: j           L_0029EC7C
    // 0x0029EB98: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_0029EC7C;
    // 0x0029EB98: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_0029EB9C:
    // 0x0029EB9C: lbu         $v1, 0x34($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34);
    // 0x0029EBA0: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x0029EBA4: beq         $v1, $v0, L_0029EBD8
    if (ctx->r3 == ctx->r2) {
        // 0x0029EBA8: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_0029EBD8;
    }
    // 0x0029EBA8: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029EBAC: bne         $v1, $v0, L_0029EBD8
    if (ctx->r3 != ctx->r2) {
        // 0x0029EBB0: addiu       $v1, $zero, -0x8
        ctx->r3 = ADD32(0, -0X8);
            goto L_0029EBD8;
    }
    // 0x0029EBB0: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x0029EBB4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029EBB8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0029EBBC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029EBC0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0029EBC4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029EBC8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x0029EBCC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0029EBD0: j           L_0029EBFC
    // 0x0029EBD4: nop

        goto L_0029EBFC;
    // 0x0029EBD4: nop

L_0029EBD8:
    // 0x0029EBD8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029EBDC: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x0029EBE0: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x0029EBE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029EBE8: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x0029EBEC: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029EBF0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x0029EBF4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0029EBF8: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
L_0029EBFC:
    // 0x0029EBFC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029EC00: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x0029EC04: lbu         $v1, 0x34($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34);
    // 0x0029EC08: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x0029EC0C: bne         $v1, $v0, L_0029EC20
    if (ctx->r3 != ctx->r2) {
        // 0x0029EC10: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0029EC20;
    }
    // 0x0029EC10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0029EC14: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x0029EC18: j           L_0029EC2C
    // 0x0029EC1C: nop

        goto L_0029EC2C;
    // 0x0029EC1C: nop

L_0029EC20:
    // 0x0029EC20: bne         $v1, $zero, L_0029EC34
    if (ctx->r3 != 0) {
        // 0x0029EC24: nop
    
            goto L_0029EC34;
    }
    // 0x0029EC24: nop

    // 0x0029EC28: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_0029EC2C:
    // 0x0029EC2C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0029EC30: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
L_0029EC34:
    // 0x0029EC34: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x0029EC38: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x0029EC3C: beq         $v0, $zero, L_0029EC80
    if (ctx->r2 == 0) {
        // 0x0029EC40: addiu       $v1, $zero, 0x30
        ctx->r3 = ADD32(0, 0X30);
            goto L_0029EC80;
    }
    // 0x0029EC40: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x0029EC44: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0029EC48: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x0029EC4C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0029EC50: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0029EC54: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x0029EC58: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x0029EC5C: beq         $v1, $v0, L_0029EC70
    if (ctx->r3 == ctx->r2) {
        // 0x0029EC60: sw          $a0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r4;
            goto L_0029EC70;
    }
    // 0x0029EC60: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
    // 0x0029EC64: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x0029EC68: bnel        $v1, $v0, L_0029EC84
    if (ctx->r3 != ctx->r2) {
        // 0x0029EC6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0029EC84;
    }
    goto skip_0;
    // 0x0029EC6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
L_0029EC70:
    // 0x0029EC70: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x0029EC74: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
    // 0x0029EC78: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_0029EC7C:
    // 0x0029EC7C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0029EC80:
    // 0x0029EC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0029EC84:
    // 0x0029EC84: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0029EC88: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x0029EC8C: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x0029EC90: jal         0x0029EEA0
    // 0x0029EC94: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    func_0029EEA0(rdram, ctx);
        goto after_0;
    // 0x0029EC94: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_0:
    // 0x0029EC98: j           L_0029EE90
    // 0x0029EC9C: nop

        goto L_0029EE90;
    // 0x0029EC9C: nop

L_0029ECA0:
    // 0x0029ECA0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0029ECA4: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x0029ECA8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x0029ECAC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0029ECB0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0029ECB4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x0029ECB8: ldc1        $f0, 0x0($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X0);
    // 0x0029ECBC: sdc1        $f0, 0x0($s0)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X0, ctx->r16);
    // 0x0029ECC0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x0029ECC4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x0029ECC8: beq         $v0, $zero, L_0029ECDC
    if (ctx->r2 == 0) {
        // 0x0029ECCC: addiu       $v1, $zero, 0x2D
        ctx->r3 = ADD32(0, 0X2D);
            goto L_0029ECDC;
    }
    // 0x0029ECCC: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x0029ECD0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0029ECD4: j           L_0029ED08
    // 0x0029ECD8: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
        goto L_0029ED08;
    // 0x0029ECD8: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_0029ECDC:
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
        goto after_1;
    // 0x0029ED28: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_1:
    // 0x0029ED2C: j           L_0029EE90
    // 0x0029ED30: nop

        goto L_0029EE90;
    // 0x0029ED30: nop

L_0029ED34:
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
L_0029EDD4:
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
        goto after_2;
    // 0x0029EE14: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    after_2:
    // 0x0029EE18: j           L_0029EE90
    // 0x0029EE1C: nop

        goto L_0029EE90;
    // 0x0029EE1C: nop

L_0029EE20:
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
        goto after_3;
    // 0x0029EE40: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    after_3:
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
    goto skip_1;
    // 0x0029EE58: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    skip_1:
    // 0x0029EE5C: j           L_0029EE90
    // 0x0029EE60: nop

        goto L_0029EE90;
    // 0x0029EE60: nop

L_0029EE64:
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
L_0029EE7C:
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
RECOMP_FUNC void func_00276850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276850: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x00276854: jr          $ra
    // 0x00276858: nop

    return;
    // 0x00276858: nop

;}
RECOMP_FUNC void func_00453AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453AE0: jr          $ra
    // 0x00453AE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453AE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00405BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405BFC: lui         $a2, 0x4400
    ctx->r6 = S32(0X4400 << 16);
    // 0x00405C00: jal         0x0021160C
    // 0x00405C04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021160C(rdram, ctx);
        goto after_0;
    // 0x00405C04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00405C08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00405C0C: jal         0x002982F0
    // 0x00405C10: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x00405C10: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_1:
    // 0x00405C14: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00405C18: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x00405C1C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00405C20: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00405C24: jal         0x002974C0
    // 0x00405C28: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x00405C28: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_2:
    // 0x00405C2C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00405C30: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x00405C34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405C38: lwc1        $f2, 0x484($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X484);
    // 0x00405C3C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00405C40: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x00405C44: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x00405C48: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x00405C4C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00405C50: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00405C54: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00405C58: ldc1        $f21, 0xD8($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XD8);
    // 0x00405C5C: ldc1        $f20, 0xD0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD0);
    // 0x00405C60: jr          $ra
    // 0x00405C64: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x00405C64: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_00440F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440F0C: jr          $ra
    // 0x00440F10: nop

    return;
    // 0x00440F10: nop

;}
RECOMP_FUNC void func_00423D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D30: jr          $ra
    // 0x00423D34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00423D34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0021FD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021FD30: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x0021FD34: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x0021FD38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FD3C: lwc1        $f1, 0x5D30($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D30);
    // 0x0021FD40: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FD44: nop

    // 0x0021FD48: bc1t        L_0021FD60
    if (c1cs) {
        // 0x0021FD4C: addiu       $a3, $a1, 0x20
        ctx->r7 = ADD32(ctx->r5, 0X20);
            goto L_0021FD60;
    }
    // 0x0021FD4C: addiu       $a3, $a1, 0x20
    ctx->r7 = ADD32(ctx->r5, 0X20);
    // 0x0021FD50: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FD54: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FD58: j           L_0021FD74
    // 0x0021FD5C: nop

        goto L_0021FD74;
    // 0x0021FD5C: nop

L_0021FD60:
    // 0x0021FD60: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FD64: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FD68: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FD6C: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FD70: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021FD74:
    // 0x0021FD74: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    // 0x0021FD78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FD7C: lwc1        $f1, 0x5D34($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D34);
    // 0x0021FD80: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FD84: nop

    // 0x0021FD88: bc1tl       L_0021FDA0
    if (c1cs) {
        // 0x0021FD8C: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021FDA0;
    }
    goto skip_0;
    // 0x0021FD8C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x0021FD90: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FD94: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0021FD98: j           L_0021FDB4
    // 0x0021FD9C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021FDB4;
    // 0x0021FD9C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FDA0:
    // 0x0021FDA0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FDA4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FDA8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0021FDAC: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0021FDB0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FDB4:
    // 0x0021FDB4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021FDB8: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0021FDBC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021FDC0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0021FDC4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0021FDC8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021FDCC: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0021FDD0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021FDD4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021FDD8: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x0021FDDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FDE0: lwc1        $f1, 0x5D38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D38);
    // 0x0021FDE4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FDE8: nop

    // 0x0021FDEC: bc1t        L_0021FE04
    if (c1cs) {
        // 0x0021FDF0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021FE04;
    }
    // 0x0021FDF0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021FDF4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FDF8: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FDFC: j           L_0021FE1C
    // 0x0021FE00: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021FE1C;
    // 0x0021FE00: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FE04:
    // 0x0021FE04: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FE08: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FE0C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FE10: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FE14: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021FE18: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FE1C:
    // 0x0021FE1C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021FE20: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0021FE24: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0021FE28: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021FE2C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021FE30: lwc1        $f0, 0x10($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X10);
    // 0x0021FE34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FE38: lwc1        $f1, 0x5D3C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D3C);
    // 0x0021FE3C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FE40: nop

    // 0x0021FE44: bc1t        L_0021FE5C
    if (c1cs) {
        // 0x0021FE48: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021FE5C;
    }
    // 0x0021FE48: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021FE4C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FE50: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FE54: j           L_0021FE70
    // 0x0021FE58: nop

        goto L_0021FE70;
    // 0x0021FE58: nop

L_0021FE5C:
    // 0x0021FE5C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FE60: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FE64: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FE68: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FE6C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021FE70:
    // 0x0021FE70: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
    // 0x0021FE74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FE78: lwc1        $f1, 0x5D40($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D40);
    // 0x0021FE7C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FE80: nop

    // 0x0021FE84: bc1tl       L_0021FE9C
    if (c1cs) {
        // 0x0021FE88: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021FE9C;
    }
    goto skip_1;
    // 0x0021FE88: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_1:
    // 0x0021FE8C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FE90: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0021FE94: j           L_0021FEB0
    // 0x0021FE98: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021FEB0;
    // 0x0021FE98: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FE9C:
    // 0x0021FE9C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FEA0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FEA4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0021FEA8: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0021FEAC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FEB0:
    // 0x0021FEB0: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021FEB4: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0021FEB8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021FEBC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0021FEC0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0021FEC4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021FEC8: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0021FECC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021FED0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021FED4: lwc1        $f0, 0x18($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X18);
    // 0x0021FED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FEDC: lwc1        $f1, 0x5D44($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D44);
    // 0x0021FEE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FEE4: nop

    // 0x0021FEE8: bc1t        L_0021FF00
    if (c1cs) {
        // 0x0021FEEC: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021FF00;
    }
    // 0x0021FEEC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021FEF0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FEF4: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FEF8: j           L_0021FF18
    // 0x0021FEFC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021FF18;
    // 0x0021FEFC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FF00:
    // 0x0021FF00: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FF04: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FF08: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FF0C: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FF10: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0021FF14: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FF18:
    // 0x0021FF18: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021FF1C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0021FF20: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0021FF24: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021FF28: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021FF2C: lwc1        $f0, 0x20($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X20);
    // 0x0021FF30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FF34: lwc1        $f1, 0x5D48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D48);
    // 0x0021FF38: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FF3C: nop

    // 0x0021FF40: bc1t        L_0021FF58
    if (c1cs) {
        // 0x0021FF44: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021FF58;
    }
    // 0x0021FF44: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021FF48: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FF4C: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FF50: j           L_0021FF6C
    // 0x0021FF54: nop

        goto L_0021FF6C;
    // 0x0021FF54: nop

L_0021FF58:
    // 0x0021FF58: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021FF5C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FF60: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FF64: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FF68: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_0021FF6C:
    // 0x0021FF6C: lwc1        $f0, 0x24($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X24);
    // 0x0021FF70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FF74: lwc1        $f1, 0x5D4C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D4C);
    // 0x0021FF78: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FF7C: nop

    // 0x0021FF80: bc1tl       L_0021FF98
    if (c1cs) {
        // 0x0021FF84: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_0021FF98;
    }
    goto skip_2;
    // 0x0021FF84: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x0021FF88: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FF8C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0021FF90: j           L_0021FFAC
    // 0x0021FF94: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_0021FFAC;
    // 0x0021FF94: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FF98:
    // 0x0021FF98: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0021FF9C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FFA0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0021FFA4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x0021FFA8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FFAC:
    // 0x0021FFAC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x0021FFB0: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x0021FFB4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021FFB8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0021FFBC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0021FFC0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x0021FFC4: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x0021FFC8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0021FFCC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x0021FFD0: lwc1        $f0, 0x28($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X28);
    // 0x0021FFD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021FFD8: lwc1        $f1, 0x5D50($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D50);
    // 0x0021FFDC: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0021FFE0: nop

    // 0x0021FFE4: bc1t        L_0021FFFC
    if (c1cs) {
        // 0x0021FFE8: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_0021FFFC;
    }
    // 0x0021FFE8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x0021FFEC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0021FFF0: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0021FFF4: j           L_00220014
    // 0x0021FFF8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_00220014;
    // 0x0021FFF8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_0021FFFC:
    // 0x0021FFFC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00220000: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00220004: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00220008: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0022000C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x00220010: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_00220014:
    // 0x00220014: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00220018: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022001C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x00220020: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00220024: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x00220028: lwc1        $f0, 0x30($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X30);
    // 0x0022002C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00220030: lwc1        $f1, 0x5D54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D54);
    // 0x00220034: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00220038: nop

    // 0x0022003C: bc1t        L_00220054
    if (c1cs) {
        // 0x00220040: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_00220054;
    }
    // 0x00220040: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x00220044: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00220048: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x0022004C: j           L_00220068
    // 0x00220050: nop

        goto L_00220068;
    // 0x00220050: nop

L_00220054:
    // 0x00220054: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00220058: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0022005C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00220060: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x00220064: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_00220068:
    // 0x00220068: lwc1        $f0, 0x34($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X34);
    // 0x0022006C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00220070: lwc1        $f1, 0x5D58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D58);
    // 0x00220074: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00220078: nop

    // 0x0022007C: bc1tl       L_00220094
    if (c1cs) {
        // 0x00220080: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00220094;
    }
    goto skip_3;
    // 0x00220080: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_3:
    // 0x00220084: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00220088: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0022008C: j           L_002200A8
    // 0x00220090: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_002200A8;
    // 0x00220090: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_00220094:
    // 0x00220094: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00220098: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0022009C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x002200A0: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x002200A4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_002200A8:
    // 0x002200A8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x002200AC: srl         $v1, $a2, 16
    ctx->r3 = S32(U32(ctx->r6) >> 16);
    // 0x002200B0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002200B4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x002200B8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x002200BC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x002200C0: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x002200C4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x002200C8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x002200CC: lwc1        $f0, 0x38($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X38);
    // 0x002200D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002200D4: lwc1        $f1, 0x5D5C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5D5C);
    // 0x002200D8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002200DC: nop

    // 0x002200E0: bc1t        L_002200F8
    if (c1cs) {
        // 0x002200E4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_002200F8;
    }
    // 0x002200E4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x002200E8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x002200EC: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x002200F0: j           L_00220110
    // 0x002200F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
        goto L_00220110;
    // 0x002200F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_002200F8:
    // 0x002200F8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002200FC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00220100: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00220104: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x00220108: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0022010C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
L_00220110:
    // 0x00220110: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00220114: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00220118: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0022011C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00220120: jr          $ra
    // 0x00220124: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    return;
    // 0x00220124: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
;}
RECOMP_FUNC void func_0029D0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029D0D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029D0D8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0029D0DC: addiu       $a2, $a2, 0x29E0
    ctx->r6 = ADD32(ctx->r6, 0X29E0);
    // 0x0029D0E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029D0E4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x0029D0E8: beq         $a1, $zero, L_0029D180
    if (ctx->r5 == 0) {
        // 0x0029D0EC: nop
    
            goto L_0029D180;
    }
    // 0x0029D0EC: nop

    // 0x0029D0F0: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x0029D0F4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x0029D0F8: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0029D0FC: beq         $v0, $zero, L_0029D180
    if (ctx->r2 == 0) {
        // 0x0029D100: nop
    
            goto L_0029D180;
    }
    // 0x0029D100: nop

    // 0x0029D104: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0029D108: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0029D10C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x0029D110: bne         $v1, $zero, L_0029D11C
    if (ctx->r3 != 0) {
        // 0x0029D114: nop
    
            goto L_0029D11C;
    }
    // 0x0029D114: nop

    // 0x0029D118: break       7
    do_break(2740504);
L_0029D11C:
    // 0x0029D11C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0029D120: bne         $v1, $at, L_0029D134
    if (ctx->r3 != ctx->r1) {
        // 0x0029D124: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0029D134;
    }
    // 0x0029D124: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0029D128: bne         $v0, $at, L_0029D134
    if (ctx->r2 != ctx->r1) {
        // 0x0029D12C: nop
    
            goto L_0029D134;
    }
    // 0x0029D12C: nop

    // 0x0029D130: break       6
    do_break(2740528);
L_0029D134:
    // 0x0029D134: mfhi        $v1
    ctx->r3 = hi;
    // 0x0029D138: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x0029D13C: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x0029D140: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x0029D144: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0029D148: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0029D14C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x0029D150: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x0029D154: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0029D158: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0029D15C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0029D160: beq         $v0, $zero, L_0029D180
    if (ctx->r2 == 0) {
        // 0x0029D164: nop
    
            goto L_0029D180;
    }
    // 0x0029D164: nop

    // 0x0029D168: jal         0x0029C8C8
    // 0x0029D16C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_0029C8C8(rdram, ctx);
        goto after_0;
    // 0x0029D16C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0029D170: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029D174: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029D178: jal         0x0029C878
    // 0x0029D17C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0029C878(rdram, ctx);
        goto after_1;
    // 0x0029D17C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_0029D180:
    // 0x0029D180: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029D184: jr          $ra
    // 0x0029D188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029D188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00258734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00258734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00258738: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025873C: lw          $a0, 0x1A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A8);
    // 0x00258740: jal         0x00248720
    // 0x00258744: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    func_00248720(rdram, ctx);
        goto after_0;
    // 0x00258744: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    after_0:
    // 0x00258748: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025874C: jr          $ra
    // 0x00258750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00258750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026BBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BBB8: jr          $ra
    // 0x0026BBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0026BBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00275F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275F94: div.s       $f21, $f23, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f21.fl = DIV_S(ctx->f23.fl, ctx->f0.fl);
    // 0x00275F98: mul.s       $f5, $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f21.fl);
    // 0x00275F9C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00285A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285A80: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00285A84: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00285A88: sb          $zero, 0x5EA0($at)
    MEM_B(0X5EA0, ctx->r1) = 0;
    // 0x00285A8C: jr          $ra
    // 0x00285A90: nop

    return;
    // 0x00285A90: nop

;}
RECOMP_FUNC void func_004214C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004214C4: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004214C8: addiu       $v1, $v1, 0x970
    ctx->r3 = ADD32(ctx->r3, 0X970);
    // 0x004214CC: lw          $a1, 0x518($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X518);
    // 0x004214D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004214D4: sb          $v0, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r2;
    // 0x004214D8: lhu         $v0, -0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X8);
    // 0x004214DC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x004214E0: lhu         $v0, -0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X6);
    // 0x004214E4: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x004214E8: lhu         $v0, -0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X4);
    // 0x004214EC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x004214F0: lhu         $v0, -0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X2);
    // 0x004214F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004214F8: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x004214FC: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_00421500:
    // 0x00421500: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00421504: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00421508: lbu         $v0, 0x974($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X974);
    // 0x0042150C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00421510: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x00421514: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x00421518: bne         $v0, $zero, L_00421500
    if (ctx->r2 != 0) {
        // 0x0042151C: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_00421500;
    }
    // 0x0042151C: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x00421520: jr          $ra
    // 0x00421524: nop

    return;
    // 0x00421524: nop

;}
RECOMP_FUNC void func_002740E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002740E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x002740EC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x002740F0: addiu       $v1, $a0, 0xB8
    ctx->r3 = ADD32(ctx->r4, 0XB8);
L_002740F4:
    // 0x002740F4: lw          $v0, -0xAC($v1)
    ctx->r2 = MEM_W(ctx->r3, -0XAC);
    // 0x002740F8: beql        $v0, $t0, L_00274130
    if (ctx->r2 == ctx->r8) {
        // 0x002740FC: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00274130;
    }
    goto skip_0;
    // 0x002740FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x00274100: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00274104: lh          $v0, 0x102($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X102);
    // 0x00274108: beql        $v0, $a3, L_00274130
    if (ctx->r2 == ctx->r7) {
        // 0x0027410C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00274130;
    }
    goto skip_1;
    // 0x0027410C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x00274110: lw          $v0, -0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, -0XC);
    // 0x00274114: bnel        $v0, $a1, L_00274130
    if (ctx->r2 != ctx->r5) {
        // 0x00274118: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00274130;
    }
    goto skip_2;
    // 0x00274118: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_2:
    // 0x0027411C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00274120: bnel        $v0, $a2, L_00274130
    if (ctx->r2 != ctx->r6) {
        // 0x00274124: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_00274130;
    }
    goto skip_3;
    // 0x00274124: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_3:
    // 0x00274128: jr          $ra
    // 0x0027412C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    return;
    // 0x0027412C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_00274130:
    // 0x00274130: slti        $v0, $a3, 0x10
    ctx->r2 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x00274134: bne         $v0, $zero, L_002740F4
    if (ctx->r2 != 0) {
        // 0x00274138: addiu       $v1, $v1, 0xCC
        ctx->r3 = ADD32(ctx->r3, 0XCC);
            goto L_002740F4;
    }
    // 0x00274138: addiu       $v1, $v1, 0xCC
    ctx->r3 = ADD32(ctx->r3, 0XCC);
    // 0x0027413C: jr          $ra
    // 0x00274140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00274140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_0041CBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CBCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041CBD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041CBD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0041CBD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041CBDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041CBE0: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CBE4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CBE8: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CBEC: jal         0x0025340C
    // 0x0041CBF0: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CBF0: nop

    after_0:
    // 0x0041CBF4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041CBF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041CBFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041CC00: lhu         $s1, -0x54A6($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A6);
    // 0x0041CC04: jal         0x004160F0
    // 0x0041CC08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041CC08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041CC0C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041CC10: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x0041CC14: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041CC18: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041CC1C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0041CC20: jal         0x0029E3E0
    // 0x0041CC24: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041CC24: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041CC28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041CC2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041CC30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CC34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CC38: jr          $ra
    // 0x0041CC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041CC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00262A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262A1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00262A20: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x00262A24: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00262A28: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00262A2C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00262A30: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x00262A34: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x00262A38: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x00262A3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00262A40: bne         $v1, $v0, L_00262A8C
    if (ctx->r3 != ctx->r2) {
        // 0x00262A44: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00262A8C;
    }
    // 0x00262A44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00262A48: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00262A4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262A50: lwc1        $f20, 0x7B88($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7B88);
    // 0x00262A54: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00262A58: jal         0x002982F0
    // 0x00262A5C: nop

    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x00262A5C: nop

    after_0:
    // 0x00262A60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00262A64: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00262A68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00262A6C: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x00262A70: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x00262A74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00262A78: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
    // 0x00262A7C: jal         0x002974C0
    // 0x00262A80: nop

    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00262A80: nop

    after_1:
    // 0x00262A84: j           L_00262AAC
    // 0x00262A88: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_00262AAC;
    // 0x00262A88: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_00262A8C:
    // 0x00262A8C: lwc1        $f0, 0x98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X98);
    // 0x00262A90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262A94: lwc1        $f12, 0x7B8C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B8C);
    // 0x00262A98: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00262A9C: jal         0x002982F0
    // 0x00262AA0: nop

    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x00262AA0: nop

    after_2:
    // 0x00262AA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00262AA8: swc1        $f0, -0x2874($at)
    MEM_W(-0X2874, ctx->r1) = ctx->f0.u32l;
L_00262AAC:
    // 0x00262AAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00262AB0: lwc1        $f0, -0x2874($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2874);
    // 0x00262AB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262AB8: lwc1        $f12, 0x7B90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B90);
    // 0x00262ABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00262AC0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x00262AC4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x00262AC8: lwc1        $f0, 0x98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X98);
    // 0x00262ACC: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x00262AD0: jal         0x002974C0
    // 0x00262AD4: nop

    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x00262AD4: nop

    after_3:
    // 0x00262AD8: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x00262ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00262AE0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00262AE4: addiu       $a2, $s1, 0x40
    ctx->r6 = ADD32(ctx->r17, 0X40);
    // 0x00262AE8: jal         0x00210F68
    // 0x00262AEC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_00210F68(rdram, ctx);
        goto after_4;
    // 0x00262AEC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x00262AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00262AF4: addiu       $s0, $s1, 0x58
    ctx->r16 = ADD32(ctx->r17, 0X58);
    // 0x00262AF8: jal         0x00211114
    // 0x00262AFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00211114(rdram, ctx);
        goto after_5;
    // 0x00262AFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00262B00: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x00262B04: lw          $a2, 0x38($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X38);
    // 0x00262B08: lw          $a3, 0x3C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X3C);
    // 0x00262B0C: jal         0x0021034C
    // 0x00262B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0021034C(rdram, ctx);
        goto after_6;
    // 0x00262B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00262B14: lui         $a1, 0x469C
    ctx->r5 = S32(0X469C << 16);
    // 0x00262B18: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x00262B1C: jal         0x0020F510
    // 0x00262B20: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    func_0020F510(rdram, ctx);
        goto after_7;
    // 0x00262B20: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    after_7:
    // 0x00262B24: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00262B28: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00262B2C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00262B30: jal         0x00210318
    // 0x00262B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210318(rdram, ctx);
        goto after_8;
    // 0x00262B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00262B38: jal         0x00210C3C
    // 0x00262B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00210C3C(rdram, ctx);
        goto after_9;
    // 0x00262B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00262B40: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00262B44: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00262B48: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x00262B4C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00262B50: jr          $ra
    // 0x00262B54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00262B54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00236A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236A34: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00236A38: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00236A3C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00236A40: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00236A44: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00236A48: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00236A4C: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x00236A50: beq         $s0, $zero, L_00236B64
    if (ctx->r16 == 0) {
        // 0x00236A54: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_00236B64;
    }
    // 0x00236A54: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00236A58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00236A5C: bne         $s0, $v0, L_00236AC0
    if (ctx->r16 != ctx->r2) {
        // 0x00236A60: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00236AC0;
    }
    // 0x00236A60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00236A64: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00236A68: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x00236A6C: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x00236A70: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x00236A74: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x00236A78: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x00236A7C: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x00236A80: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x00236A84: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x00236A88: addiu       $v1, $v1, 0x68
    ctx->r3 = ADD32(ctx->r3, 0X68);
L_00236A8C:
    // 0x00236A8C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x00236A90: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x00236A94: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x00236A98: lw          $t3, 0xC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC);
    // 0x00236A9C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x00236AA0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x00236AA4: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x00236AA8: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x00236AAC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00236AB0: bne         $a0, $v1, L_00236A8C
    if (ctx->r4 != ctx->r3) {
        // 0x00236AB4: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_00236A8C;
    }
    // 0x00236AB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00236AB8: j           L_00236B58
    // 0x00236ABC: sw          $zero, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = 0;
        goto L_00236B58;
    // 0x00236ABC: sw          $zero, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = 0;
L_00236AC0:
    // 0x00236AC0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00236AC4: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00236AC8: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00236ACC: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x00236AD0: jal         0x0020D908
    // 0x00236AD4: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    func_0020D908(rdram, ctx);
        goto after_0;
    // 0x00236AD4: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    after_0:
    // 0x00236AD8: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x00236ADC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00236AE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00236AE4: lwc1        $f0, 0x6534($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6534);
    // 0x00236AE8: beq         $v0, $zero, L_00236AF8
    if (ctx->r2 == 0) {
        // 0x00236AEC: nop
    
            goto L_00236AF8;
    }
    // 0x00236AEC: nop

    // 0x00236AF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00236AF4: lwc1        $f0, 0x6538($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6538);
L_00236AF8:
    // 0x00236AF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00236AFC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00236B00: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00236B04: jal         0x0021034C
    // 0x00236B08: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_1;
    // 0x00236B08: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00236B0C: jal         0x0020F7EC
    // 0x00236B10: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F7EC(rdram, ctx);
        goto after_2;
    // 0x00236B10: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x00236B14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00236B18: jal         0x002101A0
    // 0x00236B1C: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    func_002101A0(rdram, ctx);
        goto after_3;
    // 0x00236B1C: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    after_3:
    // 0x00236B20: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x00236B24: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00236B28: beq         $v0, $zero, L_00236B40
    if (ctx->r2 == 0) {
        // 0x00236B2C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00236B40;
    }
    // 0x00236B2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00236B30: jal         0x002101BC
    // 0x00236B34: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    func_002101BC(rdram, ctx);
        goto after_4;
    // 0x00236B34: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    after_4:
    // 0x00236B38: j           L_00236B58
    // 0x00236B3C: nop

        goto L_00236B58;
    // 0x00236B3C: nop

L_00236B40:
    // 0x00236B40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00236B44: lw          $a1, 0x6D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D1C);
    // 0x00236B48: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x00236B4C: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x00236B50: jal         0x0020D274
    // 0x00236B54: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_0020D274(rdram, ctx);
        goto after_5;
    // 0x00236B54: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_5:
L_00236B58:
    // 0x00236B58: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x00236B5C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00236B60: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
L_00236B64:
    // 0x00236B64: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00236B68: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x00236B6C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00236B70: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00236B74: jr          $ra
    // 0x00236B78: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x00236B78: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_002946D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002946D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x002946D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002946D8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x002946DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x002946E0: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x002946E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002946E8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x002946EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x002946F0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x002946F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x002946F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002946FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00294700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00294704: lw          $s5, 0x14($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X14);
    // 0x00294708: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0029470C: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x00294710: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x00294714: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00294718: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
    // 0x0029471C: sw          $zero, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = 0;
    // 0x00294720: sw          $v0, 0x3C($s4)
    MEM_W(0X3C, ctx->r20) = ctx->r2;
    // 0x00294724: lw          $v1, 0x18($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X18);
    // 0x00294728: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x0029472C: sw          $v0, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r2;
    // 0x00294730: sw          $v1, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r3;
    // 0x00294734: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x00294738: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0029473C: sw          $v0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r2;
    // 0x00294740: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x00294744: jal         0x002912A0
    // 0x00294748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_0;
    // 0x00294748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0029474C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x00294750: jal         0x002954F8
    // 0x00294754: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_002954F8(rdram, ctx);
        goto after_1;
    // 0x00294754: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_1:
    // 0x00294758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029475C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294760: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00294764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00294768: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x0029476C: sw          $s7, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r23;
    // 0x00294770: jal         0x002912A0
    // 0x00294774: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x00294774: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x00294778: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029477C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294780: sw          $v0, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->r2;
    // 0x00294784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00294788: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x0029478C: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x00294790: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00294794: lw          $a3, 0x4($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X4);
    // 0x00294798: jal         0x002912A0
    // 0x0029479C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_3;
    // 0x0029479C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_3:
    // 0x002947A0: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x002947A4: lw          $a2, 0x4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X4);
    // 0x002947A8: jal         0x00295410
    // 0x002947AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00295410(rdram, ctx);
        goto after_4;
    // 0x002947AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002947B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002947B4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002947B8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x002947BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x002947C0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x002947C4: jal         0x002912A0
    // 0x002947C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_5;
    // 0x002947C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x002947CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002947D0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002947D4: sw          $v0, 0x30($s4)
    MEM_W(0X30, ctx->r20) = ctx->r2;
    // 0x002947D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002947DC: lw          $a3, 0x4($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X4);
    // 0x002947E0: jal         0x002912A0
    // 0x002947E4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_6;
    // 0x002947E4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_6:
    // 0x002947E8: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x002947EC: lw          $a2, 0x4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X4);
    // 0x002947F0: jal         0x002953B4
    // 0x002947F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_002953B4(rdram, ctx);
        goto after_7;
    // 0x002947F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_7:
    // 0x002947F8: lbu         $v0, 0x1C($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1C);
    // 0x002947FC: beq         $v0, $zero, L_0029481C
    if (ctx->r2 == 0) {
        // 0x00294800: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_0029481C;
    }
    // 0x00294800: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00294804: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00294808: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0029480C: jal         0x00297420
    // 0x00294810: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_00297420(rdram, ctx);
        goto after_8;
    // 0x00294810: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_8:
    // 0x00294814: j           L_00294830
    // 0x00294818: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00294830;
    // 0x00294818: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0029481C:
    // 0x0029481C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x00294820: lw          $a2, 0x34($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X34);
    // 0x00294824: jal         0x002964A0
    // 0x00294828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002964A0(rdram, ctx);
        goto after_9;
    // 0x00294828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x0029482C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00294830:
    // 0x00294830: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00294834: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x00294838: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x0029483C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x00294840: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x00294844: sw          $zero, 0x14($s4)
    MEM_W(0X14, ctx->r20) = 0;
    // 0x00294848: sw          $zero, 0x18($s4)
    MEM_W(0X18, ctx->r20) = 0;
    // 0x0029484C: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x00294850: sw          $zero, 0x10($s4)
    MEM_W(0X10, ctx->r20) = 0;
    // 0x00294854: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00294858: lw          $a3, 0x4($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X4);
    // 0x0029485C: jal         0x002912A0
    // 0x00294860: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    func_002912A0(rdram, ctx);
        goto after_10;
    // 0x00294860: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    after_10:
    // 0x00294864: lw          $v1, 0x4($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X4);
    // 0x00294868: blez        $v1, L_00294914
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0029486C: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_00294914;
    }
    // 0x0029486C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x00294870: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_00294874:
    // 0x00294874: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00294878: jal         0x002933E0
    // 0x0029487C: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    func_002933E0(rdram, ctx);
        goto after_11;
    // 0x0029487C: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    after_11:
    // 0x00294880: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    // 0x00294884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00294888: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x0029488C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x00294890: lw          $a1, 0x24($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X24);
    // 0x00294894: jal         0x00295304
    // 0x00294898: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_00295304(rdram, ctx);
        goto after_12;
    // 0x00294898: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_12:
    // 0x0029489C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002948A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002948A4: jal         0x0029FB64
    // 0x002948A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0029FB64(rdram, ctx);
        goto after_13;
    // 0x002948A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x002948AC: addiu       $s1, $s2, 0x58
    ctx->r17 = ADD32(ctx->r18, 0X58);
    // 0x002948B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002948B4: jal         0x0029546C
    // 0x002948B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0029546C(rdram, ctx);
        goto after_14;
    // 0x002948B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_14:
    // 0x002948BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002948C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002948C4: jal         0x00296690
    // 0x002948C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00296690(rdram, ctx);
        goto after_15;
    // 0x002948C8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_15:
    // 0x002948CC: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x002948D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002948D4: jal         0x0029553C
    // 0x002948D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_0029553C(rdram, ctx);
        goto after_16;
    // 0x002948D8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_16:
    // 0x002948DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002948E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002948E4: jal         0x00296118
    // 0x002948E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00296118(rdram, ctx);
        goto after_17;
    // 0x002948E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_17:
    // 0x002948EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002948F0: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x002948F4: jal         0x00294E3C
    // 0x002948F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00294E3C(rdram, ctx);
        goto after_18;
    // 0x002948F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_18:
    // 0x002948FC: sw          $s0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r16;
    // 0x00294900: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x00294904: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00294908: bne         $v0, $zero, L_00294874
    if (ctx->r2 != 0) {
        // 0x0029490C: addiu       $s2, $s2, 0xDC
        ctx->r18 = ADD32(ctx->r18, 0XDC);
            goto L_00294874;
    }
    // 0x0029490C: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x00294910: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_00294914:
    // 0x00294914: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00294918: lw          $a2, 0x30($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X30);
    // 0x0029491C: jal         0x002973E0
    // 0x00294920: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    func_002973E0(rdram, ctx);
        goto after_19;
    // 0x00294920: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    after_19:
    // 0x00294924: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00294928: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0029492C: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x00294930: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00294934: lw          $a3, 0x8($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X8);
    // 0x00294938: jal         0x002912A0
    // 0x0029493C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_002912A0(rdram, ctx);
        goto after_20;
    // 0x0029493C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_20:
    // 0x00294940: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
    // 0x00294944: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x00294948: blezl       $v1, L_00294978
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0029494C: sw          $s5, 0x28($s4)
        MEM_W(0X28, ctx->r20) = ctx->r21;
            goto L_00294978;
    }
    goto skip_0;
    // 0x0029494C: sw          $s5, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r21;
    skip_0:
    // 0x00294950: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00294954:
    // 0x00294954: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x00294958: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x0029495C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00294960: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
    // 0x00294964: lw          $v0, 0x8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X8);
    // 0x00294968: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029496C: bne         $v0, $zero, L_00294954
    if (ctx->r2 != 0) {
        // 0x00294970: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_00294954;
    }
    // 0x00294970: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x00294974: sw          $s5, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r21;
L_00294978:
    // 0x00294978: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0029497C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x00294980: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x00294984: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00294988: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0029498C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00294990: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00294994: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00294998: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0029499C: jr          $ra
    // 0x002949A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x002949A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0025F6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F6DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F6E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F6E4: lb          $v1, 0xC7($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F6E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0025F6EC: beq         $v1, $zero, L_0025F6FC
    if (ctx->r3 == 0) {
        // 0x0025F6F0: sb          $v0, 0x133($a1)
        MEM_B(0X133, ctx->r5) = ctx->r2;
            goto L_0025F6FC;
    }
    // 0x0025F6F0: sb          $v0, 0x133($a1)
    MEM_B(0X133, ctx->r5) = ctx->r2;
    // 0x0025F6F4: jal         0x00243414
    // 0x0025F6F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F6F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_0025F6FC:
    // 0x0025F6FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F700: jr          $ra
    // 0x0025F704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0040F240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040F240: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0040F244: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0040F248: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040F24C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x0040F250: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0040F254: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0040F258: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x0040F25C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x0040F260: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x0040F264: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0040F268: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0040F26C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040F270: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0040F274: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0040F278: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0040F27C: bne         $s1, $v0, L_0040F28C
    if (ctx->r17 != ctx->r2) {
        // 0x0040F280: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0040F28C;
    }
    // 0x0040F280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0040F284: j           L_0040F58C
    // 0x0040F288: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
        goto L_0040F58C;
    // 0x0040F288: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
L_0040F28C:
    // 0x0040F28C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F290: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x0040F294: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040F298: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0040F29C: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0040F2A0: jal         0x00204EDC
    // 0x0040F2A4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x0040F2A4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x0040F2A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0040F2AC: beq         $v1, $zero, L_0040F2C0
    if (ctx->r3 == 0) {
        // 0x0040F2B0: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0040F2C0;
    }
    // 0x0040F2B0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0040F2B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0040F2B8: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x0040F2BC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0040F2C0:
    // 0x0040F2C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F2C4: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x0040F2C8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040F2CC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0040F2D0: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0040F2D4: jal         0x00204EDC
    // 0x0040F2D8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_1;
    // 0x0040F2D8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_1:
    // 0x0040F2DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0040F2E0: beq         $v1, $zero, L_0040F2F4
    if (ctx->r3 == 0) {
        // 0x0040F2E4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0040F2F4;
    }
    // 0x0040F2E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0040F2E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0040F2EC: addiu       $s2, $v0, 0x10
    ctx->r18 = ADD32(ctx->r2, 0X10);
    // 0x0040F2F0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0040F2F4:
    // 0x0040F2F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F2F8: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x0040F2FC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0040F300: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0040F304: addiu       $a3, $a3, 0x950
    ctx->r7 = ADD32(ctx->r7, 0X950);
    // 0x0040F308: jal         0x00204EDC
    // 0x0040F30C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_00204EDC(rdram, ctx);
        goto after_2;
    // 0x0040F30C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
    // 0x0040F310: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0040F314: beq         $v1, $zero, L_0040F328
    if (ctx->r3 == 0) {
        // 0x0040F318: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0040F328;
    }
    // 0x0040F318: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0040F31C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0040F320: addiu       $s0, $v0, 0x10
    ctx->r16 = ADD32(ctx->r2, 0X10);
    // 0x0040F324: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_0040F328:
    // 0x0040F328: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0040F32C: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x0040F330: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0040F334: beq         $v0, $zero, L_0040F394
    if (ctx->r2 == 0) {
        // 0x0040F338: addiu       $v0, $s1, -0x1
        ctx->r2 = ADD32(ctx->r17, -0X1);
            goto L_0040F394;
    }
    // 0x0040F338: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
    // 0x0040F33C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x0040F340: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    // 0x0040F344: addiu       $v1, $s6, 0x4
    ctx->r3 = ADD32(ctx->r22, 0X4);
    // 0x0040F348: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0040F34C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040F350: lwc1        $f2, 0x964($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X964);
L_0040F354:
    // 0x0040F354: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0040F358: lwc1        $f1, -0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, -0X4);
    // 0x0040F35C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040F360: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x0040F364: c.eq.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl == ctx->f3.fl;
    // 0x0040F368: nop

    // 0x0040F36C: bc1f        L_0040F37C
    if (!c1cs) {
        // 0x0040F370: swc1        $f0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
            goto L_0040F37C;
    }
    // 0x0040F370: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x0040F374: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x0040F378: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_0040F37C:
    // 0x0040F37C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0040F380: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040F384: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x0040F388: bne         $v0, $zero, L_0040F354
    if (ctx->r2 != 0) {
        // 0x0040F38C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0040F354;
    }
    // 0x0040F38C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0040F390: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
L_0040F394:
    // 0x0040F394: blez        $v0, L_0040F3EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0040F398: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0040F3EC;
    }
    // 0x0040F398: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F39C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0040F3A0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x0040F3A4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x0040F3A8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x0040F3AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040F3B0: lwc1        $f2, 0x968($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X968);
L_0040F3B4:
    // 0x0040F3B4: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0040F3B8: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0040F3BC: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0040F3C0: c.eq.s      $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl == ctx->f3.fl;
    // 0x0040F3C4: nop

    // 0x0040F3C8: bc1f        L_0040F3D8
    if (!c1cs) {
        // 0x0040F3CC: swc1        $f1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_0040F3D8;
    }
    // 0x0040F3CC: swc1        $f1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040F3D0: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x0040F3D4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_0040F3D8:
    // 0x0040F3D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0040F3DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040F3E0: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0040F3E4: bne         $v0, $zero, L_0040F3B4
    if (ctx->r2 != 0) {
        // 0x0040F3E8: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040F3B4;
    }
    // 0x0040F3E8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_0040F3EC:
    // 0x0040F3EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0040F3F0: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    // 0x0040F3F4: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0040F3F8: beql        $v0, $zero, L_0040F464
    if (ctx->r2 == 0) {
        // 0x0040F3FC: addiu       $a3, $s1, -0x2
        ctx->r7 = ADD32(ctx->r17, -0X2);
            goto L_0040F464;
    }
    goto skip_0;
    // 0x0040F3FC: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
    skip_0:
    // 0x0040F400: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040F404: lwc1        $f4, 0x96C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X96C);
    // 0x0040F408: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    // 0x0040F40C: addiu       $v1, $s0, 0x4
    ctx->r3 = ADD32(ctx->r16, 0X4);
    // 0x0040F410: addiu       $a1, $s7, 0x4
    ctx->r5 = ADD32(ctx->r23, 0X4);
L_0040F414:
    // 0x0040F414: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0040F418: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0040F41C: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040F420: lwc1        $f2, -0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, -0X4);
    // 0x0040F424: lwc1        $f3, 0x0($v1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r3, 0X0);
    // 0x0040F428: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x0040F42C: lwc1        $f2, -0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, -0X4);
    // 0x0040F430: div.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x0040F434: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0040F438: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040F43C: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0040F440: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0040F444: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040F448: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0040F44C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0040F450: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x0040F454: bne         $v0, $zero, L_0040F414
    if (ctx->r2 != 0) {
        // 0x0040F458: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_0040F414;
    }
    // 0x0040F458: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0040F45C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x0040F460: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
L_0040F464:
    // 0x0040F464: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0040F468: beq         $v0, $zero, L_0040F4D0
    if (ctx->r2 == 0) {
        // 0x0040F46C: nop
    
            goto L_0040F4D0;
    }
    // 0x0040F46C: nop

    // 0x0040F470: addiu       $v1, $s3, 0x4
    ctx->r3 = ADD32(ctx->r19, 0X4);
    // 0x0040F474: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x0040F478: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
L_0040F47C:
    // 0x0040F47C: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0040F480: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0040F484: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040F488: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0040F48C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0040F490: div.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0040F494: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040F498: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x0040F49C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x0040F4A0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0040F4A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040F4A8: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x0040F4AC: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0040F4B0: lwc1        $f1, 0x4($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X4);
    // 0x0040F4B4: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0040F4B8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0040F4BC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x0040F4C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x0040F4C4: swc1        $f1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040F4C8: bne         $v0, $zero, L_0040F47C
    if (ctx->r2 != 0) {
        // 0x0040F4CC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0040F47C;
    }
    // 0x0040F4CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_0040F4D0:
    // 0x0040F4D0: blez        $s1, L_0040F4F0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x0040F4D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0040F4F0;
    }
    // 0x0040F4D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0040F4D8: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_0040F4DC:
    // 0x0040F4DC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0040F4E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0040F4E4: slt         $v0, $a0, $s1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0040F4E8: bne         $v0, $zero, L_0040F4DC
    if (ctx->r2 != 0) {
        // 0x0040F4EC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_0040F4DC;
    }
    // 0x0040F4EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_0040F4F0:
    // 0x0040F4F0: bne         $s4, $zero, L_0040F550
    if (ctx->r20 != 0) {
        // 0x0040F4F4: nop
    
            goto L_0040F550;
    }
    // 0x0040F4F4: nop

    // 0x0040F4F8: addiu       $a0, $s1, -0x2
    ctx->r4 = ADD32(ctx->r17, -0X2);
    // 0x0040F4FC: blez        $a0, L_0040F550
    if (SIGNED(ctx->r4) <= 0) {
        // 0x0040F500: nop
    
            goto L_0040F550;
    }
    // 0x0040F500: nop

    // 0x0040F504: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0040F508: addu        $a3, $v0, $s5
    ctx->r7 = ADD32(ctx->r2, ctx->r21);
    // 0x0040F50C: addu        $a1, $v0, $s3
    ctx->r5 = ADD32(ctx->r2, ctx->r19);
    // 0x0040F510: addu        $v1, $v0, $s2
    ctx->r3 = ADD32(ctx->r2, ctx->r18);
    // 0x0040F514: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
L_0040F518:
    // 0x0040F518: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x0040F51C: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x0040F520: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040F524: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0040F528: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x0040F52C: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x0040F530: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0040F534: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0040F538: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0040F53C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x0040F540: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0040F544: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x0040F548: bgtz        $a0, L_0040F518
    if (SIGNED(ctx->r4) > 0) {
        // 0x0040F54C: addiu       $a3, $a3, -0x4
        ctx->r7 = ADD32(ctx->r7, -0X4);
            goto L_0040F518;
    }
    // 0x0040F54C: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_0040F550:
    // 0x0040F550: beq         $s3, $zero, L_0040F564
    if (ctx->r19 == 0) {
        // 0x0040F554: nop
    
            goto L_0040F564;
    }
    // 0x0040F554: nop

    // 0x0040F558: lw          $a1, -0x10($s3)
    ctx->r5 = MEM_W(ctx->r19, -0X10);
    // 0x0040F55C: jal         0x002052D8
    // 0x0040F560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0040F560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_0040F564:
    // 0x0040F564: beq         $s2, $zero, L_0040F578
    if (ctx->r18 == 0) {
        // 0x0040F568: nop
    
            goto L_0040F578;
    }
    // 0x0040F568: nop

    // 0x0040F56C: lw          $a1, -0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, -0X10);
    // 0x0040F570: jal         0x002052D8
    // 0x0040F574: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x0040F574: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
L_0040F578:
    // 0x0040F578: beq         $s0, $zero, L_0040F58C
    if (ctx->r16 == 0) {
        // 0x0040F57C: nop
    
            goto L_0040F58C;
    }
    // 0x0040F57C: nop

    // 0x0040F580: lw          $a1, -0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X10);
    // 0x0040F584: jal         0x002052D8
    // 0x0040F588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_5;
    // 0x0040F588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
L_0040F58C:
    // 0x0040F58C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0040F590: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0040F594: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0040F598: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0040F59C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0040F5A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0040F5A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040F5A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040F5AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0040F5B0: jr          $ra
    // 0x0040F5B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0040F5B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0044C3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0025F068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F068: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0025F06C: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0025F070: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025F074: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0025F078: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0025F07C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025F080: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0025F084: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0025F088: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0025F08C: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0025F090: jal         0x00246108
    // 0x0025F094: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0025F094: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_0:
    // 0x0025F098: lbu         $v0, 0x36($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36);
    // 0x0025F09C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F0A0: lwc1        $f0, 0x78C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78C4);
    // 0x0025F0A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025F0A8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025F0AC: beq         $v0, $zero, L_0025F0BC
    if (ctx->r2 == 0) {
        // 0x0025F0B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025F0BC;
    }
    // 0x0025F0B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025F0B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F0B8: lwc1        $f0, 0x78C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78C8);
L_0025F0BC:
    // 0x0025F0BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0025F0C0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0025F0C4: jal         0x00245BAC
    // 0x0025F0C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0025F0C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0025F0CC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0025F0D0: bne         $v0, $zero, L_0025F0E4
    if (ctx->r2 != 0) {
        // 0x0025F0D4: nop
    
            goto L_0025F0E4;
    }
    // 0x0025F0D4: nop

    // 0x0025F0D8: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x0025F0DC: bne         $v0, $s2, L_0025F0FC
    if (ctx->r2 != ctx->r18) {
        // 0x0025F0E0: nop
    
            goto L_0025F0FC;
    }
    // 0x0025F0E0: nop

L_0025F0E4:
    // 0x0025F0E4: jal         0x00284660
    // 0x0025F0E8: addiu       $a0, $s0, 0x94
    ctx->r4 = ADD32(ctx->r16, 0X94);
    func_00284660(rdram, ctx);
        goto after_2;
    // 0x0025F0E8: addiu       $a0, $s0, 0x94
    ctx->r4 = ADD32(ctx->r16, 0X94);
    after_2:
    // 0x0025F0EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025F0F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0025F0F4: jal         0x00243414
    // 0x0025F0F8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0025F0F8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_0025F0FC:
    // 0x0025F0FC: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0025F100: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0025F104: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0025F108: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0025F10C: jr          $ra
    // 0x0025F110: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0025F110: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00254768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254768: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0025476C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00254770: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00254774: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00254778: lbu         $a0, -0x5516($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5516);
    // 0x0025477C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00254780: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00254784: jal         0x00279028
    // 0x00254788: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_00279028(rdram, ctx);
        goto after_0;
    // 0x00254788: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0025478C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00254790: lwc1        $f3, 0x2030($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X2030);
    // 0x00254794: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x00254798: lwc1        $f0, 0x288($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X288);
    // 0x0025479C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002547A0: lwc1        $f4, 0x711C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X711C);
    // 0x002547A4: div.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f0.fl, ctx->f3.fl);
    // 0x002547A8: mul.s       $f7, $f3, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f7.fl = MUL_S(ctx->f3.fl, ctx->f4.fl);
    // 0x002547AC: lwc1        $f5, 0x28C($s0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r16, 0X28C);
    // 0x002547B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x002547B4: lwc1        $f2, 0x2034($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x002547B8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x002547BC: div.s       $f2, $f5, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f5.fl, ctx->f2.fl);
    // 0x002547C0: mul.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x002547C4: lwc1        $f1, 0x290($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X290);
    // 0x002547C8: addiu       $a0, $zero, 0x1FC
    ctx->r4 = ADD32(0, 0X1FC);
    // 0x002547CC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002547D0: lwc1        $f0, 0x294($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X294);
    // 0x002547D4: lwc1        $f6, 0xB60($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XB60);
    // 0x002547D8: add.s       $f0, $f0, $f5
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f5.fl;
    // 0x002547DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002547E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002547E4: add.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f7.fl;
    // 0x002547E8: swc1        $f3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x002547EC: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x002547F0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x002547F4: trunc.w.s   $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    ctx->f8.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x002547F8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x002547FC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00254800: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00254804: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x00254808: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x0025480C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x00254810: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x00254814: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x00254818: jal         0x0027B320
    // 0x0025481C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_0027B320(rdram, ctx);
        goto after_1;
    // 0x0025481C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_1:
    // 0x00254820: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00254824: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00254828: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0025482C: jr          $ra
    // 0x00254830: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00254830: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025EB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EB24: lbu         $v0, 0x36($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X36);
    // 0x0025EB28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EB2C: lwc1        $f0, 0x77F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77F4);
    // 0x0025EB30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025EB34: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025EB38: beq         $v0, $zero, L_0025EB48
    if (ctx->r2 == 0) {
        // 0x0025EB3C: nop
    
            goto L_0025EB48;
    }
    // 0x0025EB3C: nop

    // 0x0025EB40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025EB44: lwc1        $f0, 0x77F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77F8);
L_0025EB48:
    // 0x0025EB48: jr          $ra
    // 0x0025EB4C: nop

    return;
    // 0x0025EB4C: nop

;}
RECOMP_FUNC void func_00423D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423D38: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00423D3C: lw          $v1, 0x9B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9B0);
    // 0x00423D40: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x00423D44: beq         $v0, $zero, L_00423D60
    if (ctx->r2 == 0) {
        // 0x00423D48: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00423D60;
    }
    // 0x00423D48: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00423D4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00423D50: addu        $at, $at, $v0
    gpr jr_addend_00423D58 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00423D54: lw          $v0, 0x16E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X16E8);
    // 0x00423D58: jr          $v0
    // 0x00423D5C: nop

    switch (jr_addend_00423D58 >> 2) {
        case 0: goto L_00423D60; break;
        case 1: goto L_00423D90; break;
        case 2: goto L_00423D90; break;
        case 3: goto L_00423D70; break;
        case 4: goto L_00423D80; break;
        default: switch_error(__func__, 0x00423D58, 0x800C16E8);
    }
    // 0x00423D5C: nop

L_00423D60:
    // 0x00423D60: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D64: addiu       $v0, $v0, 0x5310
    ctx->r2 = ADD32(ctx->r2, 0X5310);
    // 0x00423D68: j           L_00423D9C
    // 0x00423D6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423D9C;
    // 0x00423D6C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423D70:
    // 0x00423D70: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D74: addiu       $v0, $v0, 0x5310
    ctx->r2 = ADD32(ctx->r2, 0X5310);
    // 0x00423D78: j           L_00423D9C
    // 0x00423D7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423D9C;
    // 0x00423D7C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423D80:
    // 0x00423D80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00423D84: addiu       $v0, $v0, 0x5310
    ctx->r2 = ADD32(ctx->r2, 0X5310);
    // 0x00423D88: j           L_00423D9C
    // 0x00423D8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00423D9C;
    // 0x00423D8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00423D90:
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
RECOMP_FUNC void func_00261C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261C38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00261C3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00261C40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00261C44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261C48: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261C4C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x00261C50: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00261C54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261C58: lwc1        $f14, 0x7B14($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B14);
    // 0x00261C5C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00261C60: addiu       $v0, $v0, 0x1B78
    ctx->r2 = ADD32(ctx->r2, 0X1B78);
    // 0x00261C64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00261C68: sw          $v0, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->r2;
    // 0x00261C6C: jal         0x002119FC
    // 0x00261C70: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00261C70: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x00261C74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261C78: lwc1        $f1, 0x7B18($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7B18);
    // 0x00261C7C: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x00261C80: swc1        $f20, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f20.u32l;
    // 0x00261C84: swc1        $f1, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x00261C88: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x00261C8C: swc1        $f20, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f20.u32l;
    // 0x00261C90: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
    // 0x00261C94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00261C98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00261C9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261CA0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00261CA4: jr          $ra
    // 0x00261CA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00261CA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00416BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00416BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00416BB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x00416BB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00416BB8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00416BBC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x00416BC0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x00416BC4: bne         $v1, $v0, L_00416BDC
    if (ctx->r3 != ctx->r2) {
        // 0x00416BC8: nop
    
            goto L_00416BDC;
    }
    // 0x00416BC8: nop

    // 0x00416BCC: jal         0x00413230
    // 0x00416BD0: nop

    func_00413230(rdram, ctx);
        goto after_0;
    // 0x00416BD0: nop

    after_0:
    // 0x00416BD4: j           L_00416BE0
    // 0x00416BD8: nop

        goto L_00416BE0;
    // 0x00416BD8: nop

L_00416BDC:
    // 0x00416BDC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
L_00416BE0:
    // 0x00416BE0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x00416BE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00416BE8: jal         0x004163C0
    // 0x00416BEC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_004163C0(rdram, ctx);
        goto after_1;
    // 0x00416BEC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00416BF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00416BF4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00416BF8: jr          $ra
    // 0x00416BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00416BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00233E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233E18: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x00233E1C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x00233E20: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00233E24: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x00233E28: addiu       $s5, $sp, 0x20
    ctx->r21 = ADD32(ctx->r29, 0X20);
    // 0x00233E2C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00233E30: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x00233E34: addiu       $a1, $s3, 0x10
    ctx->r5 = ADD32(ctx->r19, 0X10);
    // 0x00233E38: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00233E3C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00233E40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00233E44: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00233E48: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00233E4C: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x00233E50: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x00233E54: jal         0x0020EF2C
    // 0x00233E58: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00233E58: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    after_0:
    // 0x00233E5C: jal         0x0020F040
    // 0x00233E60: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_0020F040(rdram, ctx);
        goto after_1;
    // 0x00233E60: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_1:
    // 0x00233E64: addiu       $a0, $s0, 0x18C
    ctx->r4 = ADD32(ctx->r16, 0X18C);
    // 0x00233E68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00233E6C: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x00233E70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00233E74: lwc1        $f0, 0x646C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X646C);
    // 0x00233E78: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x00233E7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00233E80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00233E84: jal         0x0020FAFC
    // 0x00233E88: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0020FAFC(rdram, ctx);
        goto after_2;
    // 0x00233E88: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x00233E8C: lwc1        $f3, 0x30($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x00233E90: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00233E94: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00233E98: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00233E9C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00233EA0: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x00233EA4: mul.s       $f1, $f4, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00233EA8: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00233EAC: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x00233EB0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x00233EB4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00233EB8: add.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f1.fl;
    // 0x00233EBC: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00233EC0: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x00233EC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00233EC8: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00233ECC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00233ED0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x00233ED4: jal         0x0020EF60
    // 0x00233ED8: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x00233ED8: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x00233EDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00233EE0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00233EE4: jal         0x0020EF2C
    // 0x00233EE8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EF2C(rdram, ctx);
        goto after_4;
    // 0x00233EE8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_4:
    // 0x00233EEC: jal         0x0020F040
    // 0x00233EF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0020F040(rdram, ctx);
        goto after_5;
    // 0x00233EF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00233EF4: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x00233EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00233EFC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00233F00: jal         0x0020EFDC
    // 0x00233F04: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020EFDC(rdram, ctx);
        goto after_6;
    // 0x00233F04: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x00233F08: jal         0x0020F040
    // 0x00233F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F040(rdram, ctx);
        goto after_7;
    // 0x00233F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x00233F10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00233F14: lw          $a2, 0x1C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1C);
    // 0x00233F18: jal         0x0020EF60
    // 0x00233F1C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_8;
    // 0x00233F1C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_8:
    // 0x00233F20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00233F24: lw          $a2, 0x20($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X20);
    // 0x00233F28: jal         0x0020EF60
    // 0x00233F2C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_9;
    // 0x00233F2C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_9:
    // 0x00233F30: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00233F34: lw          $a2, 0x24($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X24);
    // 0x00233F38: jal         0x0020EF60
    // 0x00233F3C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_10;
    // 0x00233F3C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_10:
    // 0x00233F40: jal         0x0020F79C
    // 0x00233F44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0020F79C(rdram, ctx);
        goto after_11;
    // 0x00233F44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x00233F48: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x00233F4C: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x00233F50: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00233F54: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x00233F58: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00233F5C: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x00233F60: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x00233F64: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x00233F68: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x00233F6C: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    // 0x00233F70: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x00233F74: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    // 0x00233F78: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x00233F7C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x00233F80: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x00233F84: swc1        $f0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f0.u32l;
    // 0x00233F88: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x00233F8C: swc1        $f0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f0.u32l;
    // 0x00233F90: lwc1        $f0, 0x10($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X10);
    // 0x00233F94: swc1        $f0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f0.u32l;
    // 0x00233F98: lwc1        $f0, 0x14($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X14);
    // 0x00233F9C: swc1        $f0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f0.u32l;
    // 0x00233FA0: lwc1        $f0, 0x18($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X18);
    // 0x00233FA4: swc1        $f0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f0.u32l;
    // 0x00233FA8: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x00233FAC: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x00233FB0: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x00233FB4: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00233FB8: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00233FBC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00233FC0: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00233FC4: jr          $ra
    // 0x00233FC8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00233FC8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0025F3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F3A4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0025F3A8: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0025F3AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025F3B0: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0025F3B4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025F3B8: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    // 0x0025F3BC: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x0025F3C0: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x0025F3C4: lw          $s2, 0x114($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X114);
    // 0x0025F3C8: jal         0x00219F74
    // 0x0025F3CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00219F74(rdram, ctx);
        goto after_0;
    // 0x0025F3CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x0025F3D0: lh          $v1, 0xDC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDC);
    // 0x0025F3D4: bne         $v1, $v0, L_0025F47C
    if (ctx->r3 != ctx->r2) {
        // 0x0025F3D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025F47C;
    }
    // 0x0025F3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F3DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025F3E0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025F3E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0025F3E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025F3EC: jal         0x00246108
    // 0x0025F3F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x0025F3F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x0025F3F4: lbu         $v0, 0x36($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X36);
    // 0x0025F3F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F3FC: lwc1        $f1, 0x78F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X78F0);
    // 0x0025F400: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0025F404: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x0025F408: beq         $v0, $zero, L_0025F418
    if (ctx->r2 == 0) {
        // 0x0025F40C: nop
    
            goto L_0025F418;
    }
    // 0x0025F40C: nop

    // 0x0025F410: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F414: lwc1        $f1, 0x78F4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X78F4);
L_0025F418:
    // 0x0025F418: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F41C: lwc1        $f0, 0x78F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X78F8);
    // 0x0025F420: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F428: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0025F42C: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0025F430: jal         0x00245BAC
    // 0x0025F434: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_2;
    // 0x0025F434: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0025F438: beq         $s2, $zero, L_0025F47C
    if (ctx->r18 == 0) {
        // 0x0025F43C: nop
    
            goto L_0025F47C;
    }
    // 0x0025F43C: nop

    // 0x0025F440: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x0025F444: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F448: lwc1        $f1, 0x78FC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X78FC);
    // 0x0025F44C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0025F450: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0025F454: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025F458: lwc1        $f1, 0xD8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XD8);
    // 0x0025F45C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0025F460: nop

    // 0x0025F464: bc1f        L_0025F47C
    if (!c1cs) {
        // 0x0025F468: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0025F47C;
    }
    // 0x0025F468: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0025F46C: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x0025F470: jal         0x00243414
    // 0x0025F474: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x0025F474: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x0025F478: sw          $zero, 0x114($s1)
    MEM_W(0X114, ctx->r17) = 0;
L_0025F47C:
    // 0x0025F47C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x0025F480: beq         $v0, $zero, L_0025F494
    if (ctx->r2 == 0) {
        // 0x0025F484: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025F494;
    }
    // 0x0025F484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025F48C: jal         0x00243414
    // 0x0025F490: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0025F490: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
L_0025F494:
    // 0x0025F494: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x0025F498: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x0025F49C: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0025F4A0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0025F4A4: jr          $ra
    // 0x0025F4A8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0025F4A8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00414EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00414EA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00414EAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00414EB0: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00414EB4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00414EB8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00414EBC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00414EC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00414EC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00414EC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00414ECC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x00414ED0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00414ED4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x00414ED8: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x00414EDC: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x00414EE0: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x00414EE4: addiu       $v1, $s2, 0x1D8
    ctx->r3 = ADD32(ctx->r18, 0X1D8);
    // 0x00414EE8: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x00414EEC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
    // 0x00414EF0: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x00414EF4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x00414EF8: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x00414EFC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00414F00: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x00414F04: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x00414F08: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00414F0C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x00414F10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00414F14: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00414F18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00414F1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00414F20: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x00414F24: blez        $v0, L_00415014
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00414F28: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00415014;
    }
    // 0x00414F28: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00414F2C: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x00414F30: lui         $t5, 0x180
    ctx->r13 = S32(0X180 << 16);
    // 0x00414F34: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x00414F38: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x00414F3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x00414F40: addu        $t0, $s1, $zero
    ctx->r8 = ADD32(ctx->r17, 0);
    // 0x00414F44: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_00414F48:
    // 0x00414F48: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x00414F4C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00414F50: addu        $a0, $a2, $v0
    ctx->r4 = ADD32(ctx->r6, ctx->r2);
    // 0x00414F54: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x00414F58: sw          $s1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r17;
    // 0x00414F5C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00414F60: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x00414F64: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00414F68: or          $v0, $v0, $t5
    ctx->r2 = ctx->r2 | ctx->r13;
    // 0x00414F6C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00414F70: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x00414F74: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x00414F78: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x00414F7C: sh          $v0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r2;
    // 0x00414F80: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x00414F84: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
    // 0x00414F88: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x00414F8C: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x00414F90: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x00414F94: sb          $v0, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r2;
    // 0x00414F98: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x00414F9C: sb          $v0, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r2;
    // 0x00414FA0: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x00414FA4: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x00414FA8: sw          $t4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r12;
    // 0x00414FAC: sw          $s2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r18;
    // 0x00414FB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00414FB4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00414FB8: bne         $v0, $t2, L_00414FC4
    if (ctx->r2 != ctx->r10) {
        // 0x00414FBC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00414FC4;
    }
    // 0x00414FBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00414FC0: addiu       $a1, $zero, 0x330
    ctx->r5 = ADD32(0, 0X330);
L_00414FC4:
    // 0x00414FC4: beql        $a1, $zero, L_00415000
    if (ctx->r5 == 0) {
        // 0x00414FC8: addiu       $t0, $t0, 0x24
        ctx->r8 = ADD32(ctx->r8, 0X24);
            goto L_00415000;
    }
    goto skip_0;
    // 0x00414FC8: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    skip_0:
    // 0x00414FCC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x00414FD0: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    // 0x00414FD4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00414FD8: beql        $v0, $t2, L_00414FE0
    if (ctx->r2 == ctx->r10) {
        // 0x00414FDC: sw          $t3, 0x328($a1)
        MEM_W(0X328, ctx->r5) = ctx->r11;
            goto L_00414FE0;
    }
    goto skip_1;
    // 0x00414FDC: sw          $t3, 0x328($a1)
    MEM_W(0X328, ctx->r5) = ctx->r11;
    skip_1:
L_00414FE0:
    // 0x00414FE0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x00414FE4: bne         $v0, $t2, L_00414FF0
    if (ctx->r2 != ctx->r10) {
        // 0x00414FE8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00414FF0;
    }
    // 0x00414FE8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00414FEC: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_00414FF0:
    // 0x00414FF0: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x00414FF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00414FF8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x00414FFC: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
L_00415000:
    // 0x00415000: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x00415004: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00415008: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041500C: bne         $v0, $zero, L_00414F48
    if (ctx->r2 != 0) {
        // 0x00415010: addiu       $a2, $a2, 0x28
        ctx->r6 = ADD32(ctx->r6, 0X28);
            goto L_00414F48;
    }
    // 0x00415010: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
L_00415014:
    // 0x00415014: sw          $s0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r16;
    // 0x00415018: sw          $a3, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r7;
    // 0x0041501C: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x00415020: sw          $s3, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r19;
    // 0x00415024: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x00415028: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x0041502C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00415030: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    // 0x00415034: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x00415038: lhu         $v1, 0x14($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X14);
    // 0x0041503C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00415040: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
    // 0x00415044: sw          $zero, 0x30($s2)
    MEM_W(0X30, ctx->r18) = 0;
    // 0x00415048: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x0041504C: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x00415050: sw          $zero, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = 0;
    // 0x00415054: jal         0x00416B28
    // 0x00415058: sh          $v1, 0x2A($s2)
    MEM_H(0X2A, ctx->r18) = ctx->r3;
    func_00416B28(rdram, ctx);
        goto after_0;
    // 0x00415058: sh          $v1, 0x2A($s2)
    MEM_H(0X2A, ctx->r18) = ctx->r3;
    after_0:
    // 0x0041505C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00415060: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00415064: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x00415068: sw          $s5, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r21;
    // 0x0041506C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_00415070:
    // 0x00415070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00415074: sll         $a1, $a2, 7
    ctx->r5 = S32(ctx->r6 << 7);
L_00415078:
    // 0x00415078: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041507C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00415080: lhu         $v0, 0x1CD2($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1CD2);
    // 0x00415084: addu        $v1, $s2, $a1
    ctx->r3 = ADD32(ctx->r18, ctx->r5);
    // 0x00415088: sh          $v0, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r2;
    // 0x0041508C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00415090: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00415094: lhu         $v0, 0x1CD6($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1CD6);
    // 0x00415098: sh          $v0, 0x4A($v1)
    MEM_H(0X4A, ctx->r3) = ctx->r2;
    // 0x0041509C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004150A0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004150A4: lhu         $v0, 0x1CDA($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1CDA);
    // 0x004150A8: sh          $v0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r2;
    // 0x004150AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004150B0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004150B4: lbu         $v0, 0x1CDF($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1CDF);
    // 0x004150B8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x004150BC: sb          $v0, 0x54($v1)
    MEM_B(0X54, ctx->r3) = ctx->r2;
    // 0x004150C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004150C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004150C8: lbu         $v0, 0x1CE3($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1CE3);
    // 0x004150CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x004150D0: sb          $v0, 0x55($v1)
    MEM_B(0X55, ctx->r3) = ctx->r2;
    // 0x004150D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004150D8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004150DC: lbu         $v0, 0x1CE7($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1CE7);
    // 0x004150E0: sb          $a3, 0x57($v1)
    MEM_B(0X57, ctx->r3) = ctx->r7;
    // 0x004150E4: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
    // 0x004150E8: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x004150EC: sb          $v0, 0x56($v1)
    MEM_B(0X56, ctx->r3) = ctx->r2;
    // 0x004150F0: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x004150F4: bne         $v0, $zero, L_00415078
    if (ctx->r2 != 0) {
        // 0x004150F8: addiu       $a0, $a0, 0x18
        ctx->r4 = ADD32(ctx->r4, 0X18);
            goto L_00415078;
    }
    // 0x004150F8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x004150FC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x00415100: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x00415104: bne         $v0, $zero, L_00415070
    if (ctx->r2 != 0) {
        // 0x00415108: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00415070;
    }
    // 0x00415108: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0041510C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00415110: sw          $zero, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = 0;
    // 0x00415114: sw          $zero, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = 0;
    // 0x00415118: jal         0x00416C00
    // 0x0041511C: sw          $zero, 0xBC($s3)
    MEM_W(0XBC, ctx->r19) = 0;
    func_00416C00(rdram, ctx);
        goto after_1;
    // 0x0041511C: sw          $zero, 0xBC($s3)
    MEM_W(0XBC, ctx->r19) = 0;
    after_1:
    // 0x00415120: jal         0x00416C0C
    // 0x00415124: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00416C0C(rdram, ctx);
        goto after_2;
    // 0x00415124: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00415128: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x0041512C: beq         $v1, $zero, L_0041513C
    if (ctx->r3 == 0) {
        // 0x00415130: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0041513C;
    }
    // 0x00415130: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        turok2_patch_jalr_abi_diag_v1(rdram, ctx);

    // 0x00415134: jalr        $v1
    // 0x00415138: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x00415138: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_3:
L_0041513C:
        turok2_patch_jalr_done(rdram, ctx);

    // 0x0041513C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00415140: lw          $s1, 0x10($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X10);
    // 0x00415144: lw          $s0, 0xC($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XC);
    // 0x00415148: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x0041514C: beq         $s1, $v0, L_00415190
    if (ctx->r17 == ctx->r2) {
        // 0x00415150: lui         $s4, 0x400
        ctx->r20 = S32(0X400 << 16);
            goto L_00415190;
    }
    // 0x00415150: lui         $s4, 0x400
    ctx->r20 = S32(0X400 << 16);
    // 0x00415154: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_00415158:
    // 0x00415158: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0041515C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00415160: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x00415164: beql        $v0, $zero, L_00415188
    if (ctx->r2 == 0) {
        // 0x00415168: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_00415188;
    }
    goto skip_2;
    // 0x00415168: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_2:
    // 0x0041516C: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x00415170: beq         $v0, $zero, L_00415184
    if (ctx->r2 == 0) {
        // 0x00415174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00415184;
    }
    // 0x00415174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00415178: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
        turok2_patch_jalr_abi_diag_v0(rdram, ctx);

    // 0x0041517C: jalr        $v0
    // 0x00415180: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x00415180: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
L_00415184:
        turok2_patch_jalr_done(rdram, ctx);

    // 0x00415184: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_00415188:
    // 0x00415188: bne         $s1, $s3, L_00415158
    if (ctx->r17 != ctx->r19) {
        // 0x0041518C: addiu       $s0, $s0, 0x28
        ctx->r16 = ADD32(ctx->r16, 0X28);
            goto L_00415158;
    }
    // 0x0041518C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
L_00415190:
    // 0x00415190: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00415194: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00415198: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0041519C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x004151A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x004151A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004151A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004151AC: jr          $ra
    // 0x004151B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004151B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00455DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00455DA8: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x00455DAC: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x00455DB0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00455DB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00455DB8: jr          $ra
    // 0x00455DBC: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
    return;
    // 0x00455DBC: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00466034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00466034: jr          $ra
    // 0x00466038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00466038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025EC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EC28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0025EC2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025EC30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025EC34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025EC38: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025EC3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0025EC40: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0025EC44: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0025EC48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025EC4C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025EC50: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0025EC54: sw          $zero, 0x254($s0)
    MEM_W(0X254, ctx->r16) = 0;
    // 0x0025EC58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025EC5C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0025EC60: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025EC64: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0025EC68: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025EC6C: addiu       $v0, $v0, -0x4580
    ctx->r2 = ADD32(ctx->r2, -0X4580);
    // 0x0025EC70: sw          $v0, 0xF4($s1)
    MEM_W(0XF4, ctx->r17) = ctx->r2;
    // 0x0025EC74: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x0025EC78: addiu       $v0, $v0, -0x3FE8
    ctx->r2 = ADD32(ctx->r2, -0X3FE8);
    // 0x0025EC7C: sw          $v0, 0x104($s1)
    MEM_W(0X104, ctx->r17) = ctx->r2;
    // 0x0025EC80: lw          $t0, 0xBD0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XBD0);
    // 0x0025EC84: lw          $t1, 0xBD4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XBD4);
    // 0x0025EC88: lw          $t2, 0xBD8($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XBD8);
    // 0x0025EC8C: sw          $t0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r8;
    // 0x0025EC90: sw          $t1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r9;
    // 0x0025EC94: sw          $t2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r10;
    // 0x0025EC98: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x0025EC9C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x0025ECA0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0025ECA4: jal         0x00243414
    // 0x0025ECA8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025ECA8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_0:
    // 0x0025ECAC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0025ECB0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0025ECB4: lw          $a2, 0xBB4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XBB4);
    // 0x0025ECB8: lh          $a3, 0xC4($s1)
    ctx->r7 = MEM_H(ctx->r17, 0XC4);
    // 0x0025ECBC: jal         0x002241D8
    // 0x0025ECC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002241D8(rdram, ctx);
        goto after_1;
    // 0x0025ECC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0025ECC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025ECC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0025ECCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0025ECD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0025ECD4: jr          $ra
    // 0x0025ECD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025ECD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00270550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00270550: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00270554: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00270558: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0027055C: lui         $a0, 0x3E
    ctx->r4 = S32(0X3E << 16);
    // 0x00270560: ori         $a0, $a0, 0xA7A0
    ctx->r4 = ctx->r4 | 0XA7A0;
    // 0x00270564: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00270568: lui         $a2, 0xBE
    ctx->r6 = S32(0XBE << 16);
    // 0x0027056C: ori         $a2, $a2, 0x1814
    ctx->r6 = ctx->r6 | 0X1814;
    // 0x00270570: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00270574: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00270578: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027057C: jal         0x0028E60C
    // 0x00270580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0028E60C(rdram, ctx);
        goto after_0;
    // 0x00270580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00270584: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00270588: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027058C: jal         0x002017D4
    // 0x00270590: sw          $a0, 0x2B48($s2)
    MEM_W(0X2B48, ctx->r18) = ctx->r4;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00270590: sw          $a0, 0x2B48($s2)
    MEM_W(0X2B48, ctx->r18) = ctx->r4;
    after_1:
    // 0x00270594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00270598: lw          $a0, 0x2B48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2B48);
    // 0x0027059C: jal         0x002017D4
    // 0x002705A0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x002705A0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_2:
    // 0x002705A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002705A8: jal         0x002017D4
    // 0x002705AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x002705AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x002705B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002705B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x002705B8: jal         0x002017D4
    // 0x002705BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x002705BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002705C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002705C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002705C8: jal         0x002017D4
    // 0x002705CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002705CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x002705D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002705D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x002705D8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x002705DC: sw          $v0, 0x2B4C($s2)
    MEM_W(0X2B4C, ctx->r18) = ctx->r2;
    // 0x002705E0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002705E4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x002705E8: sw          $s1, 0x2B58($s2)
    MEM_W(0X2B58, ctx->r18) = ctx->r17;
    // 0x002705EC: sw          $s0, 0x2B5C($s2)
    MEM_W(0X2B5C, ctx->r18) = ctx->r16;
    // 0x002705F0: jal         0x002017D4
    // 0x002705F4: sw          $v0, 0x2B54($s2)
    MEM_W(0X2B54, ctx->r18) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x002705F4: sw          $v0, 0x2B54($s2)
    MEM_W(0X2B54, ctx->r18) = ctx->r2;
    after_6:
    // 0x002705F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002705FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00270600: jal         0x002017D4
    // 0x00270604: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_7;
    // 0x00270604: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00270608: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0027060C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00270610: jal         0x002017D4
    // 0x00270614: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x00270614: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_8:
    // 0x00270618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0027061C: lw          $a0, 0x2B48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2B48);
    // 0x00270620: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x00270624: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x00270628: sw          $s0, 0x2B70($s2)
    MEM_W(0X2B70, ctx->r18) = ctx->r16;
    // 0x0027062C: sw          $v1, 0x2B7C($s2)
    MEM_W(0X2B7C, ctx->r18) = ctx->r3;
    // 0x00270630: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00270634: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00270638: sw          $s1, 0x2B74($s2)
    MEM_W(0X2B74, ctx->r18) = ctx->r17;
    // 0x0027063C: sw          $v1, 0x2B80($s2)
    MEM_W(0X2B80, ctx->r18) = ctx->r3;
    // 0x00270640: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x00270644: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00270648: sw          $v0, 0x2B78($s2)
    MEM_W(0X2B78, ctx->r18) = ctx->r2;
    // 0x0027064C: jal         0x002017D4
    // 0x00270650: sw          $v1, 0x2B84($s2)
    MEM_W(0X2B84, ctx->r18) = ctx->r3;
    func_002017D4(rdram, ctx);
        goto after_9;
    // 0x00270650: sw          $v1, 0x2B84($s2)
    MEM_W(0X2B84, ctx->r18) = ctx->r3;
    after_9:
    // 0x00270654: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00270658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0027065C: jal         0x002017D4
    // 0x00270660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00270660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x00270664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00270668: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x0027066C: sw          $v1, 0x2B60($s2)
    MEM_W(0X2B60, ctx->r18) = ctx->r3;
    // 0x00270670: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00270674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00270678: jal         0x002017D4
    // 0x0027067C: sw          $v0, 0x2B64($s2)
    MEM_W(0X2B64, ctx->r18) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x0027067C: sw          $v0, 0x2B64($s2)
    MEM_W(0X2B64, ctx->r18) = ctx->r2;
    after_11:
    // 0x00270680: sw          $v0, 0x2B50($s2)
    MEM_W(0X2B50, ctx->r18) = ctx->r2;
    // 0x00270684: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00270688: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0027068C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00270690: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00270694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00270698: jr          $ra
    // 0x0027069C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0027069C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002812CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002812CC: lui         $a3, 0xDA38
    ctx->r7 = S32(0XDA38 << 16);
    // 0x002812D0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x002812D4: addiu       $a1, $a1, -0x71DC
    ctx->r5 = ADD32(ctx->r5, -0X71DC);
    // 0x002812D8: ori         $a3, $a3, 0x7
    ctx->r7 = ctx->r7 | 0X7;
    // 0x002812DC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x002812E0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002812E4: lw          $v1, 0x6D1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D1C);
    // 0x002812E8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x002812EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002812F0: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x002812F4: addiu       $v1, $v1, 0x430
    ctx->r3 = ADD32(ctx->r3, 0X430);
    // 0x002812F8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x002812FC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x00281300: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x00281304: jr          $ra
    // 0x00281308: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    return;
    // 0x00281308: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_00205B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205B94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00205B98: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00205B9C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00205BA0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00205BA4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00205BA8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00205BAC: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00205BB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205BB4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00205BB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00205BBC: addiu       $a3, $zero, 0x1B
    ctx->r7 = ADD32(0, 0X1B);
    // 0x00205BC0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00205BC4: addiu       $v0, $v0, 0x51E0
    ctx->r2 = ADD32(ctx->r2, 0X51E0);
    // 0x00205BC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00205BCC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00205BD0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00205BD4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00205BD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00205BDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00205BE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00205BE4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00205BE8: jal         0x0020367C
    // 0x00205BEC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00205BEC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x00205BF0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00205BF4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00205BF8: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x00205BFC: jal         0x0029DFF0
    // 0x00205C00: nop

    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x00205C00: nop

    after_1:
    // 0x00205C04: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205C08: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205C0C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x00205C10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205C14: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205C18: beq         $v1, $s0, L_00205C44
    if (ctx->r3 == ctx->r16) {
        // 0x00205C1C: nop
    
            goto L_00205C44;
    }
    // 0x00205C1C: nop

    // 0x00205C20: jal         0x0029E010
    // 0x00205C24: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x00205C24: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00205C28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205C2C: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205C30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205C34: jal         0x0029B6F0
    // 0x00205C38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00205C38: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00205C3C: j           L_00205C50
    // 0x00205C40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00205C50;
    // 0x00205C40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205C44:
    // 0x00205C44: jal         0x0029E010
    // 0x00205C48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x00205C48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00205C4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205C50:
    // 0x00205C50: jal         0x002061B8
    // 0x00205C54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002061B8(rdram, ctx);
        goto after_5;
    // 0x00205C54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x00205C58: jal         0x0029DFF0
    // 0x00205C5C: nop

    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x00205C5C: nop

    after_6:
    // 0x00205C60: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205C64: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205C68: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00205C6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205C70: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205C74: beq         $v1, $zero, L_00205CA0
    if (ctx->r3 == 0) {
        // 0x00205C78: nop
    
            goto L_00205CA0;
    }
    // 0x00205C78: nop

    // 0x00205C7C: jal         0x0029E010
    // 0x00205C80: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00205C80: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00205C84: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205C88: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205C8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205C90: jal         0x0029B820
    // 0x00205C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x00205C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x00205C98: j           L_00205CAC
    // 0x00205C9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00205CAC;
    // 0x00205C9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205CA0:
    // 0x00205CA0: jal         0x0029E010
    // 0x00205CA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x00205CA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x00205CA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205CAC:
    // 0x00205CAC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00205CB0: sll         $a2, $s2, 2
    ctx->r6 = S32(ctx->r18 << 2);
    // 0x00205CB4: addiu       $a2, $a2, 0xF
    ctx->r6 = ADD32(ctx->r6, 0XF);
    // 0x00205CB8: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x00205CBC: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x00205CC0: addiu       $a3, $zero, 0x1B
    ctx->r7 = ADD32(0, 0X1B);
    // 0x00205CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205CC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00205CCC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00205CD0: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x00205CD4: jal         0x0020367C
    // 0x00205CD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_10;
    // 0x00205CD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_10:
    // 0x00205CDC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00205CE0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00205CE4: sw          $v1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r3;
    // 0x00205CE8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00205CEC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00205CF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00205CF4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00205CF8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00205CFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00205D00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00205D04: jr          $ra
    // 0x00205D08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00205D08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_002565DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002565DC: lwc1        $f1, 0xAC0($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XAC0);
    // 0x002565E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002565E4: lwc1        $f0, 0x71E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71E0);
    // 0x002565E8: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002565EC: nop

    // 0x002565F0: bc1t        L_002565FC
    if (c1cs) {
        // 0x002565F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002565FC;
    }
    // 0x002565F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002565F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_002565FC:
    // 0x002565FC: jr          $ra
    // 0x00256600: nop

    return;
    // 0x00256600: nop

;}
RECOMP_FUNC void func_00299F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00260FC0:
    // 0x00299F84: bc1f        L_00299FAC
    if (!c1cs) {
        // 0x00299F88: nop
    
            goto L_00299FAC;
    }
    // 0x00299F88: nop

    // 0x00299F8C: j           L_00260FC0
    // 0x00299F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    entry_00260FC0(rdram, ctx);
    return;
    // 0x00299F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00299F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00299F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00299F9C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00299FA0: addiu       $s0, $s0, 0x1678
    ctx->r16 = ADD32(ctx->r16, 0X1678);
    // 0x00299FA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299FA8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
L_00299FAC:
    // 0x00299FAC: addiu       $a1, $a1, 0x1670
    ctx->r5 = ADD32(ctx->r5, 0X1670);
    // 0x00299FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00299FB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00299FB8: sw          $v0, 0x7A50($at)
    MEM_W(0X7A50, ctx->r1) = ctx->r2;
    // 0x00299FBC: jal         0x0029B030
    // 0x00299FC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x00299FC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00299FC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00299FC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00299FCC: jal         0x0029B820
    // 0x00299FD0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x00299FD0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_1:
    // 0x00299FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00299FD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00299FDC: jr          $ra
    // 0x00299FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00299FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042704C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042704C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
L_00427050:
    // 0x00427050: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00427054: bne         $v0, $zero, L_00427050
    if (ctx->r2 != 0) {
        // 0x00427058: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00427050;
    }
    // 0x00427058: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042705C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00427060: beq         $a0, $a3, L_00427084
    if (ctx->r4 == ctx->r7) {
        // 0x00427064: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00427084;
    }
    // 0x00427064: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00427068: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
L_0042706C:
    // 0x0042706C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00427070: beq         $v0, $a2, L_00427084
    if (ctx->r2 == ctx->r6) {
        // 0x00427074: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_00427084;
    }
    // 0x00427074: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00427078: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0042707C: bne         $a0, $a3, L_0042706C
    if (ctx->r4 != ctx->r7) {
        // 0x00427080: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0042706C;
    }
    // 0x00427080: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_00427084:
    // 0x00427084: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x00427088: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x0042708C: bnel        $a0, $v1, L_00427094
    if (ctx->r4 != ctx->r3) {
        // 0x00427090: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00427094;
    }
    goto skip_0;
    // 0x00427090: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00427094:
    // 0x00427094: jr          $ra
    // 0x00427098: nop

    return;
    // 0x00427098: nop

;}
RECOMP_FUNC void func_00275A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00275A78: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00275A7C: addiu       $a0, $a0, 0x2A00
    ctx->r4 = ADD32(ctx->r4, 0X2A00);
    // 0x00275A80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00275A84: jal         0x00271A8C
    // 0x00275A88: nop

    func_00271A8C(rdram, ctx);
        goto after_0;
    // 0x00275A88: nop

    after_0:
    // 0x00275A8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00275A90: jr          $ra
    // 0x00275A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00275A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028ED10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028ED10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028ED14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028ED18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028ED1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0028ED20: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x0028ED24: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x0028ED28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028ED2C: bne         $v1, $v0, L_0028EDBC
    if (ctx->r3 != ctx->r2) {
        // 0x0028ED30: nop
    
            goto L_0028EDBC;
    }
    // 0x0028ED30: nop

    // 0x0028ED34: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0028ED38: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x0028ED3C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028ED40: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028ED44: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0028ED48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028ED4C: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028ED50: bnel        $v0, $zero, L_0028ED58
    if (ctx->r2 != 0) {
        // 0x0028ED54: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_0028ED58;
    }
    goto skip_0;
    // 0x0028ED54: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    skip_0:
L_0028ED58:
    // 0x0028ED58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028ED5C: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1290);
    // 0x0028ED60: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028ED64: sw          $v1, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r3;
    // 0x0028ED68: bne         $v0, $zero, L_0028ED78
    if (ctx->r2 != 0) {
        // 0x0028ED6C: nop
    
            goto L_0028ED78;
    }
    // 0x0028ED6C: nop

    // 0x0028ED70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028ED74: sw          $v1, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r3;
L_0028ED78:
    // 0x0028ED78: lh          $a0, 0xC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC);
    // 0x0028ED7C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0028ED80: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x0028ED84: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x0028ED88: lbu         $a2, 0x17($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X17);
    // 0x0028ED8C: jal         0x0028DBAC
    // 0x0028ED90: nop

    func_0028DBAC(rdram, ctx);
        goto after_0;
    // 0x0028ED90: nop

    after_0:
    // 0x0028ED94: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x0028ED98: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x0028ED9C: jal         0x0029E030
    // 0x0028EDA0: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    func_0029E030(rdram, ctx);
        goto after_1;
    // 0x0028EDA0: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    after_1:
    // 0x0028EDA4: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x0028EDA8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x0028EDAC: jal         0x0029E0D0
    // 0x0028EDB0: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    func_0029E0D0(rdram, ctx);
        goto after_2;
    // 0x0028EDB0: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    after_2:
    // 0x0028EDB4: j           L_0028EE00
    // 0x0028EDB8: nop

        goto L_0028EE00;
    // 0x0028EDB8: nop

L_0028EDBC:
    // 0x0028EDBC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x0028EDC0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0028EDC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028EDC8: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1290);
    // 0x0028EDCC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0028EDD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028EDD4: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1290);
    // 0x0028EDD8: bnel        $v0, $zero, L_0028EDE0
    if (ctx->r2 != 0) {
        // 0x0028EDDC: sw          $v1, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r3;
            goto L_0028EDE0;
    }
    goto skip_1;
    // 0x0028EDDC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    skip_1:
L_0028EDE0:
    // 0x0028EDE0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028EDE4: lw          $v0, 0x1294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1294);
    // 0x0028EDE8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028EDEC: sw          $v1, 0x1290($at)
    MEM_W(0X1290, ctx->r1) = ctx->r3;
    // 0x0028EDF0: bne         $v0, $zero, L_0028EE00
    if (ctx->r2 != 0) {
        // 0x0028EDF4: nop
    
            goto L_0028EE00;
    }
    // 0x0028EDF4: nop

    // 0x0028EDF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028EDFC: sw          $v1, 0x1294($at)
    MEM_W(0X1294, ctx->r1) = ctx->r3;
L_0028EE00:
    // 0x0028EE00: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0028EE04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0028EE08: sh          $v0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r2;
    // 0x0028EE0C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0028EE10: jal         0x0029BB10
    // 0x0028EE14: nop

    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x0028EE14: nop

    after_3:
    // 0x0028EE18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028EE1C: addiu       $a0, $a0, 0x1140
    ctx->r4 = ADD32(ctx->r4, 0X1140);
    // 0x0028EE20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028EE24: jal         0x0029B820
    // 0x0028EE28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x0028EE28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x0028EE2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0028EE30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028EE34: jr          $ra
    // 0x0028EE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028EE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00224F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00224F84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00224F88: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00224F8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00224F90: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    // 0x00224F94: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00224F98: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00224F9C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00224FA0: beq         $v0, $zero, L_00224FB4
    if (ctx->r2 == 0) {
        // 0x00224FA4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00224FB4;
    }
    // 0x00224FA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00224FA8: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x00224FAC: jal         0x00201848
    // 0x00224FB0: nop

    func_00201848(rdram, ctx);
        goto after_0;
    // 0x00224FB0: nop

    after_0:
L_00224FB4:
    // 0x00224FB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00224FB8: jr          $ra
    // 0x00224FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00224FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0041B2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B2F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B2F8: lw          $v0, -0x5524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5524);
    // 0x0041B2FC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0041B300: beq         $v0, $zero, L_0041B314
    if (ctx->r2 == 0) {
        // 0x0041B304: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_0041B314;
    }
    // 0x0041B304: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041B308: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B30C: j           L_0041B324
    // 0x0041B310: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_0041B324;
    // 0x0041B310: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_0041B314:
    // 0x0041B314: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B318: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B31C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B320: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_0041B324:
    // 0x0041B324: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B328: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B32C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B330: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0041B334: beq         $v0, $zero, L_0041B34C
    if (ctx->r2 == 0) {
        // 0x0041B338: nop
    
            goto L_0041B34C;
    }
    // 0x0041B338: nop

    // 0x0041B33C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B340: addiu       $v0, $v0, 0x581C
    ctx->r2 = ADD32(ctx->r2, 0X581C);
    // 0x0041B344: j           L_0041B358
    // 0x0041B348: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B358;
    // 0x0041B348: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B34C:
    // 0x0041B34C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B350: addiu       $v0, $v0, 0x5838
    ctx->r2 = ADD32(ctx->r2, 0X5838);
    // 0x0041B354: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B358:
    // 0x0041B358: jr          $ra
    // 0x0041B35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002943D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002943D0: jr          $ra
    // 0x002943D4: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
    return;
    // 0x002943D4: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void func_00219BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00219BC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00219BC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00219BC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00219BCC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x00219BD0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00219BD4: lui         $v1, 0xFFFB
    ctx->r3 = S32(0XFFFB << 16);
    // 0x00219BD8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00219BDC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00219BE0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00219BE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00219BE8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00219BEC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00219BF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00219BF4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00219BF8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x00219BFC: bne         $a3, $s1, L_00219C20
    if (ctx->r7 != ctx->r17) {
        // 0x00219C00: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_00219C20;
    }
    // 0x00219C00: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00219C04: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00219C08: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00219C0C: jal         0x00224180
    // 0x00219C10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00224180(rdram, ctx);
        goto after_0;
    // 0x00219C10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00219C14: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00219C18: beq         $a3, $s1, L_00219F58
    if (ctx->r7 == ctx->r17) {
        // 0x00219C1C: nop
    
            goto L_00219F58;
    }
    // 0x00219C1C: nop

L_00219C20:
    // 0x00219C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00219C24: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00219C28: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00219C2C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00219C30: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x00219C34: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x00219C38: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x00219C3C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x00219C40: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x00219C44: sh          $a3, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r7;
    // 0x00219C48: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x00219C4C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00219C50: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x00219C54: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x00219C58: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00219C5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00219C60: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x00219C64: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00219C68: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x00219C6C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00219C70: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00219C74: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x00219C78: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x00219C7C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x00219C80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00219C84: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00219C88: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00219C8C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x00219C90: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x00219C94: sw          $t0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r8;
    // 0x00219C98: sw          $t1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r9;
    // 0x00219C9C: sw          $t2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r10;
    // 0x00219CA0: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x00219CA4: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x00219CA8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x00219CAC: sw          $t0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r8;
    // 0x00219CB0: sw          $t1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r9;
    // 0x00219CB4: sw          $t2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r10;
    // 0x00219CB8: jal         0x00267944
    // 0x00219CBC: sh          $s2, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = ctx->r18;
    func_00267944(rdram, ctx);
        goto after_1;
    // 0x00219CBC: sh          $s2, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = ctx->r18;
    after_1:
    // 0x00219CC0: lui         $v0, 0x780
    ctx->r2 = S32(0X780 << 16);
    // 0x00219CC4: ori         $v0, $v0, 0x74
    ctx->r2 = ctx->r2 | 0X74;
    // 0x00219CC8: addiu       $a0, $s0, 0xD8
    ctx->r4 = ADD32(ctx->r16, 0XD8);
    // 0x00219CCC: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x00219CD0: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x00219CD4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x00219CD8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x00219CDC: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x00219CE0: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    // 0x00219CE4: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x00219CE8: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x00219CEC: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x00219CF0: sh          $zero, 0xBA($s0)
    MEM_H(0XBA, ctx->r16) = 0;
    // 0x00219CF4: sb          $zero, 0x10D($s0)
    MEM_B(0X10D, ctx->r16) = 0;
    // 0x00219CF8: sb          $zero, 0x10C($s0)
    MEM_B(0X10C, ctx->r16) = 0;
    // 0x00219CFC: jal         0x00219910
    // 0x00219D00: sw          $v0, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r2;
    func_00219910(rdram, ctx);
        goto after_2;
    // 0x00219D00: sw          $v0, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = ctx->r2;
    after_2:
    // 0x00219D04: jal         0x00219910
    // 0x00219D08: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    func_00219910(rdram, ctx);
        goto after_3;
    // 0x00219D08: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    after_3:
    // 0x00219D0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00219D10: jal         0x0021E960
    // 0x00219D14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0021E960(rdram, ctx);
        goto after_4;
    // 0x00219D14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x00219D18: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x00219D1C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00219D20: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x00219D24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00219D28: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00219D2C: jal         0x0020F79C
    // 0x00219D30: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    func_0020F79C(rdram, ctx);
        goto after_5;
    // 0x00219D30: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    after_5:
    // 0x00219D34: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00219D38: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x00219D3C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x00219D40: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x00219D44: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00219D48: bne         $v0, $zero, L_00219D88
    if (ctx->r2 != 0) {
        // 0x00219D4C: sb          $zero, 0x10F($s0)
        MEM_B(0X10F, ctx->r16) = 0;
            goto L_00219D88;
    }
    // 0x00219D4C: sb          $zero, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = 0;
    // 0x00219D50: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00219D54: beq         $v0, $zero, L_00219D88
    if (ctx->r2 == 0) {
        // 0x00219D58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00219D88;
    }
    // 0x00219D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00219D5C: jal         0x0026872C
    // 0x00219D60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_0026872C(rdram, ctx);
        goto after_6;
    // 0x00219D60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00219D64: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00219D68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x00219D6C: sub.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f2.fl;
    // 0x00219D70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00219D74: lwc1        $f0, 0x5AC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5AC0);
    // 0x00219D78: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00219D7C: nop

    // 0x00219D80: bc1tl       L_00219D88
    if (c1cs) {
        // 0x00219D84: swc1        $f2, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
            goto L_00219D88;
    }
    goto skip_0;
    // 0x00219D84: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    skip_0:
L_00219D88:
    // 0x00219D88: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x00219D8C: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x00219D90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00219D94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00219D98: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x00219D9C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00219DA0: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    // 0x00219DA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00219DA8: beq         $v0, $zero, L_00219DB8
    if (ctx->r2 == 0) {
        // 0x00219DAC: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_00219DB8;
    }
    // 0x00219DAC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00219DB0: beq         $v0, $zero, L_00219DC8
    if (ctx->r2 == 0) {
        // 0x00219DB4: nop
    
            goto L_00219DC8;
    }
    // 0x00219DB4: nop

L_00219DB8:
    // 0x00219DB8: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x00219DBC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00219DC0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00219DC4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00219DC8:
    // 0x00219DC8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00219DCC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00219DD0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x00219DD4: sltiu       $v0, $a1, 0xD
    ctx->r2 = ctx->r5 < 0XD ? 1 : 0;
    // 0x00219DD8: bne         $v0, $zero, L_00219DF8
    if (ctx->r2 != 0) {
        // 0x00219DDC: addu        $s1, $s2, $zero
        ctx->r17 = ADD32(ctx->r18, 0);
            goto L_00219DF8;
    }
    // 0x00219DDC: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_00219DE0:
    // 0x00219DE0: j           L_00219E50
    // 0x00219DE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_00219E50;
    // 0x00219DE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_00219DE8:
    // 0x00219DE8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00219DEC: addiu       $a2, $a2, -0x166C
    ctx->r6 = ADD32(ctx->r6, -0X166C);
    // 0x00219DF0: j           L_00219E54
    // 0x00219DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_00219E54;
    // 0x00219DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00219DF8:
    // 0x00219DF8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00219DFC: bne         $a1, $v0, L_00219E44
    if (ctx->r5 != ctx->r2) {
        // 0x00219E00: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_00219E44;
    }
    // 0x00219E00: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00219E04: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00219E08: lw          $v1, -0x6788($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6788);
    // 0x00219E0C: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00219E10: beq         $v0, $zero, L_00219E40
    if (ctx->r2 == 0) {
        // 0x00219E14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00219E40;
    }
    // 0x00219E14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00219E18: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00219E1C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00219E20: lw          $v1, -0x678C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X678C);
L_00219E24:
    // 0x00219E24: beq         $v1, $s0, L_00219DE0
    if (ctx->r3 == ctx->r16) {
        // 0x00219E28: addiu       $v0, $v1, 0x288
        ctx->r2 = ADD32(ctx->r3, 0X288);
            goto L_00219DE0;
    }
    // 0x00219E28: addiu       $v0, $v1, 0x288
    ctx->r2 = ADD32(ctx->r3, 0X288);
    // 0x00219E2C: beq         $v0, $s0, L_00219DE8
    if (ctx->r2 == ctx->r16) {
        // 0x00219E30: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_00219DE8;
    }
    // 0x00219E30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00219E34: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00219E38: bne         $v0, $zero, L_00219E24
    if (ctx->r2 != 0) {
        // 0x00219E3C: addiu       $v1, $v1, 0x1328
        ctx->r3 = ADD32(ctx->r3, 0X1328);
            goto L_00219E24;
    }
    // 0x00219E3C: addiu       $v1, $v1, 0x1328
    ctx->r3 = ADD32(ctx->r3, 0X1328);
L_00219E40:
    // 0x00219E40: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_00219E44:
    // 0x00219E44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00219E48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00219E4C: lw          $a2, -0x34A0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X34A0);
L_00219E50:
    // 0x00219E50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00219E54:
    // 0x00219E54: jal         0x002429BC
    // 0x00219E58: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    func_002429BC(rdram, ctx);
        goto after_7;
    // 0x00219E58: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    after_7:
    // 0x00219E5C: lw          $v0, 0x170($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X170);
    // 0x00219E60: beq         $v0, $zero, L_00219E74
    if (ctx->r2 == 0) {
        // 0x00219E64: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00219E74;
    }
    // 0x00219E64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00219E68: lb          $v0, 0x206($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X206);
    // 0x00219E6C: negu        $s2, $v0
    ctx->r18 = SUB32(0, ctx->r2);
    // 0x00219E70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00219E74:
    // 0x00219E74: beq         $s3, $v0, L_00219E8C
    if (ctx->r19 == ctx->r2) {
        // 0x00219E78: sw          $zero, 0x1A8($s0)
        MEM_W(0X1A8, ctx->r16) = 0;
            goto L_00219E8C;
    }
    // 0x00219E78: sw          $zero, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = 0;
    // 0x00219E7C: addiu       $a0, $s0, 0x1D4
    ctx->r4 = ADD32(ctx->r16, 0X1D4);
    // 0x00219E80: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00219E84: jal         0x00284760
    // 0x00219E88: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    func_00284760(rdram, ctx);
        goto after_8;
    // 0x00219E88: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_8:
L_00219E8C:
    // 0x00219E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00219E90: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00219E94: addiu       $v0, $v0, 0x7078
    ctx->r2 = ADD32(ctx->r2, 0X7078);
    // 0x00219E98: lw          $a1, 0x40($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X40);
    // 0x00219E9C: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    // 0x00219EA0: jal         0x0021A150
    // 0x00219EA4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_0021A150(rdram, ctx);
        goto after_9;
    // 0x00219EA4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_9:
    // 0x00219EA8: beq         $s1, $zero, L_00219EC8
    if (ctx->r17 == 0) {
        // 0x00219EAC: addiu       $v1, $zero, -0x401
        ctx->r3 = ADD32(0, -0X401);
            goto L_00219EC8;
    }
    // 0x00219EAC: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x00219EB0: mtc1        $s1, $f0
    ctx->f0.u32l = ctx->r17;
    // 0x00219EB4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00219EB8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00219EBC: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x00219EC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00219EC4: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
L_00219EC8:
    // 0x00219EC8: jal         0x00214ED8
    // 0x00219ECC: nop

    func_00214ED8(rdram, ctx);
        goto after_10;
    // 0x00219ECC: nop

    after_10:
    // 0x00219ED0: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x00219ED4: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x00219ED8: andi        $v1, $v1, 0x8
    ctx->r3 = ctx->r3 & 0X8;
    // 0x00219EDC: beq         $v1, $zero, L_00219F58
    if (ctx->r3 == 0) {
        // 0x00219EE0: sw          $v0, 0x280($s0)
        MEM_W(0X280, ctx->r16) = ctx->r2;
            goto L_00219F58;
    }
    // 0x00219EE0: sw          $v0, 0x280($s0)
    MEM_W(0X280, ctx->r16) = ctx->r2;
    // 0x00219EE4: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00219EE8: addiu       $v0, $v0, -0x2574
    ctx->r2 = ADD32(ctx->r2, -0X2574);
    // 0x00219EEC: sw          $v0, 0x234($s0)
    MEM_W(0X234, ctx->r16) = ctx->r2;
    // 0x00219EF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00219EF4: addiu       $v0, $v0, -0x4F18
    ctx->r2 = ADD32(ctx->r2, -0X4F18);
    // 0x00219EF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00219EFC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00219F00: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00219F04: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00219F08: sw          $t0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->r8;
    // 0x00219F0C: sw          $t1, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->r9;
    // 0x00219F10: sw          $t2, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->r10;
    // 0x00219F14: sw          $t3, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->r11;
    // 0x00219F18: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00219F1C: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x00219F20: sw          $t0, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->r8;
    // 0x00219F24: sw          $t1, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->r9;
    // 0x00219F28: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00219F2C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00219F30: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00219F34: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00219F38: sw          $t0, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->r8;
    // 0x00219F3C: sw          $t1, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->r9;
    // 0x00219F40: sw          $t2, 0x130($s0)
    MEM_W(0X130, ctx->r16) = ctx->r10;
    // 0x00219F44: sw          $t3, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->r11;
    // 0x00219F48: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00219F4C: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x00219F50: sw          $t0, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->r8;
    // 0x00219F54: sw          $t1, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->r9;
L_00219F58:
    // 0x00219F58: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00219F5C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00219F60: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00219F64: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00219F68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00219F6C: jr          $ra
    // 0x00219F70: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00219F70: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00256180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00256184: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00256188: jal         0x00255FF4
    // 0x0025618C: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x0025618C: nop

    after_0:
    // 0x00256190: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00256194: jr          $ra
    // 0x00256198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00256198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004298B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004298B8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x004298BC: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x004298C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004298C4: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x004298C8: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x004298CC: lbu         $v0, 0x65($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X65);
    // 0x004298D0: beq         $v0, $zero, L_004298EC
    if (ctx->r2 == 0) {
        // 0x004298D4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_004298EC;
    }
    // 0x004298D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004298D8: jal         0x00429EC4
    // 0x004298DC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    func_00429EC4(rdram, ctx);
        goto after_0;
    // 0x004298DC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_0:
    // 0x004298E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004298E4: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x004298E8: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00429A90;
    }
    // 0x004298E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_004298EC:
    // 0x004298EC: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x004298F0: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x004298F4: jal         0x00299680
    // 0x004298F8: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_1;
    // 0x004298F8: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x004298FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429900: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x00429904: addiu       $a3, $sp, 0x10
        ctx->r7 = ADD32(ctx->r29, 0X10);
            goto L_00429A90;
    }
    // 0x00429904: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x00429908: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x0042990C: addiu       $a1, $sp, 0x52
    ctx->r5 = ADD32(ctx->r29, 0X52);
    // 0x00429910: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00429914: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x00429918: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x0042991C: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
L_00429920:
    // 0x00429920: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00429924: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00429928: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x0042992C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429930: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00429934: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00429938: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0042993C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429940: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00429944: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00429948: bne         $v0, $zero, L_00429920
    if (ctx->r2 != 0) {
        // 0x0042994C: addu        $v0, $a3, $a0
        ctx->r2 = ADD32(ctx->r7, ctx->r4);
            goto L_00429920;
    }
    // 0x0042994C: addu        $v0, $a3, $a0
    ctx->r2 = ADD32(ctx->r7, ctx->r4);
    // 0x00429950: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x00429954: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x00429958: bne         $v1, $v0, L_00429970
    if (ctx->r3 != ctx->r2) {
        // 0x0042995C: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_00429970;
    }
    // 0x0042995C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x00429960: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x00429964: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x00429968: beq         $v1, $v0, L_004299B8
    if (ctx->r3 == ctx->r2) {
        // 0x0042996C: nop
    
            goto L_004299B8;
    }
    // 0x0042996C: nop

L_00429970:
    // 0x00429970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00429974: jal         0x00429748
    // 0x00429978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00429748(rdram, ctx);
        goto after_2;
    // 0x00429978: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0042997C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429980: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x00429984: bne         $v1, $v0, L_004299B0
    if (ctx->r3 != ctx->r2) {
        // 0x00429988: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004299B0;
    }
    // 0x00429988: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0042998C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00429990: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x00429994: jal         0x00429460
    // 0x00429998: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_3;
    // 0x00429998: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0042999C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004299A0: beq         $v1, $zero, L_004299B8
    if (ctx->r3 == 0) {
        // 0x004299A4: nop
    
            goto L_004299B8;
    }
    // 0x004299A4: nop

    // 0x004299A8: j           L_00429A90
    // 0x004299AC: nop

        goto L_00429A90;
    // 0x004299AC: nop

L_004299B0:
    // 0x004299B0: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x004299B4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00429A90;
    }
    // 0x004299B4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_004299B8:
    // 0x004299B8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x004299BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004299C0: bne         $v0, $zero, L_00429A00
    if (ctx->r2 != 0) {
        // 0x004299C4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00429A00;
    }
    // 0x004299C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004299C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004299CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004299D0: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x004299D4: jal         0x00429460
    // 0x004299D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00429460(rdram, ctx);
        goto after_4;
    // 0x004299D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x004299DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x004299E0: bne         $v1, $zero, L_00429A90
    if (ctx->r3 != 0) {
        // 0x004299E4: nop
    
            goto L_00429A90;
    }
    // 0x004299E4: nop

    // 0x004299E8: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x004299EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x004299F0: bne         $v0, $zero, L_00429A00
    if (ctx->r2 != 0) {
        // 0x004299F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00429A00;
    }
    // 0x004299F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004299F8: j           L_00429A90
    // 0x004299FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_00429A90;
    // 0x004299FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00429A00:
    // 0x00429A00: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
L_00429A04:
    // 0x00429A04: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x00429A08: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00429A0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00429A10: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x00429A14: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x00429A18: bne         $v0, $zero, L_00429A04
    if (ctx->r2 != 0) {
        // 0x00429A1C: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_00429A04;
    }
    // 0x00429A1C: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x00429A20: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00429A24: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x00429A28: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x00429A2C: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x00429A30: addiu       $a3, $s1, 0x2C
    ctx->r7 = ADD32(ctx->r17, 0X2C);
    // 0x00429A34: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x00429A38: lbu         $v1, 0x1A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1A);
    // 0x00429A3C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x00429A40: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x00429A44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x00429A48: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x00429A4C: sb          $v1, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r3;
    // 0x00429A50: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x00429A54: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00429A58: lbu         $v0, 0x64($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X64);
    // 0x00429A5C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x00429A60: sw          $v1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r3;
    // 0x00429A64: lbu         $v1, 0x64($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X64);
    // 0x00429A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00429A6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00429A70: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00429A74: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x00429A78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00429A7C: jal         0x00299680
    // 0x00429A80: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_5;
    // 0x00429A80: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_5:
    // 0x00429A84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00429A88: beql        $v1, $zero, L_00429A90
    if (ctx->r3 == 0) {
        // 0x00429A8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00429A90;
    }
    goto skip_0;
    // 0x00429A8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
L_00429A90:
    // 0x00429A90: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x00429A94: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x00429A98: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x00429A9C: jr          $ra
    // 0x00429AA0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x00429AA0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
