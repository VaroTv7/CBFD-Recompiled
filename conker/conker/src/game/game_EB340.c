/**
 * Auto-decompiled from asm/EB340.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1504715C();                       /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_1511650C();                   /* extern */
void * func_1515080C(); /* extern */
void * func_15152190(); /* extern */
void * func_15153F18();         /* extern */
s32 func_1515548C();   /* extern */
void * func_1515C244();             /* extern */
void * memcpy();                          /* extern */
extern f32 D_800A0000;
extern f32 D_800A0004;
extern s32 D_800A0010;
extern s32 D_800A0038;
extern s32 D_800A0060;
extern s32 D_800A0064;
extern f32 D_800A0068;
extern f32 D_800A006C;
extern f32 D_800A0070;
extern f32 D_800A0074;
extern f32 D_800A0078;
extern f32 D_800A007C;
extern f32 D_800A0080;
extern f32 D_800A0084;
extern f32 D_800A0088;
extern f32 D_800A008C;
extern f32 D_800A0090;
extern f32 D_800A0094;
extern f32 D_800A0098;
extern f32 D_800A009C;
extern f32 D_800A00A0;

void func_150BDE90(void *arg0, s32 arg1, s32 arg2) {
    s16 sp3C;
    void *sp38;
    s32 temp_v0;

    sp3C = 0;
    sp38 = arg0;
    temp_v0 = func_15149130(0x12C, -1, 0x4F, -1, 0, 0x3C, 8, (s32) arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 8);
    }
}

void func_150BDF0C(void *arg0) {
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    u8 spD8;
    s8 spD5;
    s8 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s8 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp48;
    s8 sp45;
    s8 sp44;
    void *sp38;
    void *sp34;
    f32 temp_f6;
    s32 temp_v0;

    (*(s16 *)((char *)(arg0) + 0x2C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x2C)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 0) {
        temp_f6 = random_float() * 270.0f;
        sp98 = -120.0f;
        sp94 = temp_f6 + -135.0f;
        sp9C = (random_float() * 10.0f) + 3.0f;
        spA0 = (random_float() * 17.0f) + 9.0f;
        spA4 = 0xAB;
        spA6 = 0x3E8;
        spA8 = 0x31;
        spAA = 1;
        spAC = 0xFF;
        spAE = 7;
        spAF = 0xFF;
        spB0 = 0xFF;
        spB1 = 0xFF;
        spB2 = (random_u32() % 156U) + 0x64;
        spB3 = 0xFF;
        spB4 = 0xFF;
        spB5 = 0xFF;
        spB6 = 0xFF;
        spB7 = 0xFF;
        spB8 = 0;
        spBC = 0x200004;
        spC0 = 0x1F0601;
        spC4 = 3;
        spC8 = 0x22;
        spCC = 0x80;
        spD0 = 0x20;
        spD4 = 0;
        spD5 = 7;
        spDC = 1.0f;
        spE0 = 1.0f;
        spD8 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x23D));
        spE4 = 0.0f;
        spE8 = 0.0f;
        sp45 = 0;
        sp44 = 0;
        sp34 = (char *)(arg0) + 0x28;
        sp38 = (*(s32 *)((char *)(arg0) + 0x28));
        sp48 = (random_float() * D_800A0000) + D_800A0004;
        temp_v0 = func_1515548C(&sp94, 0xA, 0, 0, 0x58, (s32) (*(s32 *)((char *)(arg0) + 0xC)), 0);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x70, &sp38, 0x58);
        }
        (*(s16 *)((char *)(sp34) + 0x4)) = (s16) ((random_u32() % 151U) + 0x19);
    }
}

void func_150BE150(void *arg0, void **arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x21) {
        if ((char *)(*(s32 *)((char *)(arg0) + 0x28)) == (char *)(*arg1)) {
            func_1516972C(temp_t6);
        }
    } else if ((temp_t6 == 0) && ((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)((*arg1)) + 0x318)))) {
        func_1516972C(temp_t6);
    }
}

s32 func_150BE1C4(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + ((*(f32 *)((char *)(arg0) + 0x80)) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x14)) > 120.0f) {
        return 0;
    }
    return 1;
}

void func_150BE210(void *arg0) {
    u8 temp_t2;

    if (((*(s32 *)((char *)(arg0) + 0x73)) & 3) != 3) {
        func_1511650C(arg0, 1, 0x62C, 0x43FA0000);
        if ((*(s32 *)((char *)(arg0) + 0x4F)) & 4) {
            (*(f32 *)((char *)(arg0) + 0x84)) = (f32) ((*(f32 *)((char *)(arg0) + 0x84)) + (*(f32 *)((char *)(arg0) + 0x64)));
        } else if ((*(s32 *)((char *)(arg0) + 0x84)) > 270.0f) {
            (*(s32 *)((char *)(arg0) + 0x84)) = 270.0f;
        }
        if ((*(s32 *)((char *)(arg0) + 0x84)) > 360.0f) {
            temp_t2 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
            (*(s32 *)((char *)(arg0) + 0x73)) = temp_t2;
            (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t2 | 3);
            (*(s32 *)((char *)(arg0) + 0x64)) = 0.0f;
            func_100111C8((*(s32 *)((char *)(arg0) + 0x74)));
            (*(s32 *)((char *)(arg0) + 0x74)) = 0U;
        }
    }
}

void func_150BE2E8(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 var_f22;

    temp_f12 = (f32) (*(f32 *)((char *)(arg0) + 0x80));
    temp_f2 = (f32) (*(f32 *)((char *)(arg0) + 0x7E));
    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x7C));
    temp_f20 = (f32) (*(f32 *)((char *)(arg0) + 0x3C)) * 0.000061035156f;
    temp_f20_2 = temp_f20 - (temp_f20 * D_800A0068);
    var_f22 = ((f32) (*(f32 *)((char *)(arg0) + 0x3E)) * 0.000061035156f) + (temp_f20_2 * (f32) D_800BE9E4);
    (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(arg0) + 0x82)) - temp_f0) * var_f22) + temp_f0);
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(arg0) + 0x84)) - temp_f2) * var_f22) + temp_f2);
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(arg0) + 0x86)) - temp_f12) * var_f22) + temp_f12);
    if (var_f22 > 1.0f) {
        var_f22 = 1.0f;
    }
    (*(s16 *)((char *)(arg0) + 0x3C)) = (s16) (s32) (temp_f20_2 * 16384.0f);
    (*(s16 *)((char *)(arg0) + 0x3E)) = (s16) (s32) (var_f22 * 16384.0f);
}

void *func_150BE438(void *arg0, s32 arg1) {
    void *temp_v1;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0x68;
    temp_v1 = (arg1 * 0x32C) + &gObjects;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0xE;
    (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (*(s16 *)((char *)(temp_v1) + 0x2E8));
    (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v1) + 0x2E4));
    return (char *)(arg0) + 8;
}

void func_150BE494(void *arg0, s32 arg1, s32 arg2) {
    void * sp154;
    void * sp150;
    void * sp14C;
    f32 sp148;
    void * sp124;
    s8 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    s16 sp10E;
    s16 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    s16 spFA;
    s16 spF8;
    s16 spF6;
    s16 spF4;
    void * spE8;
    s32 spE4;
    s32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    s16 spD2;
    s16 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    void * spAC;
    s32 spA8;
    s32 spA4;
    s32 spA0;
    s16 sp9E;
    s16 sp9C;
    f32 sp98;
    s8 sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    s16 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    void * sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 temp_s1;

    temp_s1 = arg1 & 0xFF;
    if (arg0 != NULL) {
        sp148 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        func_1515C244(arg0, &sp154, &sp150, &sp14C);
        func_1504715C(&sp124, arg0);
        spE0 = 0xA;
        spE4 = 0;
        (*(s32 *)((char *)&(spE8) + 0x0)) = (s32) (*(s32 *)((char *)&(sp154) + 0x0));
        (*(s32 *)((char *)&(spE8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp154) + 0x4));
        (*(s32 *)((char *)&(spE8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp154) + 0x8));
        spFC = 13.0f;
        sp100 = 9.0f;
        sp104 = D_800A006C;
        spF4 = 0;
        spF6 = 0xFF;
        spF8 = -0x40;
        spFA = 0x32;
        sp10C = 0x4B;
        sp10E = 0x28;
        sp120 = 0xB;
        sp114 = 0.0f;
        sp108 = D_800A0070;
        sp118 = D_800A0074;
        sp11C = 1.0f;
        sp110 = sp148;
        func_1515080C(&spE0, &D_800A0010, &D_800A0038, 0xA, 0, 0, 0, 1, -1, &sp124, 55.0f, 0, 0, temp_s1, arg2);
        spA4 = 0x11;
        spA8 = 9;
        (*(s32 *)((char *)&(spAC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp154) + 0x0));
        (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp154) + 0x4));
        (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp154) + 0x8));
        spC0 = 14.0f;
        spC4 = 11.0f;
        spB8 = 0;
        spBA = 0xFF;
        spBC = -0x3F;
        spBE = 0x4B;
        spD0 = 0x28;
        spD2 = 0x14;
        spC8 = D_800A0078;
        spCC = D_800A007C;
        spD4 = D_800A0080;
        spD8 = D_800A0084;
        spDC = D_800A0088;
        func_15152190(&spA4, &D_800A0060, &D_800A0064, 1, 10.0f, 0, temp_s1, arg2);
        (*(s32 *)((char *)&(sp60) + 0x0)) = (s32) (*(s32 *)((char *)&(sp154) + 0x0));
        (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)&(sp154) + 0x4));
        (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)&(sp154) + 0x8));
        sp6C = D_800A008C;
        sp84 = 4;
        sp86 = 3;
        sp5A = 0xFF;
        sp58 = 0;
        sp5C = -0x2B;
        sp5E = 0x1A;
        sp88 = 3;
        sp8A = 3;
        sp8C = 0x1E;
        sp8E = 0x14;
        sp90 = 0x9B;
        sp92 = 0x64;
        sp9C = 0x10;
        sp9E = 0xF;
        spA0 = 0;
        sp94 = 0;
        sp70 = D_800A0090;
        sp74 = D_800A0094;
        sp78 = D_800A0098;
        sp7C = D_800A009C;
        sp80 = D_800A00A0;
        sp98 = 0.5f;
        func_15153F18(&sp58, &sp60, &sp124, temp_s1 & 0xFF, arg2);
        sp94 = 2;
        func_15153F18(&sp58, &sp60, &sp124, temp_s1 & 0xFF, arg2);
        sp94 = 0xA;
        func_15153F18(&sp58, &sp60, &sp124, temp_s1 & 0xFF, arg2);
    }
}
