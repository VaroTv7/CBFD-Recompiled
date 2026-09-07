/**
 * Auto-decompiled from asm/637C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150440A0(); /* extern */

void func_15036310(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    void *sp38;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_t0;
    void *temp_a0;
    void *temp_v1;

    temp_v1 = (arg1 * 0x32C) + &gObjects;
    temp_t0 = (*(s32 *)((char *)(temp_v1) + 0x1D4));
    temp_a0 = temp_t0 + (arg2 << 6);
    if (temp_t0 != 0) {
        temp_f6 = (*(s32 *)((char *)(temp_a0) + 0x30));
        sp5C = temp_f6;
        sp60 = (*(s32 *)((char *)(temp_a0) + 0x34));
        temp_f10 = (*(s32 *)((char *)(temp_a0) + 0x38));
        sp64 = temp_f10;
        sp50 = D_800DBFF0->unk2F8 - temp_f6;
        sp54 = D_800DBFF0->unk2FC - sp60;
        sp58 = D_800DBFF0->unk300 - temp_f10;
        if (arg3 != 0) {
            temp_f16 = sp58;
            sp58 = -sp50;
            sp50 = temp_f16;
        }
        sp38 = temp_v1;
        sp74 = temp_a0;
        temp_f10_2 = (sp54 * 0.0f) - (1.0f * sp58);
        sp44 = temp_f10_2;
        sp30 = temp_f10_2;
        temp_f8 = (sp58 * 0.0f) - (0.0f * sp50);
        sp48 = temp_f8;
        temp_f4 = (sp50 * 1.0f) - (0.0f * sp54);
        sp4C = temp_f4;
        temp_f2 = (sp54 * temp_f4) - (temp_f8 * sp58);
        sp68 = temp_f2;
        temp_f12 = (sp58 * sp30) - (temp_f4 * sp50);
        sp6C = temp_f12;
        temp_f14 = (sp50 * temp_f8) - (sp30 * sp54);
        sp70 = temp_f14;
        func_150440A0(temp_f12, temp_f14, temp_a0, sp5C, sp60, sp64, sp5C - sp50, sp60 - sp54, sp64 - sp58, temp_f2, temp_f12, temp_f14);
        temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x14C));
        if (temp_f0 != 1.0f) {
            (*(f32 *)((char *)(temp_a0) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x0)) * temp_f0);
            (*(f32 *)((char *)(temp_a0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x10)) * (*(f32 *)((char *)(temp_v1) + 0x14C)));
            (*(f32 *)((char *)(temp_a0) + 0x20)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x20)) * (*(f32 *)((char *)(temp_v1) + 0x14C)));
            (*(f32 *)((char *)(temp_a0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x8)) * (*(f32 *)((char *)(temp_v1) + 0x14C)));
            (*(f32 *)((char *)(temp_a0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x18)) * (*(f32 *)((char *)(temp_v1) + 0x14C)));
            (*(f32 *)((char *)(temp_a0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x28)) * (*(f32 *)((char *)(temp_v1) + 0x14C)));
        }
        temp_f0_2 = (*(s32 *)((char *)(temp_v1) + 0x150));
        if (temp_f0_2 != 1.0f) {
            (*(f32 *)((char *)(temp_a0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x4)) * temp_f0_2);
            (*(f32 *)((char *)(temp_a0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x14)) * (*(f32 *)((char *)(temp_v1) + 0x150)));
            (*(f32 *)((char *)(temp_a0) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x24)) * (*(f32 *)((char *)(temp_v1) + 0x150)));
        }
    }
}
