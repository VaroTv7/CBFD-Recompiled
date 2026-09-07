/**
 * Auto-decompiled from asm/1F2730.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                      /* extern */
f32 random_float();                                /* extern */
void * func_15102B38(); /* extern */
s32 func_15130280();      /* extern */
s32 func_15137C64(); /* extern */
void * func_15137F30(); /* extern */
void * func_15143794();                /* extern */
void * func_15143874();            /* extern */
void * func_15145740();        /* extern */
s32 func_1514654C(); /* extern */
void * func_15154684();                      /* extern */
void * func_151602C0(); /* extern */
void * func_151C229C(); /* extern */
void * func_151D9014(); /* extern */
void * func_151DA6F8(); /* extern */
void * func_151DC034(); /* extern */
void * memcpy();                           /* extern */
void func_151C5588();
void func_151C56A4();
extern s32 D_800AAA90;
extern s32 D_800AAA9C;
extern s32 D_800AAAA8;
extern f32 D_800AAAB4;
extern f32 D_800AAAB8;
extern f32 D_800AAABC;
extern f32 D_800AAAC0;
extern f32 D_800AAAC4;
extern f32 D_800AAAC8;
extern f32 D_800AAACC;
extern f32 D_800AAAD0;
extern f32 D_800AAAD4;
extern f32 D_800AAADC;
extern f32 D_800AAAE0;
extern f32 D_800AAAE4;
extern f32 *D_800AAAE8;
extern f32 D_800AAAEC;
extern f32 D_800AAAF0;
extern f32 D_800AAAF4;
extern f32 D_800AAAF8;
extern f32 D_800AAAFC;

void func_151C5280(void *arg0, s32 arg1, s32 arg2) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    void * spB0;
    void * *spA8;
    void * *spA4;
    f32 *spA0;
    f32 *sp9C;
    f32 sp8C;
    f32 sp88;
    f32 sp80;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    u32 temp_t0;

    if (arg0 != NULL) {
        func_15145740(arg0, &spBC, &spB0, 0, 0.0f);
        spBC *= D_800AAAB4;
        spC0 *= D_800AAAB4;
        spC4 *= D_800AAAB4;
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            spA4 = &D_800AAA90;
            spA8 = &D_800AAAA8;
            sp9C = &spD4;
            spA0 = &spC8;
            temp_v0 = func_1503195C(arg0, 0x46, 0);
            if ((temp_v0 != 0) && (func_1514654C(arg0, temp_v0, 0, &spA4, &sp9C, 2) != 0)) {
                func_151C56A4(&spD4, arg1, arg2);
                if (random_u32() & 1) {
                    func_151C5588(arg0, &spD4, 0x46, arg1, arg2);
                }
                goto block_7;
            }
        } else {
            spD4 = (*(s32 *)((char *)(arg0) + 0x14));
            spD8 = (*(s32 *)((char *)(arg0) + 0x18)) + 106.0f;
            sp80 = spBC;
            spDC = (*(s32 *)((char *)(arg0) + 0x1C));
            spC8 = (spBC * -82.0f) + spD4;
            spCC = (spC0 * -82.0f) + spD8;
            spD0 = (spC4 * -82.0f) + spDC;
            spD4 -= sp80 * -120.0f;
            spD8 -= spC0 * -120.0f;
            spDC -= spC4 * -120.0f;
block_7:
            sp88 = random_float();
            sp8C = random_float();
            temp_t0 = random_u32();
            if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
                var_v1 = 0xFF;
            } else {
                var_v1 = 0x80;
            }
            if (D_800BE616 != 0) {
                var_v0 = -1;
            } else {
                var_v0 = 2;
            }
            func_151C229C(&spD4, 0, &spC8, &spBC, 1, 0, 300.0f, D_800AAAB8, (sp88 * 10.0f) + 25.0f, (sp8C * 150.0f) + 400.0f, 80.0f, (temp_t0 % 56U) + 0xC8, arg0, 1, 1, 0, var_v1, 0, 1, 0, 0x1A, 0.0f, 0xFF, var_v0, 0, (s32) arg1, arg2);
        }
    }
}

void func_151C5588(void *arg0, f32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp54;
    f32 sp50;
    u32 sp48;
    u32 sp44;

    sp54 = ((random_float() * D_800AAABC) + 604.0f) * D_800AAAC0;
    sp50 = ((random_float() * 59.0f) + 141.0f) * D_800AAAC4;
    sp44 = random_u32();
    sp48 = random_u32();
    func_15102B38(arg0, 0, &D_800AAA90, &D_800AAA9C, &sp50, (sp44 & 3) + 6, 0xFF, (random_float() * 270.0f) + D_800AAAC8, arg1, 0xFF, 0, (s32) arg2, (s32) arg3, arg4);
}

void func_151C56A4(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;

    sp48 = 3;
    sp49 = -1;
    sp4A = (random_u32() % 3U) + 3;
    sp4C = 0;
    sp3C = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp40 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp44 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp48, &sp3C, (random_u32(arg0) & 1) + 6, 0xFF, 0xE8, 0xAB, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_151C577C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void * sp18C;
    void * sp180;
    f32 sp174;
    f32 sp168;
    f32 sp15C;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    s8 sp121;
    s8 sp120;
    s8 sp11F;
    s8 sp11E;
    s8 sp11D;
    s8 sp11C;
    s32 sp114;
    f32 sp110;
    void * sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    void * spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s16 spDE;
    s16 spDC;
    s16 spDA;
    s8 spD9;
    s8 spD8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    s8 spD3;
    s8 spD2;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s32 spC8;
    s16 spC6;
    s16 spC4;
    s32 spC0;
    s32 spBC;
    f32 *spB8;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    s16 temp_v1;
    s16 var_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s2_3;
    u32 temp_hi;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s0_3;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_s1_3;
    u32 temp_s1_4;

    f32 sp16C;
    f32 sp170;
    f32 sp178;
    f32 sp17C;
    f32 sp160;
    f32 sp164;
    if (func_15137C64(&sp18C, &sp180, &sp174, &sp168, &sp15C, arg0, arg1, arg2) != 0) {
        temp_f22 = random_float();
        temp_s1 = random_u32();
        func_151DC034(&sp18C, (temp_f22 * 24.0f) + 168.0f, ((temp_s1 % 101U) + 0x9B) & 0xFF, (s16) ((random_u32() & 7) + 0xF), 1, (s32) arg6, arg7);
        if (arg4 != 0) {
            temp_v1 = (random_u32() % 3U) + 5;
            var_s2 = temp_v1;
            if (temp_v1 != 0) {
                temp_f30 = D_800AAACC;
                do {
                    temp_f20 = ((random_float() * 33.0f) + 60.0f) * temp_f30;
                    func_15143874((s16) (random_u32() & 0xFF), temp_f20, &sp150, &sp154);
                    sp144 = (sp168 * sp150) + (sp15C * sp154);
                    sp148 = (sp16C * sp150) + (sp160 * sp154);
                    sp14C = (sp170 * sp150) + (sp164 * sp154);
                    temp_f20_2 = random_float();
                    temp_s0 = random_u32();
                    temp_s1_2 = random_u32();
                    temp_f22_2 = random_float();
                    random_u32();
                    func_151DA6F8(&sp18C, &sp144, (temp_f20_2 * D_800AAAD0) + D_800AAAD4, (s16) ((temp_s0 % 9U) + 0x12), (temp_s1_2 % 156U) + 0x64, (temp_f22_2 * 4.0f) + 4.0f, 3, 0, 1.0f, 1.0f, 1, 1, 0, 0x10, 0xF, 0, (s32) arg6, arg7);
                    var_s2 -= 1;
                } while (var_s2 != 0);
            }
        }
        temp_f30_2 = D_800AAADC;
        if (arg3 != 0) {
            var_s2_2 = (random_u32() % 6U) + 5;
            if (var_s2_2 != 0) {
                do {
                    temp_f2 = ((random_float() * 150.0f) + 200.0f) * temp_f30_2;
                    sp130 = sp174 * temp_f2;
                    sp134 = sp178 * temp_f2;
                    sp138 = sp17C * temp_f2;
                    temp_f20_3 = random_float();
                    temp_s1_3 = random_u32();
                    temp_s0_2 = random_u32();
                    func_151D9014(&sp180, &sp130, 1, (temp_f20_3 * D_800AAAE0) + D_800AAAE4, (temp_s1_3 % 11U) + 5, (temp_s0_2 % 156U) + 0x64, (random_float() * 60.0f) + 80.0f, 0, 1.0f, 1.0f, 1, 0, 1, 0, (s32) arg6, arg7);
                    var_s2_2 -= 1;
                } while (var_s2_2 != 0);
            }
        }
        if (arg5 != 0) {
            temp_hi = random_u32() % 7U;
            spD9 = 0x6C;
            spC4 = 0x5103;
            spBC = 0x200005;
            spDA = 0x14;
            spDC = 0xC;
            sp114 = 0x80D207;
            sp11C = 8;
            sp11D = 6;
            sp11E = 0x10;
            sp120 = -1;
            spC0 = 0;
            spC8 = 0;
            spCC = 0;
            sp11F = -1;
            sp121 = 0;
            spDE = 1;
            spE0 = 1.0f;
            spD0 = 0xE2;
            spD1 = 0xB2;
            spD2 = 0x60;
            spD3 = 0xFF;
            spD4 = 0x39;
            spD5 = 0xF;
            spD6 = 0;
            spD8 = 0xFF;
            spB8 = D_800AAAE8;
            (*(s32 *)((char *)&(spEC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp180) + 0x0));
            var_s2_3 = temp_hi + 3;
            (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp180) + 0x4));
            (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp180) + 0x8));
            spF8 = 0.0f;
            spFC = 0.0f;
            sp100 = 0.0f;
            if (var_s2_3 > 0) {
                temp_f28 = D_800AAAEC;
                do {
                    temp_s1_4 = random_u32();
                    temp_s0_3 = random_u32();
                    func_15143794((s16) (temp_s1_4 & 0xFF), (s16) ((temp_s0_3 & 0x3F) * -1), (random_float() * 7.0f) + 2.0f, &sp104);
                    temp_f16 = random_float() * 117.0f;
                    sp114 &= ~0xC0;
                    sp110 = (temp_f16 + -197.0f) * temp_f28;
                    var_s1 = 0;
                    if (random_u32() & 1) {
                        var_s1 = 0x80;
                    }
                    if (random_u32() & 1) {
                        var_s0 = 0x40;
                    } else {
                        var_s0 = 0;
                    }
                    sp114 |= var_s0 | var_s1;
                    spD7 = (random_u32() % 66U) + 0xBE;
                    spC6 = (random_u32() % 45U) + 0x2C;
                    temp_f2_2 = (random_float() * 122.0f) + 77.0f;
                    spE4 = temp_f2_2;
                    spE8 = temp_f2_2;
                    temp_v0 = func_15130280(&spBC, 1, 0, 4, (s32) arg6, arg7);
                    if (temp_v0 != 0) {
                        memcpy(temp_v0 + 0xA8, &spB8, 4);
                    }
                    var_s2_3 -= 1;
                } while (var_s2_3 != 0);
            }
        }
    }
}

void func_151C5E74(f32 arg4, void *arg5) {
    void * sp6C;
    void * sp60;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    u8 sp4D;
    f32 sp48;

    func_15137F30(arg4, arg5, &sp6C, &sp60, &sp54, &sp50, &sp4E, &sp4D, &sp48);
    func_151D9014(&sp6C, &sp54, 1, sp50, (s32) sp4E, (s32) sp4D, sp48, 0, 1.0f, 1.0f, 1, 0, 1, 0, (s32) (*(s32 *)((char *)(arg5) + 0xC)), (s32) (*(s32 *)((char *)(arg5) + 0x1)));
}

s32 func_151C5F44(void *arg0, void *arg1, f32 arg2, f32 *arg3, u8 arg4, s16 arg5, f32 arg6, u8 arg7, s32 arg8, u8 arg9, s32 arg10) {
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp98;
    f32 sp94;
    void * sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    void * sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s8 sp5D;
    s8 sp5C;
    u8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s32 sp50;
    s32 sp4C;
    s16 sp4A;
    s16 sp48;
    s32 sp44;
    s32 sp40;
    f32 *sp3C;
    s32 sp38;
    f32 sp34;
    s8 sp31;
    s8 sp30;
    s32 sp28;
    f32 *sp24;
    f32 *var_a0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    sp3C = arg3;
    sp5D = 0x6C;
    sp48 = 0x5103;
    sp40 = 0x200005;
    sp44 = 0;
    sp4C = 0;
    sp50 = 0;
    sp5E = 0x14;
    sp60 = 0xC;
    if (random_u32(arg3) & 1) {
        var_a0 = 0x40;
    } else {
        var_a0 = NULL;
    }
    var_v1 = 1;
    if (arg5 == -1) {
        var_v1 = 0;
    }
    sp28 = var_v1;
    sp24 = var_a0;
    if (random_u32(var_a0, arg5) & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    sp98 = var_v0 | var_v1 | 6 | (s32) var_a0 | 0xC200 | 0x800000;
    spA0 = 8;
    spA1 = 6;
    if (arg7 != 0) {
        spA2 = 0x1D;
    } else {
        spA2 = 0xA;
    }
    sp62 = 1;
    spA3 = -1;
    spA4 = -1;
    spA5 = 0;
    sp30 = 1;
    sp31 = 0;
    sp54 = 0xE2;
    sp55 = 0xB2;
    sp56 = 0x60;
    sp57 = 0xFF;
    sp58 = 0x39;
    sp59 = 0xF;
    sp5A = 0;
    sp5C = 0xFF;
    sp64 = 1.0f;
    sp34 = D_800AAAF0;
    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp7C = 0.0f;
    sp80 = 0.0f;
    sp84 = 0.0f;
    (*(s32 *)((char *)&(sp88) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp88) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp94 = arg2;
    sp5B = arg4;
    if (arg5 == -1) {
        sp4A = 0x12C;
    } else {
        sp4A = arg5;
    }
    sp6C = arg6;
    sp68 = arg6;
    temp_v0 = func_15130280(&sp40, 1, arg8, 0x10, (s32) arg9, arg10);
    sp38 = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp3C, 4);
        memcpy(sp38 + 0xB0, (f32 **) &sp30, 8);
    }
    return sp38;
}

void func_151C61A0(s32 arg0, s32 arg1, s32 arg2, void * arg3) {
    s32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp44;
    s16 sp42;
    s8 sp41;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s16 sp2A;
    s16 sp28;
    s16 sp26;
    s16 sp24;
    s32 sp20;
    s16 sp1E;
    s16 sp1C;

    sp2C = 5.0f;
    sp1C = 0xA;
    sp30 = 7.0f;
    sp1E = 4;
    sp24 = 0;
    sp28 = 0xFF;
    sp26 = -0x18;
    sp2A = 0x19;
    sp40 = 0xBE;
    sp41 = 0x41;
    sp42 = 0xC8;
    sp44 = 0x96;
    sp34 = D_800AAAF4;
    sp38 = D_800AAAF8;
    sp3C = D_800AAAFC;
    sp48 = 96.0f;
    sp4C = 109.0f;
    sp20 = arg0;
    sp50 = 1.0f;
    sp54 = arg1;
    func_15154684(&sp1C, arg2, arg3);
}

s32 func_151C6290(void *arg0, void * arg1, void * arg2) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if ((temp_v0 == 0x5A) || (temp_v0 == 0x74) || (temp_v0 == 0x7A)) {
        return 0;
    }
    return 1;
}
