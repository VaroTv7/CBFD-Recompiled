/**
 * Auto-decompiled from asm/E8BB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                      /* extern */

void func_150BB700(void *arg0) {
    if (func_1509BE40(1, 0x4047, 6, 0x2000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x1000);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x1000);
}
