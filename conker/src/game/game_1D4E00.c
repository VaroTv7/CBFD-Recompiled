/**
 * Auto-decompiled from asm/1D4E00.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                /* extern */
void * func_1510F800();                                 /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();          /* extern */
void * func_151432BC();            /* extern */
void * func_1514373C();            /* extern */
void * func_15143874();              /* extern */
f32 func_15143E64();                           /* extern */
void *func_15144B34();                           /* extern */
void * func_15145548(); /* extern */
s32 func_15145C90();                             /* extern */
void * func_15146078();                /* extern */
s32 func_151464B8();                             /* extern */
s32 func_1514B8E4(); /* extern */
void * func_1516284C(); /* extern */
void *func_15167A68();      /* extern */
void * func_151D5D60();    /* extern */
void * func_151D5E30();                       /* extern */
void * memcpy();                   /* extern */
void func_151A8340(void *arg0, s16 arg1, s16 arg2, f32 arg3, s16 arg4);
void func_151A8F1C();
void func_151A8F6C();
void func_151A931C();
extern s32 D_8008F940;
extern s32 D_8008F948;
extern s32 D_8008F94C;
extern s32 D_8008F958;
extern s32 D_8008F964;
extern s32 D_8008F970;
extern s32 D_8008F980;
extern s32 D_8008F984;
extern s32 D_8008F9A4;
extern s32 D_8008F9AC;
extern s32 D_8008FA60;
extern s32 D_80090D70;
extern s32 D_800A4AC8;
extern f32 D_800A8DE0;
extern f32 D_800A8F50;
extern f32 D_800A8F54;
extern f32 D_800A8F58;
extern f32 D_800A8F5C;
extern f32 D_800A8F60;
extern f32 D_800A8F64;
extern f32 D_800A8F68;
extern f32 D_800A8F6C;
extern s32 D_800D2C9C;

void *func_151A7950(s16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp2C;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = func_15167A68(0x2D, arg3, ((*(s32 *)((char *)(arg0) + 0x2)) * 0x18) + arg1 + 0x80, 1, (s32) arg2, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp2C = temp_v0;
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x50);
    temp_a2 = (char *)(temp_v0) + 0x80;
    (*(s32 *)((char *)(temp_v0) + 0x64)) = temp_a2;
    (*(s32 *)((char *)(temp_v0) + 0x68)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x60)) = (void *) ((char *)(temp_a2) + ((*(s32 *)((char *)(arg0) + 0x2)) * 0x18));
    (*(s32 *)((char *)(temp_v0) + 0x80)) = 0.0f;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x64))) + 0x4)) = 0.0f;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x64))) + 0x8)) = 0.0f;
    (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x64)) + ((*(s32 *)((char *)(arg0) + 0x2)) * 0x18))) - 0x18)) = 0.0f;
    (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x64)) + ((*(s32 *)((char *)(arg0) + 0x2)) * 0x18))) - 0x14)) = 0.0f;
    (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x64)) + ((*(s32 *)((char *)(arg0) + 0x2)) * 0x18))) - 0x10)) = 1.0f;
    bzero((char *)(temp_v0) + 0x6C, 0x10);
    (*(s32 *)((char *)(sp2C) + 0x7C)) = (s32) (((*(s32 *)((char *)(sp2C) + 0x12)) << 6) + 0x140);
    return sp2C;
}

void func_151A7A90(void *arg0) {
    void *sp64;
    u8 sp63;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f8;
    s32 var_v1;
    s8 temp_v0;
    s8 temp_v0_2;
    u8 var_t1;
    void *var_t0;
    void *var_v0;

    f32 sp4C;
    f32 sp50;
    var_t0 = arg0;
    var_t1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x1C)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) ((*(s16 *)((char *)(arg0) + 0x10)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x10)) < 0) {
            var_t1 = 1;
        }
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2C));
    if ((temp_v0 != -1) && (var_t1 == 0)) {
        sp64 = var_t0;
        var_t1 = (((s32 (*)())((char *)(&D_8008F940 + (temp_v0 * 4))))(arg0) == 0) & 0xFF;
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x2D));
    if ((temp_v0_2 != -1) && (var_t1 == 0)) {
        sp64 = var_t0;
        var_t1 = (((s32 (*)())((char *)(&D_8008F948 + (temp_v0_2 * 4))))(arg0) == 0) & 0xFF;
    }
    if (var_t1 == 0) {
        (*(f32 *)((char *)(arg0) + 0x68)) = (f32) ((*(f32 *)((char *)(arg0) + 0x68)) - D_800BE9A4);
        if ((*(s32 *)((char *)(arg0) + 0x68)) < 0.0f) {
            sp63 = var_t1;
            sp64 = var_t0;
            func_151A8340(arg0, 0, (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - 1), (*(s16 *)((char *)(arg0) + 0x20)), 0x64);
            (*(f32 *)((char *)(arg0) + 0x68)) = (f32) ((random_float() * (*(f32 *)((char *)(arg0) + 0x18))) + (*(f32 *)((char *)(arg0) + 0x14)));
        }
        if ((*(s32 *)((char *)(arg0) + 0x1C)) & 2) {
            sp3C = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(arg0) + 0x30));
            sp40 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x34));
            sp44 = (*(s32 *)((char *)(arg0) + 0x44)) - (*(s32 *)((char *)(arg0) + 0x38));
            (*(s32 *)((char *)&(sp48) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x48));
            (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4C));
            (*(s32 *)((char *)&(sp48) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x50));
            sp63 = var_t1;
            sp64 = var_t0;
            func_151450B4(&sp3C, &sp48, &sp54);
            var_t1 = sp63;
            var_v1 = 0;
            sp54 *= (*(s32 *)((char *)(arg0) + 0x58));
            sp58 *= (*(s32 *)((char *)(arg0) + 0x58));
            sp5C *= (*(s32 *)((char *)(arg0) + 0x58));
            var_v0 = (*(s32 *)((char *)(arg0) + 0x64));
            if ((*(s32 *)((char *)(arg0) + 0x12)) > 0) {
                do {
                    temp_f0 = (*(s32 *)((char *)(var_v0) + 0x0));
                    temp_f2 = (*(s32 *)((char *)(var_v0) + 0x4));
                    temp_f18 = temp_f0 * sp54;
                    temp_f12 = (*(s32 *)((char *)(var_v0) + 0x8));
                    var_v1 += 1;
                    temp_f8 = temp_f2 * sp48;
                    var_v0 = (char *)(var_v0) + 0x18;
                    (*(f32 *)((char *)(var_v0) - 0xC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + temp_f18 + temp_f8 + (temp_f12 * sp3C));
                    (*(f32 *)((char *)(var_v0) - 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + (temp_f0 * sp58) + (temp_f2 * sp4C) + (temp_f12 * sp40));
                    (*(f32 *)((char *)(var_v0) - 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + (temp_f0 * sp5C) + (temp_f2 * sp50) + (temp_f12 * sp44));
                } while (var_v1 < (*(s32 *)((char *)(sp64) + 0x12)));
            }
        }
    }
    if (var_t1 != 0) {
        func_1516972C(arg0);
    }
}

void *func_151A7D6C(void *arg0, void *arg1, s32 arg2) {
    void *spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spA8;
    void *sp8C;
    f32 sp88;
    s8 sp87;
    s16 sp84;
    void * sp78;
    f32 sp58;
    f32 sp54;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 var_f12;
    f32 var_f14;
    f32 var_f2;
    s16 var_s1;
    s16 var_s2;
    s32 temp_lo;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t7;
    void *temp_t8;
    void *temp_t9;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;

    f32 spAC;
    f32 spB0;
    var_s0 = arg0;
    if ((*(s32 *)((char *)(arg1) + 0x1C)) & 2) {
        func_151D5D60((char *)(arg1) + 0x6C, arg2, (*(s32 *)((char *)(arg1) + 0x7C)), &spC0, 0);
        if (spC0 != NULL) {
            sp8C = func_15144B34(arg2);
            sp87 = 1;
            sp84 = (*(s32 *)((char *)(arg1) + 0x12)) - 1;
            var_s2 = 0;
            var_s1 = 1;
            temp_t0 = (*(s32 *)((char *)(arg1) + 0x64));
            temp_lo = sp84 * 0x18;
            var_s0 = func_15142FBC(func_1513F4E4(func_15142C10(func_15142B7C(func_15142E24(var_s0, &D_80090D70, 0, 0, 0, 0, 0x2C, 0, 0, &sp87, 3), 0x200005, 0x1F0600), (*(s32 *)((char *)(arg1) + 0x24)), (*(s32 *)((char *)(arg1) + 0x25)), (*(s32 *)((char *)(arg1) + 0x26)), (s32) (*(s32 *)((char *)(arg1) + 0x27)), &sp87), 0x19, &sp87), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &sp87);
            spB4 = (*(s32 *)((char *)(temp_t0) + 0xC)) - (*(s32 *)((char *)(((char *)(temp_t0) + temp_lo)) + 0xC));
            temp_t0_2 = (*(s32 *)((char *)(arg1) + 0x64));
            spB8 = (*(s32 *)((char *)(temp_t0_2) + 0x10)) - (*(s32 *)((char *)(((char *)(temp_t0_2) + temp_lo)) + 0x10));
            temp_t0_3 = (*(s32 *)((char *)(arg1) + 0x64));
            spBC = (*(s32 *)((char *)(temp_t0_3) + 0x14)) - (*(s32 *)((char *)(((char *)(temp_t0_3) + temp_lo)) + 0x14));
            func_15145548((*(s32 *)((char *)(arg1) + 0x64)) + temp_lo + 0xC, &spB4, sp8C, &spA8, &sp78);
            temp_f0 = (*(s32 *)((char *)(sp8C) + 0x0)) - spA8;
            temp_f2 = (*(s32 *)((char *)(sp8C) + 0x4)) - spAC;
            temp_f12 = (*(s32 *)((char *)(sp8C) + 0x8)) - spB0;
            temp_f18 = (spB8 * temp_f12) - (temp_f2 * spBC);
            temp_f4 = (spBC * temp_f0) - (temp_f12 * spB4);
            sp58 = temp_f4;
            temp_f10 = (spB4 * temp_f2) - (temp_f0 * spB8);
            sp54 = temp_f10;
            temp_f14 = (temp_f18 * temp_f18) + (temp_f4 * temp_f4) + (temp_f10 * temp_f10);
            sp88 = temp_f14;
            if (temp_f14 == 0.0f) {
                var_f2 = 0.0f;
                var_f12 = 0.0f;
                var_f14 = 0.0f;
            } else {
                temp_f16 = (*(s32 *)((char *)(arg1) + 0x28)) / sqrtf(sp88);
                var_f2 = temp_f18 * temp_f16;
                var_f12 = sp58 * temp_f16;
                var_f14 = sp54 * temp_f16;
            }
            if ((*(s32 *)((char *)(arg1) + 0x12)) >= 2) {
                do {
                    temp_t0_4 = (*(s32 *)((char *)(arg1) + 0x64));
                    temp_v1 = (char *)(temp_t0_4) + (var_s1 * 0x18);
                    temp_v1_2 = (char *)(temp_v1) + 0xC;
                    temp_a0 = (char *)(temp_t0_4) + (var_s2 * 0x18);
                    temp_a0_2 = (char *)(temp_a0) + 0xC;
                    (*(s16 *)((char *)(spC0) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(temp_a0) + 0xC)) + var_f2);
                    (*(s16 *)((char *)(spC0) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(temp_a0_2) + 0x4)) + var_f12);
                    (*(s16 *)((char *)(spC0) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(temp_a0_2) + 0x8)) + var_f14);
                    (*(s32 *)((char *)(spC0) + 0x8)) = 0;
                    (*(s32 *)((char *)(spC0) + 0xA)) = 0;
                    (*(s32 *)((char *)(spC0) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xD)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xE)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xF)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0x6)) = 0;
                    temp_t9 = (char *)(spC0) + 0x10;
                    spC0 = temp_t9;
                    (*(s16 *)((char *)(spC0) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(temp_a0) + 0xC)) - var_f2);
                    (*(s16 *)((char *)(spC0) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(temp_a0_2) + 0x4)) - var_f12);
                    (*(s16 *)((char *)(temp_t9) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(temp_a0_2) + 0x8)) - var_f14);
                    (*(s32 *)((char *)(spC0) + 0x8)) = 0x3C0;
                    (*(s32 *)((char *)(spC0) + 0xA)) = 0;
                    (*(s32 *)((char *)(spC0) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xD)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xE)) = 0xFF;
                    (*(s32 *)((char *)(temp_t9) + 0xF)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0x6)) = 0;
                    temp_t8 = (char *)(spC0) + 0x10;
                    spC0 = temp_t8;
                    (*(s16 *)((char *)(spC0) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1) + 0xC)) - var_f2);
                    (*(s16 *)((char *)(spC0) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1_2) + 0x4)) - var_f12);
                    (*(s16 *)((char *)(temp_t8) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1_2) + 0x8)) - var_f14);
                    (*(s32 *)((char *)(spC0) + 0x8)) = 0x3C0;
                    (*(s32 *)((char *)(spC0) + 0xA)) = 0x3C0;
                    (*(s32 *)((char *)(spC0) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xD)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xE)) = 0xFF;
                    (*(s32 *)((char *)(temp_t8) + 0xF)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0x6)) = 0;
                    temp_t7 = (char *)(spC0) + 0x10;
                    spC0 = temp_t7;
                    (*(s16 *)((char *)(spC0) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1) + 0xC)) + var_f2);
                    (*(s16 *)((char *)(spC0) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1_2) + 0x4)) + var_f12);
                    (*(s16 *)((char *)(temp_t7) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1_2) + 0x8)) + var_f14);
                    (*(s32 *)((char *)(spC0) + 0x8)) = 0;
                    (*(s32 *)((char *)(spC0) + 0xA)) = 0x3C0;
                    (*(s32 *)((char *)(spC0) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xD)) = 0xFF;
                    (*(s32 *)((char *)(spC0) + 0xE)) = 0xFF;
                    (*(s32 *)((char *)(temp_t7) + 0xF)) = 0xFF;
                    var_s1 += 1;
                    (*(s32 *)((char *)(spC0) + 0x6)) = 0;
                    spC0 = (char *)(spC0) + 0x10;
                    (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                    temp_s0 = (char *)(var_s0) + 8;
                    (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spC0) - 0x40);
                    temp_s0_2 = (char *)(temp_s0) + 8;
                    (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                    (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                    (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05000406;
                    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                    var_s0 = (char *)(temp_s0_2) + 8;
                    var_s2 += 1;
                } while (var_s1 < (*(s32 *)((char *)(arg1) + 0x12)));
            }
        }
    }
    return var_s0;
}

void func_151A8340(void *arg0, s16 arg1, s16 arg2, f32 arg3, s16 arg4) {
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    s16 temp_s4;
    s16 temp_s4_2;
    s16 var_s3;
    s16 var_s6;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 var_a2;
    void *temp_a0;
    void *temp_s1;
    void *temp_v1;

    var_s3 = arg1;
    var_s6 = arg2;
    var_a2 = var_s6 - var_s3;
    if (var_a2 >= 2) {
loop_1:
        if (arg4 > 0) {
            temp_lo = var_s3 * 0x18;
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x64));
            temp_s4 = var_s3 + (var_a2 >> 1);
            temp_a0 = temp_v0 + temp_lo;
            temp_s1 = temp_v0 + temp_lo;
            temp_v1 = temp_v0 + (var_s6 * 0x18);
            temp_f26 = (*(s32 *)((char *)(temp_v1) + 0x0)) - (*(s32 *)((char *)(temp_a0) + 0x0));
            temp_f28 = (*(s32 *)((char *)(temp_v1) + 0x4)) - (*(s32 *)((char *)(temp_a0) + 0x4));
            temp_f30 = (*(s32 *)((char *)(temp_v1) + 0x8)) - (*(s32 *)((char *)(temp_a0) + 0x8));
            temp_f22 = 2.0f * arg3;
            temp_lo_2 = temp_s4 * 0x18;
            temp_f24 = -arg3;
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x64))) + temp_lo_2)) = (random_float(temp_a0, temp_lo, var_a2) * temp_f22) + temp_f24 + ((*(s32 *)((char *)(temp_s1) + 0x0)) + (temp_f26 * 0.5f));
            (*(f32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x64)) + temp_lo_2)) + 0x4)) = (f32) ((random_float() * temp_f22) + temp_f24 + ((*(f32 *)((char *)(temp_s1) + 0x4)) + (temp_f28 * 0.5f)));
            (*(f32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x64)) + temp_lo_2)) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + (temp_f30 * 0.5f));
            temp_s4_2 = arg4 - 1;
            func_151A8340(arg0, var_s3, temp_s4, arg3, (s32) temp_s4_2);
            var_s6 = var_s6;
            var_a2 = var_s6 - temp_s4;
            var_s3 = temp_s4;
            arg4 = temp_s4_2;
            if (var_a2 >= 2) {
                goto loop_1;
            }
        }
    }
}

void func_151A8560(void *arg0) {
    func_151D5E30((char *)(arg0) + 0x6C, arg0);
}

void func_151A8584(void *arg0) {
    void * (*temp_v0)();

    temp_v0 = *(&D_8008F94C + ((*(s32 *)((char *)(arg0) + 0x5C)) * 4));
    if (temp_v0 != NULL) {
        temp_v0();
    }
    func_151A8560(arg0);
    func_15169804(arg0);
}

void func_151A85D4(void *arg0) {
    void * (*temp_v0)();

    temp_v0 = *(&D_8008F958 + ((*(s32 *)((char *)(arg0) + 0x5C)) * 4));
    if (temp_v0 != NULL) {
        temp_v0();
    }
    func_151A8560(arg0);
    func_15169824(arg0);
}

void *func_151A8624(void *arg0, void *arg1, s32 arg2, s16 arg3, f32 arg4, f32 arg5, void * *arg6, f32 arg7, void *arg8, u8 arg9, u8 arg10, s8 arg11, s32 arg12, u8 arg13, s32 arg14) {
    void *sp9C;
    s8 sp98;
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
    f32 sp6C;
    s8 sp69;
    s8 sp68;
    f32 sp64;
    void * sp60;
    f32 sp5C;
    s8 sp58;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s8 sp49;
    u8 sp48;
    f32 sp44;
    f32 sp40;
    s32 sp3C;
    s8 sp38;
    void * sp2C;
    u8 sp28;
    void *sp24;
    s8 var_v0;
    u8 var_v1_2;
    void *temp_v0;
    void *var_v1;

    var_v1_2 = arg9;
    if (arg0 == NULL) {
        return NULL;
    }
    if ((s32) var_v1_2 >= 2) {
        var_v1_2 = 0;
    }
    (*(s32 *)((char *)&(sp2C) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp38 = arg2 & 0xFF;
    sp49 = 0;
    sp24 = arg0;
    sp28 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp48 = arg10;
    if (arg8 != NULL) {
        (*(s32 *)((char *)&(sp3C) + 0x0)) = (*(s32 *)((char *)(arg8) + 0x0));
        (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)(arg8) + 0x4));
        (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)(arg8) + 0x8));
    } else {
        sp3C = 0;
        sp40 = 0.0f;
        sp44 = 0.0f;
    }
    if (arg3 == -1) {
        sp4C = 0x12C;
    } else {
        sp4C = arg3;
    }
    sp4E = 9;
    sp50 = arg4;
    sp54 = arg5;
    if (arg3 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    sp58 = var_v0;
    sp5C = D_800A8DE0;
    sp60 = (s32) *arg6;
    sp64 = arg7;
    if ((var_v1_2 != 0) && (var_v1_2 == 1)) {
        sp68 = 1;
    } else {
        sp68 = 1;
    }
    sp6C = 0.0f;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    sp80 = 0.0f;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp90 = 0.0f;
    sp98 = 2;
    sp69 = arg11;
    sp94 = 1.0f;
    temp_v0 = func_151A7950(&sp4C, arg12 + 0x28, arg13, arg14);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        sp9C = temp_v0;
        memcpy((*(s32 *)((char *)(temp_v0) + 0x60)), (s16 *) &sp24, 0x28);
        var_v1 = sp9C;
    }
    return var_v1;
}

s32 func_151A87F8(void *arg0) {
    void *sp8C;
    void *sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s32 sp78;
    void * sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_a3;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x60));
    temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x0));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == 0xFF)) {
        return 0;
    }
    temp_a3 = (*(s32 *)((char *)(temp_v0) + 0x1D4));
    if (temp_a3 != 0) {
        sp8C = temp_v1;
        sp88 = temp_v0;
        func_15143134((char *)(temp_v1) + 8, (char *)(arg0) + 0x30, temp_a3 + ((*(s32 *)((char *)(temp_v1) + 0x14)) << 6), temp_a3);
        if (!((*(s32 *)((char *)(temp_v1) + 0x25)) & 1)) {
            temp_f12 = (*(s32 *)((char *)(arg0) + 0x30));
            temp_f0 = (*(s32 *)((char *)(arg0) + 0x38));
            temp_f14 = (*(s32 *)((char *)(arg0) + 0x34));
            sp8C = temp_v1;
            if (func_150AC9C0(temp_f12, temp_f14, temp_f0, temp_f12 - ((*(s32 *)((char *)(temp_v0) + 0x14)) + (*(s32 *)((char *)(temp_v1) + 0x18))), temp_f14 - ((*(s32 *)((char *)(temp_v0) + 0x18)) + (*(s32 *)((char *)(temp_v1) + 0x1C))), temp_f0 - ((*(s32 *)((char *)(temp_v0) + 0x1C)) + (*(s32 *)((char *)(temp_v1) + 0x20))), 0, 0, (char *)(arg0) + 0x3C, (char *)(arg0) + 0x40, (char *)(arg0) + 0x44, 0, &sp78, 0, 0.0f) != 0) {
                if (func_15145C90(sp78) != 0) {
                    (*(u8 *)((char *)(sp8C) + 0x25)) = (u8) ((*(u8 *)((char *)(sp8C) + 0x25)) | 1);
                    goto block_11;
                }
                (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) & 0xFFFD);
                return 1;
            }
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) & 0xFFFD);
            return 1;
        }
block_11:
        sp7C = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(arg0) + 0x30));
        sp80 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x34));
        sp84 = (*(s32 *)((char *)(arg0) + 0x44)) - (*(s32 *)((char *)(arg0) + 0x38));
        temp_f0_2 = func_15143E64(&sp7C);
        (*(s32 *)((char *)(arg0) + 0x54)) = temp_f0_2;
        if (temp_f0_2 != 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) (1.0f / (*(f32 *)((char *)(arg0) + 0x54)));
            func_15146078(&sp7C, &sp60, (char *)(arg0) + 0x48);
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) | 2);
        } else {
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) & 0xFFFD);
        }
        goto block_15;
    }
    (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) & 0xFFFD);
block_15:
    return 1;
}

void func_151A8A20(void *arg0, s32 arg2) {
    void * (*temp_v1)(s32);
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x5C));
    if ((s32) var_v0 >= 3) {
        var_v0 = 0;
    }
    temp_v1 = *(&D_8008F964 + (var_v0 * 4));
    if (temp_v1 != NULL) {
        temp_v1(arg2 & 0xFF);
    }
}

void func_151A8A78(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x60));
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(temp_v0) + 0x0))) || ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(temp_v0) + 0x4)))) {
            func_1516972C((void *) temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
        if (temp_a0 == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_a0;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

s32 func_151A8B20(s16 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 spA4;
    s32 sp98;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    f32 sp78;
    f32 sp74;
    s16 sp4C;
    f32 sp44;
    f32 sp40;
    s16 *sp34;
    f32 temp_f0;
    f32 var_f0;
    f32 var_f2;
    s16 *temp_a3;
    s16 var_v1;
    s32 temp_v0;
    s32 var_v0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;

    memcpy(&sp4C, arg0, 0x28);
    sp90 = 0;
    sp94 = 0;
    sp95 = 0;
    sp98 = 0;
    sp74 = 0.0f;
    sp78 = D_800A8F50;
    if (arg1 == -1) {
        var_v1 = 0x12C;
    } else {
        var_v1 = arg1;
    }
    if (arg1 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    temp_v0 = func_15149130(var_v1, -1, 0x25, -1, var_v0, 0x22, arg2 + 0x58, (s32) arg3, arg4);
    spA4 = temp_v0;
    if (temp_v0 != 0) {
        temp_a3 = temp_v0 + 0x28;
        sp34 = temp_a3;
        memcpy(temp_a3, &sp4C, 0x58, temp_a3);
        temp_v1 = (*(s32 *)((char *)(sp34) + 0x0));
        if (temp_v1 & 4) {
            if ((temp_v1 & 2) && (temp_a0 = (*(s32 *)((char *)(sp34) + 0x4)), (temp_a0 != NULL))) {
                var_f0 = (f32) (*(f32 *)((char *)(temp_a0) + 0x0));
                var_f2 = (f32) (*(f32 *)((char *)(temp_a0) + 0x4));
            } else {
                var_f0 = (*(s32 *)((char *)(sp34) + 0x10));
                var_f2 = (*(s32 *)((char *)(sp34) + 0x18));
            }
            sp40 = var_f0;
            sp44 = var_f2;
            func_1510F800(0);
            (*(s32 *)((char *)(sp34) + 0x50)) = func_1510FD20((s32) var_f0, (s32) var_f2);
        } else {
            (*(s32 *)((char *)(sp34) + 0x50)) = 0;
        }
        if (((*(s32 *)((char *)(sp34) + 0x0)) & 2) && (temp_a0_2 = (*(s32 *)((char *)(sp34) + 0x4)), (temp_a0_2 != NULL))) {
            (*(s32 *)((char *)(sp34) + 0x54)) = func_15144598(temp_a0_2);
        } else {
            temp_f0 = (*(s32 *)((char *)(sp34) + 0x20));
            (*(f32 *)((char *)(sp34) + 0x54)) = (f32) (temp_f0 * temp_f0 * D_800A8F54);
        }
    }
    return spA4;
}

void func_151A8CEC(void *arg0) {
    s32 sp68;
    f32 sp64;
    s32 sp60;
    s32 sp5C;
    u8 sp5B;
    s32 temp_a0;
    s8 temp_v0;
    u8 var_s2;
    void (*var_s7)(void *, f32 *, s32 *, s32 *);
    void *temp_s0;

    if (((*(s32 *)((char *)(arg0) + 0x4D)) != -1) && (((s32 (*)())((char *)(&D_8008F980 + ((*(s32 *)((char *)(arg0) + 0x4D)) * 4))))(arg0) == 0)) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    temp_s0 = (char *)(arg0) + 0x28;
    if ((!((*(s32 *)((char *)(arg0) + 0x28)) & 4) || (temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x50)), (temp_a0 == 0)) || (func_151464B8(temp_a0) == 0)) && ((*(s32 *)((char *)(arg0) + 0x28)) & 1)) {
        (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) + (((*(f32 *)((char *)(temp_s0) + 0x8)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0xC)))) * D_800BE9A4 * (*(f32 *)((char *)(temp_s0) + 0x54))));
        var_s2 = sp5B;
        if ((*(s32 *)((char *)(temp_s0) + 0x28)) > 1.0f) {
            var_s7 = func_151A8F6C;
            if (((*(s32 *)((char *)(arg0) + 0x28)) & 2) && ((*(s32 *)((char *)(temp_s0) + 0x4)) != 0)) {
                var_s7 = func_151A8F1C;
            }
            do {
                var_s7(arg0, &sp64, &sp5C, &sp60);
                if ((*(s32 *)((char *)(arg0) + 0x28)) & 8) {
                    var_s2 = 1;
                    sp68 = sp60;
                } else if (func_15046C80(&sp64, 0, sp60, (char *)(temp_s0) + 0x2C) != 0) {
                    sp68 = (*(s32 *)((char *)(temp_s0) + 0x2C));
                } else {
                    sp68 = sp60;
                    var_s2 = 1;
                }
                temp_v0 = (*(s32 *)((char *)(temp_s0) + 0x26));
                if (temp_v0 != -1) {
                    ((s32 (*)())((char *)(&D_8008F970 + (temp_v0 * 4))))(arg0, &sp64, sp5C, var_s2 & 0xFF);
                }
                (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0x28)) > 1.0f);
            sp5B = var_s2;
        }
    }
}

void func_151A8F1C(void *arg0, f32 *arg1, s32 *arg2, s32 *arg3) {
    func_151432BC((*(s32 *)((char *)(arg0) + 0x2C)), arg1 + 8, arg2, arg3);
    (*(s32 *)((char *)(arg1) + 0x4)) = (s32) *arg2;
}

void func_151A8F6C(void *arg0, f32 *arg1, s32 *arg2, s32 *arg3) {
    u32 sp24;
    void *sp20;
    f32 temp_f6;
    void *temp_v0;

    sp24 = random_u32();
    temp_f6 = random_float() * (*(s32 *)((char *)(arg0) + 0x48));
    temp_v0 = (char *)(arg0) + 0x28;
    sp20 = temp_v0;
    func_15143874((s16) (sp24 & 0xFF), temp_f6, arg1, arg1 + 8);
    (*(s32 *)((char *)(arg1) + 0x0)) += (*(s32 *)((char *)(temp_v0) + 0x10));
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) ((*(f32 *)((char *)(arg1) + 0x8)) + (*(f32 *)((char *)(temp_v0) + 0x18)));
    (*(s32 *)((char *)(arg1) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x14));
    *arg2 = (*(s32 *)((char *)(temp_v0) + 0x14));
    *arg3 = (*(s32 *)((char *)(temp_v0) + 0x1C));
}

void func_151A9024(void *arg0, s32 arg2) {
    if ((*(s32 *)((char *)(arg0) + 0x4C)) == 1) {
        func_151A931C(arg2 & 0xFF);
    }
}

s32 func_151A9060(void *arg0) {
    void * (*temp_v0)(s32);
    s32 temp_a1;

    temp_a1 = (*(s32 *)((char *)(arg0) + 0x18));
    (*(u8 *)((char *)(arg0) + 0x16)) = (u8) ((*(u8 *)((char *)(arg0) + 0x16)) | 4);
    if ((temp_a1 < 0) || (temp_a1 >= 8)) {

    } else {
        temp_v0 = *(&D_8008F984 + (temp_a1 * 4));
        if (temp_v0 != NULL) {
            temp_v0(temp_a1);
        }
    }
    return 1;
}

void func_151A90C0(s32 arg0, s32 arg1) {
    s8 sp56;
    s8 sp55;
    s8 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    s8 sp30;
    s8 sp28;
    f32 temp_f0;
    s32 temp_v0;

    sp34 = arg0;
    sp30 = 2;
    temp_f0 = (f32) (arg1 & 1);
    if (temp_f0 != 0.0f) {
        sp38 = D_800A8F58;
    } else {
        sp38 = D_800A8F5C;
    }
    if (temp_f0 != 0.0f) {
        sp3C = D_800A8F60;
    } else {
        sp3C = D_800A8F64;
    }
    sp40 = 0.0f;
    sp44 = 0.0f;
    sp48 = 0.0f;
    sp4C = 0.0f;
    sp50 = 0.0f;
    sp54 = 1;
    sp55 = -1;
    sp56 = 0;
    sp28 = (s8) arg1;
    temp_v0 = func_151A8B20((s16 *) &sp30, -1, 1, 0xFFU, 0);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x80, (s16 *) &sp28, 1);
    }
}

void func_151A91AC(void *arg0, void *arg1, void * arg2, void * arg3) {
    void *sp;
    s32 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s32 sp70;
    s32 sp6C;
    s8 sp6B;
    s8 sp6A;
    s16 sp68;
    s32 sp64;
    f32 sp60;
    void * sp58;
    u32 sp50;
    u32 sp4C;
    s16 temp_t4;

    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008F9A4) + 0x0));
    (*(u16 *)((char *)&(sp58) + 0x4)) = (u16) (*(u16 *)((char *)&(D_8008F9A4) + 0x4));
    sp60 = (random_float() * 50.0f) + 50.0f;
    temp_t4 = (*(s32 *)((char *)(((char *)(sp) + ((random_u32() % 3U) * 2))) + 0x58));
    sp6B = 0;
    sp7A = 0;
    sp7B = 7;
    sp6C = 0;
    sp70 = 0;
    sp64 = 0x1701;
    sp68 = 0x3C;
    sp74 = 0xA0;
    sp75 = 0xFF;
    sp76 = 0;
    sp77 = 0;
    sp78 = 0;
    sp79 = 0xFF;
    sp7C = 0x3B0002;
    sp6A = (s8) temp_t4;
    sp4C = random_u32();
    sp50 = random_u32();
    func_1513C650(&sp64, 1, 0, (char *)(arg0) + 0x58, (*(s32 *)((char *)(arg1) + 0x0)), (*(s32 *)((char *)(arg1) + 0x4)), (*(s32 *)((char *)(arg1) + 0x8)), sp60, sp60, sp4C & 0xFF, (random_u32() & 1) + (sp50 & 1), 3, 0xFF, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
}

void func_151A931C(void *arg0, u8 *arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x17) {
        if (*arg1 == (*(s32 *)((char *)(arg0) + 0x80))) {
            (*(u8 *)((char *)(arg0) + 0x28)) = (u8) ((*(u8 *)((char *)(arg0) + 0x28)) | 1);
        }
    } else if ((temp_t6 == 0x18) && (*arg1 == (*(s32 *)((char *)(arg0) + 0x80)))) {
        (*(u8 *)((char *)(arg0) + 0x28)) = (u8) ((*(u8 *)((char *)(arg0) + 0x28)) & 0xFFFE);
    }
}

void func_151A9390(s32 arg0, u8 arg1, void *arg2, void *arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, s32 arg8) {
    s8 sp96;
    s8 sp95;
    s8 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    void *sp74;
    s8 sp70;
    u8 sp64;
    s16 sp62;
    s8 sp61;
    s8 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp44;
    void *sp40;
    s16 *sp3C;
    s16 *temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v1;

    temp_t6 = arg0 & 0xFF;
    if ((s32) arg1 < 9) {
        if (temp_t6 & 1) {
            var_a0 = 4;
        } else {
            var_a0 = 0;
        }
        if (arg2 != NULL) {
            var_a1 = 2;
        } else {
            var_a1 = 0;
        }
        var_v0 = 0;
        if (temp_t6 & 2) {
            var_v0 = 8;
        }
        temp_v1 = (arg1 * 0x14) + &D_8008F9AC;
        sp70 = var_v0 | 1 | var_a1 | var_a0;
        sp74 = arg2;
        sp78 = (*(s32 *)((char *)(temp_v1) + 0x0));
        sp7C = (*(s32 *)((char *)(temp_v1) + 0x4));
        if (arg3 != NULL) {
            (*(s32 *)((char *)&(sp80) + 0x0)) = (*(s32 *)((char *)(arg3) + 0x0));
            (*(f32 *)((char *)&(sp80) + 0x4)) = (f32) (*(f32 *)((char *)(arg3) + 0x4));
            (*(f32 *)((char *)&(sp80) + 0x8)) = (f32) (*(f32 *)((char *)(arg3) + 0x8));
        } else {
            sp80 = 0.0f;
            sp84 = 0.0f;
            sp88 = 0.0f;
        }
        sp94 = 2;
        sp95 = -1;
        sp96 = 1;
        sp40 = temp_v1;
        sp44 = temp_t6;
        sp8C = arg4;
        sp90 = arg5;
        temp_v0 = func_151A8B20((s16 *) &sp70, arg6, 0x2C, arg7, arg8);
        if (temp_v0 != 0) {
            temp_a0 = temp_v0 + 0x80;
            sp3C = temp_a0;
            memcpy(temp_a0, (*(s32 *)((char *)(sp40) + 0x10)), 0x2C);
            if (sp44 & 8) {
                (*(u8 *)((char *)(temp_a0) + 0x28)) = (u8) ((*(u8 *)((char *)(temp_a0) + 0x28)) | 1);
            }
            if (sp44 & 0x10) {
                (*(u8 *)((char *)(temp_a0) + 0x28)) = (u8) ((*(u8 *)((char *)(temp_a0) + 0x28)) | 2);
            }
        }
        if (sp44 & 4) {
            if (arg6 == -1) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = 1;
            }
            sp60 = var_v0_2 | 2;
            sp61 = 2;
            if (arg6 == -1) {
                sp62 = 0x12C;
            } else {
                sp62 = arg6;
            }
            sp64 = (*(s32 *)((char *)(sp40) + 0xB));
            if (arg3 != NULL) {
                sp54 = (s32) (*(s32 *)((char *)(arg3) + 0x0));
                sp58 = (s32) (*(s32 *)((char *)(arg3) + 0x4));
                sp5C = (s32) (*(s32 *)((char *)(arg3) + 0x8));
            } else {
                sp54 = (s32) (*(s32 *)((char *)(arg2) + 0x0));
                sp58 = (s32) (*(s32 *)((char *)(arg2) + 0x2));
                sp5C = (s32) (*(s32 *)((char *)(arg2) + 0x4));
            }
            func_1516284C(&sp60, &sp54, (*(s32 *)((char *)(sp40) + 0x8)), (*(s32 *)((char *)(sp40) + 0x9)), (s32) (*(s32 *)((char *)(sp40) + 0xA)), 0xFF, 0, 0, (s32) (*(s32 *)((char *)(sp40) + 0xC)), 0xFF, 1);
        }
    }
}

void func_151A9634(void *arg0, s32 arg1, void * arg2, void * arg3) {
    f32 sp8C;
    f32 sp88;
    s16 sp80;
    f32 sp7C;
    u32 sp68;
    u32 sp64;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_t1;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x80;
    sp88 = (random_float() * (*(s32 *)((char *)(arg0) + 0x88))) + (*(s32 *)((char *)(arg0) + 0x80));
    sp8C = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xC))) + (*(s32 *)((char *)(temp_s0) + 0x4));
    sp7C = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x24))) + (*(s32 *)((char *)(temp_s0) + 0x20));
    sp80 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x16)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x14));
    sp64 = random_u32();
    temp_t1 = random_u32();
    if ((*(s32 *)((char *)(temp_s0) + 0x28)) & 1) {
        var_t0 = 0x71;
    } else {
        sp68 = temp_t1;
        if (random_u32() & 1) {
            var_v0 = 0x13;
        } else {
            var_v0 = 0x14;
        }
        var_t0 = var_v0;
    }
    if ((*(s32 *)((char *)(temp_s0) + 0x28)) & 2) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = 2;
    }
    temp_v0 = func_1514B8E4(arg1, &sp88, (s16) ((sp64 % (u32) ((*(s16 *)((char *)(temp_s0) + 0x12)) + 1)) + (*(s16 *)((char *)(temp_s0) + 0x10))), ((temp_t1 % (u32) ((*(s16 *)((char *)(temp_s0) + 0x1A)) + 1)) + (*(s16 *)((char *)(temp_s0) + 0x18))) & 0xFF, 0, 0.0f, 1.0f, 1.0f, 0x21, 0x23, 2, var_t0, var_v0_2, (s32) (*(s16 *)((char *)(temp_s0) + 0x1C)), (s32) (*(s16 *)((char *)(temp_s0) + 0x1E)), 8, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x160, (s16 *) &sp7C, 8);
    }
}

void func_151A9834(void *arg0, s32 arg1, f32 arg2, f32 *arg3, s32 arg4, u8 arg5, s32 arg6, u8 arg7, s32 arg8) {
    s32 spAC;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 *var_s0;
    f32 temp_f20;
    f32 temp_f22;
    s32 var_s1;

    var_s0 = arg3;
    if (var_s0 == NULL) {
        var_s0 = &sp8C;
        spA4 = 0;
        spA8 = 7;
        spA9 = 0;
        spAC = 0;
        sp8C = D_800A8F68;
    }
    var_s1 = arg4;
    sp84 = (*(s32 *)((char *)(arg0) + 0x4));
    if (var_s1 > 0) {
        temp_f22 = D_800A8F6C;
        do {
            temp_f20 = random_float();
            func_1514373C(2.0f * temp_f20 * temp_f22, random_float() * arg2, &sp80, &sp88);
            sp80 += (*(s32 *)((char *)(arg0) + 0x0));
            sp88 += (*(s32 *)((char *)(arg0) + 0x8));
            if (func_15046C80(&sp80, 0, arg1, var_s0) != 0) {
                sp74 = sp80;
                sp78 = *var_s0;
                sp7C = sp88;
                ((s32 (*)())((char *)(&D_8008FA60 + (arg5 * 4))))(&sp74, var_s0, arg6, arg7 & 0xFF, arg8);
            }
            var_s1 -= 1;
        } while (var_s1 > 0);
    }
}
