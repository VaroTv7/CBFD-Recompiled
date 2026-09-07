/**
 * Auto-decompiled from asm/21C4F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * __osPiGetAccess();                                /* extern */
void * __osPiRelAccess();                                /* extern */
s32 osPiRawReadIo();                        /* extern */

s32 func_151EF040(s32 arg0, s32 arg1) {
    s32 temp_s0;

    __osPiGetAccess();
    temp_s0 = osPiRawReadIo(arg0, arg1);
    __osPiRelAccess();
    return temp_s0;
}

f32 func_151EF080(f32 arg0) {
}
