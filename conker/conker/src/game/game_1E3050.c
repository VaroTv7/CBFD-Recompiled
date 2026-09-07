/**
 * Auto-decompiled from asm/1E3050.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_151B4FE0();              /* extern */

void func_151B5BA0(void *arg0, void *arg1) {
    if (((*(s32 *)((char *)(arg0) + 0x4)) == 0x53) && ((*(s32 *)((char *)(arg1) + 0x4)) == 0x16)) {
        func_151B4FE0(arg1, 0xFF, 1, arg1);
    }
}
