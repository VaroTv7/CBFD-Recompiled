/**
 * Auto-decompiled from asm/76E50.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150499A0(void *arg0, void *arg1) {
    f32 sp1C;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 sp0;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f18 = (*(s32 *)((char *)(arg0) + 0x18));
    sp10 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f10 = (*(s32 *)((char *)(arg0) + 0x8));
    spC = temp_f10;
    temp_f6 = (*(s32 *)((char *)(arg0) + 0x10));
    sp8 = temp_f6;
    sp0 = sp10;
    sp1C = (*(s32 *)((char *)(arg0) + 0x24));
    temp_f0 = 1.0f / (((((temp_f2 * temp_f12 * temp_f14) + (temp_f16 * temp_f18 * sp10) + (temp_f10 * temp_f6 * sp1C)) - (temp_f10 * temp_f12 * sp0)) - (temp_f16 * temp_f6 * temp_f14)) - (temp_f2 * temp_f18 * sp1C));
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (((temp_f12 * temp_f14) - (sp1C * temp_f18)) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x10)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x18)) * (*(f32 *)((char *)(arg0) + 0x20))) - ((*(f32 *)((char *)(arg0) + 0x28)) * (*(f32 *)((char *)(arg0) + 0x10)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x10)) * (*(f32 *)((char *)(arg0) + 0x24))) - ((*(f32 *)((char *)(arg0) + 0x20)) * (*(f32 *)((char *)(arg0) + 0x14)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x8)) * (*(f32 *)((char *)(arg0) + 0x24))) - ((*(f32 *)((char *)(arg0) + 0x28)) * (*(f32 *)((char *)(arg0) + 0x4)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x0)) * (*(f32 *)((char *)(arg0) + 0x28))) - ((*(f32 *)((char *)(arg0) + 0x20)) * (*(f32 *)((char *)(arg0) + 0x8)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x24)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x4)) * (*(f32 *)((char *)(arg0) + 0x20))) - ((*(f32 *)((char *)(arg0) + 0x24)) * (*(f32 *)((char *)(arg0) + 0x0)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x4)) * (*(f32 *)((char *)(arg0) + 0x18))) - ((*(f32 *)((char *)(arg0) + 0x14)) * (*(f32 *)((char *)(arg0) + 0x8)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x18)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x8)) * (*(f32 *)((char *)(arg0) + 0x10))) - ((*(f32 *)((char *)(arg0) + 0x18)) * (*(f32 *)((char *)(arg0) + 0x0)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x28)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x0)) * (*(f32 *)((char *)(arg0) + 0x14))) - ((*(f32 *)((char *)(arg0) + 0x10)) * (*(f32 *)((char *)(arg0) + 0x4)))) * temp_f0);
    (*(f32 *)((char *)(arg1) + 0x30)) = (f32) -(((*(f32 *)((char *)(arg1) + 0x20)) * (*(f32 *)((char *)(arg0) + 0x38))) + (((*(f32 *)((char *)(arg0) + 0x30)) * (*(f32 *)((char *)(arg1) + 0x0))) + ((*(f32 *)((char *)(arg0) + 0x34)) * (*(f32 *)((char *)(arg1) + 0x10)))));
    (*(f32 *)((char *)(arg1) + 0x34)) = (f32) -(((*(f32 *)((char *)(arg1) + 0x24)) * (*(f32 *)((char *)(arg0) + 0x38))) + (((*(f32 *)((char *)(arg0) + 0x30)) * (*(f32 *)((char *)(arg1) + 0x4))) + ((*(f32 *)((char *)(arg0) + 0x34)) * (*(f32 *)((char *)(arg1) + 0x14)))));
    (*(s32 *)((char *)(arg1) + 0x3C)) = 1.0f;
    (*(s32 *)((char *)(arg1) + 0xC)) = 0.0f;
    (*(s32 *)((char *)(arg1) + 0x1C)) = 0.0f;
    (*(s32 *)((char *)(arg1) + 0x2C)) = 0.0f;
    (*(f32 *)((char *)(arg1) + 0x38)) = (f32) -(((*(f32 *)((char *)(arg1) + 0x28)) * (*(f32 *)((char *)(arg0) + 0x38))) + (((*(f32 *)((char *)(arg0) + 0x30)) * (*(f32 *)((char *)(arg1) + 0x8))) + ((*(f32 *)((char *)(arg0) + 0x34)) * (*(f32 *)((char *)(arg1) + 0x18)))));
}
