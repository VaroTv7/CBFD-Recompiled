/**
 * Auto-decompiled from asm/1028F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"

s32 func_150AC9C0(); /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                             /* extern */
s32 func_15130280();        /* extern */
void * func_15131958();                  /* extern */
void * func_15132A4C();          /* extern */
s32 func_15134070();                          /* extern */
void * func_1514373C();              /* extern */
void * func_15143794();                /* extern */
void * func_15143874();            /* extern */
f32 func_15144A74();                    /* extern */
s32 func_15144E80();        /* extern */
s32 func_15145128();          /* extern */
void * func_15146078();               /* extern */
void * func_151541B8(); /* extern */
void * func_15154884();    /* extern */
s32 func_1515C0F8();                    /* extern */
void * func_15182670();  /* extern */
void * func_151A5D58(); /* extern */
void * func_151C0360();                /* extern */
void * func_151C05A4();                   /* extern */
void * func_151C05F0();                   /* extern */
void * memcpy();                             /* extern */
void func_150D6388();
void func_150D6434();
void func_150D65F0();
void func_150D66A4();
void func_150D6C98();     /* static */
extern s32 D_80089A20;
extern s32 D_800A0A30;
extern f32 D_800A0A3C;
extern f32 D_800A0A40;
extern f32 D_800A0A44;
extern f32 D_800A0A48;
extern f32 D_800A0A4C;
extern f32 D_800A0A50;
extern f32 D_800A0A54;
extern f32 D_800A0A58;
extern f32 D_800A0A5C;
extern f32 D_800A0A60;
extern f32 D_800A0A64;
extern f32 D_800A0A68;
extern f32 D_800A0A6C;
extern f32 D_800A0A70;
extern f32 D_800A0A74;
extern f32 D_800A0A78;
extern f32 D_800A0A7C;
extern f32 D_800A0A80;
extern f32 D_800A0A84;
extern f32 D_800A0A88;
extern f32 D_800A0A8C;
extern f32 D_800A0A90;
extern f32 D_800A0A94;
extern f32 D_800A0A98;
extern f32 D_800A0A9C;
extern f32 D_800A0AA0;
extern f32 D_800A0AA4;
extern f32 D_800A0AA8;
extern f32 D_800A0AAC;
extern f32 D_800A0AB0;
extern f32 D_800A0AB4;
extern f32 D_800A0AB8;
extern f32 D_800A0ABC;
extern f32 D_800A0AC0;
extern f32 D_800A0AC4;
extern f32 D_800A0AC8;
extern f32 D_800A0ACC;
extern f32 D_800A0AD0;
extern f32 D_800A0AD4;
extern s32 D_800A3F14;

void func_150D5440(void * *arg0, s32 arg1, s32 arg2) {
    f32 sp3C;
    u8 sp38;
    void * *sp34;
    s32 temp_v0;

    sp34 = arg0;
    sp3C = 0.0f;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(0x12C, -1, 0x38, -1, 0, 0x28, 0xC, (s32) arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0xC);
    }
}

void func_150D54C8(void *arg0) {
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s32 spF4;
    s32 spF0;
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
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s32 spA8;
    s32 spA4;
    s16 spA2;
    s16 spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    void * *sp84;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f6;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14;
    f32 var_f2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s2) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if (((*(s32 *)((char *)(temp_s2) + 0x28)) < 8.0f) && (((*(s32 *)((char *)(temp_s2) + 0x184)) & 0x1F) == 0xE)) {
        (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((D_800A0A3C + (random_float() * 1.0f)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f) {
            if (func_1515C0F8(temp_s2, &sp84) == 0) {
                sp84 = &D_800A5480;
            }
            func_1514373C((*(s32 *)((char *)(temp_s2) + 0x40)) * D_800A0A40, 0x3F800000, &sp90, &sp94);
            temp_f30 = D_800A0A44;
            spB5 = 0x28;
            spAD = 0xFF;
            spA0 = 0x2203;
            sp98 = 0x200005;
            spAC = 0xFF;
            spAE = 0xFF;
            spAF = 0xFF;
            spB0 = 0xFF;
            spB1 = 0xFF;
            spB2 = 0xFF;
            sp9C = 0;
            spA4 = 0;
            spA8 = 0;
            spB4 = 0xFF;
            spB6 = 5;
            spB8 = 0x33;
            spBA = 1;
            spF0 = 0x84C207;
            spF8 = 6;
            spF9 = 8;
            spFA = -1;
            spFB = -1;
            spFC = -1;
            spFD = 0;
            spF4 = 0;
            spFE = 0xFF;
            spBC = 1.0f;
            spD4 = 0.0f;
            spD8 = 0.0f;
            spDC = 0.0f;
            temp_f24 = -sp90;
            do {
                temp_s0 = random_u32() & 1;
                temp_f20 = random_float();
                temp_f0 = random_float();
                if (temp_s0 != 0) {
                    var_f14 = 35.0f;
                } else {
                    var_f14 = -35.0f;
                }
                temp_f2 = sp90 * 180.0f;
                temp_f12 = sp94 * 180.0f;
                spC8 = (((*(s32 *)((char *)(temp_s2) + 0x14)) + (sp94 * var_f14)) - (temp_f2 * 0.5f)) + (temp_f2 * temp_f20);
                spCC = (*(s32 *)((char *)(temp_s2) + 0x180));
                spD0 = (((*(s32 *)((char *)(temp_s2) + 0x1C)) + (temp_f24 * var_f14)) - (temp_f12 * 0.5f)) + (temp_f12 * temp_f20);
                if (temp_s0 != 0) {
                    var_f2 = (temp_f0 * temp_f30) + D_800A0A48;
                    var_f12 = var_f2;
                } else {
                    var_f2 = (temp_f0 * temp_f30) + D_800A0A4C;
                    var_f12 = -var_f2;
                }
                spE0 = (var_f12 * sp94) - ((*(s32 *)((char *)(sp84) + 0x0)) * D_800A0A50);
                spE4 = D_800A0A54 * var_f2;
                if (temp_s0 != 0) {
                    var_f12_2 = var_f2;
                } else {
                    var_f12_2 = -var_f2;
                }
                spE8 = (var_f12_2 * temp_f24) - ((*(s32 *)((char *)(sp84) + 0x8)) * D_800A0A58);
                spA2 = (random_u32(var_f12_2, var_f14) % 10U) + 0x1F;
                spB3 = (random_u32() % 76U) + 0xB4;
                temp_f2_2 = (random_float() * 364.0f) + 111.0f;
                spC0 = temp_f2_2;
                spC4 = temp_f2_2;
                temp_f6 = random_float() * D_800A0A5C;
                spF0 &= ~0xC0;
                spEC = temp_f6 + D_800A0A60;
                var_s0 = 0;
                if (random_u32() & 1) {
                    var_s0 = 0x80;
                }
                if (random_u32() & 1) {
                    var_v0 = 0x40;
                } else {
                    var_v0 = 0;
                }
                spF0 |= var_v0 | var_s0;
                func_15130280(&sp98, 1, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
        }
    }
}

void func_150D596C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) || (temp_t6 == 0x2F) || (temp_t6 == 3)) {
        if (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x28))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_150D5A2C(void) {
    func_1514933C();
}

void func_150D5A4C(void) {
    func_15149368();
}

void func_150D5A6C(void *arg0, s32 arg1, s32 arg2) {
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    void * sp1A4;
    void * sp1A0;
    void * sp19C;
    u8 sp19B;
    void * sp188;
    void * sp184;
    void * sp180;
    s32 sp17C;
    s32 sp178;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    s32 sp148;
    s16 sp144;
    s16 sp142;
    u8 sp140;
    void *sp13C;
    s8 sp13A;
    s8 sp138;
    s8 sp137;
    s8 sp136;
    s8 sp135;
    s8 sp134;
    s8 sp133;
    s8 sp132;
    s8 sp131;
    s8 sp130;
    s32 sp12C;
    s8 sp128;
    s16 sp126;
    s16 sp124;
    s32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    void * spF8;
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
    void * spCC;
    void * spC8;
    void * spC4;
    void * spC0;
    void * spBC;
    void * spB8;
    s32 spAC;
    f32 spA4;
    f32 spA0;
    f32 sp94;
    f32 sp90;
    s32 *sp7C;
    s32 *sp78;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 *temp_v1;
    s32 *var_s1;
    s32 temp_s4;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    u32 temp_s0;
    u32 temp_s0_2;
    void *temp_v0_2;

    temp_s4 = arg1 & 0xFF;
    sp19B = 0;
    sp1B4 = (*(s32 *)((char *)(arg0) + 0x14));
    sp1B8 = (*(s32 *)((char *)(arg0) + 0x18)) + 50.0f;
    sp1BC = (*(s32 *)((char *)(arg0) + 0x1C));
    sp1A8 = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(arg0) + 0x2C));
    sp1AC = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(arg0) + 0x30));
    sp1B0 = (*(s32 *)((char *)(arg0) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x34));
    temp_v0 = func_15134070(arg0);
    sp178 = temp_v0;
    if (temp_v0 != 0x63) {
        if (((*(s32 *)((char *)(arg0) + 0x184)) & 0x1F) == 0xE) {
            func_10010630(0x434, arg0, 0x7D00, 0x2BC, 0x7D0);
        } else {
            func_10010630(0x4C8, arg0, -0x7D00, 0x2BC, 0x7D0);
        }
        func_10010630(((random_u32() & 1) + 0x2B6) & 0xFFFF, arg0, 0x7D00, 0x3E8, 0xBB8);
        func_10010630(((random_u32() & 3) + 0x2B1) & 0xFFFF, arg0, 0x7D00, 0x2BC, 0x7D0);
        func_151C05A4(&sp1B4, temp_s4 & 0xFF, arg2);
        func_151C05F0(&sp1B4, temp_s4 & 0xFF, arg2);
        func_15145A50(arg0);
        if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
            if (func_15145128(&sp1A8, &sp1A8, &sp184, &sp180) != 0) {
                var_s2 = 1;
            } else {
                var_s2 = 0;
            }
            if ((var_s2 != 0) && (func_150AC9C0((*(s32 *)((char *)(arg0) + 0x2C)), (*(s32 *)((char *)(arg0) + 0x30)), (*(s32 *)((char *)(arg0) + 0x34)), sp1A8, sp1AC, sp1B0, 0, &sp188, &sp19C, &sp1A0, &sp1A4, &sp174, 0, &sp17C, 0.0f) != 0) && (sp174 < D_800A0A64)) {
                sp19B = 1;
            }
            var_s0 = 1;
            if (sp19B != 0) {
                var_s0 = 0;
                if (func_15144E80(&sp188, &sp15C, &sp150, &sp168) != 0) {
                    func_15145128(&sp15C, &sp15C, &spCC, &spC8);
                    func_15145128(&sp150, &sp150, &spC4, &spC0);
                    func_15145128(&sp168, &sp168, &spBC, &spB8);
                    if (func_15144A74(&sp168, &sp1A8) > 0.0f) {
                        sp168 = -sp168;
                        sp16C = -sp16C;
                        sp170 = -sp170;
                    }
                } else {
                    var_s0 = 1;
                }
            }
            if (var_s0 != 0) {
                if (var_s2 != 0) {
                    sp168 = -sp1A8;
                    sp16C = -sp1AC;
                    sp170 = -sp1B0;
                    func_15146078(&sp168, &sp15C, &sp150);
                } else {
                    sp168 = 0.0f;
                    sp170 = 0.0f;
                    sp160 = 0.0f;
                    sp164 = 0.0f;
                    sp150 = 0.0f;
                    sp154 = 0.0f;
                    sp16C = 1.0f;
                    sp15C = 1.0f;
                    sp158 = 1.0f;
                }
            }
            spD0 = 1.0f;
            spD4 = 1.0f;
            sp168 *= 1000.0f;
            sp16C *= 1000.0f;
            sp170 *= 1000.0f;
            spD8 = (*(s32 *)((char *)(arg0) + 0x14C));
            spEC = 1.0f;
            spF0 = 1.0f;
            spF4 = 1.0f;
            spDC = (*(s32 *)((char *)(arg0) + 0x150));
            var_s1 = &spAC;
            (*(f32 *)((char *)&(spF8) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1B4) + 0x0));
            (*(s32 *)((char *)&(spF8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1B4) + 0x4));
            (*(s32 *)((char *)&(spF8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1B4) + 0x8));
            sp120 = 0x21E8;
            sp128 = 0;
            sp12C = 0;
            sp130 = 0xFF;
            sp131 = 8;
            sp132 = 0;
            sp133 = 0;
            sp134 = 0;
            sp135 = 0;
            sp136 = 0;
            sp137 = 0;
            sp138 = 2;
            sp13A = 1;
            sp13C = arg0;
            sp148 = 0;
            sp114 = 0.0f;
            sp140 = (*(s32 *)((char *)(arg0) + 0x3B));
            (*(s32 *)((char *)&(spAC) + 0x0)) = (*(s32 *)((char *)&(D_800A0A30) + 0x0));
            (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A0A30) + 0x4));
            (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A0A30) + 0x8));
            sp142 = 0xC;
            sp144 = 0x15;
            do {
                temp_f20 = (random_float() * D_800A0A68) + D_800A0A6C;
                temp_s0 = random_u32();
                func_15143874((s16) (temp_s0 & 0xFF), random_float() * D_800A0A70, &spA0, &spA4);
                sp104 = ((sp15C * spA0) + (sp150 * spA4) + sp168) * temp_f20;
                sp108 = ((sp160 * spA0) + (sp154 * spA4) + sp16C) * temp_f20;
                sp10C = ((sp164 * spA0) + (sp158 * spA4) + sp170) * temp_f20;
                spE0 = random_float() * 360.0f;
                spE4 = random_float() * 360.0f;
                spE8 = random_float() * 360.0f;
                sp110 = (random_float() * D_800A0A74) + D_800A0A78;
                sp118 = (random_float() * D_800A0A7C) + D_800A0A80;
                sp11C = (random_float() * D_800A0A84) + D_800A0A88;
                sp124 = (random_u32() % 21U) + 0x1E;
                sp126 = (s16) *var_s1;
                func_15132A4C(&spD0, 0, 0, 0, temp_s4, arg2);
                var_s1 += 4;
            } while ((char *)(var_s1) != (char *)(&spB8));
            temp_t1 = sp178 * 4;
            temp_v1 = temp_t1 + &D_800A3F14;
            sp142 = 0xC;
            sp144 = 0x15;
            var_s1_2 = 2;
            if (*temp_v1 >= 3) {
                sp78 = temp_t1 + &D_80089A20;
                var_s2_2 = 8;
                sp7C = temp_v1;
                do {
                    temp_f20_2 = (random_float() * D_800A0A8C) + D_800A0A90;
                    temp_s0_2 = random_u32();
                    func_15143874((s16) (temp_s0_2 & 0xFF), random_float() * D_800A0A94, &sp90, &sp94);
                    sp104 = ((sp15C * sp90) + (sp150 * sp94) + sp168) * temp_f20_2;
                    sp108 = ((sp160 * sp90) + (sp154 * sp94) + sp16C) * temp_f20_2;
                    sp10C = ((sp164 * sp90) + (sp158 * sp94) + sp170) * temp_f20_2;
                    spE0 = random_float() * 360.0f;
                    spE4 = random_float() * 360.0f;
                    spE8 = random_float() * 360.0f;
                    sp110 = (random_float() * D_800A0A98) + D_800A0A9C;
                    sp118 = (random_float() * D_800A0AA0) + D_800A0AA4;
                    sp11C = (random_float() * D_800A0AA8) + D_800A0AAC;
                    sp124 = (random_u32() % 41U) + 0x28;
                    sp126 = (s16) (*(s32 *)((char *)(*sp78) + var_s2_2));
                    func_15132A4C(&spD0, 0, 0, 0, temp_s4, arg2);
                    var_s1_2 += 1;
                    var_s2_2 += 4;
                } while (var_s1_2 < *sp7C);
            }
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x318));
            if ((temp_v0_2 != NULL) && (D_80082FA0 <= 0)) {
                func_150D66A4((*(s32 *)((char *)(temp_v0_2) + 0x23D)), temp_s4 & 0xFF, arg2);
            }
            if ((sp19B != 0) && ((*(s32 *)((char *)(arg0) + 0x318)) != NULL)) {
                if ((sp17C & 0x1F) == 0xE) {
                    func_150D65F0(&sp188, &sp19C, temp_s4 & 0xFF, arg2);
                } else {
                    func_151C0360(&sp188, &sp19C, temp_s4 & 0xFF, arg2);
                }
            }
            func_150D6434(&sp1B4, temp_s4 & 0xFF, arg2);
            func_150D6388(&sp1B4, temp_s4 & 0xFF, arg2);
        }
    }
}

void func_150D6388(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    f32 var_f18;
    s32 temp_t7;

    sp28 = random_float();
    temp_f14 = sp28 * 4.0f;
    temp_f12 = temp_f14 + 15.0f;
    temp_t7 = (random_u32() % 56U) + 0xC8;
    var_f18 = (f32) temp_t7;
    if (temp_t7 < 0) {
        var_f18 += 4294967296.0f;
    }
    func_151541B8(temp_f12, temp_f14, arg0, temp_f12, 0x3FAFF1E9, var_f18, 0.0f, (s32) arg1, arg2);
}

void func_150D6434(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp28;
    f32 sp24;

    sp24 = random_float();
    sp28 = random_float();
    func_15154884(arg0, (sp24 * 3.0f) + 8.0f, (sp28 * D_800A0AB0) + D_800A0AB4, (random_float() * 50.0f) + 100.0f, (s32) arg1, arg2);
}

void func_150D64E8(void *arg0, f32 *arg1) {
    (*(s32 *)((char *)(arg0) + 0x0)) = 6;
    (*(s32 *)((char *)(arg0) + 0x4)) = 3;
    *arg1 = D_800A0AB8;
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) D_800A0ABC;
    (*(s32 *)((char *)(arg0) + 0x2C)) = 4;
    (*(s32 *)((char *)(arg0) + 0x30)) = 3;
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) D_800A0AC0;
    (*(s32 *)((char *)(arg0) + 0x1C)) = 150.0f;
    (*(s32 *)((char *)(arg0) + 0x20)) = 105.0f;
    (*(s32 *)((char *)(arg0) + 0x24)) = 396.0f;
    (*(s32 *)((char *)(arg0) + 0x28)) = 612.0f;
    (*(s32 *)((char *)(arg0) + 0x34)) = 25.0f;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) D_800A0AC4;
    (*(s32 *)((char *)(arg0) + 0x3C)) = -2.0f;
    (*(s32 *)((char *)(arg0) + 0x44)) = 0x14;
    (*(s32 *)((char *)(arg0) + 0x46)) = 0x1E;
    (*(s32 *)((char *)(arg0) + 0x48)) = 0x64;
    (*(s32 *)((char *)(arg0) + 0x4A)) = 0x64;
    (*(s32 *)((char *)(arg0) + 0x4C)) = 0xC;
    (*(s32 *)((char *)(arg0) + 0x4E)) = 0x14;
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) D_800A0AC8;
    if ((D_80082FA0 >= 2) || (D_8008FD8C >= 8)) {
        (*(s32 *)((char *)(arg0) + 0x50)) = -1;
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x50)) = 0;
}

void func_150D65F0(void * *arg0, void * *arg1, s32 arg2, s32 arg3) {
    u32 sp38;
    f32 sp34;

    sp34 = random_float();
    sp38 = random_u32();
    func_151A5D58((sp34 * 100.0f) + 150.0f, ((sp38 % 71U) + 0x82) & 0xFF, arg0, arg1, (random_u32() % 31U) + 0x32, 0, 1, (s32) arg2, arg3);
}

void func_150D66A4( s32 arg0, s32 arg1, s32 arg2) {
    u32 sp28;

    sp28 = random_u32();
    func_15182670(0xFF, 0xFF, 0xFF, ((sp28 % 56U) + 0xC8) & 0xFF, (random_u32() % 6U) + 0x19, (s32) arg0, (s32) arg1, arg2);
}

void func_150D6730(void * *arg0, s32 arg1, s32 arg2) {
    s8 sp14A;
    s8 sp149;
    s8 sp148;
    s8 sp147;
    s8 sp146;
    s8 sp145;
    s8 sp144;
    s32 sp140;
    s32 sp13C;
    f32 sp138;
    void * sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    void * sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    s16 sp106;
    s16 sp104;
    s16 sp102;
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s32 spF4;
    s32 spF0;
    s16 spEE;
    s16 spEC;
    s32 spE8;
    s32 spE4;
    f32 spE0;
    u8 spDC;
    void * *spD8;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s32 spC0;
    s32 spBC;
    f32 spB8;
    void * spAC;
    void * spA0;
    void * sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s16 sp86;
    s16 sp84;
    s16 sp82;
    s8 sp81;
    s8 sp80;
    s8 sp7F;
    s8 sp7E;
    s8 sp7D;
    s8 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s32 sp74;
    s32 sp70;
    s16 sp6E;
    s16 sp6C;
    s32 sp68;
    s32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    u8 sp4C;
    void * *sp48;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_t1;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_hi;
    u32 temp_s0;
    u32 temp_s1;

    temp_s3 = arg1 & 0xFF;
    temp_hi = random_u32() % 11U;
    spD8 = arg0;
    sp101 = 0x6C;
    spDC = (*(s32 *)((char *)(arg0) + 0x3B));
    var_s2 = temp_hi + 0xF;
    spEC = 0x5103;
    spE4 = 0x200005;
    spE8 = 0;
    spF0 = 0;
    spF4 = 0;
    spFC = 0x14;
    spFD = 0x14;
    spFE = 0x14;
    spFB = 0xFF;
    spF8 = 0x4B;
    spF9 = 0x4B;
    spFA = 0x4B;
    sp100 = 0xFF;
    spE0 = D_800A0ACC;
    func_150D6C98(arg0, &sp114);
    sp102 = 0xF;
    sp104 = 0x11;
    sp13C = 0x84DE01;
    sp144 = 8;
    sp145 = 6;
    sp146 = 0x1E;
    sp147 = -1;
    sp148 = -1;
    sp149 = 8;
    sp140 = 0;
    sp14A = 0xFF;
    sp120 = 0.0f;
    sp124 = 0.0f;
    sp128 = 0.0f;
    sp108 = D_800A0AD0;
    do {
        spFF = (random_u32() % 156U) + 0x64;
        temp_t1 = (random_u32() % 14U) + 8;
        sp106 = temp_t1;
        spEE = temp_t1;
        temp_f2 = (random_float() * 207.0f) + 238.0f;
        sp10C = temp_f2;
        sp110 = temp_f2;
        temp_s1 = random_u32();
        temp_s0 = random_u32();
        func_15143794((s16) (temp_s1 & 0xFF), (s16) ((temp_s0 % 36U) - 0x19), (random_float() * 30.0f) + 25.0f, &sp12C);
        temp_f16 = random_float() * 0.0f;
        sp13C &= ~0xC0;
        sp138 = temp_f16;
        var_s1 = 0;
        if (random_u32() & 1) {
            var_s1 = 0x80;
        }
        if (random_u32() & 1) {
            var_s0 = 0x40;
        } else {
            var_s0 = 0;
        }
        sp13C |= var_s0 | var_s1;
        temp_v0 = func_15130280(&spE4, 1, 0, 0xC, temp_s3, arg2);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0xA8, &spD8, 0xC);
        }
        var_s2 -= 1;
    } while (var_s2 > 0);
    sp48 = arg0;
    sp4C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp50 = 0.0f;
    sp58 = D_800A0AD4;
    temp_f12 = (random_float() * 3.0f) + 9.0f;
    sp54 = temp_f12;
    temp_f2_2 = (random_float(temp_f12) * 80.0f) + 100.0f;
    sp60 = temp_f2_2 / (temp_f12 * temp_f12);
    sp7F = (s8) (u32) temp_f2_2;
    sp81 = 0x79;
    sp6C = 0x4403;
    sp64 = 0x200005;
    sp68 = 0;
    sp70 = 0;
    sp74 = 0;
    sp7C = 0xFF;
    sp7D = 0xFF;
    sp7E = 0xDF;
    sp7B = 0xFF;
    sp78 = 0xFF;
    sp79 = 0xFF;
    sp7A = 0xFF;
    sp80 = 0xFF;
    sp5C = temp_f2_2;
    func_150D6C98((*(void **)&temp_f12), arg0, &sp94); // TODO: cast was '(void *)' in decompiler output, real type unknown
    (*(s32 *)((char *)&(spA0) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp82 = 1;
    sp84 = 0xFF;
    sp86 = 1;
    sp88 = 1.0f;
    var_s1_2 = 0;
    if (random_u32() & 1) {
        var_s1_2 = 0x40;
    }
    if (random_u32() & 1) {
        var_s0_2 = 0x80;
    } else {
        var_s0_2 = 0;
    }
    spBC = var_s0_2 | 0x4C000 | var_s1_2;
    spC4 = 6;
    spC5 = 6;
    spC6 = 0x1F;
    spC7 = -1;
    spC8 = -1;
    spC9 = 9;
    spC0 = 0;
    spCA = 0xFF;
    (*(s32 *)((char *)&(spAC) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp6E = 0x12C;
    sp90 = 0.0f;
    sp8C = 0.0f;
    spB8 = 0.0f;
    temp_v0_2 = func_15130280(&sp64, 1, 0, 0x1C, temp_s3, arg2);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0xA8, &sp48, 0x1C);
    }
}

void func_150D6C98(void * *arg0, void * *arg1) {
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) + 60.0f);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
}

s32 func_150D6CC4(void * *arg0, void * arg1) {
    f32 sp2C;
    void *sp1C;
    void * *temp_a3;
    void *temp_a0;
    void *temp_v0;

    f32 sp30;
    f32 sp34;
    temp_a3 = (*(s32 *)((char *)(arg0) + 0xA8));
    temp_v0 = (char *)(arg0) + 0xA8;
    if (((*(s32 *)((char *)(temp_a3) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_a3) + 0x3B)))) {
        return 0;
    }
    sp1C = temp_v0;
    func_150D6C98(temp_a3, (char *)(arg0) + 0x40);
    temp_a0 = (char *)(arg0) + 0x58;
    (*(s32 *)((char *)&(sp2C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x58));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a0) + 0x4));
    (*(s32 *)((char *)&(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a0) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x5C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5C)) + ((*(f32 *)((char *)(arg0) + 0x64)) * D_800BE9A4));
    func_15131958(temp_a0, (*(s32 *)((char *)(temp_v0) + 0x8)), arg0);
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) + ((sp2C * D_800BE9A4) + (((*(f32 *)((char *)(arg0) + 0x58)) - sp2C) * D_800BE9A8 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((sp30 * D_800BE9A4) + (((*(f32 *)((char *)(arg0) + 0x5C)) - sp30) * D_800BE9A8 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) + ((sp34 * D_800BE9A4) + (((*(f32 *)((char *)(arg0) + 0x60)) - sp34) * D_800BE9A8 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    return 1;
}

void func_150D6E60(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0xA8;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0xA8));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0xA8))) || ((*(u8 *)((char *)(((char *)(arg0) + 0xA8)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, temp_t6, arg0);
    }
}

s32 func_150D6F0C(void * *arg0, void * arg1) {
    void *sp18;
    void * *temp_a3;
    f32 temp_f12;
    f32 temp_f2;
    s32 var_v0;
    void *temp_v0;

    temp_a3 = (*(s32 *)((char *)(arg0) + 0xA8));
    temp_v0 = (char *)(arg0) + 0xA8;
    if (((*(s32 *)((char *)(temp_a3) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_a3) + 0x3B)))) {
        return 0;
    }
    sp18 = temp_v0;
    func_150D6C98(temp_a3, (char *)(arg0) + 0x40);
    temp_f2 = sqrtf((*(s32 *)((char *)(temp_v0) + 0x8))) * (*(s32 *)((char *)(temp_v0) + 0x10));
    (*(s32 *)((char *)(arg0) + 0x3C)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x38)) = temp_f2;
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x8));
    (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) (u32) ((*(s8 *)((char *)(temp_v0) + 0x14)) - ((*(s8 *)((char *)(temp_v0) + 0x18)) * temp_f12 * temp_f12));
    (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x8)) + D_800BE9A4);
    var_v0 = 1;
    if ((*(s32 *)((char *)(temp_v0) + 0xC)) < (*(s32 *)((char *)(temp_v0) + 0x8))) {
        var_v0 = 0;
    }
    return var_v0;
}

void func_150D7068(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0xA8;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0xA8));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0xA8))) || ((*(u8 *)((char *)(((char *)(arg0) + 0xA8)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, temp_t6, arg0);
    }
}
