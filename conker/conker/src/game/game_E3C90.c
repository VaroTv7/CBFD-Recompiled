/**
 * Auto-decompiled from asm/E3C90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                    /* extern */
void * func_151254F4();                        /* extern */
extern s32 D_80088710;
extern f32 D_8009FCF0;
extern f32 D_8009FCF4;

void func_150B67E0(void *arg0) {
    s32 temp_s0;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_s0;

    if (func_1509BE40(0, 0x503C, 0x1A) == 0) {
        if (func_15123934(arg0, (*(s32 *)((char *)(arg0) + 0x2C)), 0, 0, 0) != 0) {
            (*(s32 *)((char *)(arg0) + 0x1B4)) = 3;
            temp_t7 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x20000;
            (*(s32 *)((char *)(arg0) + 0x84)) = temp_t7;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t7 & ~4);
            func_15124B18(arg0);
            (*(s32 *)((char *)(arg0) + 0x23C)) = 1;
        }
        (*(f32 *)((char *)(arg0) + 0x374)) = (f32) D_8009FCF0;
        (*(s32 *)((char *)(arg0) + 0x348)) = 450.0f;
        (*(s32 *)((char *)(arg0) + 0x34C)) = 450.0f;
    } else {
        func_1509BFB0(0, 0x4000, 0);
        if (((*(s32 *)((char *)(arg0) + 0x2C)) == 1) && (func_151239CC(arg0, 0) != 0)) {
            (*(s32 *)((char *)(arg0) + 0x1B4)) = 2;
            func_15124B18(arg0);
        }
        if (func_1509BE40(1, 0x4024, 6, 0x2000) != 0) {
            D_80088710 = 0x9003;
        } else if (func_1509BE40(1, 0x4025, 6, 0x2000) != 0) {
            D_80088710 = 0x9009;
        } else if (func_1509BE40(1, 0x4026, 6, 0x2000) != 0) {
            D_80088710 = 0x900A;
        } else if (func_1509BE40(1, 0x4027, 6, 0x2000) != 0) {
            D_80088710 = 0x900B;
        }
        if (D_80088710 != 0x3E7) {
            func_1509BFB0(5, 0x4000, 4, 2, 0, D_80088710 & 0xFFF, 0, 0);
        }
        var_s0 = 0;
        do {
            if ((func_1509BE40(1, var_s0 + 0x400C, 6, 0x2000) != 0) || (func_1509BE40(1, 0x4014, 6, 0x2000) != 0)) {
                func_1509BFB0(1, 0x2000, 0x3B, 2);
            }
            var_s0 += 1;
        } while (var_s0 != 3);
        if (func_1509BE40(1, 0x4000, 6, 0x2000) != 0) {
            func_1509BFB0(2, 0x9000, 6, 1, 0x80000);
            func_1509BFB0(1, 0x9000, 0x10, 0x55);
        } else {
            func_1509BFB0(2, 0x9000, 6, 0, 0x80000);
            func_1509BFB0(1, 0x9000, 0x10, 0);
        }
    }
    temp_s0 = func_1509BE40(0, func_1509BE40(0, 0x200A, 0xB7) | 0x2000, 0xBC);
    temp_v0 = func_1509BE40(0, 0x2000, 0xBB);
    if ((temp_s0 != 0) && (temp_v0 != -1)) {
        (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) | 0x100);
    } else {
        (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) & ~0x100);
    }
    if ((temp_s0 != 0) && (temp_v0 != -1)) {
        if (func_15123934(arg0, (*(s32 *)((char *)(arg0) + 0x2C)), 0, 0, 3) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x100002);
            (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
            func_151254F4(arg0, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x65)) - 1);
            (*(s32 *)((char *)(arg0) + 0x134)) = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x34C)) = 450.0f;
        (*(s32 *)((char *)(arg0) + 0x348)) = 450.0f;
        (*(f32 *)((char *)(arg0) + 0x374)) = (f32) D_8009FCF4;
        if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 4) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x190)) = 135.0f;
        return;
    }
    if (func_151239CC(arg0, 3) != 0) {
        func_151254F4(arg0, (*(s32 *)((char *)(arg0) + 0x23D)));
        (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
    }
}
