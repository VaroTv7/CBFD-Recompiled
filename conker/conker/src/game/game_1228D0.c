/**
 * Auto-decompiled from asm/1228D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1504715C();                        /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15107C1C(); /* extern */
s32 func_15130280();        /* extern */
void * func_15134DAC();              /* extern */
void * func_15137F30(); /* extern */
void * func_15143134();                   /* extern */
void * func_15145EA4();              /* extern */
void * func_151602C0(); /* extern */
void * func_15169968();                              /* extern */
void * func_15179008();                                 /* extern */
void * func_151D9014(); /* extern */
void * memcpy();                          /* extern */
void func_150F55C8();                     /* static */
extern s32 D_80090274;
extern s32 D_800917F8;
extern s32 D_80091930;
extern s32 D_8009193C;
extern s32 D_80091948;
extern s32 D_800A1B00;
extern s32 D_800A1B0C;
extern s32 D_800A1B18;
extern s32 D_800A1B24;
extern s32 D_800A1B30;
extern f32 D_800A1B3C;
extern f32 D_800A1B40;
extern f32 D_800A1B44;
extern f32 D_800A1B48;
extern f32 D_800A1B4C;
extern f32 D_800A1B50;
extern f32 D_800A1B54;
extern void *D_800A1B58;
extern f32 D_800A1B5C;
extern f32 D_800A1B60;
extern f32 D_800A1B64;
extern f32 D_800A1B68;
extern f32 D_800A1B6C;
extern f32 D_800A1B70;
extern f32 D_800A1B74;
extern f32 D_800A1B78;
extern f32 D_800A1B7C;

void func_150F5420(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp5D;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s16 sp52;
    s16 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    void * *sp24;
    s16 temp_v0;

    if (arg3 != 0) {
        if (arg3 == 2) {
            sp50 = 0xF0;
            sp52 = 0xBA;
            sp24 = &D_80091948;
        } else {
            sp50 = 0x10E;
            sp52 = 0x7C;
            if (arg3 == 1) {
                sp24 = &D_80091930;
            } else {
                sp24 = &D_8009193C;
            }
        }
        sp54 = 9;
        sp5D = 0x10;
        sp4C = 0;
        sp4E = 0;
        sp5A = 8;
    } else {
        sp24 = &D_800917F8;
        sp54 = 0xA;
        sp50 = 0xA0;
        sp52 = 0xC0;
        sp5D = 0x20;
        sp4C = 0x1000;
        sp4E = 0x1000;
        sp5A = 0x18;
    }
    sp2C = (arg0 << 0x10) | arg1;
    temp_v0 = arg0 + arg1 + arg2;
    sp30 = (arg2 << 0x10) | temp_v0;
    sp34 = 0x2710;
    sp38 = temp_v0;
    sp3C = 0;
    sp48 = 0;
    sp4A = 0;
    sp55 = 1;
    sp56 = 0xFF;
    sp57 = 0xFF;
    sp58 = 0xFF;
    sp5B = 0x11;
    sp59 = 0;
    sp3A = 0;
    sp40 = 146.0f;
    sp44 = 100.0f;
    func_15169968(&sp24);
}

void func_150F5590(void *arg0) {
    (*(s16 *)((char *)(arg0) + 0x38)) = (s16) (0x1000 - ((*(s16 *)((char *)(arg0) + 0x24)) * 4));
    (*(s16 *)((char *)(arg0) + 0x3A)) = (s16) (*(s16 *)((char *)(arg0) + 0x38));
    func_150F55C8();
}

void func_150F55C8(void *arg0) {
    s16 temp_t2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_a2 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_t2 = (*(s32 *)((char *)(arg0) + 0x24));
    temp_v0 = temp_v1 & 0xFFFF;
    temp_a1 = temp_a2 >> 0x10;
    temp_t1 = temp_v0 - temp_a1;
    if (temp_t1 < temp_t2) {
        (*(s8 *)((char *)(arg0) + 0x45)) = (s8) ((s32) ((temp_v0 - temp_t2) * 0xFF) / temp_a1);
        return;
    }
    if ((temp_t1 - (temp_a2 & 0xFFFF)) < temp_t2) {
        (*(s32 *)((char *)(arg0) + 0x45)) = 0xFF;
        return;
    }
    (*(s8 *)((char *)(arg0) + 0x45)) = (s8) ((s32) (temp_t2 * 0xFF) / (s32) (temp_v1 >> 0x10));
}

void func_150F568C(s32 arg0) {
    func_15179008(0);
}

s32 func_150F56B0(void *arg0, void *arg1) {
    f32 temp_f2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x2D0));
    if (temp_v0 == NULL) {
        return 0;
    }
    var_v1 = 6;
    if ((*(s32 *)((char *)(arg1) + 0x84)) == 0xAE) {
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x8));
        if ((temp_f2 >= 36.0f) && (temp_f2 <= 51.0f)) {
            var_v1 = (s32) (6.0f * (1.0f - ((temp_f2 - 36.0f) * 0.0625f)));
        } else if ((temp_f2 > 51.0f) && (temp_f2 <= 54.0f)) {
            var_v1 = 0;
        } else if ((temp_f2 > 54.0f) && (temp_f2 <= 60.0f)) {
            var_v1 = (s32) (6.0f * ((temp_f2 - 54.0f) * D_800A1B3C));
        } else {
            if ((temp_f2 > 60.0f) && (temp_f2 <= 65.0f)) {
                var_v1_2 = (s32) (2.0f * ((temp_f2 - 60.0f) * D_800A1B40));
                goto block_30;
            }
            if ((temp_f2 > 65.0f) && (temp_f2 <= 67.0f)) {
                var_v1_2 = (s32) (2.0f * (1.0f - ((temp_f2 - 65.0f) * D_800A1B44)));
                goto block_30;
            }
            if ((temp_f2 > 67.0f) && (temp_f2 <= 70.0f)) {
                var_v1 = (s32) (2.0f * (1.0f - ((temp_f2 - 67.0f) * 0.25f))) + 4;
            } else if ((temp_f2 > 70.0f) && (temp_f2 <= 74.0f)) {
                var_v1 = (s32) (2.0f * ((temp_f2 - 70.0f) * D_800A1B48)) + 4;
            } else {
                if ((temp_f2 > 74.0f) && (temp_f2 <= 119.0f)) {
                    var_v1_2 = (s32) (2.0f * ((temp_f2 - 74.0f) * D_800A1B4C));
                    goto block_30;
                }
                if ((temp_f2 > 119.0f) && (temp_f2 <= 150.0f)) {
                    var_v1_2 = (s32) (2.0f * (1.0f - ((temp_f2 - 119.0f) * 0.03125f)));
block_30:
                    var_v1 = var_v1_2 + 7;
                }
            }
        }
    }
    (*(s16 *)((char *)(arg0) + 0x18)) = (s16) *(&D_80090274 + (var_v1 * 4));
    return 0;
}

s32 func_150F5A54(void *arg0, void *arg1) {
    f32 sp4;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x2D0));
    var_a2 = 1;
    if (temp_v0 == NULL) {

    } else {
        temp_t0 = (*(s32 *)((char *)(arg0) + 0x38));
        var_a3 = 0;
        temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x24))));
        if (temp_t0 != 0) {
            if (temp_t0 != 1) {
                var_f0 = sp4;
                if (temp_t0 != 2) {

                } else {
                    var_f0 = 0.0f;
                }
            } else {
                var_f0 = 1.0f;
            }
        } else {
            if ((*(s32 *)((char *)(arg1) + 0x84)) == 5) {
                (*(s32 *)((char *)(arg0) + 0x38)) = 1;
                sp4 = 1.0f;
            } else {
                var_a3 = 1;
            }
            var_f0 = sp4;
        }
        if ((*(s32 *)((char *)(arg1) + 0x84)) == 5) {
            temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x8));
            if (temp_f2 < 69.0f) {
                var_f0 = 1.0f;
            } else if (temp_f2 > 84.0f) {
                var_f0 = 0.0f;
                (*(s32 *)((char *)(arg0) + 0x38)) = 2;
            } else {
                var_f0 = 1.0f - ((temp_f2 - 69.0f) / 15.0f);
            }
        }
        var_a0 = 0;
        do {
            var_a2 -= 1;
            if ((*(s32 *)((var_a0 * 8) + (char *)(temp_v1))) != -0xE) {
                do {
                    var_a0 += 1;
                } while ((*(s32 *)((var_a0 * 8) + (char *)(temp_v1))) != -0xE);
            }
            if (var_a2 != 0) {
                var_a0 += 1;
            }
        } while (var_a2 != 0);
        if (var_a3 != 0) {
            var_a1 = 2;
        } else {
            var_a1 = (s32) ((58.0f * var_f0) + 44.0f);
        }
        (*(s32 *)((char *)(temp_v1) + (var_a0 * 8))) = (var_a1 & 0xFFF) | 0xF2002000;
    }
    return 0;
}

void func_150F5C08(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp3C;
    u8 sp38;
    void *sp34;
    s32 temp_v0;

    sp34 = arg0;
    sp3C = 0.0f;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(arg1, -1, 0x51, -1, 1, 0x3E, 0xC, (s32) arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0xC);
    }
}

void func_150F5C98(void *arg0) {
    f32 sp13C;
    s16 sp138;
    s8 sp136;
    s8 sp135;
    s8 sp134;
    s8 sp133;
    s8 sp132;
    s8 sp131;
    s8 sp130;
    s32 sp12C;
    s32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    void * sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s16 spF2;
    s16 spF0;
    s16 spEE;
    s8 spED;
    s8 spEC;
    s8 spEB;
    s8 spEA;
    s8 spE9;
    s8 spE8;
    s8 spE7;
    s8 spE6;
    s8 spE5;
    s8 spE4;
    s32 spE0;
    s32 spDC;
    s16 spDA;
    s16 spD8;
    s32 spD4;
    s32 spD0;
    void *spCC;
    f32 spC0;
    f32 spB4;
    void * *spA4;
    void * *spA0;
    f32 *sp9C;
    f32 *sp98;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s0;
    void *temp_s1;

    f32 spB8;
    f32 spBC;
    f32 spC4;
    f32 spC8;
    temp_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if ((*(s32 *)((char *)(temp_s0) + 0x1D4)) != 0) {
        (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((D_800A1B50 + (random_float() * D_800A1B54)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f) {
            spE4 = 0xFF;
            spE5 = 0xFF;
            spE6 = 0xFF;
            spE8 = 0xB4;
            spE9 = 0xB4;
            spEA = 0xB4;
            spA0 = &D_800A1B00;
            spA4 = &D_800A1B0C;
            sp98 = &spC0;
            sp9C = &spB4;
            func_15145EA4(&spA0, &sp98, (*(s32 *)((char *)(temp_s0) + 0x1D4)) + 0x140, 2);
            spED = 0x6C;
            spD8 = 0x5103;
            spD0 = 0x200005;
            spD4 = 0x9F0600;
            spDC = 0;
            spE0 = 0;
            spE7 = 0xFF;
            spEC = 0xFF;
            (*(s32 *)((char *)&(sp10C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
            (*(s32 *)((char *)&(sp10C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
            (*(s32 *)((char *)&(sp10C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
            sp128 = 0x84CE07;
            sp130 = 8;
            sp131 = 6;
            sp132 = 0x10;
            sp133 = -1;
            sp134 = -1;
            sp135 = 0;
            sp12C = 0;
            sp136 = 0xFF;
            sp138 = 0x3E8;
            sp13C = 1000.0f;
            spCC = D_800A1B58;
            spF4 = D_800A1B5C;
            do {
                temp_v1 = (random_u32() % 21U) + 0x14;
                spF2 = temp_v1;
                spEE = temp_v1;
                spF0 = (s16) (0xFF / temp_v1);
                spDA = temp_v1;
                spEB = (random_u32() % 26U) + 8;
                temp_f2 = (random_float() * 70.0f) + 148.0f;
                spF8 = temp_f2;
                spFC = temp_f2;
                sp124 = (random_float() * D_800A1B60) + D_800A1B64;
                temp_f2_2 = (random_float() * D_800A1B68) + D_800A1B6C;
                sp118 = (spB4 - spC0) * temp_f2_2;
                sp11C = (spB8 - spC4) * temp_f2_2;
                sp120 = (spBC - spC8) * temp_f2_2;
                temp_f2_3 = random_float() * D_800BE9A4;
                sp128 &= ~0xC0;
                sp100 = (sp118 * temp_f2_3) + spC0;
                sp104 = (sp11C * temp_f2_3) + spC4;
                sp108 = (sp120 * temp_f2_3) + spC8;
                var_s0 = 0;
                if (random_u32() & 1) {
                    var_s0 = 0x80;
                }
                if (random_u32() & 1) {
                    var_v0 = 0x40;
                } else {
                    var_v0 = 0;
                }
                sp128 |= var_v0 | var_s0;
                temp_v0 = func_15130280(&spD0, 1, 0, 4, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0xA8, &spCC, 4);
                }
                (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
        }
    }
}

void func_150F6138(s32 arg0, s32 arg1, s32 arg2) {
    func_15149514(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150F6178(void *arg0) {
    f32 sp54;
    void * sp48;
    void * *sp44;
    void * *sp40;
    void * *sp3C;
    f32 *sp38;
    void *sp1C;
    s32 temp_v1_3;
    s32 temp_v1_5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_4;
    void *var_t0;

    f32 sp58;
    f32 sp5C;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    var_t0 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(var_t0) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if (((*(s32 *)((char *)(temp_v0) + 0x1D4)) != 0) && !((*(s32 *)((char *)(temp_v0) + 0x94)) & 2)) {
        sp40 = &D_800A1B18;
        sp44 = &D_800A1B24;
        sp38 = &sp54;
        sp3C = &sp48;
        sp1C = var_t0;
        func_15145EA4(&sp40, &sp38, (*(s32 *)((char *)(temp_v0) + 0x1D4)), 2);
        var_t0 = sp1C;
        temp_v1 = (*(s32 *)((char *)(var_t0) + 0x8));
        if (temp_v1 != NULL) {
            (*(u8 *)((char *)(temp_v1) + 0x168)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x168)) | 1);
            (*(f32 *)((char *)(temp_v1) + 0x34)) = (f32) (*(f32 *)((char *)&(sp54) + 0x0));
            (*(s32 *)((char *)(temp_v1) + 0x38)) = (s32) (*(s32 *)((char *)&(sp54) + 0x4));
            (*(s32 *)((char *)(temp_v1) + 0x3C)) = (s32) (*(s32 *)((char *)&(sp54) + 0x8));
            (*(s32 *)((char *)(temp_v1) + 0x40)) = (s32) (*(s32 *)((char *)&(sp48) + 0x0));
            (*(s32 *)((char *)(temp_v1) + 0x44)) = (s32) (*(s32 *)((char *)&(sp48) + 0x4));
            (*(s32 *)((char *)(temp_v1) + 0x48)) = (s32) (*(s32 *)((char *)&(sp48) + 0x8));
        }
        temp_v1_2 = (*(s32 *)((char *)(var_t0) + 0xC));
        if (temp_v1_2 != NULL) {
            temp_v0_2 = (*(s32 *)((char *)(temp_v1_2) + 0x14));
            (*(s32 *)((char *)(temp_v0_2) + 0x9)) = 0;
            (*(s16 *)((char *)(temp_v0_2) + 0xE)) = (s16) (s32) sp54;
            (*(s16 *)((char *)(temp_v0_2) + 0x10)) = (s16) (s32) sp58;
            (*(s16 *)((char *)(temp_v0_2) + 0x12)) = (s16) (s32) sp5C;
        }
    } else {
        temp_v1_3 = (*(s32 *)((char *)(var_t0) + 0x8));
        temp_v0_3 = temp_v1_3 + 0x110;
        if (temp_v1_3 != 0) {
            (*(u8 *)((char *)(temp_v0_3) + 0x58)) = (u8) ((*(u8 *)((char *)(temp_v0_3) + 0x58)) & 0xFFFE);
        }
        temp_v1_4 = (*(s32 *)((char *)(var_t0) + 0xC));
        if (temp_v1_4 != NULL) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1_4) + 0x14))) + 0x9)) = 1;
        }
    }
    temp_v1_5 = (*(s32 *)((char *)(var_t0) + 0x8));
    if (temp_v1_5 != 0) {
        temp_v0_4 = temp_v1_5 + 0x110;
        (*(s32 *)((char *)(temp_v0_4) + 0x48)) = 4.0f;
        (*(s32 *)((char *)(temp_v0_4) + 0x4C)) = 8.0f;
    }
}

void func_150F631C(void *arg0) {
    s32 temp_a0;

    if ((*(s32 *)((char *)(arg0) + 0x30)) != 0) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0x30)), arg0);
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x34));
    if (temp_a0 != 0) {
        func_1516972C(temp_a0, arg0);
    }
}

void func_150F6368(void *arg0) {
    func_150F631C(arg0);
    func_1514933C(arg0);
}

void func_150F6394(void *arg0) {
    func_150F631C(arg0);
    func_15149368(arg0);
}

void func_150F63C0(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150F6400(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x160)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x160)) + 0x28)) + 0x8)) = 0;
    }
}

void func_150F6420(void *arg0) {
    func_150F6400(arg0);
    func_1513CA6C(arg0);
}

void func_150F644C(void *arg0) {
    func_150F6400(arg0);
    func_1513CAA0(arg0);
}

void func_150F6478(s32 arg0) {

}

void func_150F6484(s32 arg0) {
    func_150F6478(arg0);
    func_151411A4(arg0);
}

void func_150F64B0(s32 arg0) {
    func_150F6478(arg0);
    func_151411C4(arg0);
}

void func_150F64DC(void *arg0) {
    void *spC0;
    f32 spB0;
    s8 spAC;
    s16 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    void *sp84;
    s8 var_s3;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_s2;
    void *temp_v0;
    void *temp_v1;

    f32 spB4;
    f32 spB8;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_v1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if (((*(s32 *)((char *)(temp_v0) + 0x1D4)) != 0) && !((*(s32 *)((char *)(temp_v0) + 0x94)) & 2)) {
        (*(s16 *)((char *)(temp_v1) + 0x6)) = (s16) ((*(s16 *)((char *)(temp_v1) + 0x6)) - D_800BE9E4);
        if ((*(s32 *)((char *)(temp_v1) + 0x6)) < 0) {
            sp84 = temp_v1;
            spC0 = temp_v0;
            func_10010F88(0x679, 0x18CE, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_v0) + 0x14)), (s32) (*(s32 *)((char *)(temp_v0) + 0x18)), (s32) (*(s32 *)((char *)(temp_v0) + 0x1C)), 0x7918, 0x7D00);
            var_s3 = (random_u32() & 1) + 2;
            func_15143134(&D_800A1B30, &spB0, (*(s32 *)((char *)(spC0) + 0x1D4)));
            spA8 = 3;
            spA9 = -1;
            spAA = (random_u32() % 9U) + 0xA;
            spAC = 0;
            sp9C = (s32) spB0;
            spA0 = (s32) spB4;
            spA4 = (s32) spB8;
            func_151602C0(&spA8, &sp9C, (random_u32() % 61U) + 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            do {
                sp98 = 0xA0;
                sp99 = 0xA0;
                sp9A = 0xFF;
                sp9B = (random_u32() % 101U) + 0x9B;
                temp_s1 = random_u32();
                temp_s2 = random_u32();
                temp_s0 = random_u32();
                func_15107C1C(spC0, 0, &D_800A1B30, (s16) (temp_s1 & 0xFF), (temp_s2 % 43U) - 0x32, (temp_s0 % 18U) + 5, 4, 27.0f, (random_float() * 16.0f) + 20.0f, 0, 2, &sp98, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
                var_s3 -= 1;
            } while (var_s3 > 0);
            (*(s16 *)((char *)(sp84) + 0x6)) = (s16) ((random_u32() % 91U) + 0x5A);
        }
    }
}

void func_150F6850(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150F6890(void *arg0, s32 arg1, void * arg2, void * arg3) {
    s8 sp55;
    s8 sp54;
    f32 sp50;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s16 sp48;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s8 sp24;
    void *sp20;
    u8 sp1C;

    sp20 = arg0;
    sp24 = 3;
    sp28 = 0.0f;
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp40 = 2;
    sp42 = 0x28;
    sp44 = 0x10;
    sp46 = arg1;
    sp4A = 5;
    sp4B = 8;
    sp4C = -1;
    sp54 = 0;
    sp55 = -1;
    sp48 = 0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp38 = D_800A1B70;
    sp3C = 8.5f;
    sp50 = 1.0f;
    func_15134DAC(&sp1C, 0, arg0, arg1);
}

void func_150F695C(f32 arg4, void *arg5) {
    void * spA4;
    void * sp98;
    void * sp8C;
    s32 sp88;
    s16 sp86;
    u8 sp85;
    f32 sp80;
    s32 sp7C;
    s8 sp79;
    s8 sp78;
    s32 sp74;
    f32 sp5C;
    u8 sp5B;
    s32 var_v0;
    s32 var_v0_2;
    u8 var_v1;

    func_15137F30(arg4, arg5, &spA4, &sp98, &sp8C, &sp88, &sp86, &sp85, &sp80);
    sp80 *= 1.0f + (2.0f * random_float());
    var_v0 = 0;
    if (random_float() < D_800A1B74) {
        var_v0 = 1;
    }
    var_v1 = var_v0 & 0xFF;
    if (var_v0 & 0xFF) {
        sp5B = var_v1;
        func_1504715C(&sp5C, (*(s32 *)((char *)(arg5) + 0x1C)));
        var_v1 = sp5B;
    } else {
        sp74 = 0;
        sp78 = 0;
        sp79 = 0;
        sp7C = 0;
        sp5C = D_800A1B78;
    }
    var_v0_2 = 0;
    if (var_v1 != 0) {
        sp5B = var_v1;
        var_v0_2 = 0;
        if (random_float() < 0.5f) {
            var_v0_2 = 1;
        }
    }
    func_151D9014(&spA4, &sp8C, 1, sp88, (s32) sp86, (s32) sp85, sp80, (s32) var_v1, D_800A1B7C, D_800A1B7C, 1, &sp5C, 1, var_v0_2, (s32) (*(s32 *)((char *)(arg5) + 0xC)), (s32) (*(s32 *)((char *)(arg5) + 0x1)));
}
