/**
 * Auto-decompiled from asm/118670.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                    /* extern */
void * func_151254F4();                        /* extern */
extern s32 D_80088A90;
extern f32 D_800A1480;

void func_150EB1C0(void *arg0) {
    s32 sp2C;
    s32 temp_t1;
    s32 temp_v0;

    sp2C = func_1509BE40(0, func_1509BE40(0, 0x2006, 0xB7) | 0x2000, 0xBC);
    temp_v0 = func_1509BE40(0, 0x2000, 0xBB);
    if ((sp2C != 0) && (temp_v0 != 0)) {
        func_1509BFB0(0, 0x405D, 1);
        func_1509BFB0(0, 0x405E, 1);
        func_1509BFB0(0, 0x405F, 1);
        func_1509BFB0(0, 0x4060, 1);
        func_1509BFB0(0, 0x4061, 1);
        if (((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100) && ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0)) {
            if (func_15123934(arg0, 8, 0, 0, 3) != 0) {
                temp_t1 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x01100004;
                (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t1 & ~2);
                (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
                func_151254F4(arg0, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x65)) - 1);
                (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) | 0x10);
            }
            (*(s32 *)((char *)(arg0) + 0x134)) = 0;
            (*(s32 *)((char *)(arg0) + 0x348)) = 320.0f;
            (*(s32 *)((char *)(arg0) + 0x34C)) = 320.0f;
            (*(f32 *)((char *)(arg0) + 0x374)) = (f32) D_800A1480;
            (*(s32 *)((char *)(arg0) + 0x190)) = 180.0f;
            D_80088A90 = 1;
            func_1509BFB0(0, 0x405C, 0);
        }
    } else {
        if (func_151239CC(arg0, 3) != 0) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
            func_151254F4(arg0, (*(s32 *)((char *)(arg0) + 0x23D)));
            (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) & ~0x10);
            (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
            D_80088A90 = 0;
        }
        func_1509BFB0(0, 0x405C, 1);
        func_1509BFB0(0, 0x405D, 0);
        func_1509BFB0(0, 0x405E, 0);
        func_1509BFB0(0, 0x405F, 0);
        func_1509BFB0(0, 0x4060, 0);
        func_1509BFB0(0, 0x4061, 0);
        if (func_1509BE40(1, 0x4040, 6, 0x9000) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x80);
    }
}
