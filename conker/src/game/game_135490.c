/**
 * Auto-decompiled from asm/135490.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                      /* extern */
void * func_15123070();                            /* extern */

void func_15107FE0(void *arg0) {
    s32 temp_t9;

    if (func_150859AC((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x127)), 1) == 9) {
        func_151239CC(arg0, 2);
        if (func_15123934(arg0, 8, 0, (*(s32 *)((char *)(arg0) + 0x134)), 3) != 0) {
            (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
            temp_t9 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x01300000;
            (*(s32 *)((char *)(arg0) + 0x84)) = temp_t9;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t9 & ~4);
            func_15123070(arg0);
        }
        (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) | 0x800);
        (*(s32 *)((char *)(arg0) + 0x348)) = 150.0f;
        (*(s32 *)((char *)(arg0) + 0x34C)) = 150.0f;
        (*(s32 *)((char *)(arg0) + 0x374)) = 340.0f;
        (*(s32 *)((char *)(arg0) + 0x190)) = -6.0f;
    } else {
        (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) & ~0x800);
    }
    if ((func_1509BE40(1, 0x401A, 6, 0x9000) != 0) || (func_1509BE40(1, 0x401B, 6, 0x9000) != 0)) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x10000);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFFFEFFFF);
}
