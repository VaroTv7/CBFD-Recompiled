/**
 * Auto-decompiled from asm/128D70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_1507515C();                   /* extern */
u32 random_u32();                               /* extern */
f32 random_float();                          /* extern */
void * func_15102B38(); /* extern */
void * func_15145EA4();         /* extern */
void * func_1515548C();     /* extern */
void * func_1515572C();                           /* extern */
void * func_151602C0(); /* extern */
s32 func_15164780();                   /* extern */
void * func_151C229C(); /* extern */
void * func_151C3B0C();       /* extern */
void * func_151D8868();                   /* extern */
void * memcpy();                       /* extern */
extern s32 D_800A1DD0;
extern s32 D_800A1DD4;
extern s32 D_800A1DEC;
extern s32 D_800A1E04;
extern s32 D_800A1E1C;
extern s32 D_800A1E34;
extern s32 D_800A1E38;
extern s32 D_800A1E50;
extern s32 D_800A1E68;
extern s32 D_800A1E80;
extern f32 D_800A1E98;
extern f32 D_800A1E9C;
extern f32 D_800A1EA0;
extern f32 D_800A1EA4;
extern f32 D_800A1EA8;
extern f32 D_800A1EAC;
extern f32 D_800A1EB0;
extern f32 D_800A1EB4;
extern f32 D_800A1EB8;
extern f32 D_800A1EBC;
extern f32 D_800A1EC0;
extern f32 D_800A1EC4;
extern f32 D_800A1EC8;
extern f32 D_800A1ECC;
extern f32 D_800A1ED0;

void func_150FB8C0(void *arg0, u8 arg1, f32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    s32 unksp97;
    void *sp1C4;
    u8 sp1C3;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    f32 sp198;
    f32 sp194;
    f32 sp190;
    f32 sp18C;
    f32 sp188;
    f32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp178;
    void *sp174;
    f32 *sp170;
    void *sp16C;
    f32 *sp168;
    f32 *sp164;
    f32 *sp160;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp144;
    void *sp130;
    u8 sp12F;
    s8 sp12E;
    s8 sp12C;
    s16 sp12A;
    s8 sp129;
    s8 sp128;
    s32 sp124;
    s32 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    u8 sp113;
    u8 spFC;
    s8 spF9;
    s8 spF8;
    s32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s8 spDB;
    s8 spDA;
    s8 spD9;
    s8 spD8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    s8 spD3;
    s8 spD2;
    s16 spD0;
    s16 spCE;
    s16 spCC;
    s16 spCA;
    s8 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    void *spB4;
    u8 spB0;
    u32 spAC;
    f32 spA8;
    u32 spA4;
    void *spA0;
    f32 sp9C;
    void *sp98;
    f32 *sp94;
    f32 *sp90;
    f32 *sp8C;
    s32 sp84;
    f32 sp78;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_t4;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u32 temp_t1;
    u8 temp_v0_6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *var_t0;

    f32 sp1BC;
    f32 sp1B8;
    f32 sp148;
    f32 sp14C;
    temp_t4 = arg3 & 0xFF;
    if ((arg0 != NULL) && ((s32) arg1 >= 0) && ((s32) arg1 < 2)) {
        if (temp_t4 != 0) {
            sp1C4 = NULL;
            goto block_9;
        }
        temp_v0 = func_1507515C(arg0, temp_t4);
        sp1C4 = temp_v0;
        if (temp_v0 != NULL) {
            temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x31C));
            if (temp_v1 != NULL) {
                if ((*(s32 *)((char *)(temp_v1) + 0x197)) != 0) {
                    sp1C3 = 1;
                } else {
block_9:
                    sp1C3 = 0;
                }
                if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
                    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x23) {
                        temp_t9 = arg1 * 0xC;
                        sp16C = temp_t9 + &D_800A1E38;
                        if (sp1C3 != 0) {
                            sp170 = temp_t9 + &D_800A1E68;
                        } else {
                            sp170 = (arg1 * 0xC) + &D_800A1E50;
                        }
                        sp174 = (arg1 * 0xC) + &D_800A1E80;
                        var_a2 = (*(&D_800A1E34 + arg1) << 6) + (*(s32 *)((char *)(arg0) + 0x1D4));
                    } else {
                        temp_f0 = random_float();
                        if (arg1 != 0) {
                            var_v1 = -1;
                        } else {
                            var_v1 = 1;
                        }
                        temp_t9_2 = arg1 * 0xC;
                        temp_v0_2 = temp_t9_2 + &D_800A1DEC;
                        sp16C = temp_t9_2 + &D_800A1DD4;
                        sp154 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
                        sp158 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
                        sp150 = (f32) var_v1 * (13.0f - (1.0f + (temp_f0 * 6.0f)));
                        if (sp1C3 != 0) {
                            sp170 = temp_t9_2 + &D_800A1E04;
                        } else {
                            sp170 = &sp150;
                        }
                        sp174 = (arg1 * 0xC) + &D_800A1E1C;
                        var_a2 = (*(&D_800A1DD0 + arg1) << 6) + (*(s32 *)((char *)(arg0) + 0x1D4));
                    }
                    sp160 = &sp1B4;
                    if (sp1C3 != 0) {
                        sp164 = &sp184;
                    } else {
                        sp164 = &sp1A8;
                    }
                    sp168 = &sp178;
                    if (sp1C3 != 0) {
                        spAC = 3;
                    } else {
                        spAC = 2;
                    }
                    func_15145EA4(&sp16C, &sp160, var_a2, spAC);
                    if (sp1C3 != 0) {
                        temp_f12 = sp18C - sp1BC;
                        sp184 -= sp1B4;
                        sp18C = temp_f12;
                        sp178 -= sp1B4;
                        temp_f14 = sp17C - sp1B8;
                        sp188 -= sp1B8;
                        sp17C = temp_f14;
                        sp180 -= sp1BC;
                        sp130 = (*(s32 *)((char *)(sp1C4) + 0x31C)) + 0x13C;
                        func_151450B4(temp_f12, temp_f14, &sp184, &sp178, &sp144, sp1C3);
                        temp_f0_2 = (*(s32 *)((char *)(sp130) + 0x0));
                        temp_v0_3 = (*(s32 *)((char *)(sp1C4) + 0x31C));
                        temp_f2 = (*(s32 *)((char *)(temp_v0_3) + 0x130));
                        sp78 = sp148;
                        temp_f18 = ((sp144 * (sp1B4 - temp_f0_2)) + (sp78 * (sp1B8 - (*(s32 *)((char *)(sp130) + 0x4)))) + (sp14C * (sp1BC - (*(s32 *)((char *)(sp130) + 0x8))))) / ((sp144 * temp_f2) + (sp148 * (*(s32 *)((char *)(temp_v0_3) + 0x134))) + (sp14C * (*(s32 *)((char *)(temp_v0_3) + 0x138))));
                        sp19C = temp_f0_2 + (temp_f18 * temp_f2);
                        sp1A0 = (*(s32 *)((char *)(sp130) + 0x4)) + (temp_f18 * (*(s32 *)((char *)((*(s32 *)((char *)(sp1C4) + 0x31C))) + 0x134)));
                        sp1A4 = (*(s32 *)((char *)(sp130) + 0x8)) + (temp_f18 * (*(s32 *)((char *)((*(s32 *)((char *)(sp1C4) + 0x31C))) + 0x138)));
                        sp190 = (*(s32 *)((char *)((*(s32 *)((char *)(sp1C4) + 0x31C))) + 0x130));
                        sp194 = (*(s32 *)((char *)((*(s32 *)((char *)(sp1C4) + 0x31C))) + 0x134));
                        sp198 = (*(s32 *)((char *)((*(s32 *)((char *)(sp1C4) + 0x31C))) + 0x138));
                    } else {
                        sp1A8 -= sp1B4;
                        sp1AC -= sp1B8;
                        sp1B0 -= sp1BC;
                    }
                    if ((sp1C3 == 0) || (temp_v0_4 = (*(s32 *)((char *)(sp1C4) + 0x318)), (temp_v0_4 == NULL))) {
                        sp12F = 0xFF;
                    } else {
                        sp12F = ~(1 << (*(s32 *)((char *)(temp_v0_4) + 0x23D)));
                    }
                    if ((D_800BE9F0 == 0x34) || (D_800BE9F0 == 0x26)) {
                        sp12E = 5;
                    } else {
                        sp12E = 4;
                    }
                    if (sp1C3 != 0) {
                        sp8C = NULL;
                    } else {
                        sp8C = &sp1A8;
                    }
                    if (sp1C3 != 0) {
                        sp90 = &sp19C;
                    } else {
                        sp90 = NULL;
                    }
                    if (sp1C3 != 0) {
                        sp94 = &sp190;
                    } else {
                        sp94 = NULL;
                    }
                    if (sp1C3 != 0) {
                        sp98 = 1;
                    } else {
                        sp98 = NULL;
                    }
                    sp9C = random_float(sp1C4);
                    spA8 = random_float();
                    temp_t1 = random_u32();
                    if (sp1C4 != NULL) {
                        var_t0 = sp1C4;
                    } else {
                        var_t0 = arg0;
                    }
                    if (D_800BE616 != 0) {
                        var_v1_2 = 0;
                    } else {
                        var_v1_2 = 1;
                    }
                    func_151C229C(&sp1B4, sp8C, sp90, sp94, sp98, 0, 252.0f, D_800A1E98, (sp9C * 20.0f) + 75.0f, (spA8 * 250.0f) + 502.0f, 50.0f, (temp_t1 % 31U) + 0xE1, var_t0, 1, 1, var_v1_2, 0x32, 0, 1, (s32) sp12E, 0x2C, arg2, (s32) sp12F, 0, 0, (s32) arg4, arg5);
                    if (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF) {
                        if (!(random_u32() & 7)) {
                            sp128 = 3;
                            sp129 = -1;
                            sp12A = (random_u32() % 5U) + 4;
                            sp12C = 0;
                            sp11C = (s32) sp1B4;
                            sp120 = (s32) sp1B8;
                            sp124 = (s32) sp1BC;
                            func_151602C0(&sp128, &sp11C, (random_u32() % 31U) + 0x46, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg4, arg5);
                        }
                        if (!(random_u32() & 1)) {
                            temp_v1_2 = arg1 * 0xC;
                            sp84 = temp_v1_2;
                            sp118 = (random_float() * D_800A1E9C) + D_800A1EA0;
                            sp114 = (random_float() * D_800A1EA4) + D_800A1EA8;
                            if ((sp1C3 == 0) || (temp_v0_5 = (*(s32 *)((char *)(sp1C4) + 0x318)), (temp_v0_5 == NULL))) {
                                sp113 = 0xFF;
                            } else {
                                sp113 = ~(1 << (*(s32 *)((char *)(temp_v0_5) + 0x23D)));
                            }
                            temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x4));
                            if (temp_v0_6 == 0x23) {
                                sp94 = (f32 *) *(&D_800A1E34 + arg1);
                            } else {
                                sp94 = (f32 *) *(&D_800A1DD0 + arg1);
                            }
                            if (temp_v0_6 == 0x23) {
                                sp98 = temp_v1_2 + &D_800A1E38;
                            } else {
                                sp98 = temp_v1_2 + &D_800A1DD4;
                            }
                            if (temp_v0_6 == 0x23) {
                                spA0 = temp_v1_2 + &D_800A1E50;
                            } else {
                                spA0 = temp_v1_2 + &D_800A1DEC;
                            }
                            spA4 = random_u32(0x23);
                            spAC = random_u32();
                            func_15102B38(arg0, unksp97, sp98, spA0, &sp114, (spA4 % 3U) + 4, (spAC % 101U) + 0x9B, (random_float() * 1012.0f) + D_800A1EAC, &sp1B4, (s32) sp113, 0, -1, (s32) arg4, arg5);
                        }
                    }
                    if ((sp1C3 != 0) && ((*(s32 *)((char *)(sp1C4) + 0x318)) != NULL)) {
                        if (arg1 != 0) {
                            spB8 = -59.0f;
                        } else {
                            spB8 = 59.0f;
                        }
                        spBC = 68.0f;
                        spC0 = (random_float() * 20.0f) + 40.0f;
                        temp_f6 = random_float() * 20.0f;
                        spC8 = 0x80;
                        spC4 = temp_f6 + 80.0f;
                        spCA = (random_u32() & 3) + 5;
                        if (arg1 != 0) {
                            var_v1_3 = 2;
                        } else {
                            var_v1_3 = 0;
                        }
                        spCC = var_v1_3 | 0x39;
                        spCE = 3;
                        spD0 = 0x55;
                        spD2 = 0;
                        spD3 = 0xFF;
                        spD4 = 0xFF;
                        spD5 = 0xFF;
                        spD6 = (random_u32() % 56U) + 0xC8;
                        spE0 = 0x200004;
                        spD7 = 0xFF;
                        spD8 = 0xFF;
                        spD9 = 0xFF;
                        spDA = 0xFF;
                        spDB = 0xFF;
                        spDC = 0;
                        spE4 = 0x1F0601;
                        spE8 = 3;
                        spEC = 0x22;
                        spF0 = 0x80;
                        spF4 = 0x20;
                        spF8 = 0;
                        spF9 = 7;
                        spFC = (*(s32 *)((char *)((*(s32 *)((char *)(sp1C4) + 0x318))) + 0x23D));
                        func_1515548C(&spB8, 0, 0, 0, 0, 0, arg5);
                        spB0 = arg1;
                        spB4 = (*(s32 *)((char *)(sp1C4) + 0x318));
                        func_1515572C(&spB0, 0x37);
                    }
                }
            }
        }
    }
}

void func_150FC368(void *arg0) {
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1A0));
    if ((temp_v0 == NULL) || ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == 0xFF) || ((*(s32 *)((char *)(arg0) + 0x1A4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) || (temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x31C)), (temp_v1 == NULL)) || ((*(s32 *)((char *)(temp_v1) + 0x84)) != 0) || ((*(s32 *)((char *)(temp_v0) + 0x127)) == 0xFF) || (temp_v1_2 = (*(s32 *)((char *)(temp_v0) + 0x318)), (temp_v1_2 == NULL))) {
        var_v0 = 0xFF;
    } else {
        var_v0 = ~(1 << (*(s32 *)((char *)(temp_v1_2) + 0x23D))) & 0xFF;
    }
    func_151C3B0C(0x3F800000, 0x3F800000, 0x3F19999A, 0.0f, 0xFF, 0xFF, var_v0);
}

void func_150FC438(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s8 sp9D;
    u8 sp9C;
    void *sp98;
    u8 sp96;
    s16 sp94;
    s32 sp90;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    u8 sp84;
    void *sp80;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    u8 sp46;
    s16 sp44;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    void *sp3C;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_v0;

    sp80 = arg0;
    sp8C = 0;
    sp8D = arg2 & 0xFF;
    sp90 = 0;
    sp94 = 0;
    sp9D = arg3 & 0xFF;
    sp84 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp88 = 0.0f;
    if ((arg1 != NULL) && (temp_v0 = (*(s32 *)((char *)(arg1) + 0x318)), (temp_v0 != NULL))) {
        sp96 = (*(s32 *)((char *)(temp_v0) + 0x23D));
    } else {
        sp96 = -1U;
    }
    sp98 = arg1;
    if (arg1 != NULL) {
        sp9C = (*(s32 *)((char *)(arg1) + 0x3B));
    } else {
        sp9C = 0xFF;
    }
    temp_v0_2 = func_15149130(0x12C, -1, 0x27, -1, 0, 0x25, 0x20, 0xFF, 1);
    temp_a0 = temp_v0_2 + 0x28;
    if (temp_v0_2 != 0) {
        sp3C = temp_a0;
        memcpy(temp_a0, &sp80, 0x20);
        if ((arg1 != NULL) && ((*(s32 *)((char *)(arg1) + 0x318)) != NULL)) {
            sp40 = 4;
            sp41 = -1;
            sp42 = -1;
            sp44 = 0x12C;
            sp48 = 12.0f;
            sp4C = 20.0f;
            sp50 = 19.0f;
            sp54 = D_800A1EB0;
            sp58 = D_800A1EB4;
            sp5C = D_800A1EB8;
            sp46 = (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x318))) + 0x23D));
            sp60 = D_800A1EBC;
            sp64 = D_800A1EC0;
            sp68 = D_800A1EC4;
            sp6C = D_800A1EC8;
            sp70 = D_800A1ECC;
            sp74 = D_800A1ED0;
            (*(s32 *)((char *)(sp3C) + 0x10)) = func_15164780(&sp40, 0, 0xFF, 1);
        }
    }
}

void func_150FC614(void *arg0) {
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s16 sp52;
    s8 sp50;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1;

    temp_s1 = (*(s32 *)((char *)(arg0) + 0x28));
    if (((*(s32 *)((char *)(temp_s1) + 0x0)) == 0) || (temp_s0 = (char *)(arg0) + 0x28, ((*(s32 *)((char *)(temp_s1) + 0x4)) == 0xFF)) || ((*(s32 *)((char *)(temp_s0) + 0x4)) != (*(s32 *)((char *)(temp_s1) + 0x3B))) || (D_800C35EA == 1)) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if ((*(s32 *)((char *)(temp_s0) + 0x1D)) != (*(s32 *)((char *)(temp_s1) + 0x84))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - D_800BE9A4);
    if ((*(s32 *)((char *)(temp_s0) + 0x8)) < 0.0f) {
        do {
            func_150FB8C0(temp_s1, (*(u8 *)((char *)(temp_s0) + 0xC)), -(*(u8 *)((char *)(temp_s0) + 0x8)), (*(u8 *)((char *)(temp_s0) + 0xD)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0xC)), (s32) (*(u8 *)((char *)(arg0) + 0x1)));
            temp_v1 = (*(s32 *)((char *)(temp_s0) + 0x18));
            (*(u8 *)((char *)(temp_s0) + 0xC)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0xC)) ^ 1);
            if (temp_v1 != NULL) {
                temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x31C));
                if (temp_v0 != NULL) {
                    (*(s16 *)((char *)(temp_v0) + 0x1AA)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x1AA)) + 1);
                }
            }
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + (4.0f + (random_float() * 4.0f)));
        } while ((*(s32 *)((char *)(temp_s0) + 0x8)) < 0.0f);
    }
    if ((*(s32 *)((char *)(temp_s0) + 0x16)) != -1) {
        (*(s16 *)((char *)(temp_s0) + 0x14)) = (s16) ((*(s16 *)((char *)(temp_s0) + 0x14)) - D_800BE9E4);
        if ((*(s32 *)((char *)(temp_s0) + 0x14)) < 0) {
            sp50 = 1;
            random_u32();
            sp52 = 0x1E;
            sp55 = 1 << (*(s32 *)((char *)(temp_s0) + 0x16));
            sp54 = (random_u32() % 6U) + 3;
            sp56 = -1;
            func_151D8868(&sp50, 0, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            random_u32();
            (*(s32 *)((char *)(temp_s0) + 0x14)) = 0xFA;
        }
    }
}

void func_150FC818(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 var_a2;
    void *temp_v1;
    void *temp_v1_2;

    var_a2 = arg2 & 0xFF;
    if (var_a2 == 0) {
        temp_v1 = (char *)(arg0) + 0x28;
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        if (((*(s32 *)((char *)(arg0) + 0x28)) == temp_a0) || (var_a2 = (*(s32 *)((char *)(arg1) + 0x4)), (var_a2 == (*(s32 *)((char *)(temp_v1) + 0x4))))) {
            func_1516972C(arg0, var_a2, arg0);
            return;
        }
        temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x18));
        if ((temp_v0 != 0) && ((temp_a0 == temp_v0) || (var_a2 == (*(s32 *)((char *)(temp_v1) + 0x1C))))) {
            func_1516972C(arg0, var_a2, arg0);
        }
    } else {
        temp_v1_2 = (char *)(arg0) + 0x28;
        if (var_a2 == 0x2D) {
            temp_a2 = (*(s32 *)((char *)(arg1) + 0x0));
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x28));
            if (temp_a2 == temp_v0_2) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v1_2) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            temp_a0_2 = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            if (temp_a0_2 == temp_v0_2) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_a2;
                (*(u8 *)((char *)(temp_v1_2) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
                return;
            }
            temp_v0_3 = (*(s32 *)((char *)(temp_v1_2) + 0x18));
            if (temp_v0_3 != 0) {
                if (temp_a2 == temp_v0_3) {
                    (*(s32 *)((char *)(temp_v1_2) + 0x18)) = temp_a0_2;
                    (*(u8 *)((char *)(temp_v1_2) + 0x1C)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                    return;
                }
                if (temp_a0_2 == temp_v0_3) {
                    (*(s32 *)((char *)(temp_v1_2) + 0x18)) = temp_a2;
                    (*(u8 *)((char *)(temp_v1_2) + 0x1C)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
                }
            }
        }
    }
}

s32 func_150FC930(void *arg0, void * arg1, void * arg2) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if ((temp_v0 == 0x12) || (temp_v0 == 0x23) || (temp_v0 == 0x73) || (temp_v0 == 0x8A)) {
        return 0;
    }
    return 1;
}

void func_150FC974(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x38)) != NULL) {
        func_1516972C((*(u8 *)((char *)(arg0) + 0x38)), (u8) arg0);
    }
}

void func_150FC9A4(void *arg0) {
    func_150FC974(arg0);
    func_1514933C(arg0);
}

void func_150FC9D0(void *arg0) {
    func_150FC974(arg0);
    func_15149368(arg0);
}
