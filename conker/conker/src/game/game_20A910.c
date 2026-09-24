/**
 * Auto-decompiled from asm/20A910.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * __osSiGetAccess();                                /* extern */
void * __osSiRelAccess();                                /* extern */
s32 __osEepStatus();                      /* extern */

s32 osEepromProbe(OSMesgQueue *arg0) {
    s32 sp2C;
    u16 sp24;
    s32 temp_t7;
    s32 var_v1;

    __osSiGetAccess();
    if (__osEepStatus(arg0, &sp24) != 0) {
        var_v1 = 0;
    } else {
        temp_t7 = sp24 & 0xC000;
        if (temp_t7 != 0x8000) {
            var_v1 = 2;
            if (temp_t7 != 0xC000) {
                var_v1 = 0;
            }
        } else {
            var_v1 = 1;
        }
    }
    sp2C = var_v1;
    __osSiRelAccess();
    return sp2C;
}
