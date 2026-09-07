/**
 * Auto-decompiled from asm/FF900.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"



void func_150D2450(void *arg0) {
    f32 sp24;
    f32 sp20;
    void *temp_s0;

    sp20 = sinf((*(s32 *)((char *)(arg0) + 0x40)));
    temp_s0 = (char *)(arg0) + 0x28;
    sp24 = sinf((*(s32 *)((char *)(arg0) + 0x44)));
    func_1515D4D4((u32) ((sp20 * (*(u32 *)((char *)(temp_s0) + 0xC))) + (*(u32 *)((char *)(arg0) + 0x28))) & 0xFF, (u32) ((sp24 * (*(u32 *)((char *)(temp_s0) + 0x10))) + (*(u32 *)((char *)(temp_s0) + 0x4))) & 0xFF, (u32) ((sinf((*(u32 *)((char *)(temp_s0) + 0x20))) * (*(u32 *)((char *)(temp_s0) + 0x14))) + (*(u32 *)((char *)(temp_s0) + 0x8))) & 0xFF, 0);
    (*(s32 *)((char *)(temp_s0) + 0x18)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x18)) + ((*(s32 *)((char *)(temp_s0) + 0x24)) * D_800BE9A4));
    (*(s32 *)((char *)(temp_s0) + 0x1C)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x1C)) + ((*(s32 *)((char *)(temp_s0) + 0x28)) * D_800BE9A4));
    (*(s32 *)((char *)(temp_s0) + 0x20)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x20)) + ((*(s32 *)((char *)(temp_s0) + 0x2C)) * D_800BE9A4));
}
