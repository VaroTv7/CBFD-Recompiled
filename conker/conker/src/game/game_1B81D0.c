/**
 * Auto-decompiled from asm/1B81D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();              /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void *func_15132A4C();      /* extern */
void * func_151429E0();                /* extern */
void * func_1518CA80();                          /* extern */
void func_1518B2A8(void *arg0, f32 arg1, f32 arg2, s32 arg3, u16 arg4, u8 arg6);
extern f32 D_800A73D0;
extern f32 D_800A73D4;
extern f32 D_800A73D8;
extern f32 D_800A73DC;
extern f32 D_800A73E0;
extern f32 D_800A73E4;
extern f32 D_800A73E8;
extern f32 D_800A73EC;
extern f32 D_800A73F0;

s32 func_1518AD20(void *arg0) {
    s16 sp14C;
    s16 sp14A;
    s8 sp148;
    s32 sp144;
    s8 sp142;
    s8 sp140;
    s8 sp13F;
    s8 sp13E;
    s8 sp13D;
    s8 sp13C;
    s8 sp13B;
    s8 sp13A;
    s8 sp139;
    s8 sp138;
    s32 sp134;
    s8 sp130;
    u16 sp12E;
    s16 sp12C;
    s32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    s8 spD5;
    s8 spD4;
    s8 spD3;
    s8 spD2;
    void * spD1;
    void * spD0;
    void * spCF;
    void * spCE;
    void * spCD;
    void * spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s16 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_v1;
    s16 var_s2;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f8;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_s1;
    u16 temp_v0_2;
    void *temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x3C)) < (*(s32 *)((char *)(arg0) + 0x170))) {
        sp12C = 0x32;
        spF4 = 1.0f;
        spF8 = 1.0f;
        spFC = 1.0f;
        sp128 = 0x9E8;
        sp12E = (*(s32 *)((char *)(arg0) + 0x66));
        spDC = D_800A73D0;
        sp120 = 0.0f;
        sp124 = D_800A73D4;
        sp100 = (*(s32 *)((char *)(arg0) + 0x38));
        sp104 = (*(s32 *)((char *)(arg0) + 0x170));
        sp130 = 0;
        sp134 = 0;
        sp138 = 0xFF;
        sp139 = 1;
        sp13B = 0;
        sp13C = 0;
        sp13D = 0;
        sp13E = 0;
        sp13F = 0;
        sp140 = 0;
        sp142 = 2;
        sp144 = 0;
        sp148 = 0;
        sp14A = 1;
        sp14C = 0xFF;
        sp108 = (*(s32 *)((char *)(arg0) + 0x40));
        temp_v1 = (random_u32() & 3) + 4;
        var_s2 = temp_v1;
        if (temp_v1 > 0) {
            do {
                temp_f22 = (random_float() * ((*(s32 *)((char *)(arg0) + 0x10)) * 0.5f)) + D_800A73D8;
                temp_s0 = random_u32() & 0xFF;
                temp_s1 = (-0x20 - (random_u32() & 0x1F)) & 0xFF;
                temp_f20 = (random_float() * 10.0f) + 5.0f;
                temp_f24 = func_151423D8((temp_s0 - 0x40) & 0xFF);
                temp_f26 = func_151423D8(temp_s0 & 0xFF);
                temp_f28 = func_151423D8((temp_s1 - 0x40) & 0xFF);
                temp_f2 = temp_f20 * func_151423D8(temp_s1 & 0xFF);
                spD8 = temp_f22;
                spE0 = temp_f22;
                spE4 = temp_f22;
                sp10C = temp_f2 * temp_f24;
                sp110 = -temp_f20 * temp_f28;
                sp114 = temp_f2 * temp_f26;
                spE8 = random_float() * 360.0f;
                spEC = random_float() * 360.0f;
                spF0 = random_float() * 360.0f;
                sp118 = 25.0f - (random_float() * 50.0f);
                sp11C = 25.0f - (random_float() * 50.0f);
                if (temp_f22 > 0.25f) {
                    sp13A = 2;
                } else {
                    sp13A = 4;
                }
                temp_v0 = func_15132A4C(&spD8, 3, 0xFF, 4, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != NULL) {
                    (*(f32 *)((char *)(temp_v0) + 0x170)) = (f32) (*(f32 *)((char *)(arg0) + 0x170));
                }
                var_s2 -= 1;
            } while (var_s2 > 0);
        }
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x66));
        if (temp_v0_2 != 4) {
            var_s1 = 0;
            if (temp_v0_2 != 5) {
                var_s1 = 0;
            }
        } else {
            var_s1 = 1;
        }
        spA4 = (*(s32 *)((char *)(arg0) + 0x38));
        spA8 = (*(s32 *)((char *)(arg0) + 0x170));
        spAC = (*(s32 *)((char *)(arg0) + 0x40));
        temp_f16 = (s32) ((*(s32 *)((char *)(arg0) + 0x10)) * 200.0f);
        spBA = (s16) temp_f16;
        spBC = (s16) temp_f16;
        temp_f4 = random_float() * 10.0f;
        spC2 = 0;
        spC4 = 0;
        temp_f10 = (s32) ((temp_f4 + 20.0f) * (*(s32 *)((char *)(arg0) + 0x10)));
        spBE = (s16) temp_f10;
        spC0 = (s16) temp_f10;
        temp_s0_2 = var_s1 & 0xFF;
        spC6 = (random_u32() % 201U) + 0x12C;
        spC8 = 0;
        spCA = 0x258;
        func_151429E0(temp_s0_2 & 0xFF, &spCC, &spCD, &spCE);
        func_151429E0(temp_s0_2 & 0xFF, &spCF, &spD0, &spD1);
        spD2 = 0xFF;
        temp_f8 = (s32) ((*(s32 *)((char *)(arg0) + 0x10)) * D_800A73DC);
        if ((f32) temp_f8 > 255.0f) {
            spD3 = 0xFF;
        } else {
            spD3 = (s8) temp_f8;
        }
        spD4 = 0xA;
        spD5 = 0;
        func_1518CA80(&spA4, 1);
        return 0;
    }
    return 1;
}

s32 func_1518B1AC(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x3C)) < (*(s32 *)((char *)(arg0) + 0x170))) {
        return 0;
    }
    return 1;
}

s32 func_1518B1D8(void *arg0) {
    f32 temp_f0;
    s32 temp_t6;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(arg0) + 0x170));
    if (temp_f0 < 0.0f) {
        return 0;
    }
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x64)) * 4;
    var_v0 = temp_t6;
    if (temp_t6 >= 0x100) {
        var_v0 = 0xFF;
    }
    var_v1 = (s32) temp_f0 >> 1;
    var_a1 = var_v0;
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    if (var_v1 < var_v0) {
        var_a1 = var_v1;
    }
    if (var_a1 < 0) {
        return 0;
    }
    (*(s8 *)((char *)(arg0) + 0x70)) = (s8) var_a1;
    return 1;
}

void func_1518B264(void *arg1, f32 arg2, u8 arg4) {
    func_1518B2A8(arg1, arg2, (f32)(s32)(arg1), arg2, 4U, 0xFFU);
}

void func_1518B2A8(void *arg0, f32 arg1, f32 arg2, s32 arg3, u16 arg4, u8 arg6) {
    s16 sp128;
    s16 sp126;
    s8 sp124;
    s32 sp120;
    s8 sp11E;
    s8 sp11C;
    s8 sp11B;
    s8 sp11A;
    s8 sp119;
    s8 sp118;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s32 sp110;
    s8 sp10C;
    u16 sp10A;
    s16 sp108;
    s32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s32 spB0;
    s8 spAD;
    s8 spAC;
    s32 spA8;
    f32 sp90;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_s5;
    void *temp_v0;
    void *temp_v0_2;

    var_s5 = arg3;
    if (arg0 != NULL) {
        spA8 = 0;
        spAC = 0;
        spAD = 0;
        spB0 = 0;
        sp108 = 0x12C;
        sp104 = 0x9E8;
        sp10C = 0;
        sp110 = 0;
        sp114 = 0xFF;
        sp115 = 1;
        sp117 = 0;
        sp118 = 0;
        sp119 = 0;
        sp11A = 0;
        sp11B = 0;
        sp11C = 0;
        sp11E = 2;
        sp120 = 0;
        sp124 = 0;
        sp126 = 1;
        sp128 = 0xFF;
        spD0 = 1.0f;
        spD4 = 1.0f;
        spD8 = 1.0f;
        sp90 = D_800A73E0;
        spFC = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        spF0 = 0.0f;
        spB8 = D_800A73E4;
        sp10A = arg4;
        sp100 = D_800A73E8;
        if (var_s5 > 0) {
            do {
                temp_s0 = random_u32() & 0xFF;
                temp_f0 = random_float();
                spBC = arg2;
                temp_f20 = temp_f0 * arg1;
                spC0 = arg2;
                spB4 = arg2;
                spC4 = random_float() * 360.0f;
                spC8 = random_float() * 360.0f;
                spCC = random_float() * 360.0f;
                spDC = (func_151423D8(temp_s0 & 0xFF) * temp_f20) + (*(s32 *)((char *)(arg0) + 0x0));
                spE0 = ((*(s32 *)((char *)(arg0) + 0x4)) + arg1) - (2.0f * random_float() * arg1);
                spE4 = (*(s32 *)((char *)(arg0) + 0x8)) - (func_151423D8((temp_s0 - 0x40) & 0xFF) * temp_f20);
                spF4 = 25.0f - (random_float() * 50.0f);
                spF8 = 25.0f - (random_float() * 50.0f);
                if (func_15046C80(&spDC, 0, 0xC61C4000, &sp90) != 0) {
                    sp116 = 2;
                    temp_v0 = func_15132A4C(&spB4, 3, 0xFF, 4, (s32) arg6, 0);
                    if (temp_v0 != NULL) {
                        (*(s32 *)((char *)(temp_v0) + 0x170)) = sp90;
                    }
                    var_s1 = (random_u32() & 3) + 1;
                    if (var_s1 > 0) {
                        do {
                            temp_s0_2 = random_u32() & 0xFF;
                            temp_f20_2 = random_float() * arg2 * 16.0f;
                            temp_f2 = (random_float() * D_800A73EC) + D_800A73F0;
                            spC0 = temp_f2;
                            spBC = temp_f2;
                            spB4 = temp_f2;
                            spC4 = random_float() * 360.0f;
                            spC8 = random_float() * 360.0f;
                            spCC = random_float() * 360.0f;
                            spDC += func_151423D8(temp_s0_2 & 0xFF) * temp_f20_2;
                            spE0 = (random_float() * 25.0f) + ((arg2 * 16.0f) + spE0);
                            spE4 -= func_151423D8((temp_s0_2 - 0x40) & 0xFF) * temp_f20_2;
                            spF4 = 25.0f - (random_float() * 50.0f);
                            temp_f0_2 = random_float();
                            sp116 = 3;
                            spF8 = 25.0f - (temp_f0_2 * 50.0f);
                            temp_v0_2 = func_15132A4C(&spB4, 3, 0xFF, 4, (s32) arg6, 0);
                            var_s1 -= 1;
                            if (temp_v0_2 != NULL) {
                                (*(s32 *)((char *)(temp_v0_2) + 0x170)) = sp90;
                            }
                        } while (var_s1 != 0);
                    }
                }
                var_s5 -= 1;
            } while (var_s5 > 0);
        }
    }
}
