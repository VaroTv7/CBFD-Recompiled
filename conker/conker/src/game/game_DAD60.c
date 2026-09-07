/**
 * Auto-decompiled from asm/DAD60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150AD8B0(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f4 = (*(s32 *)((char *)(arg1) + 0x0));
    temp_f6 = (*(s32 *)((char *)(arg1) + 0x4));
    temp_f8 = (*(s32 *)((char *)(arg1) + 0x8));
    temp_f10 = (*(s32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((temp_f0 * temp_f6) - (temp_f2 * temp_f4));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) ((temp_f2 * temp_f8) - (temp_f10 * temp_f6));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) ((temp_f10 * temp_f4) - (temp_f0 * temp_f8));
}
