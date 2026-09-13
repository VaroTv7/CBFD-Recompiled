#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513B5E0.s")

// NON-MATCHING: 31 of 32 instructions match exactly (including the
// exact stack frame size 0x20 and the exact byte-spill offset 0x1B for
// the flag var across the D_80089C18[idx](arg0) call). The single
// remaining diff is purely cosmetic: target reloads the spilled flag
// via `lbu` (zero-extend) while every C typing tried here (s8, u8,
// explicit (u8) casts at each use, several declaration orders/positions
// among v0/v1/idx) produces `lb` (sign-extend) instead - functionally
// identical since the value is only ever 0 or 1, but not a byte match.
// Declaring the flag `u8` instead of `s8` does NOT fix the reload (still
// picks lb over lbu in this build) and additionally regresses register
// allocation elsewhere (home register becomes $v0 instead of $v1, plus
// an extra `move` and a larger 0x28 frame), so `s8` remains the closer
// match of the two despite still not being byte-perfect.
// void func_1513B798(void *arg0) {
//     s32 v0;
//     s8 v1 = 0;
//     s8 idx;
//
//     if (*(u8 *) ((char *) arg0 + 0x10) & 1) {
//         *(s16 *) ((char *) arg0 + 0x14) -= D_800BE9E4;
//         if (*(s16 *) ((char *) arg0 + 0x14) < 0) {
//             v1 = 1;
//         }
//     }
//     if (v1 == 0) {
//         idx = *(s8 *) ((char *) arg0 + 0x11);
//         if (idx != -1) {
//             v0 = D_80089C18[idx](arg0);
//             if (v0 == 0) {
//                 v1 = 1;
//             }
//         }
//     }
//     if (v1 != 0) {
//         func_1516972C(arg0);
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513B798.s")
// NON-MATCHING: full semantics recovered and verified via isolated
// harness (correct register roles for s0=arg1/a3=buf were only reached
// after dropping the truly-dead 4th parameter - target never spills it,
// confirming this is really a 3-argument function despite the raw asm
// initially looking like it reassigns $a3), but the final 3-command
// buffer-building tail does not reproduce target's exact register
// choreography: target increments a single register ($a3) in place
// three times and takes snapshot copies ($v1/$a0/$a1) of it before/after
// each increment for the deferred "write word 1 of the previous command"
// pattern, whereas every C phrasing tried here (flat pointer + separate
// += statements, a typed 2-word struct pointer with gfx++, three named
// snapshot locals assigned in the same order as target) gets IDO to
// chain each new position off the PREVIOUS snapshot register instead of
// re-deriving it from the one shared base register - mathematically
// identical addresses, 3 fewer instructions (72 vs target's 75) because
// the extra "v1 = a3" copy and one dead duplicate load target's own
// compiler left in are never reproduced.
// void *func_1513B83C(char *arg0, void *arg1, s16 arg2) {
//     s8 v0;
//     s32 result;
//
//     if (!(*(u8 *) ((char *) arg1 + 0x10) & 2) ||
//         (*(u8 *) ((char *) arg1 + 0x49) & (1 << arg2))) {
//         v0 = *(s8 *) ((char *) arg1 + 0x12);
//     } else {
//         return arg0;
//     }
//     if (v0 != -1) {
//         result = D_80089C28[v0](arg1, arg2);
//         if (result == 0) {
//             return arg0;
//         }
//     }
//     // append 3 command words at arg0; D_800BE9C0 (u8) re-read fresh
//     // each time it's referenced (never cached in a local)
//     *(u32 *) arg0 = 0xDA380003;
//     *(u32 *) (arg0 + 4) = (u32) ((char *) arg1 + (D_800BE9C0 << 6) + 0x78);
//     arg0 += 8;
//     *(u32 *) arg0 = 0xDB060004;
//     *(u32 *) (arg0 + 4) = *(u32 *) ((char *) arg1 + (D_800BE9C0 << 4) + (arg2 << 2) + 0x58);
//     arg0 += 8;
//     *(u32 *) arg0 = 0xDE000000;
//     *(u32 *) (arg0 + 4) = *(u32 *) ((char *) arg1 + 0x54);
//     arg0 += 8;
//     return arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513B83C.s")

s32 func_1513B968(s32 arg0, s32 arg1) {
    // FIXME: &arg0->unk_120[D_800BE9C0]
    func_150A7B80(arg0 + 120 + (D_800BE9C0 << 6));
    return 1;
}

void func_1513B9A8(struct132 *arg0) {
    func_100043B4(arg0->unk4C, 4);
    func_15169804(arg0);
}

void func_1513B9DC(struct132 *arg0) {
    func_100043B4(arg0->unk4C, 4);
    func_15169824(arg0);
}

void func_1513BA10(struct132 *arg0) {
    D_80089C44[arg0->unk48]();
}

void func_1513BA44(struct132 *arg0) {
    D_80089C54[arg0->unk48]();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513BA78.s")

s32 func_1513BAD4(s32 arg0, s32 arg1) {
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513BAE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513BBFC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513BEB0.s")
