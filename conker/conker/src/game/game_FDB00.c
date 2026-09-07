/**
 * Auto-decompiled from asm/FDB00.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                         /* extern */
void * func_151254F4();                       /* extern */

void func_150D0650(void *arg0) {
    if (!((*(u8 *)(D_800D2E4C)) & 0x80)) {
        if (func_1509BE40(0, 0x2000, 0xBB) != -1) {
            if (func_15123934(arg0, (*(s32 *)((char *)(arg0) + 0x2C)), 0, (*(s32 *)((char *)(arg0) + 0x134)), 8) != 0) {
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x01000000);
                func_151254F4(arg0, D_800CC335 - 1);
                (*(s32 *)((char *)(arg0) + 0x190)) = 100.0f;
            }
        } else if (func_151239CC(arg0, 8) != 0) {
            func_151254F4(arg0, 0);
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        }
    }
}
