/**
 * Auto-decompiled from asm/15B960.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800A3730;

void func_1512E4B0(void *arg0) {
    f32 sp18;
    f32 temp_f12;
    f32 temp_f8;
    s32 var_a1;
    void *temp_v0;

    var_a1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x23D)) == 3) {
        var_a1 = 1;
    }
    temp_v0 = (var_a1 * 0x32C) + &gObjects;
    (*(f32 *)((char *)(arg0) + 0x2BC)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x2C0)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) + 150.0f);
    (*(f32 *)((char *)(arg0) + 0x2C4)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    temp_f12 = ((f32) (s16) (s32) ((f32) (s16) ((*(f32 *)((char *)(temp_v0) + 0x2E4)) * -1) + ((s32)((*(f32 *)((char *)(temp_v0) + 0x40)) * 10.0f))) * D_800A3730) / 1800.0f;
    sp18 = temp_f12;
    temp_f8 = sinf(temp_f12) * 60.0f;
    (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C0));
    (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2BC)) - temp_f8);
    (*(f32 *)((char *)(arg0) + 0x300)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C4)) - (cosf(temp_f12) * 60.0f));
}
