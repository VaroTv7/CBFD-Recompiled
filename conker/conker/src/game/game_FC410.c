/**
 * Auto-decompiled from asm/FC410.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A3444();        /* extern */
void *func_151149AC();                             /* extern */
void * func_151749A0();                              /* extern */
extern f32 D_800A0830;
extern f32 D_800A0834;
extern f32 D_800A0838;

void func_150CEF60(s32 arg0) {
    f32 sp38;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;

    temp_f12 = (f32)(s32)(func_151149AC(*(s32 *)((char *)((4)) + 0x8))) * D_800A0830;
    sp38 = temp_f12;
    sp1C = func_150AD78C(temp_f12);
    temp_f0 = func_150AD780(temp_f12);
    temp_f2 = 76.0f - -1.0f;
    temp_f12_2 = 241.0f - 44.0f;
    func_150A3444(temp_f12_2, sp1C, 2, (s16) (s32) (((temp_f2 * temp_f0) - (temp_f12_2 * sp1C)) + -1.0f), (s16) (s32) ((temp_f2 * sp1C) + (temp_f12_2 * temp_f0) + 44.0f), (s16) (s32) D_800A0834);
    func_151749A0(5, 3);
}

f32 func_150CF040(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;

    temp_a0 = arg0 + 1;
    temp_a1 = arg1 - 0x2C;
    return func_150484A0((f32) temp_a0, (f32) temp_a1) * D_800A0838;
}

void func_150CF080(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x4000);
}
