/**
 * Auto-decompiled from asm/DADB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150AD900(void *arg0, void *arg1) {
    return ((*(s32 *)((char *)(arg0) + 0x0)) * (*(s32 *)((char *)(arg1) + 0x0))) + ((*(s32 *)((char *)(arg0) + 0x4)) * (*(s32 *)((char *)(arg1) + 0x4))) + ((*(s32 *)((char *)(arg0) + 0x8)) * (*(s32 *)((char *)(arg1) + 0x8)));
}

f32 func_150AD930(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f4;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f4 = (*(s32 *)((char *)(arg0) + 0x8));
}
