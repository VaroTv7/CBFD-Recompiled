/**
 * Auto-decompiled from asm/1B6DB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void func_1510F800();                                 /* extern */
void *func_151464B8();                      /* extern */
void *func_15147DA0(); /* extern */
void *func_15167A68();          /* extern */
s32 func_151D8E20();                                /* extern */
void *memcpy();                     /* extern */
extern f32 D_800A73A0;
extern f32 D_800A73A4;
extern f64 D_800A73A8;
extern f32 D_800A73B0;
extern u8 D_800BE630;

void func_15189900(f32 *arg0, s32 arg1) {
    f32 temp_f0;
    s8 var_v0;
    void *temp_v0;

    temp_v0 = func_15167A68(0x1A, 1, 0x78, 1, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy((char *)(temp_v0) + 0x10, arg0, 0x50);
        func_1510F800(0);
        (*(s32 *)((char *)(temp_v0) + 0x6C)) = func_1510FD20((s32) ((*(s32 *)((char *)(temp_v0) + 0x18)) + ((*(s32 *)((char *)(temp_v0) + 0x24)) * 0.5f)), (s32) ((*(s32 *)((char *)(temp_v0) + 0x20)) + ((*(s32 *)((char *)(temp_v0) + 0x2C)) * 0.5f)));
        var_v0 = 0;
        if (arg1 != 0) {
            var_v0 = 1;
        }
        temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x28));
        (*(s32 *)((char *)(temp_v0) + 0x70)) = var_v0;
        (*(s32 *)((char *)(temp_v0) + 0x60)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x64)) = 0.0f;
        if (temp_f0 < 0.0f) {
            (*(f32 *)((char *)(temp_v0) + 0x68)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x1C)) + temp_f0);
            return;
        }
        (*(f32 *)((char *)(temp_v0) + 0x68)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    }
}

void *func_15189A00(void *arg0) {
    s8 sp121;
    s32 sp11C;
    s16 sp11A;
    s16 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    s16 sp10A;
    s16 sp108;
    s8 sp107;
    s8 sp106;
    s8 sp105;
    s8 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    s8 spE5;
    s8 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_ret;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 var_a1;
    s32 var_v0_2;
    u8 *var_v1;
    u8 temp_a0;
    void *temp_a3;
    void *temp_v0;
    void *var_v0;

    temp_a1 = (*(s32 *)((char *)(arg0) + 0x6C));
    if ((temp_a1 == 0) || (var_v0 = func_151464B8(temp_a1, temp_a1), (var_v0 == NULL))) {
        (*(s16 *)((char *)(arg0) + 0x60)) = (s16) ((*(s16 *)((char *)(arg0) + 0x60)) - D_800BE9E4);
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x60));
        if (temp_v1 < 0) {
            (*(s16 *)((char *)(arg0) + 0x60)) = (s16) (temp_v1 + 0x32);
            var_v0 = (void *) D_80082FA0;
            var_a1 = 0;
            if ((s32) var_v0 >= 0) {
                var_v1 = &D_800BE630;
                temp_a3 = &D_800BE630 + (s32)(var_v0);
loop_5:
                temp_a0 = *var_v1;
                var_v1 += 1;
                temp_v0 = (temp_a0 * 0x9A0) + D_800DBFF0;
                temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x18));
                var_v0 = (char *)(temp_v0) + 0x2F8;
                temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x2FC)) - (*(s32 *)((char *)(arg0) + 0x1C));
                temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x300)) - (*(s32 *)((char *)(arg0) + 0x20));
                if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < D_800A73A0) {
                    var_a1 = 1;
                }
                if (((u32) temp_a3 >= (u32) var_v1) && (var_a1 == 0)) {
                    goto loop_5;
                }
            }
            if (var_a1 != 0) {
                goto block_10;
            }
        } else {
block_10:
            temp_ret = random_float();
            var_v0 = (*(void **)&temp_ret);
            (*(f32 *)((char *)(arg0) + 0x64)) = (f32) ((*(f32 *)((char *)(arg0) + 0x64)) + (((*(f32 *)((char *)(arg0) + 0x38)) + (temp_ret * (*(f32 *)((char *)(arg0) + 0x3C)))) * D_800BE9A4));
            if ((*(s32 *)((char *)(arg0) + 0x64)) > 1.0f) {
                sp11C = 1;
                sp11A = 5;
                sp108 = 0x10;
                sp10A = 0xF;
                sp104 = 0x48;
                sp105 = 3;
                sp106 = 0xFF;
                spC8 = 0;
                spCC = 1;
                spD0 = 0x160600;
                spD4 = 3;
                spD8 = 0x22;
                spDC = 0x80;
                spE0 = 0x20;
                spE4 = 0;
                spE5 = 7;
                spE8 = (*(s32 *)((char *)(arg0) + 0x68));
                sp100 = D_800A73A4;
                do {
                    sp121 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x5C)) + 1)) + (*(u32 *)((char *)(arg0) + 0x58));
                    temp_f0_2 = random_float();
                    sp10C = (*(s32 *)((char *)(arg0) + 0x18)) + (temp_f0_2 * (*(s32 *)((char *)(arg0) + 0x24)));
                    sp110 = (*(s32 *)((char *)(arg0) + 0x1C)) + (temp_f0_2 * (*(s32 *)((char *)(arg0) + 0x28)));
                    sp114 = (*(s32 *)((char *)(arg0) + 0x20)) + (temp_f0_2 * (*(s32 *)((char *)(arg0) + 0x2C)));
                    spEC = (random_float() * (*(s32 *)((char *)(arg0) + 0x44))) + (*(s32 *)((char *)(arg0) + 0x40));
                    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x12));
                    temp_s1 = ((*(u32 *)((char *)(arg0) + 0x10)) - (random_u32() % (u32) ((temp_v1_2 * 2) + 1))) - -temp_v1_2;
                    temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x16)) + 1)) + (*(u32 *)((char *)(arg0) + 0x14));
                    temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x34))) + (*(s32 *)((char *)(arg0) + 0x30));
                    temp_f22 = func_151423D8(temp_s1 & 0xFF);
                    temp_f24 = func_151423D8((temp_s1 - 0x40) & 0xFF);
                    temp_f26 = func_151423D8(temp_s2 & 0xFF);
                    temp_f2_2 = temp_f20 * temp_f26;
                    temp_f10 = -temp_f20 * func_151423D8((temp_s2 - 0x40) & 0xFF);
                    spF0 = temp_f2_2 * temp_f24;
                    spF4 = temp_f10;
                    spF8 = temp_f2_2 * temp_f22;
                    spFC = (random_float() * (*(s32 *)((char *)(arg0) + 0x50))) + (*(s32 *)((char *)(arg0) + 0x4C));
                    sp107 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x48));
                    sp118 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x56)) + 1)) + (*(u32 *)((char *)(arg0) + 0x54));
                    if ((*(s32 *)((char *)(arg0) + 0x70)) & 1) {
                        var_v0_2 = 0xA;
                    } else {
                        var_v0_2 = 0;
                    }
                    var_v0 = func_15147DA0(&sp10C, &spEC, 8, 1, var_v0_2, 0, 0, 0, 0, 0, 0, &spC8, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    if (var_v0 != NULL) {
                        var_v0 = memcpy((*(s32 *)((char *)(var_v0) + 0x98)) + 0x48, &spE8, 4);
                    }
                    (*(f32 *)((char *)(arg0) + 0x64)) = (f32) ((*(f32 *)((char *)(arg0) + 0x64)) - 1.0f);
                } while ((*(s32 *)((char *)(arg0) + 0x64)) > 1.0f);
            }
        }
    }
    return var_v0;
}

s32 func_15189EBC(void *arg0) {
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 temp_v0;
    void *temp_s1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    if ((*(s32 *)((char *)((temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14))) + 0x4)) < (*(s32 *)((char *)(temp_s1) + 0x48))) {
        sp40 = temp_v0;
        if ((f64) random_float() < D_800A73A8) {
            sp34 = (*(s32 *)((char *)(temp_v0) + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14)));
            sp38 = (*(s32 *)((char *)(temp_s1) + 0x48));
            sp3C = (*(s32 *)((char *)((temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14))) + 0x8));
            func_151DBCBC(func_151D8E20() & 0xFF, (*(s32 *)((char *)(temp_s1) + 0x0)) * 6.0f, (*(s32 *)((char *)(temp_s1) + 0x1B)), 0, &sp34, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        }
        (*(s32 *)((char *)(temp_s1) + 0x20)) = 4;
        (*(f32 *)((char *)(temp_s1) + 0x48)) = (f32) D_800A73B0;
    }
    return 1;
}

s32 func_15189FD0(s32 arg0, void * arg1, void * arg2, void * arg3) {
    return 1;
}
