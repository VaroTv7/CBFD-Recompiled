/**
 * Auto-decompiled from asm/D52A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_8009F6B0;

void func_150A7DF0(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    void *unksp0;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f26_3;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f30_3;
    s32 temp_f0;
    s32 temp_f10;
    s32 temp_f12;
    s32 temp_f14;
    s32 temp_f16;
    s32 temp_f2_2;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_f8;

    temp_f30 = D_8009F6B0;
    unksp0 = arg0;
    temp_f24 = arg1 * temp_f30;
    temp_f20 = cosf(temp_f24);
    temp_f22 = sinf(temp_f24);
    temp_f26 = arg2 * temp_f30;
    temp_f24_2 = cosf(temp_f26);
    temp_f26_2 = sinf(temp_f26);
    temp_f30_2 = arg3 * temp_f30;
    temp_f28 = cosf(temp_f30_2);
    temp_f30_3 = sinf(temp_f30_2);
    temp_f2 = temp_f24_2 * temp_f30_3;
    (*(s32 *)((char *)(arg0) + 0x6)) = 0;
    temp_f18 = temp_f22 * temp_f26_2;
    (*(s32 *)((char *)(arg0) + 0xE)) = 0;
    (*(s32 *)((char *)(arg0) + 0x16)) = 0;
    (*(s32 *)((char *)(arg0) + 0x18)) = 0;
    (*(s32 *)((char *)(arg0) + 0x1A)) = 0;
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0;
    (*(s32 *)((char *)(arg0) + 0x26)) = 0;
    temp_f26_3 = temp_f20 * temp_f26_2;
    (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
    (*(s32 *)((char *)(arg0) + 0x36)) = 0;
    (*(s32 *)((char *)(arg0) + 0x38)) = 0;
    (*(s32 *)((char *)(arg0) + 0x3A)) = 0;
    (*(s32 *)((char *)(arg0) + 0x3C)) = 0;
    (*(s32 *)((char *)(arg0) + 0x3E)) = 0;
    temp_f0 = (s32) (temp_f24_2 * temp_f28 * 65536.0f);
    (*(s32 *)((char *)(arg0) + 0x18)) = 0;
    (*(s16 *)((char *)(arg0) + 0x20)) = (s16) temp_f0;
    temp_f2_2 = (s32) (temp_f2 * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0x0)) = (s16) ((u32) temp_f0 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x22)) = (s16) temp_f2_2;
    temp_f4 = (s32) (-temp_f26_2 * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0x2)) = (s16) ((u32) temp_f2_2 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x24)) = (s16) temp_f4;
    temp_f6 = (s32) (((temp_f18 * temp_f28) - (temp_f20 * temp_f30_3)) * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0x4)) = (s16) ((u32) temp_f4 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x28)) = (s16) temp_f6;
    temp_f8 = (s32) (((temp_f18 * temp_f30_3) + (temp_f20 * temp_f28)) * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0x8)) = (s16) ((u32) temp_f6 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x2A)) = (s16) temp_f8;
    temp_f10 = (s32) (temp_f22 * temp_f24_2 * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0xA)) = (s16) ((u32) temp_f8 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x2C)) = (s16) temp_f10;
    temp_f12 = (s32) (((temp_f26_3 * temp_f28) + (temp_f22 * temp_f30_3)) * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0xC)) = (s16) ((u32) temp_f10 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x30)) = (s16) temp_f12;
    temp_f14 = (s32) (((temp_f26_3 * temp_f30_3) - (temp_f22 * temp_f28)) * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0x10)) = (s16) ((u32) temp_f12 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x32)) = (s16) temp_f14;
    temp_f16 = (s32) (temp_f20 * temp_f24_2 * 65536.0f);
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((u32) temp_f14 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x34)) = (s16) temp_f16;
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((u32) temp_f16 >> 0x10);
    (*(s32 *)((char *)(arg0) + 0x1E)) = 1;
}
