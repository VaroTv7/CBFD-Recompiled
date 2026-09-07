/**
 * Auto-decompiled from asm/112F90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150E1AB0(); /* extern */
void * func_150E4514();                               /* extern */
s32 func_151EF610();                                /* extern */
extern s32 D_80088A04;
extern f32 D_800A1170;
extern f32 D_800A1174;
extern f32 D_800A1178;
extern f32 D_800A117C;
extern f32 D_800A1180;
extern f32 D_800A1184;
extern s32 D_800D9A04;
extern s32 D_800D9A08;
extern s32 D_800D9A0C;
extern s32 D_800D9A10;
extern s32 D_800D9A14;

void func_150E5AE0(void) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f20;
    f32 var_f24;
    f32 var_f26;
    f32 var_f28;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t5;
    s32 temp_t6;
    s32 var_a0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;

    if (D_80088A04 == 1) {
        var_v1 = D_800D9A10 + D_800BE9E4;
        D_800D9A10 = var_v1;
        if (var_v1 >= 0x83) {
            var_v1 = -(func_151EF610() % 30);
            D_800D9A10 = var_v1;
        }
        if (var_v1 >= 0x1F) {
            var_a0 = D_800D9A14;
            if (var_a0 < D_800D9A0C) {
                temp_t5 = var_a0 + (D_800BE9E4 * 2);
                D_800D9A14 = temp_t5;
                var_a0 = temp_t5;
            }
        } else {
            temp_t6 = D_800D9A14 - D_800BE9E4;
            if (D_800BE9E4 < D_800D9A14) {
                D_800D9A14 = temp_t6;
                var_a0 = temp_t6;
            } else {
                D_80088A04 = 0;
                D_800D9A14 = 0;
                var_a0 = 0;
            }
        }
        temp_lo = (s32) (var_a0 + 0xA) / 10;
        var_s3 = var_a0 + 1;
        func_150E4514(var_a0);
        var_s4 = 0;
        if (temp_lo > 0) {
            do {
                if ((var_s3 >= 0xA) || ((func_151EF610() % 11) == var_s3)) {
                    temp_s1 = (((func_151EF610() % (s32) D_800D9A08) * 2) - D_800D9A08) + D_800D9A04;
                    temp_s2 = (((func_151EF610() % (s32) D_800D9A08) * 2) - D_800D9A08) + D_800D9A04;
                    var_f26 = (f32) (func_151EF610() % 200);
                    var_f24 = (f32) temp_s2;
                    var_f20 = (f32) temp_s1;
                    var_f28 = ((f32) (func_151EF610() % 200) + var_f26) - 100.0f;
                    if (((var_f24 - 5.0f) < var_f20) && (var_f20 < (var_f24 + 5.0f))) {
                        var_f28 += 150.0f;
                        var_f26 += 150.0f;
                    }
                    if ((func_151EF610() % 2) != 0) {
                        var_f20 = (f32) (s32) (var_f20 + 180.0f);
                    } else {
                        var_f24 = (f32) (s32) (var_f24 + 180.0f);
                    }
                    temp_f22 = var_f20 * D_800A1170;
                    temp_f20 = sinf(temp_f22) * D_800A1174;
                    temp_f22_2 = cosf(temp_f22) * D_800A1178;
                    temp_f30 = var_f24 * D_800A117C;
                    temp_f24 = sinf(temp_f30) * D_800A1180;
                    temp_f2 = D_800DBFF0->unk2F8;
                    temp_f12 = D_800DBFF0->unk2FC;
                    temp_f14 = D_800DBFF0->unk300;
                    func_150E1AB0(temp_f12, temp_f14, 0, temp_f20 + temp_f2, var_f28 + temp_f12, temp_f22_2 + temp_f14, temp_f24 + temp_f2, var_f26 + temp_f12, (cosf(temp_f30) * D_800A1184) + temp_f14, 160.0f, 10.0f, 4.0f, 360.0f, 0xF, 0x43, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                }
                var_s4 += 1;
                var_s3 -= 0xA;
            } while (var_s4 != temp_lo);
        }
    }
}
