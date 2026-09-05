#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00418F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418F18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418F1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418F20: lb          $v0, 0x2A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2A);
    // 0x00418F24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418F28: jal         0x0041648C
    // 0x00418F2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418F2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418F30: sb          $v0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r2;
    // 0x00418F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418F38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418F3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418F40: jr          $ra
    // 0x00418F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00418FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418FF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418FF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418FFC: lb          $v0, 0x2B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2B);
    // 0x00419000: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00419004: jal         0x0041648C
    // 0x00419008: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00419008: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x0041900C: sb          $v0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r2;
    // 0x00419010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00419014: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00419018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041901C: jr          $ra
    // 0x00419020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419020: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00419168: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041916C: addiu       $v0, $v0, 0x5F9C
    ctx->r2 = ADD32(ctx->r2, 0X5F9C);
    // 0x00419170: j           L_00419204
    // 0x00419174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00419178: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041917C: addiu       $v0, $v0, 0x5FB4
    ctx->r2 = ADD32(ctx->r2, 0X5FB4);
    // 0x00419180: j           L_00419204
    // 0x00419184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00419188: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041918C: addiu       $v0, $v0, 0x5FCC
    ctx->r2 = ADD32(ctx->r2, 0X5FCC);
    // 0x00419190: j           L_00419204
    // 0x00419194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x00419194: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x00419198: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041919C: addiu       $v0, $v0, 0x5FE4
    ctx->r2 = ADD32(ctx->r2, 0X5FE4);
    // 0x004191A0: j           L_00419204
    // 0x004191A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004191A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191AC: addiu       $v0, $v0, 0x5FFC
    ctx->r2 = ADD32(ctx->r2, 0X5FFC);
    // 0x004191B0: j           L_00419204
    // 0x004191B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004191B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191BC: addiu       $v0, $v0, 0x6014
    ctx->r2 = ADD32(ctx->r2, 0X6014);
    // 0x004191C0: j           L_00419204
    // 0x004191C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004191C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191CC: addiu       $v0, $v0, 0x602C
    ctx->r2 = ADD32(ctx->r2, 0X602C);
    // 0x004191D0: j           L_00419204
    // 0x004191D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004191D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191DC: addiu       $v0, $v0, 0x6044
    ctx->r2 = ADD32(ctx->r2, 0X6044);
    // 0x004191E0: j           L_00419204
    // 0x004191E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004191E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191EC: addiu       $v0, $v0, 0x605C
    ctx->r2 = ADD32(ctx->r2, 0X605C);
    // 0x004191F0: j           L_00419204
    // 0x004191F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00419204;
    // 0x004191F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x004191F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004191FC: addiu       $v0, $v0, 0x6074
    ctx->r2 = ADD32(ctx->r2, 0X6074);
    // 0x00419200: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419204:
    // 0x00419204: jr          $ra
    // 0x00419208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00419208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_00419274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419274: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00419278: addu        $at, $at, $v0
    gpr jr_addend_00419280 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041927C: lw          $v0, 0xFE0($at)
    ctx->r2 = ADD32(ctx->r1, 0XFE0);
    // 0x00419280: jr          $v0
    // 0x00419284: nop

    switch (jr_addend_00419280 >> 2) {
        case 0: goto L_00419288; break;
        case 1: goto L_00419298; break;
        case 2: goto L_004192A8; break;
        case 3: goto L_004192B8; break;
        case 4: goto L_004192C8; break;
        case 5: goto L_004192D8; break;
        case 6: goto L_004192E8; break;
        case 7: goto L_004192F8; break;
        case 8: goto L_00419308; break;
        default: switch_error(__func__, 0x00419280, 0x800C0FE0);
    }
    // 0x00419284: nop

L_00419288:
    // 0x00419288: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041928C: addiu       $v0, $v0, 0x608C
    ctx->r2 = ADD32(ctx->r2, 0X608C);
    // 0x00419290: j           L_00419314
    // 0x00419294: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x00419294: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419298:
    // 0x00419298: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041929C: addiu       $v0, $v0, 0x60A4
    ctx->r2 = ADD32(ctx->r2, 0X60A4);
    // 0x004192A0: j           L_00419314
    // 0x004192A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192A4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192A8:
    // 0x004192A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192AC: addiu       $v0, $v0, 0x60BC
    ctx->r2 = ADD32(ctx->r2, 0X60BC);
    // 0x004192B0: j           L_00419314
    // 0x004192B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192B8:
    // 0x004192B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192BC: addiu       $v0, $v0, 0x60D4
    ctx->r2 = ADD32(ctx->r2, 0X60D4);
    // 0x004192C0: j           L_00419314
    // 0x004192C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192C8:
    // 0x004192C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192CC: addiu       $v0, $v0, 0x60EC
    ctx->r2 = ADD32(ctx->r2, 0X60EC);
    // 0x004192D0: j           L_00419314
    // 0x004192D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192D4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192D8:
    // 0x004192D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192DC: addiu       $v0, $v0, 0x6104
    ctx->r2 = ADD32(ctx->r2, 0X6104);
    // 0x004192E0: j           L_00419314
    // 0x004192E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192E4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192E8:
    // 0x004192E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192EC: addiu       $v0, $v0, 0x611C
    ctx->r2 = ADD32(ctx->r2, 0X611C);
    // 0x004192F0: j           L_00419314
    // 0x004192F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x004192F4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_004192F8:
    // 0x004192F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004192FC: addiu       $v0, $v0, 0x6134
    ctx->r2 = ADD32(ctx->r2, 0X6134);
    // 0x00419300: j           L_00419314
    // 0x00419304: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    entry_00419314(rdram, ctx);
    return;
    // 0x00419304: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00419308:
    // 0x00419308: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041930C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041930C(rdram, ctx);
;}
RECOMP_FUNC void entry_00419308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419308: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041930C ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041930C(rdram, ctx);
;}
RECOMP_FUNC void entry_00419314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419314: jr          $ra
    // 0x00419318: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00419318: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004193F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004193F8: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x004193FC: lbu         $v0, 0x32($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X32);
    // 0x00419400: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419404: j           L_00419498
    // 0x00419408: sb          $v0, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419408: sb          $v0, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r2;
    // 0x0041940C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419410: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00419414: lbu         $v0, 0x33($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X33);
    // 0x00419418: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041941C: j           L_00419498
    // 0x00419420: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419420: sb          $v0, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r2;
    // 0x00419424: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419428: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041942C: lbu         $v0, 0x34($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X34);
    // 0x00419430: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419434: j           L_00419498
    // 0x00419438: sb          $v0, 0x34($v1)
    MEM_B(0X34, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419438: sb          $v0, 0x34($v1)
    MEM_B(0X34, ctx->r3) = ctx->r2;
    // 0x0041943C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419440: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00419444: lbu         $v0, 0x35($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X35);
    // 0x00419448: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041944C: j           L_00419498
    // 0x00419450: sb          $v0, 0x35($v1)
    MEM_B(0X35, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419450: sb          $v0, 0x35($v1)
    MEM_B(0X35, ctx->r3) = ctx->r2;
    // 0x00419454: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419458: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041945C: lbu         $v0, 0x36($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X36);
    // 0x00419460: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419464: j           L_00419498
    // 0x00419468: sb          $v0, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419468: sb          $v0, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r2;
    // 0x0041946C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419470: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00419474: lbu         $v0, 0x37($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X37);
    // 0x00419478: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x0041947C: j           L_00419498
    // 0x00419480: sb          $v0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r2;
        goto L_00419498;
    // 0x00419480: sb          $v0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r2;
    // 0x00419484: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00419488: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x0041948C: lbu         $v0, 0x39($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X39);
    // 0x00419490: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x00419494: sb          $v0, 0x39($v1)
    MEM_B(0X39, ctx->r3) = ctx->r2;
L_00419498:
    // 0x00419498: jr          $ra
    // 0x0041949C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041949C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_004196A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004196A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004196A8: jr          $ra
    // 0x004196AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004196AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00419748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419748: nop

    // 0x0041974C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00419750: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00419754: jal         0x00430454
    // 0x00419758: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_00430454(rdram, ctx);
        goto after_0;
    // 0x00419758: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x0041975C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x00419760: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00419764: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00419768: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041976C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419778: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041977C: sw          $v0, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = ctx->r2;
    // 0x00419780: jr          $ra
    // 0x00419784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00419784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004199E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004199E4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004199E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x004199EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004199F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004199F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004199F8: jr          $ra
    // 0x004199FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004199FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419CCC: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00419CD0: bgez        $a2, L_00419CDC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00419CD4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00419CDC;
    }
    // 0x00419CD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419CD8: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00419CDC:
    // 0x00419CDC: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419CE0: bne         $s0, $zero, L_00419CF8
    if (ctx->r16 != 0) {
        // 0x00419CE4: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419CF8;
    }
    // 0x00419CE4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419CE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419CEC: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x00419CF0: j           L_00419D7C
    // 0x00419CF4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419CF4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419CF8:
    // 0x00419CF8: bne         $s0, $v0, L_00419D10
    if (ctx->r16 != ctx->r2) {
        // 0x00419CFC: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419D10;
    }
    // 0x00419CFC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419D00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D04: addiu       $v0, $v0, 0x65B8
    ctx->r2 = ADD32(ctx->r2, 0X65B8);
    // 0x00419D08: j           L_00419D7C
    // 0x00419D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419D10:
    // 0x00419D10: bne         $s0, $v0, L_00419D28
    if (ctx->r16 != ctx->r2) {
        // 0x00419D14: nop
    
            goto L_00419D28;
    }
    // 0x00419D14: nop

    // 0x00419D18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D1C: addiu       $v0, $v0, 0x65A0
    ctx->r2 = ADD32(ctx->r2, 0X65A0);
    // 0x00419D20: j           L_00419D7C
    // 0x00419D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419D28:
    // 0x00419D28: blez        $s0, L_00419D50
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419D2C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419D50;
    }
    // 0x00419D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419D30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D34: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00419D38: jal         0x004160F0
    // 0x00419D3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419D3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419D40: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419D44: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419D48: j           L_00419D6C
    // 0x00419D4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_00419D6C;
    // 0x00419D4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419D50:
    // 0x00419D50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D54: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00419D58: jal         0x004160F0
    // 0x00419D5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419D5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419D60: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419D64: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419D68: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419D6C:
    // 0x00419D6C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00419D70: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00419D74: jal         0x0029E3E0
    // 0x00419D78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00419D78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_00419D7C:
    // 0x00419D7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419D80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419D84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419D88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419D8C: jr          $ra
    // 0x00419D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419CDC: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419CE0: bne         $s0, $zero, L_00419CF8
    if (ctx->r16 != 0) {
        // 0x00419CE4: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419CF8;
    }
    // 0x00419CE4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419CE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419CEC: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x00419CF0: j           L_00419D7C
    // 0x00419CF4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419CF4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419CF8:
    // 0x00419CF8: bne         $s0, $v0, L_00419D10
    if (ctx->r16 != ctx->r2) {
        // 0x00419CFC: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419D10;
    }
    // 0x00419CFC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419D00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D04: addiu       $v0, $v0, 0x65B8
    ctx->r2 = ADD32(ctx->r2, 0X65B8);
    // 0x00419D08: j           L_00419D7C
    // 0x00419D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419D10:
    // 0x00419D10: bne         $s0, $v0, L_00419D28
    if (ctx->r16 != ctx->r2) {
        // 0x00419D14: nop
    
            goto L_00419D28;
    }
    // 0x00419D14: nop

    // 0x00419D18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D1C: addiu       $v0, $v0, 0x65A0
    ctx->r2 = ADD32(ctx->r2, 0X65A0);
    // 0x00419D20: j           L_00419D7C
    // 0x00419D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419D7C;
    // 0x00419D24: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419D28:
    // 0x00419D28: blez        $s0, L_00419D50
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419D2C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419D50;
    }
    // 0x00419D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419D30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D34: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00419D38: jal         0x004160F0
    // 0x00419D3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419D3C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419D40: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419D44: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419D48: j           L_00419D6C
    // 0x00419D4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_00419D6C;
    // 0x00419D4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419D50:
    // 0x00419D50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419D54: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x00419D58: jal         0x004160F0
    // 0x00419D5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419D5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419D60: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419D64: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419D68: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419D6C:
    // 0x00419D6C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00419D70: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00419D74: jal         0x0029E3E0
    // 0x00419D78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00419D78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_00419D7C:
    // 0x00419D7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419D80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419D84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419D88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419D8C: jr          $ra
    // 0x00419D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419E1C: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00419E20: bgez        $a2, L_00419E2C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00419E24: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00419E2C;
    }
    // 0x00419E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419E28: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00419E2C:
    // 0x00419E2C: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419E30: bne         $s0, $zero, L_00419E48
    if (ctx->r16 != 0) {
        // 0x00419E34: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419E48;
    }
    // 0x00419E34: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E3C: addiu       $v0, $v0, 0x6510
    ctx->r2 = ADD32(ctx->r2, 0X6510);
    // 0x00419E40: j           L_00419ECC
    // 0x00419E44: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E44: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E48:
    // 0x00419E48: bne         $s0, $v0, L_00419E60
    if (ctx->r16 != ctx->r2) {
        // 0x00419E4C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419E60;
    }
    // 0x00419E4C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419E50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E54: addiu       $v0, $v0, 0x64F8
    ctx->r2 = ADD32(ctx->r2, 0X64F8);
    // 0x00419E58: j           L_00419ECC
    // 0x00419E5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E60:
    // 0x00419E60: bne         $s0, $v0, L_00419E78
    if (ctx->r16 != ctx->r2) {
        // 0x00419E64: nop
    
            goto L_00419E78;
    }
    // 0x00419E64: nop

    // 0x00419E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E6C: addiu       $v0, $v0, 0x64E0
    ctx->r2 = ADD32(ctx->r2, 0X64E0);
    // 0x00419E70: j           L_00419ECC
    // 0x00419E74: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E74: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E78:
    // 0x00419E78: blez        $s0, L_00419EA0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419E7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419EA0;
    }
    // 0x00419E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419E80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E84: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00419E88: jal         0x004160F0
    // 0x00419E8C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419E8C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419E90: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419E94: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419E98: j           L_00419EBC
    // 0x00419E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_00419EBC;
    // 0x00419E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419EA0:
    // 0x00419EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419EA4: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00419EA8: jal         0x004160F0
    // 0x00419EAC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419EAC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419EB0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419EB4: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419EB8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419EBC:
    // 0x00419EBC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00419EC0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00419EC4: jal         0x0029E3E0
    // 0x00419EC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00419EC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_00419ECC:
    // 0x00419ECC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419ED0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419ED4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419ED8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419EDC: jr          $ra
    // 0x00419EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419E2C: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419E30: bne         $s0, $zero, L_00419E48
    if (ctx->r16 != 0) {
        // 0x00419E34: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419E48;
    }
    // 0x00419E34: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419E38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E3C: addiu       $v0, $v0, 0x6510
    ctx->r2 = ADD32(ctx->r2, 0X6510);
    // 0x00419E40: j           L_00419ECC
    // 0x00419E44: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E44: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E48:
    // 0x00419E48: bne         $s0, $v0, L_00419E60
    if (ctx->r16 != ctx->r2) {
        // 0x00419E4C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419E60;
    }
    // 0x00419E4C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419E50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E54: addiu       $v0, $v0, 0x64F8
    ctx->r2 = ADD32(ctx->r2, 0X64F8);
    // 0x00419E58: j           L_00419ECC
    // 0x00419E5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E5C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E60:
    // 0x00419E60: bne         $s0, $v0, L_00419E78
    if (ctx->r16 != ctx->r2) {
        // 0x00419E64: nop
    
            goto L_00419E78;
    }
    // 0x00419E64: nop

    // 0x00419E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E6C: addiu       $v0, $v0, 0x64E0
    ctx->r2 = ADD32(ctx->r2, 0X64E0);
    // 0x00419E70: j           L_00419ECC
    // 0x00419E74: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_00419ECC;
    // 0x00419E74: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419E78:
    // 0x00419E78: blez        $s0, L_00419EA0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419E7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419EA0;
    }
    // 0x00419E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419E80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419E84: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00419E88: jal         0x004160F0
    // 0x00419E8C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419E8C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419E90: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419E94: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419E98: j           L_00419EBC
    // 0x00419E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_00419EBC;
    // 0x00419E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419EA0:
    // 0x00419EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419EA4: addiu       $v0, $v0, 0x6528
    ctx->r2 = ADD32(ctx->r2, 0X6528);
    // 0x00419EA8: jal         0x004160F0
    // 0x00419EAC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419EAC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419EB0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419EB4: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419EB8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419EBC:
    // 0x00419EBC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00419EC0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x00419EC4: jal         0x0029E3E0
    // 0x00419EC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x00419EC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_00419ECC:
    // 0x00419ECC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00419ED0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00419ED4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00419ED8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00419EDC: jr          $ra
    // 0x00419EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00419EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419F60: addiu       $a2, $v0, -0x80
    ctx->r6 = ADD32(ctx->r2, -0X80);
    // 0x00419F64: bgez        $a2, L_00419F70
    if (SIGNED(ctx->r6) >= 0) {
        // 0x00419F68: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_00419F70;
    }
    // 0x00419F68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419F6C: addiu       $a2, $v0, -0x79
    ctx->r6 = ADD32(ctx->r2, -0X79);
L_00419F70:
    // 0x00419F70: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419F74: bne         $s0, $zero, L_00419F8C
    if (ctx->r16 != 0) {
        // 0x00419F78: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419F8C;
    }
    // 0x00419F78: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419F7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419F80: addiu       $v0, $v0, 0x6570
    ctx->r2 = ADD32(ctx->r2, 0X6570);
    // 0x00419F84: j           L_0041A010
    // 0x00419F88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419F88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419F8C:
    // 0x00419F8C: bne         $s0, $v0, L_00419FA4
    if (ctx->r16 != ctx->r2) {
        // 0x00419F90: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419FA4;
    }
    // 0x00419F90: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419F94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419F98: addiu       $v0, $v0, 0x6558
    ctx->r2 = ADD32(ctx->r2, 0X6558);
    // 0x00419F9C: j           L_0041A010
    // 0x00419FA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419FA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419FA4:
    // 0x00419FA4: bne         $s0, $v0, L_00419FBC
    if (ctx->r16 != ctx->r2) {
        // 0x00419FA8: nop
    
            goto L_00419FBC;
    }
    // 0x00419FA8: nop

    // 0x00419FAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FB0: addiu       $v0, $v0, 0x6540
    ctx->r2 = ADD32(ctx->r2, 0X6540);
    // 0x00419FB4: j           L_0041A010
    // 0x00419FB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419FB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419FBC:
    // 0x00419FBC: blez        $s0, L_00419FE4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419FC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419FE4;
    }
    // 0x00419FC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419FC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FC8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FCC: jal         0x004160F0
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419FD4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FD8: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419FDC: j           L_0041A000
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041A000;
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419FE4:
    // 0x00419FE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FE8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FEC: jal         0x004160F0
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419FF4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FF8: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419FFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041A000:
    // 0x0041A000: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041A004: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041A008: jal         0x0029E3E0
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041A010:
    // 0x0041A010: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A01C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A020: jr          $ra
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419F70: sra         $s0, $a2, 3
    ctx->r16 = S32(SIGNED(ctx->r6) >> 3);
    // 0x00419F74: bne         $s0, $zero, L_00419F8C
    if (ctx->r16 != 0) {
        // 0x00419F78: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_00419F8C;
    }
    // 0x00419F78: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x00419F7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419F80: addiu       $v0, $v0, 0x6570
    ctx->r2 = ADD32(ctx->r2, 0X6570);
    // 0x00419F84: j           L_0041A010
    // 0x00419F88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419F88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419F8C:
    // 0x00419F8C: bne         $s0, $v0, L_00419FA4
    if (ctx->r16 != ctx->r2) {
        // 0x00419F90: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_00419FA4;
    }
    // 0x00419F90: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x00419F94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419F98: addiu       $v0, $v0, 0x6558
    ctx->r2 = ADD32(ctx->r2, 0X6558);
    // 0x00419F9C: j           L_0041A010
    // 0x00419FA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419FA0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419FA4:
    // 0x00419FA4: bne         $s0, $v0, L_00419FBC
    if (ctx->r16 != ctx->r2) {
        // 0x00419FA8: nop
    
            goto L_00419FBC;
    }
    // 0x00419FA8: nop

    // 0x00419FAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FB0: addiu       $v0, $v0, 0x6540
    ctx->r2 = ADD32(ctx->r2, 0X6540);
    // 0x00419FB4: j           L_0041A010
    // 0x00419FB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041A010;
    // 0x00419FB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_00419FBC:
    // 0x00419FBC: blez        $s0, L_00419FE4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00419FC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00419FE4;
    }
    // 0x00419FC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00419FC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FC8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FCC: jal         0x004160F0
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419FD4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FD8: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419FDC: j           L_0041A000
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041A000;
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_00419FE4:
    // 0x00419FE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FE8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FEC: jal         0x004160F0
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_1;
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_1:
    // 0x00419FF4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FF8: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419FFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041A000:
    // 0x0041A000: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041A004: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041A008: jal         0x0029E3E0
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_2;
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_2:
L_0041A010:
    // 0x0041A010: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A01C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A020: jr          $ra
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00419FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419FD0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x00419FD4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FD8: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x00419FDC: j           L_0041A000
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041A000;
    // 0x00419FE0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00419FE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00419FE8: addiu       $v0, $v0, 0x6588
    ctx->r2 = ADD32(ctx->r2, 0X6588);
    // 0x00419FEC: jal         0x004160F0
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00419FF0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x00419FF4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00419FF8: addiu       $a1, $a1, 0x1038
    ctx->r5 = ADD32(ctx->r5, 0X1038);
    // 0x00419FFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041A000:
    // 0x0041A000: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041A004: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x0041A008: jal         0x0029E3E0
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x0041A010: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A01C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A020: jr          $ra
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041A00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A00C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0041A010: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A01C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A020: jr          $ra
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041A08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A08C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041A090: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x0041A094: bne         $v0, $zero, L_0041A0A4
    if (ctx->r2 != 0) {
        // 0x0041A098: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_0041A0A4;
    }
    // 0x0041A098: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x0041A09C: j           L_0041A0AC
    // 0x0041A0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041A0AC;
    // 0x0041A0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041A0A4:
    // 0x0041A0A4: beql        $a0, $v0, L_0041A0AC
    if (ctx->r4 == ctx->r2) {
        // 0x0041A0A8: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_0041A0AC;
    }
    goto skip_0;
    // 0x0041A0A8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    skip_0:
L_0041A0AC:
    // 0x0041A0AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A0B0: sw          $a0, 0x1F78($at)
    MEM_W(0X1F78, ctx->r1) = ctx->r4;
    // 0x0041A0B4: jal         0x002759C4
    // 0x0041A0B8: nop

    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x0041A0B8: nop

    after_0:
    // 0x0041A0BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A0C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041A0C4: jr          $ra
    // 0x0041A0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041A174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A174: lw          $a0, 0x1F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F78);
    // 0x0041A178: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A17C: sw          $v0, 0x1F70($at)
    MEM_W(0X1F70, ctx->r1) = ctx->r2;
    // 0x0041A180: jal         0x002759C4
    // 0x0041A184: nop

    func_002759C4(rdram, ctx);
        goto after_0;
    // 0x0041A184: nop

    after_0:
    // 0x0041A188: jal         0x00275A74
    // 0x0041A18C: nop

    func_00275A74(rdram, ctx);
        goto after_1;
    // 0x0041A18C: nop

    after_1:
    // 0x0041A190: jal         0x0027598C
    // 0x0041A194: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_0027598C(rdram, ctx);
        goto after_2;
    // 0x0041A194: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x0041A198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A19C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A1A0: sw          $v0, 0x1F74($at)
    MEM_W(0X1F74, ctx->r1) = ctx->r2;
    // 0x0041A1A4: jal         0x00285CC4
    // 0x0041A1A8: nop

    func_00285CC4(rdram, ctx);
        goto after_3;
    // 0x0041A1A8: nop

    after_3:
    // 0x0041A1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0041A1B0: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x0041A1B4: addiu       $a2, $a2, -0x6B4C
    ctx->r6 = ADD32(ctx->r6, -0X6B4C);
    // 0x0041A1B8: jal         0x00416894
    // 0x0041A1BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00416894(rdram, ctx);
        goto after_4;
    // 0x0041A1BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0041A1C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041A1C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041A1C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A1CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A1D0: jr          $ra
    // 0x0041A1D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041A1D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041A26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041A270: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_0041A274:
    // 0x0041A274: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0041A278: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x0041A27C: lw          $v1, 0x5F8C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F8C);
    // 0x0041A280: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0041A284: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0041A288: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A28C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041A290: sw          $v1, 0x910($at)
    MEM_W(0X910, ctx->r1) = ctx->r3;
    // 0x0041A294: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x0041A298: bne         $v0, $zero, L_0041A274
    if (ctx->r2 != 0) {
        // 0x0041A29C: addiu       $a1, $a1, 0x224
        ctx->r5 = ADD32(ctx->r5, 0X224);
            goto L_0041A274;
    }
    // 0x0041A29C: addiu       $a1, $a1, 0x224
    ctx->r5 = ADD32(ctx->r5, 0X224);
    // 0x0041A2A0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A2A4: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x0041A2A8: jal         0x0026EDA8
    // 0x0041A2AC: nop

    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x0041A2AC: nop

    after_0:
    // 0x0041A2B0: jal         0x00285304
    // 0x0041A2B4: nop

    func_00285304(rdram, ctx);
        goto after_1;
    // 0x0041A2B4: nop

    after_1:
    // 0x0041A2B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041A2BC: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x0041A2C0: beq         $v0, $zero, L_0041A2F0
    if (ctx->r2 == 0) {
        // 0x0041A2C4: lui         $a0, 0x80
        ctx->r4 = S32(0X80 << 16);
            goto L_0041A2F0;
    }
    // 0x0041A2C4: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x0041A2C8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A2CC: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
    // 0x0041A2D0: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041A2D4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x0041A2D8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0041A2DC: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041A2E0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A2E4: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041A2E8: j           L_0041A30C
    // 0x0041A2EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
        goto L_0041A30C;
    // 0x0041A2EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
L_0041A2F0:
    // 0x0041A2F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A2F4: lw          $v0, 0x80($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X80);
    // 0x0041A2F8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x0041A2FC: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
    // 0x0041A300: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0041A304: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x0041A308: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
L_0041A30C:
    // 0x0041A30C: jal         0x00275F7C
    // 0x0041A310: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    func_00275F7C(rdram, ctx);
        goto after_2;
    // 0x0041A310: sw          $v0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r2;
    after_2:
    // 0x0041A314: jal         0x00275DC0
    // 0x0041A318: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_00275DC0(rdram, ctx);
        goto after_3;
    // 0x0041A318: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x0041A31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0041A320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041A324: jr          $ra
    // 0x0041A328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041A36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A36C: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    // 0x0041A370: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A374: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x0041A378: jal         0x0026EDA8
    // 0x0041A37C: nop

    func_0026EDA8(rdram, ctx);
        goto after_0;
    // 0x0041A37C: nop

    after_0:
    // 0x0041A380: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A384: jr          $ra
    // 0x0041A388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041A3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A3E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0041A3EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A3F0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A3F4: jal         0x00430330
    // 0x0041A3F8: nop

    func_00430330(rdram, ctx);
        goto after_0;
    // 0x0041A3F8: nop

    after_0:
    // 0x0041A3FC: j           L_0041A40C
    // 0x0041A400: nop

        goto L_0041A40C;
    // 0x0041A400: nop

    // 0x0041A404: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0041A408: sw          $zero, 0x510($v0)
    MEM_W(0X510, ctx->r2) = 0;
L_0041A40C:
    // 0x0041A40C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0041A410: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A414: jr          $ra
    // 0x0041A418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0041A418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0041A4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A4B8: bc1f        L_0041A4C4
    if (!c1cs) {
        // 0x0041A4BC: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_0041A4C4;
    }
    // 0x0041A4BC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x0041A4C0: swc1        $f1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
L_0041A4C4:
    // 0x0041A4C4: jr          $ra
    // 0x0041A4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041A4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041A4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A4D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0041A4D4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0041A4D8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x0041A4DC: addiu       $a3, $a3, 0x11B0
    ctx->r7 = ADD32(ctx->r7, 0X11B0);
    // 0x0041A4E0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x0041A4E4: lw          $a2, -0x5524($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5524);
    // 0x0041A4E8: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
L_0041A4EC:
    // 0x0041A4EC: beq         $v0, $zero, L_0041A504
    if (ctx->r2 == 0) {
        // 0x0041A4F0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041A504;
    }
    // 0x0041A4F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A4F4: addu        $v0, $v0, $a3
    gpr jr_addend_0041A4FC = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x0041A4F8: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x0041A4FC: jr          $v0
    // 0x0041A500: nop

    switch (jr_addend_0041A4FC >> 2) {
        case 0: goto L_0041A504; break;
        case 1: goto L_0041A50C; break;
        case 2: goto L_0041A514; break;
        case 3: goto L_0041A51C; break;
        case 4: goto L_0041A524; break;
        case 5: goto L_0041A52C; break;
        case 6: goto L_0041A534; break;
        case 7: goto L_0041A53C; break;
        case 8: goto L_0041A544; break;
        case 9: goto L_0041A54C; break;
        case 10: goto L_0041A554; break;
        default: switch_error(__func__, 0x0041A4FC, 0x800C11B0);
    }
    // 0x0041A500: nop

L_0041A504:
    // 0x0041A504: j           L_0041A558
    // 0x0041A508: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A558;
    // 0x0041A508: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_0041A50C:
    // 0x0041A50C: j           L_0041A558
    // 0x0041A510: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A558;
    // 0x0041A510: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
L_0041A514:
    // 0x0041A514: j           L_0041A558
    // 0x0041A518: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A558;
    // 0x0041A518: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
L_0041A51C:
    // 0x0041A51C: j           L_0041A558
    // 0x0041A520: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A558;
    // 0x0041A520: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
L_0041A524:
    // 0x0041A524: j           L_0041A558
    // 0x0041A528: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A558;
    // 0x0041A528: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
L_0041A52C:
    // 0x0041A52C: j           L_0041A558
    // 0x0041A530: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A558;
    // 0x0041A530: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
L_0041A534:
    // 0x0041A534: j           L_0041A558
    // 0x0041A538: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A558;
    // 0x0041A538: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_0041A53C:
    // 0x0041A53C: j           L_0041A558
    // 0x0041A540: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A558;
    // 0x0041A540: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
L_0041A544:
    // 0x0041A544: j           L_0041A558
    // 0x0041A548: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A558;
    // 0x0041A548: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
L_0041A54C:
    // 0x0041A54C: j           L_0041A558
    // 0x0041A550: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A558;
    // 0x0041A550: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
L_0041A554:
    // 0x0041A554: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
L_0041A558:
    // 0x0041A558: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x0041A55C: bne         $v0, $zero, L_0041A598
    if (ctx->r2 != 0) {
        // 0x0041A560: nop
    
            goto L_0041A598;
    }
    // 0x0041A560: nop

    // 0x0041A564: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041A568: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0041A56C: bne         $v0, $zero, L_0041A57C
    if (ctx->r2 != 0) {
        // 0x0041A570: nop
    
            goto L_0041A57C;
    }
    // 0x0041A570: nop

    // 0x0041A574: j           L_0041A584
    // 0x0041A578: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0041A584;
    // 0x0041A578: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041A57C:
    // 0x0041A57C: bltzl       $v1, L_0041A584
    if (SIGNED(ctx->r3) < 0) {
        // 0x0041A580: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_0041A584;
    }
    goto skip_0;
    // 0x0041A580: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
L_0041A584:
    // 0x0041A584: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041A588: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x0041A58C: bne         $v0, $zero, L_0041A4EC
    if (ctx->r2 != 0) {
        // 0x0041A590: sltiu       $v0, $v1, 0xB
        ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
            goto L_0041A4EC;
    }
    // 0x0041A590: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041A594: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_0041A598:
    // 0x0041A598: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A59C: sw          $v1, 0x924($at)
    MEM_W(0X924, ctx->r1) = ctx->r3;
    // 0x0041A5A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A5A4: beq         $v1, $v0, L_0041A5C4
    if (ctx->r3 == ctx->r2) {
            // 0x0041A5A8: lui         $v1, 0xFE7F
    ctx->r3 = S32(0XFE7F << 16);
    func_0041A5C4(rdram, ctx);
    return;
    }
    // 0x0041A5A8: lui         $v1, 0xFE7F
    ctx->r3 = S32(0XFE7F << 16);
    // 0x0041A5AC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0041A5B0: lw          $v1, 0x2D8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2D8);
    // 0x0041A5B4: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x0041A5B8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041A5BC: jr          $ra
    // 0x0041A5C0: sw          $v1, 0x2D8($v0)
    MEM_W(0X2D8, ctx->r2) = ctx->r3;
    return;
    // 0x0041A5C0: sw          $v1, 0x2D8($v0)
    MEM_W(0X2D8, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void entry_0041A4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A4E4: lw          $a2, -0x5524($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5524);
    // 0x0041A4E8: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
L_0041A4EC:
    // 0x0041A4EC: beq         $v0, $zero, L_0041A504
    if (ctx->r2 == 0) {
        // 0x0041A4F0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041A504;
    }
    // 0x0041A4F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A4F4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x0041A4F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041A4FC: jr          $v0
    // 0x0041A500: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041A500: nop

L_0041A504:
    // 0x0041A504: j           L_0041A558
    // 0x0041A508: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A558;
    // 0x0041A508: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0041A50C: j           L_0041A558
    // 0x0041A510: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A558;
    // 0x0041A510: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041A514: j           L_0041A558
    // 0x0041A518: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A558;
    // 0x0041A518: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0041A51C: j           L_0041A558
    // 0x0041A520: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A558;
    // 0x0041A520: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0041A524: j           L_0041A558
    // 0x0041A528: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A558;
    // 0x0041A528: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0041A52C: j           L_0041A558
    // 0x0041A530: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A558;
    // 0x0041A530: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0041A534: j           L_0041A558
    // 0x0041A538: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A558;
    // 0x0041A538: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0041A53C: j           L_0041A558
    // 0x0041A540: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A558;
    // 0x0041A540: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0041A544: j           L_0041A558
    // 0x0041A548: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A558;
    // 0x0041A548: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0041A54C: j           L_0041A558
    // 0x0041A550: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A558;
    // 0x0041A550: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x0041A554: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
L_0041A558:
    // 0x0041A558: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x0041A55C: bne         $v0, $zero, L_0041A598
    if (ctx->r2 != 0) {
        // 0x0041A560: nop
    
            goto L_0041A598;
    }
    // 0x0041A560: nop

    // 0x0041A564: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0041A568: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x0041A56C: bne         $v0, $zero, L_0041A57C
    if (ctx->r2 != 0) {
        // 0x0041A570: nop
    
            goto L_0041A57C;
    }
    // 0x0041A570: nop

    // 0x0041A574: j           L_0041A584
    // 0x0041A578: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_0041A584;
    // 0x0041A578: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041A57C:
    // 0x0041A57C: bltzl       $v1, L_0041A584
    if (SIGNED(ctx->r3) < 0) {
        // 0x0041A580: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_0041A584;
    }
    goto skip_0;
    // 0x0041A580: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
L_0041A584:
    // 0x0041A584: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0041A588: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x0041A58C: bne         $v0, $zero, L_0041A4EC
    if (ctx->r2 != 0) {
        // 0x0041A590: sltiu       $v0, $v1, 0xB
        ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
            goto L_0041A4EC;
    }
    // 0x0041A590: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x0041A594: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_0041A598:
    // 0x0041A598: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A59C: sw          $v1, 0x924($at)
    MEM_W(0X924, ctx->r1) = ctx->r3;
    // 0x0041A5A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A5A4: beq         $v1, $v0, L_0041A5C4
    if (ctx->r3 == ctx->r2) {
        // 0x0041A5A8: lui         $v1, 0xFE7F
        ctx->r3 = S32(0XFE7F << 16);
            goto L_0041A5C4;
    }
    // 0x0041A5A8: lui         $v1, 0xFE7F
    ctx->r3 = S32(0XFE7F << 16);
    // 0x0041A5AC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x0041A5B0: lw          $v1, 0x2D8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2D8);
    // 0x0041A5B4: lui         $a0, 0x180
    ctx->r4 = S32(0X180 << 16);
    // 0x0041A5B8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0041A5BC: jr          $ra
    // 0x0041A5C0: sw          $v1, 0x2D8($v0)
    MEM_W(0X2D8, ctx->r2) = ctx->r3;
    return;
    // 0x0041A5C0: sw          $v1, 0x2D8($v0)
    MEM_W(0X2D8, ctx->r2) = ctx->r3;
L_0041A5C4:
    // 0x0041A5C4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void entry_0041A5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A5CC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041A5D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041A5D4: jr          $ra
    // 0x0041A5D8: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
    return;
    // 0x0041A5D8: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void entry_0041A6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
        goto after_0;
    // 0x0041A6D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x0041A6DC: j           L_0041A8DC
    // 0x0041A6E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041A8DC;
    // 0x0041A6E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
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
        goto after_1;
    // 0x0041A6F4: sb          $v0, 0x1A($v1)
    MEM_B(0X1A, ctx->r3) = ctx->r2;
    after_1:
    // 0x0041A6F8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041A6FC: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x0041A700: jal         0x002886D0
    // 0x0041A704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002886D0(rdram, ctx);
        goto after_2;
    // 0x0041A704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041A708: j           L_0041A8DC
    // 0x0041A70C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0041A8DC;
    // 0x0041A70C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041A710: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041A714: jal         0x00285628
    // 0x0041A718: nop

    func_00285628(rdram, ctx);
        goto after_3;
    // 0x0041A718: nop

    after_3:
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
    goto skip_0;
    // 0x0041A758: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
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
    goto skip_1;
    // 0x0041A7E0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_1:
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
        goto after_4;
    // 0x0041A7FC: nop

    after_4:
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
    goto skip_2;
    // 0x0041A840: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_2:
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
    goto skip_3;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
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
RECOMP_FUNC void entry_0041A734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
    goto skip_0;
    // 0x0041A758: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
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
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041A76C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041A770: jr          $v0
    // 0x0041A774: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041A774: nop

L_0041A778:
    // 0x0041A778: j           L_0041A7CC
    // 0x0041A77C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A7CC;
    // 0x0041A77C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0041A780: j           L_0041A7CC
    // 0x0041A784: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A7CC;
    // 0x0041A784: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041A788: j           L_0041A7CC
    // 0x0041A78C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A7CC;
    // 0x0041A78C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0041A790: j           L_0041A7CC
    // 0x0041A794: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A7CC;
    // 0x0041A794: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0041A798: j           L_0041A7CC
    // 0x0041A79C: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A7CC;
    // 0x0041A79C: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0041A7A0: j           L_0041A7CC
    // 0x0041A7A4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A7CC;
    // 0x0041A7A4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0041A7A8: j           L_0041A7CC
    // 0x0041A7AC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A7CC;
    // 0x0041A7AC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0041A7B0: j           L_0041A7CC
    // 0x0041A7B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A7CC;
    // 0x0041A7B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0041A7B8: j           L_0041A7CC
    // 0x0041A7BC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A7CC;
    // 0x0041A7BC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0041A7C0: j           L_0041A7CC
    // 0x0041A7C4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A7CC;
    // 0x0041A7C4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
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
    goto skip_1;
    // 0x0041A7E0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_1:
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
    // 0x0041A7F4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041A7F8: jal         0x00285670
    // 0x0041A7FC: nop

    func_00285670(rdram, ctx);
        goto after_0;
    // 0x0041A7FC: nop

    after_0:
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
    goto skip_2;
    // 0x0041A840: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_2:
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
    goto skip_3;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
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
RECOMP_FUNC void entry_0041A7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A740:
    // 0x0041A7AC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0041A7B0: j           L_0041A7CC
    // 0x0041A7B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A7CC;
    // 0x0041A7B4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0041A7B8: j           L_0041A7CC
    // 0x0041A7BC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A7CC;
    // 0x0041A7BC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0041A7C0: j           L_0041A7CC
    // 0x0041A7C4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A7CC;
    // 0x0041A7C4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
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
    goto skip_0;
    // 0x0041A7E0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_0:
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
    // 0x0041A7F4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041A7F8: jal         0x00285670
    // 0x0041A7FC: nop

    func_00285670(rdram, ctx);
        goto after_0;
    // 0x0041A7FC: nop

    after_0:
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
    goto skip_1;
    // 0x0041A840: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_1:
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
    goto skip_2;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
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
RECOMP_FUNC void entry_0041A81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A7EC:
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
    goto skip_0;
    // 0x0041A840: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
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
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041A854: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041A858: jr          $v0
    // 0x0041A85C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041A85C: nop

L_0041A860:
    // 0x0041A860: j           L_0041A8B4
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A8B4;
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0041A868: j           L_0041A8B4
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A8B4;
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041A870: j           L_0041A8B4
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A8B4;
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0041A878: j           L_0041A8B4
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A8B4;
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0041A880: j           L_0041A8B4
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A8B4;
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0041A888: j           L_0041A8B4
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A8B4;
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0041A890: j           L_0041A8B4
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A8B4;
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0041A898: j           L_0041A8B4
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A8B4;
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0041A8A0: j           L_0041A8B4
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A8B4;
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0041A8A8: j           L_0041A8B4
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A8B4;
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
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
    goto skip_1;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x0041A8CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A8D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A8D4: sw          $v0, 0x924($at)
    MEM_W(0X924, ctx->r1) = ctx->r2;
    // 0x0041A8D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
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
RECOMP_FUNC void entry_0041A838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A7EC:
    // 0x0041A838: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_0041A828:
    // 0x0041A83C: bltzl       $v1, L_0041A844
    if (SIGNED(ctx->r3) < 0) {
        // 0x0041A840: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_0041A844;
    }
    goto skip_0;
    // 0x0041A840: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
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
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041A854: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041A858: jr          $v0
    // 0x0041A85C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041A85C: nop

L_0041A860:
    // 0x0041A860: j           L_0041A8B4
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A8B4;
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0041A868: j           L_0041A8B4
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A8B4;
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041A870: j           L_0041A8B4
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A8B4;
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0041A878: j           L_0041A8B4
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A8B4;
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0041A880: j           L_0041A8B4
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A8B4;
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0041A888: j           L_0041A8B4
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A8B4;
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0041A890: j           L_0041A8B4
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A8B4;
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0041A898: j           L_0041A8B4
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A8B4;
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0041A8A0: j           L_0041A8B4
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A8B4;
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0041A8A8: j           L_0041A8B4
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A8B4;
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
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
    goto skip_1;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x0041A8CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A8D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A8D4: sw          $v0, 0x924($at)
    MEM_W(0X924, ctx->r1) = ctx->r2;
    // 0x0041A8D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
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
RECOMP_FUNC void entry_0041A844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041A7EC:
    // 0x0041A844: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
L_0041A828:
    // 0x0041A848: beq         $v0, $zero, L_0041A860
    if (ctx->r2 == 0) {
        // 0x0041A84C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_0041A860;
    }
    // 0x0041A84C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0041A850: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x0041A854: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041A858: jr          $v0
    // 0x0041A85C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041A85C: nop

L_0041A860:
    // 0x0041A860: j           L_0041A8B4
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_0041A8B4;
    // 0x0041A864: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x0041A868: j           L_0041A8B4
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_0041A8B4;
    // 0x0041A86C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x0041A870: j           L_0041A8B4
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
        goto L_0041A8B4;
    // 0x0041A874: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x0041A878: j           L_0041A8B4
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_0041A8B4;
    // 0x0041A87C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x0041A880: j           L_0041A8B4
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
        goto L_0041A8B4;
    // 0x0041A884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x0041A888: j           L_0041A8B4
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
        goto L_0041A8B4;
    // 0x0041A88C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x0041A890: j           L_0041A8B4
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_0041A8B4;
    // 0x0041A894: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x0041A898: j           L_0041A8B4
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
        goto L_0041A8B4;
    // 0x0041A89C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x0041A8A0: j           L_0041A8B4
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_0041A8B4;
    // 0x0041A8A4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x0041A8A8: j           L_0041A8B4
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_0041A8B4;
    // 0x0041A8AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
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
    goto skip_0;
    // 0x0041A8C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x0041A8CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A8D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041A8D4: sw          $v0, 0x924($at)
    MEM_W(0X924, ctx->r1) = ctx->r2;
    // 0x0041A8D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
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
RECOMP_FUNC void entry_0041A9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041A9BC: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0041A9C0: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x0041A9C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0041A9C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A9CC: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x0041A9D0: mul.s       $f21, $f1, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0041A9D4: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041A9D8: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041A9DC: jal         0x0027AF4C
    // 0x0041A9E0: nop

    func_0027AF4C(rdram, ctx);
        goto after_0;
    // 0x0041A9E0: nop

    after_0:
    // 0x0041A9E4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0041A9E8: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x0041A9EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041A9F0: lwc1        $f1, 0x1274($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1274);
    // 0x0041A9F4: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0041A9F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0041A9FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0041AA00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0041AA04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0041AA08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0041AA0C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0041AA10: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0041AA14: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041AA18: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041AA1C: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x0041AA20: nop

    // 0x0041AA24: bc1t        L_0041AA3C
    if (c1cs) {
        // 0x0041AA28: addiu       $a3, $v1, 0x2
        ctx->r7 = ADD32(ctx->r3, 0X2);
            goto L_0041AA3C;
    }
    // 0x0041AA28: addiu       $a3, $v1, 0x2
    ctx->r7 = ADD32(ctx->r3, 0X2);
    // 0x0041AA2C: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x0041AA30: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041AA34: j           L_0041AA54
    // 0x0041AA38: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
        goto L_0041AA54;
    // 0x0041AA38: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_0041AA3C:
    // 0x0041AA3C: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x0041AA40: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0041AA44: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0041AA48: mfc1        $a1, $f3
    ctx->r5 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x0041AA4C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x0041AA50: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_0041AA54:
    // 0x0041AA54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0041AA58: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x0041AA5C: jal         0x002778A8
    // 0x0041AA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002778A8(rdram, ctx);
        goto after_1;
    // 0x0041AA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0041AA64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0041AA68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0041AA6C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x0041AA70: jal         0x00416168
    // 0x0041AA74: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_00416168(rdram, ctx);
        goto after_2;
    // 0x0041AA74: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041AA78: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0041AA7C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0041AA80: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x0041AA84: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0041AA88: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0041AA8C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0041AA90: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x0041AA94: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0041AA98: jr          $ra
    // 0x0041AA9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041AA9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void entry_0041AAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AAC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AACC: lwc1        $f1, 0x1278($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1278);
    // 0x0041AAD0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0041AAD4: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0041AAD8: nop

    // 0x0041AADC: bc1f        L_0041AAEC
    if (!c1cs) {
        // 0x0041AAE0: swc1        $f0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
            goto L_0041AAEC;
    }
    // 0x0041AAE0: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x0041AAE4: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0041AAE8: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_0041AAEC:
    // 0x0041AAEC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x0041AAF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0041AAF4: bne         $v1, $v0, L_0041AB60
    if (ctx->r3 != ctx->r2) {
        // 0x0041AAF8: nop
    
            goto L_0041AB60;
    }
    // 0x0041AAF8: nop

    // 0x0041AAFC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041AB00: jal         0x00285628
    // 0x0041AB04: nop

    func_00285628(rdram, ctx);
        goto after_0;
    // 0x0041AB04: nop

    after_0:
    // 0x0041AB08: beq         $v0, $zero, L_0041AB28
    if (ctx->r2 == 0) {
        // 0x0041AB0C: nop
    
            goto L_0041AB28;
    }
    // 0x0041AB0C: nop

    // 0x0041AB10: lw          $v0, -0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X4);
    // 0x0041AB14: blez        $v0, L_0041AB28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0041AB18: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_0041AB28;
    }
    // 0x0041AB18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0041AB1C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x0041AB20: j           L_0041AB60
    // 0x0041AB24: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_0041AB60;
    // 0x0041AB24: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_0041AB28:
    // 0x0041AB28: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x0041AB2C: jal         0x00285670
    // 0x0041AB30: nop

    func_00285670(rdram, ctx);
        goto after_1;
    // 0x0041AB30: nop

    after_1:
    // 0x0041AB34: beq         $v0, $zero, L_0041AB60
    if (ctx->r2 == 0) {
        // 0x0041AB38: nop
    
            goto L_0041AB60;
    }
    // 0x0041AB38: nop

    // 0x0041AB3C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041AB40: addiu       $v1, $v1, 0x1F80
    ctx->r3 = ADD32(ctx->r3, 0X1F80);
    // 0x0041AB44: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0041AB48: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x0041AB4C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041AB50: beq         $v0, $zero, L_0041AB60
    if (ctx->r2 == 0) {
        // 0x0041AB54: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_0041AB60;
    }
    // 0x0041AB54: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0041AB58: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0041AB5C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_0041AB60:
    // 0x0041AB60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041AB64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AB68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AB6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AB70: jr          $ra
    // 0x0041AB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041AB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041AC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AC78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AC7C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_0041AC80:
    // 0x0041AC80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AC84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0041AC88: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x0041AC8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041AC90: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0041AC94: sb          $v1, 0x1F8C($at)
    MEM_B(0X1F8C, ctx->r1) = ctx->r3;
    // 0x0041AC98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0041AC9C: slti        $v0, $a0, 0x17
    ctx->r2 = SIGNED(ctx->r4) < 0X17 ? 1 : 0;
    // 0x0041ACA0: bne         $v0, $zero, L_0041AC80
    if (ctx->r2 != 0) {
        // 0x0041ACA4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_0041AC80;
    }
    // 0x0041ACA4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x0041ACA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041ACAC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0041ACB0: addiu       $v1, $v1, 0x1F80
    ctx->r3 = ADD32(ctx->r3, 0X1F80);
    // 0x0041ACB4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0041ACB8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0041ACBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041ACC0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0041ACC4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0041ACC8: jr          $ra
    // 0x0041ACCC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    return;
    // 0x0041ACCC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void entry_0041ACB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041ACB4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0041ACB8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0041ACBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0041ACC0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x0041ACC4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x0041ACC8: jr          $ra
    // 0x0041ACCC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    return;
    // 0x0041ACCC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void entry_0041AD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AD48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041AD4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041AD50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041AD54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AD58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AD5C: jr          $ra
    // 0x0041AD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041AD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_0041AD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AD84: addiu       $s6, $s5, -0x4
    ctx->r22 = ADD32(ctx->r21, -0X4);
    // 0x0041AD88: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0041AD8C: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x0041AD90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0041AD94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0041AD98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041AD9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041ADA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041ADA4: sw          $v0, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r2;
L_0041ADA8:
    // 0x0041ADA8: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041ADAC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041ADB0: lw          $s2, -0x6890($at)
    ctx->r18 = MEM_W(ctx->r1, -0X6890);
    // 0x0041ADB4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0041ADB8: jal         0x0029E4C0
    // 0x0041ADBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_0;
    // 0x0041ADBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x0041ADC0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0041ADC4: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, 0X1F8C);
    // 0x0041ADC8: jal         0x0029E4C0
    // 0x0041ADCC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029E4C0(rdram, ctx);
        goto after_1;
    // 0x0041ADCC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041ADD0: beq         $s0, $v0, L_0041ADE0
    if (ctx->r16 == ctx->r2) {
        // 0x0041ADD4: nop
    
            goto L_0041ADE0;
    }
    // 0x0041ADD4: nop

L_0041ADD8:
    // 0x0041ADD8: j           L_0041AE1C
    // 0x0041ADDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041AE1C;
    // 0x0041ADDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041ADE0:
    // 0x0041ADE0: jal         0x0029E4C0
    // 0x0041ADE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_0029E4C0(rdram, ctx);
        goto after_2;
    // 0x0041ADE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0041ADE8: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0041ADEC: beq         $v0, $zero, L_0041AE18
    if (ctx->r2 == 0) {
        // 0x0041ADF0: addu        $v0, $s2, $s1
        ctx->r2 = ADD32(ctx->r18, ctx->r17);
            goto L_0041AE18;
    }
    // 0x0041ADF0: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x0041ADF4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0041ADF8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041ADFC: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x0041AE00: lbu         $v1, 0x1F8C($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1F8C);
    // 0x0041AE04: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x0041AE08: bne         $v0, $v1, L_0041ADD8
    if (ctx->r2 != ctx->r3) {
        // 0x0041AE0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0041ADD8;
    }
    // 0x0041AE0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0041AE10: j           L_0041ADE0
    // 0x0041AE14: nop

        goto L_0041ADE0;
    // 0x0041AE14: nop

L_0041AE18:
    // 0x0041AE18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041AE1C:
    // 0x0041AE1C: beql        $v0, $zero, L_0041AE78
    if (ctx->r2 == 0) {
        // 0x0041AE20: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0041AE78;
    }
    goto skip_0;
    // 0x0041AE20: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x0041AE24: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x0041AE28: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE2C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE30: lw          $v1, -0x6888($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6888);
    // 0x0041AE34: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x0041AE38: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x0041AE3C: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x0041AE40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x0041AE44: sw          $v0, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r2;
    // 0x0041AE48: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE4C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE50: lw          $v0, -0x6884($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6884);
    // 0x0041AE54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041AE58: sw          $s4, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r20;
    // 0x0041AE5C: beq         $v0, $zero, L_0041AE78
    if (ctx->r2 == 0) {
        // 0x0041AE60: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0041AE78;
    }
    // 0x0041AE60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0041AE64: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE68: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE6C: lh          $a0, -0x6882($at)
    ctx->r4 = MEM_H(ctx->r1, -0X6882);
    // 0x0041AE70: jal         0x00275624
    // 0x0041AE74: nop

    func_00275624(rdram, ctx);
        goto after_3;
    // 0x0041AE74: nop

    after_3:
L_0041AE78:
    // 0x0041AE78: sltiu       $v0, $s4, 0xC
    ctx->r2 = ctx->r20 < 0XC ? 1 : 0;
    // 0x0041AE7C: bne         $v0, $zero, L_0041ADA8
    if (ctx->r2 != 0) {
        // 0x0041AE80: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_0041ADA8;
    }
    // 0x0041AE80: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x0041AE84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041AE88: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0041AE8C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0041AE90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041AE94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0041AE98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041AE9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AEA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AEA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AEA8: jr          $ra
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041AE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041ADA8:
    // 0x0041AE50: lw          $v0, -0x6884($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6884);
    // 0x0041AE54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041AE58: sw          $s4, 0x920($at)
    MEM_W(0X920, ctx->r1) = ctx->r20;
    // 0x0041AE5C: beq         $v0, $zero, L_0041AE78
    if (ctx->r2 == 0) {
        // 0x0041AE60: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_0041AE78;
    }
    // 0x0041AE60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x0041AE64: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x0041AE68: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x0041AE6C: lh          $a0, -0x6882($at)
    ctx->r4 = MEM_H(ctx->r1, -0X6882);
    // 0x0041AE70: jal         0x00275624
    // 0x0041AE74: nop

    func_00275624(rdram, ctx);
        goto after_0;
    // 0x0041AE74: nop

    after_0:
L_0041AE78:
    // 0x0041AE78: sltiu       $v0, $s4, 0xC
    ctx->r2 = ctx->r20 < 0XC ? 1 : 0;
    // 0x0041AE7C: bne         $v0, $zero, L_0041ADA8
    if (ctx->r2 != 0) {
        // 0x0041AE80: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_0041ADA8;
    }
    // 0x0041AE80: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x0041AE84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0041AE88: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x0041AE8C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x0041AE90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0041AE94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0041AE98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041AE9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AEA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AEA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AEA8: jr          $ra
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041AE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041AE94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0041AE98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0041AE9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041AEA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041AEA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041AEA8: jr          $ra
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0041AEAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0041AF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AF04:
    // 0x0041AF04: bne         $a2, $zero, L_0041AF30
    if (ctx->r6 != 0) {
        // 0x0041AF08: sltiu       $v0, $a0, 0xB
        ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
            goto L_0041AF30;
    }
    // 0x0041AF08: sltiu       $v0, $a0, 0xB
    ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
    // 0x0041AF0C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041AF10: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041AF14: bne         $v0, $zero, L_0041AF24
    if (ctx->r2 != 0) {
        // 0x0041AF18: nop
    
            goto L_0041AF24;
    }
    // 0x0041AF18: nop

    // 0x0041AF1C: j           L_0041AF2C
    // 0x0041AF20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041AF2C;
    // 0x0041AF20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041AF24:
    // 0x0041AF24: bltzl       $a0, L_0041AF2C
    if (SIGNED(ctx->r4) < 0) {
        // 0x0041AF28: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0041AF2C;
    }
    goto skip_0;
    // 0x0041AF28: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_0:
L_0041AF2C:
    // 0x0041AF2C: sltiu       $v0, $a0, 0xB
    ctx->r2 = ctx->r4 < 0XB ? 1 : 0;
L_0041AF30:
    // 0x0041AF30: beq         $v0, $zero, L_0041AF48
    if (ctx->r2 == 0) {
        // 0x0041AF34: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_0041AF48;
    }
    // 0x0041AF34: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0041AF38: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x0041AF3C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041AF40: jr          $v0
    // 0x0041AF44: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041AF44: nop

L_0041AF48:
    // 0x0041AF48: j           L_0041AF9C
    // 0x0041AF4C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
        goto L_0041AF9C;
    // 0x0041AF4C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0041AF50: j           L_0041AF9C
    // 0x0041AF54: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
        goto L_0041AF9C;
    // 0x0041AF54: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0041AF58: j           L_0041AF9C
    // 0x0041AF5C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
        goto L_0041AF9C;
    // 0x0041AF5C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0041AF60: j           L_0041AF9C
    // 0x0041AF64: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
        goto L_0041AF9C;
    // 0x0041AF64: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0041AF68: j           L_0041AF9C
    // 0x0041AF6C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
        goto L_0041AF9C;
    // 0x0041AF6C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0041AF70: j           L_0041AF9C
    // 0x0041AF74: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
        goto L_0041AF9C;
    // 0x0041AF74: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x0041AF78: j           L_0041AF9C
    // 0x0041AF7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
        goto L_0041AF9C;
    // 0x0041AF7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0041AF80: j           L_0041AF9C
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
        goto L_0041AF9C;
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0041AF88: j           L_0041AF9C
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
        goto L_0041AF9C;
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041AF90: j           L_0041AF9C
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_0041AF9C;
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0041AF98: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
L_0041AF9C:
    // 0x0041AF9C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0041AFA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041AFA4: bne         $v0, $zero, L_0041AFE4
    if (ctx->r2 != 0) {
        // 0x0041AFA8: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0041AFE4;
    }
    // 0x0041AFA8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0041AFAC: beql        $a2, $zero, L_0041AFD8
    if (ctx->r6 == 0) {
        // 0x0041AFB0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0041AFD8;
    }
    goto skip_1;
    // 0x0041AFB0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x0041AFB4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041AFB8: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041AFBC: bne         $v0, $zero, L_0041AFCC
    if (ctx->r2 != 0) {
        // 0x0041AFC0: nop
    
            goto L_0041AFCC;
    }
    // 0x0041AFC0: nop

    // 0x0041AFC4: j           L_0041AFD4
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041AFD4;
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041AFCC:
    // 0x0041AFCC: bltzl       $a0, L_0041AFD4
    if (SIGNED(ctx->r4) < 0) {
        // 0x0041AFD0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0041AFD4;
    }
    goto skip_2;
    // 0x0041AFD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_2:
L_0041AFD4:
    // 0x0041AFD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0041AFD8:
    // 0x0041AFD8: slti        $v0, $a3, 0xB
    ctx->r2 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
    // 0x0041AFDC: bne         $v0, $zero, L_0041AF04
    if (ctx->r2 != 0) {
        // 0x0041AFE0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0041AF04;
    }
    // 0x0041AFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041AFE4:
    // 0x0041AFE4: jr          $ra
    // 0x0041AFE8: nop

    return;
    // 0x0041AFE8: nop

;}
RECOMP_FUNC void entry_0041AF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AF04:
    // 0x0041AF3C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x0041AF40: jr          $v0
    // 0x0041AF44: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    return;
    // 0x0041AF44: nop

    // 0x0041AF48: j           L_0041AF9C
    // 0x0041AF4C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
        goto L_0041AF9C;
    // 0x0041AF4C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0041AF50: j           L_0041AF9C
    // 0x0041AF54: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
        goto L_0041AF9C;
    // 0x0041AF54: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x0041AF58: j           L_0041AF9C
    // 0x0041AF5C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
        goto L_0041AF9C;
    // 0x0041AF5C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x0041AF60: j           L_0041AF9C
    // 0x0041AF64: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
        goto L_0041AF9C;
    // 0x0041AF64: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x0041AF68: j           L_0041AF9C
    // 0x0041AF6C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
        goto L_0041AF9C;
    // 0x0041AF6C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x0041AF70: j           L_0041AF9C
    // 0x0041AF74: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
        goto L_0041AF9C;
    // 0x0041AF74: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x0041AF78: j           L_0041AF9C
    // 0x0041AF7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
        goto L_0041AF9C;
    // 0x0041AF7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x0041AF80: j           L_0041AF9C
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
        goto L_0041AF9C;
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0041AF88: j           L_0041AF9C
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
        goto L_0041AF9C;
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041AF90: j           L_0041AF9C
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_0041AF9C;
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0041AF98: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
L_0041AF9C:
    // 0x0041AF9C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0041AFA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041AFA4: bne         $v0, $zero, L_0041AFE4
    if (ctx->r2 != 0) {
        // 0x0041AFA8: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0041AFE4;
    }
    // 0x0041AFA8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0041AFAC: beql        $a2, $zero, L_0041AFD8
    if (ctx->r6 == 0) {
        // 0x0041AFB0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0041AFD8;
    }
    goto skip_0;
    // 0x0041AFB0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x0041AFB4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041AFB8: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041AFBC: bne         $v0, $zero, L_0041AFCC
    if (ctx->r2 != 0) {
        // 0x0041AFC0: nop
    
            goto L_0041AFCC;
    }
    // 0x0041AFC0: nop

    // 0x0041AFC4: j           L_0041AFD4
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041AFD4;
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041AFCC:
    // 0x0041AFCC: bltzl       $a0, L_0041AFD4
    if (SIGNED(ctx->r4) < 0) {
        // 0x0041AFD0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0041AFD4;
    }
    goto skip_1;
    // 0x0041AFD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_1:
L_0041AFD4:
    // 0x0041AFD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0041AFD8:
    // 0x0041AFD8: slti        $v0, $a3, 0xB
    ctx->r2 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
    // 0x0041AFDC: bne         $v0, $zero, L_0041AF04
    if (ctx->r2 != 0) {
            // 0x0041AFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    entry_0041AF04(rdram, ctx);
    return;
    }
    // 0x0041AFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041AFE4:
    // 0x0041AFE4: jr          $ra
    // 0x0041AFE8: nop

    return;
    // 0x0041AFE8: nop

;}
RECOMP_FUNC void entry_0041AF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041AF04:
    // 0x0041AF84: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x0041AF88: j           L_0041AF9C
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
        goto L_0041AF9C;
    // 0x0041AF8C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x0041AF90: j           L_0041AF9C
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_0041AF9C;
    // 0x0041AF94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x0041AF98: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
L_0041AF9C:
    // 0x0041AF9C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x0041AFA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041AFA4: bne         $v0, $zero, L_0041AFE4
    if (ctx->r2 != 0) {
        // 0x0041AFA8: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_0041AFE4;
    }
    // 0x0041AFA8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x0041AFAC: beql        $a2, $zero, L_0041AFD8
    if (ctx->r6 == 0) {
        // 0x0041AFB0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_0041AFD8;
    }
    goto skip_0;
    // 0x0041AFB0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x0041AFB4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0041AFB8: slti        $v0, $a0, 0xB
    ctx->r2 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x0041AFBC: bne         $v0, $zero, L_0041AFCC
    if (ctx->r2 != 0) {
        // 0x0041AFC0: nop
    
            goto L_0041AFCC;
    }
    // 0x0041AFC0: nop

    // 0x0041AFC4: j           L_0041AFD4
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_0041AFD4;
    // 0x0041AFC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0041AFCC:
    // 0x0041AFCC: bltzl       $a0, L_0041AFD4
    if (SIGNED(ctx->r4) < 0) {
        // 0x0041AFD0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0041AFD4;
    }
    goto skip_1;
    // 0x0041AFD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    skip_1:
L_0041AFD4:
    // 0x0041AFD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_0041AFD8:
    // 0x0041AFD8: slti        $v0, $a3, 0xB
    ctx->r2 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
    // 0x0041AFDC: bne         $v0, $zero, L_0041AF04
    if (ctx->r2 != 0) {
            // 0x0041AFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    entry_0041AF04(rdram, ctx);
    return;
    }
    // 0x0041AFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0041AFE4:
    // 0x0041AFE4: jr          $ra
    // 0x0041AFE8: nop

    return;
    // 0x0041AFE8: nop

;}
RECOMP_FUNC void entry_0041B0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B0A8: addiu       $v0, $v0, 0x5B48
    ctx->r2 = ADD32(ctx->r2, 0X5B48);
    // 0x0041B0AC: j           L_0041B140
    // 0x0041B0B0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0B0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B0B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0B8: addiu       $v0, $v0, 0x5B64
    ctx->r2 = ADD32(ctx->r2, 0X5B64);
    // 0x0041B0BC: j           L_0041B140
    // 0x0041B0C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B0C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0C8: addiu       $v0, $v0, 0x5B80
    ctx->r2 = ADD32(ctx->r2, 0X5B80);
    // 0x0041B0CC: j           L_0041B140
    // 0x0041B0D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B0D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0D8: addiu       $v0, $v0, 0x5B9C
    ctx->r2 = ADD32(ctx->r2, 0X5B9C);
    // 0x0041B0DC: j           L_0041B140
    // 0x0041B0E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0E0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B0E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0E8: addiu       $v0, $v0, 0x5BB8
    ctx->r2 = ADD32(ctx->r2, 0X5BB8);
    // 0x0041B0EC: j           L_0041B140
    // 0x0041B0F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B0F0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B0F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B0F8: addiu       $v0, $v0, 0x5BF0
    ctx->r2 = ADD32(ctx->r2, 0X5BF0);
    // 0x0041B0FC: j           L_0041B140
    // 0x0041B100: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B100: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B104: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B108: addiu       $v0, $v0, 0x5BD4
    ctx->r2 = ADD32(ctx->r2, 0X5BD4);
    // 0x0041B10C: j           L_0041B140
    // 0x0041B110: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B110: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B114: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B118: addiu       $v0, $v0, 0x5C0C
    ctx->r2 = ADD32(ctx->r2, 0X5C0C);
    // 0x0041B11C: j           L_0041B140
    // 0x0041B120: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B120: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B124: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B128: addiu       $v0, $v0, 0x5C28
    ctx->r2 = ADD32(ctx->r2, 0X5C28);
    // 0x0041B12C: j           L_0041B140
    // 0x0041B130: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B140;
    // 0x0041B130: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B134: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B138: addiu       $v0, $v0, 0x5C44
    ctx->r2 = ADD32(ctx->r2, 0X5C44);
    // 0x0041B13C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B140:
    // 0x0041B140: jr          $ra
    // 0x0041B144: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B144: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B17C: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // turok2: reconnected split function: a stray ELF symbol at 0x0041B180 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0041B180(rdram, ctx);
;}
RECOMP_FUNC void entry_0041B204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B204: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B208: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B20C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B210: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B214: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B218: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B21C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B220: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x0041B224: beq         $v0, $zero, L_0041B23C
    if (ctx->r2 == 0) {
        // 0x0041B228: nop
    
            goto L_0041B23C;
    }
    // 0x0041B228: nop

    // 0x0041B22C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B230: addiu       $v0, $v0, 0x57AC
    ctx->r2 = ADD32(ctx->r2, 0X57AC);
    // 0x0041B234: j           L_0041B248
    // 0x0041B238: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B248;
    // 0x0041B238: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B23C:
    // 0x0041B23C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B240: addiu       $v0, $v0, 0x57C8
    ctx->r2 = ADD32(ctx->r2, 0X57C8);
    // 0x0041B244: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B248:
    // 0x0041B248: jr          $ra
    // 0x0041B24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B238: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B23C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B240: addiu       $v0, $v0, 0x57C8
    ctx->r2 = ADD32(ctx->r2, 0X57C8);
    // 0x0041B244: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B248: jr          $ra
    // 0x0041B24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B28C: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x0041B290: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0041B294: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0041B298: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0041B29C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0041B2A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B2A4: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B2A8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0041B2AC: beq         $v0, $zero, L_0041B2C4
    if (ctx->r2 == 0) {
        // 0x0041B2B0: nop
    
            goto L_0041B2C4;
    }
    // 0x0041B2B0: nop

    // 0x0041B2B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B2B8: addiu       $v0, $v0, 0x57E4
    ctx->r2 = ADD32(ctx->r2, 0X57E4);
    // 0x0041B2BC: j           L_0041B2D0
    // 0x0041B2C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_0041B2D0;
    // 0x0041B2C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B2C4:
    // 0x0041B2C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B2C8: addiu       $v0, $v0, 0x5800
    ctx->r2 = ADD32(ctx->r2, 0X5800);
    // 0x0041B2CC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_0041B2D0:
    // 0x0041B2D0: jr          $ra
    // 0x0041B2D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B2D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void entry_0041B2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B2C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B2C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041B2C8: addiu       $v0, $v0, 0x5800
    ctx->r2 = ADD32(ctx->r2, 0X5800);
    // 0x0041B2CC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x0041B2D0: jr          $ra
    // 0x0041B2D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B2D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
