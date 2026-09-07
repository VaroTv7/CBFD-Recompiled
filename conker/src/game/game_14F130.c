/**
 * Auto-decompiled from asm/14F130.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0(); /* extern */
void * func_15123A54();                            /* extern */
void * func_1512A390();                            /* extern */
void * func_1512E140();                            /* extern */
extern f32 D_800A3440;
extern f32 D_800A3444;
extern f32 D_800A3448;
extern f32 D_800A344C;
extern f32 D_800A3450;
extern f32 D_800A3454;
extern u8 D_800BEA0C;

void func_15121C80(void *arg0, void *arg1) {
    f32 sp4C;
    s32 sp3C;
    void * sp30;
    f32 temp_f0;
    f32 temp_f8;
    f32 var_f2;
    f32 var_f8;
    s32 var_a1;
    u16 temp_t6;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_v0_2;
    void *temp_v1;
    f32 var_f0;

    var_a1 = ((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x10) != 0;
    if (var_a1 != 0) {
        var_a1 = ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 0x10) != 0;
    }
    if ((var_a1 == 0) && ((D_800BE616 != 0) || (temp_v0 = (*(s32 *)((char *)(arg0) + 0x23E)), (temp_v0 == 9)) || (temp_v0 == 0x3B)) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x1B3)) != 0)) {
        if (D_800BE616 != 0) {
            (*(s32 *)((char *)(arg0) + 0x97C)) = 5.0f;
            (*(s32 *)((char *)(arg0) + 0x980)) = 0x41000000;
            func_150495B0(arg1, (char *)(arg0) + 0x96C, 0x40A00000, (char *)(arg0) + 0x98C, 1.0f, 2.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            func_150495B0((char *)(arg0) + 0x970, (*(s32 *)((char *)(arg0) + 0x980)), (char *)(arg0) + 0x990, 0x3F800000, 2.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            func_15049688((char *)(arg0) + 0x37C, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) - 180.0f, (char *)(arg0) + 0x7C8, (*(s32 *)((char *)(arg0) + 0x96C)), (*(s32 *)((char *)(arg0) + 0x970)), (*(s32 *)((char *)(arg0) + 0x7B4)));
        } else {
            func_15049688(arg1, (f32)(s32)((char *)(arg0) + 0x37C), (void *)(s32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) - 180.0f), (*(f32 *)((char *)(arg0) + 0x7C8)), 5.0f, 8.0f);
        }
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A3440);
    } else if ((*(s32 *)((char *)(arg0) + 0x698)) == 0) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3D0));
        temp_t6 = (*(s32 *)((char *)(temp_v0_2) + 0x7C));
        var_f8 = (f32) temp_t6;
        if ((s32) temp_t6 < 0) {
            var_f8 += 4294967296.0f;
        }
        temp_f8 = (((*(f32 *)((char *)(temp_v0_2) + 0x40)) + (var_f8 * 0.005493164f)) - 180.0f) - (f32)(s32)(arg1);
        sp4C = temp_f8;
        if ((var_a1 != 0) && ((*(s32 *)((char *)(arg0) + 0x23E)) != 0x1C)) {
            sp4C = temp_f8 - ((f32) ((s32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x2E4)) >> 0x10) * D_800A3444);
        }
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x23E));
        if ((temp_v0_3 == 9) || (temp_v0_3 == 0x38) || (temp_v0_3 == 0x39) || (temp_v0_3 == 0x37) || (temp_v0_3 == 0x3B) || (temp_v0_3 == 0x12)) {
            sp4C -= (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x12)) * 0.005493164f;
        }
        sp3C = var_a1;
        func_15048758(arg1, &sp4C, var_a1);
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x3D4));
            temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x18C));
            if (D_800A3448 != temp_f0) {
                (*(s32 *)((char *)(arg0) + 0x37C)) = temp_f0;
                (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x160));
                (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x164));
                (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x168));
                (*(s32 *)((char *)(arg0) + 0x2F8)) = (s32) (*(s32 *)((char *)&(sp30) + 0x0));
                (*(s32 *)((char *)(arg0) + 0x2FC)) = (s32) (*(s32 *)((char *)&(sp30) + 0x4));
                (*(s32 *)((char *)(arg0) + 0x300)) = (s32) (*(s32 *)((char *)&(sp30) + 0x8));
                (*(s32 *)((char *)(arg0) + 0x304)) = (s32) (*(s32 *)((char *)&(sp30) + 0x0));
                (*(s32 *)((char *)(arg0) + 0x308)) = (s32) (*(s32 *)((char *)&(sp30) + 0x4));
                (*(s32 *)((char *)(arg0) + 0x30C)) = (s32) (*(s32 *)((char *)&(sp30) + 0x8));
                (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x18C)) = (f32) D_800A3448;
            } else {
                (*(s32 *)((char *)(arg0) + 0x37C)) = sp4C;
            }
            (*(s32 *)((char *)(arg0) + 0x7C8)) = 0.0f;
        } else {
            if ((sp3C != 0) || ((*(s32 *)((char *)(arg0) + 0x600)) != 0)) {
                var_f0 = 0x40800000;
                var_f2 = 6.0f;
            } else {
                temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x23E));
                if (((temp_v0_4 == 9) && (D_800BE616 != 0)) || (temp_v0_4 == 0x38) || (temp_v0_4 == 0x39) || (temp_v0_4 == 0x37) || (temp_v0_4 == 0x3B) || (temp_v0_4 == 0x12)) {
                    var_f0 = 0x40000000;
                    var_f2 = 6.0f;
                } else if ((*(s32 *)((char *)(arg0) + 0x84)) & 0x200000) {
                    var_f0 = 0x3F800000;
                    var_f2 = D_800A344C;
                } else {
                    var_f0 = 0x3F400000;
                    var_f2 = D_800A3450;
                }
            }
            if (D_800BEA0C == 0) {
                func_15049688((char *)(arg0) + 0x37C, sp4C, (char *)(arg0) + 0x7C8, var_f0, var_f2, (*(s32 *)((char *)(arg0) + 0x7B4)));
            }
        }
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A3454);
    }
    func_1512A390(arg0);
    func_15123A54(arg0);
    func_1512E140(arg0);
}
