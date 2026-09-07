/**
 * Auto-decompiled from asm/50D20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_1505EEF4();                             /* extern */
extern s32 D_800C35F0;

void func_15023870(s32 arg0, s32 arg1, s32 arg2, void * arg3) {
    void *temp_v0;

    if ((arg0 == 0xB) && (arg1 == 2)) {
        temp_v0 = func_1505EEF4(arg3);
        if (temp_v0 != NULL) {
            (*(u8 *)((char *)((*(&D_800C35F0 + (arg2 * 4)))) + 0x2A)) = (u8) (*(u8 *)((char *)(temp_v0) + 0x3B));
        }
    }
}
