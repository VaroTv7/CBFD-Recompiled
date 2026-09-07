/**
 * Auto-decompiled from asm/15B5F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0(); /* extern */
extern f32 D_800A3720;
extern f32 D_800DC004;

void func_1512E140(f32 arg1, void *arg0) {
    f32 sp48;
    s32 sp44;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f14;
    f32 var_f16;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;

    var_f14 = arg1;
    if ((D_800C3671 == 0) && (((*(s32 *)((char *)(arg0) + 0x2C)) & 0x100) || ((*(s32 *)((char *)(arg0) + 0x92C)) == 0) || ((*(s32 *)((char *)(arg0) + 0x920)) & 8))) {
        sp48 = (*(s32 *)((char *)(arg0) + 0x2FC)) - (*(s32 *)((char *)(arg0) + 0x354));
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x5F0));
        temp_v1 = temp_a1 & 0x400;
        if ((temp_a1 & 0x10) && ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 0x10)) {
            var_f16 = 95.0f;
        } else {
            var_f16 = (*(s32 *)((char *)(arg0) + 0x348));
        }
        if (temp_v1 != 0) {
            var_f16 *= 1.5f;
        }
        if (!((*(s32 *)((char *)(arg0) + 0x84)) & 0x10)) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x3D0));
            temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x17C));
            if ((*(s32 *)((char *)(temp_v0) + 0x180)) < temp_f2) {
                temp_f0 = (*(s32 *)((char *)(arg0) + 0x354));
                var_f14 = temp_f2 - 40.0f;
                if ((var_f14 < (temp_f0 + var_f16)) && (temp_f0 < var_f14)) {
                    var_f16 = var_f14 - temp_f0;
                    sp44 = 1;
                } else {
                    sp44 = 0;
                }
            }
        }
        var_f0 = (*(s32 *)((char *)(arg0) + 0x6F0));
        if (var_f0 != 0.0f) {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x6F4));
            if (temp_f2_2 != 0.0f) {
                if (var_f16 < var_f0) {

                } else if (temp_f2_2 < var_f16) {
                    var_f0 = temp_f2_2;
                } else {
                    var_f0 = var_f16;
                }
                var_f16 = var_f0;
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x7F4)) != 0) {
            var_f16 = D_800DC004;
        }
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            (*(s32 *)((char *)(arg0) + 0x25C)) = 0.0f;
            sp48 = var_f16;
            goto block_46;
        }
        if (((temp_a1 & 0x40) && ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100)) || (temp_a0 = (*(s32 *)((char *)(arg0) + 0x2C)), (temp_a0 & 0x01000000))) {
            var_f16 = 0.0f;
            var_t0 = (*(s32 *)((char *)(arg0) + 0x2C)) & 0x100;
            goto block_42;
        }
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3D0));
        if (!(((*(s32 *)((char *)(temp_v0_2) + 0x18)) - (*(s32 *)((char *)(temp_v0_2) + 0x180))) > 600.0f) || (temp_v1 != 0) || ((*(s32 *)((char *)(temp_v0_2) + 0xAD)) != 0) || ((*(s32 *)((char *)(temp_v0_2) + 0x102)) != 0) || (temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x3D4)), ((*(s32 *)((char *)(temp_v1_2) + 0x9C)) != 0)) || ((*(s32 *)((char *)(temp_v1_2) + 0x95)) != 0) || ((*(s32 *)((char *)(temp_v0_2) + 0x137)) != 0) || ((*(s32 *)((char *)(temp_v0_2) + 0x84)) == 0x194) || (temp_a1 & 0x80)) {
            var_t0 = temp_a0 & 0x100;
block_42:
            if ((var_t0 != 0) || (sp44 != 0)) {
                func_150495B0(0, var_f14, &sp48, var_f16, (char *)(arg0) + 0x25C, 0x40A00000, 9.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            } else {
                func_150495B0(0, var_f14, &sp48, var_f16, (char *)(arg0) + 0x25C, (*(s32 *)((char *)(arg0) + 0x3B4)), (*(s32 *)((char *)(arg0) + 0x3B8)), (*(s32 *)((char *)(arg0) + 0x7B4)));
            }
block_46:
            temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x354));
            (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) (temp_f0_2 + sp48);
            temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x2FC));
            (*(f32 *)((char *)(arg0) + 0x344)) = (f32) (temp_f2_3 - temp_f0_2);
            if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xAD)) == 1) && ((*(s32 *)((char *)(arg0) + 0x73C)) != 0)) {
                temp_f0_3 = (*(s32 *)((char *)(arg0) + 0x360));
                if (D_800A3720 != temp_f0_3) {
                    temp_f12 = temp_f0_3 + 5.0f;
                    if (temp_f2_3 < temp_f12) {
                        (*(s32 *)((char *)(arg0) + 0x2FC)) = temp_f12;
                        (*(s32 *)((char *)(arg0) + 0x344)) = 5.0f;
                    }
                }
            }
        }
    }
}
