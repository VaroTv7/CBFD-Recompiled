/**
 * Auto-decompiled from asm/183640.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1503F4B0();                   /* extern */
void * func_1503F5B8();    /* extern */
void * func_1503F62C(); /* extern */
void * func_1503F7B8();                               /* extern */
u32 random_u32();                            /* extern */
f32 random_float();                                /* extern */
void * func_15130374();             /* extern */
s32 func_1513F4E4();                   /* extern */
s32 func_15142B7C();                 /* extern */
s32 func_15142C10();   /* extern */
s32 func_15142CF0(); /* extern */
void *func_15142FBC();           /* extern */
void * func_151441A4(); /* extern */
void * func_151442FC(); /* extern */
void *func_151462C8(); /* extern */
void * func_151539B4();                         /* extern */
s32 func_1515D440();                                /* extern */
s32 func_1515D480();                             /* extern */
void * func_151602C0(); /* extern */
void *func_15167A68();      /* extern */
void * func_1518CA04();                               /* extern */
void * func_151D5D60();        /* extern */
void * func_151D5E30();                       /* extern */
void * memcpy();                             /* extern */
void func_15156D24();
void func_15157DEC();         /* static */
extern s32 D_80083740;
extern s32 D_800838C0;
extern s32 D_80083A40;
extern s32 D_80083BC0;
extern s32 D_80089470;
extern s32 D_8008AD90;
extern s32 D_8008ADA0;
extern s32 D_8008ADBC;
extern s32 D_8008ADCC;
extern s32 D_800A4AC8;
extern f32 D_800A6040;
extern f32 D_800A6044;
extern f32 D_800A6048;
extern f32 D_800A604C;
extern f32 D_800A6050;
extern s32 D_800A6060;
extern s32 D_800DCA30;
void * func_15156190();

void *func_15156190(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp44;
    void * sp30;
    void * var_a0;
    s32 temp_t6;
    void *temp_v0;

    temp_t6 = arg1 & 0xFF;
    if (temp_t6 != 0) {
        var_a0 = 0x53;
        if (temp_t6 != 1) {
            var_a0 = 0x2C;
        }
    } else {
        var_a0 = 0x2C;
    }
    temp_v0 = func_15167A68(var_a0, arg4, arg2 + 0x98, 1, (s32) arg3, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x5E)) = 0;
    (*(u8 *)((char *)(temp_v0) + 0x64)) = (u8) (*(u8 *)((char *)(arg0) + 0x24));
    (*(u8 *)((char *)(temp_v0) + 0x65)) = (u8) (*(u8 *)((char *)(arg0) + 0x25));
    (*(u8 *)((char *)(temp_v0) + 0x66)) = (u8) (*(u8 *)((char *)(arg0) + 0x26));
    (*(s32 *)((char *)(temp_v0) + 0x60)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x62)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x6E)) = 0;
    (*(u8 *)((char *)(temp_v0) + 0x67)) = (u8) (*(u8 *)((char *)(arg0) + 0x27));
    (*(u8 *)((char *)(temp_v0) + 0x74)) = (u8) (*(u8 *)((char *)(arg0) + 0x20));
    (*(u8 *)((char *)(temp_v0) + 0x75)) = (u8) (*(u8 *)((char *)(arg0) + 0x21));
    (*(u8 *)((char *)(temp_v0) + 0x76)) = (u8) (*(u8 *)((char *)(arg0) + 0x22));
    (*(s32 *)((char *)(temp_v0) + 0x7E)) = 0;
    (*(u8 *)((char *)(temp_v0) + 0x77)) = (u8) (*(u8 *)((char *)(arg0) + 0x23));
    (*(u8 *)((char *)(temp_v0) + 0x84)) = (u8) (*(u8 *)((char *)(arg0) + 0x20));
    (*(u8 *)((char *)(temp_v0) + 0x85)) = (u8) (*(u8 *)((char *)(arg0) + 0x21));
    (*(u8 *)((char *)(temp_v0) + 0x86)) = (u8) (*(u8 *)((char *)(arg0) + 0x22));
    (*(u8 *)((char *)(temp_v0) + 0x87)) = (u8) (*(u8 *)((char *)(arg0) + 0x23));
    (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)(temp_v0) + 0x28)) = (s32) (*(s32 *)((char *)&(sp30) + 0x0));
    (*(s32 *)((char *)(temp_v0) + 0x2C)) = (s32) (*(s32 *)((char *)&(sp30) + 0x4));
    (*(s32 *)((char *)(temp_v0) + 0x30)) = (s32) (*(s32 *)((char *)&(sp30) + 0x8));
    (*(s32 *)((char *)(temp_v0) + 0x10)) = (s32) (*(s32 *)((char *)&(sp30) + 0x0));
    (*(s32 *)((char *)(temp_v0) + 0x14)) = (s32) (*(s32 *)((char *)&(sp30) + 0x4));
    (*(s32 *)((char *)(temp_v0) + 0x18)) = (s32) (*(s32 *)((char *)&(sp30) + 0x8));
    (*(f32 *)((char *)(temp_v0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC)) * (*(f32 *)((char *)(arg0) + 0x18)));
    (*(f32 *)((char *)(temp_v0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) * (*(f32 *)((char *)(arg0) + 0x18)));
    (*(f32 *)((char *)(temp_v0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) * (*(f32 *)((char *)(arg0) + 0x18)));
    (*(f32 *)((char *)(temp_v0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC)) * (*(f32 *)((char *)(arg0) + 0x1C)));
    (*(f32 *)((char *)(temp_v0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) * (*(f32 *)((char *)(arg0) + 0x1C)));
    (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) * (*(f32 *)((char *)(arg0) + 0x1C)));
    (*(u8 *)((char *)(temp_v0) + 0x40)) = (u8) (*(u8 *)((char *)(arg0) + 0x28));
    (*(s16 *)((char *)(temp_v0) + 0x42)) = (s16) (*(s16 *)((char *)(arg0) + 0x2A));
    (*(u16 *)((char *)(temp_v0) + 0x44)) = (u16) (*(u16 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(temp_v0) + 0x48)) = (f32) (*(f32 *)((char *)(arg0) + 0x30));
    (*(u8 *)((char *)(temp_v0) + 0x4C)) = (u8) (*(u8 *)((char *)(arg0) + 0x34));
    (*(s16 *)((char *)(temp_v0) + 0x4E)) = (s16) (*(s16 *)((char *)(arg0) + 0x36));
    (*(s16 *)((char *)(temp_v0) + 0x50)) = (s16) (*(s16 *)((char *)(arg0) + 0x38));
    sp44 = temp_v0;
    bzero((char *)(temp_v0) + 0x88, 0x10);
    return sp44;
}

void func_15156388(s32 arg1) {
    func_15156190((void *) (arg1 & 0xFF), 0xFF, 0, 0, 0);
}

void func_151563B8(void *arg0) {
    s16 temp_lo;
    s16 temp_v1;
    void *var_a1;

    var_a1 = NULL;
    if ((*(s32 *)((char *)(arg0) + 0x40)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x42)) = (s16) ((*(s16 *)((char *)(arg0) + 0x42)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x42)) < 0) {
            var_a1 = 1;
        }
    }
    if (var_a1 == NULL) {
        (*(f32 *)((char *)(arg0) + 0x10)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + ((*(f32 *)((char *)(arg0) + 0x1C)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + ((*(f32 *)((char *)(arg0) + 0x20)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) + ((*(f32 *)((char *)(arg0) + 0x24)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x34)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + ((*(f32 *)((char *)(arg0) + 0x38)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800BE9A4));
        if ((*(s32 *)((char *)(arg0) + 0x40)) & 8) {
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x42));
            if (temp_v1 < (*(s32 *)((char *)(arg0) + 0x4E))) {
                temp_lo = temp_v1 * (*(s32 *)((char *)(arg0) + 0x50));
                if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x4C))) {
                    (*(u8 *)((char *)(arg0) + 0x4C)) = (u8) temp_lo;
                }
            }
        }
    }
    if (var_a1 != NULL) {
        func_1516972C(var_a1);
    }
}

void *func_151564F8(s32 *arg0, void *arg1, s32 arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    void *sp6C;
    f32 sp68;
    s8 sp67;
    void *sp5C;
    u8 sp5B;
    u8 sp5A;
    u8 sp59;
    void *sp48;
    u8 *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f16;
    f32 var_f2;
    s16 temp_t3;
    s32 var_v1;
    u16 temp_t6;
    u8 *temp_a1;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v1;
    void *temp_v1_2;

    func_151D5D60((char *)(arg1) + 0x88, arg2, 0x30, &sp5C, &sp59);
    if (sp59 != 0) {
        temp_a1 = (char *)(arg1) + 0x58;
        temp_v1 = (char *)(arg1) + (arg2 * 4);
        sp44 = temp_a1;
        sp48 = temp_v1;
        memcpy((*(s32 *)((char *)(temp_v1) + 0x88)), temp_a1, 0x30);
        memcpy((*(s32 *)((char *)(temp_v1) + 0x88)) + 0x30, temp_a1, 0x30);
    }
    sp6C = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
    sp67 = 1;
    temp_t6 = (*(s32 *)((char *)(arg1) + 0x44));
    var_v1 = 0;
    temp_t3 = (*(s32 *)((char *)(arg1) + 0x40)) & 6;
    sp5A = (u8) ((s32) (temp_t6 & 0xFF00) >> 8);
    sp5B = (u8) temp_t6;
    if (temp_t3 & 2) {
        var_v1 = 0x200;
    }
    if (temp_t3 & 4) {
        var_v1 |= 0x400;
    }
    temp_v1_2 = (sp5B * 8) + &D_800A4AC8;
    temp_f12 = (*(s32 *)((char *)(arg1) + 0x14));
    temp_f2 = (*(s32 *)((char *)(arg1) + 0x10));
    temp_f14 = (*(s32 *)((char *)(arg1) + 0x28));
    temp_s1_2 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142B7C(arg0, var_v1 | 5 | 0x200000, 0x1F0600), 0, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0x4C)), &sp67), 0, 0, 0, 0, 0, 0, &sp67), sp5A, &sp67), 0x82CA0, (*(s32 *)((char *)(temp_v1_2) + 0x4)) | (*(s32 *)((char *)(temp_v1_2) + 0x0)), &sp67);
    temp_f16 = temp_f2 - temp_f14;
    sp8C = temp_f12 - (*(s32 *)((char *)(arg1) + 0x2C));
    temp_f0 = (*(s32 *)((char *)(arg1) + 0x18));
    temp_f10 = temp_f0 - (*(s32 *)((char *)(arg1) + 0x30));
    sp90 = temp_f10;
    sp7C = temp_f2 - (*(s32 *)((char *)(sp6C) + 0x0));
    sp80 = temp_f12 - (*(s32 *)((char *)(sp6C) + 0x4));
    temp_f8 = temp_f0 - (*(s32 *)((char *)(sp6C) + 0x8));
    sp30 = sp80;
    sp3C = temp_f14;
    sp84 = temp_f8;
    temp_f14_2 = (sp8C * temp_f8) - (sp80 * temp_f10);
    temp_f18 = (temp_f10 * sp7C) - (temp_f8 * temp_f16);
    temp_f2_2 = (temp_f16 * sp30) - (sp7C * sp8C);
    sp40 = temp_f2_2;
    temp_f0_2 = (temp_f14_2 * temp_f14_2) + (temp_f18 * temp_f18) + (temp_f2_2 * temp_f2_2);
    sp68 = temp_f0_2;
    if (temp_f0_2 == 0.0f) {
        var_f2 = 0.0f;
        var_f12 = 0.0f;
        var_f16 = 0.0f;
    } else {
        temp_f2_3 = (*(s32 *)((char *)(arg1) + 0x48)) / sqrtf(temp_f0_2);
        var_f12 = temp_f14_2 * temp_f2_3;
        var_f16 = temp_f18 * temp_f2_3;
        temp_f10_2 = sp40 * temp_f2_3;
        sp78 = temp_f10_2;
        var_f2 = temp_f10_2;
    }
    (*(s16 *)((char *)(sp5C) + 0x0)) = (s16) (s32) sp3C;
    (*(s16 *)((char *)(sp5C) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(arg1) + 0x2C));
    (*(s16 *)((char *)(sp5C) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(arg1) + 0x30));
    (*(s16 *)((char *)(sp5C) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x10)) + var_f12);
    (*(s16 *)((char *)(sp5C) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x14)) + var_f16);
    (*(s16 *)((char *)(sp5C) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x18)) + var_f2);
    (*(s16 *)((char *)(sp5C) + 0x20)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x10)) - var_f12);
    (*(s16 *)((char *)(sp5C) + 0x22)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x14)) - var_f16);
    (*(s16 *)((char *)(sp5C) + 0x24)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x18)) - var_f2);
    (*(s32 *)((char *)(temp_s1_2) + 0x0)) = 0x01003006;
    temp_s1 = (char *)(temp_s1_2) + 8;
    (*(s32 *)((char *)(temp_s1_2) + 0x4)) = sp5C;
    (*(s32 *)((char *)(temp_s1_2) + 0x8)) = 0x05000204;
    (*(s32 *)((char *)(temp_s1) + 0x4)) = 0;
    return (char *)(temp_s1) + 8;
}

void func_151568F8(void * *arg0, s32 arg1) {
    u8 spDE;
    s16 spDC;
    s16 spDA;
    u8 spD9;
    u8 spD8;
    f32 spD4;
    f32 spD0;
    u16 spCE;
    s16 spCC;
    s16 spCA;
    u8 spC8;
    u8 spC7;
    u8 spC6;
    u8 spC5;
    u8 spC4;
    u8 spC3;
    u8 spC2;
    u8 spC1;
    u8 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    void * sp9C;
    s16 sp9A;
    s16 sp98;
    s8 sp8B;
    s8 sp8A;
    u8 sp89;
    u8 sp88;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    void * sp58;
    void * sp50;
    f32 sp4C;
    s16 sp4A;
    s16 sp48;
    s16 sp46;
    u8 sp45;
    u8 sp44;
    u8 sp43;
    u8 sp42;
    u8 sp41;
    u8 sp40;
    u8 sp3F;
    u8 sp3E;
    u8 sp3D;
    u8 sp3C;
    s32 sp38;
    s32 sp34;
    s16 sp32;
    u16 sp30;
    s32 sp2C;
    s32 sp28;

    sp98 = (*(s32 *)((char *)(arg0) + 0xC));
    sp9A = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s32 *)((char *)&(sp9C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spA8 = (*(s32 *)((char *)(arg0) + 0x10));
    spAC = (*(s32 *)((char *)(arg0) + 0x14));
    spAA = (*(s32 *)((char *)(arg0) + 0x12));
    spAE = (*(s32 *)((char *)(arg0) + 0x16));
    spB0 = (*(s32 *)((char *)(arg0) + 0x18));
    spB4 = (*(s32 *)((char *)(arg0) + 0x1C));
    spB8 = (*(s32 *)((char *)(arg0) + 0x20));
    spBC = (*(s32 *)((char *)(arg0) + 0x24));
    spC0 = (*(s32 *)((char *)(arg0) + 0x28));
    spC1 = (*(s32 *)((char *)(arg0) + 0x29));
    spC2 = (*(s32 *)((char *)(arg0) + 0x2A));
    spC3 = (*(s32 *)((char *)(arg0) + 0x2B));
    spC4 = (*(s32 *)((char *)(arg0) + 0x2C));
    spC5 = (*(s32 *)((char *)(arg0) + 0x2D));
    spC6 = (*(s32 *)((char *)(arg0) + 0x2E));
    spC7 = (*(s32 *)((char *)(arg0) + 0x2F));
    spC8 = (*(s32 *)((char *)(arg0) + 0x30));
    spCA = (*(s32 *)((char *)(arg0) + 0x32));
    spCC = (*(s32 *)((char *)(arg0) + 0x34));
    spCE = (*(s32 *)((char *)(arg0) + 0x36));
    spD0 = (*(s32 *)((char *)(arg0) + 0x38));
    spD4 = (*(s32 *)((char *)(arg0) + 0x3C));
    spD8 = (*(s32 *)((char *)(arg0) + 0x40));
    spD9 = (*(s32 *)((char *)(arg0) + 0x41));
    spDA = (*(s32 *)((char *)(arg0) + 0x42));
    spDC = (*(s32 *)((char *)(arg0) + 0x44));
    spDE = (*(s32 *)((char *)(arg0) + 0x46));
    func_151539B4(&sp98, arg1);
    sp45 = (*(s32 *)((char *)(arg0) + 0x47));
    sp30 = (*(s32 *)((char *)(arg0) + 0x48));
    sp2C = (*(s32 *)((char *)(arg0) + 0x50));
    sp28 = (*(s32 *)((char *)(arg0) + 0x4C));
    sp34 = (*(s32 *)((char *)(arg0) + 0x58));
    sp38 = (*(s32 *)((char *)(arg0) + 0x5C));
    sp3C = (*(s32 *)((char *)(arg0) + 0x60));
    sp3D = (*(s32 *)((char *)(arg0) + 0x61));
    sp3E = (*(s32 *)((char *)(arg0) + 0x62));
    sp3F = (*(s32 *)((char *)(arg0) + 0x63));
    sp40 = (*(s32 *)((char *)(arg0) + 0x64));
    sp41 = (*(s32 *)((char *)(arg0) + 0x65));
    sp42 = (*(s32 *)((char *)(arg0) + 0x66));
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp80 = (*(s32 *)((char *)(arg0) + 0x80));
    sp43 = (*(s32 *)((char *)(arg0) + 0x67));
    sp44 = (*(s32 *)((char *)(arg0) + 0x68));
    sp8A = (*(s32 *)((char *)(arg0) + 0x86));
    sp8B = (*(s32 *)((char *)(arg0) + 0x87));
    sp46 = (*(s32 *)((char *)(arg0) + 0x74));
    sp48 = (*(s32 *)((char *)(arg0) + 0x76));
    sp88 = (*(s32 *)((char *)(arg0) + 0x84));
    sp89 = (*(s32 *)((char *)(arg0) + 0x85));
    sp4A = (*(s32 *)((char *)(arg0) + 0x78));
    sp4C = (*(s32 *)((char *)(arg0) + 0x7C));
    sp32 = (*(s32 *)((char *)(arg0) + 0x54));
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x6C));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x70));
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    func_15130374(&sp28, (*(s32 *)((char *)(arg0) + 0x88)), 0, arg1, 0);
}

void func_15156B54(void *arg0) {
    u32 sp68;
    s8 sp60;
    s16 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    u8 *sp44;
    u32 temp_hi;
    u8 *temp_a0_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_v1;

    (*(s16 *)((char *)(arg0) + 0x2C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x2C)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 0) {
        sp68 = random_u32() % 3U;
        temp_hi = random_u32() % 10U;
        temp_a2 = (sp68 * 0xA0) + &D_800DCA30;
        temp_a0 = (char *)(temp_a2) + (temp_hi * 0x10);
        if (((*(s32 *)((char *)(temp_a0) + 0x0)) != 0.0f) && ((*(s32 *)((char *)(temp_a0) + 0x4)) != 0.0f)) {
            temp_a0_2 = (char *)(temp_a2) + (temp_hi * 0x10);
            if ((*(s32 *)((char *)(temp_a0) + 0x8)) != 0.0f) {
                sp44 = temp_a0_2;
                func_15156D24(temp_a0_2, (*(s32 *)((char *)(arg0) + 0xC)), temp_a2);
                sp5C = 3;
                sp5D = -1;
                sp5E = (random_u32() % 11U) + 5;
                sp60 = 0;
                sp50 = (s32) (*(s32 *)((char *)(temp_a0_2) + 0x0));
                sp54 = (s32) (*(s32 *)((char *)(temp_a0_2) + 0x4));
                sp58 = (s32) (*(s32 *)((char *)(temp_a0_2) + 0x8));
                func_151602C0(&sp5C, &sp50, (random_u32(temp_a0_2) % 156U) + 0x64, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            }
        }
        temp_v1 = (char *)(arg0) + 0x28;
        (*(s16 *)((char *)(temp_v1) + 0x4)) = (s16) ((random_u32() % (u32) ((*(s16 *)((char *)(temp_v1) + 0x2)) + 1)) + (*(s16 *)((char *)(arg0) + 0x28)));
    }
}

void func_15156D24(u8 *arg0, s32 arg1) {
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    f32 sp94;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 sp88;
    f32 sp84;
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
    s16 sp6C;
    s32 sp68;
    s32 sp64;
    s16 sp60;
    s8 sp5F;
    s8 sp5E;
    s16 sp5C;
    s16 sp5A;
    s8 sp59;
    s8 sp58;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s8 sp48;
    s8 sp47;
    s8 sp46;
    s8 sp45;
    s8 sp44;
    s8 sp43;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;
    s16 sp28;
    s16 sp26;
    s16 sp24;
    void * sp18;
    f32 temp_f2;

    memcpy(&sp18, arg0, 0xC);
    sp41 = 0xFF;
    sp24 = 0xA;
    sp26 = 0x1E;
    sp2A = -0x3F;
    sp2E = 0x80;
    sp48 = 9;
    sp2C = 0xFF;
    spA2 = 0xFF;
    sp40 = 0xFF;
    sp7C = 0xFF;
    spA3 = 0xFF;
    sp7D = 0xFF;
    sp7E = 0xFF;
    sp42 = 0xFF;
    spA4 = 0xFF;
    sp43 = 0xFF;
    sp44 = 0xFF;
    sp45 = 0xFF;
    sp46 = 0xFF;
    sp47 = 0xFF;
    sp28 = 0;
    sp4A = 5;
    sp4C = 0xA;
    sp4E = 0x1601;
    sp58 = 0x64;
    sp59 = 0x9B;
    sp5A = 4;
    sp5C = 0x3F;
    sp5E = 0;
    sp5F = 0x2B;
    sp60 = 0x1A01;
    sp64 = 0x200005;
    sp68 = 0;
    sp38 = D_800A6040;
    sp3C = D_800A6040;
    sp30 = D_800A6044;
    sp34 = D_800A6048;
    sp50 = D_800A604C;
    sp54 = D_800A6050;
    sp6C = (random_u32() % 3U) + 7;
    sp70 = 0;
    sp74 = 0;
    sp78 = 0xFF;
    sp79 = 0xFF;
    sp7A = 0xFF;
    sp7B = 0xFF;
    random_u32();
    sp7F = 0xFF;
    sp80 = 0xFF;
    temp_f2 = (random_float() * 150.0f) + 196.0f;
    sp8C = 4;
    sp8E = 0x3F;
    sp90 = 0x16;
    sp84 = temp_f2;
    sp98 = 0xE01;
    sp88 = temp_f2;
    sp94 = 1.25f;
    if (random_u32() & 1) {
        sp98 |= 0x40;
    }
    if (random_u32() & 1) {
        sp98 |= 0x80;
    }
    sp9C = 4;
    sp9D = 4;
    sp9E = -1;
    sp9F = -1;
    spA0 = 1;
    spA1 = 1;
    func_151568F8(&sp18, arg1);
}

void func_15156F94(void *arg0) {
    func_151D5E30((char *)(arg0) + 0x88, arg0);
}

void func_15156FB8(void *arg0) {
    func_15156F94(arg0);
    func_15169804(arg0);
}

void func_15156FE4(void *arg0) {
    func_15156F94(arg0);
    func_15169824(arg0);
}

void *func_15157010(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void * var_s0;
    s32 var_s1;
    s32 var_s1_2;
    u8 temp_v0_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *var_s0_2;
    void *var_s0_3;

    temp_v0_2 = *arg0;
    var_s0 = 0x36;
    if (temp_v0_2 & 0x80) {
        var_s0 = 0x5B;
    } else if (temp_v0_2 & 0x10) {
        var_s0 = 0x4C;
    }
    temp_v0 = func_15167A68(var_s0, arg7, arg5 + 0x120, 1, (s32) arg6, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x58);
    func_1503F62C((*(s32 *)((char *)(temp_v0) + 0x18)), (*(s32 *)((char *)(temp_v0) + 0x1C)), (char *)(temp_v0) + 0x6C, (char *)(temp_v0) + 0x70, (char *)(temp_v0) + 0x74, (char *)(temp_v0) + 0x78, (char *)(temp_v0) + 0x68);
    temp_s0 = (char *)(temp_v0) + 0x7C;
    guMtxIdentF(temp_s0);
    temp_s1 = (char *)(temp_v0) + 0xBC;
    guMtxIdentF(temp_s1);
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x68))) + 0x3E0)) = temp_s0;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x68))) + 0x3E4)) = temp_s1;
    func_1503F5B8((*(s32 *)((char *)(temp_v0) + 0x68)), 1, arg1, arg2, 0.0f, 0);
    (*(s32 *)((char *)(temp_v0) + 0xFC)) = arg3;
    (*(s32 *)((char *)(temp_v0) + 0x100)) = 0;
    var_s1 = 0;
    var_s0_2 = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x118)) = arg4;
    do {
        var_s1 += 1;
        var_s0_2 = (char *)(var_s0_2) + 4;
        (*(s32 *)((char *)(var_s0_2) + 0x100)) = 0;
    } while (var_s1 < 4);
    (*(s32 *)((char *)(temp_v0) + 0x114)) = 0;
    if (arg3 != 0) {
        var_s1_2 = 0;
        var_s0_3 = temp_v0;
        if (D_80082FA0 >= 0) {
            do {
                (*(s32 *)((char *)(var_s0_3) + 0x104)) = func_1515D480(arg3);
                var_s1_2 += 1;
                var_s0_3 = (char *)(var_s0_3) + 4;
            } while (D_80082FA0 >= var_s1_2);
        }
        (*(s32 *)((char *)(temp_v0) + 0x114)) = func_1515D440();
    }
    return temp_v0;
}

void func_151571C4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    if (D_80082FA0 >= 0) {
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x104));
            if (temp_v0 != 0) {
                func_100043B4(temp_v0, 4);
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 4;
        } while (D_80082FA0 >= var_s1);
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x114));
    if (temp_v0_2 != 0) {
        func_100043B4(temp_v0_2, 4);
    }
}

void func_15157248(void *arg0) {
    func_151571C4(arg0);
    func_1518CA04((*(s32 *)((char *)(arg0) + 0x18)));
    func_1503F7B8((*(s32 *)((char *)(arg0) + 0x68)));
    func_15169804(arg0);
}

void func_1515728C(void *arg0) {
    func_151571C4(arg0);
    func_1518CA04((*(s32 *)((char *)(arg0) + 0x18)));
    func_1503F7B8((*(s32 *)((char *)(arg0) + 0x68)));
    func_15169824(arg0);
}

void func_151572D0(void *arg0) {
    u8 sp1B;
    s16 temp_v1;
    s32 temp_lo;
    s8 temp_v0;
    s8 temp_v0_2;
    u8 var_a2;

    var_a2 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x10)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x16)) = (s16) ((*(s16 *)((char *)(arg0) + 0x16)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x16)) < 0) {
            var_a2 = 1;
        }
    }
    if (var_a2 == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x11));
        if (temp_v0 != -1) {
            sp1B = var_a2;
            if (((s32 (*)())((char *)(&D_8008AD90 + (temp_v0 * 4))))(arg0, arg0, var_a2) == 0) {
                var_a2 = 1;
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x12));
        if (temp_v0_2 != -1) {
            sp1B = var_a2;
            if (((s32 (*)())((char *)(&D_8008ADA0 + (temp_v0_2 * 4))))(arg0, arg0, var_a2) == 0) {
                var_a2 = 1;
            }
        }
    }
    if (var_a2 == 0) {
        sp1B = var_a2;
        func_1503F4B0((*(s32 *)((char *)(arg0) + 0x68)), arg0, var_a2);
    }
    if ((var_a2 == 0) && ((*(s32 *)((char *)(arg0) + 0x10)) & 0x20)) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x16));
        if (temp_v1 < (*(s32 *)((char *)(arg0) + 0x64))) {
            temp_lo = temp_v1 * (*(s32 *)((char *)(arg0) + 0x66));
            if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x43))) {
                (*(u8 *)((char *)(arg0) + 0x43)) = (u8) temp_lo;
            }
        }
    }
    if (var_a2 != 0) {
        func_1516972C(arg0, arg0, var_a2);
    }
}

s32 *func_15157420(s32 *arg0, void *arg1, s32 arg2) {
    s8 sp83;
    s16 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s16 sp74;
    s16 sp72;
    u8 sp71;
    s32 *temp_v0;
    s32 *temp_v0_4;
    s32 *var_s1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_v0_2;
    s32 var_v1;
    s8 temp_v0_2;
    s8 temp_v0_5;
    u8 temp_v1_2;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_v0_3;
    void *temp_v1;
    void *var_v0;

    var_s1 = arg0;
    sp83 = 1;
    temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x13));
    if (temp_v0_2 != -1) {
        temp_v0 = ((s32 (*)())((char *)(&D_8008ADBC + (temp_v0_2 * 4))))(var_s1, arg1, arg2, &sp83, &sp71);
        var_s1 = temp_v0;
        if (sp71 == 0) {
            return temp_v0;
        }
    }
    if (((*(s32 *)((char *)(arg1) + 0x10)) & 8) && (temp_v0_3 = (*(s32 *)((char *)(arg1) + 0x60)), (temp_v0_3 != NULL)) && !((*(s32 *)((char *)(temp_v0_3) + 0x2)) & (1 << arg2))) {

    } else {
        temp_s1 = func_15142B7C(var_s1, (*(s32 *)((char *)(arg1) + 0x24)), (*(s32 *)((char *)(arg1) + 0x28)));
        func_151441A4(&sp80, &sp7E, &sp7C, &sp7A, (s32) (*(s32 *)((char *)(arg1) + 0x40)), (s32) (*(s32 *)((char *)(arg1) + 0x41)), (s32) (*(s32 *)((char *)(arg1) + 0x42)), (s32) (*(s32 *)((char *)(arg1) + 0x43)), (s32) (*(s32 *)((char *)(arg1) + 0x44)), (s32) (*(s32 *)((char *)(arg1) + 0x45)), (s32) (*(s32 *)((char *)(arg1) + 0x46)), (s32) (*(s32 *)((char *)(arg1) + 0x47)), 0xFF, (s32) (*(s32 *)((char *)(arg1) + 0x3C)));
        func_151442FC(&sp78, &sp76, &sp74, &sp72, (s32) (*(s32 *)((char *)(arg1) + 0x40)), (s32) (*(s32 *)((char *)(arg1) + 0x41)), (s32) (*(s32 *)((char *)(arg1) + 0x42)), (s32) (*(s32 *)((char *)(arg1) + 0x43)), (s32) (*(s32 *)((char *)(arg1) + 0x44)), (s32) (*(s32 *)((char *)(arg1) + 0x45)), (s32) (*(s32 *)((char *)(arg1) + 0x46)), (s32) (*(s32 *)((char *)(arg1) + 0x47)), 0xFF, (s32) (*(s32 *)((char *)(arg1) + 0x3D)));
        temp_v1 = ((*(s32 *)((char *)(arg1) + 0x2C)) * 8) + &D_800A4AC8;
        var_v0 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(temp_s1, sp78, sp76, sp74, (s32) sp72, &sp83), 0, 0, sp80, (s32) sp7E, (s32) sp7C, (s32) sp7A, &sp83), (*(s32 *)((char *)(arg1) + 0x33)), &sp83), (*(s32 *)((char *)(arg1) + 0x20)) | 0x80000 | 0x2C00 | (*(s32 *)((char *)(arg1) + 0x34)) | (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(temp_v1) + 0x4)) | (*(s32 *)((char *)(temp_v1) + 0x0)), &sp83);
        temp_v1_2 = (*(s32 *)((char *)(arg1) + 0x10));
        if (temp_v1_2 & 2) {
            if (temp_v1_2 & 4) {
                var_v0_2 = 1;
            } else {
                var_v0_2 = 0;
            }
            var_v0 = func_151462C8(var_v0, (char *)(arg1) + 0xFC, (*(s32 *)((char *)(arg1) + 0x51)), (*(s32 *)((char *)(arg1) + 0x4C)), (s32) (*(s32 *)((char *)(arg1) + 0x50)), (s32) arg2, (char *)(arg1) + 0x54, var_v0_2, 0);
        }
        (*(s32 *)((char *)(var_v0) + 0x0)) = 0xE7000000;
        temp_s1_2 = (char *)(var_v0) + 8;
        (*(s32 *)((char *)(var_v0) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_s1_2) + 0x4)) = 0xFF;
        (*(s32 *)((char *)(var_v0) + 0x8)) = 0xF8000000;
        temp_s1_3 = (char *)(temp_s1_2) + 8;
        (*(s32 *)((char *)(temp_s1_2) + 0x8)) = 0xDB06000C;
        temp_s1_4 = (char *)(temp_s1_3) + 8;
        (*(s32 *)((char *)(temp_s1_3) + 0x4)) = (s32) (*(s32 *)((char *)(((*(s32 *)((char *)(arg1) + 0x68)) + (D_800BE9C0 * 4))) + 0x3E8));
        (*(s32 *)((char *)(temp_s1_3) + 0x8)) = 0xDB060004;
        temp_s1_5 = (char *)(temp_s1_4) + 8;
        (*(s32 *)((char *)(temp_s1_4) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x74));
        var_a0 = 0;
        if (((s32) (*(s32 *)((char *)(arg1) + 0x43)) < 0xFF) || ((s32) (*(s32 *)((char *)(arg1) + 0x47)) < 0xFF)) {
            (*(s32 *)((char *)(temp_s1_4) + 0x8)) = 0xDB060020;
            var_s1 = (char *)(temp_s1_5) + 8;
            if ((*(s32 *)((char *)(arg1) + 0x10)) & 0x40) {
                (*(s32 *)((char *)(temp_s1_5) + 0x4)) = &D_80083A40;
            } else {
                (*(s32 *)((char *)(temp_s1_5) + 0x4)) = &D_80083740;
            }
        } else {
            (*(s32 *)((char *)(temp_s1_4) + 0x8)) = 0xDB060020;
            var_s1 = (char *)(temp_s1_5) + 8;
            if ((*(s32 *)((char *)(arg1) + 0x10)) & 0x40) {
                (*(s32 *)((char *)(temp_s1_5) + 0x4)) = &D_80083BC0;
            } else {
                (*(s32 *)((char *)(temp_s1_5) + 0x4)) = &D_800838C0;
            }
        }
        var_v1 = 0;
        if ((s32) (*(s32 *)((char *)(arg1) + 0x70)) > 0) {
            do {
                temp_v0_4 = var_s1;
                (*(s32 *)((char *)(temp_v0_4) + 0x0)) = 0xDE000000;
                var_s1 += 8;
                (*(s32 *)((char *)(temp_v0_4) + 0x4)) = (s32) (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x6C))) + var_a0));
                var_v1 += 1;
                var_a0 += 4;
            } while (var_v1 < (s32) (*(s32 *)((char *)(arg1) + 0x70)));
        }
        temp_v0_5 = (*(s32 *)((char *)(arg1) + 0x14));
        if (temp_v0_5 != -1) {
            var_s1 = ((s32 (*)())((char *)(&D_8008ADCC + (temp_v0_5 * 4))))(var_s1, arg1, arg2, &sp83);
        }
    }
    return var_s1;
}

s32 func_15157860(s32 arg0) {
    guMtxIdentF(arg0 + (D_800BE9C0 << 6) + 0x7C);
    return 1;
}

void *func_15157898(u8 *arg1, s32 arg2, u8 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    void *sp2C;
    void *temp_v0;

    temp_v0 = func_15157010(arg3, arg2, arg3, arg4, arg5, arg6 + 0x38, (u8) (s32) arg7, arg8);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp2C = temp_v0;
    memcpy((char *)(temp_v0) + 0x120, arg1, 0x38);
    return sp2C;
}

s32 func_15157918(void *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    func_150A8050((char *)(arg0) + (D_800BE9C0 << 6) + 0x7C, (*(f32 *)((char *)(arg0) + 0x120)), (*(f32 *)((char *)(arg0) + 0x124)), (*(f32 *)((char *)(arg0) + 0x128)));
    temp_a0 = (char *)(arg0) + 0x120;
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xAC)) = (f32) (*(f32 *)((char *)(arg0) + 0x54));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB0)) = (f32) (*(f32 *)((char *)(arg0) + 0x58));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB4)) = (f32) (*(f32 *)((char *)(arg0) + 0x5C));
    temp_v1 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1) + 0x7C)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x7C)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_2 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_2) + 0x80)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x80)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_3 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_3) + 0x84)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x84)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_4 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_4) + 0x8C)) = (f32) ((*(f32 *)((char *)(temp_v1_4) + 0x8C)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_5 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_5) + 0x90)) = (f32) ((*(f32 *)((char *)(temp_v1_5) + 0x90)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_6 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_6) + 0x94)) = (f32) ((*(f32 *)((char *)(temp_v1_6) + 0x94)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_7 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_7) + 0x9C)) = (f32) ((*(f32 *)((char *)(temp_v1_7) + 0x9C)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_8 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_8) + 0xA0)) = (f32) ((*(f32 *)((char *)(temp_v1_8) + 0xA0)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    temp_v1_9 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_9) + 0xA4)) = (f32) ((*(f32 *)((char *)(temp_v1_9) + 0xA4)) * (*(f32 *)((char *)(temp_a0) + 0xC)));
    return 1;
}

s32 func_15157AA8(void *arg0) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f16;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;
    void *temp_v0_2;

    f32 sp24;
    f32 sp28;
    temp_v0 = (char *)(arg0) + 0x120;
    if ((*(s32 *)((char *)(arg0) + 0x150)) & 1) {
        (*(s32 *)((char *)&(sp20) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x10));
        (*(f32 *)((char *)&(sp20) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
        (*(f32 *)((char *)&(sp20) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
        if ((*(s32 *)((char *)(temp_v0) + 0x30)) & 8) {
            var_v1 = D_800BE9E4;
            if (var_v1 != 0) {
                temp_a2 = -(var_v1 & 3);
                temp_a1 = temp_a2 + var_v1;
                if (temp_a2 != 0) {
                    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x2C));
                    var_v1 -= 1;
                    var_f18 = (*(s32 *)((char *)(temp_v0) + 0x10)) * temp_f0;
                    var_f16 = (*(s32 *)((char *)(temp_v0) + 0x18)) * temp_f0;
                    if (temp_a1 != var_v1) {
                        do {
                            (*(s32 *)((char *)(temp_v0) + 0x10)) = var_f18;
                            (*(s32 *)((char *)(temp_v0) + 0x18)) = var_f16;
                            var_f18 = (*(s32 *)((char *)(temp_v0) + 0x10)) * temp_f0;
                            var_v1 -= 1;
                            var_f16 = (*(s32 *)((char *)(temp_v0) + 0x18)) * temp_f0;
                        } while (temp_a1 != var_v1);
                    }
                    (*(s32 *)((char *)(temp_v0) + 0x10)) = var_f18;
                    (*(s32 *)((char *)(temp_v0) + 0x18)) = var_f16;
                    if (var_v1 != 0) {
                        goto block_7;
                    }
                } else {
block_7:
                    temp_f0_2 = (*(s32 *)((char *)(temp_v0) + 0x2C));
                    var_v1_2 = var_v1 - 4;
                    var_f18_2 = (*(s32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2;
                    if (var_v1_2 != 0) {
                        do {
                            (*(s32 *)((char *)(temp_v0) + 0x10)) = var_f18_2;
                            var_v1_2 -= 4;
                            (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2);
                            (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2);
                            (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2);
                            var_f18_2 = (*(s32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2;
                            (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                        } while (var_v1_2 != 0);
                    }
                    (*(s32 *)((char *)(temp_v0) + 0x10)) = var_f18_2;
                    (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) * temp_f0_2);
                }
            }
        }
        if ((*(s32 *)((char *)(temp_v0) + 0x30)) & 4) {
            var_f2 = (*(s32 *)((char *)(temp_v0) + 0x28));
            (*(f32 *)((char *)(temp_v0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x14)) + (var_f2 * D_800BE9A4));
        } else {
            var_f2 = 0.0f;
        }
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) + ((sp20 + (0.5f * (((*(f32 *)((char *)(temp_v0) + 0x10)) - sp20) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) + ((sp24 + (0.5f * var_f2 * D_800BE9A4)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x5C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5C)) + ((sp28 + (0.5f * (((*(f32 *)((char *)(temp_v0) + 0x18)) - sp28) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    }
    temp_v0_2 = (char *)(arg0) + 0x120;
    if ((*(s32 *)((char *)(temp_v0_2) + 0x30)) & 2) {
        (*(f32 *)((char *)(arg0) + 0x120)) = (f32) ((*(f32 *)((char *)(arg0) + 0x120)) + ((*(f32 *)((char *)(temp_v0_2) + 0x1C)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x4)) + ((*(f32 *)((char *)(temp_v0_2) + 0x20)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x8)) + ((*(f32 *)((char *)(temp_v0_2) + 0x24)) * D_800BE9A4));
    }
    return 1;
}

void func_15157D88(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x4C, arg0 + 0x50, arg0);
}

s32 func_15157DC8(s32 arg0) {
    func_15157DEC(arg0 + 0x120);
    return 1;
}

void func_15157DEC(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    func_150A8050((char *)(arg0) + (D_800BE9C0 << 6) + 0x7C, (*(f32 *)((char *)(arg1) + 0x0)), (*(f32 *)((char *)(arg1) + 0x4)), (*(f32 *)((char *)(arg1) + 0x8)));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xAC)) = (f32) (*(f32 *)((char *)(arg0) + 0x54));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB0)) = (f32) (*(f32 *)((char *)(arg0) + 0x58));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB4)) = (f32) (*(f32 *)((char *)(arg0) + 0x5C));
    temp_v0 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0) + 0x7C)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x7C)) * (*(f32 *)((char *)(arg1) + 0xC)));
    temp_v0_2 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_2) + 0x80)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x80)) * (*(f32 *)((char *)(arg1) + 0xC)));
    temp_v0_3 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_3) + 0x84)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x84)) * (*(f32 *)((char *)(arg1) + 0xC)));
    temp_v0_4 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_4) + 0x8C)) = (f32) ((*(f32 *)((char *)(temp_v0_4) + 0x8C)) * (*(f32 *)((char *)(arg1) + 0x10)));
    temp_v0_5 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_5) + 0x90)) = (f32) ((*(f32 *)((char *)(temp_v0_5) + 0x90)) * (*(f32 *)((char *)(arg1) + 0x10)));
    temp_v0_6 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_6) + 0x94)) = (f32) ((*(f32 *)((char *)(temp_v0_6) + 0x94)) * (*(f32 *)((char *)(arg1) + 0x10)));
    temp_v0_7 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_7) + 0x9C)) = (f32) ((*(f32 *)((char *)(temp_v0_7) + 0x9C)) * (*(f32 *)((char *)(arg1) + 0xC)));
    temp_v0_8 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_8) + 0xA0)) = (f32) ((*(f32 *)((char *)(temp_v0_8) + 0xA0)) * (*(f32 *)((char *)(arg1) + 0xC)));
    temp_v0_9 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v0_9) + 0xA4)) = (f32) ((*(f32 *)((char *)(temp_v0_9) + 0xA4)) * (*(f32 *)((char *)(arg1) + 0xC)));
}

void *func_15157F80(void *arg0, void * arg1, s32 arg2, void * arg3, s8 *arg4) {
    void *temp_a0;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80089470;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDA380007;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (void *) ((arg2 << 6) + &D_800DCC10);
    *arg4 = 1;
    return (char *)(temp_a0) + 8;
}

void *func_15157FE8(void *arg0, void * arg1, s32 arg2, void * arg3) {
    void *temp_a0;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDA380007;
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (D_800BE628 + (arg2 * 0x180) + (D_800BE9C0 << 6) + 0x100);
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDA380005;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (*(&D_800DC2A0 + (D_800BE9C0 * 4)) + (arg2 << 6));
    return (char *)(temp_a0) + 8;
}

void func_15158078(s32 arg0, s32 arg1) {
    func_15169260(&D_800A6060, 3, arg0, arg1 & 0xFF);
}
