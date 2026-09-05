#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_00421BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00421BE4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421BE8: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x00421BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00421BF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00421BF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00421BF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00421BFC: beq         $v0, $zero, L_00421C24
    if (ctx->r2 == 0) {
        // 0x00421C00: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00421C24;
    }
    // 0x00421C00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00421C04: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421C08: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00421C0C: beq         $v0, $zero, L_00421C44
    if (ctx->r2 == 0) {
        // 0x00421C10: nop
    
            goto L_00421C44;
    }
    // 0x00421C10: nop

    // 0x00421C14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421C18: addiu       $v0, $v0, 0x47F4
    ctx->r2 = ADD32(ctx->r2, 0X47F4);
    // 0x00421C1C: j           L_00421C88
    // 0x00421C20: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00421C88;
    // 0x00421C20: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00421C24:
    // 0x00421C24: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421C28: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x00421C2C: beq         $v0, $zero, L_00421C44
    if (ctx->r2 == 0) {
        // 0x00421C30: nop
    
            goto L_00421C44;
    }
    // 0x00421C30: nop

    // 0x00421C34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421C38: addiu       $v0, $v0, 0x4804
    ctx->r2 = ADD32(ctx->r2, 0X4804);
    // 0x00421C3C: j           L_00421C88
    // 0x00421C40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00421C88;
    // 0x00421C40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00421C44:
    // 0x00421C44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00421C48: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x00421C4C: beq         $v0, $zero, L_00421C88
    if (ctx->r2 == 0) {
        // 0x00421C50: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00421C88;
    }
    // 0x00421C50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00421C54: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00421C58: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x00421C5C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00421C60: addiu       $v0, $v0, 0x48F8
    ctx->r2 = ADD32(ctx->r2, 0X48F8);
    // 0x00421C64: jal         0x004160F0
    // 0x00421C68: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00421C68: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00421C6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00421C70: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00421C74: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00421C78: addiu       $a1, $a1, 0x1410
    ctx->r5 = ADD32(ctx->r5, 0X1410);
    // 0x00421C7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x00421C80: jal         0x0029E3E0
    // 0x00421C84: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00421C84: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    after_1:
L_00421C88:
    // 0x00421C88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00421C8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00421C90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00421C94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00421C98: jr          $ra
    // 0x00421C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00421C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002350EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002350EC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x002350F0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x002350F4: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x002350F8: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x002350FC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00235100: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x00235104: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x00235108: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x0023510C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00235110: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x00235114: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x00235118: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0023511C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x00235120: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00235124: beq         $v0, $zero, L_0023516C
    if (ctx->r2 == 0) {
        // 0x00235128: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_0023516C;
    }
    // 0x00235128: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0023512C: lw          $a1, 0x7520($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X7520);
    // 0x00235130: lw          $a0, 0x10C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10C);
    // 0x00235134: lhu         $v1, 0x2($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2);
    // 0x00235138: beq         $a1, $zero, L_00235170
    if (ctx->r5 == 0) {
        // 0x0023513C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00235170;
    }
    // 0x0023513C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00235140:
    // 0x00235140: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00235144: bne         $v0, $a0, L_00235158
    if (ctx->r2 != ctx->r4) {
        // 0x00235148: nop
    
            goto L_00235158;
    }
    // 0x00235148: nop

    // 0x0023514C: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x00235150: beq         $v0, $v1, L_00235170
    if (ctx->r2 == ctx->r3) {
        // 0x00235154: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_00235170;
    }
    // 0x00235154: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
L_00235158:
    // 0x00235158: lw          $a1, 0x4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4);
    // 0x0023515C: bne         $a1, $zero, L_00235140
    if (ctx->r5 != 0) {
        // 0x00235160: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00235140;
    }
    // 0x00235160: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00235164: j           L_00235170
    // 0x00235168: nop

        goto L_00235170;
    // 0x00235168: nop

L_0023516C:
    // 0x0023516C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00235170:
    // 0x00235170: bne         $s0, $zero, L_00235290
    if (ctx->r16 != 0) {
        // 0x00235174: nop
    
            goto L_00235290;
    }
    // 0x00235174: nop

    // 0x00235178: jal         0x0026D3BC
    // 0x0023517C: addiu       $a0, $s5, 0x7514
    ctx->r4 = ADD32(ctx->r21, 0X7514);
    func_0026D3BC(rdram, ctx);
        goto after_0;
    // 0x0023517C: addiu       $a0, $s5, 0x7514
    ctx->r4 = ADD32(ctx->r21, 0X7514);
    after_0:
    // 0x00235180: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00235184: beq         $s0, $zero, L_002352D4
    if (ctx->r16 == 0) {
        // 0x00235188: nop
    
            goto L_002352D4;
    }
    // 0x00235188: nop

    // 0x0023518C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00235190: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00235194: jal         0x00223F50
    // 0x00235198: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00223F50(rdram, ctx);
        goto after_1;
    // 0x00235198: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0023519C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x002351A0: lbu         $v0, 0x1F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1F);
    // 0x002351A4: lbu         $v1, 0x20($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X20);
    // 0x002351A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002351AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x002351B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002351B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002351B8: lw          $s3, -0x3050($at)
    ctx->r19 = MEM_W(ctx->r1, -0X3050);
    // 0x002351BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002351C0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x002351C4: lw          $s4, -0x3050($at)
    ctx->r20 = MEM_W(ctx->r1, -0X3050);
    // 0x002351C8: jal         0x0026D230
    // 0x002351CC: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    func_0026D230(rdram, ctx);
        goto after_2;
    // 0x002351CC: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    after_2:
    // 0x002351D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002351D4: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x002351D8: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x002351DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002351E0: bgez        $v0, L_002351EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x002351E4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_002351EC;
    }
    // 0x002351E4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x002351E8: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_002351EC:
    // 0x002351EC: lw          $v0, 0xF8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XF8);
    // 0x002351F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x002351F4: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002351F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002351FC: beq         $v0, $zero, L_00235224
    if (ctx->r2 == 0) {
        // 0x00235200: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00235224;
    }
    // 0x00235200: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00235204: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x00235208: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x0023520C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x00235210: lw          $v0, 0x10C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10C);
    // 0x00235214: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x00235218: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x0023521C: j           L_0023522C
    // 0x00235220: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_0023522C;
    // 0x00235220: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_00235224:
    // 0x00235224: sw          $s2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r18;
    // 0x00235228: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_0023522C:
    // 0x0023522C: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
    // 0x00235230: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x00235234: sw          $s4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r20;
    // 0x00235238: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0023523C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x00235240: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x00235244: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x00235248: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x0023524C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x00235250: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x00235254: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x00235258: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x0023525C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00235260: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00235264: beq         $a1, $v0, L_00235288
    if (ctx->r5 == ctx->r2) {
        // 0x00235268: sw          $v0, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r2;
            goto L_00235288;
    }
    // 0x00235268: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x0023526C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x00235270: jal         0x00207914
    // 0x00235274: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    entry_00207914(rdram, ctx);
        goto after_3;
    // 0x00235274: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00235278: beq         $s2, $zero, L_00235288
    if (ctx->r18 == 0) {
        // 0x0023527C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00235288;
    }
    // 0x0023527C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00235280: jal         0x002316A0
    // 0x00235284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002316A0(rdram, ctx);
        goto after_4;
    // 0x00235284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_00235288:
    // 0x00235288: beq         $s0, $zero, L_002352D4
    if (ctx->r16 == 0) {
        // 0x0023528C: nop
    
            goto L_002352D4;
    }
    // 0x0023528C: nop

L_00235290:
    // 0x00235290: lbu         $v0, 0x1B5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1B5);
    // 0x00235294: lw          $v1, 0xF8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XF8);
    // 0x00235298: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0023529C: sb          $v0, 0x1B5($s2)
    MEM_B(0X1B5, ctx->r18) = ctx->r2;
    // 0x002352A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002352A4: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x002352A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002352AC: beq         $v0, $zero, L_002352D4
    if (ctx->r2 == 0) {
        // 0x002352B0: nop
    
            goto L_002352D4;
    }
    // 0x002352B0: nop

    // 0x002352B4: jal         0x0020F79C
    // 0x002352B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0020F79C(rdram, ctx);
        goto after_5;
    // 0x002352B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x002352BC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x002352C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002352C4: jal         0x002333C0
    // 0x002352C8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_002333C0(rdram, ctx);
        goto after_6;
    // 0x002352C8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x002352CC: bnel        $v0, $zero, L_002352D4
    if (ctx->r2 != 0) {
        // 0x002352D0: sw          $s2, 0xB0($v0)
        MEM_W(0XB0, ctx->r2) = ctx->r18;
            goto L_002352D4;
    }
    goto skip_0;
    // 0x002352D0: sw          $s2, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r18;
    skip_0:
L_002352D4:
    // 0x002352D4: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x002352D8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x002352DC: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x002352E0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x002352E4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x002352E8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x002352EC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x002352F0: jr          $ra
    // 0x002352F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x002352F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_002399F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002399F8: addiu       $sp, $sp, -0xA80
    ctx->r29 = ADD32(ctx->r29, -0XA80);
    // 0x002399FC: sw          $s3, 0xA74($sp)
    MEM_W(0XA74, ctx->r29) = ctx->r19;
    // 0x00239A00: lw          $s3, 0xA98($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA98);
    // 0x00239A04: sw          $s2, 0xA70($sp)
    MEM_W(0XA70, ctx->r29) = ctx->r18;
    // 0x00239A08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00239A0C: sw          $ra, 0xA78($sp)
    MEM_W(0XA78, ctx->r29) = ctx->r31;
    // 0x00239A10: sw          $s1, 0xA6C($sp)
    MEM_W(0XA6C, ctx->r29) = ctx->r17;
    // 0x00239A14: sw          $s0, 0xA68($sp)
    MEM_W(0XA68, ctx->r29) = ctx->r16;
    // 0x00239A18: sw          $a1, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r5;
    // 0x00239A1C: sw          $a2, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r6;
    // 0x00239A20: sw          $a3, 0xA8C($sp)
    MEM_W(0XA8C, ctx->r29) = ctx->r7;
    // 0x00239A24: lw          $t0, 0xA84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA84);
    // 0x00239A28: lw          $t1, 0xA88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA88);
    // 0x00239A2C: lw          $t2, 0xA8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8C);
    // 0x00239A30: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x00239A34: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
    // 0x00239A38: sw          $t2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r10;
    // 0x00239A3C: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x00239A40: lw          $a2, 0xA90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA90);
    // 0x00239A44: bne         $v0, $zero, L_00239C0C
    if (ctx->r2 != 0) {
        // 0x00239A48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00239C0C;
    }
    // 0x00239A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00239A4C: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x00239A50: beq         $a1, $zero, L_00239C0C
    if (ctx->r5 == 0) {
        // 0x00239A54: nop
    
            goto L_00239C0C;
    }
    // 0x00239A54: nop

    // 0x00239A58: beq         $a2, $zero, L_00239C0C
    if (ctx->r6 == 0) {
        // 0x00239A5C: nop
    
            goto L_00239C0C;
    }
    // 0x00239A5C: nop

    // 0x00239A60: beq         $a1, $a2, L_00239C0C
    if (ctx->r5 == ctx->r6) {
        // 0x00239A64: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00239C0C;
    }
    // 0x00239A64: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00239A68: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x00239A6C: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x00239A70: sw          $v0, 0x1A48($at)
    MEM_W(0X1A48, ctx->r1) = ctx->r2;
    // 0x00239A74: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00239A78: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00239A7C: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x00239A80: lw          $t1, 0x8($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X8);
    // 0x00239A84: lw          $t2, 0xC($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XC);
    // 0x00239A88: sw          $t0, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r8;
    // 0x00239A8C: sw          $t1, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r9;
    // 0x00239A90: sw          $t2, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r10;
    // 0x00239A94: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00239A98: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x00239A9C: addiu       $v0, $v1, 0x34
    ctx->r2 = ADD32(ctx->r3, 0X34);
    // 0x00239AA0: lw          $t0, 0xA58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA58);
    // 0x00239AA4: lw          $t1, 0xA5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA5C);
    // 0x00239AA8: lw          $t2, 0xA60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA60);
    // 0x00239AAC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00239AB0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00239AB4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00239AB8: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    // 0x00239ABC: lw          $t0, 0xA84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA84);
    // 0x00239AC0: lw          $t1, 0xA88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA88);
    // 0x00239AC4: lw          $t2, 0xA8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8C);
    // 0x00239AC8: sw          $t0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r8;
    // 0x00239ACC: sw          $t1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r9;
    // 0x00239AD0: sw          $t2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r10;
    // 0x00239AD4: sw          $v0, 0x994($v1)
    MEM_W(0X994, ctx->r3) = ctx->r2;
    // 0x00239AD8: sw          $zero, 0x998($v1)
    MEM_W(0X998, ctx->r3) = 0;
    // 0x00239ADC: sw          $zero, 0x99C($v1)
    MEM_W(0X99C, ctx->r3) = 0;
    // 0x00239AE0: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00239AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00239AE8: lwc1        $f1, 0x6600($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6600);
    // 0x00239AEC: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00239AF0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x00239AF4: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00239AF8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00239AFC: swc1        $f0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f0.u32l;
    // 0x00239B00: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00239B04: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00239B08: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
    // 0x00239B0C: lwc1        $f0, 0xC($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XC);
    // 0x00239B10: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00239B14: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00239B18: swc1        $f0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f0.u32l;
    // 0x00239B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_00239B20:
    // 0x00239B20: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x00239B24: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x00239B28: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00239B2C: lw          $a0, 0x1A48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1A48);
    // 0x00239B30: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    // 0x00239B34: jal         0x0026CDAC
    // 0x00239B38: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_0026CDAC(rdram, ctx);
        goto after_0;
    // 0x00239B38: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x00239B3C: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x00239B40: bne         $v0, $zero, L_00239B20
    if (ctx->r2 != 0) {
        // 0x00239B44: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00239B20;
    }
    // 0x00239B44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00239B48: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x00239B4C: lw          $v1, 0x1A48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A48);
    // 0x00239B50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00239B54: sw          $s2, 0x9A0($v1)
    MEM_W(0X9A0, ctx->r3) = ctx->r18;
    // 0x00239B58: lw          $v0, 0xA94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA94);
    // 0x00239B5C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x00239B60: sw          $v0, 0x9A4($v1)
    MEM_W(0X9A4, ctx->r3) = ctx->r2;
    // 0x00239B64: lw          $t0, 0xA84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA84);
    // 0x00239B68: lw          $t1, 0xA88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA88);
    // 0x00239B6C: lw          $t2, 0xA8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8C);
    // 0x00239B70: sw          $t0, 0x9EC($v1)
    MEM_W(0X9EC, ctx->r3) = ctx->r8;
    // 0x00239B74: sw          $t1, 0x9F0($v1)
    MEM_W(0X9F0, ctx->r3) = ctx->r9;
    // 0x00239B78: sw          $t2, 0x9F4($v1)
    MEM_W(0X9F4, ctx->r3) = ctx->r10;
    // 0x00239B7C: lw          $a1, 0x14($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X14);
    // 0x00239B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00239B84: sw          $zero, 0xA3C($a2)
    MEM_W(0XA3C, ctx->r6) = 0;
    // 0x00239B88: jal         0x002393D0
    // 0x00239B8C: sw          $v0, 0xA40($a2)
    MEM_W(0XA40, ctx->r6) = ctx->r2;
    func_002393D0(rdram, ctx);
        goto after_1;
    // 0x00239B8C: sw          $v0, 0xA40($a2)
    MEM_W(0XA40, ctx->r6) = ctx->r2;
    after_1:
    // 0x00239B90: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239B94: lw          $v0, 0x1A48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A48);
    // 0x00239B98: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x00239B9C: jal         0x0026CC0C
    // 0x00239BA0: nop

    func_0026CC0C(rdram, ctx);
        goto after_2;
    // 0x00239BA0: nop

    after_2:
    // 0x00239BA4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00239BA8: lw          $v0, 0x1A48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A48);
    // 0x00239BAC: lw          $a0, 0x99C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X99C);
    // 0x00239BB0: beq         $a0, $zero, L_00239C0C
    if (ctx->r4 == 0) {
        // 0x00239BB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00239C0C;
    }
    // 0x00239BB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00239BB8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x00239BBC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x00239BC0: bne         $v0, $zero, L_00239C0C
    if (ctx->r2 != 0) {
        // 0x00239BC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00239C0C;
    }
    // 0x00239BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00239BC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00239BCC: lw          $v0, 0x6D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D20);
    // 0x00239BD0: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x00239BD4: andi        $s0, $v0, 0x1
    ctx->r16 = ctx->r2 & 0X1;
    // 0x00239BD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00239BDC: beq         $s0, $v0, L_00239BFC
    if (ctx->r16 == ctx->r2) {
        // 0x00239BE0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_00239BFC;
    }
    // 0x00239BE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_00239BE4:
    // 0x00239BE4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00239BE8: bnel        $v0, $zero, L_00239BF0
    if (ctx->r2 != 0) {
        // 0x00239BEC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_00239BF0;
    }
    goto skip_0;
    // 0x00239BEC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    skip_0:
L_00239BF0:
    // 0x00239BF0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00239BF4: bne         $s0, $v1, L_00239BE4
    if (ctx->r16 != ctx->r3) {
        // 0x00239BF8: nop
    
            goto L_00239BE4;
    }
    // 0x00239BF8: nop

L_00239BFC:
    // 0x00239BFC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x00239C00: jal         0x0026CB2C
    // 0x00239C04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0026CB2C(rdram, ctx);
        goto after_3;
    // 0x00239C04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x00239C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00239C0C:
    // 0x00239C0C: lw          $ra, 0xA78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA78);
    // 0x00239C10: lw          $s3, 0xA74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA74);
    // 0x00239C14: lw          $s2, 0xA70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA70);
    // 0x00239C18: lw          $s1, 0xA6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA6C);
    // 0x00239C1C: lw          $s0, 0xA68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA68);
    // 0x00239C20: jr          $ra
    // 0x00239C24: addiu       $sp, $sp, 0xA80
    ctx->r29 = ADD32(ctx->r29, 0XA80);
    return;
    // 0x00239C24: addiu       $sp, $sp, 0xA80
    ctx->r29 = ADD32(ctx->r29, 0XA80);
;}
RECOMP_FUNC void func_00228BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00228BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00228BC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00228BCC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00228BD0: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00228BD4: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x00228BD8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00228BDC: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x00228BE0: sw          $a2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r6;
    // 0x00228BE4: jal         0x0020F040
    // 0x00228BE8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_0020F040(rdram, ctx);
        goto after_0;
    // 0x00228BE8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x00228BEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00228BF0: jr          $ra
    // 0x00228BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00228BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042D220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042D220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042D224: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042D228: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x0042D22C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042D230: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0042D234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042D238: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D23C: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x0042D240: addiu       $a1, $a1, 0x1850
    ctx->r5 = ADD32(ctx->r5, 0X1850);
    // 0x0042D244: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0042D248: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
    // 0x0042D24C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0042D250: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042D254: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_0042D258:
    // 0x0042D258: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x0042D25C: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x0042D260: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x0042D264: sw          $zero, 0x1B8($v1)
    MEM_W(0X1B8, ctx->r3) = 0;
    // 0x0042D268: sw          $zero, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = 0;
    // 0x0042D26C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D270: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042D274: bne         $v0, $zero, L_0042D258
    if (ctx->r2 != 0) {
        // 0x0042D278: addiu       $v1, $v1, 0x1D8
        ctx->r3 = ADD32(ctx->r3, 0X1D8);
            goto L_0042D258;
    }
    // 0x0042D278: addiu       $v1, $v1, 0x1D8
    ctx->r3 = ADD32(ctx->r3, 0X1D8);
    // 0x0042D27C: ori         $a0, $zero, 0xEC00
    ctx->r4 = 0 | 0XEC00;
    // 0x0042D280: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x0042D284: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D288: jal         0x00200500
    // 0x0042D28C: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x0042D28C: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_0:
    // 0x0042D290: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D294: ori         $s2, $zero, 0xEC00
    ctx->r18 = 0 | 0XEC00;
    // 0x0042D298: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
L_0042D29C:
    // 0x0042D29C: addu        $a0, $s3, $s2
    ctx->r4 = ADD32(ctx->r19, ctx->r18);
    // 0x0042D2A0: jal         0x00200574
    // 0x0042D2A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_1;
    // 0x0042D2A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0042D2A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2AC: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x0042D2B0: bne         $v0, $zero, L_0042D29C
    if (ctx->r2 != 0) {
        // 0x0042D2B4: addiu       $s1, $s1, 0x1D8
        ctx->r17 = ADD32(ctx->r17, 0X1D8);
            goto L_0042D29C;
    }
    // 0x0042D2B4: addiu       $s1, $s1, 0x1D8
    ctx->r17 = ADD32(ctx->r17, 0X1D8);
    // 0x0042D2B8: ori         $a0, $zero, 0xEC14
    ctx->r4 = 0 | 0XEC14;
    // 0x0042D2BC: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x0042D2C0: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x0042D2C4: jal         0x00200500
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    func_00200500(rdram, ctx);
        goto after_2;
    // 0x0042D2C8: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    after_2:
    // 0x0042D2CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0042D2D0: ori         $s1, $zero, 0xEC28
    ctx->r17 = 0 | 0XEC28;
L_0042D2D4:
    // 0x0042D2D4: addu        $a0, $s3, $s1
    ctx->r4 = ADD32(ctx->r19, ctx->r17);
    // 0x0042D2D8: addiu       $a1, $zero, 0x1C4
    ctx->r5 = ADD32(0, 0X1C4);
    // 0x0042D2DC: jal         0x00200500
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    func_00200500(rdram, ctx);
        goto after_3;
    // 0x0042D2E0: addiu       $a2, $zero, 0x1C8
    ctx->r6 = ADD32(0, 0X1C8);
    after_3:
    // 0x0042D2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0042D2E8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x0042D2EC: bne         $v0, $zero, L_0042D2D4
    if (ctx->r2 != 0) {
        // 0x0042D2F0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0042D2D4;
    }
    // 0x0042D2F0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x0042D2F4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D2F8: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, 0X1850);
    // 0x0042D2FC: jal         0x0027BD10
    // 0x0042D300: nop

    func_0027BD10(rdram, ctx);
        goto after_4;
    // 0x0042D300: nop

    after_4:
    // 0x0042D304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0042D308: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0042D30C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0042D310: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x0042D314: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0042D318: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x0042D31C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0042D320: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0042D324: addiu       $v1, $v1, 0x1930
    ctx->r3 = ADD32(ctx->r3, 0X1930);
L_0042D328:
    // 0x0042D328: beq         $a0, $t0, L_0042D370
    if (ctx->r4 == ctx->r8) {
        // 0x0042D32C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_0042D370;
    }
    // 0x0042D32C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x0042D330: beq         $v0, $zero, L_0042D348
    if (ctx->r2 == 0) {
        // 0x0042D334: nop
    
            goto L_0042D348;
    }
    // 0x0042D334: nop

    // 0x0042D338: beql        $a0, $zero, L_0042D360
    if (ctx->r4 == 0) {
        // 0x0042D33C: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D360;
    }
    goto skip_0;
    // 0x0042D33C: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_0:
    // 0x0042D340: j           L_0042D3A0
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D344: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D348:
    // 0x0042D348: beql        $a0, $t2, L_0042D384
    if (ctx->r4 == ctx->r10) {
        // 0x0042D34C: sh          $t0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r8;
            goto L_0042D384;
    }
    goto skip_1;
    // 0x0042D34C: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    skip_1:
    // 0x0042D350: beql        $a0, $t1, L_0042D390
    if (ctx->r4 == ctx->r9) {
        // 0x0042D354: sh          $a3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r7;
            goto L_0042D390;
    }
    goto skip_2;
    // 0x0042D354: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x0042D358: j           L_0042D3A0
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
        goto L_0042D3A0;
    // 0x0042D35C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D360:
    // 0x0042D360: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x0042D364: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
    // 0x0042D368: j           L_0042D39C
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D36C: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D370:
    // 0x0042D370: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x0042D374: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x0042D378: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x0042D37C: j           L_0042D39C
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
        goto L_0042D39C;
    // 0x0042D380: sh          $a2, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r6;
L_0042D384:
    // 0x0042D384: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D388: j           L_0042D398
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
        goto L_0042D398;
    // 0x0042D38C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_0042D390:
    // 0x0042D390: sh          $a3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r7;
    // 0x0042D394: sh          $a2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r6;
L_0042D398:
    // 0x0042D398: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_0042D39C:
    // 0x0042D39C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
L_0042D3A0:
    // 0x0042D3A0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x0042D3A4: sb          $a1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r5;
    // 0x0042D3A8: sb          $a1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r5;
    // 0x0042D3AC: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x0042D3B0: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x0042D3B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0042D3B8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0042D3BC: bne         $v0, $zero, L_0042D328
    if (ctx->r2 != 0) {
        // 0x0042D3C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_0042D328;
    }
    // 0x0042D3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x0042D3C4: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x0042D3C8: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x0042D3CC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0042D3D0: addiu       $a0, $a0, 0x18F0
    ctx->r4 = ADD32(ctx->r4, 0X18F0);
    // 0x0042D3D4: jal         0x00210518
    // 0x0042D3D8: nop

    func_00210518(rdram, ctx);
        goto after_5;
    // 0x0042D3D8: nop

    after_5:
    // 0x0042D3DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x0042D3E0: addu        $at, $s3, $at
    ctx->r1 = ADD32(ctx->r19, ctx->r1);
    // 0x0042D3E4: sw          $s4, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = ctx->r20;
    // 0x0042D3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0042D3EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0042D3F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0042D3F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0042D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0042D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042D400: jr          $ra
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0042D404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00256D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00256D6C: lh          $v0, 0xA08($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA08);
    // 0x00256D70: xori        $v0, $v0, 0xE
    ctx->r2 = ctx->r2 ^ 0XE;
    // 0x00256D74: jr          $ra
    // 0x00256D78: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00256D78: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_002025F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002025F4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x002025F8: addiu       $a1, $a1, 0x2F
    ctx->r5 = ADD32(ctx->r5, 0X2F);
    // 0x002025FC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00202600: beq         $v1, $zero, L_002026E4
    if (ctx->r3 == 0) {
        // 0x00202604: and         $a1, $a1, $v0
        ctx->r5 = ctx->r5 & ctx->r2;
            goto L_002026E4;
    }
    // 0x00202604: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
L_00202608:
    // 0x00202608: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x0020260C: sltu        $v0, $a2, $a1
    ctx->r2 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x00202610: bne         $v0, $zero, L_002026D8
    if (ctx->r2 != 0) {
        // 0x00202614: nop
    
            goto L_002026D8;
    }
    // 0x00202614: nop

    // 0x00202618: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x0020261C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00202620: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00202624: subu        $a2, $v0, $a1
    ctx->r6 = SUB32(ctx->r2, ctx->r5);
    // 0x00202628: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x0020262C: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x00202630: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00202634: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x00202638: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x0020263C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x00202640: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x00202644: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00202648: bnel        $v0, $zero, L_002026B8
    if (ctx->r2 != 0) {
        // 0x0020264C: sw          $v1, 0x8($a2)
        MEM_W(0X8, ctx->r6) = ctx->r3;
            goto L_002026B8;
    }
    goto skip_0;
    // 0x0020264C: sw          $v1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r3;
    skip_0:
    // 0x00202650: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x00202654: beq         $a1, $zero, L_00202664
    if (ctx->r5 == 0) {
        // 0x00202658: nop
    
            goto L_00202664;
    }
    // 0x00202658: nop

    // 0x0020265C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00202660: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_00202664:
    // 0x00202664: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x00202668: beq         $a1, $zero, L_00202678
    if (ctx->r5 == 0) {
        // 0x0020266C: nop
    
            goto L_00202678;
    }
    // 0x0020266C: nop

    // 0x00202670: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00202674: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_00202678:
    // 0x00202678: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0020267C: bne         $v0, $v1, L_0020268C
    if (ctx->r2 != ctx->r3) {
        // 0x00202680: nop
    
            goto L_0020268C;
    }
    // 0x00202680: nop

    // 0x00202684: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00202688: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_0020268C:
    // 0x0020268C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x00202690: bnel        $v0, $v1, L_002026B0
    if (ctx->r2 != ctx->r3) {
        // 0x00202694: sw          $zero, 0x0($v1)
        MEM_W(0X0, ctx->r3) = 0;
            goto L_002026B0;
    }
    goto skip_1;
    // 0x00202694: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    skip_1:
    // 0x00202698: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0020269C: bnel        $v0, $zero, L_002026AC
    if (ctx->r2 != 0) {
        // 0x002026A0: sw          $v0, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r2;
            goto L_002026AC;
    }
    goto skip_2;
    // 0x002026A0: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    skip_2:
    // 0x002026A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002026A8: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
L_002026AC:
    // 0x002026AC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_002026B0:
    // 0x002026B0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x002026B4: sw          $v1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r3;
L_002026B8:
    // 0x002026B8: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x002026BC: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x002026C0: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x002026C4: bnel        $v0, $zero, L_002026CC
    if (ctx->r2 != 0) {
        // 0x002026C8: sw          $a2, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r6;
            goto L_002026CC;
    }
    goto skip_3;
    // 0x002026C8: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    skip_3:
L_002026CC:
    // 0x002026CC: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x002026D0: jr          $ra
    // 0x002026D4: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    return;
    // 0x002026D4: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
L_002026D8:
    // 0x002026D8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x002026DC: bne         $v1, $zero, L_00202608
    if (ctx->r3 != 0) {
        // 0x002026E0: nop
    
            goto L_00202608;
    }
    // 0x002026E0: nop

L_002026E4:
    // 0x002026E4: jr          $ra
    // 0x002026E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002026E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002A4650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A4650: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x002A4654: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x002A4658: bne         $t0, $zero, L_002A49FC
    if (ctx->r8 != 0) {
        // 0x002A465C: addu        $t3, $a1, $zero
        ctx->r11 = ADD32(ctx->r5, 0);
            goto L_002A49FC;
    }
    // 0x002A465C: addu        $t3, $a1, $zero
    ctx->r11 = ADD32(ctx->r5, 0);
    // 0x002A4660: sltu        $v0, $a0, $t1
    ctx->r2 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x002A4664: beq         $v0, $zero, L_002A47AC
    if (ctx->r2 == 0) {
        // 0x002A4668: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A47AC;
    }
    // 0x002A4668: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A466C: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A4670: bne         $v0, $zero, L_002A4688
    if (ctx->r2 != 0) {
        // 0x002A4674: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_002A4688;
    }
    // 0x002A4674: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x002A4678: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x002A467C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A4680: j           L_002A46A0
    // 0x002A4684: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
        goto L_002A46A0;
    // 0x002A4684: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
L_002A4688:
    // 0x002A4688: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A468C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4690: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A4694: bne         $v0, $zero, L_002A46A0
    if (ctx->r2 != 0) {
        // 0x002A4698: addiu       $t0, $zero, 0x18
        ctx->r8 = ADD32(0, 0X18);
            goto L_002A46A0;
    }
    // 0x002A4698: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x002A469C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_002A46A0:
    // 0x002A46A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A46A4: addiu       $v0, $v0, -0x5170
    ctx->r2 = ADD32(ctx->r2, -0X5170);
    // 0x002A46A8: srlv        $v1, $v1, $t0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r8 & 31));
    // 0x002A46AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A46B0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A46B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x002A46B8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x002A46BC: subu        $a2, $a1, $v0
    ctx->r6 = SUB32(ctx->r5, ctx->r2);
    // 0x002A46C0: beq         $a2, $zero, L_002A46DC
    if (ctx->r6 == 0) {
        // 0x002A46C4: sllv        $v1, $a0, $a2
        ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
            goto L_002A46DC;
    }
    // 0x002A46C4: sllv        $v1, $a0, $a2
    ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x002A46C8: sllv        $t1, $t1, $a2
    ctx->r9 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x002A46CC: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x002A46D0: srlv        $v0, $t3, $v0
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r2 & 31));
    // 0x002A46D4: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002A46D8: sllv        $t3, $t3, $a2
    ctx->r11 = S32(ctx->r11 << (ctx->r6 & 31));
L_002A46DC:
    // 0x002A46DC: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A46E0: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x002A46E4: bne         $a2, $zero, L_002A46F0
    if (ctx->r6 != 0) {
        // 0x002A46E8: nop
    
            goto L_002A46F0;
    }
    // 0x002A46E8: nop

    // 0x002A46EC: break       7
    do_break(2770668);
L_002A46F0:
    // 0x002A46F0: mflo        $a3
    ctx->r7 = lo;
    // 0x002A46F4: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A46F8: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
    // 0x002A46FC: nop

    // 0x002A4700: mult        $a3, $t0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4704: srl         $v0, $t3, 16
    ctx->r2 = S32(U32(ctx->r11) >> 16);
    // 0x002A4708: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A470C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4710: mflo        $a1
    ctx->r5 = lo;
    // 0x002A4714: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4718: beql        $v0, $zero, L_002A4748
    if (ctx->r2 == 0) {
        // 0x002A471C: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4748;
    }
    goto skip_0;
    // 0x002A471C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_0:
    // 0x002A4720: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4724: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A4728: bne         $v0, $zero, L_002A4744
    if (ctx->r2 != 0) {
        // 0x002A472C: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_002A4744;
    }
    // 0x002A472C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4730: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4734: beql        $v0, $zero, L_002A4748
    if (ctx->r2 == 0) {
        // 0x002A4738: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4748;
    }
    goto skip_1;
    // 0x002A4738: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_1:
    // 0x002A473C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4740: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A4744:
    // 0x002A4744: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_002A4748:
    // 0x002A4748: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A474C: bne         $a2, $zero, L_002A4758
    if (ctx->r6 != 0) {
        // 0x002A4750: nop
    
            goto L_002A4758;
    }
    // 0x002A4750: nop

    // 0x002A4754: break       7
    do_break(2770772);
L_002A4758:
    // 0x002A4758: mflo        $a0
    ctx->r4 = lo;
    // 0x002A475C: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4760: nop

    // 0x002A4764: nop

    // 0x002A4768: mult        $a0, $t0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A476C: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x002A4770: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4774: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4778: mflo        $a1
    ctx->r5 = lo;
    // 0x002A477C: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4780: beq         $v0, $zero, L_002A47A0
    if (ctx->r2 == 0) {
        // 0x002A4784: addu        $v1, $v1, $t1
        ctx->r3 = ADD32(ctx->r3, ctx->r9);
            goto L_002A47A0;
    }
    // 0x002A4784: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4788: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A478C: bne         $v0, $zero, L_002A47A0
    if (ctx->r2 != 0) {
        // 0x002A4790: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A47A0;
    }
    // 0x002A4790: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A4794: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4798: bnel        $v0, $zero, L_002A47A0
    if (ctx->r2 != 0) {
        // 0x002A479C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A47A0;
    }
    goto skip_2;
    // 0x002A479C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_2:
L_002A47A0:
    // 0x002A47A0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A47A4: j           L_002A4BBC
    // 0x002A47A8: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
        goto L_002A4BBC;
    // 0x002A47A8: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
L_002A47AC:
    // 0x002A47AC: bne         $t1, $zero, L_002A47D4
    if (ctx->r9 != 0) {
        // 0x002A47B0: sltu        $v0, $v0, $t1
        ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
            goto L_002A47D4;
    }
    // 0x002A47B0: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A47B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002A47B8: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x002A47BC: bne         $t0, $zero, L_002A47C8
    if (ctx->r8 != 0) {
        // 0x002A47C0: nop
    
            goto L_002A47C8;
    }
    // 0x002A47C0: nop

    // 0x002A47C4: break       7
    do_break(2770884);
L_002A47C8:
    // 0x002A47C8: mflo        $t1
    ctx->r9 = lo;
    // 0x002A47CC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A47D0: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
L_002A47D4:
    // 0x002A47D4: bne         $v0, $zero, L_002A47EC
    if (ctx->r2 != 0) {
        // 0x002A47D8: addu        $v1, $t1, $zero
        ctx->r3 = ADD32(ctx->r9, 0);
            goto L_002A47EC;
    }
    // 0x002A47D8: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x002A47DC: sltiu       $v0, $t1, 0x100
    ctx->r2 = ctx->r9 < 0X100 ? 1 : 0;
    // 0x002A47E0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A47E4: j           L_002A4804
    // 0x002A47E8: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
        goto L_002A4804;
    // 0x002A47E8: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
L_002A47EC:
    // 0x002A47EC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A47F0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A47F4: sltu        $v0, $v0, $t1
    ctx->r2 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x002A47F8: bne         $v0, $zero, L_002A4804
    if (ctx->r2 != 0) {
        // 0x002A47FC: addiu       $a2, $zero, 0x18
        ctx->r6 = ADD32(0, 0X18);
            goto L_002A4804;
    }
    // 0x002A47FC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x002A4800: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_002A4804:
    // 0x002A4804: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4808: addiu       $v0, $v0, -0x5170
    ctx->r2 = ADD32(ctx->r2, -0X5170);
    // 0x002A480C: srlv        $v1, $v1, $a2
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r6 & 31));
    // 0x002A4810: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4814: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4818: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A481C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A4820: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4824: bne         $a2, $zero, L_002A4838
    if (ctx->r6 != 0) {
        // 0x002A4828: subu        $a1, $v1, $a2
        ctx->r5 = SUB32(ctx->r3, ctx->r6);
            goto L_002A4838;
    }
    // 0x002A4828: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    // 0x002A482C: subu        $a0, $a0, $t1
    ctx->r4 = SUB32(ctx->r4, ctx->r9);
    // 0x002A4830: j           L_002A492C
    // 0x002A4834: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_002A492C;
    // 0x002A4834: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_002A4838:
    // 0x002A4838: sllv        $t1, $t1, $a2
    ctx->r9 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x002A483C: srlv        $a3, $a0, $a1
    ctx->r7 = S32(U32(ctx->r4) >> (ctx->r5 & 31));
    // 0x002A4840: sllv        $v1, $a0, $a2
    ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x002A4844: srlv        $v0, $t3, $a1
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r5 & 31));
    // 0x002A4848: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002A484C: sllv        $t3, $t3, $a2
    ctx->r11 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x002A4850: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A4854: divu        $zero, $a3, $a2
    lo = S32(U32(ctx->r7) / U32(ctx->r6)); hi = S32(U32(ctx->r7) % U32(ctx->r6));
    // 0x002A4858: bne         $a2, $zero, L_002A4864
    if (ctx->r6 != 0) {
        // 0x002A485C: nop
    
            goto L_002A4864;
    }
    // 0x002A485C: nop

    // 0x002A4860: break       7
    do_break(2771040);
L_002A4864:
    // 0x002A4864: mflo        $t0
    ctx->r8 = lo;
    // 0x002A4868: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A486C: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x002A4870: nop

    // 0x002A4874: mult        $t0, $a1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4878: srl         $v0, $a0, 16
    ctx->r2 = S32(U32(ctx->r4) >> 16);
    // 0x002A487C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4880: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4884: mflo        $a3
    ctx->r7 = lo;
    // 0x002A4888: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A488C: beql        $v0, $zero, L_002A48BC
    if (ctx->r2 == 0) {
        // 0x002A4890: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A48BC;
    }
    goto skip_3;
    // 0x002A4890: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_3:
    // 0x002A4894: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4898: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A489C: bne         $v0, $zero, L_002A48B8
    if (ctx->r2 != 0) {
        // 0x002A48A0: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_002A48B8;
    }
    // 0x002A48A0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002A48A4: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A48A8: beql        $v0, $zero, L_002A48BC
    if (ctx->r2 == 0) {
        // 0x002A48AC: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A48BC;
    }
    goto skip_4;
    // 0x002A48AC: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_4:
    // 0x002A48B0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x002A48B4: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A48B8:
    // 0x002A48B8: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
L_002A48BC:
    // 0x002A48BC: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A48C0: bne         $a2, $zero, L_002A48CC
    if (ctx->r6 != 0) {
        // 0x002A48C4: nop
    
            goto L_002A48CC;
    }
    // 0x002A48C4: nop

    // 0x002A48C8: break       7
    do_break(2771144);
L_002A48CC:
    // 0x002A48CC: mflo        $a2
    ctx->r6 = lo;
    // 0x002A48D0: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A48D4: nop

    // 0x002A48D8: nop

    // 0x002A48DC: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A48E0: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x002A48E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A48E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A48EC: mflo        $a3
    ctx->r7 = lo;
    // 0x002A48F0: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A48F4: beq         $v0, $zero, L_002A4924
    if (ctx->r2 == 0) {
        // 0x002A48F8: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_002A4924;
    }
    // 0x002A48F8: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x002A48FC: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4900: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A4904: bne         $v0, $zero, L_002A4920
    if (ctx->r2 != 0) {
        // 0x002A4908: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_002A4920;
    }
    // 0x002A4908: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A490C: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A4910: beq         $v0, $zero, L_002A4924
    if (ctx->r2 == 0) {
        // 0x002A4914: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_002A4924;
    }
    // 0x002A4914: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x002A4918: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A491C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A4920:
    // 0x002A4920: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_002A4924:
    // 0x002A4924: or          $t2, $v0, $a2
    ctx->r10 = ctx->r2 | ctx->r6;
    // 0x002A4928: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
L_002A492C:
    // 0x002A492C: srl         $a2, $t1, 16
    ctx->r6 = S32(U32(ctx->r9) >> 16);
    // 0x002A4930: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x002A4934: bne         $a2, $zero, L_002A4940
    if (ctx->r6 != 0) {
        // 0x002A4938: nop
    
            goto L_002A4940;
    }
    // 0x002A4938: nop

    // 0x002A493C: break       7
    do_break(2771260);
L_002A4940:
    // 0x002A4940: mflo        $a3
    ctx->r7 = lo;
    // 0x002A4944: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4948: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
    // 0x002A494C: nop

    // 0x002A4950: mult        $a3, $t0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4954: srl         $v0, $t3, 16
    ctx->r2 = S32(U32(ctx->r11) >> 16);
    // 0x002A4958: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A495C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4960: mflo        $a1
    ctx->r5 = lo;
    // 0x002A4964: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4968: beql        $v0, $zero, L_002A4998
    if (ctx->r2 == 0) {
        // 0x002A496C: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4998;
    }
    goto skip_5;
    // 0x002A496C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_5:
    // 0x002A4970: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A4974: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A4978: bne         $v0, $zero, L_002A4994
    if (ctx->r2 != 0) {
        // 0x002A497C: addiu       $a3, $a3, -0x1
        ctx->r7 = ADD32(ctx->r7, -0X1);
            goto L_002A4994;
    }
    // 0x002A497C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4980: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A4984: beql        $v0, $zero, L_002A4998
    if (ctx->r2 == 0) {
        // 0x002A4988: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_002A4998;
    }
    goto skip_6;
    // 0x002A4988: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    skip_6:
    // 0x002A498C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x002A4990: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
L_002A4994:
    // 0x002A4994: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_002A4998:
    // 0x002A4998: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A499C: bne         $a2, $zero, L_002A49A8
    if (ctx->r6 != 0) {
        // 0x002A49A0: nop
    
            goto L_002A49A8;
    }
    // 0x002A49A0: nop

    // 0x002A49A4: break       7
    do_break(2771364);
L_002A49A8:
    // 0x002A49A8: mflo        $a0
    ctx->r4 = lo;
    // 0x002A49AC: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A49B0: nop

    // 0x002A49B4: nop

    // 0x002A49B8: mult        $a0, $t0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A49BC: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x002A49C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A49C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A49C8: mflo        $a1
    ctx->r5 = lo;
    // 0x002A49CC: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A49D0: beq         $v0, $zero, L_002A49F0
    if (ctx->r2 == 0) {
        // 0x002A49D4: addu        $v1, $v1, $t1
        ctx->r3 = ADD32(ctx->r3, ctx->r9);
            goto L_002A49F0;
    }
    // 0x002A49D4: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x002A49D8: sltu        $v0, $v1, $t1
    ctx->r2 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x002A49DC: bne         $v0, $zero, L_002A49F0
    if (ctx->r2 != 0) {
        // 0x002A49E0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A49F0;
    }
    // 0x002A49E0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x002A49E4: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x002A49E8: bnel        $v0, $zero, L_002A49F0
    if (ctx->r2 != 0) {
        // 0x002A49EC: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_002A49F0;
    }
    goto skip_7;
    // 0x002A49EC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_7:
L_002A49F0:
    // 0x002A49F0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x002A49F4: j           L_002A4BC0
    // 0x002A49F8: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
        goto L_002A4BC0;
    // 0x002A49F8: or          $a2, $v0, $a0
    ctx->r6 = ctx->r2 | ctx->r4;
L_002A49FC:
    // 0x002A49FC: sltu        $v0, $a0, $t0
    ctx->r2 = ctx->r4 < ctx->r8 ? 1 : 0;
    // 0x002A4A00: beq         $v0, $zero, L_002A4A10
    if (ctx->r2 == 0) {
        // 0x002A4A04: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_002A4A10;
    }
    // 0x002A4A04: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002A4A08: j           L_002A4BBC
    // 0x002A4A0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_002A4BBC;
    // 0x002A4A0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_002A4A10:
    // 0x002A4A10: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4A14: bne         $v0, $zero, L_002A4A2C
    if (ctx->r2 != 0) {
        // 0x002A4A18: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_002A4A2C;
    }
    // 0x002A4A18: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x002A4A1C: sltiu       $v0, $t0, 0x100
    ctx->r2 = ctx->r8 < 0X100 ? 1 : 0;
    // 0x002A4A20: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x002A4A24: j           L_002A4A44
    // 0x002A4A28: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
        goto L_002A4A44;
    // 0x002A4A28: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
L_002A4A2C:
    // 0x002A4A2C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x002A4A30: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x002A4A34: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x002A4A38: bne         $v0, $zero, L_002A4A44
    if (ctx->r2 != 0) {
        // 0x002A4A3C: addiu       $a2, $zero, 0x18
        ctx->r6 = ADD32(0, 0X18);
            goto L_002A4A44;
    }
    // 0x002A4A3C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x002A4A40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_002A4A44:
    // 0x002A4A44: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002A4A48: addiu       $v0, $v0, -0x5170
    ctx->r2 = ADD32(ctx->r2, -0X5170);
    // 0x002A4A4C: srlv        $v1, $v1, $a2
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r6 & 31));
    // 0x002A4A50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x002A4A54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x002A4A58: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x002A4A5C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x002A4A60: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x002A4A64: bne         $a2, $zero, L_002A4A8C
    if (ctx->r6 != 0) {
        // 0x002A4A68: subu        $a1, $v1, $a2
        ctx->r5 = SUB32(ctx->r3, ctx->r6);
            goto L_002A4A8C;
    }
    // 0x002A4A68: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    // 0x002A4A6C: sltu        $v0, $t0, $a0
    ctx->r2 = ctx->r8 < ctx->r4 ? 1 : 0;
    // 0x002A4A70: bne         $v0, $zero, L_002A4BBC
    if (ctx->r2 != 0) {
        // 0x002A4A74: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_002A4BBC;
    }
    // 0x002A4A74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x002A4A78: sltu        $v0, $t3, $t1
    ctx->r2 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x002A4A7C: bne         $v0, $zero, L_002A4BBC
    if (ctx->r2 != 0) {
        // 0x002A4A80: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_002A4BBC;
    }
    // 0x002A4A80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002A4A84: j           L_002A4BBC
    // 0x002A4A88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_002A4BBC;
    // 0x002A4A88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_002A4A8C:
    // 0x002A4A8C: sllv        $v1, $t0, $a2
    ctx->r3 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x002A4A90: srlv        $v0, $t1, $a1
    ctx->r2 = S32(U32(ctx->r9) >> (ctx->r5 & 31));
    // 0x002A4A94: or          $t0, $v1, $v0
    ctx->r8 = ctx->r3 | ctx->r2;
    // 0x002A4A98: sllv        $t1, $t1, $a2
    ctx->r9 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x002A4A9C: srlv        $a3, $a0, $a1
    ctx->r7 = S32(U32(ctx->r4) >> (ctx->r5 & 31));
    // 0x002A4AA0: sllv        $v1, $a0, $a2
    ctx->r3 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x002A4AA4: srlv        $v0, $t3, $a1
    ctx->r2 = S32(U32(ctx->r11) >> (ctx->r5 & 31));
    // 0x002A4AA8: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x002A4AAC: sllv        $t3, $t3, $a2
    ctx->r11 = S32(ctx->r11 << (ctx->r6 & 31));
    // 0x002A4AB0: srl         $a2, $t0, 16
    ctx->r6 = S32(U32(ctx->r8) >> 16);
    // 0x002A4AB4: divu        $zero, $a3, $a2
    lo = S32(U32(ctx->r7) / U32(ctx->r6)); hi = S32(U32(ctx->r7) % U32(ctx->r6));
    // 0x002A4AB8: bne         $a2, $zero, L_002A4AC4
    if (ctx->r6 != 0) {
        // 0x002A4ABC: nop
    
            goto L_002A4AC4;
    }
    // 0x002A4ABC: nop

    // 0x002A4AC0: break       7
    do_break(2771648);
L_002A4AC4:
    // 0x002A4AC4: mflo        $t2
    ctx->r10 = lo;
    // 0x002A4AC8: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4ACC: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x002A4AD0: nop

    // 0x002A4AD4: mult        $t2, $a1
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4AD8: srl         $v0, $a0, 16
    ctx->r2 = S32(U32(ctx->r4) >> 16);
    // 0x002A4ADC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4AE0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4AE4: mflo        $a3
    ctx->r7 = lo;
    // 0x002A4AE8: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A4AEC: beql        $v0, $zero, L_002A4B1C
    if (ctx->r2 == 0) {
        // 0x002A4AF0: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A4B1C;
    }
    goto skip_8;
    // 0x002A4AF0: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_8:
    // 0x002A4AF4: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4AF8: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4AFC: bne         $v0, $zero, L_002A4B18
    if (ctx->r2 != 0) {
        // 0x002A4B00: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_002A4B18;
    }
    // 0x002A4B00: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x002A4B04: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A4B08: beql        $v0, $zero, L_002A4B1C
    if (ctx->r2 == 0) {
        // 0x002A4B0C: subu        $v1, $v1, $a3
        ctx->r3 = SUB32(ctx->r3, ctx->r7);
            goto L_002A4B1C;
    }
    goto skip_9;
    // 0x002A4B0C: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    skip_9:
    // 0x002A4B10: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x002A4B14: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
L_002A4B18:
    // 0x002A4B18: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
L_002A4B1C:
    // 0x002A4B1C: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x002A4B20: bne         $a2, $zero, L_002A4B2C
    if (ctx->r6 != 0) {
        // 0x002A4B24: nop
    
            goto L_002A4B2C;
    }
    // 0x002A4B24: nop

    // 0x002A4B28: break       7
    do_break(2771752);
L_002A4B2C:
    // 0x002A4B2C: mflo        $a2
    ctx->r6 = lo;
    // 0x002A4B30: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4B34: nop

    // 0x002A4B38: nop

    // 0x002A4B3C: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4B40: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x002A4B44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x002A4B48: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x002A4B4C: mflo        $a3
    ctx->r7 = lo;
    // 0x002A4B50: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A4B54: beq         $v0, $zero, L_002A4B84
    if (ctx->r2 == 0) {
        // 0x002A4B58: sll         $v0, $t2, 16
        ctx->r2 = S32(ctx->r10 << 16);
            goto L_002A4B84;
    }
    // 0x002A4B58: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x002A4B5C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x002A4B60: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x002A4B64: bne         $v0, $zero, L_002A4B80
    if (ctx->r2 != 0) {
        // 0x002A4B68: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_002A4B80;
    }
    // 0x002A4B68: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A4B6C: sltu        $v0, $v1, $a3
    ctx->r2 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x002A4B70: beq         $v0, $zero, L_002A4B84
    if (ctx->r2 == 0) {
        // 0x002A4B74: sll         $v0, $t2, 16
        ctx->r2 = S32(ctx->r10 << 16);
            goto L_002A4B84;
    }
    // 0x002A4B74: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x002A4B78: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x002A4B7C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
L_002A4B80:
    // 0x002A4B80: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
L_002A4B84:
    // 0x002A4B84: or          $a2, $v0, $a2
    ctx->r6 = ctx->r2 | ctx->r6;
    // 0x002A4B88: subu        $a0, $v1, $a3
    ctx->r4 = SUB32(ctx->r3, ctx->r7);
    // 0x002A4B8C: multu       $a2, $t1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x002A4B90: mfhi        $v1
    ctx->r3 = hi;
    // 0x002A4B94: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x002A4B98: mflo        $t0
    ctx->r8 = lo;
    // 0x002A4B9C: bnel        $v0, $zero, L_002A4BBC
    if (ctx->r2 != 0) {
        // 0x002A4BA0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_002A4BBC;
    }
    goto skip_10;
    // 0x002A4BA0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    skip_10:
    // 0x002A4BA4: bne         $v1, $a0, L_002A4BC0
    if (ctx->r3 != ctx->r4) {
        // 0x002A4BA8: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_002A4BC0;
    }
    // 0x002A4BA8: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x002A4BAC: sltu        $v0, $t3, $t0
    ctx->r2 = ctx->r11 < ctx->r8 ? 1 : 0;
    // 0x002A4BB0: beq         $v0, $zero, L_002A4BC4
    if (ctx->r2 == 0) {
        // 0x002A4BB4: addu        $t5, $a2, $zero
        ctx->r13 = ADD32(ctx->r6, 0);
            goto L_002A4BC4;
    }
    // 0x002A4BB4: addu        $t5, $a2, $zero
    ctx->r13 = ADD32(ctx->r6, 0);
    // 0x002A4BB8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_002A4BBC:
    // 0x002A4BBC: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
L_002A4BC0:
    // 0x002A4BC0: addu        $t5, $a2, $zero
    ctx->r13 = ADD32(ctx->r6, 0);
L_002A4BC4:
    // 0x002A4BC4: addu        $t4, $t2, $zero
    ctx->r12 = ADD32(ctx->r10, 0);
    // 0x002A4BC8: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
    // 0x002A4BCC: jr          $ra
    // 0x002A4BD0: addu        $v1, $t5, $zero
    ctx->r3 = ADD32(ctx->r13, 0);
    return;
    // 0x002A4BD0: addu        $v1, $t5, $zero
    ctx->r3 = ADD32(ctx->r13, 0);
;}
RECOMP_FUNC void func_0026D288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D288: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D28C: bne         $v0, $zero, L_0026D2A8
    if (ctx->r2 != 0) {
        // 0x0026D290: nop
    
            goto L_0026D2A8;
    }
    // 0x0026D290: nop

    // 0x0026D294: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0026D298: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x0026D29C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0026D2A0: j           L_0026D2C0
    // 0x0026D2A4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
        goto L_0026D2C0;
    // 0x0026D2A4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
L_0026D2A8:
    // 0x0026D2A8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D2AC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0026D2B0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0026D2B4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x0026D2B8: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x0026D2BC: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
L_0026D2C0:
    // 0x0026D2C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D2C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026D2C8: jr          $ra
    // 0x0026D2CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x0026D2CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0041BD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041BD64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041BD68: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041BD6C: addiu       $a0, $a0, 0x5C78
    ctx->r4 = ADD32(ctx->r4, 0X5C78);
    // 0x0041BD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041BD74: jal         0x00285628
    // 0x0041BD78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0041BD78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0041BD7C: beq         $v0, $zero, L_0041BDD4
    if (ctx->r2 == 0) {
        // 0x0041BD80: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_0041BDD4;
    }
    // 0x0041BD80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0041BD84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041BD88: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x0041BD8C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041BD90: beq         $v1, $a1, L_0041BDCC
    if (ctx->r3 == ctx->r5) {
        // 0x0041BD94: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0041BDCC;
    }
    // 0x0041BD94: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0041BD98: beq         $v0, $zero, L_0041BDB0
    if (ctx->r2 == 0) {
        // 0x0041BD9C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BDB0;
    }
    // 0x0041BD9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BDA0: beq         $v1, $v0, L_0041BDC4
    if (ctx->r3 == ctx->r2) {
        // 0x0041BDA4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0041BDC4;
    }
    // 0x0041BDA4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BDA8: j           L_0041BDD4
    // 0x0041BDAC: nop

        goto L_0041BDD4;
    // 0x0041BDAC: nop

L_0041BDB0:
    // 0x0041BDB0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BDB4: beql        $v1, $v0, L_0041BDD4
    if (ctx->r3 == ctx->r2) {
        // 0x0041BDB8: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0041BDD4;
    }
    goto skip_0;
    // 0x0041BDB8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_0:
    // 0x0041BDBC: j           L_0041BDD4
    // 0x0041BDC0: nop

        goto L_0041BDD4;
    // 0x0041BDC0: nop

L_0041BDC4:
    // 0x0041BDC4: j           L_0041BDD4
    // 0x0041BDC8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_0041BDD4;
    // 0x0041BDC8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0041BDCC:
    // 0x0041BDCC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BDD0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0041BDD4:
    // 0x0041BDD4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0041BDD8: addiu       $s0, $s0, 0x5C78
    ctx->r16 = ADD32(ctx->r16, 0X5C78);
    // 0x0041BDDC: jal         0x00285670
    // 0x0041BDE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0041BDE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041BDE4: bne         $v0, $zero, L_0041BDFC
    if (ctx->r2 != 0) {
        // 0x0041BDE8: nop
    
            goto L_0041BDFC;
    }
    // 0x0041BDE8: nop

    // 0x0041BDEC: jal         0x002855E8
    // 0x0041BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002855E8(rdram, ctx);
        goto after_2;
    // 0x0041BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041BDF4: beq         $v0, $zero, L_0041BE48
    if (ctx->r2 == 0) {
        // 0x0041BDF8: nop
    
            goto L_0041BE48;
    }
    // 0x0041BDF8: nop

L_0041BDFC:
    // 0x0041BDFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041BE00: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x0041BE04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0041BE08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0041BE0C: beq         $v1, $a1, L_0041BE40
    if (ctx->r3 == ctx->r5) {
        // 0x0041BE10: sltiu       $v0, $v1, 0x11
        ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
            goto L_0041BE40;
    }
    // 0x0041BE10: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x0041BE14: beq         $v0, $zero, L_0041BE2C
    if (ctx->r2 == 0) {
        // 0x0041BE18: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BE2C;
    }
    // 0x0041BE18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE1C: beql        $v1, $v0, L_0041BE48
    if (ctx->r3 == ctx->r2) {
        // 0x0041BE20: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_0041BE48;
    }
    goto skip_1;
    // 0x0041BE20: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    skip_1:
    // 0x0041BE24: j           L_0041BE48
    // 0x0041BE28: nop

        goto L_0041BE48;
    // 0x0041BE28: nop

L_0041BE2C:
    // 0x0041BE2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0041BE30: beq         $v1, $v0, L_0041BE44
    if (ctx->r3 == ctx->r2) {
        // 0x0041BE34: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0041BE44;
    }
    // 0x0041BE34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0041BE38: j           L_0041BE48
    // 0x0041BE3C: nop

        goto L_0041BE48;
    // 0x0041BE3C: nop

L_0041BE40:
    // 0x0041BE40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0041BE44:
    // 0x0041BE44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_0041BE48:
    // 0x0041BE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041BE4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041BE50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041BE54: jr          $ra
    // 0x0041BE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041BE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002534D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002534D0: jr          $ra
    // 0x002534D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002534D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00265F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00265F94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00265F98: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00265F9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x00265FA0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00265FA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00265FA8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x00265FAC: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x00265FB0: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x00265FB4: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x00265FB8: beq         $a1, $zero, L_00266084
    if (ctx->r5 == 0) {
        // 0x00265FBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00266084;
    }
    // 0x00265FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265FC0: lb          $v0, 0x34($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X34);
    // 0x00265FC4: bne         $v0, $zero, L_00266084
    if (ctx->r2 != 0) {
        // 0x00265FC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00266084;
    }
    // 0x00265FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265FCC: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x00265FD0: bne         $v1, $v0, L_00266084
    if (ctx->r3 != ctx->r2) {
        // 0x00265FD4: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00266084;
    }
    // 0x00265FD4: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00265FD8: lw          $v0, 0xD4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD4);
    // 0x00265FDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00265FE0: beq         $v0, $zero, L_00266084
    if (ctx->r2 == 0) {
        // 0x00265FE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00266084;
    }
    // 0x00265FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00265FE8: lw          $s0, 0x1A8($a2)
    ctx->r16 = MEM_W(ctx->r6, 0X1A8);
    // 0x00265FEC: jal         0x00253720
    // 0x00265FF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00253720(rdram, ctx);
        goto after_0;
    // 0x00265FF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00265FF4: beq         $v0, $zero, L_00266010
    if (ctx->r2 == 0) {
        // 0x00265FF8: nop
    
            goto L_00266010;
    }
    // 0x00265FF8: nop

    // 0x00265FFC: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x00266000: jal         0x002536E0
    // 0x00266004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002536E0(rdram, ctx);
        goto after_1;
    // 0x00266004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00266008: j           L_00266084
    // 0x0026600C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00266084;
    // 0x0026600C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00266010:
    // 0x00266010: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x00266014: beql        $v0, $zero, L_00266084
    if (ctx->r2 == 0) {
        // 0x00266018: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00266084;
    }
    goto skip_0;
    // 0x00266018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0026601C: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00266020: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x00266024: addiu       $a1, $a1, -0x6710
    ctx->r5 = ADD32(ctx->r5, -0X6710);
    // 0x00266028: bnel        $a0, $zero, L_00266030
    if (ctx->r4 != 0) {
        // 0x0026602C: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_00266030;
    }
    goto skip_1;
    // 0x0026602C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    skip_1:
L_00266030:
    // 0x00266030: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00266034: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00266038: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0026603C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00266040: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00266044: lw          $a2, 0x69D8($at)
    ctx->r6 = MEM_W(ctx->r1, 0X69D8);
    // 0x00266048: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026604C: lwc1        $f0, 0x7CA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7CA0);
    // 0x00266050: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x00266054: jal         0x002817A0
    // 0x00266058: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002817A0(rdram, ctx);
        goto after_2;
    // 0x00266058: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x0026605C: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x00266060: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00266064: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00266068: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0026606C: lw          $a0, 0x69DC($at)
    ctx->r4 = MEM_W(ctx->r1, 0X69DC);
    // 0x00266070: beq         $a0, $zero, L_00266084
    if (ctx->r4 == 0) {
        // 0x00266074: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00266084;
    }
    // 0x00266074: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00266078: jal         0x0027580C
    // 0x0026607C: nop

    func_0027580C(rdram, ctx);
        goto after_3;
    // 0x0026607C: nop

    after_3:
    // 0x00266080: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00266084:
    // 0x00266084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00266088: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0026608C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00266090: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00266094: jr          $ra
    // 0x00266098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00266098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00451368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451368: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045136C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00451370: lw          $a2, 0x1C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X1C);
    // 0x00451374: lw          $v1, 0x518($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X518);
    // 0x00451378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045137C: sw          $v0, 0xBF4($a2)
    MEM_W(0XBF4, ctx->r6) = ctx->r2;
    // 0x00451380: sb          $zero, 0x30($v1)
    MEM_B(0X30, ctx->r3) = 0;
    // 0x00451384: lw          $v0, 0x514($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X514);
    // 0x00451388: lw          $a0, 0x51C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X51C);
    // 0x0045138C: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00451390: addiu       $a1, $a1, -0x78D8
    ctx->r5 = ADD32(ctx->r5, -0X78D8);
    // 0x00451394: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451398: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x0045139C: jal         0x00416644
    // 0x004513A0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_0;
    // 0x004513A0: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_0:
    // 0x004513A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004513A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004513AC: jr          $ra
    // 0x004513B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004513B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0026FD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026FD4C: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x0026FD50: addiu       $v1, $v1, 0x2790
    ctx->r3 = ADD32(ctx->r3, 0X2790);
    // 0x0026FD54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0026FD58: bne         $v0, $zero, L_0026FD78
    if (ctx->r2 != 0) {
        // 0x0026FD5C: nop
    
            goto L_0026FD78;
    }
    // 0x0026FD5C: nop

    // 0x0026FD60: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0026FD64: addiu       $v0, $v0, 0x22C8
    ctx->r2 = ADD32(ctx->r2, 0X22C8);
    // 0x0026FD68: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0026FD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0026FD70: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0026FD74: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_0026FD78:
    // 0x0026FD78: lui         $v0, 0x27
    ctx->r2 = S32(0X27 << 16);
    // 0x0026FD7C: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x0026FD80: jr          $ra
    // 0x0026FD84: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x0026FD84: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_0020EF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020EF2C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x0020EF30: lwc1        $f1, 0x0($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x0020EF34: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020EF38: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x0020EF3C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0020EF40: lwc1        $f1, 0x4($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x0020EF44: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020EF48: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x0020EF4C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020EF50: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x0020EF54: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020EF58: jr          $ra
    // 0x0020EF5C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0020EF5C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00211250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00211250: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x00211254: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00211258: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0021125C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00211260: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00211264: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00211268: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0021126C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x00211270: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x00211274: lwc1        $f3, 0x4($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x00211278: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0021127C: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x00211280: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x00211284: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x00211288: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0021128C: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00211290: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x00211294: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00211298: add.s       $f12, $f12, $f3
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f3.fl;
    // 0x0021129C: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x002112A0: jal         0x0021153C
    // 0x002112A4: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    func_0021153C(rdram, ctx);
        goto after_0;
    // 0x002112A4: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    after_0:
    // 0x002112A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x002112AC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x002112B0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x002112B4: nop

    // 0x002112B8: bc1t        L_00211368
    if (c1cs) {
        // 0x002112BC: nop
    
            goto L_00211368;
    }
    // 0x002112BC: nop

    // 0x002112C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002112C4: lwc1        $f0, 0x5658($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5658);
    // 0x002112C8: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x002112CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002112D0: lwc1        $f1, 0x565C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X565C);
    // 0x002112D4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002112D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002112DC: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002112E0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002112E4: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x002112E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002112EC: lwc1        $f3, 0x5660($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X5660);
    // 0x002112F0: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002112F4: sub.s       $f1, $f3, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f0.fl;
    // 0x002112F8: c.lt.s      $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl < ctx->f1.fl;
    // 0x002112FC: nop

    // 0x00211300: bc1t        L_0021131C
    if (c1cs) {
        // 0x00211304: mov.s       $f0, $f3
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
            goto L_0021131C;
    }
    // 0x00211304: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
    // 0x00211308: c.lt.s      $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl < ctx->f4.fl;
    // 0x0021130C: nop

    // 0x00211310: bc1t        L_00211334
    if (c1cs) {
        // 0x00211314: mov.s       $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
            goto L_00211334;
    }
    // 0x00211314: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    // 0x00211318: mov.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    ctx->f0.fl = ctx->f3.fl;
L_0021131C:
    // 0x0021131C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00211320: nop

    // 0x00211324: bc1fl       L_00211334
    if (!c1cs) {
        // 0x00211328: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_00211334;
    }
    goto skip_0;
    // 0x00211328: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
    // 0x0021132C: j           L_00211338
    // 0x00211330: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_00211338;
    // 0x00211330: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00211334:
    // 0x00211334: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_00211338:
    // 0x00211338: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0021133C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00211340: jal         0x0020DCC8
    // 0x00211344: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_0020DCC8(rdram, ctx);
        goto after_1;
    // 0x00211344: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00211348: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x0021134C: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x00211350: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00211354: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00211358: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0021135C: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x00211360: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x00211364: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
L_00211368:
    // 0x00211368: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x0021136C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00211370: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00211374: jr          $ra
    // 0x00211378: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x00211378: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_004182E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004182E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004182EC: jal         0x00416558
    // 0x004182F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00416558(rdram, ctx);
        goto after_0;
    // 0x004182F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x004182F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004182F8: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x004182FC: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x00418300: jal         0x0042E430
    // 0x00418304: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    func_0042E430(rdram, ctx);
        goto after_1;
    // 0x00418304: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    after_1:
    // 0x00418308: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x0041830C: lb          $a2, 0x30($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X30);
    // 0x00418310: jal         0x00416214
    // 0x00418314: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00416214(rdram, ctx);
        goto after_2;
    // 0x00418314: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x00418318: j           L_00418360
    // 0x0041831C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_00418360;
    // 0x0041831C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418320: lb          $a1, 0x30($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X30);
    // 0x00418324: jal         0x0042E430
    // 0x00418328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0042E430(rdram, ctx);
        goto after_3;
    // 0x00418328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x0041832C: lw          $v0, 0x520($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X520);
    // 0x00418330: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00418334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418338: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041833C: lh          $a0, 0x1E7A($at)
    ctx->r4 = MEM_H(ctx->r1, 0X1E7A);
    // 0x00418340: jal         0x00275624
    // 0x00418344: nop

    func_00275624(rdram, ctx);
        goto after_4;
    // 0x00418344: nop

    after_4:
    // 0x00418348: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041834C: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00418350: addiu       $a2, $a2, -0x78B8
    ctx->r6 = ADD32(ctx->r6, -0X78B8);
    // 0x00418354: jal         0x00416894
    // 0x00418358: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00416894(rdram, ctx);
        goto after_5;
    // 0x00418358: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041835C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00418360:
    // 0x00418360: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00418364: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00418368: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0041836C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00418370: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00418374: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418378: jr          $ra
    // 0x0041837C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041837C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0020565C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020565C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205660: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00205664: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00205668: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x0020566C: addiu       $s1, $s1, -0x7DE8
    ctx->r17 = ADD32(ctx->r17, -0X7DE8);
    // 0x00205670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00205674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00205678: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x0020567C: jal         0x0029DFF0
    // 0x00205680: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205680: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00205684: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00205688: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020568C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205694: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00205698: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020569C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002056A0: beq         $v1, $v0, L_002056C8
    if (ctx->r3 == ctx->r2) {
        // 0x002056A4: nop
    
            goto L_002056C8;
    }
    // 0x002056A4: nop

    // 0x002056A8: jal         0x0029E010
    // 0x002056AC: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002056AC: nop

    after_1:
    // 0x002056B0: addiu       $a0, $s1, 0xB98
    ctx->r4 = ADD32(ctx->r17, 0XB98);
    // 0x002056B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002056B8: jal         0x0029B6F0
    // 0x002056BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002056BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002056C0: j           L_002056D4
    // 0x002056C4: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
        goto L_002056D4;
    // 0x002056C4: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
L_002056C8:
    // 0x002056C8: jal         0x0029E010
    // 0x002056CC: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x002056CC: nop

    after_3:
    // 0x002056D0: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
L_002056D4:
    // 0x002056D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002056D8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x002056DC: lw          $v0, -0x7DF8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7DF8);
    // 0x002056E0: beq         $v0, $zero, L_00205724
    if (ctx->r2 == 0) {
        // 0x002056E4: nop
    
            goto L_00205724;
    }
    // 0x002056E4: nop

    // 0x002056E8: beq         $s0, $zero, L_002056F4
    if (ctx->r16 == 0) {
        // 0x002056EC: addiu       $v1, $zero, 0x200
        ctx->r3 = ADD32(0, 0X200);
            goto L_002056F4;
    }
    // 0x002056EC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x002056F0: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
L_002056F4:
    // 0x002056F4: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x002056F8: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x002056FC: bne         $v0, $zero, L_00205724
    if (ctx->r2 != 0) {
        // 0x00205700: or          $v0, $a0, $v1
        ctx->r2 = ctx->r4 | ctx->r3;
            goto L_00205724;
    }
    // 0x00205700: or          $v0, $a0, $v1
    ctx->r2 = ctx->r4 | ctx->r3;
    // 0x00205704: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x00205708: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020570C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00205710: lw          $v0, -0x725C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X725C);
    // 0x00205714: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00205718: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020571C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00205720: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
L_00205724:
    // 0x00205724: jal         0x0029DFF0
    // 0x00205728: nop

    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x00205728: nop

    after_4:
    // 0x0020572C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205730: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205734: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00205738: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020573C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205740: beq         $v1, $zero, L_0020576C
    if (ctx->r3 == 0) {
        // 0x00205744: nop
    
            goto L_0020576C;
    }
    // 0x00205744: nop

    // 0x00205748: jal         0x0029E010
    // 0x0020574C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x0020574C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00205750: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205754: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205758: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0020575C: jal         0x0029B820
    // 0x00205760: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x00205760: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x00205764: j           L_00205774
    // 0x00205768: nop

        goto L_00205774;
    // 0x00205768: nop

L_0020576C:
    // 0x0020576C: jal         0x0029E010
    // 0x00205770: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00205770: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
L_00205774:
    // 0x00205774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00205778: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0020577C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00205780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00205784: jr          $ra
    // 0x00205788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00446BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00446BC8: jr          $ra
    // 0x00446BCC: nop

    return;
    // 0x00446BCC: nop

;}
RECOMP_FUNC void func_002698AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002698AC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x002698B0: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x002698B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002698B8: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x002698BC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002698C0: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x002698C4: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x002698C8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x002698CC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x002698D0: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
L_002698D4:
    // 0x002698D4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002698D8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x002698DC: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x002698E0: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x002698E4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x002698E8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x002698EC: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x002698F0: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x002698F4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x002698F8: bne         $v0, $a0, L_002698D4
    if (ctx->r2 != ctx->r4) {
        // 0x002698FC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_002698D4;
    }
    // 0x002698FC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00269900: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00269904: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00269908: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x0026990C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00269910: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00269914: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00269918: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0026991C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x00269920: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x00269924: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x00269928: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x0026992C: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x00269930: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x00269934: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x00269938: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x0026993C: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x00269940: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x00269944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00269948: sb          $v0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r2;
    // 0x0026994C: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x00269950: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x00269954: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00269958: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x0026995C: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x00269960: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x00269964: jal         0x00239F00
    // 0x00269968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_0;
    // 0x00269968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0026996C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00269970: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x00269974: addiu       $v1, $sp, 0x48
    ctx->r3 = ADD32(ctx->r29, 0X48);
L_00269978:
    // 0x00269978: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0026997C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00269980: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00269984: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00269988: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x0026998C: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00269990: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00269994: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x00269998: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0026999C: bne         $v0, $v1, L_00269978
    if (ctx->r2 != ctx->r3) {
        // 0x002699A0: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00269978;
    }
    // 0x002699A0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x002699A4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x002699A8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x002699AC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002699B0: addiu       $a0, $a0, 0x1CE0
    ctx->r4 = ADD32(ctx->r4, 0X1CE0);
    // 0x002699B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002699B8: bne         $v0, $zero, L_002699CC
    if (ctx->r2 != 0) {
        // 0x002699BC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_002699CC;
    }
    // 0x002699BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x002699C0: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x002699C4: beq         $v0, $zero, L_002699D0
    if (ctx->r2 == 0) {
        // 0x002699C8: nop
    
            goto L_002699D0;
    }
    // 0x002699C8: nop

L_002699CC:
    // 0x002699CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_002699D0:
    // 0x002699D0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x002699D4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x002699D8: xori        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 ^ 0X1;
    // 0x002699DC: jr          $ra
    // 0x002699E0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x002699E0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_004169C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004169C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x004169CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x004169D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x004169D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x004169D8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x004169DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x004169E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x004169E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004169E8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x004169EC: beq         $s0, $zero, L_00416A84
    if (ctx->r16 == 0) {
        // 0x004169F0: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_00416A84;
    }
    // 0x004169F0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x004169F4: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x004169F8: addiu       $s3, $s3, -0x61D4
    ctx->r19 = ADD32(ctx->r19, -0X61D4);
L_004169FC:
    // 0x004169FC: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x00416A00: lw          $s2, 0x1D4($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X1D4);
    // 0x00416A04: bne         $v0, $s4, L_00416A24
    if (ctx->r2 != ctx->r20) {
        // 0x00416A08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00416A24;
    }
    // 0x00416A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416A0C: beq         $s1, $s3, L_00416A24
    if (ctx->r17 == ctx->r19) {
        // 0x00416A10: nop
    
            goto L_00416A24;
    }
    // 0x00416A10: nop

    // 0x00416A14: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x00416A18: bnel        $v0, $zero, L_00416A7C
    if (ctx->r2 != 0) {
        // 0x00416A1C: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_00416A7C;
    }
    goto skip_0;
    // 0x00416A1C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00416A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00416A24:
    // 0x00416A24: jal         0x0041531C
    // 0x00416A28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0041531C(rdram, ctx);
        goto after_0;
    // 0x00416A28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00416A2C: beql        $v0, $zero, L_00416A7C
    if (ctx->r2 == 0) {
        // 0x00416A30: addu        $s0, $s2, $zero
        ctx->r16 = ADD32(ctx->r18, 0);
            goto L_00416A7C;
    }
    goto skip_1;
    // 0x00416A30: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    skip_1:
    // 0x00416A34: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00416A38: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x00416A3C: beql        $v0, $zero, L_00416A54
    if (ctx->r2 == 0) {
        // 0x00416A40: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00416A54;
    }
    goto skip_2;
    // 0x00416A40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_2:
    // 0x00416A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416A48: jalr        $v0
    // 0x00416A4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00416A4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00416A50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00416A54:
    // 0x00416A54: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00416A58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00416A5C: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x00416A60: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x00416A64: jal         0x00200738
    // 0x00416A68: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    func_00200738(rdram, ctx);
        goto after_2;
    // 0x00416A68: sw          $zero, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = 0;
    after_2:
    // 0x00416A6C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x00416A70: jal         0x002052D8
    // 0x00416A74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x00416A74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x00416A78: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_00416A7C:
    // 0x00416A7C: bne         $s0, $zero, L_004169FC
    if (ctx->r16 != 0) {
        // 0x00416A80: nop
    
            goto L_004169FC;
    }
    // 0x00416A80: nop

L_00416A84:
    // 0x00416A84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00416A88: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00416A8C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00416A90: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00416A94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00416A98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00416A9C: jr          $ra
    // 0x00416AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00416AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0023C240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C240: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0023C244: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023C248: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C24C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C250: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0023C254: jal         0x0020EF2C
    // 0x0023C258: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023C258: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0023C25C: lwc1        $f2, 0x30($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0023C260: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023C264: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C268: lwc1        $f3, 0x34($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0023C26C: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0023C270: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023C274: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023C278: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x0023C27C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C280: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0023C284: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0023C288: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023C28C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x0023C290: nop

    // 0x0023C294: bc1t        L_0023C2A0
    if (c1cs) {
        // 0x0023C298: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023C2A0;
    }
    // 0x0023C298: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023C29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023C2A0:
    // 0x0023C2A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0023C2A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023C2A8: jr          $ra
    // 0x0023C2AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0023C2AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00213684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00213684: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00213688: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0021368C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00213690: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00213694: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00213698: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0021369C: jal         0x002017D4
    // 0x002136A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002136A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x002136A4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002136A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002136AC: beq         $v0, $zero, L_00213748
    if (ctx->r2 == 0) {
        // 0x002136B0: nop
    
            goto L_00213748;
    }
    // 0x002136B0: nop

    // 0x002136B4: jal         0x002017D4
    // 0x002136B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x002136B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x002136BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002136C0: blez        $s0, L_00213748
    if (SIGNED(ctx->r16) <= 0) {
        // 0x002136C4: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00213748;
    }
    // 0x002136C4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002136C8: lui         $t0, 0xFF
    ctx->r8 = S32(0XFF << 16);
    // 0x002136CC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x002136D0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
L_002136D4:
    // 0x002136D4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x002136D8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x002136DC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x002136E0: lwc1        $f3, 0x0($a2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r6, 0X0);
    // 0x002136E4: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x002136E8: lwc1        $f1, 0x8($a2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r6, 0X8);
    // 0x002136EC: and         $v0, $a0, $t0
    ctx->r2 = ctx->r4 & ctx->r8;
    // 0x002136F0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x002136F4: sra         $v0, $v0, 23
    ctx->r2 = S32(SIGNED(ctx->r2) >> 23);
    // 0x002136F8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x002136FC: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x00213700: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x00213704: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x00213708: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021370C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213710: add.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x00213714: sra         $a0, $a0, 23
    ctx->r4 = S32(SIGNED(ctx->r4) >> 23);
    // 0x00213718: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x0021371C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00213720: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x00213724: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x00213728: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0021372C: slt         $v0, $a1, $s0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x00213730: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00213734: swc1        $f3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f_odd[(3 - 1) * 2];
    // 0x00213738: swc1        $f2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f2.u32l;
    // 0x0021373C: swc1        $f1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x00213740: bne         $v0, $zero, L_002136D4
    if (ctx->r2 != 0) {
        // 0x00213744: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_002136D4;
    }
    // 0x00213744: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_00213748:
    // 0x00213748: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0021374C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00213750: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00213754: jr          $ra
    // 0x00213758: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00213758: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025EAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025EAEC: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
    // 0x0025EAF0: xori        $v0, $v0, 0x259
    ctx->r2 = ctx->r2 ^ 0X259;
    // 0x0025EAF4: jr          $ra
    // 0x0025EAF8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    return;
    // 0x0025EAF8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_0021F2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021F2B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0021F2B4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x0021F2B8: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0021F2BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0021F2C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0021F2C4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x0021F2C8: lw          $v0, 0xD4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD4);
    // 0x0021F2CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0021F2D0: lwc1        $f20, 0x5D18($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5D18);
    // 0x0021F2D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021F2D8: beq         $v0, $zero, L_0021F340
    if (ctx->r2 == 0) {
        // 0x0021F2DC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0021F340;
    }
    // 0x0021F2DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F2E0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x0021F2E4: addiu       $v0, $v0, 0x5AC4
    ctx->r2 = ADD32(ctx->r2, 0X5AC4);
    // 0x0021F2E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0021F2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0021F2F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0021F2F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0021F2F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0021F2FC: lw          $a1, 0xA4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XA4);
    // 0x0021F300: lw          $a2, 0xB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XB0);
    // 0x0021F304: jal         0x0020367C
    // 0x0021F308: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x0021F308: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x0021F30C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0021F310: beq         $s0, $zero, L_0021F344
    if (ctx->r16 == 0) {
        // 0x0021F314: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_0021F344;
    }
    // 0x0021F314: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x0021F318: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0021F31C: jal         0x002017D4
    // 0x0021F320: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0021F320: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x0021F324: lhu         $a0, 0x1E($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X1E);
    // 0x0021F328: jal         0x0026D210
    // 0x0021F32C: nop

    func_0026D210(rdram, ctx);
        goto after_2;
    // 0x0021F32C: nop

    after_2:
    // 0x0021F330: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x0021F334: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0021F338: jal         0x002051F4
    // 0x0021F33C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_3;
    // 0x0021F33C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_0021F340:
    // 0x0021F340: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_0021F344:
    // 0x0021F344: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0021F348: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0021F34C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0021F350: jr          $ra
    // 0x0021F354: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0021F354: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0029A6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029A6E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029A6E8: jal         0x0029DFF0
    // 0x0029A6EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029A6EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x0029A6F0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0029A6F4: lw          $v1, 0x7AC0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7AC0);
    // 0x0029A6F8: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x0029A6FC: jal         0x0029E010
    // 0x0029A700: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0029A700: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0029A704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029A708: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x0029A70C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029A710: jr          $ra
    // 0x0029A714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029A714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00423364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00423364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00423368: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042336C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00423370: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00423374: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00423378: lw          $s0, 0x1C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C);
    // 0x0042337C: jal         0x00284174
    // 0x00423380: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00423380: nop

    after_0:
    // 0x00423384: beq         $v0, $zero, L_004233A0
    if (ctx->r2 == 0) {
        // 0x00423388: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004233A0;
    }
    // 0x00423388: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0042338C: jal         0x00284240
    // 0x00423390: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x00423390: nop

    after_1:
    // 0x00423394: beq         $v0, $zero, L_004233A0
    if (ctx->r2 == 0) {
        // 0x00423398: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_004233A0;
    }
    // 0x00423398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x0042339C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_004233A0:
    // 0x004233A0: bne         $v1, $zero, L_004233D4
    if (ctx->r3 != 0) {
        // 0x004233A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004233D4;
    }
    // 0x004233A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004233A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004233AC: lw          $a2, 0x92C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X92C);
    // 0x004233B0: jal         0x002484F8
    // 0x004233B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002484F8(rdram, ctx);
        goto after_2;
    // 0x004233B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x004233B8: beq         $v0, $zero, L_004233D0
    if (ctx->r2 == 0) {
        // 0x004233BC: sh          $zero, 0x0($s1)
        MEM_H(0X0, ctx->r17) = 0;
            goto L_004233D0;
    }
    // 0x004233BC: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x004233C0: jal         0x00412B14
    // 0x004233C4: nop

    func_00412B14(rdram, ctx);
        goto after_3;
    // 0x004233C4: nop

    after_3:
    // 0x004233C8: jal         0x00412438
    // 0x004233CC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    func_00412438(rdram, ctx);
        goto after_4;
    // 0x004233CC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_4:
L_004233D0:
    // 0x004233D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004233D4:
    // 0x004233D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004233D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004233DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004233E0: jr          $ra
    // 0x004233E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004233E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00447CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447CDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00447CE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00447CE4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00447CE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00447CEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00447CF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00447CF4: lw          $v0, 0x4FC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4FC);
    // 0x00447CF8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00447CFC: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00447D00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00447D04: lw          $v0, 0x2330($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2330);
    // 0x00447D08: beq         $v0, $zero, L_00447D18
    if (ctx->r2 == 0) {
        // 0x00447D0C: nop
    
            goto L_00447D18;
    }
    // 0x00447D0C: nop

    // 0x00447D10: jalr        $v0
    // 0x00447D14: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x00447D14: nop

    after_0:
L_00447D18:
    // 0x00447D18: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00447D1C: blez        $v0, L_00447D44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447D20: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00447D44;
    }
    // 0x00447D20: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00447D24: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_00447D28:
    // 0x00447D28: jal         0x00235510
    // 0x00447D2C: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    func_00235510(rdram, ctx);
        goto after_1;
    // 0x00447D2C: addu        $a0, $s2, $s1
    ctx->r4 = ADD32(ctx->r18, ctx->r17);
    after_1:
    // 0x00447D30: lw          $v0, 0x4EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4EC);
    // 0x00447D34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00447D38: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447D3C: bne         $v0, $zero, L_00447D28
    if (ctx->r2 != 0) {
        // 0x00447D40: addiu       $s1, $s1, 0x64
        ctx->r17 = ADD32(ctx->r17, 0X64);
            goto L_00447D28;
    }
    // 0x00447D40: addiu       $s1, $s1, 0x64
    ctx->r17 = ADD32(ctx->r17, 0X64);
L_00447D44:
    // 0x00447D44: jal         0x0040C850
    // 0x00447D48: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    func_0040C850(rdram, ctx);
        goto after_2;
    // 0x00447D48: addiu       $a0, $s2, 0x518
    ctx->r4 = ADD32(ctx->r18, 0X518);
    after_2:
    // 0x00447D4C: jal         0x0040C850
    // 0x00447D50: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    func_0040C850(rdram, ctx);
        goto after_3;
    // 0x00447D50: addiu       $a0, $s2, 0x530
    ctx->r4 = ADD32(ctx->r18, 0X530);
    after_3:
    // 0x00447D54: jal         0x0040C850
    // 0x00447D58: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    func_0040C850(rdram, ctx);
        goto after_4;
    // 0x00447D58: addiu       $a0, $s2, 0x548
    ctx->r4 = ADD32(ctx->r18, 0X548);
    after_4:
    // 0x00447D5C: jal         0x0040CB28
    // 0x00447D60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0040CB28(rdram, ctx);
        goto after_5;
    // 0x00447D60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00447D64: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00447D68: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x00447D6C: jal         0x0027AD88
    // 0x00447D70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0027AD88(rdram, ctx);
        goto after_6;
    // 0x00447D70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_6:
    // 0x00447D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00447D78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00447D7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00447D80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447D84: jr          $ra
    // 0x00447D88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00447D88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0029E3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E3E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x0029E3E4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x0029E3E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0029E3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029E3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029E3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029E3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x0029E3FC: lui         $a0, 0x2A
    ctx->r4 = S32(0X2A << 16);
    // 0x0029E400: addiu       $a0, $a0, -0x1BC8
    ctx->r4 = ADD32(ctx->r4, -0X1BC8);
    // 0x0029E404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029E408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029E40C: jal         0x0029E4F0
    // 0x0029E410: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0029E4F0(rdram, ctx);
        goto after_0;
    // 0x0029E410: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x0029E414: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0029E418: bltz        $v1, L_0029E424
    if (SIGNED(ctx->r3) < 0) {
        // 0x0029E41C: addu        $v0, $s0, $v1
        ctx->r2 = ADD32(ctx->r16, ctx->r3);
            goto L_0029E424;
    }
    // 0x0029E41C: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x0029E420: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_0029E424:
    // 0x0029E424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029E428: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029E42C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0029E430: jr          $ra
    // 0x0029E434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029E434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042DE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042DE74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042DE78: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042DE7C: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x0042DE80: addiu       $s3, $s3, -0x5528
    ctx->r19 = ADD32(ctx->r19, -0X5528);
    // 0x0042DE84: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042DE88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042DE8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042DE90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042DE94: lbu         $v0, 0x19($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X19);
    // 0x0042DE98: beq         $v0, $zero, L_0042DEB0
    if (ctx->r2 == 0) {
        // 0x0042DE9C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0042DEB0;
    }
    // 0x0042DE9C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0042DEA0: jal         0x00254044
    // 0x0042DEA4: nop

    func_00254044(rdram, ctx);
        goto after_0;
    // 0x0042DEA4: nop

    after_0:
    // 0x0042DEA8: jal         0x002541E4
    // 0x0042DEAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002541E4(rdram, ctx);
        goto after_1;
    // 0x0042DEAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_0042DEB0:
    // 0x0042DEB0: addiu       $v0, $s1, 0xC10
    ctx->r2 = ADD32(ctx->r17, 0XC10);
    // 0x0042DEB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042DEB8: lwc1        $f1, 0x6AA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6AA0);
    // 0x0042DEBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042DEC0: lwc1        $f2, 0x6AA4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6AA4);
    // 0x0042DEC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042DEC8: lwc1        $f0, 0x6AA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AA8);
    // 0x0042DECC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042DED0: lwc1        $f3, 0x6AAC($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6AAC);
    // 0x0042DED4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0042DED8: lwc1        $f4, 0x6AB0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6AB0);
    // 0x0042DEDC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0042DEE0: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x0042DEE4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x0042DEE8: sw          $zero, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = 0;
    // 0x0042DEEC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x0042DEF0: sw          $v1, 0xC10($s1)
    MEM_W(0XC10, ctx->r17) = ctx->r3;
    // 0x0042DEF4: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x0042DEF8: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x0042DEFC: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x0042DF00: swc1        $f1, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x0042DF04: swc1        $f2, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f2.u32l;
    // 0x0042DF08: swc1        $f0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f0.u32l;
    // 0x0042DF0C: swc1        $f3, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f_odd[(3 - 1) * 2];
    // 0x0042DF10: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    // 0x0042DF14: swc1        $f4, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f4.u32l;
    // 0x0042DF18: sw          $zero, 0x1280($s1)
    MEM_W(0X1280, ctx->r17) = 0;
    // 0x0042DF1C: lbu         $v0, 0x19($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X19);
    // 0x0042DF20: bne         $v0, $zero, L_0042DF38
    if (ctx->r2 != 0) {
        // 0x0042DF24: addiu       $s0, $s1, 0x1064
        ctx->r16 = ADD32(ctx->r17, 0X1064);
            goto L_0042DF38;
    }
    // 0x0042DF24: addiu       $s0, $s1, 0x1064
    ctx->r16 = ADD32(ctx->r17, 0X1064);
    // 0x0042DF28: lw          $a0, 0xA50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA50);
    // 0x0042DF2C: jal         0x00285BD0
    // 0x0042DF30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x0042DF30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0042DF34: addiu       $s0, $s1, 0x1064
    ctx->r16 = ADD32(ctx->r17, 0X1064);
L_0042DF38:
    // 0x0042DF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DF3C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x0042DF40: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x0042DF44: sw          $zero, 0xA30($s1)
    MEM_W(0XA30, ctx->r17) = 0;
    // 0x0042DF48: sw          $zero, 0xA34($s1)
    MEM_W(0XA34, ctx->r17) = 0;
    // 0x0042DF4C: sw          $zero, 0xA38($s1)
    MEM_W(0XA38, ctx->r17) = 0;
    // 0x0042DF50: jal         0x0027ACC4
    // 0x0042DF54: sw          $zero, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = 0;
    func_0027ACC4(rdram, ctx);
        goto after_3;
    // 0x0042DF54: sw          $zero, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = 0;
    after_3:
    // 0x0042DF58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042DF5C: addiu       $a1, $a1, -0x248C
    ctx->r5 = ADD32(ctx->r5, -0X248C);
    // 0x0042DF60: jal         0x0027AD00
    // 0x0042DF64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_4;
    // 0x0042DF64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0042DF68: addiu       $s0, $s1, 0x10A0
    ctx->r16 = ADD32(ctx->r17, 0X10A0);
    // 0x0042DF6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DF70: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x0042DF74: jal         0x0027ACC4
    // 0x0042DF78: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_0027ACC4(rdram, ctx);
        goto after_5;
    // 0x0042DF78: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_5:
    // 0x0042DF7C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042DF80: addiu       $a1, $a1, -0x24A0
    ctx->r5 = ADD32(ctx->r5, -0X24A0);
    // 0x0042DF84: jal         0x0027AD00
    // 0x0042DF88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_6;
    // 0x0042DF88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0042DF8C: addiu       $s0, $s1, 0x10DC
    ctx->r16 = ADD32(ctx->r17, 0X10DC);
    // 0x0042DF90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DF94: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
    // 0x0042DF98: jal         0x0027ACC4
    // 0x0042DF9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0027ACC4(rdram, ctx);
        goto after_7;
    // 0x0042DF9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x0042DFA0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042DFA4: addiu       $a1, $a1, -0x2450
    ctx->r5 = ADD32(ctx->r5, -0X2450);
    // 0x0042DFA8: jal         0x0027AD00
    // 0x0042DFAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_8;
    // 0x0042DFAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x0042DFB0: addiu       $s0, $s1, 0x1118
    ctx->r16 = ADD32(ctx->r17, 0X1118);
    // 0x0042DFB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DFB8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x0042DFBC: jal         0x0027ACC4
    // 0x0042DFC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0027ACC4(rdram, ctx);
        goto after_9;
    // 0x0042DFC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x0042DFC4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042DFC8: addiu       $a1, $a1, -0x2410
    ctx->r5 = ADD32(ctx->r5, -0X2410);
    // 0x0042DFCC: jal         0x0027AD00
    // 0x0042DFD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_10;
    // 0x0042DFD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x0042DFD4: addiu       $s0, $s1, 0x1208
    ctx->r16 = ADD32(ctx->r17, 0X1208);
    // 0x0042DFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042DFDC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x0042DFE0: jal         0x0027ACC4
    // 0x0042DFE4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_0027ACC4(rdram, ctx);
        goto after_11;
    // 0x0042DFE4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_11:
    // 0x0042DFE8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042DFEC: addiu       $a1, $a1, -0x23D0
    ctx->r5 = ADD32(ctx->r5, -0X23D0);
    // 0x0042DFF0: jal         0x0027AD00
    // 0x0042DFF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_12;
    // 0x0042DFF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x0042DFF8: addiu       $s0, $s1, 0x1244
    ctx->r16 = ADD32(ctx->r17, 0X1244);
    // 0x0042DFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0042E000: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x0042E004: jal         0x0027ACC4
    // 0x0042E008: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_0027ACC4(rdram, ctx);
        goto after_13;
    // 0x0042E008: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_13:
    // 0x0042E00C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0042E010: addiu       $a1, $a1, -0x2390
    ctx->r5 = ADD32(ctx->r5, -0X2390);
    // 0x0042E014: jal         0x0027AD00
    // 0x0042E018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_14;
    // 0x0042E018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x0042E01C: addiu       $a0, $s1, 0x1190
    ctx->r4 = ADD32(ctx->r17, 0X1190);
    // 0x0042E020: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x0042E024: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0042E028: addiu       $s0, $s0, 0x2036
    ctx->r16 = ADD32(ctx->r16, 0X2036);
    // 0x0042E02C: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x0042E030: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0042E034: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x0042E038: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0042E03C: jal         0x0027ACC4
    // 0x0042E040: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_0027ACC4(rdram, ctx);
        goto after_15;
    // 0x0042E040: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_15:
    // 0x0042E044: addiu       $a0, $s1, 0x11CC
    ctx->r4 = ADD32(ctx->r17, 0X11CC);
    // 0x0042E048: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x0042E04C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x0042E050: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x0042E054: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0042E058: jal         0x0027ACC4
    // 0x0042E05C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_0027ACC4(rdram, ctx);
        goto after_16;
    // 0x0042E05C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_16:
    // 0x0042E060: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x0042E064: sw          $zero, 0x1290($s1)
    MEM_W(0X1290, ctx->r17) = 0;
    // 0x0042E068: sw          $zero, 0xB60($s1)
    MEM_W(0XB60, ctx->r17) = 0;
    // turok2: reconnected split function: a stray ELF symbol at 0x0042E06C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042E06C(rdram, ctx);
;}
RECOMP_FUNC void func_0024FC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024FC08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0024FC0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024FC10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0024FC14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024FC18: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0024FC1C: sdc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X28, ctx->r29);
    // 0x0024FC20: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0024FC24: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0024FC28: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024FC2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0024FC30: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x0024FC34: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0024FC38: jal         0x002117DC
    // 0x0024FC3C: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    func_002117DC(rdram, ctx);
        goto after_0;
    // 0x0024FC3C: addiu       $a0, $s0, 0xAD0
    ctx->r4 = ADD32(ctx->r16, 0XAD0);
    after_0:
    // 0x0024FC40: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x0024FC44: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0024FC48: jal         0x002117DC
    // 0x0024FC4C: addiu       $a0, $s0, 0xACC
    ctx->r4 = ADD32(ctx->r16, 0XACC);
    func_002117DC(rdram, ctx);
        goto after_1;
    // 0x0024FC4C: addiu       $a0, $s0, 0xACC
    ctx->r4 = ADD32(ctx->r16, 0XACC);
    after_1:
    // 0x0024FC50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FC54: lwc1        $f20, 0x6E40($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6E40);
    // 0x0024FC58: lwc1        $f12, 0xAD4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAD4);
    // 0x0024FC5C: jal         0x0021170C
    // 0x0024FC60: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_0021170C(rdram, ctx);
        goto after_2;
    // 0x0024FC60: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x0024FC64: lwc1        $f12, 0xAD8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAD8);
    // 0x0024FC68: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x0024FC6C: jal         0x0021170C
    // 0x0024FC70: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_3;
    // 0x0024FC70: swc1        $f0, 0xAD4($s0)
    MEM_W(0XAD4, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x0024FC74: lwc1        $f12, 0xADC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XADC);
    // 0x0024FC78: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x0024FC7C: jal         0x0021170C
    // 0x0024FC80: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_4;
    // 0x0024FC80: swc1        $f0, 0xAD8($s0)
    MEM_W(0XAD8, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x0024FC84: lwc1        $f1, 0xB00($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB00);
    // 0x0024FC88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FC8C: lwc1        $f2, 0x6E44($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6E44);
    // 0x0024FC90: c.lt.s      $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x0024FC94: nop

    // 0x0024FC98: bc1f        L_0024FCA4
    if (!c1cs) {
        // 0x0024FC9C: swc1        $f0, 0xADC($s0)
        MEM_W(0XADC, ctx->r16) = ctx->f0.u32l;
            goto L_0024FCA4;
    }
    // 0x0024FC9C: swc1        $f0, 0xADC($s0)
    MEM_W(0XADC, ctx->r16) = ctx->f0.u32l;
    // 0x0024FCA0: swc1        $f2, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = ctx->f2.u32l;
L_0024FCA4:
    // 0x0024FCA4: lwc1        $f0, 0xAFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAFC);
    // 0x0024FCA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FCAC: lwc1        $f1, 0x6E48($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E48);
    // 0x0024FCB0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0024FCB4: nop

    // 0x0024FCB8: bc1tl       L_0024FCC0
    if (c1cs) {
        // 0x0024FCBC: swc1        $f1, 0xAFC($s0)
        MEM_W(0XAFC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
            goto L_0024FCC0;
    }
    goto skip_0;
    // 0x0024FCBC: swc1        $f1, 0xAFC($s0)
    MEM_W(0XAFC, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    skip_0:
L_0024FCC0:
    // 0x0024FCC0: lwc1        $f12, 0xB00($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB00);
    // 0x0024FCC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FCC8: lwc1        $f14, 0x6E4C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E4C);
    // 0x0024FCCC: jal         0x0021170C
    // 0x0024FCD0: nop

    func_0021170C(rdram, ctx);
        goto after_5;
    // 0x0024FCD0: nop

    after_5:
    // 0x0024FCD4: lwc1        $f12, 0xAFC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAFC);
    // 0x0024FCD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FCDC: lwc1        $f14, 0x6E50($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6E50);
    // 0x0024FCE0: jal         0x0021170C
    // 0x0024FCE4: swc1        $f0, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = ctx->f0.u32l;
    func_0021170C(rdram, ctx);
        goto after_6;
    // 0x0024FCE4: swc1        $f0, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = ctx->f0.u32l;
    after_6:
    // 0x0024FCE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FCEC: lwc1        $f1, 0x6E54($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E54);
    // 0x0024FCF0: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0024FCF4: nop

    // 0x0024FCF8: bc1f        L_0024FD08
    if (!c1cs) {
        // 0x0024FCFC: swc1        $f0, 0xAFC($s0)
        MEM_W(0XAFC, ctx->r16) = ctx->f0.u32l;
            goto L_0024FD08;
    }
    // 0x0024FCFC: swc1        $f0, 0xAFC($s0)
    MEM_W(0XAFC, ctx->r16) = ctx->f0.u32l;
    // 0x0024FD00: swc1        $f21, 0xAFC($s0)
    MEM_W(0XAFC, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
    // 0x0024FD04: swc1        $f21, 0xB00($s0)
    MEM_W(0XB00, ctx->r16) = ctx->f_odd[(21 - 1) * 2];
L_0024FD08:
    // 0x0024FD08: lwc1        $f0, 0xA10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA10);
    // 0x0024FD0C: lwc1        $f1, 0xB00($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XB00);
    // 0x0024FD10: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FD14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FD18: lwc1        $f1, 0x6E58($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E58);
    // 0x0024FD1C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0024FD20: mul.s       $f21, $f0, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FD24: beq         $v0, $zero, L_0024FD44
    if (ctx->r2 == 0) {
        // 0x0024FD28: nop
    
            goto L_0024FD44;
    }
    // 0x0024FD28: nop

    // 0x0024FD2C: lwc1        $f1, 0x30($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X30);
    // 0x0024FD30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FD34: lwc1        $f0, 0x6E5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6E5C);
    // 0x0024FD38: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FD3C: j           L_0024FD4C
    // 0x0024FD40: nop

        goto L_0024FD4C;
    // 0x0024FD40: nop

L_0024FD44:
    // 0x0024FD44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FD48: lwc1        $f20, 0x6E60($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6E60);
L_0024FD4C:
    // 0x0024FD4C: jal         0x002982F0
    // 0x0024FD50: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_7;
    // 0x0024FD50: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_7:
    // 0x0024FD54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FD58: lwc1        $f1, 0x6E64($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E64);
    // 0x0024FD5C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FD60: lwc1        $f1, 0xAFC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XAFC);
    // 0x0024FD64: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0024FD68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FD6C: lwc1        $f22, 0x6E68($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6E68);
    // 0x0024FD70: add.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f1.fl;
    // 0x0024FD74: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0024FD78: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0024FD7C: jal         0x002117DC
    // 0x0024FD80: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    func_002117DC(rdram, ctx);
        goto after_8;
    // 0x0024FD80: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    after_8:
    // 0x0024FD84: jal         0x002974C0
    // 0x0024FD88: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002974C0(rdram, ctx);
        goto after_9;
    // 0x0024FD88: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_9:
    // 0x0024FD8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FD90: lwc1        $f1, 0x6E6C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6E6C);
    // 0x0024FD94: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0024FD98: lwc1        $f20, 0xAFC($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0XAFC);
    // 0x0024FD9C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0024FDA0: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024FDA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0024FDA8: lwc1        $f21, 0x6E70($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6E70);
    // 0x0024FDAC: jal         0x002982F0
    // 0x0024FDB0: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_10;
    // 0x0024FDB0: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    after_10:
    // 0x0024FDB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024FDB8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0024FDBC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0024FDC0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0024FDC4: jal         0x002117DC
    // 0x0024FDC8: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    func_002117DC(rdram, ctx);
        goto after_11;
    // 0x0024FDC8: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_11:
    // 0x0024FDCC: lwc1        $f12, 0x50($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X50);
    // 0x0024FDD0: jal         0x002974C0
    // 0x0024FDD4: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    func_002974C0(rdram, ctx);
        goto after_12;
    // 0x0024FDD4: add.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f21.fl;
    after_12:
    // 0x0024FDD8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0024FDDC: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0024FDE0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x0024FDE4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0024FDE8: jal         0x002117DC
    // 0x0024FDEC: addiu       $a0, $s0, 0xAE8
    ctx->r4 = ADD32(ctx->r16, 0XAE8);
    func_002117DC(rdram, ctx);
        goto after_13;
    // 0x0024FDEC: addiu       $a0, $s0, 0xAE8
    ctx->r4 = ADD32(ctx->r16, 0XAE8);
    after_13:
    // 0x0024FDF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0024FDF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024FDF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024FDFC: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x0024FE00: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x0024FE04: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0024FE08: jr          $ra
    // 0x0024FE0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0024FE0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045B528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00422574:
    // 0x0045B528: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B52C: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X960);
    // 0x0045B530: beq         $v0, $zero, L_0045B548
    if (ctx->r2 == 0) {
        // 0x0045B534: nop
    
            goto L_0045B548;
    }
    // 0x0045B534: nop

    // 0x0045B538: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B53C: addiu       $v0, $v0, 0x4B84
    ctx->r2 = ADD32(ctx->r2, 0X4B84);
    // 0x0045B540: j           L_00422574
    // 0x0045B544: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00422574(rdram, ctx);
    return;
    // 0x0045B544: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045B548:
    // 0x0045B548: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045B54C: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x0045B550: beq         $v0, $zero, L_0045B568
    if (ctx->r2 == 0) {
        // 0x0045B554: nop
    
            goto L_0045B568;
    }
    // 0x0045B554: nop

    // 0x0045B558: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B55C: addiu       $v0, $v0, 0x4B94
    ctx->r2 = ADD32(ctx->r2, 0X4B94);
    // 0x0045B560: j           L_00422574
    // 0x0045B564: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    func_00422574(rdram, ctx);
    return;
    // 0x0045B564: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0045B568:
    // 0x0045B568: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045B56C: addiu       $v0, $v0, 0x4B8C
    ctx->r2 = ADD32(ctx->r2, 0X4B8C);
    // 0x0045B570: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0045B574: jr          $ra
    // 0x0045B578: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0045B578: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0029DFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DFDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
;}
RECOMP_FUNC void func_002974B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002974B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x002974B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002974BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // turok2: reconnected split function: a stray ELF symbol at 0x002974C0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_002974C0(rdram, ctx);
;}
RECOMP_FUNC void func_0029E4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029E4C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0029E4C4: beq         $v0, $zero, L_0029E4DC
    if (ctx->r2 == 0) {
        // 0x0029E4C8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_0029E4DC;
    }
    // 0x0029E4C8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x0029E4CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_0029E4D0:
    // 0x0029E4D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x0029E4D4: bnel        $v0, $zero, L_0029E4D0
    if (ctx->r2 != 0) {
        // 0x0029E4D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_0029E4D0;
    }
    goto skip_0;
    // 0x0029E4D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_0029E4DC:
    // 0x0029E4DC: jr          $ra
    // 0x0029E4E0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    return;
    // 0x0029E4E0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void func_0041EDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041EDE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041EDE4: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041EDE8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0041EDEC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0041EDF0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0041EDF4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0041EDF8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041EDFC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0041EE00: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x0041EE04: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0041EE08: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x0041EE0C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x0041EE10: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0041EE14: beq         $v0, $zero, L_0041EE2C
    if (ctx->r2 == 0) {
        // 0x0041EE18: sw          $s1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r17;
            goto L_0041EE2C;
    }
    // 0x0041EE18: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0041EE1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041EE20: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0041EE24: j           L_0041EE38
    // 0x0041EE28: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041EE38;
    // 0x0041EE28: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041EE2C:
    // 0x0041EE2C: lw          $v0, 0x20($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X20);
    // 0x0041EE30: lw          $a2, 0x1C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1C);
    // 0x0041EE34: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
L_0041EE38:
    // 0x0041EE38: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0041EE3C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041EE40: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041EE44: beq         $v0, $zero, L_0041EF28
    if (ctx->r2 == 0) {
        // 0x0041EE48: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_0041EF28;
    }
    // 0x0041EE48: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0041EE4C: jal         0x00426E6C
    // 0x0041EE50: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_00426E6C(rdram, ctx);
        goto after_0;
    // 0x0041EE50: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x0041EE54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041EE58: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x0041EE5C: jal         0x004267A0
    // 0x0041EE60: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_004267A0(rdram, ctx);
        goto after_1;
    // 0x0041EE60: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041EE64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041EE68: bne         $s0, $zero, L_0041EF28
    if (ctx->r16 != 0) {
        // 0x0041EE6C: nop
    
            goto L_0041EF28;
    }
    // 0x0041EE6C: nop

    // 0x0041EE70: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0041EE74: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041EE78: bne         $v0, $zero, L_0041EEF4
    if (ctx->r2 != 0) {
        // 0x0041EE7C: nop
    
            goto L_0041EEF4;
    }
    // 0x0041EE7C: nop

    // 0x0041EE80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041EE84: jal         0x0042670C
    // 0x0041EE88: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_0042670C(rdram, ctx);
        goto after_2;
    // 0x0041EE88: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x0041EE8C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041EE90: bne         $s0, $zero, L_0041EEF4
    if (ctx->r16 != 0) {
        // 0x0041EE94: nop
    
            goto L_0041EEF4;
    }
    // 0x0041EE94: nop

    // 0x0041EE98: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0041EE9C: beq         $v0, $zero, L_0041EEF4
    if (ctx->r2 == 0) {
        // 0x0041EEA0: nop
    
            goto L_0041EEF4;
    }
    // 0x0041EEA0: nop

    // 0x0041EEA4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x0041EEA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041EEAC: jal         0x00426A94
    // 0x0041EEB0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00426A94(rdram, ctx);
        goto after_3;
    // 0x0041EEB0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x0041EEB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041EEB8: bne         $s0, $zero, L_0041EEF4
    if (ctx->r16 != 0) {
        // 0x0041EEBC: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_0041EEF4;
    }
    // 0x0041EEBC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x0041EEC0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0041EEC4: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x0041EEC8: addiu       $a2, $a2, 0x968
    ctx->r6 = ADD32(ctx->r6, 0X968);
    // 0x0041EECC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0041EED0: addiu       $a3, $a3, 0x45C0
    ctx->r7 = ADD32(ctx->r7, 0X45C0);
    // 0x0041EED4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041EED8: addu        $v0, $sp, $a1
    ctx->r2 = ADD32(ctx->r29, ctx->r5);
    // 0x0041EEDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EEE0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041EEE4: addiu       $v0, $v0, 0x45D8
    ctx->r2 = ADD32(ctx->r2, 0X45D8);
    // 0x0041EEE8: jal         0x00426164
    // 0x0041EEEC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00426164(rdram, ctx);
        goto after_4;
    // 0x0041EEEC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x0041EEF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0041EEF4:
    // 0x0041EEF4: beq         $s4, $zero, L_0041EF28
    if (ctx->r20 == 0) {
        // 0x0041EEF8: nop
    
            goto L_0041EF28;
    }
    // 0x0041EEF8: nop

    // 0x0041EEFC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041EF00: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041EF04: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x0041EF08: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041EF0C: addiu       $a1, $a1, -0x4424
    ctx->r5 = ADD32(ctx->r5, -0X4424);
    // 0x0041EF10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041EF14: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041EF18: jal         0x00416644
    // 0x0041EF1C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041EF1C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041EF20: j           L_0041F0A4
    // 0x0041EF24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041F0A4;
    // 0x0041EF24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041EF28:
    // 0x0041EF28: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
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
        goto after_6;
    // 0x0041EF4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
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
        goto after_7;
    // 0x0041EF64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
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
        goto after_8;
    // 0x0041EF7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
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
        goto after_9;
    // 0x0041F09C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_9:
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
RECOMP_FUNC void func_002141F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002141F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x002141F4: sdc1        $f21, 0x78($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X78, ctx->r29);
    // 0x002141F8: lwc1        $f21, 0x90($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X90);
    // 0x002141FC: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x00214200: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00214204: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x00214208: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0021420C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x00214210: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00214214: sdc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X70, ctx->r29);
    // 0x00214218: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x0021421C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x00214220: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00214224: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00214228: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x0021422C: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00214230: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x00214234: lhu         $a1, 0xE($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XE);
    // 0x00214238: jal         0x00225E88
    // 0x0021423C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_00225E88(rdram, ctx);
        goto after_0;
    // 0x0021423C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x00214240: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x00214244: lbu         $v0, 0x19($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X19);
    // 0x00214248: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021424C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00214250: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00214254: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x00214258: lbu         $v0, 0x18($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X18);
    // 0x0021425C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x00214260: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x00214264: beq         $v0, $zero, L_00214274
    if (ctx->r2 == 0) {
        // 0x00214268: nop
    
            goto L_00214274;
    }
    // 0x00214268: nop

    // 0x0021426C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00214270: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
L_00214274:
    // 0x00214274: lbu         $v0, 0x1A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1A);
    // 0x00214278: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021427C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00214280: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x00214284: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x00214288: lbu         $v0, 0x18($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X18);
    // 0x0021428C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00214290: beq         $v0, $zero, L_002142A0
    if (ctx->r2 == 0) {
        // 0x00214294: nop
    
            goto L_002142A0;
    }
    // 0x00214294: nop

    // 0x00214298: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0021429C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
L_002142A0:
    // 0x002142A0: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x002142A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002142A8: lwc1        $f1, 0x57D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X57D0);
    // 0x002142AC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x002142B0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x002142B4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002142B8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x002142BC: lbu         $v0, 0x18($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X18);
    // 0x002142C0: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x002142C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002142C8: beq         $v1, $v0, L_002142F0
    if (ctx->r3 == ctx->r2) {
        // 0x002142CC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_002142F0;
    }
    // 0x002142CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x002142D0: bne         $v0, $zero, L_00214318
    if (ctx->r2 != 0) {
        // 0x002142D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00214318;
    }
    // 0x002142D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002142D8: beq         $v1, $v0, L_00214300
    if (ctx->r3 == ctx->r2) {
        // 0x002142DC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00214300;
    }
    // 0x002142DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x002142E0: beq         $v1, $v0, L_00214310
    if (ctx->r3 == ctx->r2) {
        // 0x002142E4: nop
    
            goto L_00214310;
    }
    // 0x002142E4: nop

    // 0x002142E8: j           L_00214318
    // 0x002142EC: nop

        goto L_00214318;
    // 0x002142EC: nop

L_002142F0:
    // 0x002142F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002142F4: lwc1        $f20, 0x57D4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X57D4);
    // 0x002142F8: j           L_00214318
    // 0x002142FC: nop

        goto L_00214318;
    // 0x002142FC: nop

L_00214300:
    // 0x00214300: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00214304: lwc1        $f20, 0x57D8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X57D8);
    // 0x00214308: j           L_00214318
    // 0x0021430C: nop

        goto L_00214318;
    // 0x0021430C: nop

L_00214310:
    // 0x00214310: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00214314: lwc1        $f20, 0x57DC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X57DC);
L_00214318:
    // 0x00214318: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0021431C: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x00214320: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00214324: jal         0x002105A4
    // 0x00214328: sh          $v0, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r2;
    func_002105A4(rdram, ctx);
        goto after_1;
    // 0x00214328: sh          $v0, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r2;
    after_1:
    // 0x0021432C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00214330: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00214334: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00214338: jal         0x0021034C
    // 0x0021433C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0021034C(rdram, ctx);
        goto after_2;
    // 0x0021433C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_2:
    // 0x00214340: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x00214344: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x00214348: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x0021434C: jal         0x00210318
    // 0x00214350: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210318(rdram, ctx);
        goto after_3;
    // 0x00214350: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x00214354: jal         0x00210C3C
    // 0x00214358: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_00210C3C(rdram, ctx);
        goto after_4;
    // 0x00214358: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x0021435C: lhu         $v0, 0x88($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X88);
    // 0x00214360: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00214364: beq         $v0, $zero, L_002143D4
    if (ctx->r2 == 0) {
        // 0x00214368: addiu       $a0, $s0, 0x28
        ctx->r4 = ADD32(ctx->r16, 0X28);
            goto L_002143D4;
    }
    // 0x00214368: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x0021436C: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x00214370: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00214374: lwc1        $f1, 0x57E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X57E0);
    // 0x00214378: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0021437C: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x00214380: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00214384: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00214388: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x0021438C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00214390: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00214394: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x00214398: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0021439C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002143A0: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x002143A4: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x002143A8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002143AC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x002143B0: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x002143B4: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002143B8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x002143BC: jal         0x0020FF80
    // 0x002143C0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    func_0020FF80(rdram, ctx);
        goto after_5;
    // 0x002143C0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x002143C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002143C8: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x002143CC: j           L_002144B8
    // 0x002143D0: sw          $v0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r2;
        goto L_002144B8;
    // 0x002143D0: sw          $v0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r2;
L_002143D4:
    // 0x002143D4: lb          $v0, 0x12($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X12);
    // 0x002143D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002143DC: lwc1        $f3, 0x57E4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X57E4);
    // 0x002143E0: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x002143E4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002143E8: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x002143EC: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x002143F0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002143F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002143F8: lwc1        $f2, 0x57E8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X57E8);
    // 0x002143FC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00214400: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x00214404: lb          $v0, 0x14($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X14);
    // 0x00214408: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021440C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00214410: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x00214414: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00214418: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021441C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00214420: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x00214424: lb          $v0, 0x16($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X16);
    // 0x00214428: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021442C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00214430: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x00214434: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x00214438: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021443C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00214440: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x00214444: lb          $v0, 0x13($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X13);
    // 0x00214448: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021444C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00214450: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x00214454: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x00214458: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021445C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00214460: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x00214464: lb          $v0, 0x15($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X15);
    // 0x00214468: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x0021446C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00214470: mul.s       $f1, $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x00214474: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x00214478: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0021447C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x00214480: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x00214484: lb          $v0, 0x17($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X17);
    // 0x00214488: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0021448C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00214490: mul.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x00214494: lwc1        $f1, 0x58($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x00214498: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0021449C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x002144A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x002144A4: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    // 0x002144A8: jal         0x0020D274
    // 0x002144AC: swc1        $f1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    func_0020D274(rdram, ctx);
        goto after_6;
    // 0x002144AC: swc1        $f1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    after_6:
    // 0x002144B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002144B4: sw          $v0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r2;
L_002144B8:
    // 0x002144B8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x002144BC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x002144C0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x002144C4: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x002144C8: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x002144CC: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x002144D0: lhu         $v1, 0xA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XA);
    // 0x002144D4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x002144D8: bne         $v1, $v0, L_002144E8
    if (ctx->r3 != ctx->r2) {
        // 0x002144DC: nop
    
            goto L_002144E8;
    }
    // 0x002144DC: nop

    // 0x002144E0: j           L_002144F8
    // 0x002144E4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
        goto L_002144F8;
    // 0x002144E4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
L_002144E8:
    // 0x002144E8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x002144EC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x002144F0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x002144F4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_002144F8:
    // 0x002144F8: lui         $v1, 0x3F
    ctx->r3 = S32(0X3F << 16);
    // 0x002144FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214500: lw          $v0, -0x3510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3510);
    // 0x00214504: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00214508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0021450C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00214510: sw          $v0, -0x3510($at)
    MEM_W(-0X3510, ctx->r1) = ctx->r2;
    // 0x00214514: bne         $v0, $v1, L_00214524
    if (ctx->r2 != ctx->r3) {
        // 0x00214518: lui         $v0, 0x38
        ctx->r2 = S32(0X38 << 16);
            goto L_00214524;
    }
    // 0x00214518: lui         $v0, 0x38
    ctx->r2 = S32(0X38 << 16);
    // 0x0021451C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00214520: sw          $v0, -0x3510($at)
    MEM_W(-0X3510, ctx->r1) = ctx->r2;
L_00214524:
    // 0x00214524: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214528: lw          $v0, -0x3510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3510);
    // 0x0021452C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00214530: lbu         $v1, 0x6D1B($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6D1B);
    // 0x00214534: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x00214538: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0021453C: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x00214540: sb          $v1, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r3;
    // 0x00214544: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x00214548: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x0021454C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x00214550: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00214554: ldc1        $f21, 0x78($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X78);
    // 0x00214558: ldc1        $f20, 0x70($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X70);
    // 0x0021455C: jr          $ra
    // 0x00214560: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00214560: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_00418750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418750: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418754: lb          $v1, -0x5500($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X5500);
    // 0x00418758: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x0041875C: beq         $v0, $zero, L_00418804
    if (ctx->r2 == 0) {
            // 0x00418760: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    entry_00418804(rdram, ctx);
    return;
    }
    // 0x00418760: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00418764: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00418768: addu        $at, $at, $v0
    gpr jr_addend_00418770 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041876C: lw          $v0, 0xF10($at)
    ctx->r2 = ADD32(ctx->r1, 0XF10);
    // 0x00418770: jr          $v0
    // 0x00418774: nop

    switch (jr_addend_00418770 >> 2) {
        case 0: goto L_00418778; break;
        case 1: goto L_00418788; break;
        case 2: goto L_00418798; break;
        case 3: goto L_004187A8; break;
        case 4: goto L_004187B8; break;
        case 5: goto L_004187C8; break;
        case 6: goto L_004187D8; break;
        case 7: goto L_004187E8; break;
        case 8: goto L_004187F8; break;
        default: switch_error(__func__, 0x00418770, 0x800C0F10);
    }
    // 0x00418774: nop

L_00418778:
    // 0x00418778: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041877C: addiu       $v0, $v0, 0x608C
    ctx->r2 = ADD32(ctx->r2, 0X608C);
    // 0x00418780: j           L_00418804
    // 0x00418784: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x00418784: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418788:
    // 0x00418788: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041878C: addiu       $v0, $v0, 0x60A4
    ctx->r2 = ADD32(ctx->r2, 0X60A4);
    // 0x00418790: j           L_00418804
    // 0x00418794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x00418794: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418798:
    // 0x00418798: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041879C: addiu       $v0, $v0, 0x60BC
    ctx->r2 = ADD32(ctx->r2, 0X60BC);
    // 0x004187A0: j           L_00418804
    // 0x004187A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187A8:
    // 0x004187A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187AC: addiu       $v0, $v0, 0x60D4
    ctx->r2 = ADD32(ctx->r2, 0X60D4);
    // 0x004187B0: j           L_00418804
    // 0x004187B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187B8:
    // 0x004187B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187BC: addiu       $v0, $v0, 0x60EC
    ctx->r2 = ADD32(ctx->r2, 0X60EC);
    // 0x004187C0: j           L_00418804
    // 0x004187C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187C8:
    // 0x004187C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187CC: addiu       $v0, $v0, 0x6104
    ctx->r2 = ADD32(ctx->r2, 0X6104);
    // 0x004187D0: j           L_00418804
    // 0x004187D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187D8:
    // 0x004187D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187DC: addiu       $v0, $v0, 0x611C
    ctx->r2 = ADD32(ctx->r2, 0X611C);
    // 0x004187E0: j           L_00418804
    // 0x004187E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187E8:
    // 0x004187E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004187EC: addiu       $v0, $v0, 0x6134
    ctx->r2 = ADD32(ctx->r2, 0X6134);
    // 0x004187F0: j           L_00418804
    // 0x004187F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00418804(rdram, ctx);
    return;
    // 0x004187F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004187F8:
    // 0x004187F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x004187FC ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_004187FC(rdram, ctx);
;}
RECOMP_FUNC void func_0023D7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023D7CC: addiu       $sp, $sp, -0x2F0
    ctx->r29 = ADD32(ctx->r29, -0X2F0);
    // 0x0023D7D0: sw          $fp, 0x2E0($sp)
    MEM_W(0X2E0, ctx->r29) = ctx->r30;
    // 0x0023D7D4: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x0023D7D8: sw          $s0, 0x2C0($sp)
    MEM_W(0X2C0, ctx->r29) = ctx->r16;
    // 0x0023D7DC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0023D7E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023D7E4: sw          $ra, 0x2E4($sp)
    MEM_W(0X2E4, ctx->r29) = ctx->r31;
    // 0x0023D7E8: sw          $s7, 0x2DC($sp)
    MEM_W(0X2DC, ctx->r29) = ctx->r23;
    // 0x0023D7EC: sw          $s6, 0x2D8($sp)
    MEM_W(0X2D8, ctx->r29) = ctx->r22;
    // 0x0023D7F0: sw          $s5, 0x2D4($sp)
    MEM_W(0X2D4, ctx->r29) = ctx->r21;
    // 0x0023D7F4: sw          $s4, 0x2D0($sp)
    MEM_W(0X2D0, ctx->r29) = ctx->r20;
    // 0x0023D7F8: sw          $s3, 0x2CC($sp)
    MEM_W(0X2CC, ctx->r29) = ctx->r19;
    // 0x0023D7FC: sw          $s2, 0x2C8($sp)
    MEM_W(0X2C8, ctx->r29) = ctx->r18;
    // 0x0023D800: sw          $s1, 0x2C4($sp)
    MEM_W(0X2C4, ctx->r29) = ctx->r17;
    // 0x0023D804: sdc1        $f20, 0x2E8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X2E8, ctx->r29);
    // 0x0023D808: jal         0x002017D4
    // 0x0023D80C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x0023D80C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x0023D810: lw          $v1, 0xD8($fp)
    ctx->r3 = MEM_W(ctx->r30, 0XD8);
    // 0x0023D814: bne         $v1, $zero, L_0023D82C
    if (ctx->r3 != 0) {
        // 0x0023D818: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_0023D82C;
    }
    // 0x0023D818: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x0023D81C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0023D820: andi        $v0, $v0, 0x280
    ctx->r2 = ctx->r2 & 0X280;
    // 0x0023D824: bne         $v0, $zero, L_0023DB28
    if (ctx->r2 != 0) {
        // 0x0023D828: nop
    
            goto L_0023DB28;
    }
    // 0x0023D828: nop

L_0023D82C:
    // 0x0023D82C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0023D830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0023D834: addiu       $a3, $sp, 0x290
    ctx->r7 = ADD32(ctx->r29, 0X290);
    // 0x0023D838: sw          $a3, 0x2BC($sp)
    MEM_W(0X2BC, ctx->r29) = ctx->r7;
    // 0x0023D83C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0023D840: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0023D844: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x0023D848: sw          $v0, 0x2B0($sp)
    MEM_W(0X2B0, ctx->r29) = ctx->r2;
    // 0x0023D84C: lw          $a3, 0x0($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X0);
    // 0x0023D850: addiu       $s6, $sp, 0x10
    ctx->r22 = ADD32(ctx->r29, 0X10);
    // 0x0023D854: jal         0x002017D4
    // 0x0023D858: sw          $a3, 0x2B8($sp)
    MEM_W(0X2B8, ctx->r29) = ctx->r7;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0023D858: sw          $a3, 0x2B8($sp)
    MEM_W(0X2B8, ctx->r29) = ctx->r7;
    after_1:
    // 0x0023D85C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x0023D860: addiu       $s7, $s5, 0x4
    ctx->r23 = ADD32(ctx->r21, 0X4);
L_0023D864:
    // 0x0023D864: lw          $a3, 0x2B8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2B8);
    // 0x0023D868: lw          $v0, 0x9C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X9C);
    // 0x0023D86C: bne         $v0, $zero, L_0023DB28
    if (ctx->r2 != 0) {
        // 0x0023D870: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023DB28;
    }
    // 0x0023D870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023D874: lbu         $a3, 0x0($s5)
    ctx->r7 = MEM_BU(ctx->r21, 0X0);
    // 0x0023D878: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x0023D87C: beq         $v1, $v0, L_0023DA0C
    if (ctx->r3 == ctx->r2) {
        // 0x0023D880: sb          $a3, 0x2B4($sp)
        MEM_B(0X2B4, ctx->r29) = ctx->r7;
            goto L_0023DA0C;
    }
    // 0x0023D880: sb          $a3, 0x2B4($sp)
    MEM_B(0X2B4, ctx->r29) = ctx->r7;
    // 0x0023D884: beq         $v1, $zero, L_0023DB14
    if (ctx->r3 == 0) {
        // 0x0023D888: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_0023DB14;
    }
    // 0x0023D888: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x0023D88C: beq         $v0, $zero, L_0023DB14
    if (ctx->r2 == 0) {
        // 0x0023D890: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_0023DB14;
    }
    // 0x0023D890: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x0023D894: bnel        $v0, $zero, L_0023DB18
    if (ctx->r2 != 0) {
        // 0x0023D898: addiu       $s7, $s7, 0x8
        ctx->r23 = ADD32(ctx->r23, 0X8);
            goto L_0023DB18;
    }
    goto skip_0;
    // 0x0023D898: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    skip_0:
    // 0x0023D89C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0023D8A0: lui         $a3, 0xFE
    ctx->r7 = S32(0XFE << 16);
    // 0x0023D8A4: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x0023D8A8: srl         $v0, $v0, 17
    ctx->r2 = S32(U32(ctx->r2) >> 17);
    // 0x0023D8AC: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x0023D8B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0023D8B4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0023D8B8: addu        $a1, $s6, $a1
    ctx->r5 = ADD32(ctx->r22, ctx->r5);
    // 0x0023D8BC: sw          $a1, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r5;
    // 0x0023D8C0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0023D8C4: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x0023D8C8: srl         $v0, $v0, 9
    ctx->r2 = S32(U32(ctx->r2) >> 9);
    // 0x0023D8CC: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x0023D8D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0023D8D4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0023D8D8: addu        $a0, $s6, $a0
    ctx->r4 = ADD32(ctx->r22, ctx->r4);
    // 0x0023D8DC: sw          $a0, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r4;
    // 0x0023D8E0: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x0023D8E4: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x0023D8E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0023D8EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023D8F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023D8F4: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x0023D8F8: sw          $v0, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r2;
    // 0x0023D8FC: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0023D900: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0023D904: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x0023D908: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0023D90C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0023D910: bne         $v1, $zero, L_0023D948
    if (ctx->r3 != 0) {
        // 0x0023D914: nop
    
            goto L_0023D948;
    }
    // 0x0023D914: nop

    // 0x0023D918: lw          $a1, 0x2BC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2BC);
    // 0x0023D91C: jal         0x0023D4D4
    // 0x0023D920: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_0023D4D4(rdram, ctx);
        goto after_2;
    // 0x0023D920: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_2:
    // 0x0023D924: lw          $a3, 0x2B0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2B0);
    // 0x0023D928: beq         $a3, $zero, L_0023D948
    if (ctx->r7 == 0) {
        // 0x0023D92C: addu        $a0, $fp, $zero
        ctx->r4 = ADD32(ctx->r30, 0);
            goto L_0023D948;
    }
    // 0x0023D92C: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x0023D930: lw          $v1, 0x290($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X290);
    // 0x0023D934: lw          $v0, 0x298($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X298);
    // 0x0023D938: lw          $a1, 0x2BC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2BC);
    // 0x0023D93C: sw          $v0, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r2;
    // 0x0023D940: jal         0x0023D4D4
    // 0x0023D944: sw          $v1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r3;
    func_0023D4D4(rdram, ctx);
        goto after_3;
    // 0x0023D944: sw          $v1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r3;
    after_3:
L_0023D948:
    // 0x0023D948: lbu         $v1, 0x2B4($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2B4);
    // 0x0023D94C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0023D950: bnel        $v1, $v0, L_0023DB1C
    if (ctx->r3 != ctx->r2) {
        // 0x0023D954: addiu       $s7, $s7, 0x8
        ctx->r23 = ADD32(ctx->r23, 0X8);
            goto L_0023DB1C;
    }
    goto skip_1;
    // 0x0023D954: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    skip_1:
    // 0x0023D958: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0023D95C: lui         $a3, 0xFE
    ctx->r7 = S32(0XFE << 16);
    // 0x0023D960: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x0023D964: srl         $v0, $v0, 17
    ctx->r2 = S32(U32(ctx->r2) >> 17);
    // 0x0023D968: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x0023D96C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x0023D970: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x0023D974: addu        $a1, $s6, $a1
    ctx->r5 = ADD32(ctx->r22, ctx->r5);
    // 0x0023D978: sw          $a1, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r5;
    // 0x0023D97C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0023D980: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x0023D984: srl         $v0, $v0, 9
    ctx->r2 = S32(U32(ctx->r2) >> 9);
    // 0x0023D988: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x0023D98C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0023D990: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0023D994: addu        $a0, $s6, $a0
    ctx->r4 = ADD32(ctx->r22, ctx->r4);
    // 0x0023D998: sw          $a0, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r4;
    // 0x0023D99C: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x0023D9A0: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x0023D9A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0023D9A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023D9AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023D9B0: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x0023D9B4: sw          $v0, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r2;
    // 0x0023D9B8: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x0023D9BC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x0023D9C0: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x0023D9C4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x0023D9C8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0023D9CC: bnel        $v1, $zero, L_0023DB18
    if (ctx->r3 != 0) {
        // 0x0023D9D0: addiu       $s7, $s7, 0x8
        ctx->r23 = ADD32(ctx->r23, 0X8);
            goto L_0023DB18;
    }
    goto skip_2;
    // 0x0023D9D0: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    skip_2:
    // 0x0023D9D4: lw          $a1, 0x2BC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2BC);
    // 0x0023D9D8: jal         0x0023D4D4
    // 0x0023D9DC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    func_0023D4D4(rdram, ctx);
        goto after_4;
    // 0x0023D9DC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    after_4:
    // 0x0023D9E0: lw          $a3, 0x2B0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2B0);
    // 0x0023D9E4: beq         $a3, $zero, L_0023DB14
    if (ctx->r7 == 0) {
        // 0x0023D9E8: addu        $a0, $fp, $zero
        ctx->r4 = ADD32(ctx->r30, 0);
            goto L_0023DB14;
    }
    // 0x0023D9E8: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x0023D9EC: lw          $v1, 0x290($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X290);
    // 0x0023D9F0: lw          $v0, 0x298($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X298);
    // 0x0023D9F4: lw          $a1, 0x2BC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2BC);
    // 0x0023D9F8: sw          $v0, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->r2;
    // 0x0023D9FC: jal         0x0023D4D4
    // 0x0023DA00: sw          $v1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r3;
    func_0023D4D4(rdram, ctx);
        goto after_5;
    // 0x0023DA00: sw          $v1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r3;
    after_5:
    // 0x0023DA04: j           L_0023DB18
    // 0x0023DA08: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
        goto L_0023DB18;
    // 0x0023DA08: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
L_0023DA0C:
    // 0x0023DA0C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x0023DA10: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0023DA14: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x0023DA18: lw          $a0, 0xD4($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XD4);
    // 0x0023DA1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0023DA20: addu        $s2, $v0, $a0
    ctx->r18 = ADD32(ctx->r2, ctx->r4);
    // 0x0023DA24: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x0023DA28: addiu       $s3, $s2, 0x4
    ctx->r19 = ADD32(ctx->r18, 0X4);
    // 0x0023DA2C: srl         $v0, $v1, 12
    ctx->r2 = S32(U32(ctx->r3) >> 12);
    // 0x0023DA30: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    // 0x0023DA34: andi        $v1, $v1, 0xFE
    ctx->r3 = ctx->r3 & 0XFE;
    // 0x0023DA38: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x0023DA3C: subu        $v1, $v1, $s4
    ctx->r3 = SUB32(ctx->r3, ctx->r20);
    // 0x0023DA40: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0023DA44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0023DA48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0023DA4C: addu        $s1, $s6, $v0
    ctx->r17 = ADD32(ctx->r22, ctx->r2);
    // 0x0023DA50: addiu       $s0, $s1, 0xC
    ctx->r16 = ADD32(ctx->r17, 0XC);
L_0023DA54:
    // 0x0023DA54: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x0023DA58: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x0023DA5C: addiu       $a0, $fp, 0x94
    ctx->r4 = ADD32(ctx->r30, 0X94);
    // 0x0023DA60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023DA64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023DA68: swc1        $f0, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->f0.u32l;
    // 0x0023DA6C: lh          $v0, -0x2($s3)
    ctx->r2 = MEM_H(ctx->r19, -0X2);
    // 0x0023DA70: addiu       $a1, $sp, 0x2A0
    ctx->r5 = ADD32(ctx->r29, 0X2A0);
    // 0x0023DA74: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023DA78: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023DA7C: swc1        $f0, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->f0.u32l;
    // 0x0023DA80: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x0023DA84: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0023DA88: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x0023DA8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0023DA90: jal         0x0020F85C
    // 0x0023DA94: swc1        $f0, 0x2A8($sp)
    MEM_W(0X2A8, ctx->r29) = ctx->f0.u32l;
    func_0020F85C(rdram, ctx);
        goto after_6;
    // 0x0023DA94: swc1        $f0, 0x2A8($sp)
    MEM_W(0X2A8, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x0023DA98: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0023DA9C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0023DAA0: nop

    // 0x0023DAA4: bc1f        L_0023DAB0
    if (!c1cs) {
        // 0x0023DAA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0023DAB0;
    }
    // 0x0023DAA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023DAAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0023DAB0:
    // 0x0023DAB0: lwc1        $f0, -0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, -0X8);
    // 0x0023DAB4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0023DAB8: nop

    // 0x0023DABC: bc1fl       L_0023DAC8
    if (!c1cs) {
        // 0x0023DAC0: ori         $v0, $v0, 0x4
        ctx->r2 = ctx->r2 | 0X4;
            goto L_0023DAC8;
    }
    goto skip_3;
    // 0x0023DAC0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    skip_3:
    // 0x0023DAC4: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_0023DAC8:
    // 0x0023DAC8: lwc1        $f1, -0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0X4);
    // 0x0023DACC: c.le.s      $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f20.fl <= ctx->f1.fl;
    // 0x0023DAD0: nop

    // 0x0023DAD4: bc1f        L_0023DAE4
    if (!c1cs) {
        // 0x0023DAD8: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_0023DAE4;
    }
    // 0x0023DAD8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0023DADC: j           L_0023DAF8
    // 0x0023DAE0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_0023DAF8;
    // 0x0023DAE0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_0023DAE4:
    // 0x0023DAE4: lwc1        $f0, 0x48($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X48);
    // 0x0023DAE8: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023DAEC: nop

    // 0x0023DAF0: bc1f        L_0023DAFC
    if (!c1cs) {
        // 0x0023DAF4: ori         $v0, $v0, 0x20
        ctx->r2 = ctx->r2 | 0X20;
            goto L_0023DAFC;
    }
    // 0x0023DAF4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_0023DAF8:
    // 0x0023DAF8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_0023DAFC:
    // 0x0023DAFC: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x0023DB00: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x0023DB04: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x0023DB08: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x0023DB0C: bne         $s4, $zero, L_0023DA54
    if (ctx->r20 != 0) {
        // 0x0023DB10: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_0023DA54;
    }
    // 0x0023DB10: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_0023DB14:
    // 0x0023DB14: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
L_0023DB18:
    // 0x0023DB18: lbu         $v1, 0x2B4($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2B4);
L_0023DB1C:
    // 0x0023DB1C: addiu       $v0, $zero, 0xDF
    ctx->r2 = ADD32(0, 0XDF);
    // 0x0023DB20: bne         $v1, $v0, L_0023D864
    if (ctx->r3 != ctx->r2) {
        // 0x0023DB24: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_0023D864;
    }
    // 0x0023DB24: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
L_0023DB28:
    // 0x0023DB28: lw          $ra, 0x2E4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2E4);
    // 0x0023DB2C: lw          $fp, 0x2E0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X2E0);
    // 0x0023DB30: lw          $s7, 0x2DC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2DC);
    // 0x0023DB34: lw          $s6, 0x2D8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2D8);
    // 0x0023DB38: lw          $s5, 0x2D4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2D4);
    // 0x0023DB3C: lw          $s4, 0x2D0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2D0);
    // 0x0023DB40: lw          $s3, 0x2CC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2CC);
    // 0x0023DB44: lw          $s2, 0x2C8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C8);
    // 0x0023DB48: lw          $s1, 0x2C4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C4);
    // 0x0023DB4C: lw          $s0, 0x2C0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C0);
    // 0x0023DB50: ldc1        $f20, 0x2E8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X2E8);
    // 0x0023DB54: jr          $ra
    // 0x0023DB58: addiu       $sp, $sp, 0x2F0
    ctx->r29 = ADD32(ctx->r29, 0X2F0);
    return;
    // 0x0023DB58: addiu       $sp, $sp, 0x2F0
    ctx->r29 = ADD32(ctx->r29, 0X2F0);
;}
RECOMP_FUNC void func_0020DCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020DCC8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0020DCCC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0020DCD0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0020DCD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0020DCD8: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x0020DCDC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0020DCE0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0020DCE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0020DCE8: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x0020DCEC: sdc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X50, ctx->r29);
    // 0x0020DCF0: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x0020DCF4: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0020DCF8: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x0020DCFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0020DD00: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0020DD04: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x0020DD08: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x0020DD0C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0020DD10: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x0020DD14: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0020DD18: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0020DD1C: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0020DD20: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0020DD24: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0020DD28: lwc1        $f9, 0x1C($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x0020DD2C: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0020DD30: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DD34: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x0020DD38: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x0020DD3C: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x0020DD40: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x0020DD44: neg.s       $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); 
    ctx->f9.fl = -ctx->f9.fl;
    // 0x0020DD48: swc1        $f9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x0020DD4C: lwc1        $f11, 0x0($s2)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0020DD50: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020DD54: mul.s       $f0, $f11, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f11.fl, ctx->f0.fl);
    // 0x0020DD58: lwc1        $f7, 0x4($s2)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0020DD5C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020DD60: mul.s       $f6, $f7, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f7.fl, ctx->f6.fl);
    // 0x0020DD64: lwc1        $f5, 0x8($s2)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0020DD68: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020DD6C: mul.s       $f4, $f5, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f5.fl, ctx->f4.fl);
    // 0x0020DD70: lwc1        $f3, 0xC($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0020DD74: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0020DD78: mul.s       $f2, $f3, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f2.fl);
    // 0x0020DD7C: nop

    // 0x0020DD80: mul.s       $f1, $f11, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f11.fl, ctx->f1.fl);
    // 0x0020DD84: nop

    // 0x0020DD88: mul.s       $f7, $f7, $f10
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f10.fl);
    // 0x0020DD8C: nop

    // 0x0020DD90: mul.s       $f5, $f5, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f8.fl);
    // 0x0020DD94: nop

    // 0x0020DD98: mul.s       $f3, $f3, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f9.fl);
    // 0x0020DD9C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x0020DDA0: add.s       $f1, $f1, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f7.fl;
    // 0x0020DDA4: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x0020DDA8: add.s       $f1, $f1, $f5
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f5.fl;
    // 0x0020DDAC: add.s       $f22, $f0, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0020DDB0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0020DDB4: add.s       $f23, $f1, $f3
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f23.fl = ctx->f1.fl + ctx->f3.fl;
    // 0x0020DDB8: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x0020DDBC: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x0020DDC0: nop

    // 0x0020DDC4: bc1f        L_0020DDD4
    if (!c1cs) {
        // 0x0020DDC8: addiu       $s3, $sp, 0x10
        ctx->r19 = ADD32(ctx->r29, 0X10);
            goto L_0020DDD4;
    }
    // 0x0020DDC8: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x0020DDCC: mov.s       $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    ctx->f22.fl = ctx->f23.fl;
    // 0x0020DDD0: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0020DDD4:
    // 0x0020DDD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020DDD8: lwc1        $f0, 0x5504($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5504);
    // 0x0020DDDC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x0020DDE0: nop

    // 0x0020DDE4: bc1f        L_0020DEC8
    if (!c1cs) {
        // 0x0020DDE8: nop
    
            goto L_0020DEC8;
    }
    // 0x0020DDE8: nop

    // 0x0020DDEC: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020DDF0: sub.s       $f0, $f0, $f11
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f11.fl;
    // 0x0020DDF4: mul.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x0020DDF8: add.s       $f0, $f11, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f11.fl + ctx->f0.fl;
    // 0x0020DDFC: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x0020DE00: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020DE04: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0020DE08: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020DE0C: mul.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x0020DE10: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DE14: swc1        $f1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DE18: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020DE1C: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0020DE20: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0020DE24: mul.s       $f0, $f24, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x0020DE28: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DE2C: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020DE30: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0020DE34: swc1        $f1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DE38: lwc1        $f1, 0x4($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020DE3C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x0020DE40: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020DE44: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0020DE48: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0020DE4C: lwc1        $f3, 0xC($s2)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0020DE50: sub.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f3.fl;
    // 0x0020DE54: mul.s       $f2, $f24, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x0020DE58: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0020DE5C: mul.s       $f2, $f3, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x0020DE60: add.s       $f12, $f12, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f1.fl;
    // 0x0020DE64: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x0020DE68: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x0020DE6C: jal         0x00298470
    // 0x0020DE70: swc1        $f3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x0020DE70: swc1        $f3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    after_0:
    // 0x0020DE74: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020DE78: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0020DE7C: nop

    // 0x0020DE80: bc1t        L_0020DFB0
    if (c1cs) {
        // 0x0020DE84: nop
    
            goto L_0020DFB0;
    }
    // 0x0020DE84: nop

    // 0x0020DE88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020DE8C: lwc1        $f1, 0x5508($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5508);
    // 0x0020DE90: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x0020DE94: div.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = DIV_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0020DE98: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x0020DE9C: lwc1        $f3, 0x4($s1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r17, 0X4);
    // 0x0020DEA0: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020DEA4: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0020DEA8: mul.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x0020DEAC: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0020DEB0: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020DEB4: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x0020DEB8: swc1        $f3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(3 - 1) * 2];
    // 0x0020DEBC: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x0020DEC0: j           L_0020DFB0
    // 0x0020DEC4: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_0020DFB0;
    // 0x0020DEC4: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_0020DEC8:
    // 0x0020DEC8: jal         0x0021153C
    // 0x0020DECC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_0021153C(rdram, ctx);
        goto after_1;
    // 0x0020DECC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x0020DED0: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x0020DED4: jal         0x002982F0
    // 0x0020DED8: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0020DED8: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_2:
    // 0x0020DEDC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x0020DEE0: c.eq.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl == ctx->f1.fl;
    // 0x0020DEE4: nop

    // 0x0020DEE8: bc1f        L_0020DF14
    if (!c1cs) {
        // 0x0020DEEC: nop
    
            goto L_0020DF14;
    }
    // 0x0020DEEC: nop

    // 0x0020DEF0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x0020DEF4: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x0020DEF8: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x0020DEFC: lw          $t1, 0xC($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XC);
    // 0x0020DF00: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0020DF04: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x0020DF08: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x0020DF0C: j           L_0020DFB0
    // 0x0020DF10: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
        goto L_0020DFB0;
    // 0x0020DF10: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
L_0020DF14:
    // 0x0020DF14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0020DF18: lwc1        $f20, 0x550C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X550C);
    // 0x0020DF1C: sub.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x0020DF20: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x0020DF24: jal         0x002982F0
    // 0x0020DF28: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0020DF28: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    after_3:
    // 0x0020DF2C: mul.s       $f12, $f24, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f21.fl);
    // 0x0020DF30: nop

    // 0x0020DF34: mul.s       $f21, $f0, $f20
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f21.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0020DF38: jal         0x002982F0
    // 0x0020DF3C: nop

    func_002982F0(rdram, ctx);
        goto after_4;
    // 0x0020DF3C: nop

    after_4:
    // 0x0020DF40: c.lt.s      $f22, $f23
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f22.fl < ctx->f23.fl;
    // 0x0020DF44: mul.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0020DF48: bc1tl       L_0020DF50
    if (c1cs) {
        // 0x0020DF4C: addu        $s0, $s3, $zero
        ctx->r16 = ADD32(ctx->r19, 0);
            goto L_0020DF50;
    }
    goto skip_0;
    // 0x0020DF4C: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    skip_0:
L_0020DF50:
    // 0x0020DF50: lwc1        $f1, 0x0($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X0);
    // 0x0020DF54: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DF58: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x0020DF5C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DF60: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DF64: swc1        $f1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DF68: lwc1        $f1, 0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X4);
    // 0x0020DF6C: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DF70: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x0020DF74: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DF78: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DF7C: swc1        $f1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DF80: lwc1        $f1, 0x8($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X8);
    // 0x0020DF84: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DF88: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0020DF8C: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DF90: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DF94: swc1        $f1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x0020DF98: lwc1        $f1, 0xC($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0XC);
    // 0x0020DF9C: mul.s       $f1, $f21, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x0020DFA0: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0020DFA4: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0020DFA8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x0020DFAC: swc1        $f1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_0020DFB0:
    // 0x0020DFB0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0020DFB4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0020DFB8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0020DFBC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0020DFC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0020DFC4: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x0020DFC8: ldc1        $f23, 0x50($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X50);
    // 0x0020DFCC: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x0020DFD0: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x0020DFD4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x0020DFD8: jr          $ra
    // 0x0020DFDC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0020DFDC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00218B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218B10: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00218B14: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x00218B18: lw          $s5, 0x80($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X80);
    // 0x00218B1C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x00218B20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00218B24: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x00218B28: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00218B2C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x00218B30: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x00218B34: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x00218B38: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x00218B3C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x00218B40: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x00218B44: lh          $s2, 0x4($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X4);
    // 0x00218B48: lh          $s3, 0x6($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X6);
    // 0x00218B4C: lw          $s4, 0x84($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X84);
    // 0x00218B50: beq         $s3, $s2, L_00218CE8
    if (ctx->r19 == ctx->r18) {
        // 0x00218B54: addu        $s7, $a2, $zero
        ctx->r23 = ADD32(ctx->r6, 0);
            goto L_00218CE8;
    }
    // 0x00218B54: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x00218B58: beq         $a3, $zero, L_00218CE8
    if (ctx->r7 == 0) {
        // 0x00218B5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00218CE8;
    }
    // 0x00218B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218B60: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x00218B64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00218B68: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x00218B6C: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x00218B70: lw          $t2, 0x8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X8);
    // 0x00218B74: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x00218B78: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00218B7C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x00218B80: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x00218B84: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x00218B88: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x00218B8C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00218B90: bne         $s3, $v0, L_00218BA4
    if (ctx->r19 != ctx->r2) {
        // 0x00218B94: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00218BA4;
    }
    // 0x00218B94: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00218B98: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x00218B9C: j           L_00218C44
    // 0x00218BA0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_00218C44;
    // 0x00218BA0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00218BA4:
    // 0x00218BA4: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00218BA8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00218BAC: jal         0x0020185C
    // 0x00218BB0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00218BB0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x00218BB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00218BB8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00218BBC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x00218BC0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x00218BC4: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00218BC8: addiu       $v0, $v0, 0x6A9C
    ctx->r2 = ADD32(ctx->r2, 0X6A9C);
    // 0x00218BCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00218BD0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00218BD4: addiu       $v0, $v0, 0x5A10
    ctx->r2 = ADD32(ctx->r2, 0X5A10);
    // 0x00218BD8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00218BDC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00218BE0: jal         0x0020367C
    // 0x00218BE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x00218BE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x00218BE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00218BEC: jal         0x00219968
    // 0x00218BF0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    func_00219968(rdram, ctx);
        goto after_2;
    // 0x00218BF0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    after_2:
    // 0x00218BF4: beq         $v0, $zero, L_00218C44
    if (ctx->r2 == 0) {
        // 0x00218BF8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00218C44;
    }
    // 0x00218BF8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00218BFC: jal         0x0021793C
    // 0x00218C00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021793C(rdram, ctx);
        goto after_3;
    // 0x00218C00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x00218C04: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00218C08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218C0C: jal         0x002017D4
    // 0x00218C10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00218C10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x00218C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218C18: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x00218C1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00218C20: sh          $s3, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r19;
    // 0x00218C24: jal         0x002017D4
    // 0x00218C28: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00218C28: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    after_5:
    // 0x00218C2C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00218C30: jal         0x002017D4
    // 0x00218C34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00218C34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00218C38: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x00218C3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00218C40: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_00218C44:
    // 0x00218C44: beq         $v1, $zero, L_00218CB0
    if (ctx->r3 == 0) {
        // 0x00218C48: nop
    
            goto L_00218CB0;
    }
    // 0x00218C48: nop

    // 0x00218C4C: beq         $s4, $zero, L_00218C88
    if (ctx->r20 == 0) {
        // 0x00218C50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00218C88;
    }
    // 0x00218C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218C54: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x00218C58: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x00218C5C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x00218C60: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x00218C64: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x00218C68: sw          $t1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r9;
    // 0x00218C6C: sw          $t2, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r10;
    // 0x00218C70: sw          $t3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r11;
    // 0x00218C74: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x00218C78: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
    // 0x00218C7C: sh          $s2, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r18;
    // 0x00218C80: sh          $s2, 0x6($s4)
    MEM_H(0X6, ctx->r20) = ctx->r18;
    // 0x00218C84: sb          $v0, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r2;
L_00218C88:
    // 0x00218C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218C8C: sh          $s3, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r19;
    // 0x00218C90: sh          $s3, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r19;
    // 0x00218C94: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x00218C98: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x00218C9C: beq         $s5, $zero, L_00218DA0
    if (ctx->r21 == 0) {
        // 0x00218CA0: sb          $v0, 0xB($s1)
        MEM_B(0XB, ctx->r17) = ctx->r2;
            goto L_00218DA0;
    }
    // 0x00218CA0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x00218CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00218CA8: j           L_00218DA0
    // 0x00218CAC: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
        goto L_00218DA0;
    // 0x00218CAC: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
L_00218CB0:
    // 0x00218CB0: bnel        $s5, $zero, L_00218CB8
    if (ctx->r21 != 0) {
        // 0x00218CB4: sw          $zero, 0x0($s5)
        MEM_W(0X0, ctx->r21) = 0;
            goto L_00218CB8;
    }
    goto skip_0;
    // 0x00218CB4: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    skip_0:
L_00218CB8:
    // 0x00218CB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00218CBC: beq         $s2, $v0, L_00218CFC
    if (ctx->r18 == ctx->r2) {
        // 0x00218CC0: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00218CFC;
    }
    // 0x00218CC0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x00218CC4: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00218CC8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00218CCC: jal         0x0020185C
    // 0x00218CD0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_0020185C(rdram, ctx);
        goto after_7;
    // 0x00218CD0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x00218CD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00218CD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00218CDC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00218CE0: j           L_00218D24
    // 0x00218CE4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
        goto L_00218D24;
    // 0x00218CE4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_00218CE8:
    // 0x00218CE8: bnel        $s5, $zero, L_00218CF0
    if (ctx->r21 != 0) {
        // 0x00218CEC: sw          $zero, 0x0($s5)
        MEM_W(0X0, ctx->r21) = 0;
            goto L_00218CF0;
    }
    goto skip_1;
    // 0x00218CEC: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    skip_1:
L_00218CF0:
    // 0x00218CF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00218CF4: bne         $s2, $v0, L_00218D04
    if (ctx->r18 != ctx->r2) {
        // 0x00218CF8: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_00218D04;
    }
    // 0x00218CF8: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_00218CFC:
    // 0x00218CFC: j           L_00218DA0
    // 0x00218D00: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
        goto L_00218DA0;
    // 0x00218D00: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
L_00218D04:
    // 0x00218D04: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x00218D08: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00218D0C: jal         0x0020185C
    // 0x00218D10: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_0020185C(rdram, ctx);
        goto after_8;
    // 0x00218D10: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_8:
    // 0x00218D14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00218D18: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00218D1C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x00218D20: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
L_00218D24:
    // 0x00218D24: lui         $v0, 0x21
    ctx->r2 = S32(0X21 << 16);
    // 0x00218D28: addiu       $v0, $v0, 0x6A9C
    ctx->r2 = ADD32(ctx->r2, 0X6A9C);
    // 0x00218D2C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00218D30: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00218D34: addiu       $v0, $v0, 0x5A10
    ctx->r2 = ADD32(ctx->r2, 0X5A10);
    // 0x00218D38: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x00218D3C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00218D40: jal         0x0020367C
    // 0x00218D44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_9;
    // 0x00218D44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x00218D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00218D4C: jal         0x00219968
    // 0x00218D50: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    func_00219968(rdram, ctx);
        goto after_10;
    // 0x00218D50: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    after_10:
    // 0x00218D54: beq         $v0, $zero, L_00218DA0
    if (ctx->r2 == 0) {
        // 0x00218D58: nop
    
            goto L_00218DA0;
    }
    // 0x00218D58: nop

    // 0x00218D5C: jal         0x0021793C
    // 0x00218D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_0021793C(rdram, ctx);
        goto after_11;
    // 0x00218D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x00218D64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00218D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218D6C: jal         0x002017D4
    // 0x00218D70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_12;
    // 0x00218D70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_12:
    // 0x00218D74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00218D78: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x00218D7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00218D80: sh          $s2, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r18;
    // 0x00218D84: jal         0x002017D4
    // 0x00218D88: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x00218D88: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    after_13:
    // 0x00218D8C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00218D90: jal         0x002017D4
    // 0x00218D94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x00218D94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x00218D98: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x00218D9C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_00218DA0:
    // 0x00218DA0: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00218DA4: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x00218DA8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x00218DAC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x00218DB0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x00218DB4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x00218DB8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x00218DBC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x00218DC0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x00218DC4: jr          $ra
    // 0x00218DC8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x00218DC8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0026CE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026CE44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026CE48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026CE4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026CE50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026CE54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026CE58: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x0026CE5C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x0026CE60: bne         $s0, $a1, L_0026CEB4
    if (ctx->r16 != ctx->r5) {
        // 0x0026CE64: nop
    
            goto L_0026CEB4;
    }
    // 0x0026CE64: nop

    // 0x0026CE68: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0026CE6C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0026CE70: bne         $v0, $zero, L_0026CEB4
    if (ctx->r2 != 0) {
        // 0x0026CE74: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_0026CEB4;
    }
    // 0x0026CE74: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x0026CE78: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0026CE7C: beq         $a0, $zero, L_0026CE8C
    if (ctx->r4 == 0) {
        // 0x0026CE80: sh          $v0, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r2;
            goto L_0026CE8C;
    }
    // 0x0026CE80: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x0026CE84: jal         0x0026CE44
    // 0x0026CE88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CE44(rdram, ctx);
        goto after_0;
    // 0x0026CE88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0026CE8C:
    // 0x0026CE8C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0026CE90: beq         $a0, $zero, L_0026CEA0
    if (ctx->r4 == 0) {
        // 0x0026CE94: nop
    
            goto L_0026CEA0;
    }
    // 0x0026CE94: nop

    // 0x0026CE98: jal         0x0026CE44
    // 0x0026CE9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CE44(rdram, ctx);
        goto after_1;
    // 0x0026CE9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0026CEA0:
    // 0x0026CEA0: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x0026CEA4: beq         $a0, $zero, L_0026CEB4
    if (ctx->r4 == 0) {
        // 0x0026CEA8: nop
    
            goto L_0026CEB4;
    }
    // 0x0026CEA8: nop

    // 0x0026CEAC: jal         0x0026CE44
    // 0x0026CEB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CE44(rdram, ctx);
        goto after_2;
    // 0x0026CEB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0026CEB4:
    // 0x0026CEB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026CEB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026CEBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026CEC0: jr          $ra
    // 0x0026CEC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026CEC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023CE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023CE94: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x0023CE98: mul.s       $f1, $f0, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0023CE9C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x0023CEA0: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0023CEA4: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x0023CEA8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0023CEAC: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x0023CEB0: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x0023CEB4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x0023CEB8: jr          $ra
    // 0x0023CEBC: swc1        $f1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x0023CEBC: swc1        $f1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_00466D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00466D94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00466D98: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00466D9C: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00466DA0: addiu       $s3, $s3, -0x5528
    ctx->r19 = ADD32(ctx->r19, -0X5528);
    // 0x00466DA4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00466DA8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00466DAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00466DB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00466DB4: lbu         $v0, 0x19($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X19);
    // 0x00466DB8: beq         $v0, $zero, L_00466DD0
    if (ctx->r2 == 0) {
        // 0x00466DBC: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00466DD0;
    }
    // 0x00466DBC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00466DC0: jal         0x00254044
    // 0x00466DC4: nop

    func_00254044(rdram, ctx);
        goto after_0;
    // 0x00466DC4: nop

    after_0:
    // 0x00466DC8: jal         0x002541E4
    // 0x00466DCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_002541E4(rdram, ctx);
        goto after_1;
    // 0x00466DCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_00466DD0:
    // 0x00466DD0: addiu       $v0, $s1, 0xC10
    ctx->r2 = ADD32(ctx->r17, 0XC10);
    // 0x00466DD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466DD8: lwc1        $f1, 0x6AA0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6AA0);
    // 0x00466DDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466DE0: lwc1        $f2, 0x6AA4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6AA4);
    // 0x00466DE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466DE8: lwc1        $f0, 0x6AA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6AA8);
    // 0x00466DEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466DF0: lwc1        $f3, 0x6AAC($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X6AAC);
    // 0x00466DF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00466DF8: lwc1        $f4, 0x6AB0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6AB0);
    // 0x00466DFC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00466E00: sw          $zero, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = 0;
    // 0x00466E04: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x00466E08: sw          $zero, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = 0;
    // 0x00466E0C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x00466E10: sw          $v1, 0xC10($s1)
    MEM_W(0XC10, ctx->r17) = ctx->r3;
    // 0x00466E14: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x00466E18: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x00466E1C: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x00466E20: swc1        $f1, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x00466E24: swc1        $f2, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f2.u32l;
    // 0x00466E28: swc1        $f0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f0.u32l;
    // 0x00466E2C: swc1        $f3, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f_odd[(3 - 1) * 2];
    // 0x00466E30: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    // 0x00466E34: swc1        $f4, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f4.u32l;
    // 0x00466E38: sw          $zero, 0x1280($s1)
    MEM_W(0X1280, ctx->r17) = 0;
    // 0x00466E3C: lbu         $v0, 0x19($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X19);
    // 0x00466E40: bne         $v0, $zero, L_00466E58
    if (ctx->r2 != 0) {
        // 0x00466E44: addiu       $s0, $s1, 0x1064
        ctx->r16 = ADD32(ctx->r17, 0X1064);
            goto L_00466E58;
    }
    // 0x00466E44: addiu       $s0, $s1, 0x1064
    ctx->r16 = ADD32(ctx->r17, 0X1064);
    // 0x00466E48: lw          $a0, 0xA50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA50);
    // 0x00466E4C: jal         0x00285BD0
    // 0x00466E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x00466E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00466E54: addiu       $s0, $s1, 0x1064
    ctx->r16 = ADD32(ctx->r17, 0X1064);
L_00466E58:
    // 0x00466E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466E5C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x00466E60: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x00466E64: sw          $zero, 0xA30($s1)
    MEM_W(0XA30, ctx->r17) = 0;
    // 0x00466E68: sw          $zero, 0xA34($s1)
    MEM_W(0XA34, ctx->r17) = 0;
    // 0x00466E6C: sw          $zero, 0xA38($s1)
    MEM_W(0XA38, ctx->r17) = 0;
    // 0x00466E70: jal         0x0027ACC4
    // 0x00466E74: sw          $zero, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = 0;
    func_0027ACC4(rdram, ctx);
        goto after_3;
    // 0x00466E74: sw          $zero, 0xA3C($s1)
    MEM_W(0XA3C, ctx->r17) = 0;
    after_3:
    // 0x00466E78: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00466E7C: addiu       $a1, $a1, -0x248C
    ctx->r5 = ADD32(ctx->r5, -0X248C);
    // 0x00466E80: jal         0x0027AD00
    // 0x00466E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_4;
    // 0x00466E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00466E88: addiu       $s0, $s1, 0x10A0
    ctx->r16 = ADD32(ctx->r17, 0X10A0);
    // 0x00466E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466E90: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x00466E94: jal         0x0027ACC4
    // 0x00466E98: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_0027ACC4(rdram, ctx);
        goto after_5;
    // 0x00466E98: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_5:
    // 0x00466E9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00466EA0: addiu       $a1, $a1, -0x24A0
    ctx->r5 = ADD32(ctx->r5, -0X24A0);
    // 0x00466EA4: jal         0x0027AD00
    // 0x00466EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_6;
    // 0x00466EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00466EAC: addiu       $s0, $s1, 0x10DC
    ctx->r16 = ADD32(ctx->r17, 0X10DC);
    // 0x00466EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466EB4: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
    // 0x00466EB8: jal         0x0027ACC4
    // 0x00466EBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0027ACC4(rdram, ctx);
        goto after_7;
    // 0x00466EBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x00466EC0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00466EC4: addiu       $a1, $a1, -0x2450
    ctx->r5 = ADD32(ctx->r5, -0X2450);
    // 0x00466EC8: jal         0x0027AD00
    // 0x00466ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_8;
    // 0x00466ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00466ED0: addiu       $s0, $s1, 0x1118
    ctx->r16 = ADD32(ctx->r17, 0X1118);
    // 0x00466ED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466ED8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x00466EDC: jal         0x0027ACC4
    // 0x00466EE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_0027ACC4(rdram, ctx);
        goto after_9;
    // 0x00466EE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x00466EE4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00466EE8: addiu       $a1, $a1, -0x2410
    ctx->r5 = ADD32(ctx->r5, -0X2410);
    // 0x00466EEC: jal         0x0027AD00
    // 0x00466EF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_10;
    // 0x00466EF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x00466EF4: addiu       $s0, $s1, 0x1208
    ctx->r16 = ADD32(ctx->r17, 0X1208);
    // 0x00466EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466EFC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x00466F00: jal         0x0027ACC4
    // 0x00466F04: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_0027ACC4(rdram, ctx);
        goto after_11;
    // 0x00466F04: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_11:
    // 0x00466F08: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00466F0C: addiu       $a1, $a1, -0x23D0
    ctx->r5 = ADD32(ctx->r5, -0X23D0);
    // 0x00466F10: jal         0x0027AD00
    // 0x00466F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_12;
    // 0x00466F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00466F18: addiu       $s0, $s1, 0x1244
    ctx->r16 = ADD32(ctx->r17, 0X1244);
    // 0x00466F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00466F20: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x00466F24: jal         0x0027ACC4
    // 0x00466F28: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_0027ACC4(rdram, ctx);
        goto after_13;
    // 0x00466F28: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_13:
    // 0x00466F2C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00466F30: addiu       $a1, $a1, -0x2390
    ctx->r5 = ADD32(ctx->r5, -0X2390);
    // 0x00466F34: jal         0x0027AD00
    // 0x00466F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0027AD00(rdram, ctx);
        goto after_14;
    // 0x00466F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x00466F3C: addiu       $a0, $s1, 0x1190
    ctx->r4 = ADD32(ctx->r17, 0X1190);
    // 0x00466F40: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x00466F44: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00466F48: addiu       $s0, $s0, 0x2036
    ctx->r16 = ADD32(ctx->r16, 0X2036);
    // 0x00466F4C: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x00466F50: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00466F54: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x00466F58: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00466F5C: jal         0x0027ACC4
    // 0x00466F60: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_0027ACC4(rdram, ctx);
        goto after_15;
    // 0x00466F60: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_15:
    // 0x00466F64: addiu       $a0, $s1, 0x11CC
    ctx->r4 = ADD32(ctx->r17, 0X11CC);
    // 0x00466F68: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x00466F6C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x00466F70: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x00466F74: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x00466F78: jal         0x0027ACC4
    // 0x00466F7C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_0027ACC4(rdram, ctx);
        goto after_16;
    // 0x00466F7C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_16:
    // 0x00466F80: lw          $v0, 0x51C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X51C);
    // 0x00466F84: sw          $zero, 0x1290($s1)
    MEM_W(0X1290, ctx->r17) = 0;
    // 0x00466F88: sw          $zero, 0xB60($s1)
    MEM_W(0XB60, ctx->r17) = 0;
    // 0x00466F8C: lw          $a3, 0x12C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X12C);
    // 0x00466F90: lw          $t0, 0x130($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X130);
    // 0x00466F94: lw          $t1, 0x134($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X134);
    // 0x00466F98: lw          $t2, 0x138($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X138);
    // 0x00466F9C: sw          $a3, 0xB04($s1)
    MEM_W(0XB04, ctx->r17) = ctx->r7;
    // 0x00466FA0: sw          $t0, 0xB08($s1)
    MEM_W(0XB08, ctx->r17) = ctx->r8;
    // 0x00466FA4: sw          $t1, 0xB0C($s1)
    MEM_W(0XB0C, ctx->r17) = ctx->r9;
    // 0x00466FA8: sw          $t2, 0xB10($s1)
    MEM_W(0XB10, ctx->r17) = ctx->r10;
    // 0x00466FAC: jal         0x00248340
    // 0x00466FB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00248340(rdram, ctx);
        goto after_17;
    // 0x00466FB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
    // 0x00466FB4: jal         0x00284174
    // 0x00466FB8: nop

    func_00284174(rdram, ctx);
        goto after_18;
    // 0x00466FB8: nop

    after_18:
    // 0x00466FBC: bne         $v0, $zero, L_00466FD4
    if (ctx->r2 != 0) {
        // 0x00466FC0: nop
    
            goto L_00466FD4;
    }
    // 0x00466FC0: nop

    // 0x00466FC4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00466FC8: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00466FCC: xori        $v0, $v0, 0x3E7
    ctx->r2 = ctx->r2 ^ 0X3E7;
    // 0x00466FD0: sltu        $s2, $s2, $v0
    ctx->r18 = ctx->r18 < ctx->r2 ? 1 : 0;
L_00466FD4:
    // 0x00466FD4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00466FD8: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x00466FDC: bnel        $v0, $zero, L_00466FE4
    if (ctx->r2 != 0) {
        // 0x00466FE0: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00466FE4;
    }
    goto skip_0;
    // 0x00466FE0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_00466FE4:
    // 0x00466FE4: beq         $s2, $zero, L_00466FF8
    if (ctx->r18 == 0) {
        // 0x00466FE8: nop
    
            goto L_00466FF8;
    }
    // 0x00466FE8: nop

    // 0x00466FEC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x00466FF0: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x00466FF4: sw          $v0, 0x92C($s1)
    MEM_W(0X92C, ctx->r17) = ctx->r2;
L_00466FF8:
    // 0x00466FF8: lbu         $v0, 0x19($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X19);
    // 0x00466FFC: bne         $v0, $zero, L_0046702C
    if (ctx->r2 != 0) {
        // 0x00467000: nop
    
            goto L_0046702C;
    }
    // 0x00467000: nop

    // 0x00467004: lb          $v0, 0x987($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X987);
    // 0x00467008: beq         $v0, $zero, L_0046702C
    if (ctx->r2 == 0) {
        // 0x0046700C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0046702C;
    }
    // 0x0046700C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00467010: jal         0x0025398C
    // 0x00467014: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_0025398C(rdram, ctx);
        goto after_19;
    // 0x00467014: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_19:
    // 0x00467018: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x0046701C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00467020: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00467024: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00467028: sh          $v1, 0x934($v0)
    MEM_H(0X934, ctx->r2) = ctx->r3;
L_0046702C:
    // 0x0046702C: jal         0x002842C8
    // 0x00467030: nop

    func_002842C8(rdram, ctx);
        goto after_20;
    // 0x00467030: nop

    after_20:
    // 0x00467034: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x00467038: beq         $a0, $zero, L_00467048
    if (ctx->r4 == 0) {
        // 0x0046703C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00467048;
    }
    // 0x0046703C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00467040: jal         0x0026E19C
    // 0x00467044: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0026E19C(rdram, ctx);
        goto after_21;
    // 0x00467044: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_21:
L_00467048:
    // 0x00467048: jal         0x002842B4
    // 0x0046704C: nop

    func_002842B4(rdram, ctx);
        goto after_22;
    // 0x0046704C: nop

    after_22:
    // 0x00467050: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00467054: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00467058: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0046705C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00467060: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00467064: jr          $ra
    // 0x00467068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00467068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029A050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029A054: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0029A058: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, 0X1678);
    // 0x0029A05C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0029A060: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029A064: jal         0x0029B820
    // 0x0029A068: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x0029A068: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0029A06C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029A070: jr          $ra
    // 0x0029A074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029A074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0029B9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B9B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0029B9B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029B9B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0029B9BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0029B9C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0029B9C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0029B9C8: jal         0x0029DFF0
    // 0x0029B9CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029B9CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x0029B9D0: bne         $s0, $zero, L_0029B9E0
    if (ctx->r16 != 0) {
        // 0x0029B9D4: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_0029B9E0;
    }
    // 0x0029B9D4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0029B9D8: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0029B9DC: lw          $s0, -0x76E0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X76E0);
L_0029B9E0:
    // 0x0029B9E0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0029B9E4: beq         $v0, $s1, L_0029BA54
    if (ctx->r2 == ctx->r17) {
        // 0x0029B9E8: nop
    
            goto L_0029BA54;
    }
    // 0x0029B9E8: nop

    // 0x0029B9EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0029B9F0: lw          $v0, -0x76E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76E0);
    // 0x0029B9F4: beq         $s0, $v0, L_0029BA24
    if (ctx->r16 == ctx->r2) {
        // 0x0029B9F8: sw          $s1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r17;
            goto L_0029BA24;
    }
    // 0x0029B9F8: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x0029B9FC: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x0029BA00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0029BA04: beq         $v1, $v0, L_0029BA24
    if (ctx->r3 == ctx->r2) {
        // 0x0029BA08: nop
    
            goto L_0029BA24;
    }
    // 0x0029BA08: nop

    // 0x0029BA0C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0029BA10: jal         0x0029BC30
    // 0x0029BA14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029BC30(rdram, ctx);
        goto after_1;
    // 0x0029BA14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0029BA18: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0029BA1C: jal         0x0029C878
    // 0x0029BA20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0029C878(rdram, ctx);
        goto after_2;
    // 0x0029BA20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0029BA24:
    // 0x0029BA24: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029BA28: addiu       $a0, $a0, -0x76E8
    ctx->r4 = ADD32(ctx->r4, -0X76E8);
    // 0x0029BA2C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0029BA30: lw          $a1, -0x76E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X76E0);
    // 0x0029BA34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0029BA38: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x0029BA3C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x0029BA40: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0029BA44: beq         $v1, $zero, L_0029BA54
    if (ctx->r3 == 0) {
        // 0x0029BA48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0029BA54;
    }
    // 0x0029BA48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0029BA4C: jal         0x0029C6DC
    // 0x0029BA50: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    func_0029C6DC(rdram, ctx);
        goto after_3;
    // 0x0029BA50: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    after_3:
L_0029BA54:
    // 0x0029BA54: jal         0x0029E010
    // 0x0029BA58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x0029BA58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x0029BA5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0029BA60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0029BA64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0029BA68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029BA6C: jr          $ra
    // 0x0029BA70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0029BA70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002065CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002065CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002065D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002065D4: addiu       $a0, $a0, -0x7210
    ctx->r4 = ADD32(ctx->r4, -0X7210);
    // 0x002065D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002065DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x002065E0: addiu       $a0, $a0, -0xC10
    ctx->r4 = ADD32(ctx->r4, -0XC10);
    // 0x002065E4: jal         0x00200818
    // 0x002065E8: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    func_00200818(rdram, ctx);
        goto after_0;
    // 0x002065E8: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    after_0:
    // 0x002065EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002065F0: jr          $ra
    // 0x002065F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002065F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004454F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004454F4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x004454F8: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x004454FC: beq         $v1, $zero, L_00445510
    if (ctx->r3 == 0) {
        // 0x00445500: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00445510;
    }
    // 0x00445500: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00445504:
    // 0x00445504: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00445508: bne         $v1, $zero, L_00445504
    if (ctx->r3 != 0) {
        // 0x0044550C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00445504;
    }
    // 0x0044550C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_00445510:
    // 0x00445510: jr          $ra
    // 0x00445514: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    return;
    // 0x00445514: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
;}
RECOMP_FUNC void func_002742F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002742F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x002742F8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x002742FC: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00274300: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00274304: addiu       $s3, $a0, 0x4
    ctx->r19 = ADD32(ctx->r4, 0X4);
    // 0x00274308: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0027430C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00274310: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00274314: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00274318: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0027431C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00274320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00274324: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x00274328: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0027432C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_00274330:
    // 0x00274330: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
    // 0x00274334: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x00274338: beql        $v0, $zero, L_00274398
    if (ctx->r2 == 0) {
        // 0x0027433C: addiu       $s0, $s0, 0xCC
        ctx->r16 = ADD32(ctx->r16, 0XCC);
            goto L_00274398;
    }
    goto skip_0;
    // 0x0027433C: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
    skip_0:
    // 0x00274340: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x00274344: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x00274348: sw          $s5, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r21;
    // 0x0027434C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x00274350: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x00274354: beql        $v1, $v0, L_00274398
    if (ctx->r3 == ctx->r2) {
        // 0x00274358: addiu       $s0, $s0, 0xCC
        ctx->r16 = ADD32(ctx->r16, 0XCC);
            goto L_00274398;
    }
    goto skip_1;
    // 0x00274358: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
    skip_1:
    // 0x0027435C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00274360: addiu       $s1, $a0, 0x84
    ctx->r17 = ADD32(ctx->r4, 0X84);
    // 0x00274364: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00274368: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0027436C: lh          $a1, 0xDC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XDC);
    // 0x00274370: jal         0x00293E60
    // 0x00274374: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293E60(rdram, ctx);
        goto after_0;
    // 0x00274374: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00274378: jal         0x00293580
    // 0x0027437C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293580(rdram, ctx);
        goto after_1;
    // 0x0027437C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00274380: beql        $v0, $zero, L_00274394
    if (ctx->r2 == 0) {
        // 0x00274384: sw          $s4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r20;
            goto L_00274394;
    }
    goto skip_2;
    // 0x00274384: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
    skip_2:
    // 0x00274388: jal         0x00293EC0
    // 0x0027438C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00293EC0(rdram, ctx);
        goto after_2;
    // 0x0027438C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00274390: sw          $s4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r20;
L_00274394:
    // 0x00274394: addiu       $s0, $s0, 0xCC
    ctx->r16 = ADD32(ctx->r16, 0XCC);
L_00274398:
    // 0x00274398: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0027439C: slti        $v0, $s2, 0x11
    ctx->r2 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x002743A0: bne         $v0, $zero, L_00274330
    if (ctx->r2 != 0) {
        // 0x002743A4: addiu       $s3, $s3, 0xCC
        ctx->r19 = ADD32(ctx->r19, 0XCC);
            goto L_00274330;
    }
    // 0x002743A4: addiu       $s3, $s3, 0xCC
    ctx->r19 = ADD32(ctx->r19, 0XCC);
    // 0x002743A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x002743AC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x002743B0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x002743B4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x002743B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002743BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002743C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002743C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002743C8: jr          $ra
    // 0x002743CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x002743CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0025F6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025F6B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025F6B8: lb          $v1, 0xC7($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC7);
    // 0x0025F6BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0025F6C0: beq         $v1, $zero, L_0025F6D0
    if (ctx->r3 == 0) {
        // 0x0025F6C4: sb          $v0, 0x133($a1)
        MEM_B(0X133, ctx->r5) = ctx->r2;
            goto L_0025F6D0;
    }
    // 0x0025F6C4: sb          $v0, 0x133($a1)
    MEM_B(0X133, ctx->r5) = ctx->r2;
    // 0x0025F6C8: jal         0x00243414
    // 0x0025F6CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0025F6CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
L_0025F6D0:
    // 0x0025F6D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025F6D4: jr          $ra
    // 0x0025F6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025F6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
