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
