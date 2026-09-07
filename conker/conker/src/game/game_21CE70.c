/**
 * Auto-decompiled from asm/21CE70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 __osInsertTimer();                        /* extern */
void * __osSetTimerIntr();                       /* extern */
extern s32 *D_8002BD70;

s32 func_151EF9C0(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 sp1C;
    s32 sp18;
    s32 temp_ret;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    (*(s32 *)((char *)(arg0) + 0xC)) = arg5;
    (*(s32 *)((char *)(arg0) + 0x8)) = arg4;
    if ((arg2 != 0) || (arg3 != 0)) {
        (*(s32 *)((char *)(arg0) + 0x10)) = arg2;
        (*(s32 *)((char *)(arg0) + 0x14)) = arg3;
    } else {
        (*(s32 *)((char *)(arg0) + 0x10)) = arg4;
        (*(s32 *)((char *)(arg0) + 0x14)) = arg5;
    }
    (*(s32 *)((char *)(arg0) + 0x18)) = arg6;
    (*(s32 *)((char *)(arg0) + 0x1C)) = arg7;
    temp_ret = __osInsertTimer(arg0);
    sp18 = temp_ret;
    sp1C = (u32) (u64) temp_ret;
    if ((char *)(*D_8002BD70) == (char *)(arg0)) {
        __osSetTimerIntr(sp18, sp1C);
    }
    return 0;
}
