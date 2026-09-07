/**
 * Auto-decompiled from asm/113D60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                         /* extern */
f32 random_float();                             /* extern */
void * func_150E5FD0(); /* extern */
s32 func_15130280();        /* extern */
s32 func_15130374();            /* extern */
void * func_15131828();                     /* extern */
s32 func_15132A4C();        /* extern */
void * func_151337C0();                            /* extern */
f32 func_15142A80();                             /* extern */
f32 func_15142AC0();                             /* extern */
f32 func_15142B04();                             /* extern */
f32 func_15142B44();                             /* extern */
void * func_151436B4();              /* extern */
f32 func_15144528();                     /* extern */
void * func_1514470C();                   /* extern */
void *func_15144B34();                           /* extern */
s32 func_1514ECE0();                 /* extern */
void * func_1514FCE8();                    /* extern */
void * func_1515548C(); /* extern */
void * func_15164F0C();                 /* extern */
void * func_151D3FF4();                 /* extern */
void * func_151D8868();                     /* extern */
void * memcpy();                            /* extern */
void func_150E75A0(f32 *arg0, f32 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, s16 arg6, s16 arg7, void * *arg8, s32 arg9, u8 arg10, s32 arg11);
void func_150E76D0(f32 arg0, s16 arg1, u8 arg2, u8 arg3, u8 arg4, s16 arg5, s16 arg6, void * *arg7, void * *arg8, u8 arg9, s32 arg10);
void func_150E8930();                         /* static */
void func_150E8A80();                               /* static */
void func_150E90DC();                               /* static */
extern s32 D_80088A20;
extern s32 D_80088A2C;
extern s32 D_80088A34;
extern void *D_80088A3C;
extern void *D_80088A40;
extern s32 D_80088A44;
extern s32 D_80088A5C;
extern u8 D_80088A64;
extern s32 D_80088A68;
extern s32 D_80088A74;
extern s32 D_80088A80;
extern s32 D_800A1190;
extern s32 D_800A1290;
extern u8 D_800A12F0;
extern s32 D_800A12F4;
extern f32 D_800A12F8;
extern f32 D_800A12FC;
extern f32 D_800A1300;
extern f32 D_800A1304;
extern f32 D_800A1308;
extern f32 D_800A130C;
extern f32 D_800A1310;
extern f32 D_800A1314;
extern f32 D_800A1318;
extern f32 D_800A131C;
extern f32 D_800A1320;
extern f32 D_800A1324;
extern f32 D_800A1328;
extern f32 D_800A132C;
extern f32 D_800A1330;
extern f32 D_800A1334;
extern f32 D_800A1338;
extern f32 D_800A133C;
extern f32 D_800A1340;
extern f32 D_800A1344;
extern f32 D_800A1348;
extern f32 D_800A134C;
extern f32 D_800A1350;
extern f32 D_800A1354;
extern f32 D_800A1358;
extern f32 D_800A135C;
extern f32 D_800A1360;
extern f32 D_800A1364;
extern f32 D_800A1368;
extern f32 D_800A136C;
extern f32 D_800A1370;
extern f32 D_800A1374;
extern f32 D_800A1378;
extern f32 D_800A137C;
extern f32 D_800A1380;
extern f32 D_800A1384;
extern f32 D_800A1388;
extern f32 D_800A138C;
extern f32 D_800A1390;
extern f32 D_800A1394;
extern f32 D_800A1398;
extern f32 D_800A139C;
extern f32 D_800A13A0;
extern f32 D_800A13A4;
extern f32 D_800A13A8;
extern f32 D_800A13AC;
extern f32 D_800A13B0;
extern f32 D_800A13B4;
extern f32 D_800A13B8;
extern f32 D_800A13BC;
extern f32 D_800A13C0;
extern f32 D_800A13C4;
extern f32 D_800A13C8;
extern f32 D_800A13CC;
extern f32 D_800A13D0;
extern f32 D_800A13D4;
extern f32 D_800A13D8;
extern f32 D_800A13DC;
extern f32 D_800A13E0;
extern f32 D_800A13E4;
extern u8 D_800BE9EB;
extern u8 D_800C35E8;

void func_150E68B0(s32 arg0, void * arg1, void * arg2, s32 arg3) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    u8 sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    void * sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    void *sp30;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f8;
    s32 temp_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    void *var_v0;

    if ((arg0 != 0) && ((D_800C35EA != 1) || (D_800C35E8 != 9))) {
        var_v0 = (arg3 * 0x10) + &D_800A1190;
        if ((random_float(arg0) < (*(s32 *)((char *)(var_v0) + 0x0))) && ((*(s32 *)((char *)(var_v0) + 0x4)) != -1)) {
            temp_v1 = (*(s32 *)((char *)(var_v0) + 0x5));
            if (temp_v1 != -1) {
                sp30 = var_v0;
                ((s32 (*)())((char *)(&D_80088A2C + (temp_v1 * 4))))(&sp98, arg0, -1);
                var_v0 = sp30;
            } else {
                sp98 = 0.0f;
                sp9C = 0.0f;
                spA0 = 0.0f;
            }
            temp_v1_2 = (*(s32 *)((char *)(var_v0) + 0x4));
            if (temp_v1_2 != -1) {
                sp30 = var_v0;
                ((s32 (*)())((char *)(&D_80088A20 + (temp_v1_2 * 4))))(&sp8C);
                var_v0 = sp30;
            } else {
                sp8C = 0.0f;
                sp90 = 0.0f;
                sp94 = 0.0f;
            }
            temp_f0 = sp98 - sp8C;
            sp80 = temp_f0;
            temp_f8 = spA0 - sp94;
            sp84 = sp9C - sp90;
            sp88 = temp_f8;
            if ((temp_f0 != 0.0f) || (temp_f8 != 0.0f)) {
                temp_v1_3 = (*(s32 *)((char *)(var_v0) + 0x6));
                if (temp_v1_3 != -1) {
                    sp30 = var_v0;
                    ((s32 (*)())((char *)(&D_80088A34 + (temp_v1_3 * 4))))(0, &sp8C, &sp98, &sp80, &sp3C);
                    var_v0 = sp30;
                } else {
                    sp3C = 0.0f;
                    sp44 = 0.0f;
                    sp4C = 0.0f;
                    sp40 = 0.0f;
                    sp48 = 0.0f;
                    sp50 = 0.0f;
                }
                sp30 = var_v0;
                temp_f16 = random_float() * D_800A12F8;
                sp64 = 0.0f;
                sp60 = temp_f16 + D_800A12FC;
                (*(f32 *)((char *)&(sp68) + 0x0)) = (f32) (*(f32 *)((char *)&(sp8C) + 0x0));
                (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(sp8C) + 0x4));
                (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(sp8C) + 0x8));
                sp5C = 0.0f;
                sp74 = ((random_float() * 100.0f) + 150.0f) * D_800A1300;
                sp78 = (*(s32 *)((char *)(var_v0) + 0x8));
                sp7A = (*(s32 *)((char *)(var_v0) + 0xA));
                sp7C = (*(s32 *)((char *)(var_v0) + 0xC));
                temp_v0 = func_151491F4((s16) (s32) ((random_float() * 70.0f) + 30.0f), -1, 0xF, 1, 0xB, 0x44, 0xFF, 1);
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x28, &sp3C, 0x44);
                }
            }
        }
    }
}

void func_150E6B84(void *arg0) {
    f32 spDC;
    f32 spD8;
    f32 spB4;
    f32 sp8C;
    f32 sp88;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f24;
    f32 var_f26;
    u32 temp_s1;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f) {
        temp_f2 = 1.0f / (*(s32 *)((char *)(temp_s0) + 0x28));
        temp_f30 = D_800A1304;
        temp_f16 = (*(s32 *)((char *)(temp_s0) + 0x20)) + D_800BE9A4;
        spD8 = temp_f16 * temp_f2;
        var_f24 = (*(s32 *)((char *)(temp_s0) + 0x10));
        var_f26 = (*(s32 *)((char *)(temp_s0) + 0x14));
        spDC = temp_f16;
        sp8C = (*(s32 *)((char *)(temp_s0) + 0x18)) * D_800BE9A4 * temp_f2;
        sp88 = (*(s32 *)((char *)(temp_s0) + 0x1C)) * D_800BE9A4 * temp_f2;
        do {
            temp_f20 = sinf(var_f24);
            func_151436B4((*(s32 *)((char *)(arg0) + 0x28)) + (temp_f20 * (*(s32 *)((char *)(temp_s0) + 0x8))), (*(s32 *)((char *)(temp_s0) + 0x4)) + (sinf(var_f26) * (*(s32 *)((char *)(temp_s0) + 0xC))), 5.0f, &spB4);
            temp_f20_2 = random_float();
            temp_f22 = random_float();
            temp_s1 = random_u32();
            func_150E5FD0((char *)(temp_s0) + 0x2C, &spB4, (*(s32 *)((char *)(temp_s0) + 0x38)), ((temp_f20_2 * 300.0f) + 100.0f) * temp_f30, ((temp_f22 * 700.0f) + 300.0f) * temp_f30, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)), (s32) (*(s32 *)((char *)(temp_s0) + 0x40)), (temp_s1 % 86U) + 0xAA, (random_u32() % (u32) ((*(s32 *)((char *)(temp_s0) + 0x3E)) + 1)) + (*(s32 *)((char *)(temp_s0) + 0x3C)), -1);
            var_f24 += sp8C;
            var_f26 += sp88;
            spDC -= spD8;
            (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x28)) > 1.0f);
        temp_f20_3 = D_800A1308;
        (*(s32 *)((char *)(temp_s0) + 0x10)) = func_15144528(var_f24, temp_f20_3, 0);
        (*(s32 *)((char *)(temp_s0) + 0x14)) = func_15144528(var_f26, temp_f20_3, 0);
        (*(s32 *)((char *)(temp_s0) + 0x20)) = spDC;
    }
}

void func_150E6E34(void *arg0) {
    void *sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *var_v0;

    if (random_float() < D_800A130C) {
        var_v0 = D_80088A3C;
    } else {
        var_v0 = D_80088A40;
    }
    sp1C = var_v0;
    temp_f0 = random_float();
    temp_f2 = (*(s32 *)((char *)(var_v0) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((((*(f32 *)((char *)(var_v0) + 0xC)) - temp_f2) * temp_f0) + temp_f2);
    temp_f12 = (*(s32 *)((char *)(var_v0) + 0x4));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((((*(f32 *)((char *)(var_v0) + 0x10)) - temp_f12) * temp_f0) + temp_f12);
    temp_f14 = (*(s32 *)((char *)(var_v0) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((((*(f32 *)((char *)(var_v0) + 0x14)) - temp_f14) * temp_f0) + temp_f14);
}

void func_150E6ED8(s32 arg0) {
    func_1514470C(*(&D_800D9A20 + ((random_u32() & 1) * 4)), arg0);
}

void func_150E6F18(void *arg0) {
    void *sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_v1;

    temp_v1 = *(&D_80088A44 + ((random_u32() % 6U) * 4));
    sp1C = temp_v1;
    temp_f0 = random_float();
    temp_f2 = (*(s32 *)((char *)(temp_v1) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((((*(f32 *)((char *)(temp_v1) + 0xC)) - temp_f2) * temp_f0) + temp_f2);
    temp_f12 = (*(s32 *)((char *)(temp_v1) + 0x4));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((((*(f32 *)((char *)(temp_v1) + 0x10)) - temp_f12) * temp_f0) + temp_f12);
    temp_f14 = (*(s32 *)((char *)(temp_v1) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((((*(f32 *)((char *)(temp_v1) + 0x14)) - temp_f14) * temp_f0) + temp_f14);
}

void func_150E6FAC(void *arg0, void *arg1) {
    s32 unksp2B;
    void *sp34;
    f32 sp2C;
    s16 sp2A;
    f32 sp24;
    f32 temp_f0;
    s16 temp_t6;
    void *temp_v0;

    if (func_1514ECE0((*(s32 *)((char *)(arg1) + 0x2F4)), 0x16, &sp34) != 0) {
        sp2C = (random_float() * 100.0f) + 80.0f;
        temp_t6 = random_u32() & 0xFF;
        sp2A = temp_t6;
        sp24 = func_151423D8((temp_t6 - 0x40) & 0xFF);
        temp_f0 = func_151423D8(unksp2B);
        temp_v0 = (*(s32 *)((char *)(sp34) + 0x10));
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg1) + 0x14)) + ((*(f32 *)((char *)(temp_v0) + 0x38)) * -80.0f) + (sp24 * sp2C));
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg1) + 0x18)) + ((*(f32 *)((char *)(temp_v0) + 0x3C)) * -80.0f) + 100.0f);
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg1) + 0x1C)) + ((*(f32 *)((char *)(temp_v0) + 0x40)) * -80.0f) + (temp_f0 * sp2C));
        return;
    }
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x1C));
}

void func_150E70CC(void *arg0, void *arg1) {
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x1C));
}

void func_150E70EC(s32 arg0, void * arg1, void *arg2, void *arg3) {
    f32 temp_f16;
    f32 temp_f2;

    (*(s32 *)((char *)(arg3) + 0x0)) = func_150484A0((*(s32 *)((char *)(arg2) + 0x0)), (*(s32 *)((char *)(arg2) + 0x8)));
    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) (random_float() * D_800A1310);
    (*(f32 *)((char *)(arg3) + 0x10)) = (f32) (random_float() * D_800A1314);
    (*(f32 *)((char *)(arg3) + 0x18)) = (f32) (random_float() * 0.5f);
    temp_f2 = (*(s32 *)((char *)(arg2) + 0x0));
    temp_f16 = (*(s32 *)((char *)(arg2) + 0x8));
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) (func_150484A0(sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)), (*(f32 *)((char *)(arg2) + 0x4))) - D_800A1318);
    (*(f32 *)((char *)(arg3) + 0xC)) = (f32) (random_float() * D_800A131C);
    (*(f32 *)((char *)(arg3) + 0x14)) = (f32) (random_float() * D_800A1320);
    (*(f32 *)((char *)(arg3) + 0x1C)) = (f32) (random_float() * 0.5f);
}

void func_150E71E4(s32 arg0, void * arg1, void *arg2, void *arg3) {
    (*(s32 *)((char *)(arg3) + 0x0)) = func_150484A0((*(s32 *)((char *)(arg2) + 0x0)), (*(s32 *)((char *)(arg2) + 0x8)));
    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) D_800A1324;
    (*(f32 *)((char *)(arg3) + 0x10)) = (f32) (random_float() * D_800A1328);
    (*(f32 *)((char *)(arg3) + 0x18)) = (f32) (random_float() * D_800A132C);
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) D_800A1330;
    (*(f32 *)((char *)(arg3) + 0xC)) = (f32) D_800A1334;
    (*(f32 *)((char *)(arg3) + 0x14)) = (f32) (random_float() * D_800A1338);
    (*(f32 *)((char *)(arg3) + 0x1C)) = (f32) (random_float() * D_800A133C);
}

void func_150E7290( s32 arg0, s32 arg1, s32 arg2) {
    void * sp60;
    f32 sp5C;
    f32 sp58;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s16 sp52;
    s8 sp50;
    u32 sp48;
    s32 sp44;
    u32 sp40;
    f32 sp3C;
    s32 var_t0;
    u32 var_v1;

    if (random_float() < D_800A1340) {
        (*(s32 *)((char *)&(sp60) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088A5C) + 0x0));
        (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088A5C) + 0x4));
        if (random_float() < D_800A1344) {
            sp58 = (random_float() * 300.0f) + -150.0f;
            sp5C = (random_float() * 200.0f) + -100.0f;
            sp3C = random_float();
            sp40 = random_u32();
            var_t0 = 0;
            if (random_u32() & 1) {
                var_t0 = 2;
            }
            sp44 = var_t0;
            if (random_u32() & 1) {
                var_v1 = 4;
            } else {
                var_v1 = 0;
            }
            sp48 = var_v1;
            sp44 = var_t0;
            func_150E75A0(&sp58, ((sp3C * 150.0f) + 200.0f) * D_800A1348, (s16) ((sp40 % 201U) + 0x1F4), (var_v1 | var_t0 | 9) & 0xFF, (random_u32() % 26U) + 0x64, 0xFFU, 0x40, 3, &sp60, 2, (s32) arg1, arg2);
        } else {
            sp3C = random_float();
            sp48 = random_u32();
            func_150E76D0(((sp3C * 100.0f) + 150.0f) * D_800A134C, (s16) ((sp48 % 201U) + 0x1F4), 9U, ((random_u32() % 26U) + 0x64) & 0xFF, 0xFFU, 0x40, 3, &sp60, 2, (s32) arg1, arg2);
        }
        func_10010F30(0x360, 0x7FFF, 0, 0, 0);
        func_15164F0C(1, arg0, 0, arg1, arg2);
        sp50 = 1;
        sp52 = (random_u32() % 26U) + 0x19;
        sp55 = 1;
        sp54 = (random_u32() % 6U) + 3;
        sp56 = -1;
        func_151D8868(&sp50, 0, 0xFF, 0);
    }
}

void func_150E75A0(f32 *arg0, f32 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, s16 arg6, s16 arg7, void * *arg8, s32 arg9, u8 arg10, s32 arg11) {
    s8 sp6D;
    s8 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    u8 sp4F;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    u8 sp4A;
    s8 sp49;
    s8 sp48;
    s8 sp47;
    s8 sp46;
    s16 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    u8 sp3C;
    f32 sp38;
    f32 sp34;
    void * sp2C;
    u8 sp28;

    sp28 = D_80088A64;
    (*(s32 *)((char *)&(sp2C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp3C = sp28;
    sp40 = arg3 | 0x40;
    sp3E = arg2;
    sp4C = 0xFF;
    sp4D = 0xFF;
    sp44 = arg7;
    sp46 = 4;
    sp47 = 0xFF;
    sp48 = 0xE6;
    sp49 = 0xBE;
    sp4B = 0xFF;
    sp42 = arg6;
    sp4A = arg4;
    sp34 = arg1;
    sp38 = arg1;
    sp4E = 0xFF;
    sp50 = 1;
    sp54 = 0;
    sp58 = 0;
    sp6C = 0;
    sp6D = 0xA;
    sp5C = 7;
    sp60 = 0x3C;
    sp64 = 0x80;
    sp68 = 0x20;
    sp4F = arg5;
    func_1515548C(arg1, &sp2C, NULL, arg8, arg9, 0, (s32) arg10, arg11);
}

void func_150E76D0(f32 arg0, s16 arg1, u8 arg2, u8 arg3, u8 arg4, s16 arg5, s16 arg6, void * *arg7, void * *arg8, u8 arg9, s32 arg10) {
    void *sp;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    u8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s8 sp73;
    u8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s16 sp6C;
    s16 sp6A;
    u16 sp68;
    s16 sp66;
    s8 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    u8 sp53;
    void * sp44;
    void * sp38;
    s16 temp_a0;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = random_u32();
    sp66 = arg1;
    sp6C = arg6;
    temp_v1 = temp_v0 & 3;
    sp68 = arg2 & 0xFFF9;
    sp6E = 5;
    sp6F = 0xFF;
    sp70 = 0xE6;
    sp71 = 0xBE;
    sp73 = 0xFF;
    sp6A = arg5;
    sp72 = arg3;
    temp_a0 = temp_v1 & 0xFF;
    sp53 = temp_v1;
    sp74 = 0xFF;
    sp75 = 0xFF;
    sp76 = 0xFF;
    sp78 = 1;
    sp7C = 0;
    sp80 = 0;
    sp94 = 0;
    sp95 = 0xA;
    sp84 = 7;
    sp88 = 0x3C;
    sp8C = 0x80;
    sp90 = 0x20;
    sp60 = arg0;
    sp5C = arg0;
    sp77 = arg4;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
        (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088A68) + 0x0));
        (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088A68) + 0x4));
        (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80088A68) + 0x8));
        sp64 = (s8) (*(s8 *)((char *)((char *)(sp) + ((random_u32(temp_a0) % 3U) * 4)) + 0x44));
        sp58 = (random_float() * 160.0f) + -80.0f;
        switch (sp53) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            sp68 |= 2;
            sp54 = 145.0f - arg0;
            break;
        case 1:                                     /* switch 2 */
            sp54 = arg0 - 145.0f;
            break;
        }
        break;
    case 2:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        (*(s32 *)((char *)&(sp38) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088A74) + 0x0));
        (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088A74) + 0x4));
        (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80088A74) + 0x8));
        sp64 = (s8) (*(s8 *)((char *)((char *)(sp) + ((random_u32(temp_a0) % 3U) * 4)) + 0x38));
        sp54 = (random_float() * 260.0f) + -130.0f;
        switch (sp53) {                             /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            sp68 |= 4;
            sp58 = 110.0f - arg0;
            break;
        case 3:                                     /* switch 3 */
            sp58 = arg0 - 110.0f;
            break;
        }
        break;
    }
    func_1515548C((f32)(s32)&sp54, NULL, arg7, arg8, 0, (s32) arg9, arg10);
}

s32 func_150E7994(s16 arg0, f32 arg1, s32 arg2, s32 arg3) {
    s32 spC4;
    s16 spC2;
    s16 spC0;
    f32 spBC;
    f32 spB8;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s16 spB2;
    s8 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f20;
    s16 var_s1;
    s32 temp_v0;
    void *temp_s0;

    if (arg0 < 2) {
        return 0;
    }
    func_1512D748((D_800BE9E8 * 0x9A0) + D_800DBFF0, 0, 1);
    spB0 = 1;
    spB2 = (random_u32() % 11U) + 0x1E;
    spB4 = 8;
    spB6 = -1;
    spB5 = 1;
    func_151D8868(&spB0, 0, 0xFF, 0);
    spB8 = arg1;
    spC0 = arg0;
    spC2 = 0;
    spBC = 0.0f;
    temp_v0 = func_151491F4(0x12C, -1, 0x10, 1, 0xC, (arg0 * 8) + 0x10, arg2 & 0xFF, arg3);
    spC4 = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &spB8, 0xC);
        sp90 = -146.0f;
        temp_f8 = random_float() * 160.0f;
        sp98 = -50.0f;
        sp94 = temp_f8 - 80.0f;
        temp_f18 = random_float() * 160.0f;
        spA0 = 50.0f;
        sp9C = temp_f18 - 80.0f;
        temp_f8_2 = random_float() * 160.0f;
        spA8 = 146.0f;
        spA4 = temp_f8_2 - 80.0f;
        var_f20 = -1.0f;
        var_s1 = 0;
        spAC = (random_float() * 160.0f) - 80.0f;
        if (arg0 > 0) {
            do {
                temp_f24 = func_15142B04(var_f20);
                temp_f26 = func_15142AC0(var_f20);
                temp_f22 = func_15142A80(var_f20);
                temp_s0 = spC4 + 0x38 + (var_s1 * 8);
                (*(f32 *)((char *)(temp_s0) + 0x0)) = (f32) ((spA8 * func_15142B44(var_f20)) + ((temp_f22 * sp90) + (temp_f26 * sp98) + (temp_f24 * spA0)));
                temp_f24_2 = func_15142B04(var_f20);
                temp_f26_2 = func_15142AC0(var_f20);
                temp_f22_2 = func_15142A80(var_f20);
                temp_f0 = func_15142B44(var_f20);
                var_s1 += 1;
                var_f20 += 3.0f / (f32) (arg0 - 1);
                (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((spAC * temp_f0) + ((temp_f22_2 * sp94) + (temp_f26_2 * sp9C) + (temp_f24_2 * spA4)));
            } while (var_s1 < arg0);
        }
    }
    return spC4;
}

void func_150E7C9C(void *arg0) {
    f32 sp9C;
    f32 sp98;
    f32 temp_f20;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + ((*(f32 *)((char *)(arg0) + 0x28)) * D_800BE9A4));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) > 1.0f) && ((*(s32 *)((char *)(temp_s0) + 0x8)) != (*(s32 *)((char *)(temp_s0) + 0xA)))) {
loop_3:
        sp98 = (*(s32 *)((char *)(((char *)(temp_s0) + ((*(s32 *)((char *)(temp_s0) + 0xA)) * 8))) + 0x10));
        sp9C = (*(s32 *)((char *)(((char *)(temp_s0) + ((*(s32 *)((char *)(temp_s0) + 0xA)) * 8))) + 0x14));
        temp_f20 = random_float();
        var_s2 = 0;
        if (random_u32() & 1) {
            var_s2 = 4;
        }
        var_s1 = 0;
        if (random_u32() & 1) {
            var_s1 = 2;
        }
        func_150E75A0(&sp98, (temp_f20 * 12.0f) + 30.0f, 0x12C, (var_s1 | var_s2) & 0xFF, (u32) ((random_float() * 25.0f) + 100.0f), 0xFFU, 1, 0xFF, NULL, 0, (s32) (*(u32 *)((char *)(arg0) + 0xC)), (s32) (*(u32 *)((char *)(arg0) + 0x1)));
        func_10010F30(0x360, 0x7FFF, (u32) ((sp98 * D_800A1350) + 64.0f) & 0xFF, 0, 0);
        (*(s16 *)((char *)(temp_s0) + 0xA)) = (s16) ((*(s16 *)((char *)(temp_s0) + 0xA)) + 1);
        (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x4)) - 1.0f);
        if (((*(s32 *)((char *)(temp_s0) + 0x4)) > 1.0f) && ((*(s32 *)((char *)(temp_s0) + 0x8)) != (*(s32 *)((char *)(temp_s0) + 0xA)))) {
            goto loop_3;
        }
    }
    if ((*(s32 *)((char *)(temp_s0) + 0xA)) >= (*(s32 *)((char *)(temp_s0) + 0x8))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
    }
}

void func_150E7FEC(f32 arg0, u8 arg1, s32 arg2, void *arg3, s16 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, s32 arg11) {
    s16 sp80;
    s16 sp7E;
    s32 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    u8 sp70;
    u8 sp6F;
    u8 sp6E;
    s8 sp6D;
    u8 sp6C;
    s32 sp68;
    s32 sp64;
    s8 sp63;
    s8 sp62;
    s16 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    u32 sp4C;
    u32 sp48;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    sp7E = 0x14;
    sp80 = 0xC;
    sp62 = 0x4F;
    sp63 = 0;
    if (arg4 == -1) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    var_v0 = 0;
    if (arg5 != 0) {
        var_v0 = 0x400;
    }
    sp5C = var_v0 | var_v1 | 0x9300 | 0x40000;
    if (arg4 == -1) {
        sp60 = 0x12C;
    } else {
        sp60 = arg4 + 0x14;
    }
    sp64 = 0;
    sp68 = 0;
    sp6D = 0xFF;
    sp71 = 0xFF;
    sp6C = arg1;
    sp6E = arg7;
    sp6F = arg8;
    sp70 = arg9;
    if (arg6 != 0) {
        var_v0_2 = 2;
    } else {
        var_v0_2 = 1;
    }
    sp74 = var_v0_2 + 0x480000;
    sp72 = 0;
    sp73 = 6;
    if (arg5 != 0) {
        sp58 = 3;
        sp54 = 0xFF;
    } else {
        sp58 = 0;
        sp54 = 0;
    }
    sp48 = random_u32(arg4, arg5);
    sp4C = random_u32();
    func_1513C650(&sp5C, 0, 0, arg2, (*(s32 *)((char *)(arg3) + 0x0)), (*(s32 *)((char *)(arg3) + 0x4)), (*(s32 *)((char *)(arg3) + 0x8)), arg0, arg0, sp48 & 0xFF, ((random_u32() & 1) * 2) + (sp4C & 1), sp58, sp54, 0, (s32) arg10, arg11);
}

void func_150E81A8(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp88;
    void * sp84;
    s8 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s16 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s32 sp60;
    s32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    void * sp38;
    s32 sp34;
    s32 sp30;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;
    s16 sp28;
    s8 sp26;
    s8 sp25;
    s8 sp24;
    s16 sp22;
    s8 sp20;
    s32 temp_a3;
    void *temp_t8;

    temp_a3 = arg0 & 0xFF;
    if ((temp_a3 == 4) || (temp_a3 == 5) || (temp_a3 == 6) || (temp_a3 == 7)) {
        temp_t8 = (temp_a3 * 0xC) + &D_800A1290;
        (*(s32 *)((char *)&(sp84) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
        (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
        (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
        sp88 += 200.0f;
        func_151D3FF4(&sp84, arg1, arg2, temp_a3);
        sp28 = 0;
        sp2A = 0xFF;
        sp2C = -0x40;
        sp2E = 0x4D;
        sp30 = 0xA;
        sp34 = 5;
        (*(s32 *)((char *)&(sp38) + 0x0)) = (s32) (*(s32 *)((char *)&(sp84) + 0x0));
        (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)&(sp84) + 0x4));
        (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)&(sp84) + 0x8));
        sp44 = 252.0f;
        sp48 = 117.0f;
        sp4C = 308.0f;
        sp50 = 256.0f;
        sp5C = 4;
        sp60 = 7;
        sp74 = 0x19;
        sp76 = 0xF;
        sp78 = 0x64;
        sp7A = 0x64;
        sp7C = 0xC;
        sp7E = 0x14;
        sp80 = 0;
        sp54 = D_800A1354;
        sp58 = D_800A1358;
        sp64 = 27.0f;
        sp68 = D_800A135C;
        sp6C = D_800A1360;
        sp70 = D_800A1364;
        func_1514FCE8(&sp28, arg1, arg2);
        sp20 = 1;
        sp22 = (random_u32() % 11U) + 0x1E;
        sp24 = 8;
        sp26 = -1;
        sp25 = 1;
        func_151D8868(&sp20, 0, 0xFF, 0);
    }
}

void func_150E83AC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp4C;
    f32 sp40;
    s16 var_v1;
    s32 temp_v0;
    s32 var_v0;

    (*(s32 *)((char *)&(sp40) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    var_v1 = arg1;
    (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp4C = 0.0f;
    if (arg1 == -1) {
        var_v1 = 0x12C;
    }
    if (arg1 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    temp_v0 = func_15149130(var_v1, -1, 0x28, -1, var_v0, 0, 0x10, (s32) arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp40, 0x10);
    }
}

void func_150E8470(void *arg0) {
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA6;
    s16 spA4;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    f32 temp_f18;
    f32 temp_f28;
    f32 temp_f6;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((D_800A1368 + (random_float() * D_800A136C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        spB9 = 0x6C;
        spA4 = 0x5103;
        sp9C = 0x200005;
        spBA = 0x73;
        spBC = 2;
        spF4 = 0x80DE07;
        spFC = 8;
        spFD = 6;
        spFE = 0x19;
        spFF = -1;
        sp90 = 0;
        sp91 = 0;
        spA0 = 0;
        spA8 = 0;
        spAC = 0;
        sp100 = -1;
        sp101 = 0;
        spBE = 0x73;
        spB0 = 0x24;
        spB1 = 0x22;
        spB2 = 0x11;
        spB3 = 0xFF;
        spB4 = 0x7B;
        spB5 = 0x93;
        spB6 = 0xAA;
        spB8 = 0xFF;
        spC0 = D_800A1370;
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x8));
        temp_f28 = D_800A1374;
        spD8 = 0.0f;
        spDC = 0.0f;
        spE0 = 0.0f;
        spE4 = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        do {
            sp92 = (random_u32() % 5U) + 4;
            sp93 = (random_u32() % 5U) + 4;
            sp94 = random_float() * 13.0f;
            sp98 = random_float() * 13.0f;
            temp_f18 = random_float() * 40.0f;
            spF4 &= ~0xC0;
            spF0 = (temp_f18 + 68.0f) * temp_f28;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            spF4 |= var_v0 | var_s0;
            spB7 = (random_u32() % 156U) + 0x64;
            spA6 = (random_u32() % 34U) + 0x8D;
            temp_f6 = (random_float() * 71.0f) + 80.0f;
            spC8 = temp_f6;
            spC4 = temp_f6;
            temp_v0 = func_15130280(&sp9C, 1, 0, 0xC, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, (f32 *) &sp90, 0xC);
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}

s32 func_150E8824(s32 arg0, void * arg1) {
    func_15131828(arg0 + 0xAC, arg0 + 0xA8, arg0 + 0xAA);
    return 1;
}

void func_150E8854(void) {
    f32 sp30;
    s32 temp_v0;

    sp30 = 10.0f;
    temp_v0 = func_15149130(0x12C, -1, 0x35, -1, 0, 0, 4, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp30, 4);
    }
}

void func_150E88C0(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x28)) < 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((random_float() * D_800A1378) + 201.0f);
        func_150E8930(arg0);
    }
}

void func_150E8930(void) {
    void * sp30;
    s8 sp2E;
    s8 sp2D;
    s8 sp2C;
    s16 sp2A;
    s8 sp28;
    s32 *temp_v1;

    (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088A80) + 0x0));
    (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088A80) + 0x4));
    func_15169260(&sp30, 2, 0, 0x1B);
    func_15164F0C(0, D_800BE9EB, 0, 0xFFU, 1);
    sp28 = 1;
    sp2A = (random_u32() % 21U) + 0x14;
    sp2D = 1;
    sp2C = (random_u32() % 6U) + 3;
    sp2E = -1;
    func_151D8868(&sp28, 0, 0xFF, 1);
    temp_v1 = D_800DCDC4;
    if (temp_v1 != NULL) {
        func_150E8A80();
    }
    if (temp_v1 != NULL) {
        func_150E90DC();
    }
    func_10010F30(0x4C8, 0x7FFF, 0x40, (s16) (0x200 - (random_u32() & 0x400)), 0);
    func_10010F30(0x4CD, 0x5DC0, 0x40, (s16) (0x200 - (random_u32() & 0x400)), 0);
}

void func_150E8A80(void) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 temp_v0;

    sp38 = D_800A137C;
    sp3C = D_800A1380;
    sp40 = 0.0f;
    temp_v0 = func_15149130((s16) ((random_u32() % 41U) + 0x1E), -1, 0x33, -1, 1, 0, 0xC, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 0xC);
    }
}

void func_150E8B1C(void *arg0) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f2;
    s32 *var_v0;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = func_15144B34(D_800BE9E8);
    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + (((*(f32 *)((char *)(arg0) + 0x28)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x4)))) * D_800BE9A4 * D_800DCD90));
    if ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f) {
        temp_f26 = D_800A1384;
        temp_f24 = D_800A1388;
        temp_f22 = D_800A138C;
        do {
            var_v0 = D_800DCDC4;
            var_f2 = random_float() * D_800DCD90;
            var_f12 = (*(s32 *)((char *)(var_v0) + 0x8));
            if (var_f12 < var_f2) {
                do {
                    var_v0 = (*(s32 *)((char *)(var_v0) + 0xC));
                    var_f2 -= var_f12;
                    var_f12 = (*(s32 *)((char *)(var_v0) + 0x8));
                } while (var_f12 < var_f2);
            }
            func_1514470C(var_f12, *var_v0, &spA0);
            temp_f0 = spA0 - (*(s32 *)((char *)(temp_s1) + 0x0));
            temp_f2 = spA4 - (*(s32 *)((char *)(temp_s1) + 0x4));
            temp_f12 = spA8 - (*(s32 *)((char *)(temp_s1) + 0x8));
            if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < temp_f22) {
                spAC = temp_f24;
                spB0 = temp_f26;
                spB4 = 0.0f;
                temp_v0 = func_15149130((s16) ((random_u32((s16) temp_f12) % 13U) + 5), -1, 0x34, -1, 1, 0, 0x18, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x28, &spA0, 0x18);
                }
            }
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f);
    }
}

void func_150E8D5C(void *arg0) {
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spEC;
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
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s16 sp9E;
    s16 sp9C;
    s32 sp98;
    s32 sp94;
    f32 sp8C;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_t9;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x14)) + (((*(f32 *)((char *)(temp_s1) + 0xC)) + (random_float() * (*(f32 *)((char *)(temp_s1) + 0x10)))) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0x14)) > 1.0f) {
        spB1 = 0x16;
        sp9C = 0xE01;
        temp_f28 = D_800A1390;
        sp94 = 0x200005;
        sp98 = 0;
        spA0 = 0;
        spA4 = 0;
        spEC = 0x801E05;
        spF4 = 3;
        spF5 = 3;
        spF6 = 0x1A;
        spF7 = -1;
        spD0 = 0.0f;
        spD4 = 0.0f;
        spD8 = 0.0f;
        spE8 = 0.0f;
        spAB = 0xFF;
        spB0 = 0xFF;
        spB2 = 0x1E;
        spB4 = 8;
        spDC = 0.0f;
        spE4 = 0.0f;
        temp_f26 = D_800A1394;
        do {
            sp8C = temp_f28;
            temp_t9 = (random_u32() & 0xF) + 0x28;
            spB6 = temp_t9;
            sp9E = temp_t9;
            spAF = (random_u32() % 119U) + 0x64;
            temp_f2 = (random_float() * 59.0f) + 80.0f;
            spBC = temp_f2;
            spC0 = temp_f2;
            temp_f8 = (random_float() * D_800A1398) + D_800A139C;
            spEC &= ~0xC0;
            spB8 = temp_f8 * D_800A13A0;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            spEC |= var_v0 | var_s0;
            spAC = 0x44;
            spAD = 0x3C;
            spAE = 0x27;
            spA8 = 0xF;
            spA9 = 0x11;
            spAA = 5;
            temp_f20 = random_float();
            temp_f22 = random_float();
            func_151436B4(temp_f20 * temp_f26, temp_f22 * temp_f26, random_float() * 20.0f, &spC4);
            spC4 += (*(s32 *)((char *)(arg0) + 0x28));
            spC8 += (*(s32 *)((char *)(temp_s1) + 0x4));
            spCC += (*(s32 *)((char *)(temp_s1) + 0x8));
            spE0 = ((random_float() * D_800A13A4) + D_800A13A8) * D_800A13AC;
            temp_v0 = func_15130374(&sp94, 0, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 4);
            }
            (*(f32 *)((char *)(temp_s1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x14)) > 1.0f);
    }
}

void func_150E90DC(void) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 temp_v0;

    sp38 = D_800A13B0;
    sp3C = D_800A13B4;
    sp40 = 0.0f;
    temp_v0 = func_15149130((s16) ((random_u32() % 26U) + 5), -1, 0x36, -1, 1, 0, 0xC, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 0xC);
    }
}

void func_150E9178(void *arg0) {
    s32 spDC;
    s8 spD9;
    s8 spD8;
    s32 spD4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f12;
    f32 var_f2;
    s32 *var_v0;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = func_15144B34(D_800BE9E8);
    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + (((*(f32 *)((char *)(arg0) + 0x28)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x4)))) * D_800BE9A4 * D_800DCD90));
    if ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f) {
        temp_f30 = D_800A13B8;
        temp_f26 = D_800A13BC;
        temp_f24 = D_800A13C0;
        temp_f22 = D_800A13C4;
        do {
            var_v0 = D_800DCDC4;
            var_f2 = random_float() * D_800DCD90;
            var_f12 = (*(s32 *)((char *)(var_v0) + 0x8));
            if (var_f12 < var_f2) {
                do {
                    var_v0 = (*(s32 *)((char *)(var_v0) + 0xC));
                    var_f2 -= var_f12;
                    var_f12 = (*(s32 *)((char *)(var_v0) + 0x8));
                } while (var_f12 < var_f2);
            }
            func_1514470C(var_f12, *var_v0, &spA4);
            temp_f0 = spA4 - (*(s32 *)((char *)(temp_s1) + 0x0));
            temp_f2 = spA8 - (*(s32 *)((char *)(temp_s1) + 0x4));
            temp_f12 = spAC - (*(s32 *)((char *)(temp_s1) + 0x8));
            if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < temp_f22) {
                spB0 = temp_f24;
                spB4 = temp_f26;
                spB8 = 0.0f;
                spBC = temp_f30;
                spD4 = 0;
                spD8 = 0;
                spD9 = 0;
                spDC = 0;
                temp_v0 = func_15149130((s16) ((random_u32((s16) temp_f12) % 13U) + 5), -1, 0x37, -1, 1, 0, 0x3C, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x28, &spA4, 0x3C);
                }
            }
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f);
    }
}

void func_150E93DC(void *arg0) {
    s16 sp11C;
    s16 sp11A;
    s8 sp118;
    s32 sp114;
    s8 sp112;
    s8 sp110;
    s8 sp10F;
    s8 sp10E;
    s8 sp10D;
    s8 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s32 sp104;
    s8 sp100;
    s16 spFE;
    s16 spFC;
    s32 spF8;
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
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 sp88;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) + (((*(f32 *)((char *)(temp_s0) + 0xC)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x10)))) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s0) + 0x14)) > 1.0f) {
        temp_f30 = D_800A13C8;
        spA8 = 0.0f;
        spAC = 1.0f;
        spC4 = 1.0f;
        spC8 = 1.0f;
        spCC = 1.0f;
        spF8 = 0x49E8;
        spDC = 0.0f;
        spE0 = 0.0f;
        spE4 = 0.0f;
        spEC = 0.0f;
        sp100 = 0;
        sp104 = 0;
        sp108 = 0xFF;
        sp10A = 0;
        sp10B = 0;
        sp10C = 0;
        sp10D = 0;
        sp10E = 0;
        sp10F = 0;
        sp110 = 2;
        sp112 = 2;
        sp114 = 0;
        sp118 = 0;
        sp11A = 1;
        sp11C = 0xFF;
        temp_f24 = D_800A13CC;
        do {
            random_u32();
            spFE = (s16) D_800A12F0;
            temp_f2 = ((random_float() * D_800A13D0) + 400.0f) * *(&D_800A12F4 + (0 * 4)) * temp_f24;
            spB0 = temp_f2;
            spB4 = temp_f2;
            spB8 = random_float() * 360.0f;
            spBC = random_float() * 360.0f;
            spC0 = random_float() * 360.0f;
            spF4 = ((random_float() * D_800A13D4) + D_800A13D8) * temp_f24;
            random_u32();
            spFC = 0x64;
            spE8 = ((random_float() * temp_f30) + D_800A13DC) * temp_f24;
            spF0 = ((random_float() * temp_f30) + D_800A13E0) * temp_f24;
            temp_f20 = random_float();
            temp_f22 = random_float();
            func_151436B4(temp_f20 * D_800A13E4, temp_f22 * D_800A13E4, random_float() * 50.0f, &spD0);
            spD0 += (*(s32 *)((char *)(arg0) + 0x28));
            spD4 += (*(s32 *)((char *)(temp_s0) + 0x4));
            sp109 = 8;
            spD8 += (*(s32 *)((char *)(temp_s0) + 0x8));
            temp_v0 = func_15132A4C(&spA8, 3, 0xFF, 0x1C, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x170, &sp88, 0x1C);
            }
            (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x14)) > 1.0f);
    }
}

s32 func_150E971C(void *arg0) {
    s16 sp78;
    s16 sp76;
    s32 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s32 sp60;
    s32 sp5C;
    s8 sp5B;
    s8 sp5A;
    s16 sp58;
    s32 sp54;
    f32 sp50;
    void *sp48;
    f32 temp_f2;
    f32 temp_f8;
    s32 var_v0;
    void *temp_v1;

    func_151337C0(arg0);
    temp_v1 = (char *)(arg0) + 0x170;
    var_v0 = 1;
    if ((*(s32 *)((char *)(arg0) + 0x3C)) < (*(s32 *)((char *)(arg0) + 0x170))) {
        if (((*(s32 *)((char *)(temp_v1) + 0x4)) & 0x1F) == 0xA) {
            sp48 = temp_v1;
            temp_f8 = random_float() * 20.0f;
            sp5A = 0xB;
            sp54 = 0x9701;
            sp58 = 0x64;
            temp_f2 = temp_f8 + 20.0f;
            sp5B = 0;
            sp5C = 0;
            sp60 = 0;
            sp64 = 0xFF;
            sp65 = 0xFF;
            sp66 = 0xFF;
            sp67 = 0xFF;
            sp68 = 0xFF;
            sp69 = 0xFF;
            sp6C = 0x3B0003;
            sp6A = 0;
            sp6B = 7;
            sp76 = 0x14;
            sp78 = 0xC;
            sp50 = temp_f2;
            func_1513C73C(&sp54, 0, 0, (char *)(temp_v1) + 8, (*(s32 *)((char *)(arg0) + 0x38)), (*(s32 *)((char *)(arg0) + 0x170)) + 5.0f, (*(s32 *)((char *)(arg0) + 0x40)), temp_f2, temp_f2, random_u32(0x41A00000) & 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        }
        var_v0 = 0;
    }
    return var_v0;
}
