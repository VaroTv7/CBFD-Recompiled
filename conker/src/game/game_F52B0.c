/**
 * Auto-decompiled from asm/F52B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                    /* extern */
void * func_15123070();                            /* extern */
void * func_151254F4();                       /* extern */
extern s32 D_80088800;
extern f32 D_800A04E0;
extern f32 D_800A04E4;

void func_150C7E00(void *arg0) {
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f12;
    f32 var_f2;
    void *temp_v0;
    void *temp_v1;

    sp34 = func_1509BE40(0, func_1509BE40(0, 0x2010, 0xB7) | 0x2000, 0xBC);
    sp30 = func_1509BE40(0, 0x2000, 0xBB);
    sp2C = func_1509BE40(0, func_1509BE40(0, 0x2010, 0xB7) | 0x2000, 0xBB);
    if (func_1509BE40(0, 0x5071, 0x1A) == 0) {
        if ((sp30 != -1) && (sp34 == 0)) {
            if (func_15123934(arg0, (*(s32 *)((char *)(arg0) + 0x2C)), 0, (*(s32 *)((char *)(arg0) + 0x134)), 3) != 0) {
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x01000000);
                func_151254F4(arg0, D_800CC335 - 1);
                (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
            }
        } else {
            if ((sp30 != -1) && (sp34 != 0)) {
                func_151239CC(arg0, 2);
                if (func_15123934(arg0, 8, 0, (*(s32 *)((char *)(arg0) + 0x134)), 3) != 0) {
                    func_151254F4(arg0, D_800CC335 - 1);
                    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~4);
                    (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
                    func_15123070(arg0);
                }
                (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) | 0x200);
                (*(s32 *)((char *)(arg0) + 0x348)) = 500.0f;
                (*(s32 *)((char *)(arg0) + 0x34C)) = 500.0f;
                (*(s32 *)((char *)(arg0) + 0x374)) = 800.0f;
                return;
            }
            if (func_151239CC(arg0, 3) != 0) {
                func_151254F4(arg0, 0);
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFEFFFFFF);
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 0;
                (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
                if ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0) {
                    (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
                }
            }
            (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) & ~0x200);
        }
    } else {
        if (func_1509BE40(0, 0x5072, 0x1A) == 0) {
            if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 4) {
                (*(s32 *)((char *)(arg0) + 0x190)) = 20.0f;
            }
            if (func_1509BE40(0, 0x2000, 0x93) == 0) {
                (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
                return;
            }
            func_1509BFB0(1, 0x9000, 0x17, func_1509BE40(1, func_1509BE40(0, 0x2011, 0xB7) | 0x2000, 0x9C, 0x2000));
            temp_f0 = ((f32) func_1509BE40(1, func_1509BE40(0, 0x2011, 0xB7) | 0x2000, 0x9A, 0x2000) - 300.0f) / 900.0f;
            if (temp_f0 < 0.0f) {
                var_f2 = 0.0f;
            } else {
                if (temp_f0 > 1.0f) {
                    var_f12 = 1.0f;
                } else {
                    var_f12 = temp_f0;
                }
                var_f2 = var_f12;
            }
            if (sp34 == 0) {
                (*(s32 *)((char *)(arg0) + 0x34C)) = 200.0f;
                (*(s32 *)((char *)(arg0) + 0x348)) = 200.0f;
                (*(s32 *)((char *)(arg0) + 0x190)) = 100.0f;
            } else {
                (*(f32 *)((char *)(arg0) + 0x190)) = (f32) ((103.0f * var_f2) + D_800A04E0);
                temp_f0_2 = 231.0f * var_f2;
                (*(f32 *)((char *)(arg0) + 0x374)) = (f32) ((224.0f * var_f2) + D_800A04E4);
                (*(s32 *)((char *)(arg0) + 0x34C)) = temp_f0_2;
                (*(s32 *)((char *)(arg0) + 0x348)) = temp_f0_2;
            }
            func_1509BFB0(2, 0x9000, 6, 1, 0x20000);
            func_1509BFB0(2, 0x9000, 6, 0, 4);
            if (sp2C != -1) {
                (*(s32 *)((char *)(arg0) + 0x670)) = 0.0f;
            }
            D_80088800 = 0;
            if ((*(s32 *)((char *)(arg0) + 0x5F0)) & 4) {
                temp_v0 = func_15083E90(0x10);
                if (temp_v0 != NULL) {
                    temp_v1 = (*(s32 *)((char *)(arg0) + 0x3D0));
                    if ((*(s32 *)((char *)(temp_v1) + 0x65)) != 0) {
                        (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
                        (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x18)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
                        (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
                    }
                }
            }
            if (func_151239CC(arg0, 3) != 0) {
                (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) & ~0x200);
                func_151254F4(arg0, 0);
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFEFFFFFF);
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 0;
                (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
                if ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0) {
                    (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
                }
            }
            goto block_41;
        }
        if ((func_151239CC(arg0, 3) != 0) || (D_80088800 == 0)) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 4);
            D_80088800 = 1;
            func_151254F4(arg0, 0);
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 0;
            (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
            (*(s32 *)((char *)(arg0) + 0x1B4)) = 3;
            func_15124B18(arg0);
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
            if ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0) {
                (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
            }
        }
block_41:
        if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 4) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        }
    }
}
