/**
 * Auto-decompiled from asm/122760.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                      /* extern */
void * func_151827D0();                                  /* extern */

void func_150F52B0(void *arg0) {
    if (func_1509BE40(1, 0x401C, 6, 0x9000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80000000);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
}

void func_150F5310(s32 arg0) {
    func_151827D0();
}
