/**
 * Auto-decompiled from asm/43330.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
extern s32 D_800BE9C8;
extern s32 D_800BEBA4;

void func_15015E80(void) {
    s32 temp_v0;
    u16 var_v1;

    var_v1 = D_800B0DF0->unk1C;
    if (var_v1 == 0) {
        D_800B0DF0->unk1C = 0x1F40U;
        var_v1 = D_800B0DF0->unk1C;
    }
    D_800B0DF0->unk1C = (u16) (var_v1 + 0x190);
    (*(s32 *)((char *)&(D_800BE9C8) + 0x0)) = allocate_memory(D_800B0DF0->unk1C * 8, 0xFF, 2, 0);
    temp_v0 = allocate_memory(D_800B0DF0->unk1C * 8, 0xFF, 2, 0);
    (*(s32 *)((char *)&(D_800BE9C8) + 0x4)) = temp_v0;
    D_800BEBA4 = ((s32) (temp_v0 - (*(s32 *)((char *)&(D_800BE9C8) + 0x0))) >> 3) - 0x190;
}
