/**
 * Auto-decompiled from asm/126ED0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                      /* extern */

void func_150F9A20(void *arg0) {
    s32 temp_t1;
    s32 temp_t7;

    if (func_1509BE40(1, 0x4025, 6, 0x2000) != 0) {
        temp_t7 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x80;
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t7;
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t7 & ~8);
        (*(s32 *)((char *)(arg0) + 0x190)) = 85.0f;
        return;
    }
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x84)) & ~0x80;
    (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t1 | 8);
    (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
}
