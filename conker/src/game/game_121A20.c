/**
 * Auto-decompiled from asm/121A20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                             /* extern */
s32 func_1513264C();   /* extern */
void * func_1514373C();            /* extern */
void * func_15143874();            /* extern */
f32 func_15143E64();                           /* extern */
void *func_15144B34();                            /* extern */
s32 func_15145128();        /* extern */
void * memcpy();                            /* extern */
extern s32 D_80088B20;
extern s32 D_80088B38;
extern f32 D_800A1A64;
extern f32 D_800A1A68;
extern f32 D_800A1A6C;
extern f32 D_800A1A70;
extern f32 D_800A1A74;
extern f32 D_800A1A78;
extern f32 D_800A1A7C;
extern f32 D_800A1A80;
extern f64 D_800A1A88;
extern f64 D_800A1A90;
extern f32 D_800A1A98;
extern f32 D_800A1A9C;
extern f32 D_800A1AA0;
extern f32 D_800A1AA4;
extern f32 D_800A1AA8;

void func_150F4570(f32 *arg0, f32 *arg1, u8 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, s32 arg7, u8 arg8, s32 arg9) {
    s32 spFC;
    s16 spF8;
    s16 spF6;
    s8 spF4;
    s32 spF0;
    s8 spEE;
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
    s8 spDC;
    s16 spDA;
    s16 spD8;
    s32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    void * spAC;
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
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void * sp64;
    s8 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    void * sp40;
    f32 sp3C;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f8;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    f32 sp7C;
    f32 sp80;
    sp6C = (*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0));
    sp70 = (*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4));
    sp74 = (*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8));
    if (func_15145128(&sp6C, &sp78, &sp68, &sp64) != 0) {
        if (arg6 != 0) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (arg7 != 0) {
            var_v0 = 2;
        } else {
            var_v0 = 0;
        }
        sp60 = var_v0 | var_v1;
        sp3C = sp68 * arg4;
        (*(f32 *)((char *)&(sp40) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        (*(f32 *)((char *)&(sp40) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
        (*(f32 *)((char *)&(sp40) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
        sp4C = random_float() * D_800A1A64;
        sp50 = (random_float() * D_800A1A68) + D_800A1A6C;
        if (random_u32() & 1) {
            sp50 = -sp50;
        }
        sp5C = (random_float() * 21.0f) + 13.0f;
        temp_f12 = random_float() * D_800A1A70;
        sp34 = temp_f12;
        sp54 = cosf(temp_f12);
        sp58 = sinf(temp_f12);
        sp84 = 1.0f;
        sp88 = 1.0f;
        sp90 = arg5;
        sp8C = arg5;
        sp94 = random_float(1.0f) * 360.0f;
        sp98 = random_float() * 360.0f;
        temp_f0 = random_float();
        spA0 = 1.0f;
        spA4 = 1.0f;
        spA8 = 1.0f;
        sp9C = temp_f0 * 360.0f;
        (*(f32 *)((char *)&(spAC) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        (*(f32 *)((char *)&(spAC) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
        (*(f32 *)((char *)&(spAC) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
        spB8 = sp78 * arg3;
        spBC = sp7C * arg3;
        spC0 = sp80 * arg3;
        temp_f8 = random_float(arg3) * D_800A1A74;
        spC8 = 0.0f;
        spC4 = temp_f8 + D_800A1A78;
        temp_f10 = (random_float() * D_800A1A7C) + D_800A1A80;
        spE4 = 0xFF;
        spE5 = 0x16;
        spDA = (s16) arg2;
        spD4 = 0x14900;
        spD8 = 0x12C;
        spDC = 8;
        spCC = temp_f10;
        spE0 = 0;
        spE6 = 7;
        spE7 = 0;
        spE8 = 0;
        spE9 = 0;
        spEA = 0;
        spEB = 0;
        spEC = 2;
        spED = -1;
        spEE = 2;
        spF0 = 0;
        spF4 = 0;
        spF6 = 1;
        spF8 = 0xFF;
        spD0 = 0.0f;
        spFC = arg7;
        temp_v0 = func_1513264C(&sp84, 3, 0xFF, 0, 0x28, (s32) arg8, arg9);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x170, &sp3C, 0x28);
        }
    }
}

void *func_150F48D0(void *arg0) {
    f32 sp20;
    f32 sp1C;
    void *sp18;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x170;
    (*(f32 *)((char *)(arg0) + 0x170)) = (f32) ((*(f32 *)((char *)(arg0) + 0x170)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x170)) <= 0.0f) {
        return NULL;
    }
    sp18 = temp_v0;
    func_1514373C((*(s32 *)((char *)(temp_v0) + 0x10)), (*(s32 *)((char *)(temp_v0) + 0x20)), &sp1C, &sp20);
    (*(f32 *)((char *)(sp18) + 0x10)) = (f32) ((*(f32 *)((char *)(sp18) + 0x10)) + ((*(f32 *)((char *)(sp18) + 0x14)) * D_800BE9A4));
    (*(f32 *)((char *)(sp18) + 0x4)) = (f32) ((*(f32 *)((char *)(sp18) + 0x4)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(sp18) + 0x8)) = (f32) ((*(f32 *)((char *)(sp18) + 0x8)) + ((*(f32 *)((char *)(arg0) + 0x48)) * D_800BE9A4));
    (*(f32 *)((char *)(sp18) + 0xC)) = (f32) ((*(f32 *)((char *)(sp18) + 0xC)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(sp18) + 0x4)) + (sp1C * (*(f32 *)((char *)(sp18) + 0x18))));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(sp18) + 0x8)) + sp20);
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(sp18) + 0xC)) - (sp1C * (*(f32 *)((char *)(sp18) + 0x1C))));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return sp18;
}

s32 func_150F4A38(void *arg0) {
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void *sp3C;
    u32 temp_t5;
    u8 var_v0;
    void *temp_v0;
    void *var_v1;

    var_v1 = (char *)(arg0) + 0x170;
    if (((*(s32 *)((char *)(arg0) + 0x194)) & 1) || (var_v0 = (*(s32 *)((char *)(var_v1) + 0x24)), ((var_v0 & 2) != 0))) {
        sp3C = (char *)(arg0) + 0x170;
        temp_v0 = func_15144B34(0U);
        sp48 = (*(s32 *)((char *)(arg0) + 0x38)) - (*(s32 *)((char *)(temp_v0) + 0x0));
        sp4C = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(temp_v0) + 0x4));
        sp50 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(temp_v0) + 0x8));
        var_v1 = sp3C;
        var_v0 = (*(s32 *)((char *)(var_v1) + 0x24));
        sp58 = func_15143E64(&sp48);
    }
    if (var_v0 & 1) {
        if (sp58 < 500.0f) {
            (*(s32 *)((char *)(arg0) + 0x70)) = 0;
        } else if (sp58 < 1200.0f) {
            (*(s8 *)((char *)(arg0) + 0x70)) = (s8) (u32) ((f64) (sp58 - 500.0f) * D_800A1A88 * D_800A1A90);
        } else {
            (*(s32 *)((char *)(arg0) + 0x70)) = 0xFF;
        }
        var_v0 = (*(s32 *)((char *)(var_v1) + 0x24));
    }
    if ((var_v0 & 2) && !(var_v0 & 4)) {
        temp_t5 = (u32) (*(u32 *)((char *)(arg0) + 0x88)) >> 0x10;
        if (temp_t5 != 0) {
            func_1000F9D4(temp_t5 & 0xFFFF, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x38)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x3C)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x40)));
        } else if (sp58 < 200.0f) {
            (*(u32 *)((char *)(arg0) + 0x88)) = (u32) ((*(u32 *)((char *)(arg0) + 0x88)) | (func_10010F88((*(u32 *)((char *)(arg0) + 0x88)) & 0xFFFF, ((random_u32() & 0x3FFF) + 0x4000) & 0xFFFF, 0, 0, -1, (s32) (*(u32 *)((char *)(arg0) + 0x38)), (s32) (*(u32 *)((char *)(arg0) + 0x3C)), (s32) (*(u32 *)((char *)(arg0) + 0x40)), 0x2710, 0x4E20) << 0x10));
        }
    }
    return 1;
}

void func_150F4CFC(void *arg0, void * arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x4E) {
        (*(s32 *)((char *)(arg0) + 0x71)) = 0;
        temp_v0 = (char *)(arg0) + 0x170;
        (*(u8 *)((char *)(temp_v0) + 0x24)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x24)) | 5);
        return;
    }
    if (temp_t6 == 0x4F) {
        func_1516972C(temp_t6);
    }
}

void func_150F4D5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 sp3D;
    s8 sp3C;
    f32 sp38;
    s32 sp34;
    s32 temp_v0;

    sp34 = arg0;
    sp38 = 0.0f;
    sp3C = arg1;
    sp3D = arg2;
    temp_v0 = func_15149130(0x12C, -1, 0x56, -1, 0, 0, 0xC, (s32) arg3, arg4);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, (f32 *) &sp34, 0xC);
    }
}

void func_150F4DEC(void *arg0) {
    s32 unksp8E;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    void * sp9C;
    s32 sp8C;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f4;
    s32 temp_f8;
    s32 temp_s1;
    s32 temp_t2;
    s32 temp_t5;
    void *temp_s0;
    void *temp_s2;
    void *temp_s5;

    if (((*(s32 *)((char *)(arg0) + 0x30)) == -1) || (((s32 (*)())((char *)(&D_80088B38 + ((*(s32 *)((char *)(arg0) + 0x30)) * 4))))() != 0)) {
        temp_s5 = (char *)(arg0) + 0x28;
        (*(f32 *)((char *)(temp_s5) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s5) + 0x4)) + ((D_800A1A98 + (random_float() * D_800A1A9C)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s5) + 0x4)) > 1.0f) {
            temp_s2 = func_15144B34((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x23D)));
            temp_f24 = D_800A1AA4;
            temp_f8 = (s32) (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x380)) + 180.0f) * D_800A1AA0);
            sp8C = (s32) (s16) (temp_f8 - 0x15);
            do {
                func_15143874((s16) (temp_f8 + 0x15), (random_float() * temp_f24) + 254.0f, &spC0, &spC8);
                temp_f18 = (random_float() * 212.0f) + -133.0f;
                spC4 = temp_f18;
                spC0 += (*(s32 *)((char *)(temp_s2) + 0x0));
                spC4 = temp_f18 + (*(s32 *)((char *)(temp_s2) + 0x4));
                spC8 += (*(s32 *)((char *)(temp_s2) + 0x8));
                func_15143874(unksp8E, (random_float() * temp_f24) + 254.0f, &spB4, &spBC);
                temp_f4 = (random_float() * 212.0f) + -133.0f;
                spB8 = temp_f4;
                spB4 += (*(s32 *)((char *)(temp_s2) + 0x0));
                spB8 = temp_f4 + (*(s32 *)((char *)(temp_s2) + 0x4));
                spBC += (*(s32 *)((char *)(temp_s2) + 0x8));
                if (random_u32() & 1) {
                    temp_t2 = (*(s32 *)((char *)&(spC0) + 0x4));
                    temp_t5 = (*(s32 *)((char *)&(spB4) + 0x4));
                    (*(f32 *)((char *)&(sp9C) + 0x0)) = (f32) (*(f32 *)((char *)&(spC0) + 0x0));
                    (*(s32 *)((char *)&(sp9C) + 0x4)) = temp_t2;
                    (*(s32 *)((char *)&(spB4) + 0x4)) = temp_t2;
                    (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)&(spC0) + 0x8));
                    (*(s32 *)((char *)&(spC0) + 0x4)) = temp_t5;
                    (*(s32 *)((char *)&(spC0) + 0x0)) = (*(s32 *)((char *)&(spB4) + 0x0));
                    (*(s32 *)((char *)&(spC0) + 0x8)) = (s32) (*(s32 *)((char *)&(spB4) + 0x8));
                    (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)&(sp9C) + 0x0));
                    (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x8));
                }
                temp_s0 = ((*(s32 *)((char *)(temp_s5) + 0x9)) * 0xC) + &D_80088B20;
                temp_s1 = (random_u32() % (u8) (*(u8 *)((char *)(temp_s0) + 0x0))) & 0xFF;
                temp_f20 = (random_float() * 10.0f) + 5.0f;
                func_150F4570(&spC0, &spB4, (*(u8 *)((char *)(((*(u8 *)((char *)(temp_s0) + 0x4)) + (temp_s1 * 2))) + 0x1)), temp_f20, 1.0f / temp_f20, ((random_float() * D_800A1AA8) + D_800A1AA8) * (*(u8 *)((char *)((*(u8 *)((char *)(temp_s0) + 0x8))) + (temp_s1 * 4))), 0U, 0, (u8) (s32) (*(u8 *)((char *)(arg0) + 0xC)), (s32) (*(u8 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s5) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s5) + 0x4)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s5) + 0x4)) > 1.0f);
        }
    }
}
