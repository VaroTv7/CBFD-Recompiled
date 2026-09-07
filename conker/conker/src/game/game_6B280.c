/**
 * Auto-decompiled from asm/6B280.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"



void func_1503DDD0(s32 arg0) {
    u32 temp_t5;
    u32 var_v0;
    void *var_v1;

    if ((arg0 >= 0) && ((u32) arg0 < (u32) D_800C6654)) {
        (*(s32 *)((char *)((D_800C6650 + (arg0 * 0x14))) + 0x6)) = 2;
        var_v0 = D_800C6654;
        if (var_v0 != 0) {
            var_v1 = D_800C6650 + ((var_v0 - 1) * 0x14);
            if ((*(s32 *)((char *)(var_v1) + 0x6)) & 2) {
loop_4:
                temp_t5 = var_v0 - 1;
                D_800C6654 = temp_t5;
                var_v0 = temp_t5;
                var_v1 = (char *)(var_v1) - 0x14;
                if (temp_t5 != 0) {
                    if ((*(s32 *)((char *)(var_v1) + 0x6)) & 2) {
                        goto loop_4;
                    }
                }
            }
        }
    }
}
