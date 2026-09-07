/**
 * Auto-decompiled from asm/76C90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150497E0(s32 arg0, s32 arg1, f32 arg2) {
    f32 sp8;
    f32 sp4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    void *temp_v0;

    temp_v0 = arg0 + (arg1 * 4);
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x0));
    temp_f14 = -0.5f * temp_f12;
    temp_f16 = (*(s32 *)((char *)(temp_v0) + 0x4));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x8));
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0xC));
    temp_f8 = (temp_f2 * -0.5f) + (temp_f12 + (-2.5f * temp_f16) + (2.0f * temp_f0));
    sp4 = temp_f8;
    temp_f6 = (temp_f0 * 0.5f) + temp_f14;
    sp8 = temp_f6;
    return (((((((temp_f2 * 0.5f) + (temp_f14 + (1.5f * temp_f16) + (-1.5f * temp_f0))) * arg2) + temp_f8) * arg2) + temp_f6) * arg2) + temp_f16;
}

f32 func_150498A4(s32 arg0, s32 arg1, f32 arg2, f32 *arg3) {
    f32 sp18;
    f32 sp10;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    void *temp_v0;

    temp_v0 = arg0 + (arg1 * 4);
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x0));
    temp_f14 = -0.5f * temp_f12;
    temp_f16 = (*(s32 *)((char *)(temp_v0) + 0x4));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x8));
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0xC));
    temp_f6 = (temp_f2 * 0.5f) + (temp_f14 + (1.5f * temp_f16) + (-1.5f * temp_f0));
    sp10 = temp_f6;
    temp_f18 = (temp_f2 * -0.5f) + (temp_f12 + (-2.5f * temp_f16) + (2.0f * temp_f0));
    temp_f10 = (temp_f0 * 0.5f) + temp_f14;
    sp18 = temp_f10;
    *arg3 = (((temp_f6 * 3.0f * arg2) + (2.0f * temp_f18)) * arg2) + temp_f10;
    return (((((temp_f6 * arg2) + temp_f18) * arg2) + temp_f10) * arg2) + temp_f16;
}
