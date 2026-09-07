/**
 * Auto-decompiled from asm/1E5FF0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_151D9450();                       /* extern */

s32 func_151B8B40(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((sinf((*(f32 *)((char *)(arg0) + 0x44))) * (*(f32 *)((char *)(arg0) + 0x5C))) + (*(f32 *)((char *)(arg0) + 0x48)));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(s32 *)((char *)(arg0) + 0x44)) = func_15144B68((*(s32 *)((char *)(arg0) + 0x44)), arg0);
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}

void func_151B8BE0(void *arg0, s32 arg1) {
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((sinf((*(f32 *)((char *)(arg0) + 0x58))) * (*(f32 *)((char *)(arg0) + 0x64))) + (*(f32 *)((char *)(arg0) + 0x5C)));
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) + ((*(f32 *)((char *)(arg0) + 0x60)) * D_800BE9A4));
    (*(s32 *)((char *)(arg0) + 0x58)) = func_15144B68((*(s32 *)((char *)(arg0) + 0x58)), arg0);
    func_151D9450(arg0, arg1);
}

s32 func_151B8C54(void *arg0) {
    void *sp18;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x120;
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((sinf((*(f32 *)((char *)(arg0) + 0x130))) * (*(f32 *)((char *)(temp_v1) + 0x28))) + (*(f32 *)((char *)(temp_v1) + 0x14)));
    (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) + ((*(f32 *)((char *)(temp_v1) + 0x18)) * D_800BE9A4));
    sp18 = temp_v1;
    (*(s32 *)((char *)(temp_v1) + 0x10)) = func_15144B68((*(s32 *)((char *)(temp_v1) + 0x10)), arg0);
    (*(f32 *)((char *)(arg0) + 0x120)) = (f32) ((*(f32 *)((char *)(arg0) + 0x120)) + ((*(f32 *)((char *)(temp_v1) + 0x1C)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_v1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x8)) + ((*(f32 *)((char *)(temp_v1) + 0x24)) * D_800BE9A4));
    return 1;
}

s32 func_151B8CFC(void *arg0) {
    void *sp18;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x110;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((sinf((*(f32 *)((char *)(arg0) + 0x118))) * (*(f32 *)((char *)(temp_v1) + 0x4))) + (*(f32 *)((char *)(arg0) + 0x110)));
    (*(f32 *)((char *)(temp_v1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x8)) + ((*(f32 *)((char *)(temp_v1) + 0xC)) * D_800BE9A4));
    sp18 = temp_v1;
    (*(s32 *)((char *)(temp_v1) + 0x8)) = func_15144B68((*(s32 *)((char *)(temp_v1) + 0x8)), arg0);
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(temp_v1) + 0x10)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((*(f32 *)((char *)(temp_v1) + 0x18)) * D_800BE9A4));
    return 1;
}
