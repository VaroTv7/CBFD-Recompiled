/**
 * Auto-decompiled from asm/D50C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150A7C10(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0;
    temp_f0 = (s32) (arg1 * 65536.0f);
    (*(s32 *)((char *)(arg0) + 0x10)) = 0;
    (*(s32 *)((char *)(arg0) + 0x18)) = 0;
    (*(s32 *)((char *)(arg0) + 0x20)) = 0;
    (*(s32 *)((char *)(arg0) + 0x28)) = 0;
    temp_f0_2 = (s32) (arg2 * 65536.0f);
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(s32 *)((char *)(arg0) + 0x38)) = 0;
    (*(s32 *)((char *)(arg0) + 0x0)) = 1;
    (*(s32 *)((char *)(arg0) + 0xA)) = 1;
    temp_f0_3 = (s32) (arg3 * 65536.0f);
    (*(s32 *)((char *)(arg0) + 0x14)) = 1;
    (*(s32 *)((char *)(arg0) + 0x1E)) = 1;
    (*(s16 *)((char *)(arg0) + 0x0)) = (s16) ((u32) temp_f0 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0xA)) = (s16) ((u32) temp_f0_2 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((u32) temp_f0_3 >> 0x10);
    (*(s16 *)((char *)(arg0) + 0x20)) = (s16) temp_f0;
    (*(s16 *)((char *)(arg0) + 0x2A)) = (s16) temp_f0_2;
    (*(s16 *)((char *)(arg0) + 0x34)) = (s16) temp_f0_3;
}
