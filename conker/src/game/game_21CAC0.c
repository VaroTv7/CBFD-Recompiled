/**
 * Auto-decompiled from asm/21CAC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern u32 D_80091970;

s32 func_151EF610(void) {
    s32 temp_t6;

    temp_t6 = D_80091970 * 4;
    D_80091970 = (u32) ((temp_t6 + 2) * (temp_t6 + 3)) >> 2;
    return D_80091970;
}
