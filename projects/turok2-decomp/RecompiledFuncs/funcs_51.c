#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002578FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002578FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257900: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00257904: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00257908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0025790C: lw          $v0, 0xC00($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC00);
    // 0x00257910: beq         $v0, $zero, L_00257970
    if (ctx->r2 == 0) {
        // 0x00257914: nop
    
            goto L_00257970;
    }
    // 0x00257914: nop

    // 0x00257918: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0025791C: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x00257920: jal         0x0026EFB8
    // 0x00257924: nop

    func_0026EFB8(rdram, ctx);
        goto after_0;
    // 0x00257924: nop

    after_0:
    // 0x00257928: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x0025792C: sltiu       $v0, $a0, 0x6
    ctx->r2 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x00257930: beq         $v0, $zero, L_0025796C
    if (ctx->r2 == 0) {
        // 0x00257934: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0025796C;
    }
    // 0x00257934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257938: lw          $v1, 0x9F8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9F8);
    // 0x0025793C: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x00257940: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00257944: beql        $v1, $zero, L_00257970
    if (ctx->r3 == 0) {
        // 0x00257948: sw          $zero, 0xC00($s0)
        MEM_W(0XC00, ctx->r16) = 0;
            goto L_00257970;
    }
    goto skip_0;
    // 0x00257948: sw          $zero, 0xC00($s0)
    MEM_W(0XC00, ctx->r16) = 0;
    skip_0:
    // 0x0025794C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00257950: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x00257954: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00257958: addiu       $a1, $a1, -0x354C
    ctx->r5 = ADD32(ctx->r5, -0X354C);
    // 0x0025795C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00257960: lw          $a3, 0xA50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA50);
    // 0x00257964: jal         0x00416644
    // 0x00257968: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_00416644(rdram, ctx);
        goto after_1;
    // 0x00257968: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
L_0025796C:
    // 0x0025796C: sw          $zero, 0xC00($s0)
    MEM_W(0XC00, ctx->r16) = 0;
L_00257970:
    // 0x00257970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00257974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00257978: jr          $ra
    // 0x0025797C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025797C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025E43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025E43C: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x0025E440: lb          $v0, 0x130($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X130);
    // 0x0025E444: jr          $ra
    // 0x0025E448: nop

    return;
    // 0x0025E448: nop

;}
RECOMP_FUNC void func_0029DFF0(uint8_t* rdram, recomp_context* ctx) {
    // __osDisableInt: host scheduling supplies the required synchronization.
    extern void __osDisableInt_recomp(uint8_t* rdram, recomp_context* ctx);
    __osDisableInt_recomp(rdram, ctx);
}
RECOMP_FUNC void func_00259E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00259E64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00259E68: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00259E6C: lhu         $a3, 0x76($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X76);
    // 0x00259E70: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00259E74: addiu       $a2, $a2, -0x910
    ctx->r6 = ADD32(ctx->r6, -0X910);
    // 0x00259E78: jal         0x00245A98
    // 0x00259E7C: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x00259E7C: nop

    after_0:
    // 0x00259E80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00259E84: jr          $ra
    // 0x00259E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00259E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004030D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004030D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004030D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004030DC: lh          $v1, 0xC4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XC4);
    // 0x004030E0: addiu       $v0, $zero, 0xFA2
    ctx->r2 = ADD32(0, 0XFA2);
    // 0x004030E4: beq         $v1, $v0, L_004030F4
    if (ctx->r3 == ctx->r2) {
        // 0x004030E8: addiu       $v0, $zero, 0x10CC
        ctx->r2 = ADD32(0, 0X10CC);
            goto L_004030F4;
    }
    // 0x004030E8: addiu       $v0, $zero, 0x10CC
    ctx->r2 = ADD32(0, 0X10CC);
    // 0x004030EC: bne         $v1, $v0, L_0040310C
    if (ctx->r3 != ctx->r2) {
        // 0x004030F0: nop
    
            goto L_0040310C;
    }
    // 0x004030F0: nop

L_004030F4:
    // 0x004030F4: lw          $v0, 0x3C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3C);
    // 0x004030F8: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x004030FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00403100: sw          $v0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r2;
    // 0x00403104: lh          $v1, 0xC4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XC4);
    // 0x00403108: addiu       $v0, $zero, 0x10CC
    ctx->r2 = ADD32(0, 0X10CC);
L_0040310C:
    // 0x0040310C: beq         $v1, $v0, L_0040311C
    if (ctx->r3 == ctx->r2) {
        // 0x00403110: addiu       $v0, $zero, 0x1131
        ctx->r2 = ADD32(0, 0X1131);
            goto L_0040311C;
    }
    // 0x00403110: addiu       $v0, $zero, 0x1131
    ctx->r2 = ADD32(0, 0X1131);
    // 0x00403114: bne         $v1, $v0, L_00403120
    if (ctx->r3 != ctx->r2) {
        // 0x00403118: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00403120;
    }
    // 0x00403118: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_0040311C:
    // 0x0040311C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_00403120:
    // 0x00403120: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00403124: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00403128: bne         $v0, $zero, L_00403138
    if (ctx->r2 != 0) {
        // 0x0040312C: nop
    
            goto L_00403138;
    }
    // 0x0040312C: nop

    // 0x00403130: jal         0x00243414
    // 0x00403134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00403134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
L_00403138:
    // 0x00403138: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040313C: jr          $ra
    // 0x00403140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00418BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418BF0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x00418BF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418BF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418BFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418C00: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418C04: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418C08: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00418C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418C14: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418C18: lb          $v0, 0x22($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X22);
    // 0x00418C1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418C20: jal         0x0041648C
    // 0x00418C24: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418C24: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418C28: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x00418C2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418C30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418C34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418C38: jr          $ra
    // 0x00418C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045554C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045554C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455550: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00455554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00455558: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0045555C: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00455560: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00455564: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x00455568: beql        $v0, $zero, L_00455580
    if (ctx->r2 == 0) {
        // 0x0045556C: addiu       $v0, $zero, 0xF8
        ctx->r2 = ADD32(0, 0XF8);
            goto L_00455580;
    }
    goto skip_0;
    // 0x0045556C: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    skip_0:
    // 0x00455570: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00455574: bnel        $v0, $zero, L_0045557C
    if (ctx->r2 != 0) {
        // 0x00455578: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0045557C;
    }
    goto skip_1;
    // 0x00455578: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0045557C:
    // 0x0045557C: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
L_00455580:
    // 0x00455580: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x00455584: lbu         $a1, 0x2A($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2A);
    // 0x00455588: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0045558C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00455590: jal         0x0041648C
    // 0x00455594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00455594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x00455598: sb          $v0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r2;
    // 0x0045559C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004555A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004555A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004555A8: jr          $ra
    // 0x004555AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004555AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0041CE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041CE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041CE70: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0041CE74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041CE78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
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
RECOMP_FUNC void func_00446BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446BC0: jr          $ra
    // 0x00446BC4: nop

    return;
    // 0x00446BC4: nop

;}
RECOMP_FUNC void func_0025FDE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FDE8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025FDEC: lh          $v0, 0x70($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X70);
    // 0x0025FDF0: jr          $ra
    // 0x0025FDF4: nop

    return;
    // 0x0025FDF4: nop

;}
RECOMP_FUNC void func_00413F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00413F74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00413F78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00413F7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00413F80: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00413F84: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00413F88: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00413F8C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00413F90: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00413F94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00413F98: addiu       $a0, $a0, -0x5378
    ctx->r4 = ADD32(ctx->r4, -0X5378);
    // 0x00413F9C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x00413FA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00413FA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00413FA8: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x00413FAC: bne         $v0, $v1, L_00413FC8
    if (ctx->r2 != ctx->r3) {
        // 0x00413FB0: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_00413FC8;
    }
    // 0x00413FB0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00413FB4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00413FB8: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x00413FBC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00413FC0: bnel        $v0, $zero, L_00413FF4
    if (ctx->r2 != 0) {
        // 0x00413FC4: sw          $zero, 0x38($s2)
        MEM_W(0X38, ctx->r18) = 0;
            goto L_00413FF4;
    }
    goto skip_0;
    // 0x00413FC4: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    skip_0:
L_00413FC8:
    // 0x00413FC8: lbu         $v0, -0x197($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X197);
    // 0x00413FCC: beq         $v0, $zero, L_00413FF4
    if (ctx->r2 == 0) {
        // 0x00413FD0: nop
    
            goto L_00413FF4;
    }
    // 0x00413FD0: nop

    // 0x00413FD4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00413FD8: bgez        $v0, L_00413FFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x00413FDC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_00413FFC;
    }
    // 0x00413FDC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00413FE0: jal         0x00266B80
    // 0x00413FE4: nop

    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00413FE4: nop

    after_0:
    // 0x00413FE8: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00413FEC: beql        $v0, $v1, L_00413FF4
    if (ctx->r2 == ctx->r3) {
        // 0x00413FF0: sw          $zero, 0x38($s2)
        MEM_W(0X38, ctx->r18) = 0;
            goto L_00413FF4;
    }
    goto skip_1;
    // 0x00413FF0: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    skip_1:
L_00413FF4:
    // 0x00413FF4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00413FF8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
L_00413FFC:
    // 0x00413FFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00414000: beq         $v0, $zero, L_00414038
    if (ctx->r2 == 0) {
        // 0x00414004: nop
    
            goto L_00414038;
    }
    // 0x00414004: nop

    // 0x00414008: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x0041400C: bnel        $v0, $zero, L_00414014
    if (ctx->r2 != 0) {
        // 0x00414010: sw          $zero, 0x38($s2)
        MEM_W(0X38, ctx->r18) = 0;
            goto L_00414014;
    }
    goto skip_2;
    // 0x00414010: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    skip_2:
L_00414014:
    // 0x00414014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00414018: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041401C: jal         0x00415CE8
    // 0x00414020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00415CE8(rdram, ctx);
        goto after_1;
    // 0x00414020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x00414024: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00414028: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041402C: jal         0x00415CE8
    // 0x00414030: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00415CE8(rdram, ctx);
        goto after_2;
    // 0x00414030: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x00414034: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_00414038:
    // 0x00414038: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x0041403C: beql        $v0, $zero, L_00414044
    if (ctx->r2 == 0) {
        // 0x00414040: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_00414044;
    }
    goto skip_3;
    // 0x00414040: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    skip_3:
L_00414044:
    // 0x00414044: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00414048: andi        $v1, $v0, 0x3FE0
    ctx->r3 = ctx->r2 & 0X3FE0;
    // 0x0041404C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x00414050: beq         $v1, $v0, L_004140F8
    if (ctx->r3 == ctx->r2) {
        // 0x00414054: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004140F8;
    }
    // 0x00414054: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00414058: sltiu       $v0, $v1, 0x201
    ctx->r2 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x0041405C: beq         $v0, $zero, L_004140A0
    if (ctx->r2 == 0) {
        // 0x00414060: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_004140A0;
    }
    // 0x00414060: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x00414064: beq         $v1, $v0, L_004140E0
    if (ctx->r3 == ctx->r2) {
        // 0x00414068: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_004140E0;
    }
    // 0x00414068: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x0041406C: beq         $v0, $zero, L_00414084
    if (ctx->r2 == 0) {
        // 0x00414070: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_00414084;
    }
    // 0x00414070: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00414074: beq         $v1, $v0, L_0041411C
    if (ctx->r3 == ctx->r2) {
        // 0x00414078: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_0041411C;
    }
    // 0x00414078: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0041407C: j           L_00414124
    // 0x00414080: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_00414124;
    // 0x00414080: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00414084:
    // 0x00414084: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00414088: beq         $v1, $v0, L_004140E8
    if (ctx->r3 == ctx->r2) {
        // 0x0041408C: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_004140E8;
    }
    // 0x0041408C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x00414090: beq         $v1, $v0, L_004140F0
    if (ctx->r3 == ctx->r2) {
        // 0x00414094: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_004140F0;
    }
    // 0x00414094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00414098: j           L_00414120
    // 0x0041409C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00414120;
    // 0x0041409C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004140A0:
    // 0x004140A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x004140A4: beq         $v1, $v0, L_00414108
    if (ctx->r3 == ctx->r2) {
        // 0x004140A8: sltiu       $v0, $v1, 0x801
        ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
            goto L_00414108;
    }
    // 0x004140A8: sltiu       $v0, $v1, 0x801
    ctx->r2 = ctx->r3 < 0X801 ? 1 : 0;
    // 0x004140AC: beq         $v0, $zero, L_004140C4
    if (ctx->r2 == 0) {
        // 0x004140B0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_004140C4;
    }
    // 0x004140B0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x004140B4: beq         $v1, $v0, L_00414100
    if (ctx->r3 == ctx->r2) {
        // 0x004140B8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00414100;
    }
    // 0x004140B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004140BC: j           L_00414120
    // 0x004140C0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00414120;
    // 0x004140C0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004140C4:
    // 0x004140C4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x004140C8: beq         $v1, $v0, L_00414110
    if (ctx->r3 == ctx->r2) {
        // 0x004140CC: addiu       $v0, $zero, 0x2000
        ctx->r2 = ADD32(0, 0X2000);
            goto L_00414110;
    }
    // 0x004140CC: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x004140D0: beq         $v1, $v0, L_00414118
    if (ctx->r3 == ctx->r2) {
        // 0x004140D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00414118;
    }
    // 0x004140D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004140D8: j           L_00414120
    // 0x004140DC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
        goto L_00414120;
    // 0x004140DC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_004140E0:
    // 0x004140E0: j           L_0041411C
    // 0x004140E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_0041411C;
    // 0x004140E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_004140E8:
    // 0x004140E8: j           L_0041411C
    // 0x004140EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_0041411C;
    // 0x004140EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_004140F0:
    // 0x004140F0: j           L_0041411C
    // 0x004140F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_0041411C;
    // 0x004140F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_004140F8:
    // 0x004140F8: j           L_0041411C
    // 0x004140FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_0041411C;
    // 0x004140FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_00414100:
    // 0x00414100: j           L_0041411C
    // 0x00414104: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_0041411C;
    // 0x00414104: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_00414108:
    // 0x00414108: j           L_0041411C
    // 0x0041410C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_0041411C;
    // 0x0041410C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_00414110:
    // 0x00414110: j           L_0041411C
    // 0x00414114: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
        goto L_0041411C;
    // 0x00414114: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_00414118:
    // 0x00414118: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_0041411C:
    // 0x0041411C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_00414120:
    // 0x00414120: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_00414124:
    // 0x00414124: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00414128: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041412C: addiu       $v1, $v1, 0x1BD4
    ctx->r3 = ADD32(ctx->r3, 0X1BD4);
    // 0x00414130: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x00414134: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00414138: lw          $v0, 0x1BD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BD0);
    // 0x0041413C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x00414140: beq         $v0, $v1, L_004141BC
    if (ctx->r2 == ctx->r3) {
        // 0x00414144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004141BC;
    }
    // 0x00414144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00414148: beq         $v1, $v0, L_00414188
    if (ctx->r3 == ctx->r2) {
        // 0x0041414C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00414188;
    }
    // 0x0041414C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00414150: beq         $v0, $zero, L_00414168
    if (ctx->r2 == 0) {
        // 0x00414154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00414168;
    }
    // 0x00414154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00414158: beq         $v1, $zero, L_00414178
    if (ctx->r3 == 0) {
        // 0x0041415C: nop
    
            goto L_00414178;
    }
    // 0x0041415C: nop

    // 0x00414160: j           L_004141B0
    // 0x00414164: nop

        goto L_004141B0;
    // 0x00414164: nop

L_00414168:
    // 0x00414168: beq         $v1, $v0, L_004141A0
    if (ctx->r3 == ctx->r2) {
        // 0x0041416C: nop
    
            goto L_004141A0;
    }
    // 0x0041416C: nop

    // 0x00414170: j           L_004141B0
    // 0x00414174: nop

        goto L_004141B0;
    // 0x00414174: nop

L_00414178:
    // 0x00414178: jal         0x00277F6C
    // 0x0041417C: nop

    func_00277F6C(rdram, ctx);
        goto after_3;
    // 0x0041417C: nop

    after_3:
    // 0x00414180: j           L_004141B0
    // 0x00414184: nop

        goto L_004141B0;
    // 0x00414184: nop

L_00414188:
    // 0x00414188: jal         0x00277F6C
    // 0x0041418C: nop

    func_00277F6C(rdram, ctx);
        goto after_4;
    // 0x0041418C: nop

    after_4:
    // 0x00414190: jal         0x0027836C
    // 0x00414194: nop

    func_0027836C(rdram, ctx);
        goto after_5;
    // 0x00414194: nop

    after_5:
    // 0x00414198: j           L_004141B0
    // 0x0041419C: nop

        goto L_004141B0;
    // 0x0041419C: nop

L_004141A0:
    // 0x004141A0: jal         0x00277F6C
    // 0x004141A4: nop

    func_00277F6C(rdram, ctx);
        goto after_6;
    // 0x004141A4: nop

    after_6:
    // 0x004141A8: jal         0x0027845C
    // 0x004141AC: nop

    func_0027845C(rdram, ctx);
        goto after_7;
    // 0x004141AC: nop

    after_7:
L_004141B0:
    // 0x004141B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004141B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141B8: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
L_004141BC:
    // 0x004141BC: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x004141C0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x004141C4: bne         $v0, $v1, L_004141DC
    if (ctx->r2 != ctx->r3) {
        // 0x004141C8: lui         $v1, 0x100
        ctx->r3 = S32(0X100 << 16);
            goto L_004141DC;
    }
    // 0x004141C8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x004141CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141D0: lwc1        $f1, 0xBCC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBCC);
    // 0x004141D4: j           L_004141FC
    // 0x004141D8: nop

        goto L_004141FC;
    // 0x004141D8: nop

L_004141DC:
    // 0x004141DC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x004141E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141E4: lwc1        $f1, 0xBD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD0);
    // 0x004141E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004141EC: bne         $v0, $zero, L_004141FC
    if (ctx->r2 != 0) {
        // 0x004141F0: nop
    
            goto L_004141FC;
    }
    // 0x004141F0: nop

    // 0x004141F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004141F8: lwc1        $f1, 0xBD4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XBD4);
L_004141FC:
    // 0x004141FC: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x00414200: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414204: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414208: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041420C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414210: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414214: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414218: beq         $v0, $zero, L_00414224
    if (ctx->r2 == 0) {
        // 0x0041421C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_00414224;
    }
    // 0x0041421C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x00414220: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_00414224:
    // 0x00414224: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x00414228: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041422C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414230: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414234: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414238: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041423C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414240: beq         $v0, $zero, L_0041424C
    if (ctx->r2 == 0) {
        // 0x00414244: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_0041424C;
    }
    // 0x00414244: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00414248: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_0041424C:
    // 0x0041424C: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x00414250: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00414254: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414258: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0041425C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414260: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00414264: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414268: beq         $v0, $zero, L_00414274
    if (ctx->r2 == 0) {
        // 0x0041426C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_00414274;
    }
    // 0x0041426C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x00414270: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
L_00414274:
    // 0x00414274: lbu         $v0, 0x18($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X18);
    // 0x00414278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0041427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414280: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00414284: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00414288: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041428C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x00414290: beq         $v0, $zero, L_0041429C
    if (ctx->r2 == 0) {
        // 0x00414294: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0041429C;
    }
    // 0x00414294: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x00414298: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
L_0041429C:
    // 0x0041429C: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x004142A0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142A8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142AC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142B0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142B4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142B8: beq         $v0, $zero, L_004142C8
    if (ctx->r2 == 0) {
        // 0x004142BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142C8;
    }
    // 0x004142BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142C0: j           L_004142CC
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
        goto L_004142CC;
    // 0x004142C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_004142C8:
    // 0x004142C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_004142CC:
    // 0x004142CC: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x004142D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x004142D4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x004142D8: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004142DC: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004142E0: mfc1        $v1, $f3
    ctx->r3 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004142E4: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x004142E8: beq         $v0, $zero, L_004142F8
    if (ctx->r2 == 0) {
        // 0x004142EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_004142F8;
    }
    // 0x004142EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x004142F0: j           L_004142FC
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_004142FC;
    // 0x004142F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_004142F8:
    // 0x004142F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_004142FC:
    // 0x004142FC: jal         0x0027B094
    // 0x00414300: nop

    func_0027B094(rdram, ctx);
        goto after_8;
    // 0x00414300: nop

    after_8:
    // 0x00414304: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414308: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0041430C: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x00414310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00414314: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x00414318: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0041431C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x00414320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414324: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00414328: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041432C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00414330: lwc1        $f1, 0x10($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X10);
    // 0x00414334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414338: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0041433C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00414340: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414344: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414348: lwc1        $f12, 0xBD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XBD8);
    // 0x0041434C: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x00414350: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414354: lwc1        $f14, 0xBDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0XBDC);
    // 0x00414358: mul.s       $f14, $f1, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x0041435C: jal         0x0027B0C0
    // 0x00414360: nop

    func_0027B0C0(rdram, ctx);
        goto after_9;
    // 0x00414360: nop

    after_9:
    // 0x00414364: beq         $s3, $zero, L_00414370
    if (ctx->r19 == 0) {
        // 0x00414368: nop
    
            goto L_00414370;
    }
    // 0x00414368: nop

    // 0x0041436C: lbu         $s3, 0x14($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X14);
L_00414370:
    // 0x00414370: lwc1        $f1, 0x34($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34);
    // 0x00414374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414378: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x0041437C: lwc1        $f2, 0x30($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X30);
    // 0x00414380: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x00414384: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00414388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041438C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x00414390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00414394: lwc1        $f0, 0xBE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE4);
    // 0x00414398: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0041439C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x004143A0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x004143A4: lw          $a1, 0x14($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X14);
    // 0x004143A8: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x004143AC: trunc.w.s   $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f2.fl);
    // 0x004143B0: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004143B4: jal         0x00278CDC
    // 0x004143B8: nop

    func_00278CDC(rdram, ctx);
        goto after_10;
    // 0x004143B8: nop

    after_10:
    // 0x004143BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x004143C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004143C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004143C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004143CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004143D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004143D4: jr          $ra
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x004143D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0040EA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EA24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040EA28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040EA2C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x0040EA30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040EA34: jal         0x00243414
    // 0x0040EA38: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040EA38: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x0040EA3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040EA40: jr          $ra
    // 0x0040EA44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040EA44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026115C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026115C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x00261160: sw          $s3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r19;
    // 0x00261164: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00261168: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x0026116C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00261170: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00261174: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00261178: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    // 0x0026117C: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x00261180: sw          $ra, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r31;
    // 0x00261184: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x00261188: jal         0x00246108
    // 0x0026118C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0026118C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00261190: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00261194: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00261198: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x0026119C: jal         0x0024599C
    // 0x002611A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x002611A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x002611A4: lwc1        $f0, 0xB0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XB0);
    // 0x002611A8: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x002611AC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x002611B0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x002611B4: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x002611B8: lb          $v0, 0x37($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X37);
    // 0x002611BC: bne         $v0, $s0, L_002611D8
    if (ctx->r2 != ctx->r16) {
        // 0x002611C0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_002611D8;
    }
    // 0x002611C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x002611C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002611C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002611CC: lwc1        $f0, 0x7A40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A40);
    // 0x002611D0: j           L_002611E8
    // 0x002611D4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
        goto L_002611E8;
    // 0x002611D4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
L_002611D8:
    // 0x002611D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002611DC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x002611E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002611E4: lwc1        $f0, 0x7A44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A44);
L_002611E8:
    // 0x002611E8: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x002611EC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x002611F0: jal         0x00260D60
    // 0x002611F4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_00260D60(rdram, ctx);
        goto after_2;
    // 0x002611F4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x002611F8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x002611FC: beq         $v0, $zero, L_00261280
    if (ctx->r2 == 0) {
        // 0x00261200: nop
    
            goto L_00261280;
    }
    // 0x00261200: nop

    // 0x00261204: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00261208: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0026120C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x00261210: nop

    // 0x00261214: bc1f        L_00261240
    if (!c1cs) {
        // 0x00261218: nop
    
            goto L_00261240;
    }
    // 0x00261218: nop

    // 0x0026121C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261220: lwc1        $f1, 0x7A48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7A48);
    // 0x00261224: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x00261228: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0026122C: nop

    // 0x00261230: bc1t        L_00261258
    if (c1cs) {
        // 0x00261234: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00261258;
    }
    // 0x00261234: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00261238: j           L_00261280
    // 0x0026123C: nop

        goto L_00261280;
    // 0x0026123C: nop

L_00261240:
    // 0x00261240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261244: lwc1        $f0, 0x7A4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7A4C);
    // 0x00261248: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0026124C: nop

    // 0x00261250: bc1f        L_00261280
    if (!c1cs) {
        // 0x00261254: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00261280;
    }
    // 0x00261254: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00261258:
    // 0x00261258: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0026125C: jal         0x0025D030
    // 0x00261260: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025D030(rdram, ctx);
        goto after_3;
    // 0x00261260: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x00261264: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00261268: beq         $a2, $zero, L_00261280
    if (ctx->r6 == 0) {
        // 0x0026126C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00261280;
    }
    // 0x0026126C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00261270: sb          $v0, 0x35($s2)
    MEM_B(0X35, ctx->r18) = ctx->r2;
    // 0x00261274: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00261278: jal         0x00243414
    // 0x0026127C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0026127C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_00261280:
    // 0x00261280: lw          $ra, 0xF0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF0);
    // 0x00261284: lw          $s3, 0xEC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XEC);
    // 0x00261288: lw          $s2, 0xE8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE8);
    // 0x0026128C: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x00261290: lw          $s0, 0xE0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE0);
    // 0x00261294: jr          $ra
    // 0x00261298: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x00261298: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_00452610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004196A4:
    // 0x00452610: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00452614: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00452618: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0045261C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00452620: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x00452624: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00452628: addiu       $v0, $v0, -0x5528
    ctx->r2 = ADD32(ctx->r2, -0X5528);
    // 0x0045262C: addiu       $a0, $v0, 0xC0
    ctx->r4 = ADD32(ctx->r2, 0XC0);
    // 0x00452630: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00452634: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00452638: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0045263C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00452640: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00452644: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x00452648: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
L_0045264C:
    // 0x0045264C: sb          $zero, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = 0;
    // 0x00452650: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00452654: bgez        $s0, L_0045264C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x00452658: addiu       $a0, $a0, -0x40
        ctx->r4 = ADD32(ctx->r4, -0X40);
            goto L_0045264C;
    }
    // 0x00452658: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x0045265C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00452660: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00452664: addiu       $s3, $s3, -0x54E8
    ctx->r19 = ADD32(ctx->r19, -0X54E8);
    // 0x00452668: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0045266C: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00452670: addiu       $s1, $s1, 0x5EC0
    ctx->r17 = ADD32(ctx->r17, 0X5EC0);
L_00452674:
    // 0x00452674: jal         0x002855E8
    // 0x00452678: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002855E8(rdram, ctx);
        goto after_0;
    // 0x00452678: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x0045267C: beql        $v0, $zero, L_00452698
    if (ctx->r2 == 0) {
        // 0x00452680: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00452698;
    }
    goto skip_0;
    // 0x00452680: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00452684: sb          $s2, 0x28($s3)
    MEM_B(0X28, ctx->r19) = ctx->r18;
    // 0x00452688: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0045268C: sb          $s0, -0x54B9($at)
    MEM_B(-0X54B9, ctx->r1) = ctx->r16;
    // 0x00452690: j           L_004196A4
    // 0x00452694: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
    entry_004196A4(rdram, ctx);
    return;
    // 0x00452694: sw          $s1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r17;
L_00452698:
    // 0x00452698: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x0045269C: bne         $v0, $zero, L_00452674
    if (ctx->r2 != 0) {
        // 0x004526A0: addiu       $s1, $s1, 0x224
        ctx->r17 = ADD32(ctx->r17, 0X224);
            goto L_00452674;
    }
    // 0x004526A0: addiu       $s1, $s1, 0x224
    ctx->r17 = ADD32(ctx->r17, 0X224);
    // 0x004526A4: jal         0x00275A74
    // 0x004526A8: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x004526A8: nop

    after_1:
    // 0x004526AC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004526B0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004526B4: jal         0x00430374
    // 0x004526B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00430374(rdram, ctx);
        goto after_2;
    // 0x004526B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x004526BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x004526C0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x004526C4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x004526C8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004526CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004526D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004526D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004526D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004526DC: sw          $v0, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = ctx->r2;
    // 0x004526E0: jr          $ra
    // 0x004526E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004526E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002A29F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A29F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002A29F4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x002A29F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002A29FC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x002A2A00: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002A2A04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x002A2A08: jal         0x002A2494
    // 0x002A2A0C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_002A2494(rdram, ctx);
        goto after_0;
    // 0x002A2A0C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x002A2A10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x002A2A14: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2A18: lw          $v1, -0x3CFC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3CFC);
    // 0x002A2A1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002A2A20: bne         $v1, $v0, L_002A2A98
    if (ctx->r3 != ctx->r2) {
        // 0x002A2A24: lui         $v1, 0x8000
        ctx->r3 = S32(0X8000 << 16);
            goto L_002A2A98;
    }
    // 0x002A2A24: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x002A2A28: ori         $v1, $v1, 0x303
    ctx->r3 = ctx->r3 | 0X303;
    // 0x002A2A2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x002A2A30: addiu       $a0, $a0, -0x7C90
    ctx->r4 = ADD32(ctx->r4, -0X7C90);
    // 0x002A2A34: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002A2A38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A2A3C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x002A2A40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x002A2A44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x002A2A48: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x002A2A4C: addiu       $s0, $s0, -0x7AC0
    ctx->r16 = ADD32(ctx->r16, -0X7AC0);
    // 0x002A2A50: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x002A2A54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002A2A58: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x002A2A5C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x002A2A60: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x002A2A64: jal         0x0029B820
    // 0x002A2A68: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A2A68: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_1:
    // 0x002A2A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002A2A70: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x002A2A74: jal         0x0029B6F0
    // 0x002A2A78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002A2A78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002A2A7C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x002A2A80: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x002A2A84: beq         $v0, $zero, L_002A2AEC
    if (ctx->r2 == 0) {
        // 0x002A2A88: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_002A2AEC;
    }
    // 0x002A2A88: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x002A2A8C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002A2A90: j           L_002A2AEC
    // 0x002A2A94: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_002A2AEC;
    // 0x002A2A94: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_002A2A98:
    // 0x002A2A98: jal         0x002A12F0
    // 0x002A2A9C: nop

    func_002A12F0(rdram, ctx);
        goto after_3;
    // 0x002A2A9C: nop

    after_3:
    // 0x002A2AA0: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x002A2AA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002A2AA8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x002A2AAC: jal         0x002A1A3C
    // 0x002A2AB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002A1A3C(rdram, ctx);
        goto after_4;
    // 0x002A2AB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x002A2AB4: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    // 0x002A2AB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A2ABC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x002A2AC0: jal         0x002A259C
    // 0x002A2AC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_002A259C(rdram, ctx);
        goto after_5;
    // 0x002A2AC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x002A2AC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x002A2ACC: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x002A2AD0: beq         $v0, $zero, L_002A2AE4
    if (ctx->r2 == 0) {
        // 0x002A2AD4: sw          $v1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r3;
            goto L_002A2AE4;
    }
    // 0x002A2AD4: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x002A2AD8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x002A2ADC: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x002A2AE0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_002A2AE4:
    // 0x002A2AE4: jal         0x002A1324
    // 0x002A2AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002A1324(rdram, ctx);
        goto after_6;
    // 0x002A2AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_002A2AEC:
    // 0x002A2AEC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2AF0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x002A2AF4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x002A2AF8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x002A2AFC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x002A2B00: jr          $ra
    // 0x002A2B04: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002A2B04: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_00213E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00213E90: lui         $v1, 0x2492
    ctx->r3 = S32(0X2492 << 16);
    // 0x00213E94: lbu         $a0, 0xBC($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XBC);
    // 0x00213E98: ori         $v1, $v1, 0x4925
    ctx->r3 = ctx->r3 | 0X4925;
    // 0x00213E9C: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00213EA0: lui         $a2, 0xB60B
    ctx->r6 = S32(0XB60B << 16);
    // 0x00213EA4: ori         $a2, $a2, 0x60B7
    ctx->r6 = ctx->r6 | 0X60B7;
    // 0x00213EA8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00213EAC: lw          $a1, 0x6D18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6D18);
        turok2_patch_scale_frame_a1(rdram, ctx);

    // 0x00213EB0: mfhi        $v1
    ctx->r3 = hi;
    // 0x00213EB4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x00213EB8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x00213EBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00213EC0: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x00213EC4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00213EC8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00213ECC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x00213ED0: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x00213ED4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00213ED8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x00213EDC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x00213EE0: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00213EE4: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x00213EE8: mfhi        $v0
    ctx->r2 = hi;
    // 0x00213EEC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00213EF0: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x00213EF4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00213EF8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00213EFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00213F00: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x00213F04: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00213F08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00213F0C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x00213F10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00213F14: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00213F18: lb          $v0, -0x350C($at)
    ctx->r2 = MEM_B(ctx->r1, -0X350C);
    // 0x00213F1C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00213F20: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213F24: jr          $ra
    // 0x00213F28: nop

    return;
    // 0x00213F28: nop

;}
RECOMP_FUNC void func_0040C4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040C4F4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0040C4F8: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x0040C4FC: beq         $v1, $zero, L_0040C510
    if (ctx->r3 == 0) {
        // 0x0040C500: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0040C510;
    }
    // 0x0040C500: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0040C504:
    // 0x0040C504: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x0040C508: bne         $v1, $zero, L_0040C504
    if (ctx->r3 != 0) {
        // 0x0040C50C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_0040C504;
    }
    // 0x0040C50C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_0040C510:
    // 0x0040C510: jr          $ra
    // 0x0040C514: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    return;
    // 0x0040C514: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
;}
RECOMP_FUNC void func_0041C650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C654: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041C658: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041C65C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041C660: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041C664: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x0041C668: addiu       $v1, $v1, -0x54E8
    ctx->r3 = ADD32(ctx->r3, -0X54E8);
    // 0x0041C66C: beq         $v0, $zero, L_0041C680
    if (ctx->r2 == 0) {
        // 0x0041C670: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0041C680;
    }
    // 0x0041C670: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041C674: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C678: bnel        $v0, $zero, L_0041C680
    if (ctx->r2 != 0) {
        // 0x0041C67C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_0041C680;
    }
    goto skip_0;
    // 0x0041C67C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    skip_0:
L_0041C680:
    // 0x0041C680: lbu         $v0, 0x2A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2A);
    // 0x0041C684: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x0041C688: bltzl       $a2, L_0041C690
    if (SIGNED(ctx->r6) < 0) {
        // 0x0041C68C: addiu       $a2, $v0, -0x79
        ctx->r6 = ADD32(ctx->r2, -0X79);
            goto L_0041C690;
    }
    goto skip_1;
    // 0x0041C68C: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
    skip_1:
L_0041C690:
    // 0x0041C690: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x0041C694: bne         $s0, $zero, L_0041C6AC
    if (ctx->r16 != 0) {
        // 0x0041C698: nop
    
            goto L_0041C6AC;
    }
    // 0x0041C698: nop

    // 0x0041C69C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6A0: addiu       $v0, $v0, 0x4080
    ctx->r2 = ADD32(ctx->r2, 0X4080);
    // 0x0041C6A4: j           L_0041C700
    // 0x0041C6A8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041C700;
    // 0x0041C6A8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041C6AC:
    // 0x0041C6AC: blez        $s0, L_0041C6D4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x0041C6B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041C6D4;
    }
    // 0x0041C6B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041C6B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6B8: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0041C6BC: jal         0x004160F0
    // 0x0041C6C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041C6C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041C6C4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C6C8: addiu       $a1, $a1, 0x1318
    ctx->r5 = ADD32(ctx->r5, 0X1318);
    // 0x0041C6CC: j           L_0041C6F0
    // 0x0041C6D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041C6F0;
    // 0x0041C6D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C6D4:
    // 0x0041C6D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C6D8: addiu       $v0, $v0, 0x4098
    ctx->r2 = ADD32(ctx->r2, 0X4098);
    // 0x0041C6DC: jal         0x004160F0
    // 0x0041C6E0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x0041C6E0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x0041C6E4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C6E8: addiu       $a1, $a1, 0x1320
    ctx->r5 = ADD32(ctx->r5, 0X1320);
    // 0x0041C6EC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041C6F0:
    // 0x0041C6F0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041C6F4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041C6F8: jal         0x0029E3E0
    // 0x0041C6FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041C6FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041C700:
    // 0x0041C700: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C70C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C710: jr          $ra
    // 0x0041C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029E208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029E20C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
;}
RECOMP_FUNC void func_004514E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00418554:
    // 0x004514E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004514E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004514EC: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x004514F0: addiu       $s1, $s1, -0x5528
    ctx->r17 = ADD32(ctx->r17, -0X5528);
    // 0x004514F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x004514F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004514FC: lb          $v0, 0x26($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X26);
    // 0x00451500: beq         $v0, $zero, L_00451534
    if (ctx->r2 == 0) {
        // 0x00451504: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00451534;
    }
    // 0x00451504: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00451508: jal         0x004160F0
    // 0x0045150C: nop

    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045150C: nop

    after_0:
    // 0x00451510: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451514: addiu       $a1, $a1, 0xE84
    ctx->r5 = ADD32(ctx->r5, 0XE84);
    // 0x00451518: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045151C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451520: lb          $a2, 0x26($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X26);
    // 0x00451524: jal         0x0029E3E0
    // 0x00451528: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00451528: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0045152C: j           L_00418554
    // 0x00451530: nop

    entry_00418554(rdram, ctx);
    return;
    // 0x00451530: nop

L_00451534:
    // 0x00451534: jal         0x004160F0
    // 0x00451538: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_2;
    // 0x00451538: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0045153C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00451540: addiu       $a1, $a1, 0xE8C
    ctx->r5 = ADD32(ctx->r5, 0XE8C);
    // 0x00451544: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00451548: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045154C: jal         0x0029E3E0
    // 0x00451550: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_3;
    // 0x00451550: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x00451554: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00451558: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045155C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00451560: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451564: jr          $ra
    // 0x00451568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002684F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002684F0: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x002684F4: jr          $ra
    // 0x002684F8: nop

    return;
    // 0x002684F8: nop

;}
RECOMP_FUNC void func_00415500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00415500: lh          $v1, 0x28($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X28);
    // 0x00415504: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x00415508 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00415508(rdram, ctx);
;}
RECOMP_FUNC void func_0021E9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021E9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0021E9FC: bltz        $a1, L_0021EA1C
    if (SIGNED(ctx->r5) < 0) {
        // 0x0021EA00: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0021EA1C;
    }
    // 0x0021EA00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0021EA04: bne         $a2, $zero, L_0021EA24
    if (ctx->r6 != 0) {
        // 0x0021EA08: nop
    
            goto L_0021EA24;
    }
    // 0x0021EA08: nop

    // 0x0021EA0C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x0021EA10: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x0021EA14: beq         $v0, $zero, L_0021EA24
    if (ctx->r2 == 0) {
        // 0x0021EA18: nop
    
            goto L_0021EA24;
    }
    // 0x0021EA18: nop

L_0021EA1C:
    // 0x0021EA1C: j           L_0021EA30
    // 0x0021EA20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0021EA30;
    // 0x0021EA20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0021EA24:
    // 0x0021EA24: jal         0x0021E960
    // 0x0021EA28: nop

    func_0021E960(rdram, ctx);
        goto after_0;
    // 0x0021EA28: nop

    after_0:
    // 0x0021EA2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0021EA30:
    // 0x0021EA30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0021EA34: jr          $ra
    // 0x0021EA38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0021EA38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045B350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045B354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045B358: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045B35C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x0045B360: lhu         $s1, 0x94C($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X94C);
    // 0x0045B364: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045B368: jal         0x004160F0
    // 0x0045B36C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045B36C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0045B370: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0045B374: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0045B378: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045B37C: addiu       $a1, $a1, 0x1428
    ctx->r5 = ADD32(ctx->r5, 0X1428);
    // 0x0045B380: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045B384: jal         0x0029E3E0
    // 0x0045B388: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045B388: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0045B38C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045B390: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045B394: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045B398: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045B39C: jr          $ra
    // 0x0045B3A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045B3A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00281A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00281A9C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00281AA0: jal         0x0042FFF0
    // 0x00281AA4: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    func_0042FFF0(rdram, ctx);
        goto after_0;
    // 0x00281AA4: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    after_0:
    // 0x00281AA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00281AAC: jr          $ra
    // 0x00281AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00281AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00299DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299DF8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
;}
RECOMP_FUNC void func_0043CF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043CF3C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0043CF40: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0043CF44: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0043CF48: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0043CF4C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0043CF50: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x0043CF54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0043CF58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0043CF5C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0043CF60: jal         0x0025AD90
    // 0x0043CF64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0025AD90(rdram, ctx);
        goto after_0;
    // 0x0043CF64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0043CF68: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x0043CF6C: beq         $v0, $zero, L_0043CF8C
    if (ctx->r2 == 0) {
        // 0x0043CF70: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_0043CF8C;
    }
    // 0x0043CF70: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0043CF74: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x0043CF78: beq         $v0, $zero, L_0043CF8C
    if (ctx->r2 == 0) {
        // 0x0043CF7C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0043CF8C;
    }
    // 0x0043CF7C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0043CF80: jalr        $v0
    // 0x0043CF84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0043CF84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0043CF88: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0043CF8C:
    // 0x0043CF8C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043CF90: addiu       $s0, $s0, -0x9D4
    ctx->r16 = ADD32(ctx->r16, -0X9D4);
L_0043CF94:
    // 0x0043CF94: jal         0x00235510
    // 0x0043CF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00235510(rdram, ctx);
        goto after_2;
    // 0x0043CF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0043CF9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0043CFA0: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x0043CFA4: bne         $v0, $zero, L_0043CF94
    if (ctx->r2 != 0) {
        // 0x0043CFA8: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_0043CF94;
    }
    // 0x0043CFA8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    // 0x0043CFAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043CFB0: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x0043CFB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0043CFB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0043CFBC: bne         $v0, $a1, L_0043CFDC
    if (ctx->r2 != ctx->r5) {
        // 0x0043CFC0: nop
    
            goto L_0043CFDC;
    }
    // 0x0043CFC0: nop

    // 0x0043CFC4: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x0043CFC8: swc1        $f0, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f0.u32l;
    // 0x0043CFCC: lwc1        $f0, 0x68($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X68);
    // 0x0043CFD0: swc1        $f0, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f0.u32l;
    // 0x0043CFD4: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x0043CFD8: swc1        $f0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->f0.u32l;
L_0043CFDC:
    // 0x0043CFDC: lwc1        $f1, -0x70($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, -0X70);
    // 0x0043CFE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0043CFE4: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043CFE8: nop

    // 0x0043CFEC: bc1f        L_0043D004
    if (!c1cs) {
        // 0x0043CFF0: nop
    
            goto L_0043D004;
    }
    // 0x0043CFF0: nop

    // 0x0043CFF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043CFF8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043CFFC: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D000: swc1        $f0, -0x70($a0)
    MEM_W(-0X70, ctx->r4) = ctx->f0.u32l;
L_0043D004:
    // 0x0043D004: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x0043D008: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D00C: nop

    // 0x0043D010: bc1f        L_0043D028
    if (!c1cs) {
        // 0x0043D014: nop
    
            goto L_0043D028;
    }
    // 0x0043D014: nop

    // 0x0043D018: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D01C: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D020: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D024: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_0043D028:
    // 0x0043D028: lwc1        $f1, 0x30($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x0043D02C: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D030: nop

    // 0x0043D034: bc1f        L_0043D04C
    if (!c1cs) {
        // 0x0043D038: nop
    
            goto L_0043D04C;
    }
    // 0x0043D038: nop

    // 0x0043D03C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D040: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D044: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D048: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
L_0043D04C:
    // 0x0043D04C: lwc1        $f1, 0x44($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X44);
    // 0x0043D050: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D054: nop

    // 0x0043D058: bc1f        L_0043D070
    if (!c1cs) {
        // 0x0043D05C: nop
    
            goto L_0043D070;
    }
    // 0x0043D05C: nop

    // 0x0043D060: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D064: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D068: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D06C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
L_0043D070:
    // 0x0043D070: lwc1        $f1, -0x7C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, -0X7C);
    // 0x0043D074: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D078: nop

    // 0x0043D07C: bc1f        L_0043D094
    if (!c1cs) {
        // 0x0043D080: nop
    
            goto L_0043D094;
    }
    // 0x0043D080: nop

    // 0x0043D084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D088: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D08C: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D090: swc1        $f0, -0x7C($a0)
    MEM_W(-0X7C, ctx->r4) = ctx->f0.u32l;
L_0043D094:
    // 0x0043D094: lwc1        $f1, 0x10($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0043D098: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D09C: nop

    // 0x0043D0A0: bc1f        L_0043D0B8
    if (!c1cs) {
        // 0x0043D0A4: nop
    
            goto L_0043D0B8;
    }
    // 0x0043D0A4: nop

    // 0x0043D0A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D0AC: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D0B0: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D0B4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
L_0043D0B8:
    // 0x0043D0B8: lwc1        $f1, -0x6C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, -0X6C);
    // 0x0043D0BC: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D0C0: nop

    // 0x0043D0C4: bc1f        L_0043D0DC
    if (!c1cs) {
        // 0x0043D0C8: nop
    
            goto L_0043D0DC;
    }
    // 0x0043D0C8: nop

    // 0x0043D0CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D0D0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D0D4: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D0D8: swc1        $f0, -0x6C($a0)
    MEM_W(-0X6C, ctx->r4) = ctx->f0.u32l;
L_0043D0DC:
    // 0x0043D0DC: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x0043D0E0: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0043D0E4: nop

    // 0x0043D0E8: bc1f        L_0043D100
    if (!c1cs) {
        // 0x0043D0EC: nop
    
            goto L_0043D100;
    }
    // 0x0043D0EC: nop

    // 0x0043D0F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0043D0F4: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0043D0F8: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x0043D0FC: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_0043D100:
    // 0x0043D100: lw          $v1, -0x3D0($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X3D0);
    // 0x0043D104: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043D108: bne         $v1, $v0, L_0043D17C
    if (ctx->r3 != ctx->r2) {
        // 0x0043D10C: ori         $v0, $zero, 0x95FF
        ctx->r2 = 0 | 0X95FF;
            goto L_0043D17C;
    }
    // 0x0043D10C: ori         $v0, $zero, 0x95FF
    ctx->r2 = 0 | 0X95FF;
    // 0x0043D110: lw          $v1, -0x4C($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X4C);
    // 0x0043D114: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x0043D118: bne         $v0, $zero, L_0043D12C
    if (ctx->r2 != 0) {
        // 0x0043D11C: nop
    
            goto L_0043D12C;
    }
    // 0x0043D11C: nop

    // 0x0043D120: lw          $v0, -0x3B4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X3B4);
    // 0x0043D124: beql        $v0, $zero, L_0043D12C
    if (ctx->r2 == 0) {
        // 0x0043D128: sw          $a1, -0x3B4($a0)
        MEM_W(-0X3B4, ctx->r4) = ctx->r5;
            goto L_0043D12C;
    }
    goto skip_0;
    // 0x0043D128: sw          $a1, -0x3B4($a0)
    MEM_W(-0X3B4, ctx->r4) = ctx->r5;
    skip_0:
L_0043D12C:
    // 0x0043D12C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043D130: addiu       $a0, $a0, -0x674
    ctx->r4 = ADD32(ctx->r4, -0X674);
    // 0x0043D134: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0043D138: slti        $v0, $v0, 0x6400
    ctx->r2 = SIGNED(ctx->r2) < 0X6400 ? 1 : 0;
    // 0x0043D13C: beq         $v0, $zero, L_0043D15C
    if (ctx->r2 == 0) {
        // 0x0043D140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0043D15C;
    }
    // 0x0043D140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0043D144: lw          $v1, -0x368($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X368);
    // 0x0043D148: bne         $v1, $v0, L_0043D15C
    if (ctx->r3 != ctx->r2) {
        // 0x0043D14C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043D15C;
    }
    // 0x0043D14C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043D150: sw          $v0, -0x368($a0)
    MEM_W(-0X368, ctx->r4) = ctx->r2;
    // 0x0043D154: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043D158: addiu       $a0, $a0, -0x674
    ctx->r4 = ADD32(ctx->r4, -0X674);
L_0043D15C:
    // 0x0043D15C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0043D160: slti        $v0, $v0, 0x3200
    ctx->r2 = SIGNED(ctx->r2) < 0X3200 ? 1 : 0;
    // 0x0043D164: beq         $v0, $zero, L_0043D17C
    if (ctx->r2 == 0) {
        // 0x0043D168: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0043D17C;
    }
    // 0x0043D168: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0043D16C: lw          $v1, -0x368($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X368);
    // 0x0043D170: bne         $v1, $v0, L_0043D17C
    if (ctx->r3 != ctx->r2) {
        // 0x0043D174: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0043D17C;
    }
    // 0x0043D174: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043D178: sw          $v0, -0x368($a0)
    MEM_W(-0X368, ctx->r4) = ctx->r2;
L_0043D17C:
    // 0x0043D17C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0043D180: addiu       $v0, $v0, -0x60C
    ctx->r2 = ADD32(ctx->r2, -0X60C);
    // 0x0043D184: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x0043D188: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0043D18C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0043D190: nop

    // 0x0043D194: bc1f        L_0043D380
    if (!c1cs) {
        // 0x0043D198: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0043D380;
    }
    // 0x0043D198: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0043D19C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D1A0: lwc1        $f0, 0x398($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X398);
    // 0x0043D1A4: swc1        $f1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043D1A8: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0043D1AC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0043D1B0: lw          $v1, -0x3EC($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X3EC);
    // 0x0043D1B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043D1B8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x0043D1BC: addiu       $a0, $a0, 0x1BF4
    ctx->r4 = ADD32(ctx->r4, 0X1BF4);
    // 0x0043D1C0: bne         $v1, $v0, L_0043D1D0
    if (ctx->r3 != ctx->r2) {
        // 0x0043D1C4: nop
    
            goto L_0043D1D0;
    }
    // 0x0043D1C4: nop

    // 0x0043D1C8: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x0043D1CC: addiu       $a0, $a0, 0x1C10
    ctx->r4 = ADD32(ctx->r4, 0X1C10);
L_0043D1D0:
    // 0x0043D1D0: jal         0x0026D518
    // 0x0043D1D4: nop

    func_0026D518(rdram, ctx);
        goto after_3;
    // 0x0043D1D4: nop

    after_3:
    // 0x0043D1D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0043D1DC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0043D1E0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0043D1E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043D1E8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0043D1EC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0043D1F0: jal         0x00406FE4
    // 0x0043D1F4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_4;
    // 0x0043D1F4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_4:
    // 0x0043D1F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D1FC: lwc1        $f0, 0x39C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X39C);
    // 0x0043D200: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D204: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x0043D208: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043D20C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0043D210: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0043D214: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x0043D218: addiu       $a0, $a0, 0x1BF4
    ctx->r4 = ADD32(ctx->r4, 0X1BF4);
    // 0x0043D21C: bne         $v1, $v0, L_0043D22C
    if (ctx->r3 != ctx->r2) {
        // 0x0043D220: swc1        $f0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
            goto L_0043D22C;
    }
    // 0x0043D220: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0043D224: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x0043D228: addiu       $a0, $a0, 0x1C10
    ctx->r4 = ADD32(ctx->r4, 0X1C10);
L_0043D22C:
    // 0x0043D22C: jal         0x0026D518
    // 0x0043D230: nop

    func_0026D518(rdram, ctx);
        goto after_5;
    // 0x0043D230: nop

    after_5:
    // 0x0043D234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0043D238: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0043D23C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0043D240: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043D244: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0043D248: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0043D24C: jal         0x00406FE4
    // 0x0043D250: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_6;
    // 0x0043D250: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_6:
    // 0x0043D254: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D258: lwc1        $f0, 0x3A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A0);
    // 0x0043D25C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043D260: lw          $v1, -0x9F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X9F8);
    // 0x0043D264: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0043D268: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0043D26C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0043D270: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x0043D274: addiu       $a0, $a0, 0x1C2C
    ctx->r4 = ADD32(ctx->r4, 0X1C2C);
    // 0x0043D278: bne         $v1, $v0, L_0043D288
    if (ctx->r3 != ctx->r2) {
        // 0x0043D27C: swc1        $f0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
            goto L_0043D288;
    }
    // 0x0043D27C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x0043D280: lui         $a0, 0x43
    ctx->r4 = S32(0X43 << 16);
    // 0x0043D284: addiu       $a0, $a0, 0x1C34
    ctx->r4 = ADD32(ctx->r4, 0X1C34);
L_0043D288:
    // 0x0043D288: jal         0x0026D518
    // 0x0043D28C: nop

    func_0026D518(rdram, ctx);
        goto after_7;
    // 0x0043D28C: nop

    after_7:
    // 0x0043D290: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0043D294: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0043D298: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0043D29C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0043D2A0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0043D2A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0043D2A8: jal         0x00406FE4
    // 0x0043D2AC: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_8;
    // 0x0043D2AC: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_8:
    // 0x0043D2B0: lui         $s0, 0x43
    ctx->r16 = S32(0X43 << 16);
    // 0x0043D2B4: addiu       $s0, $s0, 0x1BF4
    ctx->r16 = ADD32(ctx->r16, 0X1BF4);
    // 0x0043D2B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D2BC: lwc1        $f20, 0x3A4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X3A4);
    // 0x0043D2C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043D2C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0043D2C8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0043D2CC: jal         0x0026D518
    // 0x0043D2D0: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    func_0026D518(rdram, ctx);
        goto after_9;
    // 0x0043D2D0: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x0043D2D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0043D2D8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0043D2DC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0043D2E0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043D2E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0043D2E8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0043D2EC: jal         0x00406FE4
    // 0x0043D2F0: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_10;
    // 0x0043D2F0: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_10:
    // 0x0043D2F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D2F8: lwc1        $f0, 0x3A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A8);
    // 0x0043D2FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043D300: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0043D304: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x0043D308: jal         0x0026D518
    // 0x0043D30C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_0026D518(rdram, ctx);
        goto after_11;
    // 0x0043D30C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x0043D310: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0043D314: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0043D318: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0043D31C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043D320: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0043D324: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0043D328: jal         0x00406FE4
    // 0x0043D32C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_12;
    // 0x0043D32C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_12:
    // 0x0043D330: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D334: lwc1        $f0, 0x3AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3AC);
    // 0x0043D338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0043D33C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0043D340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0043D344: jal         0x0026D518
    // 0x0043D348: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_0026D518(rdram, ctx);
        goto after_13;
    // 0x0043D348: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x0043D34C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0043D350: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0043D354: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0043D358: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x0043D35C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0043D360: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0043D364: jal         0x00406FE4
    // 0x0043D368: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00406FE4(rdram, ctx);
        goto after_14;
    // 0x0043D368: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_14:
    // 0x0043D36C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D370: lwc1        $f0, 0x3B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3B0);
    // 0x0043D374: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0043D378: swc1        $f0, -0x60C($at)
    MEM_W(-0X60C, ctx->r1) = ctx->f0.u32l;
    // 0x0043D37C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_0043D380:
    // 0x0043D380: jal         0x00404450
    // 0x0043D384: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00404450(rdram, ctx);
        goto after_15;
    // 0x0043D384: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_15:
    // 0x0043D388: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0043D38C: jal         0x0040457C
    // 0x0043D390: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0040457C(rdram, ctx);
        goto after_16;
    // 0x0043D390: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_16:
    // 0x0043D394: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043D398: addiu       $s0, $s0, -0x9F4
    ctx->r16 = ADD32(ctx->r16, -0X9F4);
    // 0x0043D39C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043D3A0: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x0043D3A4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0043D3A8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x0043D3AC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0043D3B0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0043D3B4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0043D3B8: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x0043D3BC: bne         $v0, $zero, L_0043D3C8
    if (ctx->r2 != 0) {
        // 0x0043D3C0: nop
    
            goto L_0043D3C8;
    }
    // 0x0043D3C0: nop

    // 0x0043D3C4: break       7
    do_break(4445124);
L_0043D3C8:
    // 0x0043D3C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0043D3CC: bne         $v0, $at, L_0043D3E0
    if (ctx->r2 != ctx->r1) {
        // 0x0043D3D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0043D3E0;
    }
    // 0x0043D3D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0043D3D4: bne         $a1, $at, L_0043D3E0
    if (ctx->r5 != ctx->r1) {
        // 0x0043D3D8: nop
    
            goto L_0043D3E0;
    }
    // 0x0043D3D8: nop

    // 0x0043D3DC: break       6
    do_break(4445148);
L_0043D3E0:
    // 0x0043D3E0: mflo        $a1
    ctx->r5 = lo;
    // 0x0043D3E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0043D3E8: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x0043D3EC: jal         0x0027AD88
    // 0x0043D3F0: nop

    func_0027AD88(rdram, ctx);
        goto after_17;
    // 0x0043D3F0: nop

    after_17:
    // 0x0043D3F4: lwc1        $f1, 0x8($s3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r19, 0X8);
    // 0x0043D3F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043D3FC: lwc1        $f0, 0x3B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3B4);
    // 0x0043D400: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0043D404: nop

    // 0x0043D408: bc1f        L_0043D430
    if (!c1cs) {
        // 0x0043D40C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_0043D430;
    }
    // 0x0043D40C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0043D410: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0043D414: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x0043D418: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0043D41C: sw          $v0, 0x3D0($s0)
    MEM_W(0X3D0, ctx->r16) = ctx->r2;
    // 0x0043D420: sw          $zero, 0x424($s0)
    MEM_W(0X424, ctx->r16) = 0;
    // 0x0043D424: sw          $zero, 0x428($s0)
    MEM_W(0X428, ctx->r16) = 0;
    // 0x0043D428: jal         0x00243414
    // 0x0043D42C: sw          $zero, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = 0;
    func_00243414(rdram, ctx);
        goto after_18;
    // 0x0043D42C: sw          $zero, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = 0;
    after_18:
L_0043D430:
    // 0x0043D430: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x0043D434: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0043D438: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0043D43C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0043D440: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0043D444: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0043D448: jr          $ra
    // 0x0043D44C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0043D44C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0027ADA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027ADA0: jr          $ra
    // 0x0027ADA4: sw          $zero, 0x88($a0)
    MEM_W(0X88, ctx->r4) = 0;
    return;
    // 0x0027ADA4: sw          $zero, 0x88($a0)
    MEM_W(0X88, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0029A158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0029A15C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
;}
RECOMP_FUNC void func_0029ACD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029ACD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0029ACD8: lwc1        $f14, 0x7B20($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B20);
    // 0x0029ACDC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
;}
RECOMP_FUNC void func_0045A180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045A184: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045A188: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045A18C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045A190: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0045A194: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045A198: jal         0x00426CAC
    // 0x0045A19C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    entry_00426CAC(rdram, ctx);
        goto after_0;
    // 0x0045A19C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0045A1A0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x0045A1A4: bne         $v0, $v1, L_0045A1F8
    if (ctx->r2 != ctx->r3) {
        // 0x0045A1A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045A1F8;
    }
    // 0x0045A1A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045A1AC: jal         0x00426CAC
    // 0x0045A1B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00426CAC(rdram, ctx);
        goto after_1;
    // 0x0045A1B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0045A1B4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x0045A1B8: bne         $v0, $v1, L_0045A1F8
    if (ctx->r2 != ctx->r3) {
        // 0x0045A1BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045A1F8;
    }
    // 0x0045A1BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045A1C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045A1C4: addiu       $a1, $a1, 0x45D8
    ctx->r5 = ADD32(ctx->r5, 0X45D8);
    // 0x0045A1C8: jal         0x00426C74
    // 0x0045A1CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426C74(rdram, ctx);
        goto after_2;
    // 0x0045A1CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0045A1D0: bnel        $v0, $zero, L_0045A1F8
    if (ctx->r2 != 0) {
        // 0x0045A1D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0045A1F8;
    }
    goto skip_0;
    // 0x0045A1D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0045A1D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0045A1DC: addiu       $a1, $a1, 0x45D4
    ctx->r5 = ADD32(ctx->r5, 0X45D4);
    // 0x0045A1E0: jal         0x00426C74
    // 0x0045A1E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00426C74(rdram, ctx);
        goto after_3;
    // 0x0045A1E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0045A1E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0045A1EC: beq         $v1, $zero, L_0045A1F8
    if (ctx->r3 == 0) {
        // 0x0045A1F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0045A1F8;
    }
    // 0x0045A1F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045A1F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0045A1F8:
    // 0x0045A1F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045A1FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045A200: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045A204: jr          $ra
    // 0x0045A208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045A208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0042670C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042670C: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x00426710: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426714: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00426718: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x0042671C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00426720: beql        $v1, $v0, L_00426730
    if (ctx->r3 == ctx->r2) {
            // 0x00426724: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    func_00426730(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x00426724: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    skip_0:
    // 0x00426728: jr          $ra
    // 0x0042672C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    return;
    // 0x0042672C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
;}
RECOMP_FUNC void func_0045D55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D55C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045D560: addiu       $v0, $v0, 0x4140
    ctx->r2 = ADD32(ctx->r2, 0X4140);
    // 0x0045D564: jr          $ra
    // 0x0045D568: nop

    return;
    // 0x0045D568: nop

;}
RECOMP_FUNC void func_004524C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004524C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004524C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x004524C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004524CC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x004524D0: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x004524D4: jal         0x00285A68
    // 0x004524D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285A68(rdram, ctx);
        goto after_0;
    // 0x004524D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x004524DC: jal         0x004263A0
    // 0x004524E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004263A0(rdram, ctx);
        goto after_1;
    // 0x004524E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004524E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004524E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004524EC: jr          $ra
    // 0x004524F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004524F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002573FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002573FC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00257400: addiu       $v1, $v1, -0x550F
    ctx->r3 = ADD32(ctx->r3, -0X550F);
    // 0x00257404: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00257408: bne         $v0, $zero, L_00257484
    if (ctx->r2 != 0) {
        // 0x0025740C: nop
    
            goto L_00257484;
    }
    // 0x0025740C: nop

    // 0x00257410: lw          $v0, 0x1050($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1050);
    // 0x00257414: beq         $v0, $zero, L_00257428
    if (ctx->r2 == 0) {
        // 0x00257418: nop
    
            goto L_00257428;
    }
    // 0x00257418: nop

    // 0x0025741C: lw          $v0, 0xCD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XCD0);
    // 0x00257420: bne         $v0, $zero, L_00257484
    if (ctx->r2 != 0) {
        // 0x00257424: nop
    
            goto L_00257484;
    }
    // 0x00257424: nop

L_00257428:
    // 0x00257428: lw          $v0, -0x51($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X51);
    // 0x0025742C: beq         $v0, $zero, L_00257444
    if (ctx->r2 == 0) {
        // 0x00257430: nop
    
            goto L_00257444;
    }
    // 0x00257430: nop

    // 0x00257434: lw          $v0, 0xA64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA64);
    // 0x00257438: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0025743C: bne         $v0, $zero, L_00257484
    if (ctx->r2 != 0) {
        // 0x00257440: nop
    
            goto L_00257484;
    }
    // 0x00257440: nop

L_00257444:
    // 0x00257444: lw          $v0, 0xA68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA68);
    // 0x00257448: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x0025744C: beq         $v0, $zero, L_00257484
    if (ctx->r2 == 0) {
        // 0x00257450: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_00257484;
    }
    // 0x00257450: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00257454: lh          $v0, 0xB14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XB14);
    // 0x00257458: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0025745C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257460: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00257464: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257468: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    // 0x0025746C: lhu         $a2, 0xC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XC);
    // 0x00257470: beq         $a1, $v1, L_00257484
    if (ctx->r5 == ctx->r3) {
        // 0x00257474: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_00257484;
    }
    // 0x00257474: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x00257478: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0025747C: bnel        $v0, $zero, L_00257484
    if (ctx->r2 != 0) {
        // 0x00257480: sh          $a2, 0xB14($a0)
        MEM_H(0XB14, ctx->r4) = ctx->r6;
            goto L_00257484;
    }
    goto skip_0;
    // 0x00257480: sh          $a2, 0xB14($a0)
    MEM_H(0XB14, ctx->r4) = ctx->r6;
    skip_0:
L_00257484:
    // 0x00257484: jr          $ra
    // 0x00257488: nop

    return;
    // 0x00257488: nop

;}
RECOMP_FUNC void func_0041647C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041647C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00416480: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00416484: jr          $ra
    // 0x00416488: nop

    return;
    // 0x00416488: nop

;}
RECOMP_FUNC void func_00453BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00453BA4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00453BA8: addiu       $a0, $a0, 0x1F84
    ctx->r4 = ADD32(ctx->r4, 0X1F84);
    // 0x00453BAC: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00453BB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00453BB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00453BB8: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
    // 0x00453BBC: bne         $v1, $zero, L_00453BCC
    if (ctx->r3 != 0) {
        // 0x00453BC0: sw          $zero, 0x0($a0)
        MEM_W(0X0, ctx->r4) = 0;
            goto L_00453BCC;
    }
    // 0x00453BC0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_00453BC4:
    // 0x00453BC4: jr          $ra
    // 0x00453BC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00453BC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00453BCC:
    // 0x00453BCC: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x00453BD0: beq         $v0, $zero, L_00453BC4
    if (ctx->r2 == 0) {
        // 0x00453BD4: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_00453BC4;
    }
    // 0x00453BD4: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x00453BD8: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x00453BDC: beq         $v0, $zero, L_00453C14
    if (ctx->r2 == 0) {
        // 0x00453BE0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00453C14;
    }
    // 0x00453BE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00453BE4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_00453BE8:
    // 0x00453BE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453BEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00453BF0: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x00453BF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00453BF8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x00453BFC: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x00453C00: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00453C04: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x00453C08: bne         $v0, $zero, L_00453BE8
    if (ctx->r2 != 0) {
        // 0x00453C0C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_00453BE8;
    }
    // 0x00453C0C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00453C10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00453C14:
    // 0x00453C14: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00453C18: addiu       $v1, $v1, 0x1F80
    ctx->r3 = ADD32(ctx->r3, 0X1F80);
    // 0x00453C1C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00453C20: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x00453C24: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x00453C28: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00453C2C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x00453C30: jr          $ra
    // 0x00453C34: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    return;
    // 0x00453C34: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_002053A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002053A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002053AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002053B0: jal         0x0029DFF0
    // 0x002053B4: nop

    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002053B4: nop

    after_0:
    // 0x002053B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002053BC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002053C0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002053C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002053C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002053CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002053D0: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002053D4: beq         $v1, $v0, L_00205400
    if (ctx->r3 == ctx->r2) {
        // 0x002053D8: nop
    
            goto L_00205400;
    }
    // 0x002053D8: nop

    // 0x002053DC: jal         0x0029E010
    // 0x002053E0: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002053E0: nop

    after_1:
    // 0x002053E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002053E8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002053EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002053F0: jal         0x0029B6F0
    // 0x002053F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002053F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002053F8: j           L_00205408
    // 0x002053FC: nop

        goto L_00205408;
    // 0x002053FC: nop

L_00205400:
    // 0x00205400: jal         0x0029E010
    // 0x00205404: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x00205404: nop

    after_3:
L_00205408:
    // 0x00205408: jal         0x00202EEC
    // 0x0020540C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00202EEC(rdram, ctx);
        goto after_4;
    // 0x0020540C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x00205410: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00205414:
    // 0x00205414: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00205418: jal         0x00206380
    // 0x0020541C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_00206380(rdram, ctx);
        goto after_5;
    // 0x0020541C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_5:
    // 0x00205420: bne         $v0, $zero, L_00205414
    if (ctx->r2 != 0) {
        // 0x00205424: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00205414;
    }
    // 0x00205424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205428: jal         0x00203330
    // 0x0020542C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00203330(rdram, ctx);
        goto after_6;
    // 0x0020542C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x00205430: jal         0x0029DFF0
    // 0x00205434: nop

    func_0029DFF0(rdram, ctx);
        goto after_7;
    // 0x00205434: nop

    after_7:
    // 0x00205438: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020543C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205440: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00205444: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205448: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020544C: beq         $v1, $zero, L_00205478
    if (ctx->r3 == 0) {
        // 0x00205450: nop
    
            goto L_00205478;
    }
    // 0x00205450: nop

    // 0x00205454: jal         0x0029E010
    // 0x00205458: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x00205458: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x0020545C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205460: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205464: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205468: jal         0x0029B820
    // 0x0020546C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x0020546C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x00205470: j           L_00205480
    // 0x00205474: nop

        goto L_00205480;
    // 0x00205474: nop

L_00205478:
    // 0x00205478: jal         0x0029E010
    // 0x0020547C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_10;
    // 0x0020547C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
L_00205480:
    // 0x00205480: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00205484: jr          $ra
    // 0x00205488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00205488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0046783C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0046783C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00467840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00467844: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00467848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0046784C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00467850: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00467854: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x00467858: addiu       $a0, $s1, 0xA40
    ctx->r4 = ADD32(ctx->r17, 0XA40);
    // 0x0046785C: sll         $a1, $s0, 4
    ctx->r5 = S32(ctx->r16 << 4);
    // 0x00467860: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x00467864: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x00467868: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x0046786C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00467870: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00467874: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x00467878: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0046787C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00467880: jal         0x002470E8
    // 0x00467884: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    func_002470E8(rdram, ctx);
        goto after_0;
    // 0x00467884: sw          $zero, 0x510($s1)
    MEM_W(0X510, ctx->r17) = 0;
    after_0:
    // 0x00467888: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0046788C: sw          $s0, 0x514($a0)
    MEM_W(0X514, ctx->r4) = ctx->r16;
    // 0x00467890: sw          $s2, 0x518($a0)
    MEM_W(0X518, ctx->r4) = ctx->r18;
    // 0x00467894: sw          $zero, 0x1288($a0)
    MEM_W(0X1288, ctx->r4) = 0;
    // 0x00467898: sw          $zero, 0x128C($a0)
    MEM_W(0X128C, ctx->r4) = 0;
    // 0x0046789C: sw          $zero, 0x92C($a0)
    MEM_W(0X92C, ctx->r4) = 0;
    // 0x004678A0: sw          $zero, 0x930($a0)
    MEM_W(0X930, ctx->r4) = 0;
    // 0x004678A4: jal         0x00248340
    // 0x004678A8: sw          $zero, 0xC00($a0)
    MEM_W(0XC00, ctx->r4) = 0;
    func_00248340(rdram, ctx);
        goto after_1;
    // 0x004678A8: sw          $zero, 0xC00($a0)
    MEM_W(0XC00, ctx->r4) = 0;
    after_1:
    // 0x004678AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004678B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x004678B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004678B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004678BC: jr          $ra
    // 0x004678C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004678C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00453FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_002A2FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A2FB0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002A2FB4: lw          $v0, -0x76A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76A0);
    // 0x002A2FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A2FBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A2FC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002A2FC4: bne         $v0, $zero, L_002A2FD4
    if (ctx->r2 != 0) {
        // 0x002A2FC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_002A2FD4;
    }
    // 0x002A2FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A2FCC: j           L_002A304C
    // 0x002A2FD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_002A304C;
    // 0x002A2FD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002A2FD4:
    // 0x002A2FD4: bne         $a2, $zero, L_002A2FE0
    if (ctx->r6 != 0) {
        // 0x002A2FD8: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_002A2FE0;
    }
    // 0x002A2FD8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x002A2FDC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_002A2FE0:
    // 0x002A2FE0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x002A2FE4: sb          $a1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r5;
    // 0x002A2FE8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x002A2FEC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x002A2FF0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x002A2FF4: sw          $a3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r7;
    // 0x002A2FF8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x002A2FFC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x002A3000: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x002A3004: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x002A3008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A300C: bne         $a1, $v0, L_002A3034
    if (ctx->r5 != ctx->r2) {
        // 0x002A3010: nop
    
            goto L_002A3034;
    }
    // 0x002A3010: nop

    // 0x002A3014: jal         0x002A3060
    // 0x002A3018: nop

    func_002A3060(rdram, ctx);
        goto after_0;
    // 0x002A3018: nop

    after_0:
    // 0x002A301C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002A3020: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A3024: jal         0x0029B5B0
    // 0x002A3028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osJamMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x002A3028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x002A302C: j           L_002A304C
    // 0x002A3030: nop

        goto L_002A304C;
    // 0x002A3030: nop

L_002A3034:
    // 0x002A3034: jal         0x002A3060
    // 0x002A3038: nop

    func_002A3060(rdram, ctx);
        goto after_2;
    // 0x002A3038: nop

    after_2:
    // 0x002A303C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002A3040: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002A3044: jal         0x0029B820
    // 0x002A3048: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x002A3048: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_002A304C:
    // 0x002A304C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A3050: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A3054: jr          $ra
    // 0x002A3058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A3058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00262D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00262D74: addiu       $sp, $sp, -0x1C0
    ctx->r29 = ADD32(ctx->r29, -0X1C0);
    // 0x00262D78: sw          $s7, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r23;
    // 0x00262D7C: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00262D80: sw          $ra, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r31;
    // 0x00262D84: sw          $fp, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r30;
    // 0x00262D88: sw          $s6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r22;
    // 0x00262D8C: sw          $s5, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r21;
    // 0x00262D90: sw          $s4, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r20;
    // 0x00262D94: sw          $s3, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r19;
    // 0x00262D98: sw          $s2, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r18;
    // 0x00262D9C: sw          $s1, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r17;
    // 0x00262DA0: sw          $s0, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r16;
    // 0x00262DA4: lw          $v0, 0x14($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X14);
    // 0x00262DA8: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00262DAC: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    // 0x00262DB0: lw          $t1, 0x8($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X8);
    // 0x00262DB4: lw          $t2, 0xC($s7)
    ctx->r10 = MEM_W(ctx->r23, 0XC);
    // 0x00262DB8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00262DBC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x00262DC0: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00262DC4: lw          $t0, 0x10($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X10);
    // 0x00262DC8: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x00262DCC: beq         $t0, $zero, L_00262DF8
    if (ctx->r8 == 0) {
        // 0x00262DD0: sw          $t0, 0x190($sp)
        MEM_W(0X190, ctx->r29) = ctx->r8;
            goto L_00262DF8;
    }
    // 0x00262DD0: sw          $t0, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r8;
    // 0x00262DD4: lw          $a1, 0x4($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X4);
    // 0x00262DD8: lw          $a2, 0xC($s7)
    ctx->r6 = MEM_W(ctx->r23, 0XC);
    // 0x00262DDC: jal         0x0026BE60
    // 0x00262DE0: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_0026BE60(rdram, ctx);
        goto after_0;
    // 0x00262DE0: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
    // 0x00262DE4: lwc1        $f1, 0x54($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x00262DE8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00262DEC: nop

    // 0x00262DF0: bc1tl       L_00262DF8
    if (c1cs) {
        // 0x00262DF4: swc1        $f0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
            goto L_00262DF8;
    }
    goto skip_0;
    // 0x00262DF4: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    skip_0:
L_00262DF8:
    // 0x00262DF8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00262DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00262E00: beq         $v1, $v0, L_00262FCC
    if (ctx->r3 == ctx->r2) {
        // 0x00262E04: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_00262FCC;
    }
    // 0x00262E04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00262E08: beql        $v0, $zero, L_00262E20
    if (ctx->r2 == 0) {
        // 0x00262E0C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00262E20;
    }
    goto skip_1;
    // 0x00262E0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x00262E10: beq         $v1, $zero, L_00262E30
    if (ctx->r3 == 0) {
        // 0x00262E14: nop
    
            goto L_00262E30;
    }
    // 0x00262E14: nop

    // 0x00262E18: j           L_002633A8
    // 0x00262E1C: nop

        goto L_002633A8;
    // 0x00262E1C: nop

L_00262E20:
    // 0x00262E20: beq         $v1, $v0, L_0026307C
    if (ctx->r3 == ctx->r2) {
        // 0x00262E24: addiu       $s5, $zero, -0x1
        ctx->r21 = ADD32(0, -0X1);
            goto L_0026307C;
    }
    // 0x00262E24: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x00262E28: j           L_002633A8
    // 0x00262E2C: nop

        goto L_002633A8;
    // 0x00262E2C: nop

L_00262E30:
    // 0x00262E30: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x00262E34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00262E38: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00262E3C: jal         0x00225E88
    // 0x00262E40: nop

    func_00225E88(rdram, ctx);
        goto after_1;
    // 0x00262E40: nop

    after_1:
    // 0x00262E44: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x00262E48: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x00262E4C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x00262E50: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x00262E54: beq         $v0, $zero, L_002633A8
    if (ctx->r2 == 0) {
        // 0x00262E58: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002633A8;
    }
    // 0x00262E58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00262E5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00262E60: addu        $at, $at, $v0
    gpr jr_addend_00262E68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00262E64: lw          $v0, 0x7BA0($at)
    ctx->r2 = ADD32(ctx->r1, 0X7BA0);
    // 0x00262E68: jr          $v0
    // 0x00262E6C: nop

    switch (jr_addend_00262E68 >> 2) {
        case 0: goto L_00262EF8; break;
        case 1: goto L_00262EF8; break;
        case 2: goto L_00262EF8; break;
        case 3: goto L_00262EF8; break;
        case 4: goto L_00262EF8; break;
        case 5: goto L_00262EF8; break;
        case 6: goto L_00262EF8; break;
        case 7: goto L_00262E70; break;
        case 8: goto L_00262EF8; break;
        case 9: goto L_00262EF8; break;
        default: switch_error(__func__, 0x00262E68, 0x800A7BA0);
    }
    // 0x00262E6C: nop

L_00262E70:
    // 0x00262E70: lh          $a1, 0x14($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X14);
    // 0x00262E74: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00262E78: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00262E7C: jal         0x002241C0
    // 0x00262E80: nop

    func_002241C0(rdram, ctx);
        goto after_2;
    // 0x00262E80: nop

    after_2:
    // 0x00262E84: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00262E88: jal         0x00262C20
    // 0x00262E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00262C20(rdram, ctx);
        goto after_3;
    // 0x00262E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00262E90: beq         $v0, $zero, L_002633A8
    if (ctx->r2 == 0) {
        // 0x00262E94: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_002633A8;
    }
    // 0x00262E94: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00262E98: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00262E9C: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x00262EA0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x00262EA4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x00262EA8: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x00262EAC: sw          $t1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r9;
    // 0x00262EB0: sw          $t2, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r10;
    // 0x00262EB4: sw          $t3, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r11;
    // 0x00262EB8: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x00262EBC: lw          $t2, 0x14C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14C);
    // 0x00262EC0: lw          $t3, 0x150($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X150);
    // 0x00262EC4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00262EC8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x00262ECC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x00262ED0: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x00262ED4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00262ED8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00262EDC: lw          $t2, 0x1C($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X1C);
    // 0x00262EE0: lw          $t3, 0x20($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X20);
    // 0x00262EE4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x00262EE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x00262EEC: lw          $a3, 0x18($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X18);
    // 0x00262EF0: j           L_0026336C
    // 0x00262EF4: addiu       $a1, $fp, 0x10C
    ctx->r5 = ADD32(ctx->r30, 0X10C);
        goto L_0026336C;
    // 0x00262EF4: addiu       $a1, $fp, 0x10C
    ctx->r5 = ADD32(ctx->r30, 0X10C);
L_00262EF8:
    // 0x00262EF8: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x00262EFC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x00262F00: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x00262F04: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x00262F08: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x00262F0C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x00262F10: lh          $a1, 0x14($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X14);
    // 0x00262F14: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00262F18: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x00262F1C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x00262F20: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x00262F24: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x00262F28: sw          $t2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r10;
    // 0x00262F2C: sw          $t3, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r11;
    // 0x00262F30: sw          $t0, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r8;
    // 0x00262F34: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x00262F38: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x00262F3C: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x00262F40: sw          $t2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r10;
    // 0x00262F44: sw          $t3, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r11;
    // 0x00262F48: sw          $t0, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r8;
    // 0x00262F4C: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x00262F50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00262F54: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x00262F58: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x00262F5C: lw          $t0, 0x16C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X16C);
    // 0x00262F60: lw          $t1, 0x170($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X170);
    // 0x00262F64: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x00262F68: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00262F6C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00262F70: lwc1        $f0, 0x50($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X50);
    // 0x00262F74: addiu       $v0, $fp, 0x10C
    ctx->r2 = ADD32(ctx->r30, 0X10C);
    // 0x00262F78: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x00262F7C: lw          $t3, 0x18($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X18);
    // 0x00262F80: lw          $t0, 0x1C($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X1C);
    // 0x00262F84: lw          $t1, 0x20($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X20);
    // 0x00262F88: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x00262F8C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00262F90: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00262F94: lw          $t3, 0x174($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X174);
    // 0x00262F98: lw          $t0, 0x178($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X178);
    // 0x00262F9C: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x00262FA0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x00262FA4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x00262FA8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x00262FAC: jal         0x00228108
    // 0x00262FB0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_00228108(rdram, ctx);
        goto after_4;
    // 0x00262FB0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_4:
    // 0x00262FB4: beq         $v0, $zero, L_002633A8
    if (ctx->r2 == 0) {
        // 0x00262FB8: nop
    
            goto L_002633A8;
    }
    // 0x00262FB8: nop

    // 0x00262FBC: lw          $v0, 0x110($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X110);
    // 0x00262FC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00262FC4: j           L_002633A8
    // 0x00262FC8: sw          $v0, 0x110($fp)
    MEM_W(0X110, ctx->r30) = ctx->r2;
        goto L_002633A8;
    // 0x00262FC8: sw          $v0, 0x110($fp)
    MEM_W(0X110, ctx->r30) = ctx->r2;
L_00262FCC:
    // 0x00262FCC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00262FD0: addiu       $a0, $a0, -0x76D8
    ctx->r4 = ADD32(ctx->r4, -0X76D8);
    // 0x00262FD4: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00262FD8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00262FDC: lh          $v0, 0x24($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X24);
    // 0x00262FE0: addiu       $a3, $fp, 0x10C
    ctx->r7 = ADD32(ctx->r30, 0X10C);
    // 0x00262FE4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x00262FE8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x00262FEC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x00262FF0: sw          $t3, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r11;
    // 0x00262FF4: sw          $t0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r8;
    // 0x00262FF8: sw          $t1, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r9;
    // 0x00262FFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00263000: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00263004: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x00263008: lw          $t0, 0x1C($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X1C);
    // 0x0026300C: lw          $t1, 0x20($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X20);
    // 0x00263010: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x00263014: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00263018: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x0026301C: lw          $t3, 0x40($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X40);
    // 0x00263020: lw          $t0, 0x44($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X44);
    // 0x00263024: lw          $t1, 0x48($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X48);
    // 0x00263028: lw          $t2, 0x4C($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4C);
    // 0x0026302C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x00263030: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00263034: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00263038: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x0026303C: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x00263040: lw          $t0, 0x14C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14C);
    // 0x00263044: lw          $t1, 0x150($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X150);
    // 0x00263048: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x0026304C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x00263050: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x00263054: lw          $t3, 0x190($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X190);
    // 0x00263058: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026305C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00263060: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x00263064: jal         0x0022F350
    // 0x00263068: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    func_0022F350(rdram, ctx);
        goto after_5;
    // 0x00263068: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    after_5:
    // 0x0026306C: lw          $v1, 0x110($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X110);
    // 0x00263070: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00263074: j           L_002633A8
    // 0x00263078: sw          $v1, 0x110($fp)
    MEM_W(0X110, ctx->r30) = ctx->r3;
        goto L_002633A8;
    // 0x00263078: sw          $v1, 0x110($fp)
    MEM_W(0X110, ctx->r30) = ctx->r3;
L_0026307C:
    // 0x0026307C: addu        $s6, $s5, $zero
    ctx->r22 = ADD32(ctx->r21, 0);
    // 0x00263080: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00263084: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x00263088: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x0026308C: beq         $v0, $zero, L_0026315C
    if (ctx->r2 == 0) {
        // 0x00263090: addu        $s3, $s5, $zero
        ctx->r19 = ADD32(ctx->r21, 0);
            goto L_0026315C;
    }
    // 0x00263090: addu        $s3, $s5, $zero
    ctx->r19 = ADD32(ctx->r21, 0);
    // 0x00263094: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00263098: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x0026309C: beq         $v0, $zero, L_002630BC
    if (ctx->r2 == 0) {
        // 0x002630A0: nop
    
            goto L_002630BC;
    }
    // 0x002630A0: nop

    // 0x002630A4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x002630A8: addiu       $a0, $a0, 0x1F38
    ctx->r4 = ADD32(ctx->r4, 0X1F38);
    // 0x002630AC: jal         0x0026D518
    // 0x002630B0: nop

    func_0026D518(rdram, ctx);
        goto after_6;
    // 0x002630B0: nop

    after_6:
    // 0x002630B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002630B8: sra         $s5, $v0, 16
    ctx->r21 = S32(SIGNED(ctx->r2) >> 16);
L_002630BC:
    // 0x002630BC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002630C0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x002630C4: beq         $v0, $zero, L_002630E4
    if (ctx->r2 == 0) {
        // 0x002630C8: nop
    
            goto L_002630E4;
    }
    // 0x002630C8: nop

    // 0x002630CC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x002630D0: addiu       $a0, $a0, 0x1F78
    ctx->r4 = ADD32(ctx->r4, 0X1F78);
    // 0x002630D4: jal         0x0026D518
    // 0x002630D8: nop

    func_0026D518(rdram, ctx);
        goto after_7;
    // 0x002630D8: nop

    after_7:
    // 0x002630DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002630E0: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
L_002630E4:
    // 0x002630E4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002630E8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x002630EC: beq         $v0, $zero, L_002632AC
    if (ctx->r2 == 0) {
        // 0x002630F0: addiu       $s0, $sp, 0x70
        ctx->r16 = ADD32(ctx->r29, 0X70);
            goto L_002632AC;
    }
    // 0x002630F0: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x002630F4: jal         0x0026D5DC
    // 0x002630F8: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    func_0026D5DC(rdram, ctx);
        goto after_8;
    // 0x002630F8: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    after_8:
    // 0x002630FC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x00263100: addiu       $s0, $s0, 0x1FE4
    ctx->r16 = ADD32(ctx->r16, 0X1FE4);
    // 0x00263104: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x00263108: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x0026310C: beq         $v0, $s3, L_0026314C
    if (ctx->r2 == ctx->r19) {
        // 0x00263110: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_0026314C;
    }
    // 0x00263110: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00263114: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_00263118:
    // 0x00263118: jal         0x00262C20
    // 0x0026311C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_00262C20(rdram, ctx);
        goto after_9;
    // 0x0026311C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_9:
    // 0x00263120: beql        $v0, $zero, L_0026313C
    if (ctx->r2 == 0) {
        // 0x00263124: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_0026313C;
    }
    goto skip_2;
    // 0x00263124: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_2:
    // 0x00263128: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x0026312C: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x00263130: jal         0x0026D5E4
    // 0x00263134: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    func_0026D5E4(rdram, ctx);
        goto after_10;
    // 0x00263134: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    after_10:
    // 0x00263138: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_0026313C:
    // 0x0026313C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x00263140: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x00263144: bne         $v0, $s1, L_00263118
    if (ctx->r2 != ctx->r17) {
        // 0x00263148: sll         $a0, $a0, 16
        ctx->r4 = S32(ctx->r4 << 16);
            goto L_00263118;
    }
    // 0x00263148: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_0026314C:
    // 0x0026314C: jal         0x0026D628
    // 0x00263150: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    func_0026D628(rdram, ctx);
        goto after_11;
    // 0x00263150: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    after_11:
    // 0x00263154: j           L_002632A4
    // 0x00263158: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
        goto L_002632A4;
    // 0x00263158: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_0026315C:
    // 0x0026315C: jal         0x002532A8
    // 0x00263160: addiu       $a0, $a0, -0x1268
    ctx->r4 = ADD32(ctx->r4, -0X1268);
    func_002532A8(rdram, ctx);
        goto after_12;
    // 0x00263160: addiu       $a0, $a0, -0x1268
    ctx->r4 = ADD32(ctx->r4, -0X1268);
    after_12:
    // 0x00263164: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00263168: beq         $s2, $zero, L_002633A8
    if (ctx->r18 == 0) {
        // 0x0026316C: nop
    
            goto L_002633A8;
    }
    // 0x0026316C: nop

    // 0x00263170: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00263174: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00263178: beq         $v0, $zero, L_002631EC
    if (ctx->r2 == 0) {
        // 0x0026317C: nop
    
            goto L_002631EC;
    }
    // 0x0026317C: nop

    // 0x00263180: jal         0x0026D5DC
    // 0x00263184: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0026D5DC(rdram, ctx);
        goto after_13;
    // 0x00263184: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_13:
    // 0x00263188: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0026318C: addiu       $s0, $s0, 0x1EE0
    ctx->r16 = ADD32(ctx->r16, 0X1EE0);
    // 0x00263190: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x00263194: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x00263198: beq         $v0, $s3, L_002631DC
    if (ctx->r2 == ctx->r19) {
        // 0x0026319C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002631DC;
    }
    // 0x0026319C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x002631A0: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_002631A4:
    // 0x002631A4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x002631A8: jal         0x00253C14
    // 0x002631AC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00253C14(rdram, ctx);
        goto after_14;
    // 0x002631AC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_14:
    // 0x002631B0: beql        $v0, $zero, L_002631CC
    if (ctx->r2 == 0) {
        // 0x002631B4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_002631CC;
    }
    goto skip_3;
    // 0x002631B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_3:
    // 0x002631B8: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x002631BC: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x002631C0: jal         0x0026D5E4
    // 0x002631C4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0026D5E4(rdram, ctx);
        goto after_15;
    // 0x002631C4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_15:
    // 0x002631C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_002631CC:
    // 0x002631CC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x002631D0: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x002631D4: bne         $v0, $s4, L_002631A4
    if (ctx->r2 != ctx->r20) {
        // 0x002631D8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_002631A4;
    }
    // 0x002631D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_002631DC:
    // 0x002631DC: jal         0x0026D628
    // 0x002631E0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0026D628(rdram, ctx);
        goto after_16;
    // 0x002631E0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_16:
    // 0x002631E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x002631E8: sra         $s5, $v0, 16
    ctx->r21 = S32(SIGNED(ctx->r2) >> 16);
L_002631EC:
    // 0x002631EC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002631F0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x002631F4: beq         $v0, $zero, L_00263280
    if (ctx->r2 == 0) {
        // 0x002631F8: nop
    
            goto L_00263280;
    }
    // 0x002631F8: nop

    // 0x002631FC: jal         0x0026D5DC
    // 0x00263200: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0026D5DC(rdram, ctx);
        goto after_17;
    // 0x00263200: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_17:
    // 0x00263204: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00263208: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x0026320C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x00263210: addiu       $s0, $s0, 0x1F5C
    ctx->r16 = ADD32(ctx->r16, 0X1F5C);
    // 0x00263214: beq         $v0, $zero, L_00263224
    if (ctx->r2 == 0) {
        // 0x00263218: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00263224;
    }
    // 0x00263218: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0026321C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x00263220: addiu       $s0, $s0, 0x1F6C
    ctx->r16 = ADD32(ctx->r16, 0X1F6C);
L_00263224:
    // 0x00263224: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x00263228: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x0026322C: beq         $v1, $v0, L_00263270
    if (ctx->r3 == ctx->r2) {
        // 0x00263230: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00263270;
    }
    // 0x00263230: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00263234: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_00263238:
    // 0x00263238: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0026323C: jal         0x00253CF0
    // 0x00263240: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_00253CF0(rdram, ctx);
        goto after_18;
    // 0x00263240: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_18:
    // 0x00263244: beql        $v0, $zero, L_00263260
    if (ctx->r2 == 0) {
        // 0x00263248: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_00263260;
    }
    goto skip_4;
    // 0x00263248: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_4:
    // 0x0026324C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x00263250: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x00263254: jal         0x0026D5E4
    // 0x00263258: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0026D5E4(rdram, ctx);
        goto after_19;
    // 0x00263258: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_19:
    // 0x0026325C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_00263260:
    // 0x00263260: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x00263264: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x00263268: bne         $v0, $s4, L_00263238
    if (ctx->r2 != ctx->r20) {
        // 0x0026326C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00263238;
    }
    // 0x0026326C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00263270:
    // 0x00263270: jal         0x0026D628
    // 0x00263274: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_0026D628(rdram, ctx);
        goto after_20;
    // 0x00263274: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_20:
    // 0x00263278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0026327C: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
L_00263280:
    // 0x00263280: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00263284: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00263288: beq         $v0, $zero, L_002632AC
    if (ctx->r2 == 0) {
        // 0x0026328C: addiu       $s0, $sp, 0x70
        ctx->r16 = ADD32(ctx->r29, 0X70);
            goto L_002632AC;
    }
    // 0x0026328C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x00263290: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00263294: addiu       $a0, $a0, 0x1F88
    ctx->r4 = ADD32(ctx->r4, 0X1F88);
    // 0x00263298: jal         0x0026D518
    // 0x0026329C: nop

    func_0026D518(rdram, ctx);
        goto after_21;
    // 0x0026329C: nop

    after_21:
    // 0x002632A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_002632A4:
    // 0x002632A4: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002632A8: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
L_002632AC:
    // 0x002632AC: jal         0x0026D5DC
    // 0x002632B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026D5DC(rdram, ctx);
        goto after_22;
    // 0x002632B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
    // 0x002632B4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x002632B8: beq         $s5, $s1, L_002632CC
    if (ctx->r21 == ctx->r17) {
        // 0x002632BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002632CC;
    }
    // 0x002632BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002632C0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x002632C4: jal         0x0026D5E4
    // 0x002632C8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_23;
    // 0x002632C8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_23:
L_002632CC:
    // 0x002632CC: beq         $s6, $s1, L_002632E0
    if (ctx->r22 == ctx->r17) {
        // 0x002632D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002632E0;
    }
    // 0x002632D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002632D4: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x002632D8: jal         0x0026D5E4
    // 0x002632DC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_24;
    // 0x002632DC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_24:
L_002632E0:
    // 0x002632E0: beq         $s3, $s1, L_002632F4
    if (ctx->r19 == ctx->r17) {
        // 0x002632E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002632F4;
    }
    // 0x002632E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002632E8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x002632EC: jal         0x0026D5E4
    // 0x002632F0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_0026D5E4(rdram, ctx);
        goto after_25;
    // 0x002632F0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_25:
L_002632F4:
    // 0x002632F4: lh          $v0, 0x70($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X70);
    // 0x002632F8: beq         $v0, $zero, L_002633A8
    if (ctx->r2 == 0) {
        // 0x002632FC: nop
    
            goto L_002633A8;
    }
    // 0x002632FC: nop

    // 0x00263300: jal         0x0026D628
    // 0x00263304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026D628(rdram, ctx);
        goto after_26;
    // 0x00263304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_26:
    // 0x00263308: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x0026330C: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x00263310: addiu       $a1, $fp, 0x10C
    ctx->r5 = ADD32(ctx->r30, 0X10C);
    // 0x00263314: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x00263318: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x0026331C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x00263320: sw          $t0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r8;
    // 0x00263324: sw          $t1, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r9;
    // 0x00263328: sw          $t2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r10;
    // 0x0026332C: lw          $t0, 0x168($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X168);
    // 0x00263330: lw          $t1, 0x16C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X16C);
    // 0x00263334: lw          $t2, 0x170($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X170);
    // 0x00263338: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0026333C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00263340: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00263344: lw          $t0, 0x190($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X190);
    // 0x00263348: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0026334C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x00263350: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00263354: lw          $t1, 0x1C($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X1C);
    // 0x00263358: lw          $t2, 0x20($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X20);
    // 0x0026335C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x00263360: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x00263364: lw          $a3, 0x18($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X18);
    // 0x00263368: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
L_0026336C:
    // 0x0026336C: jal         0x00227240
    // 0x00263370: nop

    func_00227240(rdram, ctx);
        goto after_27;
    // 0x00263370: nop

    after_27:
    // 0x00263374: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00263378: beq         $a0, $zero, L_002633A8
    if (ctx->r4 == 0) {
        // 0x0026337C: nop
    
            goto L_002633A8;
    }
    // 0x0026337C: nop

    // 0x00263380: lw          $v0, 0x110($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X110);
    // 0x00263384: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00263388: sw          $v0, 0x110($fp)
    MEM_W(0X110, ctx->r30) = ctx->r2;
    // 0x0026338C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00263390: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00263394: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00263398: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x0026339C: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x002633A0: jal         0x00246690
    // 0x002633A4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_28;
    // 0x002633A4: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_28:
L_002633A8:
    // 0x002633A8: lw          $ra, 0x1BC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1BC);
    // 0x002633AC: lw          $fp, 0x1B8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1B8);
    // 0x002633B0: lw          $s7, 0x1B4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1B4);
    // 0x002633B4: lw          $s6, 0x1B0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1B0);
    // 0x002633B8: lw          $s5, 0x1AC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1AC);
    // 0x002633BC: lw          $s4, 0x1A8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X1A8);
    // 0x002633C0: lw          $s3, 0x1A4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1A4);
    // 0x002633C4: lw          $s2, 0x1A0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1A0);
    // 0x002633C8: lw          $s1, 0x19C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X19C);
    // 0x002633CC: lw          $s0, 0x198($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X198);
    // 0x002633D0: jr          $ra
    // 0x002633D4: addiu       $sp, $sp, 0x1C0
    ctx->r29 = ADD32(ctx->r29, 0X1C0);
    return;
    // 0x002633D4: addiu       $sp, $sp, 0x1C0
    ctx->r29 = ADD32(ctx->r29, 0X1C0);
;}
RECOMP_FUNC void func_00427F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427F78: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x00427F7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
;}
RECOMP_FUNC void func_00227AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00227AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00227AE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00227AE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00227AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00227AF0: lw          $v0, 0x3600($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3600);
    // 0x00227AF4: bne         $v0, $zero, L_00227B08
    if (ctx->r2 != 0) {
        // 0x00227AF8: nop
    
            goto L_00227B08;
    }
    // 0x00227AF8: nop

    // 0x00227AFC: lw          $a1, 0x3608($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3608);
    // 0x00227B00: jal         0x00227B7C
    // 0x00227B04: nop

    func_00227B7C(rdram, ctx);
        goto after_0;
    // 0x00227B04: nop

    after_0:
L_00227B08:
    // 0x00227B08: lw          $v1, 0x3600($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3600);
    // 0x00227B0C: lw          $a0, 0x3604($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3604);
    // 0x00227B10: lw          $v0, 0x1AC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1AC);
    // 0x00227B14: beq         $a0, $zero, L_00227B20
    if (ctx->r4 == 0) {
        // 0x00227B18: sw          $v0, 0x3600($s0)
        MEM_W(0X3600, ctx->r16) = ctx->r2;
            goto L_00227B20;
    }
    // 0x00227B18: sw          $v0, 0x3600($s0)
    MEM_W(0X3600, ctx->r16) = ctx->r2;
    // 0x00227B1C: sw          $v1, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = ctx->r3;
L_00227B20:
    // 0x00227B20: lw          $v0, 0x3604($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3604);
    // 0x00227B24: sw          $zero, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = 0;
    // 0x00227B28: sw          $v0, 0x1AC($v1)
    MEM_W(0X1AC, ctx->r3) = ctx->r2;
    // 0x00227B2C: lw          $v0, 0x3608($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3608);
    // 0x00227B30: bne         $v0, $zero, L_00227B3C
    if (ctx->r2 != 0) {
        // 0x00227B34: sw          $v1, 0x3604($s0)
        MEM_W(0X3604, ctx->r16) = ctx->r3;
            goto L_00227B3C;
    }
    // 0x00227B34: sw          $v1, 0x3604($s0)
    MEM_W(0X3604, ctx->r16) = ctx->r3;
    // 0x00227B38: sw          $v1, 0x3608($s0)
    MEM_W(0X3608, ctx->r16) = ctx->r3;
L_00227B3C:
    // 0x00227B3C: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x00227B40: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x00227B44: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x00227B48: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x00227B4C: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x00227B50: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x00227B54: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x00227B58: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x00227B5C: sw          $zero, 0x198($v1)
    MEM_W(0X198, ctx->r3) = 0;
    // 0x00227B60: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00227B64: sw          $v0, 0x1A0($v1)
    MEM_W(0X1A0, ctx->r3) = ctx->r2;
    // 0x00227B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00227B6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00227B70: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00227B74: jr          $ra
    // 0x00227B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00227B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00465EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00465EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00465EA8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00465EAC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00465EB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00465EB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00465EB8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00465EBC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00465EC0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00465EC4: addiu       $a2, $zero, -0x1B0
    ctx->r6 = ADD32(0, -0X1B0);
    // 0x00465EC8: addiu       $a1, $zero, 0x1B0
    ctx->r5 = ADD32(0, 0X1B0);
    // 0x00465ECC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00465ED0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00465ED4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00465ED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00465EDC: sw          $s4, 0x3600($s4)
    MEM_W(0X3600, ctx->r20) = ctx->r20;
    // 0x00465EE0: sw          $zero, 0x3608($s4)
    MEM_W(0X3608, ctx->r20) = 0;
    // 0x00465EE4: sw          $zero, 0x3604($s4)
    MEM_W(0X3604, ctx->r20) = 0;
L_00465EE8:
    // 0x00465EE8: addu        $v1, $s4, $a2
    ctx->r3 = ADD32(ctx->r20, ctx->r6);
    // 0x00465EEC: addiu       $a2, $a2, 0x1B0
    ctx->r6 = ADD32(ctx->r6, 0X1B0);
    // 0x00465EF0: addu        $v0, $s4, $a1
    ctx->r2 = ADD32(ctx->r20, ctx->r5);
    // 0x00465EF4: addiu       $a1, $a1, 0x1B0
    ctx->r5 = ADD32(ctx->r5, 0X1B0);
    // 0x00465EF8: sw          $v0, 0x1AC($a0)
    MEM_W(0X1AC, ctx->r4) = ctx->r2;
    // 0x00465EFC: sw          $v1, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = ctx->r3;
    // 0x00465F00: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00465F04: slti        $v0, $s3, 0x1F
    ctx->r2 = SIGNED(ctx->r19) < 0X1F ? 1 : 0;
    // 0x00465F08: bne         $v0, $zero, L_00465EE8
    if (ctx->r2 != 0) {
        // 0x00465F0C: addiu       $a0, $a0, 0x1B0
        ctx->r4 = ADD32(ctx->r4, 0X1B0);
            goto L_00465EE8;
    }
    // 0x00465F0C: addiu       $a0, $a0, 0x1B0
    ctx->r4 = ADD32(ctx->r4, 0X1B0);
    // 0x00465F10: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00465F14: addiu       $s1, $s1, 0x1360
    ctx->r17 = ADD32(ctx->r17, 0X1360);
    // 0x00465F18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00465F1C: sw          $zero, 0x1A8($s4)
    MEM_W(0X1A8, ctx->r20) = 0;
    // 0x00465F20: jal         0x0027BD10
    // 0x00465F24: sw          $zero, 0x35FC($s4)
    MEM_W(0X35FC, ctx->r20) = 0;
    func_0027BD10(rdram, ctx);
        goto after_0;
    // 0x00465F24: sw          $zero, 0x35FC($s4)
    MEM_W(0X35FC, ctx->r20) = 0;
    after_0:
    // 0x00465F28: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00465F2C: addiu       $s0, $s0, 0x12C0
    ctx->r16 = ADD32(ctx->r16, 0X12C0);
    // 0x00465F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00465F34: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00465F38: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x00465F3C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x00465F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00465F44: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    // 0x00465F48: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00465F4C: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    // 0x00465F50: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x00465F54: jal         0x0027BD10
    // 0x00465F58: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    func_0027BD10(rdram, ctx);
        goto after_1;
    // 0x00465F58: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    after_1:
    // 0x00465F5C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00465F60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00465F64: lwc1        $f0, 0x6050($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6050);
    // 0x00465F68: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x00465F6C: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x00465F70: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x00465F74: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    // 0x00465F78: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x00465F7C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00465F80: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x00465F84: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_00465F88:
    // 0x00465F88: jal         0x00227664
    // 0x00465F8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00227664(rdram, ctx);
        goto after_2;
    // 0x00465F8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00465F90: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00465F94: slti        $v0, $s3, 0x20
    ctx->r2 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x00465F98: bne         $v0, $zero, L_00465F88
    if (ctx->r2 != 0) {
        // 0x00465F9C: addiu       $s1, $s1, 0x1B0
        ctx->r17 = ADD32(ctx->r17, 0X1B0);
            goto L_00465F88;
    }
    // 0x00465F9C: addiu       $s1, $s1, 0x1B0
    ctx->r17 = ADD32(ctx->r17, 0X1B0);
    // 0x00465FA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00465FA4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00465FA8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00465FAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00465FB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00465FB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00465FB8: jr          $ra
    // 0x00465FBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00465FBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_004227EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004227EC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x004227F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004227F4: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x004227F8: jr          $ra
    // 0x004227FC: nop

    return;
    // 0x004227FC: nop

;}
RECOMP_FUNC void func_0021F420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F420: jr          $ra
    // 0x0021F424: nop

    return;
    // 0x0021F424: nop

;}
RECOMP_FUNC void func_0041D51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041D51C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0041D520: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0041D524: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0041D528: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0041D52C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041D530: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0041D534: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0041D538: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0041D53C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0041D540: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0041D544: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0041D548: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0041D54C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x0041D550: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041D554: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x0041D558: jal         0x0025340C
    // 0x0041D55C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0041D55C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    after_0:
    // 0x0041D560: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x0041D564: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0041D568: sll         $a1, $v1, 3
    ctx->r5 = S32(ctx->r3 << 3);
    // 0x0041D56C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D570: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D574: lwc1        $f1, 0x1FB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1FB4);
    // 0x0041D578: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D57C: lwc1        $f0, 0x13E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X13E0);
    // 0x0041D580: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041D584: nop

    // 0x0041D588: bc1f        L_0041D698
    if (!c1cs) {
        // 0x0041D58C: lui         $a0, 0xE6C2
        ctx->r4 = S32(0XE6C2 << 16);
            goto L_0041D698;
    }
    // 0x0041D58C: lui         $a0, 0xE6C2
    ctx->r4 = S32(0XE6C2 << 16);
    // 0x0041D590: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041D594: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0041D598: ori         $a0, $a0, 0xB449
    ctx->r4 = ctx->r4 | 0XB449;
    // 0x0041D59C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0041D5A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041D5A4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0041D5A8: lwc1        $f2, 0x34($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X34);
    // 0x0041D5AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D5B0: lwc1        $f0, 0x13E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X13E4);
    // 0x0041D5B4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0041D5B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041D5BC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041D5C0: lwc1        $f1, 0x1FB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1FB0);
    // 0x0041D5C4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0041D5C8: mfhi        $t0
    ctx->r8 = hi;
    // 0x0041D5CC: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x0041D5D0: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x0041D5D4: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
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
        goto after_1;
    // 0x0041D614: nop

    after_1:
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
        goto after_2;
    // 0x0041D694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_0041D698:
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
        goto after_3;
    // 0x0041D6A8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
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
RECOMP_FUNC void func_00236B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236B7C: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x00236B80: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00236B84: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00236B88: nop

    // 0x00236B8C: bc1f        L_00236BBC
    if (!c1cs) {
        // 0x00236B90: nop
    
            goto L_00236BBC;
    }
    // 0x00236B90: nop

    // 0x00236B94: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x00236B98: beq         $v0, $zero, L_00236BBC
    if (ctx->r2 == 0) {
        // 0x00236B9C: nop
    
            goto L_00236BBC;
    }
    // 0x00236B9C: nop

L_00236BA0:
    // 0x00236BA0: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x00236BA4: div.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00236BA8: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x00236BAC: lwc1        $f0, 0xAC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x00236BB0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00236BB4: bne         $v0, $zero, L_00236BA0
    if (ctx->r2 != 0) {
        // 0x00236BB8: add.s       $f1, $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
            goto L_00236BA0;
    }
    // 0x00236BB8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
L_00236BBC:
    // 0x00236BBC: jr          $ra
    // 0x00236BC0: nop

    return;
    // 0x00236BC0: nop

;}
RECOMP_FUNC void func_0025FD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025FD58: jr          $ra
    // 0x0025FD5C: nop

    return;
    // 0x0025FD5C: nop

;}
