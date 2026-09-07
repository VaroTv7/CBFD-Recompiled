/**
 * Auto-decompiled from asm/15D6E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern s32 D_80089670;

void func_15130230(void * arg1) {
    u8 temp_v0;

    temp_v0 = D_800B0DF0->unkF;
    if (temp_v0 != 0) {
        ((s32 (*)())((char *)(&D_80089670 + (temp_v0 * 4))))();
    }
}
