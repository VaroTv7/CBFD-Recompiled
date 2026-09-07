/**
 * Auto-decompiled from asm/F4800.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();            /* extern */

void func_150C7350(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80004000);
    if (func_1509BE40(3, 0x2000, 0xAC, 0x4002, 0x4003, 0x4004) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x400000);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFFBFFFFF);
}
