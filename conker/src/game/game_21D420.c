/**
 * Auto-decompiled from asm/21D420.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_100020D0(s32 (*)(s32), s32, s32, void * *);     /* extern */
s32 memcpy();                                       /* extern */

s32 func_151EFF70(s32 arg2) {
    return memcpy() + arg2;
}

s32 func_151EFF94(s32 arg0, s32 arg1, void * arg2, void * arg3) {
    s32 temp_v0;

    temp_v0 = func_100020D0(func_151EFF70, arg0, arg1, &arg2);
    if (temp_v0 >= 0) {
        (*(s32 *)((char *)(arg0) + temp_v0)) = 0;
    }
    return temp_v0;
}
