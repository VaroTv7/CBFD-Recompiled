/**
 * Auto-decompiled from asm/E8C10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 random_u32();                             /* extern */
f32 random_float();                        /* extern */
s32 func_15130280();        /* extern */
void * func_1513264C();     /* extern */
s32 func_15132A4C();        /* extern */
void * func_15143134();                   /* extern */
void * func_15143794();                /* extern */
void * func_1514470C();                       /* extern */
void * func_15147DA0(); /* extern */
void * func_1514C470(); /* extern */
void * func_1516865C();              /* extern */
void * func_15168800();                         /* extern */
void * func_151D5334();     /* extern */
void * func_151DA6F8(); /* extern */
void * memcpy();                            /* extern */
extern u16 D_8009FE90;
extern f32 D_8009FE94;
extern f32 D_8009FE98;
extern f32 D_8009FE9C;
extern f32 D_8009FEA0;
extern f32 D_8009FEA4;
extern f32 D_8009FEA8;
extern f32 D_8009FEAC;
extern f32 D_8009FEB0;
extern f32 D_8009FEB4;
extern f32 D_8009FEB8;
extern f32 D_8009FEBC;
extern f32 D_8009FEC0;
extern f32 D_8009FEC4;
extern f32 D_8009FEC8;
extern f32 D_8009FECC;
extern f32 D_8009FED0;
extern f32 D_8009FED4;
extern f32 D_8009FED8;
extern f32 D_8009FEDC;
extern f32 D_8009FEE0;
extern f32 D_8009FEE4;
extern f32 D_8009FEE8;
extern f32 D_8009FEEC;
extern f32 D_8009FEF0;
extern f32 D_8009FEF4;
extern f32 D_8009FEF8;
extern f32 D_8009FEFC;
extern f32 D_8009FF00;
extern f32 D_8009FF04;
extern f32 D_8009FF08;
extern f32 D_8009FF0C;
extern f32 D_8009FF10;
extern f32 D_8009FF14;
extern f32 D_8009FF18;
extern f32 D_8009FF1C;
extern f32 D_8009FF20;
extern f32 D_8009FF24;
extern f32 D_8009FF28;
extern f32 D_8009FF2C;
extern f32 D_8009FF30;
extern f32 D_8009FF34;
extern f32 D_8009FF38;
extern s32 D_8009FF40;
extern s32 D_8009FF70;
extern s32 D_8009FFA0;
extern f32 D_8009FFD0;
extern f32 D_8009FFD4;
extern f32 D_8009FFD8;
extern f32 D_8009FFDC;
extern f32 D_8009FFE0;
extern f32 D_8009FFE4;

void func_150BB760(void *arg0) {
    s16 spF0;
    s16 spEE;
    u8 spEC;
    void *spE8;
    s8 spE6;
    s8 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s8 spDF;
    s8 spDE;
    s8 spDD;
    s8 spDC;
    s32 spD8;
    s8 spD4;
    s16 spD2;
    s16 spD0;
    s32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp68;
    f32 sp64;
    u8 sp63;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    u8 sp4B;
    f32 sp44;
    f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    u8 temp_a1;
    u8 temp_t8;
    u8 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x4)) != 0x20) {
        return;
    }
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0) && ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0)) {
        sp78 = (f32) (*(f32 *)((char *)(arg0) + 0xE4));
        sp74 = (f32) (*(f32 *)((char *)(arg0) + 0xE6));
        sp70 = func_151423D8(((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8) & 0xFF);
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x3C));
        temp_f6 = temp_f2 * func_151423D8((((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8) + 0x40) & 0xFF);
        sp68 = temp_f2 * sp70 * 0.5f;
        spD2 = 1;
        spCC = 0x29E9;
        spD4 = 0;
        spD8 = 0;
        spDC = 0xFF;
        spDD = 1;
        spDE = 0;
        spDF = 2;
        sp64 = temp_f6 * 0.5f;
        spE0 = 0;
        spE1 = 0;
        spE2 = 0;
        spE3 = 0;
        spE4 = 0;
        spE6 = 1;
        spE8 = arg0;
        sp98 = 1.0f;
        sp9C = 1.0f;
        spA0 = 1.0f;
        spC4 = 0.0f;
        spC8 = -1.0f;
        spEE = 0x20;
        spF0 = 7;
        spEC = (*(s32 *)((char *)(arg0) + 0x3B));
        temp_v0 = random_u32(0x3F800000, 0x3F000000);
        sp63 = temp_v0;
        sp5C = func_151423D8(temp_v0 & 0xFF);
        sp58 = func_151423D8((sp63 - 0x40) & 0xFF);
        temp_f2_2 = random_float() * sp78;
        sp50 = sp5C * temp_f2_2;
        sp4C = -sp58 * temp_f2_2;
        temp_a1 = ((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8) - (random_u32() & 0x3F);
        temp_t8 = temp_a1 - 0x20;
        sp4B = temp_t8;
        sp44 = func_151423D8(temp_t8 & 0xFF, temp_a1);
        sp40 = func_151423D8((sp4B - 0x40) & 0xFF, sp4B);
        temp_f2_3 = (random_float() * 5.0f) + 3.0f;
        temp_f10 = sp40 * temp_f2_3;
        sp38 = temp_f10;
        sp34 = sp44 * temp_f2_3;
        temp_f12 = (random_float() * D_8009FE94) + D_8009FE98;
        sp30 = temp_f12;
        temp_f16 = random_float(temp_f12) * D_8009FE9C;
        sp84 = temp_f12;
        temp_f2_4 = temp_f16 + D_8009FEA0;
        sp88 = temp_f2_4;
        sp7C = (temp_f12 + temp_f2_4) * 0.5f;
        sp8C = random_float(temp_f12) * 360.0f;
        sp90 = random_float() * 360.0f;
        sp94 = random_float() * 360.0f;
        spA4 = (*(s32 *)((char *)(arg0) + 0x14)) + sp50;
        spA8 = (random_float() * sp74) + (*(s32 *)((char *)(arg0) + 0x18)) + 4.0f;
        spB0 = temp_f10 + sp68;
        spAC = (*(s32 *)((char *)(arg0) + 0x1C)) + sp4C;
        temp_f10_2 = (random_float() * 5.0f) + 3.0f;
        spB8 = sp34 + sp64;
        spB4 = temp_f10_2;
        spBC = 25.0f - (random_float() * 50.0f);
        spC0 = 25.0f - (random_float() * 50.0f);
        spD0 = (random_u32() & 0x1F) + 0x3C;
        sp80 = (random_float() * D_8009FEA4) + 0.25f;
        func_15132A4C(&sp7C, 3, 0xFF, 0, 0xFF, 0);
    }
}

void func_150BBB5C(void *arg0) {
    s16 sp268;
    s16 sp266;
    s8 sp264;
    s32 sp260;
    s8 sp25E;
    s8 sp25C;
    s8 sp25B;
    s8 sp25A;
    s8 sp259;
    s8 sp258;
    s8 sp257;
    s8 sp256;
    s8 sp255;
    s8 sp254;
    s32 sp250;
    s8 sp24C;
    s16 sp24A;
    s16 sp248;
    s32 sp244;
    f32 sp240;
    f32 sp23C;
    f32 sp238;
    f32 sp234;
    f32 sp230;
    f32 sp22C;
    f32 sp228;
    f32 sp224;
    f32 sp220;
    f32 sp21C;
    f32 sp218;
    f32 sp214;
    f32 sp210;
    f32 sp20C;
    f32 sp208;
    f32 sp204;
    f32 sp200;
    f32 sp1FC;
    f32 sp1F8;
    f32 sp1F4;
    s8 sp1EA;
    s8 sp1E9;
    s8 sp1E8;
    s16 sp1E0;
    s16 sp1DE;
    s16 sp1DC;
    s16 sp1DA;
    s16 sp1D8;
    s16 sp1D6;
    s16 sp1D4;
    s16 sp1D2;
    s16 sp1D0;
    s32 sp1C8;
    void * sp148;
    f32 sp144;
    f32 sp140;
    f32 sp128;
    f32 sp124;
    f32 sp10C;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f20_7;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f26_3;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    s16 temp_s0_2;
    s16 temp_s1_2;
    s16 temp_t0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s8 var_s2_2;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_v0;
    u8 temp_v0_2;

    if ((*(s32 *)((char *)(arg0) + 0x4)) != 0x20) {
        return;
    }
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0)) {
        sp144 = (f32) (*(f32 *)((char *)(arg0) + 0xE4));
        sp140 = (f32) (*(f32 *)((char *)(arg0) + 0xE6));
        var_s1 = (random_u32() & 3) + 6;
        var_s2 = (random_u32() & 3) + 0xA;
        temp_f20 = func_151423D8(((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8) & 0xFF);
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x3C));
        var_v0 = 0xFF;
        temp_f4 = temp_f2 * func_151423D8((((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8) + 0x40) & 0xFF);
        sp128 = temp_f2 * temp_f20 * 0.5f;
        sp124 = temp_f4 * 0.5f;
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            var_v0 = (0xFF - (((u32) (*(u32 *)((char *)(arg0) + 0x184)) >> 5) << 6)) & 0xFF;
        }
        sp1D2 = 0x80;
        sp1D0 = 0;
        sp1D4 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14));
        sp1D6 = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x180)) + 60.0f);
        sp1DA = (s16) (s32) sp144;
        sp1DC = (s16) (s32) sp140;
        sp1D8 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x1C));
        sp1EA = -1;
        sp1E8 = 0x2E;
        sp1E0 = 0x34;
        sp1C8 = var_v0;
        sp1E9 = 0;
        sp1DE = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x180));
        func_1516865C(0x3F000000, &sp148, 0xFF, 0xFF, 0xFF, 0xFF);
        func_15168800(&sp148, 0xFF, 0);
        sp24A = 1;
        sp248 = 0x78;
        sp244 = 0x29E9;
        sp24C = 0;
        sp250 = 0;
        sp254 = 0xFF;
        sp255 = 1;
        sp256 = 0;
        sp257 = 2;
        sp258 = 0;
        sp259 = 0;
        sp25A = 0;
        sp25B = 0;
        sp25C = 0;
        sp25E = 0;
        sp260 = 0;
        sp264 = 0;
        sp266 = 0x20;
        sp268 = 7;
        sp1F8 = D_8009FEA8;
        sp210 = 1.0f;
        sp214 = 1.0f;
        sp218 = 1.0f;
        sp23C = 0.0f;
        sp240 = -1.5f;
        if (var_s1 > 0) {
            temp_f28 = D_8009FEAC;
            do {
                temp_v0 = random_u32();
                temp_f20_2 = func_151423D8(temp_v0 & 0xFF);
                temp_f22 = func_151423D8(((temp_v0 & 0xFF) - 0x40) & 0xFF);
                temp_f2_2 = random_float() * sp144;
                temp_f4_2 = -temp_f22 * temp_f2_2;
                sp10C = temp_f4_2;
                temp_v0_2 = random_u32();
                temp_f20_3 = func_151423D8(temp_v0_2 & 0xFF);
                temp_f22_2 = func_151423D8(((temp_v0_2 & 0xFF) - 0x40) & 0xFF);
                temp_f2_3 = (random_float() * 4.0f) + 2.0f;
                temp_f24 = temp_f22_2 * temp_f2_3;
                temp_f26 = temp_f20_3 * temp_f2_3;
                temp_f20_4 = (random_float() * temp_f28) + temp_f28;
                temp_f18 = random_float() * temp_f28;
                sp1FC = temp_f20_4;
                temp_f2_4 = temp_f18 + temp_f28;
                sp200 = temp_f2_4;
                sp1F4 = (temp_f20_4 + temp_f2_4) * 0.5f;
                sp204 = random_float() * 360.0f;
                sp208 = random_float() * 360.0f;
                sp20C = random_float() * 360.0f;
                sp21C = (*(s32 *)((char *)(arg0) + 0x14)) + (temp_f20_2 * temp_f2_2);
                sp220 = (random_float() * sp140) + (*(s32 *)((char *)(arg0) + 0x18)) + 5.0f;
                sp228 = sp128 + temp_f24;
                sp224 = (*(s32 *)((char *)(arg0) + 0x1C)) + temp_f4_2;
                temp_f6 = (random_float() * 7.0f) + 13.0f;
                sp230 = sp124 + temp_f26;
                sp22C = temp_f6;
                sp234 = 25.0f - (random_float() * 50.0f);
                sp238 = 25.0f - (random_float() * 50.0f);
                func_15132A4C(&sp1F4, 3, 0xFF, 0, 0xFF, 0);
                var_s1 -= 1;
            } while (var_s1 > 0);
        }
        if (var_s2 > 0) {
            do {
                temp_f24_2 = random_float() * sp144;
                temp_f26_2 = (random_float() * 7.0f) + 7.0f;
                temp_t0 = random_u32() & 0xFF;
                temp_f20_5 = func_151423D8(temp_t0 & 0xFF);
                temp_f22_3 = func_151423D8((temp_t0 - 0x40) & 0xFF);
                spE0 = (*(s32 *)((char *)(arg0) + 0x14)) + (temp_f20_5 * temp_f24_2);
                spE4 = (random_float() * sp140) + (*(s32 *)((char *)(arg0) + 0x18)) + 5.0f;
                spD4 = (temp_f22_3 * temp_f26_2) + sp128;
                spE8 = (*(s32 *)((char *)(arg0) + 0x1C)) - (temp_f22_3 * temp_f24_2);
                spD8 = (random_float() * 9.0f) + 15.0f;
                spDC = (temp_f20_5 * temp_f26_2) + sp124;
                temp_s0 = random_u32();
                temp_s1 = random_u32();
                temp_f20_6 = random_float();
                func_151DA6F8(&spE0, &spD4, 1.6f, (s16) ((temp_s0 & 7) + 0x19), (temp_s1 & 0x7F) + 0x80, (temp_f20_6 * D_8009FEB0 * sp144) + 13.0f, (random_u32() & 3) + 2, 0, 1.0f, 1.0f, 1, 1, 0, 0x10, 0xF, 0, 0xFF, 0);
                var_s2 -= 1;
            } while (var_s2 > 0);
        }
        sp24A = 0;
        sp248 = (random_u32() & 0xF) + 0x10;
        sp1F8 = D_8009FEB4;
        sp204 = (*(s32 *)((char *)(arg0) + 0xB8));
        sp208 = (*(s32 *)((char *)(arg0) + 0x40));
        sp244 = 0x39E8;
        sp210 = 1.0f;
        sp214 = 1.0f;
        sp218 = 1.0f;
        sp20C = (*(s32 *)((char *)(arg0) + 0xC4));
        sp23C = 0.0f;
        sp240 = D_8009FEB8;
        sp21C = (*(s32 *)((char *)(arg0) + 0x14));
        sp220 = (*(s32 *)((char *)(arg0) + 0x18));
        sp224 = (*(s32 *)((char *)(arg0) + 0x1C));
        var_s2_2 = 0;
        sp1F4 = (*(s32 *)((char *)(arg0) + 0x14C)) * 20.0f;
        sp24C = 0;
        sp250 = 0;
        sp254 = 0xFF;
        sp255 = 1;
        sp256 = 0;
        sp1FC = 2.0f * (*(s32 *)((char *)(arg0) + 0x14C));
        sp257 = 0;
        sp258 = 0;
        sp259 = 0;
        sp25A = 0;
        sp25B = 0;
        sp25C = 0;
        sp25E = 0;
        sp260 = 0;
        sp264 = 0;
        sp266 = 0x10;
        sp268 = 0xF;
        sp200 = sp1FC;
        do {
            temp_f20_7 = (random_float() * 30.0f * (*(s32 *)((char *)(arg0) + 0x150))) + 10.0f;
            temp_s0_2 = random_u32() & 0x7F;
            temp_s1_2 = -0x20 - (random_u32() & 0x1F);
            temp_f22_4 = func_151423D8(temp_s0_2 & 0xFF);
            temp_f24_3 = func_151423D8((temp_s0_2 - 0x40) & 0xFF);
            temp_f26_3 = func_151423D8(temp_s1_2 & 0xFF);
            temp_f2_5 = temp_f20_7 * temp_f26_3;
            sp22C = -temp_f20_7 * func_151423D8((temp_s1_2 - 0x40) & 0xFF);
            sp228 = (temp_f2_5 * temp_f24_3) + sp128;
            sp230 = (temp_f2_5 * temp_f22_4) + sp124;
            sp234 = 30.0f - (random_float() * 60.0f);
            sp238 = 30.0f - (random_float() * 60.0f);
            func_15132A4C(&sp1F4, 3, 0xFF, 0, 0xFF, 0);
            var_s2_2 += 1;
        } while (var_s2_2 < 2);
        func_10010F88(0xAA, 0x6590, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x14)), (s32) (*(s32 *)((char *)(arg0) + 0x18)), (s32) (*(s32 *)((char *)(arg0) + 0x1C)), 0xC8, 0x7D0);
    }
}

void func_150BC488(void *arg0) {
    f32 sp1BC;
    s32 sp1B0;
    s16 sp1A4;
    s16 sp1A2;
    s8 sp1A0;
    s32 sp19C;
    s8 sp19A;
    s8 sp198;
    s8 sp197;
    s8 sp196;
    s8 sp195;
    s8 sp194;
    s8 sp193;
    s8 sp192;
    s8 sp191;
    s8 sp190;
    s32 sp18C;
    s8 sp188;
    s16 sp186;
    s16 sp184;
    s32 sp180;
    f32 sp17C;
    f32 sp178;
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
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp118;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f30;
    s16 temp_s0_3;
    s16 temp_s1_2;
    s16 temp_t2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s8 var_s2_3;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s1;
    u8 temp_v0;
    u8 temp_v0_2;

    if ((*(s32 *)((char *)(arg0) + 0x4)) != 0x20) {
        return;
    }
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0)) {
        sp1BC = (f32) (*(f32 *)((char *)(arg0) + 0xE4));
        var_s1 = (random_u32() & 3) + 6;
        sp186 = 1;
        sp180 = 0x29E9;
        sp188 = 0;
        sp18C = 0;
        sp190 = 0xFF;
        sp191 = 1;
        sp192 = 0;
        sp193 = 2;
        sp194 = 0;
        sp195 = 0;
        sp196 = 0;
        sp197 = 0;
        sp198 = 0;
        sp19A = 0;
        sp19C = 0;
        sp1A0 = 0;
        sp1A2 = 0x20;
        sp1A4 = 7;
        var_s2 = 1;
        sp14C = 1.0f;
        sp150 = 1.0f;
        sp154 = 1.0f;
        sp134 = D_8009FEBC;
        sp178 = 0.0f;
        sp17C = -1.5f;
        if (var_s1 != 0) {
loop_6:
            temp_v0 = random_u32();
            temp_f20 = func_151423D8(temp_v0 & 0xFF);
            temp_f22 = func_151423D8(((temp_v0 & 0xFF) - 0x40) & 0xFF);
            temp_f2 = random_float() * sp1BC;
            sp118 = -temp_f22 * temp_f2;
            temp_v0_2 = random_u32();
            temp_f20_2 = func_151423D8(temp_v0_2 & 0xFF);
            temp_f22_2 = func_151423D8(((temp_v0_2 & 0xFF) - 0x40) & 0xFF);
            temp_f2_2 = (random_float() * 4.0f) + 4.0f;
            temp_f24 = temp_f22_2 * temp_f2_2;
            temp_f26 = temp_f20_2 * temp_f2_2;
            temp_f28 = (*(s32 *)((char *)(arg0) + 0x20)) * D_8009FEC0;
            temp_f20_3 = (random_float(4.0f) * D_8009FEC4) + D_8009FEC8;
            temp_f10 = random_float() * D_8009FECC;
            sp138 = temp_f20_3;
            temp_f2_3 = temp_f10 + D_8009FED0;
            sp13C = temp_f2_3;
            sp130 = (temp_f20_3 + temp_f2_3) * 0.5f;
            sp140 = random_float() * 360.0f;
            sp144 = random_float() * 360.0f;
            sp148 = random_float() * 360.0f;
            sp158 = (*(s32 *)((char *)(arg0) + 0x14)) + (temp_f20 * temp_f2);
            sp15C = (*(s32 *)((char *)(arg0) + 0x18));
            sp164 = temp_f24;
            sp168 = temp_f28;
            sp16C = temp_f26;
            sp160 = (*(s32 *)((char *)(arg0) + 0x1C)) + sp118;
            sp170 = 25.0f - (random_float() * 50.0f);
            sp174 = 25.0f - (random_float() * 50.0f);
            sp184 = (random_u32() & 0x3F) + 0x64;
            var_s1 -= 1;
            if (func_15132A4C(&sp130, 3, 0xFF, 0, 0xFF, 0) == 0) {
                var_s2 = 0;
            }
            if ((var_s1 != 0) && (var_s2 != 0)) {
                goto loop_6;
            }
        }
        var_s2_2 = (random_u32() & 3) + 2;
        if (var_s2_2 > 0) {
            temp_f30 = D_8009FED4;
            temp_f28_2 = D_8009FED8;
            do {
                temp_f20_4 = (random_float() * 7.0f) + 7.0f;
                temp_t2 = random_u32() & 0xFF;
                temp_f22_3 = func_151423D8(temp_t2 & 0xFF);
                temp_f24_2 = func_151423D8((temp_t2 - 0x40) & 0xFF);
                spE8 = (*(s32 *)((char *)(arg0) + 0x14));
                spEC = (random_float() * 5.0f) + (*(s32 *)((char *)(arg0) + 0x18));
                spDC = temp_f24_2 * temp_f20_4;
                spE0 = 0.0f;
                spE4 = temp_f22_3 * temp_f20_4;
                spF0 = (*(s32 *)((char *)(arg0) + 0x1C));
                temp_s0 = random_u32();
                temp_s1 = random_u32();
                temp_f20_5 = random_float();
                func_151DA6F8(&spE8, &spDC, temp_f28_2, (s16) ((temp_s0 & 7) + 0x19), (temp_s1 & 0x7F) + 0x80, (temp_f20_5 * temp_f30 * sp1BC) + 5.0f, (random_u32() & 1) + 2, 0, 1.0f, 1.0f, 1, 1, 0, 0x10, 0xF, 0, 0xFF, 0);
                var_s2_2 -= 1;
            } while (var_s2_2 != 0);
        }
        temp_s0_2 = random_u32();
        temp_v1 = (random_u32() & 1) + (temp_s0_2 & 1);
        sp1B0 = temp_v1;
        if (temp_v1 != 0) {
            sp186 = 0;
            sp184 = (random_u32() & 0xF) + 0x10;
            sp134 = D_8009FEDC;
            sp140 = (*(s32 *)((char *)(arg0) + 0xB8));
            sp144 = (*(s32 *)((char *)(arg0) + 0x40));
            sp180 = 0x39E8;
            sp14C = 1.0f;
            sp150 = 1.0f;
            sp154 = 1.0f;
            sp148 = (*(s32 *)((char *)(arg0) + 0xC4));
            sp178 = 0.0f;
            sp17C = D_8009FEE0;
            sp158 = (*(s32 *)((char *)(arg0) + 0x14));
            sp15C = (*(s32 *)((char *)(arg0) + 0x18));
            sp160 = (*(s32 *)((char *)(arg0) + 0x1C));
            var_s2_3 = 0;
            sp130 = (*(s32 *)((char *)(arg0) + 0x14C)) * 20.0f;
            sp188 = 0;
            sp18C = 0;
            sp190 = 0xFF;
            sp191 = 1;
            sp192 = 0;
            sp138 = 2.0f * (*(s32 *)((char *)(arg0) + 0x14C));
            sp193 = 0;
            sp194 = 0;
            sp195 = 0;
            sp196 = 0;
            sp197 = 0;
            sp198 = 0;
            sp19A = 0;
            sp19C = 0;
            sp1A0 = 0;
            sp1A2 = 0x10;
            sp1A4 = 0xF;
            sp13C = sp138;
            if (sp1B0 > 0) {
                do {
                    temp_f20_6 = (random_float() * 5.0f) + 8.0f;
                    temp_s0_3 = random_u32() & 0x7F;
                    temp_s1_2 = 0x20 - (random_u32() & 0x3F);
                    temp_f22_4 = func_151423D8(temp_s0_3 & 0xFF);
                    temp_f24_3 = func_151423D8((temp_s0_3 - 0x40) & 0xFF);
                    temp_f26_2 = func_151423D8(temp_s1_2 & 0xFF);
                    temp_f2_4 = temp_f20_6 * temp_f26_2;
                    temp_f18 = -temp_f20_6 * func_151423D8((temp_s1_2 - 0x40) & 0xFF);
                    sp164 = temp_f2_4 * temp_f24_3;
                    sp168 = temp_f18;
                    sp16C = temp_f2_4 * temp_f22_4;
                    sp170 = 30.0f - (random_float() * 60.0f);
                    sp174 = 30.0f - (random_float() * 60.0f);
                    func_15132A4C(&sp130, 3, 0xFF, 0, 0xFF, 0);
                    var_s2_3 += 1;
                } while (var_s2_3 < sp1B0);
            }
        }
    }
}

void func_150BCBBC(void *arg0) {
    f32 sp12C;
    f32 sp128;
    s16 sp118;
    s16 sp116;
    s8 sp114;
    s32 sp110;
    s8 sp10E;
    s8 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s8 sp107;
    s8 sp106;
    s8 sp105;
    s8 sp104;
    s32 sp100;
    s8 spFC;
    s16 spFA;
    s16 spF8;
    s32 spF4;
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
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp90;
    f32 sp8C;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s4;
    u8 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x4)) != 0x20) {
        return;
    }
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x0)) != 0)) {
        sp12C = (f32) (*(f32 *)((char *)(arg0) + 0xE4));
        sp128 = (f32) (*(f32 *)((char *)(arg0) + 0xE6));
        var_s2 = random_u32() & 1;
        spFA = 1;
        spF8 = 0x96;
        spF4 = 0x29E9;
        spFC = 0;
        sp100 = 0;
        sp104 = 0xFF;
        sp105 = 1;
        sp106 = 0;
        sp107 = 2;
        sp108 = 0;
        sp109 = 0;
        sp10A = 0;
        sp10B = 0;
        sp10C = 0;
        sp10E = 0;
        sp110 = 0;
        sp114 = 0;
        sp116 = 0x20;
        sp118 = 7;
        var_s4 = 1;
        spC0 = 1.0f;
        spC4 = 1.0f;
        spC8 = 1.0f;
        spA8 = D_8009FEE4;
        spEC = 0.0f;
        spF0 = -1.0f;
        if (var_s2 != 0) {
loop_6:
            temp_v0 = random_u32();
            temp_f20 = func_151423D8(temp_v0 & 0xFF);
            temp_f22 = func_151423D8(((temp_v0 & 0xFF) - 0x40) & 0xFF);
            temp_f2 = random_float() * sp12C;
            sp90 = temp_f20 * temp_f2;
            sp8C = -temp_f22 * temp_f2;
            temp_f26 = (random_float() * D_8009FEE8) + D_8009FEEC;
            temp_f28 = (random_float() * D_8009FEF0) + D_8009FEF4;
            if (random_u32() & 1) {
                var_s0 = ((8 - (random_u32() & 0xF)) + ((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8)) & 0xFF;
            } else {
                var_s0 = (((8 - (random_u32() & 0xF)) + ((s32) (*(s32 *)((char *)(arg0) + 0x76)) >> 8)) - 0x80) & 0xFF;
            }
            temp_f20_2 = func_151423D8(var_s0 & 0xFF);
            temp_f22_2 = func_151423D8((var_s0 - 0x40) & 0xFF);
            temp_f4 = random_float() * 5.0f;
            spAC = temp_f26;
            spB0 = temp_f28;
            temp_f2_2 = temp_f4 + 3.0f;
            spA4 = (temp_f26 + temp_f28) * 0.5f;
            spB4 = random_float() * 360.0f;
            spB8 = random_float() * 360.0f;
            spBC = random_float() * 360.0f;
            spCC = (*(s32 *)((char *)(arg0) + 0x14)) + sp90;
            spD0 = (random_float() * sp128) + (*(s32 *)((char *)(arg0) + 0x18)) + 4.0f;
            spD8 = temp_f22_2 * temp_f2_2;
            spD4 = (*(s32 *)((char *)(arg0) + 0x1C)) + sp8C;
            temp_f4_2 = random_float() * 5.0f;
            spE0 = temp_f20_2 * temp_f2_2;
            spDC = temp_f4_2 + 3.0f;
            spE4 = 25.0f - (random_float() * 50.0f);
            spE8 = 25.0f - (random_float() * 50.0f);
            var_s2 -= 1;
            if (func_15132A4C(&spA4, 3, 0xFF, 0, 0xFF, 0) == 0) {
                var_s4 = 0;
            }
            if ((var_s2 != 0) && (var_s4 != 0)) {
                goto loop_6;
            }
        }
    }
}

s32 func_150BCFB8(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x48));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (((*(f32 *)((char *)(arg0) + 0x10)) * D_8009FEF8) + arg4);
    if (temp_f0 > -2.0f) {
        (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) & ~0x6F);
        (*(s32 *)((char *)(arg0) + 0x48)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
        return 1;
    }
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f2);
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (-temp_f0 * temp_f2);
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * temp_f2);
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * temp_f2);
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * temp_f2);
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * temp_f2);
    return 1;
}

void func_150BD070(s32 arg0, s32 arg1) {
    s32 unksp185;
    s32 sp18C;
    void *sp188;
    u16 sp184;
    s32 sp17C;
    s16 sp178;
    s16 sp176;
    s8 sp174;
    s32 sp170;
    s8 sp16E;
    s8 sp16D;
    s8 sp16C;
    s8 sp16B;
    s8 sp16A;
    s8 sp169;
    s8 sp168;
    s8 sp167;
    s8 sp166;
    s8 sp165;
    s8 sp164;
    s32 sp160;
    s8 sp15C;
    s16 sp15A;
    s16 sp158;
    s32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    void * sp138;
    void * sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 spFC;
    s16 spF8;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s8 spF3;
    s8 spF2;
    s8 spF1;
    s8 spF0;
    s32 spEC;
    s32 spE8;
    f32 spE4;
    void * spD8;
    void * spCC;
    void * spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    s32 sp9C;
    s16 sp9A;
    s16 sp98;
    s32 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_t1;
    s16 temp_v1;
    s16 var_s2;
    s16 var_s2_2;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s1;
    u8 temp_s1_2;

    temp_s4 = arg0 & 0xFF;
    sp184 = D_8009FE90;
    sp188 = ((u8) sp184 * 0x34) + D_800D3098;
    sp18C = (unksp185 * 0x34) + D_800D3098;
    temp_v1 = (random_u32() % 9U) + 0xD;
    var_s2 = temp_v1;
    sp154 = 0x12DE8;
    sp15A = 1;
    sp15C = 0;
    sp160 = 0;
    sp164 = 0xFF;
    sp165 = 8;
    sp166 = 0;
    sp167 = 0;
    sp168 = 0;
    sp169 = 0;
    sp16A = 0;
    sp16B = 0;
    sp16C = 2;
    sp16D = -1;
    sp16E = 2;
    sp170 = 0;
    sp174 = 0;
    sp176 = 0xC;
    sp178 = 0x15;
    sp17C = 0;
    sp104 = 1.0f;
    sp108 = 1.0f;
    sp120 = 1.0f;
    sp124 = 1.0f;
    sp128 = 1.0f;
    sp148 = 0.0f;
    if (temp_v1 > 0) {
        temp_f24 = D_8009FEFC;
        temp_f22 = D_8009FF00;
        do {
            sp158 = (random_u32() % 26U) + 0x28;
            temp_f2 = (random_float() * D_8009FF04) + D_8009FF08;
            sp10C = temp_f2;
            sp110 = temp_f2;
            sp114 = random_float() * 360.0f;
            sp118 = random_float() * 360.0f;
            sp11C = random_float() * 360.0f;
            sp144 = (random_float() * temp_f22) + temp_f24;
            sp14C = (random_float() * temp_f22) + temp_f24;
            func_1514470C((&sp188)[random_u32() & 1], &sp12C);
            temp_s1 = random_u32();
            temp_s0 = random_u32();
            func_15143794((s16) ((temp_s1 % 31U) - 0x54), (s16) ((temp_s0 % 26U) - 0x2D), (random_float() * D_8009FF0C) + D_8009FF10, &sp138);
            sp150 = (random_float() * D_8009FF14) + D_8009FF18;
            func_1513264C(&sp104, 3, 0xFF, 0, 0, temp_s4, arg1);
            var_s2 -= 1;
        } while (var_s2 > 0);
    }
    var_s2_2 = (random_u32() % 9U) + 0x11;
    sp90 = 0x200005;
    sp98 = 0x5103;
    spA5 = 0xAA;
    sp94 = 0;
    sp9C = 0;
    spA0 = 0;
    spA4 = 0xD4;
    spA6 = 8;
    spA7 = 0xFF;
    spA8 = 0x15;
    spA9 = 4;
    spAA = 0;
    spAC = 0xFF;
    spAD = 0x6C;
    spAE = 0x23;
    spB0 = 7;
    spB4 = D_8009FF1C;
    (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    var_s1 = 0;
    if (random_u32() & 1) {
        var_s1 = 0x40;
    }
    if (random_u32() & 1) {
        var_s0 = 0x80;
    } else {
        var_s0 = 0;
    }
    spE8 = var_s0 | 7 | var_s1 | 0xCE00 | 0x20000 | 0x800000;
    spEC = 0;
    spF0 = 8;
    spF1 = 6;
    spF2 = 0x10;
    spF3 = -1;
    spF4 = -1;
    spF5 = 0;
    spF6 = 0xFF;
    spF8 = 0;
    spFC = 0.0f;
    sp8C = D_8009FF20;
    if (var_s2_2 > 0) {
        temp_f24_2 = D_8009FF24;
        temp_f22_2 = D_8009FF28;
        temp_f20 = D_8009FF2C;
        do {
            temp_t1 = (random_u32() % 31U) + 0x1E;
            spB2 = temp_t1;
            sp9A = temp_t1;
            spAB = (random_u32() % 101U) + 0x9B;
            temp_f2_2 = (random_float() * temp_f20) + temp_f22_2;
            spB8 = temp_f2_2;
            spBC = temp_f2_2;
            func_1514470C((&sp188)[random_u32() & 1], &spC0);
            temp_s1_2 = random_u32();
            temp_s0_2 = random_u32();
            func_15143794((s16) ((temp_s1_2 % 41U) - 0x59), (s16) ((temp_s0_2 % 51U) - 0x40), (random_float() * temp_f24_2) + D_8009FF30, &spD8);
            spE4 = (random_float() * D_8009FF34) + D_8009FF38;
            temp_v0 = func_15130280(&sp90, 1, 0, 4, temp_s4, arg1);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 4);
            }
            var_s2_2 -= 1;
        } while (var_s2_2 > 0);
    }
    sp7C = (f32) (*(f32 *)((char *)(sp188) + 0x0));
    sp80 = (f32) (*(f32 *)((char *)(sp188) + 0x2));
    sp84 = (f32) (*(f32 *)((char *)(sp188) + 0x4));
    func_151D5334(&sp7C, 0, 0x447A0000, 0x3A83126F, 5, temp_s4, arg1);
    sp70 = (f32) (*(f32 *)((char *)(sp188) + 0x0));
    sp74 = (f32) (*(f32 *)((char *)(sp188) + 0x2));
    sp78 = (f32) (*(f32 *)((char *)(sp188) + 0x4));
    func_151D5404(&sp70, 0x43FD0000, 0x447D4000, 0x3A8163D3, 0xF, 0x14, temp_s4, arg1);
}

void func_150BD740(void *arg0, s32 arg1, void * arg2) {
    s32 sp108;
    s32 spD8;
    s32 spA8;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    void * *var_s1;
    void * *var_s3;
    void * *var_s5;
    s32 *var_s0;
    s32 *var_s2;
    s32 *var_s4;

    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    f32 sp12C;
    f32 sp130;
    f32 sp134;
    f32 spCC;
    f32 spD0;
    f32 spD4;
    f32 sp10C;
    f32 sp110;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 sp100;
    f32 sp104;
    if (arg0 != NULL) {
        var_s1 = &D_8009FF40;
        var_s2 = &sp108;
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            var_s5 = &D_8009FFA0;
            var_s3 = &D_8009FF70;
            var_s4 = &spD8;
            var_s0 = &spA8;
            do {
                func_15143134(var_s1, var_s2, (*(s32 *)((char *)(arg0) + 0x1D4)));
                func_15143134(var_s3, var_s4, (*(s32 *)((char *)(arg0) + 0x1D4)));
                func_15143134(var_s5, var_s0, (*(s32 *)((char *)(arg0) + 0x1D4)));
                var_s0 += 0xC;
                var_s1 = (char *)(var_s1) + 0xC;
                var_s2 += 0xC;
                var_s3 = (char *)(var_s3) + 0xC;
                var_s4 += 0xC;
                var_s5 = (char *)(var_s5) + 0xC;
            } while ((char *)(var_s0) != (char *)(&spD8));
            sp8C = spC0 - spF0;
            sp90 = spC4 - spF4;
            sp94 = spC8 - spF8;
            func_1514C470(sp120, sp124, sp128, sp12C, sp130, sp134, (random_float() * 6.0f) + 14.0f, 0xD, 0, 0.0f, &sp8C, (s32) arg1);
            sp98 = spCC - spFC;
            sp9C = spD0 - sp100;
            spA0 = spD4 - sp104;
            func_1514C470(sp12C, sp130, sp134, sp108, sp10C, sp110, (random_float() * 6.0f) + 14.0f, 0xD, 0, 0.0f, &sp98, (s32) arg1);
        }
    }
}

s32 func_150BD954(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, void *arg13, u8 arg14) {
    s8 spA5;
    s32 spA0;
    s16 sp9E;
    s16 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s8 sp69;
    s8 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    f32 temp_f2;

    sp50 = 1;
    sp54 = 0x160600;
    sp4C = 0;
    sp58 = 3;
    sp5C = 0x10;
    sp60 = 0x80;
    sp64 = 0x20;
    sp68 = 0;
    sp69 = 9;
    spA0 = 1;
    sp9E = 1;
    sp90 = arg2;
    sp94 = arg3;
    sp84 = arg3;
    sp89 = 9;
    sp8A = 0xFF;
    sp88 = 8;
    sp98 = arg4;
    temp_f2 = ((random_float(arg3, arg2) * 127.0f) + 85.0f) * D_8009FFD0;
    sp74 = (*(s32 *)((char *)(arg13) + 0x0)) * temp_f2;
    sp78 = (*(s32 *)((char *)(arg13) + 0x4)) * temp_f2;
    sp7C = (*(s32 *)((char *)(arg13) + 0x8)) * temp_f2;
    sp8B = (random_u32() % 86U) + 0xB4;
    spA5 = (random_u32() & 3) + 3;
    sp9C = (random_u32() % 31U) + 0x27;
    sp70 = ((random_float() * D_8009FFD4) + D_8009FFD8) * D_8009FFDC;
    sp80 = ((random_float() * 356.0f) + D_8009FFE0) * D_8009FFE4;
    func_15147DA0(&sp90, &sp70, 0, 1, 0xB, 0, 0, 0, 0, 0, 0, &sp4C, 0, (s32) arg14, 1);
    return 1;
}

s32 func_150BDB3C(void *arg0) {
    s32 temp_t6;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) * 8;
    if (temp_t6 < (s32) (*(s32 *)((char *)(temp_v0) + 0x1B))) {
        (*(u8 *)((char *)(temp_v0) + 0x1B)) = (u8) temp_t6;
    }
    return 1;
}
