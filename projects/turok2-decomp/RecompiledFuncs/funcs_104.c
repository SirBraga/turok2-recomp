#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_0041CC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CC60: jal         0x0025340C
    // 0x0041CC64: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CC64: nop

    after_0:
    // 0x0041CC68: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x0041CC6C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041CC70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041CC74: lhu         $s1, -0x54A8($at)
    ctx->r17 = MEM_HU(ctx->r1, -0X54A8);
    // 0x0041CC78: jal         0x004160F0
    // 0x0041CC7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041CC7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041CC80: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041CC84: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, 0X1330);
    // 0x0041CC88: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0041CC8C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041CC90: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0041CC94: jal         0x0029E3E0
    // 0x0041CC98: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041CC98: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041CC9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041CCA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041CCA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CCA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041CCAC: jr          $ra
    // 0x0041CCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041CCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041CE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CE7C: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CE80: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x0041CE84: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x0041CE88: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CE8C: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x0041CE90: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CE94: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x0041CE98: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CE9C: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x0041CEA0: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CEA4: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041CEA8: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x0041CEAC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041CEB0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CEB4: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x0041CEB8: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CEBC: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x0041CEC0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CEC4: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x0041CEC8: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0041CECC: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x0041CED0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CED4: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x0041CED8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041CEDC: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041CEE0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041CEE4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0041CEE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041CEEC: sw          $zero, 0x2020($at)
    MEM_W(0X2020, ctx->r1) = 0;
    // 0x0041CEF0: beq         $v0, $zero, L_0041CF10
    if (ctx->r2 == 0) {
        // 0x0041CEF4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041CF10;
    }
    // 0x0041CEF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041CEF8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x0041CEFC: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x0041CF00: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041CF04: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041CF08: j           L_0041CF28
    // 0x0041CF0C: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
        goto L_0041CF28;
    // 0x0041CF0C: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
L_0041CF10:
    // 0x0041CF10: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x0041CF14: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041CF18: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0041CF1C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041CF20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041CF24: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
L_0041CF28:
    // 0x0041CF28: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x0041CF2C: beq         $a1, $zero, L_0041CF48
    if (ctx->r5 == 0) {
        // 0x0041CF30: nop
    
            goto L_0041CF48;
    }
    // 0x0041CF30: nop

    // 0x0041CF34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041CF38: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CF3C: jal         0x0025340C
    // 0x0041CF40: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CF40: nop

    after_0:
    // 0x0041CF44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0041CF48:
    // 0x0041CF48: jal         0x00285A68
    // 0x0041CF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A68(rdram, ctx);
        goto after_1;
    // 0x0041CF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041CF50: jal         0x00426480
    // 0x0041CF54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_2;
    // 0x0041CF54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041CF58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041CF5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041CF60: jr          $ra
    // 0x0041CF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041CF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041CF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CF90: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041CF94: jal         0x0025340C
    // 0x0041CF98: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041CF98: nop

    after_0:
    // 0x0041CF9C: jal         0x00285A68
    // 0x0041CFA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00285A68(rdram, ctx);
        goto after_1;
    // 0x0041CFA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041CFA4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFA8: lw          $v0, 0x238($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X238);
    // 0x0041CFAC: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x0041CFB0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CFB4: sw          $v0, 0x238($v1)
    MEM_W(0X238, ctx->r3) = ctx->r2;
    // 0x0041CFB8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFBC: lw          $v0, 0x260($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X260);
    // 0x0041CFC0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041CFC4: sw          $v0, 0x260($v1)
    MEM_W(0X260, ctx->r3) = ctx->r2;
    // 0x0041CFC8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFCC: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041CFD0: lw          $v0, 0x1C0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C0);
    // 0x0041CFD4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041CFD8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CFDC: sw          $v0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r2;
    // 0x0041CFE0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFE4: lw          $v0, 0x1E8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1E8);
    // 0x0041CFE8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CFEC: sw          $v0, 0x1E8($v1)
    MEM_W(0X1E8, ctx->r3) = ctx->r2;
    // 0x0041CFF0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041CFF4: lw          $v0, 0x210($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X210);
    // 0x0041CFF8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041CFFC: sw          $v0, 0x210($v1)
    MEM_W(0X210, ctx->r3) = ctx->r2;
    // 0x0041D000: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D004: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x0041D008: beq         $v0, $zero, L_0041D024
    if (ctx->r2 == 0) {
        // 0x0041D00C: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_0041D024;
    }
    // 0x0041D00C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041D010: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0041D014: lw          $v1, 0x120($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X120);
    // 0x0041D018: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041D01C: j           L_0041D03C
    // 0x0041D020: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
        goto L_0041D03C;
    // 0x0041D020: sw          $v1, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r3;
L_0041D024:
    // 0x0041D024: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D028: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041D02C: lw          $v0, 0x120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X120);
    // 0x0041D030: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041D034: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041D038: sw          $v0, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r2;
L_0041D03C:
    // 0x0041D03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041D040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D044: jr          $ra
    // 0x0041D048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041D0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D0A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D0AC: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x0041D0B0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0B4: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D0B8: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D0BC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D0C0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D0C4: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x0041D0C8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0CC: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D0D0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D0D4: j           L_0041D158
    // 0x0041D0D8: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
        goto L_0041D158;
    // 0x0041D0D8: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041D0DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0E0: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x0041D0E4: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0041D0E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D0EC: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x0041D0F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D0F4: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D0F8: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D0FC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D100: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D104: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D108: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D10C: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D110: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D114: j           L_0041D158
    // 0x0041D118: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
        goto L_0041D158;
    // 0x0041D118: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041D11C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D120: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x0041D124: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0041D128: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D12C: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    // 0x0041D130: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D134: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D138: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D13C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D140: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D144: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D148: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D14C: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D150: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D154: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
L_0041D158:
    // 0x0041D158: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D15C: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041D160: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D164: j           L_0041D1B4
    // 0x0041D168: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
        goto L_0041D1B4;
    // 0x0041D168: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    // 0x0041D16C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D170: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x0041D174: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D178: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
    // 0x0041D17C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D180: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D184: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D188: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D18C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D190: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D194: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D198: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D19C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D1A0: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x0041D1A4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D1A8: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D1AC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D1B0: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0041D1B4:
    // 0x0041D1B4: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x0041D1B8: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x0041D1BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0041D1C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D1C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041D1C8: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D1CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041D1D0: addiu       $v1, $v1, 0x1FBC
    ctx->r3 = ADD32(ctx->r3, 0X1FBC);
    // 0x0041D1D4: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x0041D1D8: sll         $v1, $t3, 6
    ctx->r3 = S32(ctx->r11 << 6);
    // 0x0041D1DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D1E0: addiu       $v0, $v0, -0x5475
    ctx->r2 = ADD32(ctx->r2, -0X5475);
    // 0x0041D1E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D1E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x0041D1EC: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0041D1F0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
L_0041D1F4:
    // 0x0041D1F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D1F8: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0041D1FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0041D200: bne         $v0, $a1, L_0041D214
    if (ctx->r2 != ctx->r5) {
        // 0x0041D204: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_0041D214;
    }
    // 0x0041D204: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0041D208: bgtz        $a0, L_0041D1F4
    if (SIGNED(ctx->r4) > 0) {
        // 0x0041D20C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_0041D1F4;
    }
    // 0x0041D20C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0041D210: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041D214:
    // 0x0041D214: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041D218: addiu       $a1, $a1, 0x1340
    ctx->r5 = ADD32(ctx->r5, 0X1340);
    // 0x0041D21C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_0041D220:
    // 0x0041D220: lbu         $t0, 0x0($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X0);
    // 0x0041D224: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0041D228: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x0041D22C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041D230: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x0041D234: bne         $v0, $a2, L_0041D24C
    if (ctx->r2 != ctx->r6) {
        // 0x0041D238: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_0041D24C;
    }
    // 0x0041D238: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D23C: beq         $v0, $zero, L_0041D24C
    if (ctx->r2 == 0) {
        // 0x0041D240: nop
    
            goto L_0041D24C;
    }
    // 0x0041D240: nop

    // 0x0041D244: beq         $a0, $zero, L_0041D220
    if (ctx->r4 == 0) {
        // 0x0041D248: nop
    
            goto L_0041D220;
    }
    // 0x0041D248: nop

L_0041D24C:
    // 0x0041D24C: beql        $t0, $a2, L_0041D254
    if (ctx->r8 == ctx->r6) {
        // 0x0041D250: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_0041D254;
    }
    goto skip_0;
    // 0x0041D250: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    skip_0:
L_0041D254:
    // 0x0041D254: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D258: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0041D25C: blez        $v0, L_0041D284
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041D260: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0041D284;
    }
    // 0x0041D260: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041D264: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0041D268:
    // 0x0041D268: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0041D26C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041D270: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041D274: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x0041D278: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0041D27C: bne         $v0, $zero, L_0041D268
    if (ctx->r2 != 0) {
        // 0x0041D280: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_0041D268;
    }
    // 0x0041D280: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_0041D284:
    // 0x0041D284: sll         $v1, $t3, 1
    ctx->r3 = S32(ctx->r11 << 1);
    // 0x0041D288: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x0041D28C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0041D290: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D294: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x0041D298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041D29C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D2A0: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0041D2A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D2A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D2AC: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D2B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D2B4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D2B8: sw          $v0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r2;
    // 0x0041D2BC: jr          $ra
    // 0x0041D2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041D104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D104: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D108: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D10C: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D110: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D114: j           L_0041D158
    // 0x0041D118: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
        goto L_0041D158;
    // 0x0041D118: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041D11C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D120: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x0041D124: lui         $v1, 0x180
    ctx->r3 = S32(0X180 << 16);
    // 0x0041D128: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D12C: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    // 0x0041D130: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D134: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D138: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D13C: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D140: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D144: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D148: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D14C: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D150: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D154: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
L_0041D158:
    // 0x0041D158: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D15C: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041D160: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D164: j           L_0041D1B4
    // 0x0041D168: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
        goto L_0041D1B4;
    // 0x0041D168: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    // 0x0041D16C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0041D170: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x0041D174: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041D178: sw          $v0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r2;
    // 0x0041D17C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D180: lui         $a0, 0xFE7F
    ctx->r4 = S32(0XFE7F << 16);
    // 0x0041D184: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x0041D188: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041D18C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D190: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x0041D194: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D198: lw          $v0, 0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X58);
    // 0x0041D19C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D1A0: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x0041D1A4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041D1A8: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041D1AC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041D1B0: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_0041D1B4:
    // 0x0041D1B4: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x0041D1B8: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x0041D1BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0041D1C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D1C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041D1C8: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D1CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041D1D0: addiu       $v1, $v1, 0x1FBC
    ctx->r3 = ADD32(ctx->r3, 0X1FBC);
    // 0x0041D1D4: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x0041D1D8: sll         $v1, $t3, 6
    ctx->r3 = S32(ctx->r11 << 6);
    // 0x0041D1DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D1E0: addiu       $v0, $v0, -0x5475
    ctx->r2 = ADD32(ctx->r2, -0X5475);
    // 0x0041D1E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D1E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x0041D1EC: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0041D1F0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
L_0041D1F4:
    // 0x0041D1F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D1F8: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x0041D1FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0041D200: bne         $v0, $a1, L_0041D214
    if (ctx->r2 != ctx->r5) {
        // 0x0041D204: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_0041D214;
    }
    // 0x0041D204: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x0041D208: bgtz        $a0, L_0041D1F4
    if (SIGNED(ctx->r4) > 0) {
        // 0x0041D20C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_0041D1F4;
    }
    // 0x0041D20C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x0041D210: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041D214:
    // 0x0041D214: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041D218: addiu       $a1, $a1, 0x1340
    ctx->r5 = ADD32(ctx->r5, 0X1340);
    // 0x0041D21C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_0041D220:
    // 0x0041D220: lbu         $t0, 0x0($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X0);
    // 0x0041D224: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x0041D228: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x0041D22C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041D230: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x0041D234: bne         $v0, $a2, L_0041D24C
    if (ctx->r2 != ctx->r6) {
        // 0x0041D238: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_0041D24C;
    }
    // 0x0041D238: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041D23C: beq         $v0, $zero, L_0041D24C
    if (ctx->r2 == 0) {
        // 0x0041D240: nop
    
            goto L_0041D24C;
    }
    // 0x0041D240: nop

    // 0x0041D244: beq         $a0, $zero, L_0041D220
    if (ctx->r4 == 0) {
        // 0x0041D248: nop
    
            goto L_0041D220;
    }
    // 0x0041D248: nop

L_0041D24C:
    // 0x0041D24C: beql        $t0, $a2, L_0041D254
    if (ctx->r8 == ctx->r6) {
        // 0x0041D250: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_0041D254;
    }
    goto skip_0;
    // 0x0041D250: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    skip_0:
L_0041D254:
    // 0x0041D254: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D258: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0041D25C: blez        $v0, L_0041D284
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041D260: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0041D284;
    }
    // 0x0041D260: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041D264: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_0041D268:
    // 0x0041D268: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0041D26C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041D270: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041D274: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x0041D278: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0041D27C: bne         $v0, $zero, L_0041D268
    if (ctx->r2 != 0) {
        // 0x0041D280: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_0041D268;
    }
    // 0x0041D280: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_0041D284:
    // 0x0041D284: sll         $v1, $t3, 1
    ctx->r3 = S32(ctx->r11 << 1);
    // 0x0041D288: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x0041D28C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x0041D290: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041D294: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x0041D298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041D29C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D2A0: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x0041D2A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D2A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D2AC: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D2B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D2B4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D2B8: sw          $v0, 0x1FB8($at)
    MEM_W(0X1FB8, ctx->r1) = ctx->r2;
    // 0x0041D2BC: jr          $ra
    // 0x0041D2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041D2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041D348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D348: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x0041D34C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041D350: bne         $v1, $v0, L_0041D3F8
    if (ctx->r3 != ctx->r2) {
        // 0x0041D354: nop
    
            goto L_0041D3F8;
    }
    // 0x0041D354: nop

    // 0x0041D358: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x0041D35C: jal         0x00285628
    // 0x0041D360: nop

    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0041D360: nop

    after_0:
    // 0x0041D364: beq         $v0, $zero, L_0041D3A0
    if (ctx->r2 == 0) {
        // 0x0041D368: nop
    
            goto L_0041D3A0;
    }
    // 0x0041D368: nop

    // 0x0041D36C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D370: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D374: lw          $v0, 0x1FB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D378: blez        $v0, L_0041D3A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041D37C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0041D3A0;
    }
    // 0x0041D37C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0041D380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D384: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D388: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D38C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D390: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0041D394: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x0041D398: j           L_0041D3F8
    // 0x0041D39C: nop

        goto L_0041D3F8;
    // 0x0041D39C: nop

L_0041D3A0:
    // 0x0041D3A0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x0041D3A4: jal         0x00285670
    // 0x0041D3A8: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0041D3A8: nop

    after_1:
    // 0x0041D3AC: beq         $v0, $zero, L_0041D3F8
    if (ctx->r2 == 0) {
        // 0x0041D3B0: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_0041D3F8;
    }
    // 0x0041D3B0: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x0041D3B4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0041D3B8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x0041D3BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3C0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3C4: lw          $a0, 0x1FB0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D3C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3D0: lw          $v0, 0x1FB8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1FB8);
    // 0x0041D3D4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041D3D8: beq         $v0, $zero, L_0041D3F8
    if (ctx->r2 == 0) {
        // 0x0041D3DC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_0041D3F8;
    }
    // 0x0041D3DC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0041D3E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3E4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3E8: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0041D3EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D3F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041D3F4: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
L_0041D3F8:
    // 0x0041D3F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041D3FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041D400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041D404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041D408: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041D40C: jr          $ra
    // 0x0041D410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041D410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041D5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D5D8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0041D5DC: mtc1        $v1, $f20
    ctx->f20.u32l = ctx->r3;
    // 0x0041D5E0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0041D5E4: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x0041D5E8: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x0041D5EC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041D5F0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0041D5F4: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0041D5F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041D5FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D600: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x0041D604: mul.s       $f21, $f1, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0041D608: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041D60C: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041D610: jal         0x0027AF4C
    // 0x0041D614: nop

    func_0027AF4C(rdram, ctx);
        goto after_0;
    // 0x0041D614: nop

    after_0:
    // 0x0041D618: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0041D61C: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x0041D620: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D624: lwc1        $f1, 0x13E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X13E8);
    // 0x0041D628: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0041D62C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041D630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041D634: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0041D638: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041D63C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0041D640: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0041D644: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0041D648: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041D64C: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041D650: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x0041D654: nop

    // 0x0041D658: bc1t        L_0041D670
    if (c1cs) {
        // 0x0041D65C: addiu       $a1, $v1, -0x2
        ctx->r5 = ADD32(ctx->r3, -0X2);
            goto L_0041D670;
    }
    // 0x0041D65C: addiu       $a1, $v1, -0x2
    ctx->r5 = ADD32(ctx->r3, -0X2);
    // 0x0041D660: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x0041D664: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041D668: j           L_0041D688
    // 0x0041D66C: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
        goto L_0041D688;
    // 0x0041D66C: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
L_0041D670:
    // 0x0041D670: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x0041D674: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041D678: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041D67C: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041D680: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0041D684: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
L_0041D688:
    // 0x0041D688: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0041D68C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041D690: jal         0x002778A8
    // 0x0041D694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002778A8(rdram, ctx);
        goto after_1;
    // 0x0041D694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041D698: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041D69C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041D6A0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0041D6A4: jal         0x00416168
    // 0x0041D6A8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_00416168(rdram, ctx);
        goto after_2;
    // 0x0041D6A8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041D6AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0041D6B0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041D6B4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0041D6B8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041D6BC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0041D6C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0041D6C4: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0041D6C8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0041D6CC: jr          $ra
    // 0x0041D6D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041D6D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041D6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D6B0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041D6B4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0041D6B8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041D6BC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0041D6C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0041D6C4: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0041D6C8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0041D6CC: jr          $ra
    // 0x0041D6D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041D6D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041D948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D930:
    // 0x0041D948: sw          $t2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r10;
    // 0x0041D94C: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    // 0x0041D950: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x0041D954: bne         $a2, $a0, L_0041D930
    if (ctx->r6 != ctx->r4) {
        // 0x0041D958: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_0041D930;
    }
    // 0x0041D958: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0041D95C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041D960: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041D964: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041D968: lw          $v0, 0x2018($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2018);
    // 0x0041D96C: addiu       $a0, $v1, 0x180
    ctx->r4 = ADD32(ctx->r3, 0X180);
    // 0x0041D970: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x0041D974: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x0041D978: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x0041D97C: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x0041D980: addiu       $v0, $v0, 0x500
    ctx->r2 = ADD32(ctx->r2, 0X500);
L_0041D984:
    // 0x0041D984: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0041D988: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x0041D98C: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x0041D990: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x0041D994: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0041D998: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x0041D99C: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x0041D9A0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x0041D9A4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0041D9A8: bne         $v1, $a0, L_0041D984
    if (ctx->r3 != ctx->r4) {
        // 0x0041D9AC: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_0041D984;
    }
    // 0x0041D9AC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0041D9B0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0041D9B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0041D9B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D9BC: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0041D9C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041D9C4: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041D9C8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0041D9CC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9D0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0041D9D4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9D8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0041D9DC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9E0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0041D9E4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041D9E8: addiu       $v1, $v1, 0x70A8
    ctx->r3 = ADD32(ctx->r3, 0X70A8);
    // 0x0041D9EC: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x0041D9F0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0041D9F8: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041D9FC: addiu       $a1, $a1, -0x4540
    ctx->r5 = ADD32(ctx->r5, -0X4540);
    // 0x0041DA00: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0041DA04: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0041DA08: jal         0x0029E460
    // 0x0041DA0C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x0041DA0C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    after_0:
    // 0x0041DA10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DA14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041DA18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041DA1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041DA20: jr          $ra
    // 0x0041DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041D9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D984:
    // 0x0041D9A0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x0041D9A4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0041D9A8: bne         $v1, $a0, L_0041D984
    if (ctx->r3 != ctx->r4) {
        // 0x0041D9AC: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_0041D984;
    }
    // 0x0041D9AC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0041D9B0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0041D9B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x0041D9B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041D9BC: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x0041D9C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041D9C4: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041D9C8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0041D9CC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9D0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0041D9D4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9D8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0041D9DC: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9E0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0041D9E4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041D9E8: addiu       $v1, $v1, 0x70A8
    ctx->r3 = ADD32(ctx->r3, 0X70A8);
    // 0x0041D9EC: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x0041D9F0: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x0041D9F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0041D9F8: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041D9FC: addiu       $a1, $a1, -0x4540
    ctx->r5 = ADD32(ctx->r5, -0X4540);
    // 0x0041DA00: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0041DA04: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x0041DA08: jal         0x0029E460
    // 0x0041DA0C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x0041DA0C: addiu       $a0, $a0, 0x684
    ctx->r4 = ADD32(ctx->r4, 0X684);
    after_0:
    // 0x0041DA10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DA14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041DA18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041DA1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041DA20: jr          $ra
    // 0x0041DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041DA24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041DAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DA90:
    // 0x0041DAE4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0041DAE8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0041DAEC: beq         $s0, $t0, L_0041DB64
    if (ctx->r16 == ctx->r8) {
        // 0x0041DAF0: nop
    
            goto L_0041DB64;
    }
    // 0x0041DAF0: nop

    // 0x0041DAF4: j           L_0041DBDC
    // 0x0041DAF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
        goto L_0041DBDC;
    // 0x0041DAF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0041DAFC: jal         0x00426D8C
    // 0x0041DB00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_0;
    // 0x0041DB00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041DB04: bne         $v0, $fp, L_0041DB54
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB08: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB0C: jal         0x00426D8C
    // 0x0041DB10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_1;
    // 0x0041DB10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0041DB14: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0041DB18: bne         $v0, $t0, L_0041DB54
    if (ctx->r2 != ctx->r8) {
        // 0x0041DB1C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB20: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB24: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB28: jal         0x00426D54
    // 0x0041DB2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x0041DB2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041DB30: bne         $v0, $zero, L_0041DB54
    if (ctx->r2 != 0) {
        // 0x0041DB34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB3C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DB40: jal         0x00426D54
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_3;
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0041DB48: beq         $v0, $zero, L_0041DB54
    if (ctx->r2 == 0) {
        // 0x0041DB4C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DB54;
    }
    // 0x0041DB4C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DB50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DB54:
    // 0x0041DB54: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB58: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041DB5C: j           L_0041DBC4
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
        goto L_0041DBC4;
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_0041DB64:
    // 0x0041DB64: jal         0x00426D8C
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_4;
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x0041DB6C: bnel        $v0, $fp, L_0041DBB8
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB70: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_0;
    // 0x0041DB70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0041DB74: jal         0x00426D8C
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_5;
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x0041DB7C: bnel        $v0, $s0, L_0041DBB8
    if (ctx->r2 != ctx->r16) {
        // 0x0041DB80: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_1;
    // 0x0041DB80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x0041DB84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB88: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB8C: jal         0x00426D54
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_6;
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0041DB94: bne         $v0, $zero, L_0041DBB8
    if (ctx->r2 != 0) {
        // 0x0041DB98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    // 0x0041DB98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBA0: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DBA4: jal         0x00426D54
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_7;
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0041DBAC: beq         $v0, $zero, L_0041DBB8
    if (ctx->r2 == 0) {
        // 0x0041DBB0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DBB8;
    }
    // 0x0041DBB0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DBB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DBB8:
    // 0x0041DBB8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DBBC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBC0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
L_0041DBC4:
    // 0x0041DBC4: jal         0x00426D54
    // 0x0041DBC8: nop

    func_00426D54(rdram, ctx);
        goto after_8;
    // 0x0041DBC8: nop

    after_8:
    // 0x0041DBCC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DBD0: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DBD0: nop

    // 0x0041DBD4: bnel        $s0, $zero, L_0041DBDC
    if (ctx->r16 != 0) {
        // 0x0041DBD8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_2;
    // 0x0041DBD8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_2:
L_0041DBDC:
    // 0x0041DBDC: beq         $s1, $zero, L_0041DC00
    if (ctx->r17 == 0) {
        // 0x0041DBE0: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_0041DC00;
    }
    // 0x0041DBE0: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041DBE4: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DBE8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DBEC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DBF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DBF4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041DBF8: j           L_0041DC18
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_0041DC18;
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_0041DC00:
    // 0x0041DC00: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DC04: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DC08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DC0C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DC10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041DC14: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_0041DC18:
    // 0x0041DC18: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0041DC1C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0041DC20: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x0041DC24: bne         $v0, $zero, L_0041DA90
    if (ctx->r2 != 0) {
        // 0x0041DC28: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_0041DA90;
    }
    // 0x0041DC28: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x0041DC2C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x0041DC30: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x0041DC34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041DC38: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041DC3C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041DC40: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041DC44: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041DC48: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041DC4C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041DC50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041DC54: jr          $ra
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041DAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DA90:
    // 0x0041DAFC: jal         0x00426D8C
    // 0x0041DB00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_0;
    // 0x0041DB00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041DB04: bne         $v0, $fp, L_0041DB54
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB08: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB08: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB0C: jal         0x00426D8C
    // 0x0041DB10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_1;
    // 0x0041DB10: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0041DB14: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0041DB18: bne         $v0, $t0, L_0041DB54
    if (ctx->r2 != ctx->r8) {
        // 0x0041DB1C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB20: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB24: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB28: jal         0x00426D54
    // 0x0041DB2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x0041DB2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041DB30: bne         $v0, $zero, L_0041DB54
    if (ctx->r2 != 0) {
        // 0x0041DB34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DB54;
    }
    // 0x0041DB34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB3C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DB40: jal         0x00426D54
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_3;
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0041DB48: beq         $v0, $zero, L_0041DB54
    if (ctx->r2 == 0) {
        // 0x0041DB4C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DB54;
    }
    // 0x0041DB4C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DB50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DB54:
    // 0x0041DB54: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB58: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041DB5C: j           L_0041DBC4
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
        goto L_0041DBC4;
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DB64: jal         0x00426D8C
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_4;
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x0041DB6C: bnel        $v0, $fp, L_0041DBB8
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB70: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_0;
    // 0x0041DB70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0041DB74: jal         0x00426D8C
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_5;
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x0041DB7C: bnel        $v0, $s0, L_0041DBB8
    if (ctx->r2 != ctx->r16) {
        // 0x0041DB80: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_1;
    // 0x0041DB80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x0041DB84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB88: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB8C: jal         0x00426D54
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_6;
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0041DB94: bne         $v0, $zero, L_0041DBB8
    if (ctx->r2 != 0) {
        // 0x0041DB98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    // 0x0041DB98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBA0: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DBA4: jal         0x00426D54
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_7;
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x0041DBAC: beq         $v0, $zero, L_0041DBB8
    if (ctx->r2 == 0) {
        // 0x0041DBB0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DBB8;
    }
    // 0x0041DBB0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DBB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DBB8:
    // 0x0041DBB8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DBBC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBC0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
L_0041DBC4:
    // 0x0041DBC4: jal         0x00426D54
    // 0x0041DBC8: nop

    func_00426D54(rdram, ctx);
        goto after_8;
    // 0x0041DBC8: nop

    after_8:
    // 0x0041DBCC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DBD0: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DBD0: nop

    // 0x0041DBD4: bnel        $s0, $zero, L_0041DBDC
    if (ctx->r16 != 0) {
        // 0x0041DBD8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_2;
    // 0x0041DBD8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_2:
L_0041DBDC:
    // 0x0041DBDC: beq         $s1, $zero, L_0041DC00
    if (ctx->r17 == 0) {
        // 0x0041DBE0: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_0041DC00;
    }
    // 0x0041DBE0: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041DBE4: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DBE8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DBEC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DBF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DBF4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041DBF8: j           L_0041DC18
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_0041DC18;
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_0041DC00:
    // 0x0041DC00: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DC04: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DC08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DC0C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DC10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041DC14: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_0041DC18:
    // 0x0041DC18: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0041DC1C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0041DC20: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x0041DC24: bne         $v0, $zero, L_0041DA90
    if (ctx->r2 != 0) {
        // 0x0041DC28: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_0041DA90;
    }
    // 0x0041DC28: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x0041DC2C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x0041DC30: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x0041DC34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041DC38: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041DC3C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041DC40: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041DC44: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041DC48: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041DC4C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041DC50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041DC54: jr          $ra
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041DB38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DA90:
    // 0x0041DB38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB3C: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DB40: jal         0x00426D54
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_0;
    // 0x0041DB44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0041DB48: beq         $v0, $zero, L_0041DB54
    if (ctx->r2 == 0) {
        // 0x0041DB4C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DB54;
    }
    // 0x0041DB4C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DB50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DB54:
    // 0x0041DB54: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB58: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041DB5C: j           L_0041DBC4
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
        goto L_0041DBC4;
    // 0x0041DB60: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DB64: jal         0x00426D8C
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D8C(rdram, ctx);
        goto after_1;
    // 0x0041DB68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041DB6C: bnel        $v0, $fp, L_0041DBB8
    if (ctx->r2 != ctx->r30) {
        // 0x0041DB70: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_0;
    // 0x0041DB70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0041DB74: jal         0x00426D8C
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D8C(rdram, ctx);
        goto after_2;
    // 0x0041DB78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x0041DB7C: bnel        $v0, $s0, L_0041DBB8
    if (ctx->r2 != ctx->r16) {
        // 0x0041DB80: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_1;
    // 0x0041DB80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x0041DB84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB88: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB8C: jal         0x00426D54
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_3;
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041DB94: bne         $v0, $zero, L_0041DBB8
    if (ctx->r2 != 0) {
        // 0x0041DB98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    // 0x0041DB98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBA0: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DBA4: jal         0x00426D54
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_4;
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x0041DBAC: beq         $v0, $zero, L_0041DBB8
    if (ctx->r2 == 0) {
        // 0x0041DBB0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DBB8;
    }
    // 0x0041DBB0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DBB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DBB8:
    // 0x0041DBB8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DBBC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBC0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
L_0041DBC4:
    // 0x0041DBC4: jal         0x00426D54
    // 0x0041DBC8: nop

    func_00426D54(rdram, ctx);
        goto after_5;
    // 0x0041DBC8: nop

    after_5:
    // 0x0041DBCC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DBD0: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DBD0: nop

    // 0x0041DBD4: bnel        $s0, $zero, L_0041DBDC
    if (ctx->r16 != 0) {
        // 0x0041DBD8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_2;
    // 0x0041DBD8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_2:
L_0041DBDC:
    // 0x0041DBDC: beq         $s1, $zero, L_0041DC00
    if (ctx->r17 == 0) {
        // 0x0041DBE0: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_0041DC00;
    }
    // 0x0041DBE0: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041DBE4: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DBE8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DBEC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DBF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DBF4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041DBF8: j           L_0041DC18
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_0041DC18;
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_0041DC00:
    // 0x0041DC00: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DC04: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DC08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DC0C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DC10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041DC14: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_0041DC18:
    // 0x0041DC18: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0041DC1C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0041DC20: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x0041DC24: bne         $v0, $zero, L_0041DA90
    if (ctx->r2 != 0) {
        // 0x0041DC28: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_0041DA90;
    }
    // 0x0041DC28: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x0041DC2C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x0041DC30: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x0041DC34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041DC38: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041DC3C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041DC40: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041DC44: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041DC48: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041DC4C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041DC50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041DC54: jr          $ra
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041DB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DA90:
    // 0x0041DB7C: bnel        $v0, $s0, L_0041DBB8
    if (ctx->r2 != ctx->r16) {
        // 0x0041DB80: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    goto skip_0;
    // 0x0041DB80: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x0041DB84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DB88: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0041DB8C: jal         0x00426D54
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426D54(rdram, ctx);
        goto after_0;
    // 0x0041DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041DB94: bne         $v0, $zero, L_0041DBB8
    if (ctx->r2 != 0) {
        // 0x0041DB98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041DBB8;
    }
    // 0x0041DB98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041DB9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBA0: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0041DBA4: jal         0x00426D54
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426D54(rdram, ctx);
        goto after_1;
    // 0x0041DBA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0041DBAC: beq         $v0, $zero, L_0041DBB8
    if (ctx->r2 == 0) {
        // 0x0041DBB0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_0041DBB8;
    }
    // 0x0041DBB0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041DBB4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_0041DBB8:
    // 0x0041DBB8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x0041DBBC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041DBC0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041DBC4: jal         0x00426D54
    // 0x0041DBC8: nop

    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x0041DBC8: nop

    after_2:
    // 0x0041DBCC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DBD0: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DBD0: nop

    // 0x0041DBD4: bnel        $s0, $zero, L_0041DBDC
    if (ctx->r16 != 0) {
        // 0x0041DBD8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_1;
    // 0x0041DBD8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_1:
L_0041DBDC:
    // 0x0041DBDC: beq         $s1, $zero, L_0041DC00
    if (ctx->r17 == 0) {
        // 0x0041DBE0: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_0041DC00;
    }
    // 0x0041DBE0: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041DBE4: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DBE8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DBEC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DBF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DBF4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041DBF8: j           L_0041DC18
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_0041DC18;
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_0041DC00:
    // 0x0041DC00: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DC04: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DC08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DC0C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DC10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041DC14: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_0041DC18:
    // 0x0041DC18: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0041DC1C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0041DC20: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x0041DC24: bne         $v0, $zero, L_0041DA90
    if (ctx->r2 != 0) {
        // 0x0041DC28: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_0041DA90;
    }
    // 0x0041DC28: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x0041DC2C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x0041DC30: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x0041DC34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041DC38: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041DC3C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041DC40: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041DC44: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041DC48: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041DC4C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041DC50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041DC54: jr          $ra
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041DBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041DA90:
    // 0x0041DBCC: bne         $v0, $zero, L_0041DBDC
    if (ctx->r2 != 0) {
        // 0x0041DBD0: nop
    
            goto L_0041DBDC;
    }
    // 0x0041DBD0: nop

    // 0x0041DBD4: bnel        $s0, $zero, L_0041DBDC
    if (ctx->r16 != 0) {
        // 0x0041DBD8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0041DBDC;
    }
    goto skip_0;
    // 0x0041DBD8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
L_0041DBDC:
    // 0x0041DBDC: beq         $s1, $zero, L_0041DC00
    if (ctx->r17 == 0) {
        // 0x0041DBE0: lui         $a0, 0xFEFF
        ctx->r4 = S32(0XFEFF << 16);
            goto L_0041DC00;
    }
    // 0x0041DBE0: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x0041DBE4: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DBE8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DBEC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DBF0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DBF4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041DBF8: j           L_0041DC18
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_0041DC18;
    // 0x0041DBFC: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_0041DC00:
    // 0x0041DC00: lw          $v0, 0xC($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC);
    // 0x0041DC04: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0041DC08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x0041DC0C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x0041DC10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x0041DC14: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_0041DC18:
    // 0x0041DC18: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x0041DC1C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x0041DC20: slti        $v0, $s5, 0x10
    ctx->r2 = SIGNED(ctx->r21) < 0X10 ? 1 : 0;
    // 0x0041DC24: bne         $v0, $zero, L_0041DA90
    if (ctx->r2 != 0) {
        // 0x0041DC28: addiu       $s4, $s4, 0x28
        ctx->r20 = ADD32(ctx->r20, 0X28);
            goto L_0041DA90;
    }
    // 0x0041DC28: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x0041DC2C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x0041DC30: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x0041DC34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x0041DC38: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0041DC3C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x0041DC40: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x0041DC44: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x0041DC48: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0041DC4C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x0041DC50: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x0041DC54: jr          $ra
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x0041DC58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void entry_0041DCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DCA4: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0041DCA8: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x0041DCAC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041DCB0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041DCB0(rdram, ctx);
;}
RECOMP_FUNC void entry_0041DCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DCA8: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x0041DCAC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041DCB0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041DCB0(rdram, ctx);
;}
RECOMP_FUNC void entry_0041DDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DDB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0041DDB4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0041DDB8: jal         0x00426480
    // 0x0041DDBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041DDBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x0041DDC0: jal         0x0042655C
    // 0x0041DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041DDC8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0041DDCC: jal         0x0041DC5C
    // 0x0041DDD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DC5C(rdram, ctx);
        goto after_2;
    // 0x0041DDD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041DDD4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041DDD8: beq         $s0, $zero, L_0041DF30
    if (ctx->r16 == 0) {
        // 0x0041DDDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041DF30;
    }
    // 0x0041DDDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041DDE0: jal         0x002858CC
    // 0x0041DDE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_002858CC(rdram, ctx);
        goto after_3;
    // 0x0041DDE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041DDE8: beq         $s3, $zero, L_0041DDF8
    if (ctx->r19 == 0) {
        // 0x0041DDEC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041DDF8;
    }
    // 0x0041DDEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0041DDF0: beq         $v1, $zero, L_0041DE38
    if (ctx->r3 == 0) {
        // 0x0041DDF4: nop
    
            goto L_0041DE38;
    }
    // 0x0041DDF4: nop

L_0041DDF8:
    // 0x0041DDF8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0041DDFC: beq         $s3, $v0, L_0041DE38
    if (ctx->r19 == ctx->r2) {
        // 0x0041DE00: nop
    
            goto L_0041DE38;
    }
    // 0x0041DE00: nop

    // 0x0041DE04: beq         $v1, $zero, L_0041DF30
    if (ctx->r3 == 0) {
        // 0x0041DE08: addu        $v0, $s3, $zero
        ctx->r2 = ADD32(ctx->r19, 0);
            goto L_0041DF30;
    }
    // 0x0041DE08: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0041DE0C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DE10: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DE14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DE18: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DE1C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DE20: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE24: addiu       $a1, $a1, -0x4328
    ctx->r5 = ADD32(ctx->r5, -0X4328);
    // 0x0041DE28: jal         0x00416644
    // 0x0041DE2C: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041DE2C: nop

    after_4:
    // 0x0041DE30: j           L_0041DF30
    // 0x0041DE34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_0041DF30;
    // 0x0041DE34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041DE38:
    // 0x0041DE38: jal         0x00426594
    // 0x0041DE3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426594(rdram, ctx);
        goto after_5;
    // 0x0041DE3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041DE40: beq         $v0, $zero, L_0041DEB0
    if (ctx->r2 == 0) {
        // 0x0041DE44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041DEB0;
    }
    // 0x0041DE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DE48: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041DE4C: lw          $v1, 0x990($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X990);
    // 0x0041DE50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DE54: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041DE58: beq         $v1, $zero, L_0041DE70
    if (ctx->r3 == 0) {
        // 0x0041DE5C: nop
    
            goto L_0041DE70;
    }
    // 0x0041DE5C: nop

    // 0x0041DE60: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE64: addiu       $a1, $a1, -0x43DC
    ctx->r5 = ADD32(ctx->r5, -0X43DC);
    // 0x0041DE68: j           L_0041DE90
    // 0x0041DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
        goto L_0041DE90;
    // 0x0041DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_0041DE70:
    // 0x0041DE70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DE74: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041DE78: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE7C: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041DE80: beq         $v0, $zero, L_0041DE90
    if (ctx->r2 == 0) {
        // 0x0041DE84: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041DE90;
    }
    // 0x0041DE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DE88: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE8C: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
L_0041DE90:
    // 0x0041DE90: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DE94: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DE98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DE9C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DEA0: jal         0x00416644
    // 0x0041DEA4: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041DEA4: nop

    after_6:
    // 0x0041DEA8: j           L_0041DF30
    // 0x0041DEAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DEAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DEB0:
    // 0x0041DEB0: bne         $s4, $zero, L_0041DF24
    if (ctx->r20 != 0) {
        // 0x0041DEB4: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0041DF24;
    }
    // 0x0041DEB4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0041DEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DEBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DEC0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041DEC4: jal         0x00426BD8
    // 0x0041DEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426BD8(rdram, ctx);
        goto after_7;
    // 0x0041DEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x0041DECC: beq         $v0, $zero, L_0041DEFC
    if (ctx->r2 == 0) {
        // 0x0041DED0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041DEFC;
    }
    // 0x0041DED0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DED4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DED8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DEDC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DEE0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DEE4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DEE8: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041DEEC: jal         0x00416644
    // 0x0041DEF0: nop

    func_00416644(rdram, ctx);
        goto after_8;
    // 0x0041DEF0: nop

    after_8:
    // 0x0041DEF4: j           L_0041DF30
    // 0x0041DEF8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DEF8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DEFC:
    // 0x0041DEFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DF00: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DF04: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DF08: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DF0C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DF10: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041DF14: jal         0x00416644
    // 0x0041DF18: nop

    func_00416644(rdram, ctx);
        goto after_9;
    // 0x0041DF18: nop

    after_9:
    // 0x0041DF1C: j           L_0041DF30
    // 0x0041DF20: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DF20: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DF24:
    // 0x0041DF24: bnel        $s3, $v0, L_0041DF2C
    if (ctx->r19 != ctx->r2) {
        // 0x0041DF28: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041DF2C;
    }
    goto skip_0;
    // 0x0041DF28: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_0:
L_0041DF2C:
    // 0x0041DF2C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DF30:
    // 0x0041DF30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041DF34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0041DF38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0041DF3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041DF40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DF44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041DF48: jr          $ra
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041DE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DE50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DE54: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041DE58: beq         $v1, $zero, L_0041DE70
    if (ctx->r3 == 0) {
        // 0x0041DE5C: nop
    
            goto L_0041DE70;
    }
    // 0x0041DE5C: nop

    // 0x0041DE60: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE64: addiu       $a1, $a1, -0x43DC
    ctx->r5 = ADD32(ctx->r5, -0X43DC);
    // 0x0041DE68: j           L_0041DE90
    // 0x0041DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
        goto L_0041DE90;
    // 0x0041DE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_0041DE70:
    // 0x0041DE70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041DE74: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041DE78: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE7C: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041DE80: beq         $v0, $zero, L_0041DE90
    if (ctx->r2 == 0) {
        // 0x0041DE84: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041DE90;
    }
    // 0x0041DE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DE88: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DE8C: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
L_0041DE90:
    // 0x0041DE90: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DE94: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DE98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DE9C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DEA0: jal         0x00416644
    // 0x0041DEA4: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041DEA4: nop

    after_0:
    // 0x0041DEA8: j           L_0041DF30
    // 0x0041DEAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DEAC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x0041DEB0: bne         $s4, $zero, L_0041DF24
    if (ctx->r20 != 0) {
        // 0x0041DEB4: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_0041DF24;
    }
    // 0x0041DEB4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x0041DEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041DEBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DEC0: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041DEC4: jal         0x00426BD8
    // 0x0041DEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00426BD8(rdram, ctx);
        goto after_1;
    // 0x0041DEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041DECC: beq         $v0, $zero, L_0041DEFC
    if (ctx->r2 == 0) {
        // 0x0041DED0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0041DEFC;
    }
    // 0x0041DED0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041DED4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DED8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DEDC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DEE0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DEE4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DEE8: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041DEEC: jal         0x00416644
    // 0x0041DEF0: nop

    func_00416644(rdram, ctx);
        goto after_2;
    // 0x0041DEF0: nop

    after_2:
    // 0x0041DEF4: j           L_0041DF30
    // 0x0041DEF8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DEF8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DEFC:
    // 0x0041DEFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041DF00: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041DF04: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041DF08: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041DF0C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DF10: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041DF14: jal         0x00416644
    // 0x0041DF18: nop

    func_00416644(rdram, ctx);
        goto after_3;
    // 0x0041DF18: nop

    after_3:
    // 0x0041DF1C: j           L_0041DF30
    // 0x0041DF20: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
        goto L_0041DF30;
    // 0x0041DF20: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DF24:
    // 0x0041DF24: bnel        $s3, $v0, L_0041DF2C
    if (ctx->r19 != ctx->r2) {
        // 0x0041DF28: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0041DF2C;
    }
    goto skip_0;
    // 0x0041DF28: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_0:
L_0041DF2C:
    // 0x0041DF2C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_0041DF30:
    // 0x0041DF30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041DF34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0041DF38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0041DF3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041DF40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DF44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041DF48: jr          $ra
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041DF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DF30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041DF34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0041DF38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0041DF3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041DF40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041DF44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041DF48: jr          $ra
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041DF4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041DF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041DF90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041DF94: sw          $zero, 0x2024($at)
    MEM_W(0X2024, ctx->r1) = 0;
    // 0x0041DF98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DF9C: sw          $zero, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = 0;
    // 0x0041DFA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041DFA4: sw          $zero, 0x990($at)
    MEM_W(0X990, ctx->r1) = 0;
    // 0x0041DFA8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041DFAC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0041DFB0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041DFB4: beq         $a0, $v1, L_0041DFE8
    if (ctx->r4 == ctx->r3) {
        // 0x0041DFB8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_0041DFE8;
    }
    // 0x0041DFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0041DFBC: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0041DFC0: bne         $v0, $zero, L_0041DFD8
    if (ctx->r2 != 0) {
        // 0x0041DFC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041DFD8;
    }
    // 0x0041DFC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041DFC8: beq         $a0, $v0, L_0041DFF8
    if (ctx->r4 == ctx->r2) {
        // 0x0041DFCC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041DFF8;
    }
    // 0x0041DFCC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041DFD0: beq         $a0, $v0, L_0041E008
    if (ctx->r4 == ctx->r2) {
        // 0x0041DFD4: nop
    
            goto L_0041E008;
    }
    // 0x0041DFD4: nop

L_0041DFD8:
    // 0x0041DFD8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DFDC: addiu       $a1, $a1, -0x5380
    ctx->r5 = ADD32(ctx->r5, -0X5380);
    // 0x0041DFE0: j           L_0041E010
    // 0x0041DFE4: nop

        goto L_0041E010;
    // 0x0041DFE4: nop

L_0041DFE8:
    // 0x0041DFE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DFEC: addiu       $a1, $a1, -0x535C
    ctx->r5 = ADD32(ctx->r5, -0X535C);
    // 0x0041DFF0: j           L_0041E010
    // 0x0041DFF4: nop

        goto L_0041E010;
    // 0x0041DFF4: nop

L_0041DFF8:
    // 0x0041DFF8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041DFFC: addiu       $a1, $a1, -0x5338
    ctx->r5 = ADD32(ctx->r5, -0X5338);
    // 0x0041E000: j           L_0041E010
    // 0x0041E004: nop

        goto L_0041E010;
    // 0x0041E004: nop

L_0041E008:
    // 0x0041E008: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E00C: addiu       $a1, $a1, -0x5314
    ctx->r5 = ADD32(ctx->r5, -0X5314);
L_0041E010:
    // 0x0041E010: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041E014: lw          $v0, 0x2020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2020);
    // 0x0041E018: beq         $v0, $zero, L_0041E048
    if (ctx->r2 == 0) {
        // 0x0041E01C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_0041E048;
    }
    // 0x0041E01C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041E020: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x0041E024: lw          $a0, 0x51C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X51C);
    // 0x0041E028: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041E02C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E030: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041E034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E038: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E03C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E040: j           L_0041E1B8
    // 0x0041E044: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_0041E1B8;
    // 0x0041E044: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041E048:
    // 0x0041E048: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041E04C: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041E050: beq         $v0, $zero, L_0041E068
    if (ctx->r2 == 0) {
        // 0x0041E054: nop
    
            goto L_0041E068;
    }
    // 0x0041E054: nop

    // 0x0041E058: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E05C: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E060: j           L_0041E070
    // 0x0041E064: nop

        goto L_0041E070;
    // 0x0041E064: nop

L_0041E068:
    // 0x0041E068: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x0041E06C: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
L_0041E070:
    // 0x0041E070: jal         0x00426480
    // 0x0041E074: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E074: nop

    after_0:
    // 0x0041E078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E07C: jal         0x0042655C
    // 0x0041E080: nop

    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E080: nop

    after_1:
    // 0x0041E084: bne         $v0, $zero, L_0041E138
    if (ctx->r2 != 0) {
        // 0x0041E088: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E138;
    }
    // 0x0041E088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E08C: lw          $a2, 0x518($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X518);
    // 0x0041E090: lbu         $v0, 0x30($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X30);
    // 0x0041E094: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E098: sb          $v0, 0x970($at)
    MEM_B(0X970, ctx->r1) = ctx->r2;
    // 0x0041E09C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x0041E0A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0A4: sh          $v0, 0x968($at)
    MEM_H(0X968, ctx->r1) = ctx->r2;
    // 0x0041E0A8: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x0041E0AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0B0: sh          $v0, 0x96A($at)
    MEM_H(0X96A, ctx->r1) = ctx->r2;
    // 0x0041E0B4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x0041E0B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0BC: sh          $v0, 0x96C($at)
    MEM_H(0X96C, ctx->r1) = ctx->r2;
    // 0x0041E0C0: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x0041E0C4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041E0C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0CC: sb          $zero, 0x971($at)
    MEM_B(0X971, ctx->r1) = 0;
    // 0x0041E0D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0D4: sb          $zero, 0x972($at)
    MEM_B(0X972, ctx->r1) = 0;
    // 0x0041E0D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0DC: sb          $zero, 0x973($at)
    MEM_B(0X973, ctx->r1) = 0;
    // 0x0041E0E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0E4: sh          $v0, 0x96E($at)
    MEM_H(0X96E, ctx->r1) = ctx->r2;
    // 0x0041E0E8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
L_0041E0EC:
    // 0x0041E0EC: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x0041E0F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041E0F8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0041E0FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041E100: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0041E104: bne         $v0, $zero, L_0041E0EC
    if (ctx->r2 != 0) {
        // 0x0041E108: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041E0EC;
    }
    // 0x0041E108: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041E10C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041E110: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041E114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041E118: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041E11C: jal         0x00426E78
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_2;
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x0041E124: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041E128: jal         0x0041DA28
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_3;
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041E130: j           L_0041E1C0
    // 0x0041E134: nop

        goto L_0041E1C0;
    // 0x0041E134: nop

L_0041E138:
    // 0x0041E138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E13C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E140: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E144: jal         0x00426594
    // 0x0041E148: nop

    func_00426594(rdram, ctx);
        goto after_4;
    // 0x0041E148: nop

    after_4:
    // 0x0041E14C: beq         $v0, $zero, L_0041E16C
    if (ctx->r2 == 0) {
        // 0x0041E150: nop
    
            goto L_0041E16C;
    }
    // 0x0041E150: nop

    // 0x0041E154: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E158: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E15C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E160: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041E164: j           L_0041E1B0
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041E1B0;
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041E16C:
    // 0x0041E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E170: jal         0x00426BD8
    // 0x0041E174: nop

    func_00426BD8(rdram, ctx);
        goto after_5;
    // 0x0041E174: nop

    after_5:
    // 0x0041E178: beql        $v0, $zero, L_0041E1A0
    if (ctx->r2 == 0) {
        // 0x0041E17C: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_0041E1A0;
    }
    goto skip_0;
    // 0x0041E17C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x0041E180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E184: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E188: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E18C: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E190: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E194: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x0041E198: j           L_0041E1B0
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041E1B0;
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041E1A0:
    // 0x0041E1A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E1A4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E1A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E1AC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E1B0:
    // 0x0041E1B0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041E1B4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041E1B8:
    // 0x0041E1B8: jal         0x00416644
    // 0x0041E1BC: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041E1BC: nop

    after_6:
L_0041E1C0:
    // 0x0041E1C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E1C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041E1C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041E1CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041E1D0: jr          $ra
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041E0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E0D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0D4: sb          $zero, 0x972($at)
    MEM_B(0X972, ctx->r1) = 0;
    // 0x0041E0D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0DC: sb          $zero, 0x973($at)
    MEM_B(0X973, ctx->r1) = 0;
    // 0x0041E0E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0E4: sh          $v0, 0x96E($at)
    MEM_H(0X96E, ctx->r1) = ctx->r2;
    // 0x0041E0E8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
L_0041E0EC:
    // 0x0041E0EC: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x0041E0F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041E0F8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0041E0FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041E100: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0041E104: bne         $v0, $zero, L_0041E0EC
    if (ctx->r2 != 0) {
        // 0x0041E108: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041E0EC;
    }
    // 0x0041E108: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041E10C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041E110: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041E114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041E118: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041E11C: jal         0x00426E78
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_0;
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x0041E124: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041E128: jal         0x0041DA28
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_1;
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041E130: j           L_0041E1C0
    // 0x0041E134: nop

        goto L_0041E1C0;
    // 0x0041E134: nop

    // 0x0041E138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E13C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E140: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E144: jal         0x00426594
    // 0x0041E148: nop

    func_00426594(rdram, ctx);
        goto after_2;
    // 0x0041E148: nop

    after_2:
    // 0x0041E14C: beq         $v0, $zero, L_0041E16C
    if (ctx->r2 == 0) {
        // 0x0041E150: nop
    
            goto L_0041E16C;
    }
    // 0x0041E150: nop

    // 0x0041E154: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E158: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E15C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E160: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041E164: j           L_0041E1B0
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041E1B0;
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041E16C:
    // 0x0041E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E170: jal         0x00426BD8
    // 0x0041E174: nop

    func_00426BD8(rdram, ctx);
        goto after_3;
    // 0x0041E174: nop

    after_3:
    // 0x0041E178: beql        $v0, $zero, L_0041E1A0
    if (ctx->r2 == 0) {
        // 0x0041E17C: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_0041E1A0;
    }
    goto skip_0;
    // 0x0041E17C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x0041E180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E184: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E188: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E18C: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E190: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E194: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x0041E198: j           L_0041E1B0
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041E1B0;
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041E1A0:
    // 0x0041E1A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E1A4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E1A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E1AC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E1B0:
    // 0x0041E1B0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041E1B4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041E1B8: jal         0x00416644
    // 0x0041E1BC: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041E1BC: nop

    after_4:
L_0041E1C0:
    // 0x0041E1C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E1C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041E1C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041E1CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041E1D0: jr          $ra
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041E0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E0D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0DC: sb          $zero, 0x973($at)
    MEM_B(0X973, ctx->r1) = 0;
    // 0x0041E0E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0E4: sh          $v0, 0x96E($at)
    MEM_H(0X96E, ctx->r1) = ctx->r2;
    // 0x0041E0E8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
L_0041E0EC:
    // 0x0041E0EC: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x0041E0F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041E0F8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0041E0FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041E100: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0041E104: bne         $v0, $zero, L_0041E0EC
    if (ctx->r2 != 0) {
        // 0x0041E108: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041E0EC;
    }
    // 0x0041E108: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041E10C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041E110: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041E114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041E118: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041E11C: jal         0x00426E78
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_0;
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x0041E124: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041E128: jal         0x0041DA28
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_1;
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041E130: j           L_0041E1C0
    // 0x0041E134: nop

        goto L_0041E1C0;
    // 0x0041E134: nop

    // 0x0041E138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E13C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E140: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E144: jal         0x00426594
    // 0x0041E148: nop

    func_00426594(rdram, ctx);
        goto after_2;
    // 0x0041E148: nop

    after_2:
    // 0x0041E14C: beq         $v0, $zero, L_0041E16C
    if (ctx->r2 == 0) {
        // 0x0041E150: nop
    
            goto L_0041E16C;
    }
    // 0x0041E150: nop

    // 0x0041E154: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E158: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E15C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E160: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041E164: j           L_0041E1B0
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041E1B0;
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041E16C:
    // 0x0041E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E170: jal         0x00426BD8
    // 0x0041E174: nop

    func_00426BD8(rdram, ctx);
        goto after_3;
    // 0x0041E174: nop

    after_3:
    // 0x0041E178: beql        $v0, $zero, L_0041E1A0
    if (ctx->r2 == 0) {
        // 0x0041E17C: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_0041E1A0;
    }
    goto skip_0;
    // 0x0041E17C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x0041E180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E184: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E188: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E18C: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E190: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E194: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x0041E198: j           L_0041E1B0
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041E1B0;
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041E1A0:
    // 0x0041E1A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E1A4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E1A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E1AC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E1B0:
    // 0x0041E1B0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041E1B4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041E1B8: jal         0x00416644
    // 0x0041E1BC: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041E1BC: nop

    after_4:
L_0041E1C0:
    // 0x0041E1C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E1C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041E1C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041E1CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041E1D0: jr          $ra
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041E0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E0E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0E4: sh          $v0, 0x96E($at)
    MEM_H(0X96E, ctx->r1) = ctx->r2;
    // 0x0041E0E8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
L_0041E0EC:
    // 0x0041E0EC: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x0041E0F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E0F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x0041E0F8: sb          $v0, 0x974($at)
    MEM_B(0X974, ctx->r1) = ctx->r2;
    // 0x0041E0FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041E100: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x0041E104: bne         $v0, $zero, L_0041E0EC
    if (ctx->r2 != 0) {
        // 0x0041E108: addu        $v0, $a2, $v1
        ctx->r2 = ADD32(ctx->r6, ctx->r3);
            goto L_0041E0EC;
    }
    // 0x0041E108: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x0041E10C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0041E110: addiu       $s0, $s0, 0x968
    ctx->r16 = ADD32(ctx->r16, 0X968);
    // 0x0041E114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041E118: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0041E11C: jal         0x00426E78
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00426E78(rdram, ctx);
        goto after_0;
    // 0x0041E120: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x0041E124: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0041E128: jal         0x0041DA28
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0041DA28(rdram, ctx);
        goto after_1;
    // 0x0041E12C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0041E130: j           L_0041E1C0
    // 0x0041E134: nop

        goto L_0041E1C0;
    // 0x0041E134: nop

    // 0x0041E138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E13C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E140: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E144: jal         0x00426594
    // 0x0041E148: nop

    func_00426594(rdram, ctx);
        goto after_2;
    // 0x0041E148: nop

    after_2:
    // 0x0041E14C: beq         $v0, $zero, L_0041E16C
    if (ctx->r2 == 0) {
        // 0x0041E150: nop
    
            goto L_0041E16C;
    }
    // 0x0041E150: nop

    // 0x0041E154: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E158: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E15C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E160: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041E164: j           L_0041E1B0
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041E1B0;
    // 0x0041E168: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041E16C:
    // 0x0041E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041E170: jal         0x00426BD8
    // 0x0041E174: nop

    func_00426BD8(rdram, ctx);
        goto after_3;
    // 0x0041E174: nop

    after_3:
    // 0x0041E178: beql        $v0, $zero, L_0041E1A0
    if (ctx->r2 == 0) {
        // 0x0041E17C: sw          $s1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r17;
            goto L_0041E1A0;
    }
    goto skip_0;
    // 0x0041E17C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    skip_0:
    // 0x0041E180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E184: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E188: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E18C: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E190: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E194: addiu       $v0, $v0, -0x4934
    ctx->r2 = ADD32(ctx->r2, -0X4934);
    // 0x0041E198: j           L_0041E1B0
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041E1B0;
    // 0x0041E19C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041E1A0:
    // 0x0041E1A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E1A4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E1A8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E1AC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E1B0:
    // 0x0041E1B0: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041E1B4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041E1B8: jal         0x00416644
    // 0x0041E1BC: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041E1BC: nop

    after_4:
L_0041E1C0:
    // 0x0041E1C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E1C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0041E1C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041E1CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041E1D0: jr          $ra
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041E1D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041E274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E274: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E278: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E27C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E280: j           L_0041E354
    // 0x0041E284: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_0041E354;
    // 0x0041E284: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    // 0x0041E288: jal         0x00426480
    // 0x0041E28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041E290: jal         0x0042655C
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041E298: bne         $v0, $zero, L_0041E2B0
    if (ctx->r2 != 0) {
        // 0x0041E29C: nop
    
            goto L_0041E2B0;
    }
    // 0x0041E29C: nop

    // 0x0041E2A0: jal         0x0041DA28
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041E2A8: j           L_0041E35C
    // 0x0041E2AC: nop

        goto L_0041E35C;
    // 0x0041E2AC: nop

L_0041E2B0:
    // 0x0041E2B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E2B4: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041E2B8: jal         0x00426594
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041E2C0: beq         $v0, $zero, L_0041E2F4
    if (ctx->r2 == 0) {
        // 0x0041E2C4: nop
    
            goto L_0041E2F4;
    }
    // 0x0041E2C4: nop

    // 0x0041E2C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E2CC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E2D0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E2D4: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E2D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E2DC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E2E0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E2E4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E2E8: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041E2EC: j           L_0041E354
    // 0x0041E2F0: nop

        goto L_0041E354;
    // 0x0041E2F0: nop

L_0041E2F4:
    // 0x0041E2F4: jal         0x00426BD8
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041E2FC: beq         $v0, $zero, L_0041E330
    if (ctx->r2 == 0) {
        // 0x0041E300: nop
    
            goto L_0041E330;
    }
    // 0x0041E300: nop

    // 0x0041E304: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E308: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E30C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E310: addiu       $v0, $v0, -0x4958
    ctx->r2 = ADD32(ctx->r2, -0X4958);
    // 0x0041E314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E318: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E31C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E320: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E324: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E328: j           L_0041E354
    // 0x0041E32C: nop

        goto L_0041E354;
    // 0x0041E32C: nop

L_0041E330:
    // 0x0041E330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E334: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E338: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E33C: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E340: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E344: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E348: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E34C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E350: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E354:
    // 0x0041E354: jal         0x00416644
    // 0x0041E358: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041E358: nop

    after_5:
L_0041E35C:
    // 0x0041E35C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041E360: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041E364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041E368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041E36C: jr          $ra
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041E27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E27C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E280: j           L_0041E354
    // 0x0041E284: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
        goto L_0041E354;
    // 0x0041E284: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    // 0x0041E288: jal         0x00426480
    // 0x0041E28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041E290: jal         0x0042655C
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041E298: bne         $v0, $zero, L_0041E2B0
    if (ctx->r2 != 0) {
        // 0x0041E29C: nop
    
            goto L_0041E2B0;
    }
    // 0x0041E29C: nop

    // 0x0041E2A0: jal         0x0041DA28
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041E2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041E2A8: j           L_0041E35C
    // 0x0041E2AC: nop

        goto L_0041E35C;
    // 0x0041E2AC: nop

L_0041E2B0:
    // 0x0041E2B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E2B4: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041E2B8: jal         0x00426594
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041E2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041E2C0: beq         $v0, $zero, L_0041E2F4
    if (ctx->r2 == 0) {
        // 0x0041E2C4: nop
    
            goto L_0041E2F4;
    }
    // 0x0041E2C4: nop

    // 0x0041E2C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E2CC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E2D0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E2D4: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E2D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E2DC: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E2E0: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E2E4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E2E8: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041E2EC: j           L_0041E354
    // 0x0041E2F0: nop

        goto L_0041E354;
    // 0x0041E2F0: nop

L_0041E2F4:
    // 0x0041E2F4: jal         0x00426BD8
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041E2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041E2FC: beq         $v0, $zero, L_0041E330
    if (ctx->r2 == 0) {
        // 0x0041E300: nop
    
            goto L_0041E330;
    }
    // 0x0041E300: nop

    // 0x0041E304: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E308: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E30C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E310: addiu       $v0, $v0, -0x4958
    ctx->r2 = ADD32(ctx->r2, -0X4958);
    // 0x0041E314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E318: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E31C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E320: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E324: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E328: j           L_0041E354
    // 0x0041E32C: nop

        goto L_0041E354;
    // 0x0041E32C: nop

L_0041E330:
    // 0x0041E330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E334: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E338: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E33C: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E340: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E344: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E348: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E34C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E350: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E354:
    // 0x0041E354: jal         0x00416644
    // 0x0041E358: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041E358: nop

    after_5:
L_0041E35C:
    // 0x0041E35C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041E360: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041E364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041E368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041E36C: jr          $ra
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041E308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E308: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E30C: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E310: addiu       $v0, $v0, -0x4958
    ctx->r2 = ADD32(ctx->r2, -0X4958);
    // 0x0041E314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E318: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E31C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E320: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E324: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041E328: j           L_0041E354
    // 0x0041E32C: nop

        goto L_0041E354;
    // 0x0041E32C: nop

    // 0x0041E330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E334: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E338: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E33C: addiu       $v0, $v0, -0x77D4
    ctx->r2 = ADD32(ctx->r2, -0X77D4);
    // 0x0041E340: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E344: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041E348: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041E34C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E350: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041E354:
    // 0x0041E354: jal         0x00416644
    // 0x0041E358: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041E358: nop

    after_0:
    // 0x0041E35C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041E360: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041E364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041E368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041E36C: jr          $ra
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041E354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E354: jal         0x00416644
    // 0x0041E358: nop

    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041E358: nop

    after_0:
    // 0x0041E35C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041E360: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041E364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041E368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041E36C: jr          $ra
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041E370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041E3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E3E8:
    // 0x0041E3E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E3EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_0041E3F0:
    // 0x0041E3F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E3F4: jal         0x00426978
    // 0x0041E3F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_00426978(rdram, ctx);
        goto after_0;
    // 0x0041E3F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x0041E3FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x0041E400: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0041E404: jal         0x00426C88
    // 0x0041E408: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_1;
    // 0x0041E408: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x0041E40C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E410: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E414: jal         0x00426D54
    // 0x0041E418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00426D54(rdram, ctx);
        goto after_2;
    // 0x0041E418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x0041E41C: beq         $v0, $zero, L_0041E454
    if (ctx->r2 == 0) {
        // 0x0041E420: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E454;
    }
    // 0x0041E420: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E424: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E428: bnel        $v0, $zero, L_0041E3F0
    if (ctx->r2 != 0) {
        // 0x0041E42C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0041E3F0;
    }
    goto skip_0;
    // 0x0041E42C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0041E430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E434:
    // 0x0041E434: bnel        $s1, $zero, L_0041E444
    if (ctx->r17 != 0) {
        // 0x0041E438: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E444;
    }
    goto skip_1;
    // 0x0041E438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x0041E43C: beq         $v0, $zero, L_0041E464
    if (ctx->r2 == 0) {
        // 0x0041E440: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E464;
    }
    // 0x0041E440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E444:
    // 0x0041E444: addiu       $v1, $zero, 0x7B
    ctx->r3 = ADD32(0, 0X7B);
    // 0x0041E448: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    // 0x0041E44C: j           L_0041E4E0
    // 0x0041E450: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
        goto L_0041E4E0;
    // 0x0041E450: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
L_0041E454:
    // 0x0041E454: j           L_0041E434
    // 0x0041E458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E434;
    // 0x0041E458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E45C: j           L_0041E3E8
    // 0x0041E460: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_0041E3E8;
    // 0x0041E460: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0041E464:
    // 0x0041E464: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E468: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E46C: jal         0x004267A0
    // 0x0041E470: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_004267A0(rdram, ctx);
        goto after_3;
    // 0x0041E470: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x0041E474: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E478: bne         $s0, $zero, L_0041E4E0
    if (ctx->r16 != 0) {
        // 0x0041E47C: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E47C: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0041E480: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E484: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E488: jal         0x0042670C
    // 0x0041E48C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_0042670C(rdram, ctx);
        goto after_4;
    // 0x0041E48C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x0041E490: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E494: bne         $s0, $zero, L_0041E4E0
    if (ctx->r16 != 0) {
        // 0x0041E498: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E498: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0041E49C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E4A0: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E4A4: jal         0x00426E6C
    // 0x0041E4A8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_5;
    // 0x0041E4A8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_5:
    // 0x0041E4AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E4B0: beq         $v1, $zero, L_0041E4C8
    if (ctx->r3 == 0) {
        // 0x0041E4B4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E4C8;
    }
    // 0x0041E4B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E4B8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0041E4BC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E4C0: beq         $v0, $zero, L_0041E4E0
    if (ctx->r2 == 0) {
        // 0x0041E4C4: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E4C4: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
L_0041E4C8:
    // 0x0041E4C8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0041E4CC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E4D0: beq         $v0, $zero, L_0041E4E0
    if (ctx->r2 == 0) {
        // 0x0041E4D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041E4E0;
    }
    // 0x0041E4D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041E4D8: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x0041E4DC: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
L_0041E4E0:
    // 0x0041E4E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0041E4E4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041E4E8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E4EC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041E4F0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041E4F4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041E4F8: jr          $ra
    // 0x0041E4FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0041E4FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_0041E400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E3E8:
    // 0x0041E400: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_0041E3F0:
    // 0x0041E404: jal         0x00426C88
    // 0x0041E408: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_0;
    // 0x0041E408: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x0041E40C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E410: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E414: jal         0x00426D54
    // 0x0041E418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00426D54(rdram, ctx);
        goto after_1;
    // 0x0041E418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x0041E41C: beq         $v0, $zero, L_0041E454
    if (ctx->r2 == 0) {
        // 0x0041E420: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E454;
    }
    // 0x0041E420: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E424: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E428: bnel        $v0, $zero, L_0041E3F0
    if (ctx->r2 != 0) {
        // 0x0041E42C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0041E3F0;
    }
    goto skip_0;
    // 0x0041E42C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x0041E430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E434:
    // 0x0041E434: bnel        $s1, $zero, L_0041E444
    if (ctx->r17 != 0) {
        // 0x0041E438: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E444;
    }
    goto skip_1;
    // 0x0041E438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x0041E43C: beq         $v0, $zero, L_0041E464
    if (ctx->r2 == 0) {
        // 0x0041E440: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041E464;
    }
    // 0x0041E440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E444:
    // 0x0041E444: addiu       $v1, $zero, 0x7B
    ctx->r3 = ADD32(0, 0X7B);
    // 0x0041E448: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    // 0x0041E44C: j           L_0041E4E0
    // 0x0041E450: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
        goto L_0041E4E0;
    // 0x0041E450: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
L_0041E454:
    // 0x0041E454: j           L_0041E434
    // 0x0041E458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E434;
    // 0x0041E458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E45C: j           L_0041E3E8
    // 0x0041E460: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    entry_0041E3E8(rdram, ctx);
    return;
    // 0x0041E460: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_0041E464:
    // 0x0041E464: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E468: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E46C: jal         0x004267A0
    // 0x0041E470: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_004267A0(rdram, ctx);
        goto after_2;
    // 0x0041E470: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x0041E474: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E478: bne         $s0, $zero, L_0041E4E0
    if (ctx->r16 != 0) {
        // 0x0041E47C: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E47C: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0041E480: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E484: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E488: jal         0x0042670C
    // 0x0041E48C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_0042670C(rdram, ctx);
        goto after_3;
    // 0x0041E48C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x0041E490: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E494: bne         $s0, $zero, L_0041E4E0
    if (ctx->r16 != 0) {
        // 0x0041E498: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E498: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x0041E49C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E4A0: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E4A4: jal         0x00426E6C
    // 0x0041E4A8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_4;
    // 0x0041E4A8: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_4:
    // 0x0041E4AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0041E4B0: beq         $v1, $zero, L_0041E4C8
    if (ctx->r3 == 0) {
        // 0x0041E4B4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E4C8;
    }
    // 0x0041E4B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E4B8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0041E4BC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E4C0: beq         $v0, $zero, L_0041E4E0
    if (ctx->r2 == 0) {
        // 0x0041E4C4: sltiu       $v0, $s0, 0x1
        ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_0041E4E0;
    }
    // 0x0041E4C4: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
L_0041E4C8:
    // 0x0041E4C8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x0041E4CC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E4D0: beq         $v0, $zero, L_0041E4E0
    if (ctx->r2 == 0) {
        // 0x0041E4D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0041E4E0;
    }
    // 0x0041E4D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041E4D8: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x0041E4DC: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
L_0041E4E0:
    // 0x0041E4E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x0041E4E4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041E4E8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E4EC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041E4F0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041E4F4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041E4F8: jr          $ra
    // 0x0041E4FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0041E4FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_0041E73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E720:
    // 0x0041E73C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x0041E740: bne         $s3, $zero, L_0041E85C
    if (ctx->r19 != 0) {
        // 0x0041E744: nop
    
            goto L_0041E85C;
    }
    // 0x0041E744: nop

    // 0x0041E748: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041E74C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0041E750: beq         $v0, $s5, L_0041E768
    if (ctx->r2 == ctx->r21) {
        // 0x0041E754: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E768;
    }
    // 0x0041E754: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E758: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x0041E75C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041E760: beql        $v0, $zero, L_0041E768
    if (ctx->r2 == 0) {
        // 0x0041E764: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E768;
    }
    goto skip_0;
    // 0x0041E764: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_0041E768:
    // 0x0041E768: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0041E76C:
    // 0x0041E76C: jal         0x00426480
    // 0x0041E770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041E770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041E774: jal         0x0042655C
    // 0x0041E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041E77C: bne         $v0, $s6, L_0041E7A4
    if (ctx->r2 != ctx->r22) {
        // 0x0041E780: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0041E7A4;
    }
    // 0x0041E780: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0041E784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E788: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0041E78C: beql        $v0, $zero, L_0041E794
    if (ctx->r2 == 0) {
        // 0x0041E790: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_0041E794;
    }
    goto skip_1;
    // 0x0041E790: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
L_0041E794:
    // 0x0041E794: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041E798: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x0041E79C: bne         $v0, $zero, L_0041E76C
    if (ctx->r2 != 0) {
        // 0x0041E7A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0041E76C;
    }
    // 0x0041E7A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_0041E7A4:
    // 0x0041E7A4: beql        $s1, $v0, L_0041E7AC
    if (ctx->r17 == ctx->r2) {
        // 0x0041E7A8: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_0041E7AC;
    }
    goto skip_2;
    // 0x0041E7A8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    skip_2:
L_0041E7AC:
    // 0x0041E7AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E7B0: sw          $s0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r16;
    // 0x0041E7B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0041E7B8: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x0041E7BC: bne         $v0, $zero, L_0041E720
    if (ctx->r2 != 0) {
        // 0x0041E7C0: nop
    
            goto L_0041E720;
    }
    // 0x0041E7C0: nop

    // 0x0041E7C4: bne         $s3, $zero, L_0041E85C
    if (ctx->r19 != 0) {
        // 0x0041E7C8: nop
    
            goto L_0041E85C;
    }
    // 0x0041E7C8: nop

    // 0x0041E7CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0041E7D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E7D4: sw          $a0, 0x2028($at)
    MEM_W(0X2028, ctx->r1) = ctx->r4;
    // 0x0041E7D8: jal         0x00426480
    // 0x0041E7DC: nop

    func_00426480(rdram, ctx);
        goto after_2;
    // 0x0041E7DC: nop

    after_2:
    // 0x0041E7E0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E7E4: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E7E8: jal         0x0042655C
    // 0x0041E7EC: nop

    func_0042655C(rdram, ctx);
        goto after_3;
    // 0x0041E7EC: nop

    after_3:
    // 0x0041E7F0: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x0041E7F4: bne         $v0, $v1, L_0041E85C
    if (ctx->r2 != ctx->r3) {
        // 0x0041E7F8: nop
    
            goto L_0041E85C;
    }
    // 0x0041E7F8: nop

    // 0x0041E7FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E800: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E804: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E808: addiu       $a1, $a1, -0x434C
    ctx->r5 = ADD32(ctx->r5, -0X434C);
    // 0x0041E80C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041E810: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E814: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E818: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x0041E81C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E820: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // 0x0041E824: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E828: sw          $zero, -0xEBC($at)
    MEM_W(-0XEBC, ctx->r1) = 0;
    // 0x0041E82C: jal         0x00416644
    // 0x0041E830: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041E830: nop

    after_4:
    // 0x0041E834: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E838: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041E83C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041E840: sw          $s0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r16;
    // 0x0041E844: j           L_0041EA5C
    // 0x0041E848: nop

        goto L_0041EA5C;
    // 0x0041E848: nop

L_0041E84C:
    // 0x0041E84C: j           L_0041E8B0
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_0041E8B0;
    // 0x0041E850: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_0041E854:
    // 0x0041E854: j           L_0041E904
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041E904;
    // 0x0041E858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041E85C:
    // 0x0041E85C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E860: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E864: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E86C:
    // 0x0041E86C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E870: jal         0x00426978
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_00426978(rdram, ctx);
        goto after_5;
    // 0x0041E874: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x0041E878: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0041E87C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E880: jal         0x00426C88
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_6;
    // 0x0041E884: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x0041E888: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E88C: addiu       $a1, $a1, 0x45C0
    ctx->r5 = ADD32(ctx->r5, 0X45C0);
    // 0x0041E890: jal         0x00426D54
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_7;
    // 0x0041E894: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_7:
    // 0x0041E898: beq         $v0, $zero, L_0041E84C
    if (ctx->r2 == 0) {
        // 0x0041E89C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E84C;
    }
    // 0x0041E89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8A0: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8A4: bnel        $v0, $zero, L_0041E86C
    if (ctx->r2 != 0) {
        // 0x0041E8A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E86C;
    }
    goto skip_3;
    // 0x0041E8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_3:
    // 0x0041E8AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_0041E8B0:
    // 0x0041E8B0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x0041E8B4: lw          $s1, 0x2028($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2028);
    // 0x0041E8B8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041E8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0041E8C0:
    // 0x0041E8C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0041E8C4: jal         0x00426978
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_00426978(rdram, ctx);
        goto after_8;
    // 0x0041E8C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x0041E8CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x0041E8D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x0041E8D4: jal         0x00426C88
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_00426C88(rdram, ctx);
        goto after_9;
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x0041E8DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E8E0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E8E4: jal         0x00426D54
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_10;
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_10:
    // 0x0041E8EC: beq         $v0, $zero, L_0041E854
    if (ctx->r2 == 0) {
        // 0x0041E8F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E854;
    }
    // 0x0041E8F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8F4: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8F8: bnel        $v0, $zero, L_0041E8C0
    if (ctx->r2 != 0) {
        // 0x0041E8FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E8C0;
    }
    goto skip_4;
    // 0x0041E8FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_4:
    // 0x0041E900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041E904:
    // 0x0041E904: bne         $s2, $zero, L_0041EA30
    if (ctx->r18 != 0) {
        // 0x0041E908: nop
    
            goto L_0041EA30;
    }
    // 0x0041E908: nop

    // 0x0041E90C: bne         $v0, $zero, L_0041EA30
    if (ctx->r2 != 0) {
        // 0x0041E910: nop
    
            goto L_0041EA30;
    }
    // 0x0041E910: nop

    // 0x0041E914: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E918: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E91C: jal         0x004267A0
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_004267A0(rdram, ctx);
        goto after_11;
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_11:
    // 0x0041E924: bne         $v0, $zero, L_0041E9F0
    if (ctx->r2 != 0) {
        // 0x0041E928: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E928: nop

    // 0x0041E92C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E930: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E934: jal         0x0042670C
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_0042670C(rdram, ctx);
        goto after_12;
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_12:
    // 0x0041E93C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E940: bne         $s0, $zero, L_0041E9F0
    if (ctx->r16 != 0) {
        // 0x0041E944: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E944: nop

    // 0x0041E948: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E94C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E950: jal         0x00426E6C
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_13;
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_13:
    // 0x0041E958: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041E95C: jal         0x00426E6C
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00426E6C(rdram, ctx);
        goto after_14;
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_14:
    // 0x0041E964: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E968: beq         $v1, $zero, L_0041E9A8
    if (ctx->r3 == 0) {
        // 0x0041E96C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E9A8;
    }
    // 0x0041E96C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E970: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0041E974: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E978: bne         $v1, $zero, L_0041E9A8
    if (ctx->r3 != 0) {
        // 0x0041E97C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_0041E9A8;
    }
    // 0x0041E97C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041E980: beq         $v0, $zero, L_0041E9A0
    if (ctx->r2 == 0) {
        // 0x0041E984: nop
    
            goto L_0041E9A0;
    }
    // 0x0041E984: nop

    // 0x0041E988: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E98C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E990: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E994: addiu       $a1, $a1, -0x3E18
    ctx->r5 = ADD32(ctx->r5, -0X3E18);
    // 0x0041E998: j           L_0041E9B8
    // 0x0041E99C: nop

        goto L_0041E9B8;
    // 0x0041E99C: nop

L_0041E9A0:
    // 0x0041E9A0: beq         $v1, $zero, L_0041E9E8
    if (ctx->r3 == 0) {
        // 0x0041E9A4: nop
    
            goto L_0041E9E8;
    }
    // 0x0041E9A4: nop

L_0041E9A8:
    // 0x0041E9A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9B4: addiu       $a1, $a1, -0x3E3C
    ctx->r5 = ADD32(ctx->r5, -0X3E3C);
L_0041E9B8:
    // 0x0041E9B8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E9BC: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041E9C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E9C4: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E9C8: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E9D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E9D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E9DC: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041E9E0: jal         0x00416644
    // 0x0041E9E4: nop

    func_00416644(rdram, ctx);
        goto after_15;
    // 0x0041E9E4: nop

    after_15:
L_0041E9E8:
    // 0x0041E9E8: beq         $s0, $zero, L_0041EA30
    if (ctx->r16 == 0) {
        // 0x0041E9EC: nop
    
            goto L_0041EA30;
    }
    // 0x0041E9EC: nop

L_0041E9F0:
    // 0x0041E9F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9F4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9F8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9FC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EA00: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EA04: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041EA08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EA0C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041EA10: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041EA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EA1C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041EA20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA24: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041EA28: jal         0x00416644
    // 0x0041EA2C: nop

    func_00416644(rdram, ctx);
        goto after_16;
    // 0x0041EA2C: nop

    after_16:
L_0041EA30:
    // 0x0041EA30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041EA34: lw          $v0, 0x9BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9BC);
    // 0x0041EA38: bne         $v0, $zero, L_0041EA4C
    if (ctx->r2 != 0) {
        // 0x0041EA3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041EA4C;
    }
    // 0x0041EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA40: jal         0x0041DA28
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_0041DA28(rdram, ctx);
        goto after_17;
    // 0x0041EA44: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_17:
    // 0x0041EA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041EA4C:
    // 0x0041EA4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA50: sw          $zero, -0xEC4($at)
    MEM_W(-0XEC4, ctx->r1) = 0;
    // 0x0041EA54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EA58: sw          $v0, 0x202C($at)
    MEM_W(0X202C, ctx->r1) = ctx->r2;
L_0041EA5C:
    // 0x0041EA5C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041EA60: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0041EA64: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0041EA68: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0041EA6C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0041EA70: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0041EA74: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0041EA78: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0041EA7C: jr          $ra
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_0041E81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041E81C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E820: sw          $s0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r16;
    // turok2: reconnected split function: a stray ELF symbol at 0x0041E824 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041E824(rdram, ctx);
;}
RECOMP_FUNC void entry_0041E8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041E854:
    // 0x0041E8D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_0041E8C0:
    // 0x0041E8DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0041E8E0: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x0041E8E4: jal         0x00426D54
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00426D54(rdram, ctx);
        goto after_0;
    // 0x0041E8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x0041E8EC: beq         $v0, $zero, L_0041E854
    if (ctx->r2 == 0) {
        // 0x0041E8F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0041E854;
    }
    // 0x0041E8F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0041E8F4: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x0041E8F8: bnel        $v0, $zero, L_0041E8C0
    if (ctx->r2 != 0) {
        // 0x0041E8FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041E8C0;
    }
    goto skip_0;
    // 0x0041E8FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x0041E900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041E904: bne         $s2, $zero, L_0041EA30
    if (ctx->r18 != 0) {
        // 0x0041E908: nop
    
            goto L_0041EA30;
    }
    // 0x0041E908: nop

    // 0x0041E90C: bne         $v0, $zero, L_0041EA30
    if (ctx->r2 != 0) {
        // 0x0041E910: nop
    
            goto L_0041EA30;
    }
    // 0x0041E910: nop

    // 0x0041E914: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E918: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E91C: jal         0x004267A0
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_004267A0(rdram, ctx);
        goto after_1;
    // 0x0041E920: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x0041E924: bne         $v0, $zero, L_0041E9F0
    if (ctx->r2 != 0) {
        // 0x0041E928: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E928: nop

    // 0x0041E92C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041E930: lw          $a0, 0x2028($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2028);
    // 0x0041E934: jal         0x0042670C
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_0042670C(rdram, ctx);
        goto after_2;
    // 0x0041E938: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x0041E93C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041E940: bne         $s0, $zero, L_0041E9F0
    if (ctx->r16 != 0) {
        // 0x0041E944: nop
    
            goto L_0041E9F0;
    }
    // 0x0041E944: nop

    // 0x0041E948: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041E94C: lw          $a0, 0x70A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70A8);
    // 0x0041E950: jal         0x00426E6C
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    func_00426E6C(rdram, ctx);
        goto after_3;
    // 0x0041E954: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_3:
    // 0x0041E958: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x0041E95C: jal         0x00426E6C
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_00426E6C(rdram, ctx);
        goto after_4;
    // 0x0041E960: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0041E964: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x0041E968: beq         $v1, $zero, L_0041E9A8
    if (ctx->r3 == 0) {
        // 0x0041E96C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_0041E9A8;
    }
    // 0x0041E96C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041E970: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x0041E974: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x0041E978: bne         $v1, $zero, L_0041E9A8
    if (ctx->r3 != 0) {
        // 0x0041E97C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_0041E9A8;
    }
    // 0x0041E97C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041E980: beq         $v0, $zero, L_0041E9A0
    if (ctx->r2 == 0) {
        // 0x0041E984: nop
    
            goto L_0041E9A0;
    }
    // 0x0041E984: nop

    // 0x0041E988: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E98C: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E990: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E994: addiu       $a1, $a1, -0x3E18
    ctx->r5 = ADD32(ctx->r5, -0X3E18);
    // 0x0041E998: j           L_0041E9B8
    // 0x0041E99C: nop

        goto L_0041E9B8;
    // 0x0041E99C: nop

L_0041E9A0:
    // 0x0041E9A0: beq         $v1, $zero, L_0041E9E8
    if (ctx->r3 == 0) {
        // 0x0041E9A4: nop
    
            goto L_0041E9E8;
    }
    // 0x0041E9A4: nop

L_0041E9A8:
    // 0x0041E9A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9AC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9B0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9B4: addiu       $a1, $a1, -0x3E3C
    ctx->r5 = ADD32(ctx->r5, -0X3E3C);
L_0041E9B8:
    // 0x0041E9B8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041E9BC: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041E9C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041E9C4: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041E9C8: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041E9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041E9D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041E9D4: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041E9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041E9DC: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041E9E0: jal         0x00416644
    // 0x0041E9E4: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041E9E4: nop

    after_5:
L_0041E9E8:
    // 0x0041E9E8: beq         $s0, $zero, L_0041EA30
    if (ctx->r16 == 0) {
        // 0x0041E9EC: nop
    
            goto L_0041EA30;
    }
    // 0x0041E9EC: nop

L_0041E9F0:
    // 0x0041E9F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041E9F4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041E9F8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041E9FC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EA00: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EA04: addiu       $v0, $v0, -0x48C8
    ctx->r2 = ADD32(ctx->r2, -0X48C8);
    // 0x0041EA08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EA0C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041EA10: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x0041EA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EA18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EA1C: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x0041EA20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041EA24: sw          $v0, -0x4EF8($at)
    MEM_W(-0X4EF8, ctx->r1) = ctx->r2;
    // 0x0041EA28: jal         0x00416644
    // 0x0041EA2C: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041EA2C: nop

    after_6:
L_0041EA30:
    // 0x0041EA30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
;}
RECOMP_FUNC void entry_0041EA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EA5C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x0041EA60: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x0041EA64: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x0041EA68: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x0041EA6C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x0041EA70: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x0041EA74: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x0041EA78: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x0041EA7C: jr          $ra
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0041EA80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void entry_0041EB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EB40: jal         0x0042655C
    // 0x0041EB44: nop

    func_0042655C(rdram, ctx);
        goto after_0;
    // 0x0041EB44: nop

    after_0:
    // 0x0041EB48: bnel        $v0, $zero, L_0041EB9C
    if (ctx->r2 != 0) {
        // 0x0041EB4C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0041EB9C;
    }
    goto skip_0;
    // 0x0041EB4C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x0041EB50: jal         0x0041D890
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041D890(rdram, ctx);
        goto after_1;
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041EB58: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x0041EB5C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041EB60: lw          $a1, 0x70A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X70A8);
    // 0x0041EB64: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041EB68: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041EB6C: jal         0x00426E78
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    func_00426E78(rdram, ctx);
        goto after_2;
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    after_2:
    // 0x0041EB74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041EB78: lw          $a1, 0x2018($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2018);
    // 0x0041EB7C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041EB80: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041EB84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041EB88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041EB8C: jal         0x0041DA28
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    func_0041DA28(rdram, ctx);
        goto after_3;
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    after_3:
    // 0x0041EB94: j           L_0041EC30
    // 0x0041EB98: nop

        goto L_0041EC30;
    // 0x0041EB98: nop

L_0041EB9C:
    // 0x0041EB9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EBA4: sw          $s1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r17;
    // 0x0041EBA8: jal         0x00426594
    // 0x0041EBAC: nop

    func_00426594(rdram, ctx);
        goto after_4;
    // 0x0041EBAC: nop

    after_4:
    // 0x0041EBB0: beq         $v0, $zero, L_0041EBCC
    if (ctx->r2 == 0) {
        // 0x0041EBB4: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EBCC;
    }
    // 0x0041EBB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBBC: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041EBC0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0041EBC4: j           L_0041EC20
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041EC20;
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041EBCC:
    // 0x0041EBCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBD0: jal         0x00426BD8
    // 0x0041EBD4: nop

    func_00426BD8(rdram, ctx);
        goto after_5;
    // 0x0041EBD4: nop

    after_5:
    // 0x0041EBD8: beq         $v0, $zero, L_0041EC08
    if (ctx->r2 == 0) {
        // 0x0041EBDC: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EC08;
    }
    // 0x0041EBDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EBE4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EBE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBEC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EBF0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EBF4: addiu       $v0, $v0, -0x48EC
    ctx->r2 = ADD32(ctx->r2, -0X48EC);
    // 0x0041EBF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EBFC: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041EC00: j           L_0041EC28
    // 0x0041EC04: nop

        goto L_0041EC28;
    // 0x0041EC04: nop

L_0041EC08:
    // 0x0041EC08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EC0C: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041EC10: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0041EC14: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EC18: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041EC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041EC20:
    // 0x0041EC20: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041EC24: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041EC28:
    // 0x0041EC28: jal         0x00416644
    // 0x0041EC2C: nop

    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041EC2C: nop

    after_6:
L_0041EC30:
    // 0x0041EC30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0041EC34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041EC38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041EC3C: jr          $ra
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041EB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EB48: bnel        $v0, $zero, L_0041EB9C
    if (ctx->r2 != 0) {
        // 0x0041EB4C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0041EB9C;
    }
    goto skip_0;
    // 0x0041EB4C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x0041EB50: jal         0x0041D890
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041D890(rdram, ctx);
        goto after_0;
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041EB58: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x0041EB5C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041EB60: lw          $a1, 0x70A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X70A8);
    // 0x0041EB64: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041EB68: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041EB6C: jal         0x00426E78
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    func_00426E78(rdram, ctx);
        goto after_1;
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    after_1:
    // 0x0041EB74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041EB78: lw          $a1, 0x2018($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2018);
    // 0x0041EB7C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041EB80: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041EB84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041EB88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041EB8C: jal         0x0041DA28
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    after_2:
    // 0x0041EB94: j           L_0041EC30
    // 0x0041EB98: nop

        goto L_0041EC30;
    // 0x0041EB98: nop

L_0041EB9C:
    // 0x0041EB9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EBA4: sw          $s1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r17;
    // 0x0041EBA8: jal         0x00426594
    // 0x0041EBAC: nop

    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041EBAC: nop

    after_3:
    // 0x0041EBB0: beq         $v0, $zero, L_0041EBCC
    if (ctx->r2 == 0) {
        // 0x0041EBB4: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EBCC;
    }
    // 0x0041EBB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBBC: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041EBC0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0041EBC4: j           L_0041EC20
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041EC20;
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041EBCC:
    // 0x0041EBCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBD0: jal         0x00426BD8
    // 0x0041EBD4: nop

    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041EBD4: nop

    after_4:
    // 0x0041EBD8: beq         $v0, $zero, L_0041EC08
    if (ctx->r2 == 0) {
        // 0x0041EBDC: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EC08;
    }
    // 0x0041EBDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EBE4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EBE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBEC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EBF0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EBF4: addiu       $v0, $v0, -0x48EC
    ctx->r2 = ADD32(ctx->r2, -0X48EC);
    // 0x0041EBF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EBFC: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041EC00: j           L_0041EC28
    // 0x0041EC04: nop

        goto L_0041EC28;
    // 0x0041EC04: nop

L_0041EC08:
    // 0x0041EC08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EC0C: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041EC10: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0041EC14: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EC18: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041EC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041EC20:
    // 0x0041EC20: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041EC24: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041EC28:
    // 0x0041EC28: jal         0x00416644
    // 0x0041EC2C: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041EC2C: nop

    after_5:
L_0041EC30:
    // 0x0041EC30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0041EC34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041EC38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041EC3C: jr          $ra
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041EB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EB50: jal         0x0041D890
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0041D890(rdram, ctx);
        goto after_0;
    // 0x0041EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041EB58: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x0041EB5C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0041EB60: lw          $a1, 0x70A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X70A8);
    // 0x0041EB64: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041EB68: lw          $a0, 0x2018($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2018);
    // 0x0041EB6C: jal         0x00426E78
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    func_00426E78(rdram, ctx);
        goto after_1;
    // 0x0041EB70: addiu       $a1, $a1, 0x684
    ctx->r5 = ADD32(ctx->r5, 0X684);
    after_1:
    // 0x0041EB74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041EB78: lw          $a1, 0x2018($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2018);
    // 0x0041EB7C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0041EB80: lw          $v1, 0x70A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70A8);
    // 0x0041EB84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041EB88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0041EB8C: jal         0x0041DA28
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041EB90: sw          $v0, 0x684($v1)
    MEM_W(0X684, ctx->r3) = ctx->r2;
    after_2:
    // 0x0041EB94: j           L_0041EC30
    // 0x0041EB98: nop

        goto L_0041EC30;
    // 0x0041EB98: nop

    // 0x0041EB9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041EBA4: sw          $s1, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r17;
    // 0x0041EBA8: jal         0x00426594
    // 0x0041EBAC: nop

    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041EBAC: nop

    after_3:
    // 0x0041EBB0: beq         $v0, $zero, L_0041EBCC
    if (ctx->r2 == 0) {
        // 0x0041EBB4: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EBCC;
    }
    // 0x0041EBB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBBC: addiu       $a1, $a1, -0x43B8
    ctx->r5 = ADD32(ctx->r5, -0X43B8);
    // 0x0041EBC0: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0041EBC4: j           L_0041EC20
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
        goto L_0041EC20;
    // 0x0041EBC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
L_0041EBCC:
    // 0x0041EBCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0041EBD0: jal         0x00426BD8
    // 0x0041EBD4: nop

    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041EBD4: nop

    after_4:
    // 0x0041EBD8: beq         $v0, $zero, L_0041EC08
    if (ctx->r2 == 0) {
        // 0x0041EBDC: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_0041EC08;
    }
    // 0x0041EBDC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041EBE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EBE4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EBE8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EBEC: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041EBF0: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EBF4: addiu       $v0, $v0, -0x48EC
    ctx->r2 = ADD32(ctx->r2, -0X48EC);
    // 0x0041EBF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EBFC: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x0041EC00: j           L_0041EC28
    // 0x0041EC04: nop

        goto L_0041EC28;
    // 0x0041EC04: nop

L_0041EC08:
    // 0x0041EC08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EC0C: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
    // 0x0041EC10: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0041EC14: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EC18: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041EC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041EC20:
    // 0x0041EC20: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0041EC24: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
L_0041EC28:
    // 0x0041EC28: jal         0x00416644
    // 0x0041EC2C: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041EC2C: nop

    after_5:
L_0041EC30:
    // 0x0041EC30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0041EC34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0041EC38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0041EC3C: jr          $ra
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041EC40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041ECE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ECE0: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x0041ECE4: lw          $v0, 0x328($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X328);
    // 0x0041ECE8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041ECEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041ECF0: sw          $v0, 0x328($a0)
    MEM_W(0X328, ctx->r4) = ctx->r2;
    // 0x0041ECF4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041ECF8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041ECFC: jal         0x00426480
    // 0x0041ED00: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041ED00: nop

    after_0:
    // 0x0041ED04: jal         0x0042655C
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041ED0C: bne         $v0, $zero, L_0041ED24
    if (ctx->r2 != 0) {
        // 0x0041ED10: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041ED24;
    }
    // 0x0041ED10: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041ED14: jal         0x0041DA28
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041ED1C: j           L_0041EDC8
    // 0x0041ED20: nop

        goto L_0041EDC8;
    // 0x0041ED20: nop

L_0041ED24:
    // 0x0041ED24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ED28: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041ED2C: jal         0x00426594
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041ED34: beq         $v0, $zero, L_0041ED60
    if (ctx->r2 == 0) {
        // 0x0041ED38: nop
    
            goto L_0041ED60;
    }
    // 0x0041ED38: nop

    // 0x0041ED3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED40: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED44: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x0041ED48: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED4C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED50: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED54: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041ED58: j           L_0041EDC0
    // 0x0041ED5C: nop

        goto L_0041EDC0;
    // 0x0041ED5C: nop

L_0041ED60:
    // 0x0041ED60: jal         0x00426BD8
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041ED68: beq         $v0, $zero, L_0041ED9C
    if (ctx->r2 == 0) {
        // 0x0041ED6C: nop
    
            goto L_0041ED9C;
    }
    // 0x0041ED6C: nop

    // 0x0041ED70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED74: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED78: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041ED7C: addiu       $v0, $v0, -0x4910
    ctx->r2 = ADD32(ctx->r2, -0X4910);
    // 0x0041ED80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041ED84: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED88: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED8C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED90: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041ED94: j           L_0041EDC0
    // 0x0041ED98: nop

        goto L_0041EDC0;
    // 0x0041ED98: nop

L_0041ED9C:
    // 0x0041ED9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EDA0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EDA4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EDA8: addiu       $v0, $v0, -0x6E70
    ctx->r2 = ADD32(ctx->r2, -0X6E70);
    // 0x0041EDAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EDB0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041EDB4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041EDB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EDBC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041EDC0:
    // 0x0041EDC0: jal         0x00416644
    // 0x0041EDC4: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041EDC4: nop

    after_5:
L_0041EDC8:
    // 0x0041EDC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041EDCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041EDD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041EDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041EDD8: jr          $ra
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041ECE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ECE8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041ECEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041ECF0: sw          $v0, 0x328($a0)
    MEM_W(0X328, ctx->r4) = ctx->r2;
    // 0x0041ECF4: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x0041ECF8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x0041ECFC: jal         0x00426480
    // 0x0041ED00: nop

    func_00426480(rdram, ctx);
        goto after_0;
    // 0x0041ED00: nop

    after_0:
    // 0x0041ED04: jal         0x0042655C
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_1;
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041ED0C: bne         $v0, $zero, L_0041ED24
    if (ctx->r2 != 0) {
        // 0x0041ED10: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041ED24;
    }
    // 0x0041ED10: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041ED14: jal         0x0041DA28
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_2;
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x0041ED1C: j           L_0041EDC8
    // 0x0041ED20: nop

        goto L_0041EDC8;
    // 0x0041ED20: nop

L_0041ED24:
    // 0x0041ED24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ED28: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041ED2C: jal         0x00426594
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_3;
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041ED34: beq         $v0, $zero, L_0041ED60
    if (ctx->r2 == 0) {
        // 0x0041ED38: nop
    
            goto L_0041ED60;
    }
    // 0x0041ED38: nop

    // 0x0041ED3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED40: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED44: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x0041ED48: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED4C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED50: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED54: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041ED58: j           L_0041EDC0
    // 0x0041ED5C: nop

        goto L_0041EDC0;
    // 0x0041ED5C: nop

L_0041ED60:
    // 0x0041ED60: jal         0x00426BD8
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_4;
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0041ED68: beq         $v0, $zero, L_0041ED9C
    if (ctx->r2 == 0) {
        // 0x0041ED6C: nop
    
            goto L_0041ED9C;
    }
    // 0x0041ED6C: nop

    // 0x0041ED70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED74: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED78: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041ED7C: addiu       $v0, $v0, -0x4910
    ctx->r2 = ADD32(ctx->r2, -0X4910);
    // 0x0041ED80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041ED84: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED88: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED8C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED90: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041ED94: j           L_0041EDC0
    // 0x0041ED98: nop

        goto L_0041EDC0;
    // 0x0041ED98: nop

L_0041ED9C:
    // 0x0041ED9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EDA0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EDA4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EDA8: addiu       $v0, $v0, -0x6E70
    ctx->r2 = ADD32(ctx->r2, -0X6E70);
    // 0x0041EDAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EDB0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041EDB4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041EDB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EDBC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041EDC0:
    // 0x0041EDC0: jal         0x00416644
    // 0x0041EDC4: nop

    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041EDC4: nop

    after_5:
L_0041EDC8:
    // 0x0041EDC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041EDCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041EDD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041EDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041EDD8: jr          $ra
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ED00: nop

    // 0x0041ED04: jal         0x0042655C
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042655C(rdram, ctx);
        goto after_0;
    // 0x0041ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041ED0C: bne         $v0, $zero, L_0041ED24
    if (ctx->r2 != 0) {
        // 0x0041ED10: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_0041ED24;
    }
    // 0x0041ED10: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0041ED14: jal         0x0041DA28
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0041DA28(rdram, ctx);
        goto after_1;
    // 0x0041ED18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0041ED1C: j           L_0041EDC8
    // 0x0041ED20: nop

        goto L_0041EDC8;
    // 0x0041ED20: nop

L_0041ED24:
    // 0x0041ED24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ED28: sw          $s2, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r18;
    // 0x0041ED2C: jal         0x00426594
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426594(rdram, ctx);
        goto after_2;
    // 0x0041ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041ED34: beq         $v0, $zero, L_0041ED60
    if (ctx->r2 == 0) {
        // 0x0041ED38: nop
    
            goto L_0041ED60;
    }
    // 0x0041ED38: nop

    // 0x0041ED3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED40: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED44: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x0041ED48: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED4C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED50: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED54: addiu       $a1, $a1, -0x4394
    ctx->r5 = ADD32(ctx->r5, -0X4394);
    // 0x0041ED58: j           L_0041EDC0
    // 0x0041ED5C: nop

        goto L_0041EDC0;
    // 0x0041ED5C: nop

L_0041ED60:
    // 0x0041ED60: jal         0x00426BD8
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_3;
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041ED68: beq         $v0, $zero, L_0041ED9C
    if (ctx->r2 == 0) {
        // 0x0041ED6C: nop
    
            goto L_0041ED9C;
    }
    // 0x0041ED6C: nop

    // 0x0041ED70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED74: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED78: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041ED7C: addiu       $v0, $v0, -0x4910
    ctx->r2 = ADD32(ctx->r2, -0X4910);
    // 0x0041ED80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041ED84: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED88: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED8C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED90: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041ED94: j           L_0041EDC0
    // 0x0041ED98: nop

        goto L_0041EDC0;
    // 0x0041ED98: nop

L_0041ED9C:
    // 0x0041ED9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EDA0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EDA4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EDA8: addiu       $v0, $v0, -0x6E70
    ctx->r2 = ADD32(ctx->r2, -0X6E70);
    // 0x0041EDAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EDB0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041EDB4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041EDB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EDBC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041EDC0:
    // 0x0041EDC0: jal         0x00416644
    // 0x0041EDC4: nop

    func_00416644(rdram, ctx);
        goto after_4;
    // 0x0041EDC4: nop

    after_4:
L_0041EDC8:
    // 0x0041EDC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041EDCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041EDD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041EDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041EDD8: jr          $ra
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041ED58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ED58: j           L_0041EDC0
    // 0x0041ED5C: nop

        goto L_0041EDC0;
    // 0x0041ED5C: nop

    // 0x0041ED60: jal         0x00426BD8
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426BD8(rdram, ctx);
        goto after_0;
    // 0x0041ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0041ED68: beq         $v0, $zero, L_0041ED9C
    if (ctx->r2 == 0) {
        // 0x0041ED6C: nop
    
            goto L_0041ED9C;
    }
    // 0x0041ED6C: nop

    // 0x0041ED70: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041ED74: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041ED78: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041ED7C: addiu       $v0, $v0, -0x4910
    ctx->r2 = ADD32(ctx->r2, -0X4910);
    // 0x0041ED80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041ED84: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041ED88: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041ED8C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041ED90: addiu       $a1, $a1, -0x3FA4
    ctx->r5 = ADD32(ctx->r5, -0X3FA4);
    // 0x0041ED94: j           L_0041EDC0
    // 0x0041ED98: nop

        goto L_0041EDC0;
    // 0x0041ED98: nop

L_0041ED9C:
    // 0x0041ED9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EDA0: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EDA4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EDA8: addiu       $v0, $v0, -0x6E70
    ctx->r2 = ADD32(ctx->r2, -0X6E70);
    // 0x0041EDAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EDB0: lw          $a2, 0x1C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C);
    // 0x0041EDB4: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x0041EDB8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EDBC: addiu       $a1, $a1, -0x4400
    ctx->r5 = ADD32(ctx->r5, -0X4400);
L_0041EDC0:
    // 0x0041EDC0: jal         0x00416644
    // 0x0041EDC4: nop

    func_00416644(rdram, ctx);
        goto after_1;
    // 0x0041EDC4: nop

    after_1:
    // 0x0041EDC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0041EDCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0041EDD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0041EDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041EDD8: jr          $ra
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0041EDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_0041EF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EF2C: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041EF30: bne         $v0, $zero, L_0041EF48
    if (ctx->r2 != 0) {
        // 0x0041EF34: nop
    
            goto L_0041EF48;
    }
    // 0x0041EF34: nop

    // 0x0041EF38: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041EF3C: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041EF40: beq         $v0, $zero, L_0041EF50
    if (ctx->r2 == 0) {
        // 0x0041EF44: nop
    
            goto L_0041EF50;
    }
    // 0x0041EF44: nop

L_0041EF48:
    // 0x0041EF48: jal         0x002053A8
    // 0x0041EF4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0041EF4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0041EF50:
    // 0x0041EF50: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041EF54: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041EF58: beq         $a1, $zero, L_0041EF68
    if (ctx->r5 == 0) {
        // 0x0041EF5C: nop
    
            goto L_0041EF68;
    }
    // 0x0041EF5C: nop

    // 0x0041EF60: jal         0x002052D8
    // 0x0041EF64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0041EF64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0041EF68:
    // 0x0041EF68: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041EF6C: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041EF70: beq         $a1, $zero, L_0041EF80
    if (ctx->r5 == 0) {
        // 0x0041EF74: nop
    
            goto L_0041EF80;
    }
    // 0x0041EF74: nop

    // 0x0041EF78: jal         0x002052D8
    // 0x0041EF7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0041EF7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0041EF80:
    // 0x0041EF80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EF84: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041EF88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EF8C: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041EF90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EF94: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041EF98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041EF9C: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0041EFA0: beq         $s5, $zero, L_0041F0A4
    if (ctx->r21 == 0) {
        // 0x0041EFA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041F0A4;
    }
    // 0x0041EFA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EFA8: bne         $s0, $zero, L_0041F024
    if (ctx->r16 != 0) {
        // 0x0041EFAC: nop
    
            goto L_0041F024;
    }
    // 0x0041EFAC: nop

    // 0x0041EFB0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041EFB4: beq         $v1, $v0, L_0041EFE4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFB8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041EFE4;
    }
    // 0x0041EFB8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041EFBC: bne         $v0, $zero, L_0041EFD4
    if (ctx->r2 != 0) {
        // 0x0041EFC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041EFD4;
    }
    // 0x0041EFC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041EFC4: beq         $v1, $v0, L_0041EFF4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041EFF4;
    }
    // 0x0041EFC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041EFCC: beq         $v1, $v0, L_0041F004
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFD0: nop
    
            goto L_0041F004;
    }
    // 0x0041EFD0: nop

L_0041EFD4:
    // 0x0041EFD4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFD8: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041EFDC: j           L_0041F00C
    // 0x0041EFE0: nop

        goto L_0041F00C;
    // 0x0041EFE0: nop

L_0041EFE4:
    // 0x0041EFE4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041EFEC: j           L_0041F00C
    // 0x0041EFF0: nop

        goto L_0041F00C;
    // 0x0041EFF0: nop

L_0041EFF4:
    // 0x0041EFF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041EFFC: j           L_0041F00C
    // 0x0041F000: nop

        goto L_0041F00C;
    // 0x0041F000: nop

L_0041F004:
    // 0x0041F004: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F008: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F00C:
    // 0x0041F00C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F010: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F014: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F018: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F01C: j           L_0041F094
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041F094;
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F024:
    // 0x0041F024: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041F028: beq         $v1, $v0, L_0041F058
    if (ctx->r3 == ctx->r2) {
        // 0x0041F02C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041F058;
    }
    // 0x0041F02C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041F030: bne         $v0, $zero, L_0041F048
    if (ctx->r2 != 0) {
        // 0x0041F034: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041F048;
    }
    // 0x0041F034: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041F038: beq         $v1, $v0, L_0041F068
    if (ctx->r3 == ctx->r2) {
        // 0x0041F03C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041F068;
    }
    // 0x0041F03C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041F040: beq         $v1, $v0, L_0041F078
    if (ctx->r3 == ctx->r2) {
        // 0x0041F044: nop
    
            goto L_0041F078;
    }
    // 0x0041F044: nop

L_0041F048:
    // 0x0041F048: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F04C: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041F050: j           L_0041F080
    // 0x0041F054: nop

        goto L_0041F080;
    // 0x0041F054: nop

L_0041F058:
    // 0x0041F058: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F05C: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041F060: j           L_0041F080
    // 0x0041F064: nop

        goto L_0041F080;
    // 0x0041F064: nop

L_0041F068:
    // 0x0041F068: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F06C: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041F070: j           L_0041F080
    // 0x0041F074: nop

        goto L_0041F080;
    // 0x0041F074: nop

L_0041F078:
    // 0x0041F078: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F07C: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F080:
    // 0x0041F080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F084: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F088: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F08C: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
    // 0x0041F090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F094:
    // 0x0041F094: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F098: jal         0x00416644
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_3;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0041F0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041F0A4:
    // 0x0041F0A4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0041F0A8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F0AC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F0B0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F0B4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F0B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F0BC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F0C0: jr          $ra
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041EFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EFA0: beq         $s5, $zero, L_0041F0A4
    if (ctx->r21 == 0) {
        // 0x0041EFA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041F0A4;
    }
    // 0x0041EFA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041EFA8: bne         $s0, $zero, L_0041F024
    if (ctx->r16 != 0) {
        // 0x0041EFAC: nop
    
            goto L_0041F024;
    }
    // 0x0041EFAC: nop

    // 0x0041EFB0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041EFB4: beq         $v1, $v0, L_0041EFE4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFB8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041EFE4;
    }
    // 0x0041EFB8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041EFBC: bne         $v0, $zero, L_0041EFD4
    if (ctx->r2 != 0) {
        // 0x0041EFC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041EFD4;
    }
    // 0x0041EFC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041EFC4: beq         $v1, $v0, L_0041EFF4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041EFF4;
    }
    // 0x0041EFC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041EFCC: beq         $v1, $v0, L_0041F004
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFD0: nop
    
            goto L_0041F004;
    }
    // 0x0041EFD0: nop

L_0041EFD4:
    // 0x0041EFD4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFD8: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041EFDC: j           L_0041F00C
    // 0x0041EFE0: nop

        goto L_0041F00C;
    // 0x0041EFE0: nop

L_0041EFE4:
    // 0x0041EFE4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041EFEC: j           L_0041F00C
    // 0x0041EFF0: nop

        goto L_0041F00C;
    // 0x0041EFF0: nop

L_0041EFF4:
    // 0x0041EFF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041EFFC: j           L_0041F00C
    // 0x0041F000: nop

        goto L_0041F00C;
    // 0x0041F000: nop

L_0041F004:
    // 0x0041F004: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F008: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F00C:
    // 0x0041F00C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F010: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F014: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F018: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F01C: j           L_0041F094
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041F094;
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F024:
    // 0x0041F024: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041F028: beq         $v1, $v0, L_0041F058
    if (ctx->r3 == ctx->r2) {
        // 0x0041F02C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041F058;
    }
    // 0x0041F02C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041F030: bne         $v0, $zero, L_0041F048
    if (ctx->r2 != 0) {
        // 0x0041F034: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041F048;
    }
    // 0x0041F034: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041F038: beq         $v1, $v0, L_0041F068
    if (ctx->r3 == ctx->r2) {
        // 0x0041F03C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041F068;
    }
    // 0x0041F03C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041F040: beq         $v1, $v0, L_0041F078
    if (ctx->r3 == ctx->r2) {
        // 0x0041F044: nop
    
            goto L_0041F078;
    }
    // 0x0041F044: nop

L_0041F048:
    // 0x0041F048: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F04C: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041F050: j           L_0041F080
    // 0x0041F054: nop

        goto L_0041F080;
    // 0x0041F054: nop

L_0041F058:
    // 0x0041F058: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F05C: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041F060: j           L_0041F080
    // 0x0041F064: nop

        goto L_0041F080;
    // 0x0041F064: nop

L_0041F068:
    // 0x0041F068: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F06C: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041F070: j           L_0041F080
    // 0x0041F074: nop

        goto L_0041F080;
    // 0x0041F074: nop

L_0041F078:
    // 0x0041F078: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F07C: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F080:
    // 0x0041F080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F084: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F088: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F08C: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
    // 0x0041F090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F094:
    // 0x0041F094: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F098: jal         0x00416644
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041F0A4:
    // 0x0041F0A4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0041F0A8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F0AC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F0B0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F0B4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F0B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F0BC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F0C0: jr          $ra
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041EFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EFB4: beq         $v1, $v0, L_0041EFE4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFB8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041EFE4;
    }
    // 0x0041EFB8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041EFBC: bne         $v0, $zero, L_0041EFD4
    if (ctx->r2 != 0) {
        // 0x0041EFC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041EFD4;
    }
    // 0x0041EFC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041EFC4: beq         $v1, $v0, L_0041EFF4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041EFF4;
    }
    // 0x0041EFC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041EFCC: beq         $v1, $v0, L_0041F004
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFD0: nop
    
            goto L_0041F004;
    }
    // 0x0041EFD0: nop

L_0041EFD4:
    // 0x0041EFD4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFD8: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041EFDC: j           L_0041F00C
    // 0x0041EFE0: nop

        goto L_0041F00C;
    // 0x0041EFE0: nop

L_0041EFE4:
    // 0x0041EFE4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041EFEC: j           L_0041F00C
    // 0x0041EFF0: nop

        goto L_0041F00C;
    // 0x0041EFF0: nop

L_0041EFF4:
    // 0x0041EFF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041EFFC: j           L_0041F00C
    // 0x0041F000: nop

        goto L_0041F00C;
    // 0x0041F000: nop

L_0041F004:
    // 0x0041F004: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F008: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F00C:
    // 0x0041F00C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F010: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F014: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F018: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F01C: j           L_0041F094
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041F094;
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F024: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041F028: beq         $v1, $v0, L_0041F058
    if (ctx->r3 == ctx->r2) {
        // 0x0041F02C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041F058;
    }
    // 0x0041F02C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041F030: bne         $v0, $zero, L_0041F048
    if (ctx->r2 != 0) {
        // 0x0041F034: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041F048;
    }
    // 0x0041F034: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041F038: beq         $v1, $v0, L_0041F068
    if (ctx->r3 == ctx->r2) {
        // 0x0041F03C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041F068;
    }
    // 0x0041F03C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041F040: beq         $v1, $v0, L_0041F078
    if (ctx->r3 == ctx->r2) {
        // 0x0041F044: nop
    
            goto L_0041F078;
    }
    // 0x0041F044: nop

L_0041F048:
    // 0x0041F048: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F04C: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041F050: j           L_0041F080
    // 0x0041F054: nop

        goto L_0041F080;
    // 0x0041F054: nop

L_0041F058:
    // 0x0041F058: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F05C: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041F060: j           L_0041F080
    // 0x0041F064: nop

        goto L_0041F080;
    // 0x0041F064: nop

L_0041F068:
    // 0x0041F068: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F06C: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041F070: j           L_0041F080
    // 0x0041F074: nop

        goto L_0041F080;
    // 0x0041F074: nop

L_0041F078:
    // 0x0041F078: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F07C: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F080:
    // 0x0041F080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F084: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F088: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F08C: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
    // 0x0041F090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F094:
    // 0x0041F094: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F098: jal         0x00416644
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F0A4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0041F0A8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F0AC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F0B0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F0B4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F0B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F0BC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F0C0: jr          $ra
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041EFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EFC4: beq         $v1, $v0, L_0041EFF4
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041EFF4;
    }
    // 0x0041EFC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041EFCC: beq         $v1, $v0, L_0041F004
    if (ctx->r3 == ctx->r2) {
        // 0x0041EFD0: nop
    
            goto L_0041F004;
    }
    // 0x0041EFD0: nop

    // 0x0041EFD4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFD8: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041EFDC: j           L_0041F00C
    // 0x0041EFE0: nop

        goto L_0041F00C;
    // 0x0041EFE0: nop

    // 0x0041EFE4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041EFEC: j           L_0041F00C
    // 0x0041EFF0: nop

        goto L_0041F00C;
    // 0x0041EFF0: nop

L_0041EFF4:
    // 0x0041EFF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041EFFC: j           L_0041F00C
    // 0x0041F000: nop

        goto L_0041F00C;
    // 0x0041F000: nop

L_0041F004:
    // 0x0041F004: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F008: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F00C:
    // 0x0041F00C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F010: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F014: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F018: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F01C: j           L_0041F094
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041F094;
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F024: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041F028: beq         $v1, $v0, L_0041F058
    if (ctx->r3 == ctx->r2) {
        // 0x0041F02C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041F058;
    }
    // 0x0041F02C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041F030: bne         $v0, $zero, L_0041F048
    if (ctx->r2 != 0) {
        // 0x0041F034: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041F048;
    }
    // 0x0041F034: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041F038: beq         $v1, $v0, L_0041F068
    if (ctx->r3 == ctx->r2) {
        // 0x0041F03C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041F068;
    }
    // 0x0041F03C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041F040: beq         $v1, $v0, L_0041F078
    if (ctx->r3 == ctx->r2) {
        // 0x0041F044: nop
    
            goto L_0041F078;
    }
    // 0x0041F044: nop

L_0041F048:
    // 0x0041F048: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F04C: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041F050: j           L_0041F080
    // 0x0041F054: nop

        goto L_0041F080;
    // 0x0041F054: nop

L_0041F058:
    // 0x0041F058: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F05C: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041F060: j           L_0041F080
    // 0x0041F064: nop

        goto L_0041F080;
    // 0x0041F064: nop

L_0041F068:
    // 0x0041F068: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F06C: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041F070: j           L_0041F080
    // 0x0041F074: nop

        goto L_0041F080;
    // 0x0041F074: nop

L_0041F078:
    // 0x0041F078: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F07C: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F080:
    // 0x0041F080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F084: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F088: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F08C: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
    // 0x0041F090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F094:
    // 0x0041F094: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F098: jal         0x00416644
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F0A4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0041F0A8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F0AC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F0B0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F0B4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F0B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F0BC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F0C0: jr          $ra
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041EFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EFE8: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041EFEC: j           L_0041F00C
    // 0x0041EFF0: nop

        goto L_0041F00C;
    // 0x0041EFF0: nop

    // 0x0041EFF4: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041EFF8: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041EFFC: j           L_0041F00C
    // 0x0041F000: nop

        goto L_0041F00C;
    // 0x0041F000: nop

    // 0x0041F004: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F008: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F00C:
    // 0x0041F00C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F010: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F014: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F018: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F01C: j           L_0041F094
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_0041F094;
    // 0x0041F020: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F024: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0041F028: beq         $v1, $v0, L_0041F058
    if (ctx->r3 == ctx->r2) {
        // 0x0041F02C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0041F058;
    }
    // 0x0041F02C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0041F030: bne         $v0, $zero, L_0041F048
    if (ctx->r2 != 0) {
        // 0x0041F034: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0041F048;
    }
    // 0x0041F034: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041F038: beq         $v1, $v0, L_0041F068
    if (ctx->r3 == ctx->r2) {
        // 0x0041F03C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0041F068;
    }
    // 0x0041F03C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0041F040: beq         $v1, $v0, L_0041F078
    if (ctx->r3 == ctx->r2) {
        // 0x0041F044: nop
    
            goto L_0041F078;
    }
    // 0x0041F044: nop

L_0041F048:
    // 0x0041F048: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F04C: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041F050: j           L_0041F080
    // 0x0041F054: nop

        goto L_0041F080;
    // 0x0041F054: nop

L_0041F058:
    // 0x0041F058: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F05C: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041F060: j           L_0041F080
    // 0x0041F064: nop

        goto L_0041F080;
    // 0x0041F064: nop

L_0041F068:
    // 0x0041F068: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F06C: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041F070: j           L_0041F080
    // 0x0041F074: nop

        goto L_0041F080;
    // 0x0041F074: nop

L_0041F078:
    // 0x0041F078: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F07C: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F080:
    // 0x0041F080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F084: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F088: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F08C: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
    // 0x0041F090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_0041F094:
    // 0x0041F094: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F098: jal         0x00416644
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F0A4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0041F0A8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F0AC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F0B0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F0B4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F0B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F0BC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F0C0: jr          $ra
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041F044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F044: nop

    // 0x0041F048: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F04C: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x0041F050: j           L_0041F080
    // 0x0041F054: nop

        goto L_0041F080;
    // 0x0041F054: nop

    // 0x0041F058: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F05C: addiu       $v0, $v0, -0x535C
    ctx->r2 = ADD32(ctx->r2, -0X535C);
    // 0x0041F060: j           L_0041F080
    // 0x0041F064: nop

        goto L_0041F080;
    // 0x0041F064: nop

    // 0x0041F068: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F06C: addiu       $v0, $v0, -0x5338
    ctx->r2 = ADD32(ctx->r2, -0X5338);
    // 0x0041F070: j           L_0041F080
    // 0x0041F074: nop

        goto L_0041F080;
    // 0x0041F074: nop

    // 0x0041F078: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F07C: addiu       $v0, $v0, -0x5314
    ctx->r2 = ADD32(ctx->r2, -0X5314);
L_0041F080:
    // 0x0041F080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F084: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F088: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F08C: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
    // 0x0041F090: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F094: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F098: jal         0x00416644
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F0A4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x0041F0A8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F0AC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F0B0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F0B4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F0B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F0BC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F0C0: jr          $ra
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F0C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041F208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F208: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F20C: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F210: jal         0x00416644
    // 0x0041F214: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F214: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F218: j           L_0041F304
    // 0x0041F21C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041F304;
    // 0x0041F21C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041F220: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F224: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041F228: bne         $v0, $zero, L_0041F240
    if (ctx->r2 != 0) {
        // 0x0041F22C: nop
    
            goto L_0041F240;
    }
    // 0x0041F22C: nop

    // 0x0041F230: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F234: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F238: beq         $v0, $zero, L_0041F248
    if (ctx->r2 == 0) {
        // 0x0041F23C: nop
    
            goto L_0041F248;
    }
    // 0x0041F23C: nop

L_0041F240:
    // 0x0041F240: jal         0x002053A8
    // 0x0041F244: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_1;
    // 0x0041F244: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0041F248:
    // 0x0041F248: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F24C: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041F250: beq         $a1, $zero, L_0041F260
    if (ctx->r5 == 0) {
        // 0x0041F254: nop
    
            goto L_0041F260;
    }
    // 0x0041F254: nop

    // 0x0041F258: jal         0x002052D8
    // 0x0041F25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0041F25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0041F260:
    // 0x0041F260: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F264: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F268: beq         $a1, $zero, L_0041F278
    if (ctx->r5 == 0) {
        // 0x0041F26C: nop
    
            goto L_0041F278;
    }
    // 0x0041F26C: nop

    // 0x0041F270: jal         0x002052D8
    // 0x0041F274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0041F274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_0041F278:
    // 0x0041F278: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F27C: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041F280: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F284: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041F288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F28C: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041F290: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F294: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0041F298: beq         $s6, $zero, L_0041F304
    if (ctx->r22 == 0) {
        // 0x0041F29C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041F304;
    }
    // 0x0041F29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F2A0: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2A4: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2A4: nop

    // 0x0041F2A8: jal         0x00412B14
    // 0x0041F2AC: nop

    func_00412B14(rdram, ctx);
        goto after_4;
    // 0x0041F2AC: nop

    after_4:
    // 0x0041F2B0: jal         0x00412438
    // 0x0041F2B4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    func_00412438(rdram, ctx);
        goto after_5;
    // 0x0041F2B4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_5:
    // 0x0041F2B8: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2BC: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2BC: nop

    // 0x0041F2C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2C4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2C8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2CC: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F2D0: j           L_0041F2E8
    // 0x0041F2D4: nop

        goto L_0041F2E8;
    // 0x0041F2D4: nop

L_0041F2D8:
    // 0x0041F2D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2DC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2E4: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
L_0041F2E8:
    // 0x0041F2E8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F2EC: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041F2F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F2F4: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F2F8: jal         0x00416644
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_6;
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
    // 0x0041F300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041F304:
    // 0x0041F304: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F308: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0041F30C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F310: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F314: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F318: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F31C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F320: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F324: jr          $ra
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041F224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F224: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041F228: bne         $v0, $zero, L_0041F240
    if (ctx->r2 != 0) {
        // 0x0041F22C: nop
    
            goto L_0041F240;
    }
    // 0x0041F22C: nop

    // 0x0041F230: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F234: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F238: beq         $v0, $zero, L_0041F248
    if (ctx->r2 == 0) {
        // 0x0041F23C: nop
    
            goto L_0041F248;
    }
    // 0x0041F23C: nop

L_0041F240:
    // 0x0041F240: jal         0x002053A8
    // 0x0041F244: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_0;
    // 0x0041F244: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_0041F248:
    // 0x0041F248: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F24C: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041F250: beq         $a1, $zero, L_0041F260
    if (ctx->r5 == 0) {
        // 0x0041F254: nop
    
            goto L_0041F260;
    }
    // 0x0041F254: nop

    // 0x0041F258: jal         0x002052D8
    // 0x0041F25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x0041F25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_0041F260:
    // 0x0041F260: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F264: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F268: beq         $a1, $zero, L_0041F278
    if (ctx->r5 == 0) {
        // 0x0041F26C: nop
    
            goto L_0041F278;
    }
    // 0x0041F26C: nop

    // 0x0041F270: jal         0x002052D8
    // 0x0041F274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x0041F274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0041F278:
    // 0x0041F278: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F27C: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041F280: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F284: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041F288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F28C: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041F290: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F294: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0041F298: beq         $s6, $zero, L_0041F304
    if (ctx->r22 == 0) {
        // 0x0041F29C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041F304;
    }
    // 0x0041F29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F2A0: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2A4: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2A4: nop

    // 0x0041F2A8: jal         0x00412B14
    // 0x0041F2AC: nop

    func_00412B14(rdram, ctx);
        goto after_3;
    // 0x0041F2AC: nop

    after_3:
    // 0x0041F2B0: jal         0x00412438
    // 0x0041F2B4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    func_00412438(rdram, ctx);
        goto after_4;
    // 0x0041F2B4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_4:
    // 0x0041F2B8: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2BC: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2BC: nop

    // 0x0041F2C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2C4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2C8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2CC: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F2D0: j           L_0041F2E8
    // 0x0041F2D4: nop

        goto L_0041F2E8;
    // 0x0041F2D4: nop

L_0041F2D8:
    // 0x0041F2D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2DC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2E4: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
L_0041F2E8:
    // 0x0041F2E8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F2EC: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041F2F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F2F4: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F2F8: jal         0x00416644
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041F300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041F304:
    // 0x0041F304: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F308: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0041F30C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F310: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F314: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F318: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F31C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F320: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F324: jr          $ra
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041F2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F2B8: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2BC: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2BC: nop

    // 0x0041F2C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2C4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2C8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2CC: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F2D0: j           L_0041F2E8
    // 0x0041F2D4: nop

        goto L_0041F2E8;
    // 0x0041F2D4: nop

L_0041F2D8:
    // 0x0041F2D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2DC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2E4: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
L_0041F2E8:
    // 0x0041F2E8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F2EC: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041F2F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F2F4: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F2F8: jal         0x00416644
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041F300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F304: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F308: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0041F30C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F310: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F314: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F318: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F31C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F320: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F324: jr          $ra
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
