/**
 * Auto-decompiled from asm/1B1600.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                /* extern */
void * func_10004074();                    /* extern */
s32 func_1501A680();                          /* extern */
void *func_1502CCFC(); /* extern */
s32 func_1502DB20();                             /* extern */
void * func_1503DA9C();                   /* extern */
void * func_15047390(); /* extern */
s32 func_1506196C();             /* extern */
u8 func_150849CC();                       /* extern */
void * func_150A44F0();                  /* extern */
s32 func_150A5B90(s32 (*)[], void *, void *, void *); /* extern */
s32 func_150A5E44();     /* extern */
void * func_150A7960(); /* extern */
void * func_150A7A48();               /* extern */
void * func_150A7DA0();              /* extern */
s32 func_150AD9A0();         /* extern */
u32 random_u32();                                /* extern */
void *func_1510B7B4();                   /* extern */
s32 func_1510F720(s32, s32, s32, s32 (*)[]);        /* extern */
void func_1510F800();                                 /* extern */
void *func_15167A68();          /* extern */
void * func_151EFE00();                             /* extern */
void * guMtxF2L2();                         /* extern */
void * memcpy();                           /* extern */
u32 func_151873E4(); /* static */
void func_15187D6C(f32 *arg0, f32 arg1, f32 arg2, f32 arg3);
extern s16 D_80082FA6;
extern s32 D_8008D3E0;
extern s32 D_8008D3E8;
extern s32 D_8008D3F8;
extern s32 D_8008D410;
extern s32 D_8008D448;
extern s32 D_8008D498;
extern s32 D_8008D4C0;
extern s32 D_8008D538;
extern f32 D_8008D578;
extern f32 D_800A7350;
extern f32 D_800A7354;
extern f32 D_800A7358;
extern f32 D_800A735C;
extern f32 D_800A7360;
extern f32 D_800A7364;
extern f32 D_800A7368;
extern f32 D_800A736C;
extern f32 D_800A7370;
extern f32 D_800A7374;
extern f32 D_800A7378;
extern f32 D_800A737C;
extern f32 D_800A7380;
extern s32 D_800BE9C8;
extern s32 D_800BEBA4;
extern u8 D_800C3E90;
extern s32 D_800C48F0;
extern s32 D_800D3680;
extern f32 D_800D3688;
extern f32 D_800D368C;
extern s32 D_800D3690;
extern s32 *D_800D3694;
extern s32 D_800D37E0;
extern s32 D_800DDFB0;
extern s32 D_800DE010;
extern s32 D_800DE01C;
extern s32 D_800DE020;
extern s32 D_800DE024;
extern f32 D_800DE028;
extern f32 D_800DE02C;
extern s32 D_800DE030;
extern s32 D_800DE034;
extern s32 D_800DE038;
extern f32 D_800DE03C;
extern u8 D_800DE040;
extern u8 D_800DE041;
extern s32 D_800DE048;
extern s32 D_800DF088;
extern s32 D_800DF090;
extern s32 D_800DF0D0;
extern u8 D_800DF0E0;
extern u8 D_800DF0E1;
extern s32 D_800DF0E4;
extern s32 D_800DF0E8;
extern s32 D_800DF0EC;
extern s32 D_800DF0F0;
extern s32 D_800DF0F4;
extern s32 D_800DF0F8;
extern s32 D_800DF2F8;
extern f32 D_800DF6F8;
extern s32 D_89470;

void *func_15184150(s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    s32 sp3C;
    void *sp1C;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    s32 temp_t2;
    s32 var_a0;
    s32 var_v0;
    void *temp_t0;

    temp_t0 = (arg0 * 0x32C) + &gObjects;
    sp3C = (s32) (*(s32 *)((char *)(temp_t0) + 0x4));
    *arg3 = 0.0f;
    *arg2 = 0.0f;
    *arg1 = 0.0f;
    if (((*(s32 *)((char *)(temp_t0) + 0x1D4)) == 0) || (D_800C3E90 != 0)) {
        return NULL;
    }
    sp1C = temp_t0;
    var_v0 = func_1502DB20(sp3C);
    if (var_v0 > 0) {
        var_a0 = 0;
        temp_t2 = var_v0 << 6;
        do {
            var_v0 = (*(s32 *)((char *)(temp_t0) + 0x1D4)) + var_a0;
            var_f0 = (*(s32 *)((char *)(var_v0) + 0x30)) - (*(s32 *)((char *)(temp_t0) + 0x14));
            var_a0 += 0x40;
            var_f2 = (*(s32 *)((char *)(var_v0) + 0x34)) - (*(s32 *)((char *)(temp_t0) + 0x18));
            var_f12 = (*(s32 *)((char *)(var_v0) + 0x38)) - (*(s32 *)((char *)(temp_t0) + 0x1C));
            if (var_f0 < 0.0f) {
                var_f0 = -var_f0;
            }
            if (*arg1 < var_f0) {
                *arg1 = var_f0;
            }
            if (var_f2 < 0.0f) {
                var_f2 = -var_f2;
            }
            if (*arg2 < var_f2) {
                *arg2 = var_f2;
            }
            if (var_f12 < 0.0f) {
                var_f12 = -var_f12;
            }
            if (*arg3 < var_f12) {
                *arg3 = var_f12;
            }
        } while (var_a0 < temp_t2);
    }
    if ((*arg1 == 0.0f) || (*arg2 == 0.0f) || (*arg3 == 0.0f)) {
        temp_f2 = (*(f32 *)((char *)(temp_t0) + 0x14C)) * (f32) (*(f32 *)((char *)((*(&D_800D1C90 + ((s32)((*(f32 *)((char *)(temp_t0) + 0x4)) * 4))))) + 0x1A));
        *arg3 = temp_f2;
        *arg1 = temp_f2;
        var_v0 = *(&D_800D1C90 + ((*(s32 *)((char *)(temp_t0) + 0x4)) * 4));
        *arg2 = (*(f32 *)((char *)(temp_t0) + 0x150)) * (f32) ((*(f32 *)((char *)(var_v0) + 0x1E)) + (*(f32 *)((char *)(var_v0) + 0x1C)));
    }
    return (void *) var_v0;
}

f32 func_15184368(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
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
    f32 sp134;
    f32 sp130;
    void * sp128;
    f32 spE8;
    f32 spA8;
    s32 spA0;
    void * *sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp6C;
    void *sp68;
    f32 *sp64;
    void *sp60;
    void * *var_s0_3;
    void * *var_v1;
    f32 *temp_a0;
    f32 *var_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f10;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14;
    f32 var_f16;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f26;
    f32 var_f2;
    f32 var_f8;
    s32 var_s0;
    void *temp_t8;
    void *var_s0_2;

    temp_t8 = (arg0 * 0x32C) + &gObjects;
    spA0 = 0;
    sp68 = temp_t8;
    sp130 = D_800A7350;
    sp158 = (*(s32 *)((char *)(temp_t8) + 0x14));
    var_f26 = 2.0f;
    sp15C = (*(s32 *)((char *)(temp_t8) + 0x18));
    var_s0 = 0;
    sp160 = (*(s32 *)((char *)(temp_t8) + 0x1C));
    if (D_800DE034 == 0) {
        var_v1 = D_800DCD78;
        if (var_v1 != NULL) {
            do {
                if (((*(s32 *)((char *)(var_v1) + 0x4)) == 0) && ((*(s32 *)((char *)(var_v1) + 0x9)) == 0)) {
                    sp8C = (f32) (*(f32 *)((char *)(var_v1) + 0xE));
                    sp90 = (f32) (*(f32 *)((char *)(var_v1) + 0x10));
                    sp98 = var_v1;
                    sp94 = (f32) (*(f32 *)((char *)(var_v1) + 0x12));
                    temp_f0 = (f32) func_150AD9A0((s32) (sp8C - sp158), (s32) (sp90 - sp15C), (s32) (sp94 - sp160));
                    if ((temp_f0 < sp130) && (arg5 < temp_f0)) {
                        sp130 = temp_f0;
                        var_s0 += 1;
                        sp14C = sp8C;
                        sp150 = sp90;
                        sp154 = sp94;
                    }
                }
                var_v1 = *var_v1;
            } while (var_v1 != NULL);
        }
    }
    if (var_s0 == 0) {
        if (arg5 != 0.0f) {
            return 0.0f;
        }
        if ((*(s32 *)((char *)&(D_800DE010) + 0x4)) <= 0.0f) {
            (*(s32 *)((char *)&(D_800DE010) + 0x4)) = 600.0f;
            (*(s32 *)((char *)&(D_800DE010) + 0x0)) = 100.0f;
            (*(s32 *)((char *)&(D_800DE010) + 0x8)) = -200.0f;
        }
        sp130 = 1.0f;
        sp14C = ((*(s32 *)((char *)&(D_800DE010) + 0x0)) * D_800DE03C) + sp158;
        sp150 = ((*(s32 *)((char *)&(D_800DE010) + 0x4)) * D_800DE03C) + sp15C;
        sp154 = ((*(s32 *)((char *)&(D_800DE010) + 0x8)) * D_800DE03C) + sp160;
        goto block_14;
    }
block_14:
    if ((D_800DBFF4 != 0) || (D_800DE038 >= 2)) {
        var_f10 = sp154;
        var_s0_2 = (arg1 * 0xC) + &D_800DDFB0;
        (*(s32 *)((char *)(var_s0_2) + 0x0)) = sp14C;
        (*(s32 *)((char *)(var_s0_2) + 0x4)) = sp150;
    } else {
        var_s0_2 = (arg1 * 0xC) + &D_800DDFB0;
        temp_f0_2 = (*(s32 *)((char *)(var_s0_2) + 0x0));
        temp_f2 = (*(s32 *)((char *)(var_s0_2) + 0x4));
        temp_f12 = (*(s32 *)((char *)(var_s0_2) + 0x8));
        (*(f32 *)((char *)(var_s0_2) + 0x0)) = (f32) (temp_f0_2 + ((sp14C - temp_f0_2) * D_800A7354));
        (*(f32 *)((char *)(var_s0_2) + 0x4)) = (f32) (temp_f2 + ((sp150 - temp_f2) * D_800A7354));
        var_f10 = temp_f12 + ((sp154 - temp_f12) * D_800A7354);
    }
    (*(s32 *)((char *)(var_s0_2) + 0x8)) = var_f10;
    func_15048F90(&sp158, var_s0_2, &sp164);
    D_800DF6F8 = func_150AD930(&sp164);
    if (D_800DF6F8 < 200.0f) {
        temp_f0_3 = 200.0f / D_800DF6F8;
        temp_f10 = sp168;
        D_800DF6F8 = 200.0f;
        temp_f2_2 = sp164 * temp_f0_3;
        temp_f12_2 = temp_f10 * temp_f0_3;
        sp168 = temp_f12_2;
        (*(f32 *)((char *)(var_s0_2) + 0x0)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x0)) + (temp_f2_2 - sp164));
        temp_f14 = sp16C * temp_f0_3;
        (*(f32 *)((char *)(var_s0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x4)) + (temp_f12_2 - temp_f10));
        temp_f6 = temp_f14 - sp16C;
        sp16C = temp_f14;
        (*(f32 *)((char *)(var_s0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x8)) + temp_f6);
        sp164 = temp_f2_2;
    }
    if (D_800DE040 != 0) {
        temp_f2_3 = sqrtf((sp164 * sp164) + (sp16C * sp16C)) * D_800A7358;
        var_f12 = temp_f2_3;
        if (temp_f2_3 < 10.0f) {
            var_f12 = 10.0f;
        }
    } else {
        var_f12 = 10.0f;
    }
    if (sp168 < var_f12) {
        temp_f4 = var_f12 - sp168;
        sp168 = var_f12;
        (*(f32 *)((char *)(var_s0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x4)) + temp_f4);
        temp_f0_4 = (f32) func_150AD9A0((s32) var_f12, (s32) sp16C, (s32) sp164, (s32) var_f12, (s32) sp16C);
        temp_f2_4 = D_800DF6F8 / temp_f0_4;
        D_800DF6F8 = temp_f0_4;
        (*(f32 *)((char *)(var_s0_2) + 0x0)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x0)) + ((sp164 * temp_f2_4) - sp164));
        (*(f32 *)((char *)(var_s0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x4)) + ((sp168 * temp_f2_4) - sp168));
        (*(f32 *)((char *)(var_s0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x8)) + ((sp16C * temp_f2_4) - sp16C));
    }
    if ((D_800A735C * D_800DE03C) < D_800DF6F8) {
        D_800D3688 = 0.0f;
        D_800D368C = D_800D3688;
        return 0.0f;
    }
    if (D_800DF0E1 != 0) {
        arg3 *= 0.25f;
        var_f8 = -(D_800DE028 * D_800DE03C * 0.5f) - D_800DF6F8;
    } else {
        var_f8 = (-D_800DE028 * D_800DE03C) - D_800DF6F8;
    }
    D_800D3688 = var_f8;
    temp_a0 = (arg1 << 6) + &D_800DF0F8;
    sp64 = temp_a0;
    func_15047390(temp_a0, (*(s32 *)((char *)(var_s0_2) + 0x0)), (*(s32 *)((char *)(var_s0_2) + 0x4)), (*(s32 *)((char *)(var_s0_2) + 0x8)), sp158, sp15C, sp160, 0.0f, 1.0f, 0.0f);
    var_f20 = 0.0f;
    var_f14 = 0.0f;
    var_f16 = D_800A7360;
    var_s0_3 = &D_8008D3F8;
    do {
        sp13C = var_f14;
        sp134 = var_f16;
        func_150A7960(sp64, ((f32) (*(f32 *)((char *)(var_s0_3) + 0x0)) * arg2) + sp158, ((f32) (*(f32 *)((char *)(var_s0_3) + 0x1)) * arg3) + sp15C, ((f32) (*(f32 *)((char *)(var_s0_3) + 0x2)) * arg4) + sp160, &sp148, &sp144, &sp140);
        var_f12_2 = sp140;
        var_s0_3 = (char *)(var_s0_3) + 3;
        var_f14 = sp13C;
        var_f16 = sp134;
        if (var_f12_2 == 0.0f) {
            var_f12_2 = D_800A7364;
        }
        var_f0 = sp148 / var_f12_2;
        var_f2 = sp144 / var_f12_2;
        if (var_f0 < 0.0f) {
            var_f0 = -var_f0;
        }
        sp148 = var_f0;
        if (var_f14 < var_f0) {
            var_f14 = var_f0;
            sp148 = var_f0;
        }
        if (var_f2 < 0.0f) {
            var_f2 = -var_f2;
        }
        sp144 = var_f2;
        if (var_f20 < var_f2) {
            var_f20 = var_f2;
            sp144 = var_f2;
        }
        sp140 = var_f12_2;
        if (var_f16 < var_f12_2) {
            var_f16 = var_f12_2;
            sp140 = var_f12_2;
        }
    } while ((char *)(var_s0_3) != (char *)(&D_8008D410));
    if ((var_f14 < D_800A7368) || (var_f20 < D_800A7368)) {
        D_800D3688 = 0.0f;
        D_800D368C = D_800D3688;
        return 0.0f;
    }
    (*(f32 *)((char *)&(D_800D3680) + 0x0)) = (f32) (1.0f / var_f14);
    (*(f32 *)((char *)&(D_800D3680) + 0x4)) = (f32) (1.0f / var_f20);
    if ((*(s32 *)((char *)&(D_800D3680) + 0x0)) < 1.0f) {
        (*(s32 *)((char *)&(D_800D3680) + 0x0)) = 1.0f;
    }
    if ((*(s32 *)((char *)&(D_800D3680) + 0x4)) < 1.0f) {
        (*(s32 *)((char *)&(D_800D3680) + 0x4)) = 1.0f;
    }
    if (var_f16 < -1.0f) {
        D_800D368C = var_f16;
        sp60 = (arg1 * 2) + &D_800DF0D0;
        do {
            var_f20_2 = 1.0f;
            sp6C = func_150484A0(0x3F800000, (*(s32 *)((char *)&(D_800D3680) + 0x4)));
            guPerspectiveF(&spE8, sp60, sp6C * D_800A736C, func_150484A0(0x3F800000, (*(s32 *)((char *)&(D_800D3680) + 0x0))) * D_800A736C, -D_800D368C, -D_800D3688, var_f26);
            func_150A7A48(sp64, &spE8, &spE8);
            var_v0 = &spE8;
loop_55:
            var_f0_2 = *var_v0;
            var_v0 += 4;
            if (var_f0_2 < 0.0f) {
                var_f0_2 = -var_f0_2;
            }
            if (var_f20_2 < var_f0_2) {
                var_f20_2 = var_f0_2;
            }
            if ((char *)(var_v0) != (char *)(&sp128)) {
                goto loop_55;
            }
            if (var_f20_2 < D_800A7370) {
                spA0 = 1;
            } else {
                var_f26 *= 0.5f;
            }
        } while (spA0 == 0);
        func_150A7CB0(&spA8, 0x3F000000, 0x3F000000, 0x3F800000);
        func_150A7A48(&spE8, &spA8, &spE8);
        guMtxF2L(&spE8, (arg1 << 7) + (D_800BE9C0 << 6) + &D_800DF2F8);
        D_800DF088 = (s32) (&D_800DE048 + 0x3F) & ~0x3F;
        D_800DE02C = (f32) (0xFF - ((s32) (*(f32 *)((char *)(sp68) + 0x1DD)) >> 1));
        if (D_800DE02C > 185.0f) {
            D_800DE02C = 185.0f;
        }
        temp_f2_5 = (f32) (*(f32 *)((char *)(sp68) + 0xCC));
        if (temp_f2_5 < -10.0f) {
            D_800DE02C += D_800DE02C * (temp_f2_5 + 10.0f) * D_800A7374;
            if (D_800DE02C <= 5.0f) {
                return 0.0f;
            }
        }
        return sp130;
    }
    D_800D3688 = 0.0f;
    D_800D368C = D_800D3688;
    return 0.0f;
}

s32 func_15184DF0(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    s32 sp18;
    f32 temp_f12;
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0_2 = (arg0 * 0x32C) + &gObjects;
    temp_v1 = D_800DBFF0 + (arg1 * 0x9A0);
    temp_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x1C));
    temp_v0 = func_150AD9A0((s32) temp_f12, (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x14)) - (*(s32 *)((char *)(temp_v1) + 0x2F8))), (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x18)) - (*(s32 *)((char *)(temp_v1) + 0x2FC))), (s32) (temp_f12 - (*(s32 *)((char *)(temp_v1) + 0x300))));
    if (temp_v0 >= 0x7D1) {
        D_800D3688 = 0.0f;
        D_800D368C = D_800D3688;
        return 0;
    }
    sp18 = temp_v0;
    func_15184150(arg0, arg2, arg3, arg4);
    *arg2 *= D_800A7378;
    *arg3 *= D_800A7378;
    *arg4 *= D_800A7378;
    if ((*arg2 == 0.0f) || (*arg3 == 0.0f) || (*arg4 == 0.0f)) {
        D_800D3688 = 0.0f;
        D_800D368C = D_800D3688;
        return 0;
    }
    return temp_v0;
}

void func_15184FA4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    u8 var_t0;
    void *temp_a3;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_13;
    void *temp_s0_14;
    void *temp_s0_15;
    void *temp_s0_16;
    void *temp_s0_17;
    void *temp_s0_18;
    void *temp_s0_19;
    void *temp_s0_20;
    void *temp_s0_21;
    void *temp_s0_22;
    void *temp_s0_23;
    void *temp_s0_24;
    void *temp_s0_25;
    void *temp_s0_26;
    void *temp_s0_27;
    void *temp_s0_28;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_s1;
    void *temp_v0;
    void *var_s0;
    void *var_s0_2;

    temp_s1 = (arg1 * 0x32C) + &gObjects;
    if ((*(s32 *)((char *)(temp_s1) + 0x127)) == 0xFF) {
        var_t0 = (*(s32 *)((char *)(temp_s1) + 0x1C8)) + 1;
    } else {
        var_t0 = (*(s32 *)((char *)(temp_s1) + 0x1C8));
    }
    temp_s0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFF48003F;
    temp_s0_2 = (char *)(temp_s0) + 8;
    (*(s32 *)((char *)(temp_s0) + 0x4)) = (s32) D_800DF088;
    (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xDE000000;
    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = &D_8008D448;
    temp_s0_3 = (char *)(temp_s0_2) + 8;
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xDB0E0000;
    temp_s0_4 = (char *)(temp_s0_3) + 8;
    temp_s0_5 = (char *)(temp_s0_4) + 8;
    (*(s32 *)((char *)(temp_s0_3) + 0x4)) = (s32) *(&D_800DF0D0 + (arg2 * 2));
    (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xDC080008;
    (*(s32 *)((char *)(temp_s0_4) + 0x4)) = &D_8008D3E8;
    (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xDA380007;
    temp_s0_6 = (char *)(temp_s0_5) + 8;
    (*(s32 *)((char *)(temp_s0_5) + 0x4)) = (void *) ((arg2 << 7) + (D_800BE9C0 << 6) + &D_800DF2F8);
    (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xDA380003;
    (*(s32 *)((char *)(temp_s0_6) + 0x4)) = &D_89470;
    spD0 = 0;
    spCC = 0;
    spC8 = 0;
    spD4 = (s32) var_t0;
    temp_v0 = func_1502CCFC((char *)(temp_s0_6) + 8, arg1, arg3, (*(s32 *)((char *)(temp_s1) + 0x1D4)), func_1506196C(temp_s1, arg3, temp_s0_4), &spC8, 3, 1);
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xD7000002;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = -1;
    temp_a3 = (char *)(temp_v0) + 0x10;
    var_s0 = temp_a3;
    (*(s32 *)((char *)(temp_v0) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0;
    if (spD4 < 2) {
        (*(s32 *)((char *)(temp_v0) + 0x10)) = 0xFCFFFFFF;
        (*(s32 *)((char *)(temp_a3) + 0x4)) = 0xFFFCF87C;
        temp_s0_7 = (char *)(temp_a3) + 8;
        (*(s32 *)((char *)(temp_a3) + 0x8)) = 0xFA000000;
        (*(s32 *)((char *)(temp_s0_7) + 0x4)) = -1;
        temp_s0_8 = (char *)(temp_s0_7) + 8;
        (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0xEF003C3F;
        (*(s32 *)((char *)(temp_s0_8) + 0x4)) = 0x0F0A4000;
        temp_s0_9 = (char *)(temp_s0_8) + 8;
        (*(s32 *)((char *)(temp_s0_8) + 0x8)) = 0xFD900000;
        temp_s0_10 = (char *)(temp_s0_9) + 8;
        (*(s32 *)((char *)(temp_s0_9) + 0x4)) = (s32) D_800DF088;
        temp_s0_11 = (char *)(temp_s0_10) + 8;
        (*(s32 *)((char *)(temp_s0_9) + 0x8)) = 0xF5900000;
        (*(s32 *)((char *)(temp_s0_10) + 0x4)) = 0x07018060;
        (*(s32 *)((char *)(temp_s0_10) + 0x8)) = 0xE6000000;
        (*(s32 *)((char *)(temp_s0_11) + 0x4)) = 0;
        temp_s0_12 = (char *)(temp_s0_11) + 8;
        (*(s32 *)((char *)(temp_s0_11) + 0x8)) = 0xF3000000;
        (*(s32 *)((char *)(temp_s0_12) + 0x4)) = 0x077FF100;
        temp_s0_13 = (char *)(temp_s0_12) + 8;
        (*(s32 *)((char *)(temp_s0_12) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0_13) + 0x4)) = 0;
        temp_s0_14 = (char *)(temp_s0_13) + 8;
        (*(s32 *)((char *)(temp_s0_13) + 0x8)) = 0xF5881000;
        (*(s32 *)((char *)(temp_s0_14) + 0x4)) = 0x18060;
        temp_s0_15 = (char *)(temp_s0_14) + 8;
        (*(s32 *)((char *)(temp_s0_14) + 0x8)) = 0xF2000000;
        (*(s32 *)((char *)(temp_s0_15) + 0x4)) = 0xFC0FC;
        temp_s0_16 = (char *)(temp_s0_15) + 8;
        (*(s32 *)((char *)(temp_s0_15) + 0x8)) = 0xE40FC0FC;
        (*(s32 *)((char *)(temp_s0_16) + 0x4)) = 0;
        temp_s0_17 = (char *)(temp_s0_16) + 8;
        (*(s32 *)((char *)(temp_s0_16) + 0x8)) = 0xE1000000;
        (*(s32 *)((char *)(temp_s0_17) + 0x4)) = 0x100010;
        temp_s0_18 = (char *)(temp_s0_17) + 8;
        (*(s32 *)((char *)(temp_s0_17) + 0x8)) = 0xF1000000;
        (*(s32 *)((char *)(temp_s0_18) + 0x4)) = 0x04000400;
        var_s0_2 = (char *)(temp_s0_18) + 8;
        if (spD4 == 0) {
            temp_s0_19 = (char *)(var_s0_2) + 8;
            (*(s32 *)((char *)(temp_s0_18) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
            (*(s32 *)((char *)(var_s0_2) + 0x8)) = 0xFD900000;
            temp_s0_20 = (char *)(temp_s0_19) + 8;
            (*(s32 *)((char *)(temp_s0_19) + 0x4)) = (s32) D_800DF088;
            temp_s0_21 = (char *)(temp_s0_20) + 8;
            (*(s32 *)((char *)(temp_s0_19) + 0x8)) = 0xF5900000;
            (*(s32 *)((char *)(temp_s0_20) + 0x4)) = 0x07018060;
            (*(s32 *)((char *)(temp_s0_20) + 0x8)) = 0xE6000000;
            (*(s32 *)((char *)(temp_s0_21) + 0x4)) = 0;
            temp_s0_22 = (char *)(temp_s0_21) + 8;
            (*(s32 *)((char *)(temp_s0_21) + 0x8)) = 0xF3000000;
            (*(s32 *)((char *)(temp_s0_22) + 0x4)) = 0x077FF100;
            temp_s0_23 = (char *)(temp_s0_22) + 8;
            (*(s32 *)((char *)(temp_s0_22) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(temp_s0_23) + 0x4)) = 0;
            temp_s0_24 = (char *)(temp_s0_23) + 8;
            (*(s32 *)((char *)(temp_s0_23) + 0x8)) = 0xF5881000;
            (*(s32 *)((char *)(temp_s0_24) + 0x4)) = 0x18060;
            temp_s0_25 = (char *)(temp_s0_24) + 8;
            (*(s32 *)((char *)(temp_s0_24) + 0x8)) = 0xF2000000;
            (*(s32 *)((char *)(temp_s0_25) + 0x4)) = 0xFC0FC;
            temp_s0_26 = (char *)(temp_s0_25) + 8;
            (*(s32 *)((char *)(temp_s0_25) + 0x8)) = 0xE40FC0FC;
            (*(s32 *)((char *)(temp_s0_26) + 0x4)) = 0;
            temp_s0_27 = (char *)(temp_s0_26) + 8;
            (*(s32 *)((char *)(temp_s0_26) + 0x8)) = 0xE1000000;
            (*(s32 *)((char *)(temp_s0_27) + 0x4)) = 0x100010;
            temp_s0_28 = (char *)(temp_s0_27) + 8;
            (*(s32 *)((char *)(temp_s0_27) + 0x8)) = 0xF1000000;
            (*(s32 *)((char *)(temp_s0_28) + 0x4)) = 0x04000400;
            var_s0_2 = (char *)(temp_s0_28) + 8;
        }
        (*(s32 *)((char *)(var_s0_2) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
        var_s0 = (char *)(var_s0_2) + 8;
    }
    (*(s32 *)((char *)(var_s0) + 0x0)) = 0xD9FFFFFF;
    (*(s32 *)((char *)(var_s0) + 0x4)) = 0x200001;
    func_1510B7B4(func_1501A490(func_1501A680((char *)(var_s0) + 8), D_80082FA6, 0, 0, 0, 0), arg3);
    (*(s32 *)((char *)(temp_s1) + 0x123)) = 1;
}

void *func_15185454(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = (temp_f2 - temp_f12) / (((*(s32 *)((char *)(arg1) + 0x4)) - temp_f12) - ((*(s32 *)((char *)(arg1) + 0x8)) - temp_f2));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f14 + (((*(f32 *)((char *)(arg1) + 0x0)) - temp_f14) * temp_f0));
    temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f16 = temp_f12_2 + (((*(s32 *)((char *)(arg1) + 0x4)) - temp_f12_2) * temp_f0);
    (*(s32 *)((char *)(arg2) + 0x8)) = temp_f16;
    (*(s32 *)((char *)(arg2) + 0x4)) = temp_f16;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_a3 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_a3) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_15185554(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x8)) < (*(s32 *)((char *)(arg0) + 0x4))) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_1518557C(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f14 = (*(s32 *)((char *)(arg1) + 0x0));
    temp_f0 = (temp_f2 + temp_f12) / ((temp_f12 - temp_f14) + (temp_f2 - (*(s32 *)((char *)(arg1) + 0x8))));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f12 + ((temp_f14 - temp_f12) * temp_f0));
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) -(*(f32 *)((char *)(arg2) + 0x0));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (temp_f16 + (((*(f32 *)((char *)(arg1) + 0x4)) - temp_f16) * temp_f0));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_a3 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_a3) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_1518567C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x0)) < -(*(s32 *)((char *)(arg0) + 0x8))) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_151856A8(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = (temp_f2 + temp_f12) / ((temp_f12 - (*(s32 *)((char *)(arg1) + 0x4))) + (temp_f2 - (*(s32 *)((char *)(arg1) + 0x8))));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f14 + (((*(f32 *)((char *)(arg1) + 0x0)) - temp_f14) * temp_f0));
    temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (temp_f12_2 + (((*(f32 *)((char *)(arg1) + 0x4)) - temp_f12_2) * temp_f0));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) -(*(f32 *)((char *)(arg2) + 0x4));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_a3 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_a3) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_151857B0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x4)) < -(*(s32 *)((char *)(arg0) + 0x8))) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_151857DC(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f14 = (*(s32 *)((char *)(arg1) + 0x0)) - temp_f12;
    temp_f0 = (temp_f2 - temp_f12) / (temp_f14 - ((*(s32 *)((char *)(arg1) + 0x8)) - temp_f2));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f12 + (temp_f14 * temp_f0));
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (temp_f16 + (((*(f32 *)((char *)(arg1) + 0x4)) - temp_f16) * temp_f0));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_a3 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_a3) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_151858D4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x8)) < (*(s32 *)((char *)(arg0) + 0x0))) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_151858FC(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = (D_800D3688 - temp_f2) / ((*(s32 *)((char *)(arg1) + 0x8)) - temp_f2);
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f12 + (((*(f32 *)((char *)(arg1) + 0x0)) - temp_f12) * temp_f0));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (temp_f14 + (((*(f32 *)((char *)(arg1) + 0x4)) - temp_f14) * temp_f0));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) D_800D3688;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_v1_2 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_v1_2) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_151859FC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (D_800D3688 < (*(s32 *)((char *)(arg0) + 0x8))) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_15185A28(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x8));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = (D_800D368C - temp_f2) / ((*(s32 *)((char *)(arg1) + 0x8)) - temp_f2);
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f12 + (((*(f32 *)((char *)(arg1) + 0x0)) - temp_f12) * temp_f0));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (temp_f14 + (((*(f32 *)((char *)(arg1) + 0x4)) - temp_f14) * temp_f0));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) D_800D368C;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_v1_2 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_v1_2) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_15185B28(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x8)) < D_800D368C) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_15185B54(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)(arg2) + 0x0)) = 0.0f;
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x4));
    temp_f0 = temp_f2 / (temp_f2 - (*(s32 *)((char *)(arg1) + 0x0)));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (temp_f12 + (((*(f32 *)((char *)(arg1) + 0x4)) - temp_f12) * temp_f0));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) (temp_f14 + (((*(f32 *)((char *)(arg1) + 0x8)) - temp_f14) * temp_f0));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_v1_2 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_v1_2) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_15185C44(f32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (*arg0 <= 0.0f) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_15185C6C(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)(arg2) + 0x4)) = 0.0f;
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = temp_f2 / (temp_f2 - (*(s32 *)((char *)(arg1) + 0x4)));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f12 + (((*(f32 *)((char *)(arg1) + 0x0)) - temp_f12) * temp_f0));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) (temp_f14 + (((*(f32 *)((char *)(arg1) + 0x8)) - temp_f14) * temp_f0));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(s16 *)((char *)(arg2) + 0xC)) = (s16) (s32) ((f32) temp_v0 + ((f32) ((*(s16 *)((char *)(arg1) + 0xC)) - temp_v0) * temp_f0));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
    (*(s16 *)((char *)(arg2) + 0xE)) = (s16) (s32) ((f32) temp_v1 + ((f32) ((*(s16 *)((char *)(arg1) + 0xE)) - temp_v1) * temp_f0));
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(s16 *)((char *)(arg2) + 0x10)) = (s16) (s32) ((f32) temp_v1_2 + ((f32) ((*(s16 *)((char *)(arg1) + 0x10)) - temp_v1_2) * temp_f0));
    return (char *)(arg2) + 0x14;
}

s32 func_15185D5C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x4)) <= 0.0f) {
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_15185D84(f32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (*arg0 > 0.0f) {
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_15185DAC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x4)) > 0.0f) {
        var_v0 = 1;
    }
    return var_v0;
}

void *func_15185DD4(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 (*temp_s3)(void *);
    s32 temp_v0;
    s32 var_s4;
    void *(*temp_s5)(void *, void *, void *);
    void *temp_v0_2;
    void *var_s0;
    void *var_s1;
    void *var_s2;

    var_s1 = arg3;
    temp_v0 = arg2 * 4;
    var_s2 = ((arg1 * 0x14) + (char *)(arg0)) - 0x14;
    temp_s5 = *(&D_8008D498 + temp_v0);
    temp_s3 = *(&D_8008D4C0 + temp_v0);
    var_s0 = arg0;
    var_s4 = 0;
    if (arg1 > 0) {
        do {
            if (temp_s3(var_s0) != 0) {
                if (temp_s3(var_s2) != 0) {
                    var_s1 = (char *)(var_s1) + 0x14;
                    (*(s32 *)((char *)(var_s1) - 0x14)) = (s32) (*(s32 *)((char *)(var_s0) + 0x0));
                    (*(s32 *)((char *)(var_s1) - 0x10)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
                    (*(s32 *)((char *)(var_s1) - 0xC)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
                    (*(s32 *)((char *)(var_s1) - 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0xC));
                    (*(s32 *)((char *)(var_s1) - 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x10));
                } else {
                    temp_v0_2 = temp_s5(var_s2, var_s0, var_s1);
                    var_s1 = (char *)(temp_v0_2) + 0x14;
                    (*(s32 *)((char *)(temp_v0_2) + 0x0)) = (s32) (*(s32 *)((char *)(var_s0) + 0x0));
                    (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
                    (*(s32 *)((char *)(temp_v0_2) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
                    (*(s32 *)((char *)(temp_v0_2) + 0xC)) = (s32) (*(s32 *)((char *)(var_s0) + 0xC));
                    (*(s32 *)((char *)(temp_v0_2) + 0x10)) = (s32) (*(s32 *)((char *)(var_s0) + 0x10));
                }
            } else if (temp_s3(var_s2) != 0) {
                var_s1 = temp_s5(var_s2, var_s0, var_s1);
            }
            var_s4 += 1;
            var_s2 = var_s0;
            var_s0 = (char *)(var_s0) + 0x14;
        } while (var_s4 != arg1);
    }
    return var_s1;
}

s32 func_15185F24(void *arg0, s32 arg1, void * arg2, void *arg3, u32 *arg4, s32 arg5) {
    s32 sp88;
    u32 sp64;
    f32 temp_f0;
    s16 temp_t8_2;
    s32 *var_v0;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    u32 *var_s1;
    u32 *var_s1_2;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_3;
    u32 temp_lo_4;
    void *temp_s5;
    void *temp_s5_2;
    void *temp_s7;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_a0;
    void *var_a0_2;
    void *var_a2;
    void *var_v0_2;
    void *var_v1;

    f32 sp68;
    f32 sp6C;
    var_s4 = arg1;
    var_a2 = arg0;
    var_v0 = &sp88;
    var_s3 = 0;
    if (var_s4 > 0) {
        temp_v1 = var_s4 & 3;
        if (temp_v1 != 0) {
            var_a0 = (char *)(arg0) + (0 * 4 * 4);
            do {
                temp_v1_2 = (*(s32 *)((char *)(var_a0) + 0xC));
                var_s3 += 1;
                *var_v0 = (*(s32 *)((char *)(var_a2) + 0x0));
                temp_t8 = (*(s32 *)((char *)(var_a2) + 0x4));
                var_v0 += 0x14;
                var_a2 = (char *)(var_a2) + 0x14;
                (*(s32 *)((char *)(var_v0) - 0x10)) = temp_t8;
                var_a0 = (char *)(var_a0) + 0x14;
                (*(s32 *)((char *)(var_v0) - 0xC)) = (s32) (*(s32 *)((char *)(var_a2) - 0xC));
                (*(s32 *)((char *)(var_v0) - 0x8)) = (s32) (*(s32 *)((char *)(var_a2) - 0x8));
                (*(s32 *)((char *)(var_v0) - 0x4)) = (s32) (*(s32 *)((char *)(var_a2) - 0x4));
                (*(s16 *)((char *)(var_v0) - 0x8)) = (s16) (*(s16 *)((char *)(temp_v1_2) + 0x0));
                (*(s16 *)((char *)(var_v0) - 0x6)) = (s16) (*(s16 *)((char *)(temp_v1_2) + 0x2));
                (*(s16 *)((char *)(var_v0) - 0x4)) = (s16) (*(s16 *)((char *)(temp_v1_2) + 0x4));
            } while (temp_v1 != var_s3);
            if (var_s3 != var_s4) {
                goto block_5;
            }
        } else {
block_5:
            var_a0_2 = (char *)(arg0) + (var_s3 * 0x14);
            do {
                temp_v1_3 = (*(s32 *)((char *)(var_a0_2) + 0xC));
                var_a0_2 = (char *)(var_a0_2) + 0x50;
                *var_v0 = (*(s32 *)((char *)(var_a2) + 0x0));
                temp_t6 = (*(s32 *)((char *)(var_a2) + 0x4));
                var_v0 += 0x50;
                var_a2 = (char *)(var_a2) + 0x50;
                (*(s32 *)((char *)(var_v0) - 0x4C)) = temp_t6;
                (*(s32 *)((char *)(var_v0) - 0x48)) = (s32) (*(s32 *)((char *)(var_a2) - 0x48));
                (*(s32 *)((char *)(var_v0) - 0x44)) = (s32) (*(s32 *)((char *)(var_a2) - 0x44));
                (*(s32 *)((char *)(var_v0) - 0x40)) = (s32) (*(s32 *)((char *)(var_a2) - 0x40));
                (*(s16 *)((char *)(var_v0) - 0x44)) = (s16) (*(s16 *)((char *)(temp_v1_3) + 0x0));
                (*(s16 *)((char *)(var_v0) - 0x42)) = (s16) (*(s16 *)((char *)(temp_v1_3) + 0x2));
                (*(s16 *)((char *)(var_v0) - 0x40)) = (s16) (*(s16 *)((char *)(temp_v1_3) + 0x4));
                temp_v1_4 = (*(s32 *)((char *)(var_a0_2) - 0x30));
                (*(s32 *)((char *)(var_v0) - 0x3C)) = (s32) (*(s32 *)((char *)(var_a2) - 0x3C));
                (*(s32 *)((char *)(var_v0) - 0x38)) = (s32) (*(s32 *)((char *)(var_a2) - 0x38));
                (*(s32 *)((char *)(var_v0) - 0x34)) = (s32) (*(s32 *)((char *)(var_a2) - 0x34));
                (*(s32 *)((char *)(var_v0) - 0x30)) = (s32) (*(s32 *)((char *)(var_a2) - 0x30));
                (*(s32 *)((char *)(var_v0) - 0x2C)) = (s32) (*(s32 *)((char *)(var_a2) - 0x2C));
                (*(s16 *)((char *)(var_v0) - 0x30)) = (s16) (*(s16 *)((char *)(temp_v1_4) + 0x0));
                (*(s16 *)((char *)(var_v0) - 0x2E)) = (s16) (*(s16 *)((char *)(temp_v1_4) + 0x2));
                (*(s16 *)((char *)(var_v0) - 0x2C)) = (s16) (*(s16 *)((char *)(temp_v1_4) + 0x4));
                temp_v1_5 = (*(s32 *)((char *)(var_a0_2) - 0x1C));
                (*(s32 *)((char *)(var_v0) - 0x28)) = (s32) (*(s32 *)((char *)(var_a2) - 0x28));
                (*(s32 *)((char *)(var_v0) - 0x24)) = (s32) (*(s32 *)((char *)(var_a2) - 0x24));
                (*(s32 *)((char *)(var_v0) - 0x20)) = (s32) (*(s32 *)((char *)(var_a2) - 0x20));
                (*(s32 *)((char *)(var_v0) - 0x1C)) = (s32) (*(s32 *)((char *)(var_a2) - 0x1C));
                (*(s32 *)((char *)(var_v0) - 0x18)) = (s32) (*(s32 *)((char *)(var_a2) - 0x18));
                (*(s16 *)((char *)(var_v0) - 0x1C)) = (s16) (*(s16 *)((char *)(temp_v1_5) + 0x0));
                (*(s16 *)((char *)(var_v0) - 0x1A)) = (s16) (*(s16 *)((char *)(temp_v1_5) + 0x2));
                (*(s16 *)((char *)(var_v0) - 0x18)) = (s16) (*(s16 *)((char *)(temp_v1_5) + 0x4));
                temp_v1_6 = (*(s32 *)((char *)(var_a0_2) - 0x8));
                (*(s32 *)((char *)(var_v0) - 0x14)) = (s32) (*(s32 *)((char *)(var_a2) - 0x14));
                (*(s32 *)((char *)(var_v0) - 0x10)) = (s32) (*(s32 *)((char *)(var_a2) - 0x10));
                (*(s32 *)((char *)(var_v0) - 0xC)) = (s32) (*(s32 *)((char *)(var_a2) - 0xC));
                (*(s32 *)((char *)(var_v0) - 0x8)) = (s32) (*(s32 *)((char *)(var_a2) - 0x8));
                (*(s32 *)((char *)(var_v0) - 0x4)) = (s32) (*(s32 *)((char *)(var_a2) - 0x4));
                (*(s16 *)((char *)(var_v0) - 0x8)) = (s16) (*(s16 *)((char *)(temp_v1_6) + 0x0));
                (*(s16 *)((char *)(var_v0) - 0x6)) = (s16) (*(s16 *)((char *)(temp_v1_6) + 0x2));
                (*(s16 *)((char *)(var_v0) - 0x4)) = (s16) (*(s16 *)((char *)(temp_v1_6) + 0x4));
            } while (var_a0_2 != ((var_s4 * 0x14) + (char *)(arg0)));
        }
        var_s3 = 0;
    }
    do {
        temp_v0 = var_s3 & 1;
        temp_s0 = temp_v0 ^ 1;
        temp_lo = (u32) ((char *)(func_15185DD4(&sp88 + (temp_v0 * 0x208), var_s4, var_s3, &sp88 + (temp_s0 * 0x208))) - (char *)((temp_s0 * 0x208) + &sp88)) / 20U;
        var_s3 += 1;
        var_s4 = (s32) temp_lo;
    } while (var_s3 != 6);
    sp64 = 0;
    temp_v0_2 = var_s3 & 1;
    (*(s32 *)((char *)(arg4) + 0x0)) = 0;
    var_s0 = 0;
    if (arg5 != 0) {
        temp_s5 = ((temp_v0_2 ^ 1) * 0x208) + &sp88;
        var_s1 = &sp64;
        do {
            temp_lo_2 = (u32) ((char *)(func_15185DD4((temp_v0_2 * 0x208) + &sp88, var_s4, var_s0 + 6, (char *)(temp_s5) + (*var_s1 * 0x14))) - (char *)(temp_s5)) / 20U;
            var_s0 += 1;
            var_s1 += 4;
            *var_s1 = temp_lo_2;
        } while (var_s0 < 2);
        temp_s3 = var_s3 + 1;
        temp_v0_3 = temp_s3 & 1;
        temp_s5_2 = ((temp_v0_3 ^ 1) * 0x208) + &sp88;
        temp_s7 = (temp_v0_3 * 0x208) + &sp88;
        var_s0_2 = 0;
        var_s1_2 = arg4;
        do {
            temp_s0_2 = var_s0_2 + 1;
            temp_lo_3 = (u32) ((char *)(func_15185DD4((char *)(temp_s7) + (sp64 * 0x14), sp68 - sp64, (var_s0_2 >> 1) + 8, (char *)(temp_s5_2) + ((*(u32 *)((char *)(var_s1_2) + 0x0)) * 0x14))) - (char *)(temp_s5_2)) / 20U;
            (*(s32 *)((char *)(var_s1_2) + 0x4)) = temp_lo_3;
            temp_a2 = (temp_s0_2 >> 1) + 8;
            var_s0_2 = temp_s0_2 + 1;
            var_s1_2 = var_s1_2 + 4 + 4;
            temp_lo_4 = (u32) ((char *)(func_15185DD4((char *)(temp_s7) + ((s32)(sp68) * 0x14), sp6C - sp68, temp_a2, (char *)(temp_s5_2) + (temp_lo_3 * 0x14))) - (char *)(temp_s5_2)) / 20U;
            *var_s1_2 = temp_lo_4;
        } while (var_s0_2 < 4);
        var_s4 = (s32) temp_lo_4;
        var_s3 = temp_s3 + 1;
    } else {
        (*(s32 *)((char *)(arg4) + 0x10)) = var_s4;
        (*(s32 *)((char *)(arg4) + 0xC)) = var_s4;
        (*(s32 *)((char *)(arg4) + 0x8)) = var_s4;
        (*(s32 *)((char *)(arg4) + 0x4)) = var_s4;
    }
    var_v0_2 = ((var_s3 & 1) * 0x208) + &sp88;
    var_s3_2 = 0;
    if (var_s4 > 0) {
        var_v1 = arg3;
        do {
            var_s3_2 += 1;
            (*(s16 *)((char *)(var_v1) + 0x0)) = (s16) (*(s16 *)((char *)(var_v0_2) + 0xC));
            temp_t8_2 = (*(s32 *)((char *)(var_v0_2) + 0xE));
            var_v0_2 = (char *)(var_v0_2) + 0x14;
            (*(s32 *)((char *)(var_v1) + 0x2)) = temp_t8_2;
            (*(s16 *)((char *)(var_v1) + 0x4)) = (s16) (*(s16 *)((char *)(var_v0_2) - 0x4));
            temp_f0 = 1020.0f / (*(s32 *)((char *)(var_v0_2) - 0xC));
            (*(f32 *)((char *)(var_v0_2) - 0x14)) = (f32) ((*(f32 *)((char *)(var_v0_2) - 0x14)) * temp_f0);
            (*(f32 *)((char *)(var_v0_2) - 0x10)) = (f32) ((*(f32 *)((char *)(var_v0_2) - 0x10)) * temp_f0);
            (*(s16 *)((char *)(var_v1) + 0x8)) = (s16) (s32) (1024.0f - (*(s16 *)((char *)(var_v0_2) - 0x14)));
            (*(s32 *)((char *)(var_v1) + 0xC)) = 0;
            (*(s32 *)((char *)(var_v1) + 0xD)) = 0;
            (*(s32 *)((char *)(var_v1) + 0xE)) = 0;
            (*(s16 *)((char *)(var_v1) + 0xA)) = (s16) (s32) ((*(s16 *)((char *)(var_v0_2) - 0x10)) + 1024.0f);
            var_v1 = (char *)(var_v1) + 0x10;
            (*(s8 *)((char *)(var_v1) - 0x1)) = (s8) (u32) (D_800DE02C - ((((*(s8 *)((char *)(var_v0_2) - 0xC)) - D_800D368C) / (D_800D3688 - D_800D368C)) * D_800DE02C));
            (*(s32 *)((char *)(var_v1) - 0xA)) = 0;
        } while (var_s3_2 != var_s4);
    }
    return var_s4;
}

s32 func_1518652C(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    s32 sp40[256];
    s32 sp330[128];
    s32 sp32C;
    u32 sp34;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *var_t1;
    s32 temp_v0;
    u32 var_t0;
    u32 var_v0;
    u8 *var_a0;
    u8 temp_t7;
    u8 temp_t9;
    u8 var_a1;
    u8 var_a1_2;
    void *temp_a0;

    sp34 = 0;
    func_1510F800(0);
    temp_v0 = func_1510F720(arg0, arg1, arg2, (s32 (*)[]) &sp330[0]);
    if (temp_v0 != 0) {
        sp32C = temp_v0;
        bzero((s32 (*)[]) &sp40[0], 0x2EC);
        var_t0 = sp34;
        if (sp32C != 0) {
            var_t1 = &(&sp330[0])[sp32C];
            do {
                temp_a0 = (*(s32 *)((char *)(var_t1) - 0x4));
                var_v0 = 0;
                var_t1 -= 4;
                var_a0 = (char *)(temp_a0) + 0xE;
                if (D_800DE041 != 0) {
                    var_a1 = (*(s32 *)((char *)(temp_a0) + 0xE));
                    if (var_a1 != 0) {
                        do {
                            if (var_a1 & 0x80) {
                                temp_t9 = (*(s32 *)((char *)(var_a0) + 0x1));
                                var_a0 += 2;
                                var_v0 = ((var_a1 << 8) | temp_t9) & 0x7FFF;
                            } else {
                                var_v0 += var_a1;
                                var_a0 += 1;
                            }
                            if (var_v0 < 0x1760U) {
                                temp_v1 = &(&sp40[0])[var_v0 >> 5];
                                if ((*(s32 *)((char *)(D_800D3668) + var_v0)) == 1) {
                                    *temp_v1 |= 1 << (var_v0 & 0x1F);
                                    if (var_t0 < var_v0) {
                                        var_t0 = var_v0;
                                    }
                                }
                            }
                            var_a1 = *var_a0;
                        } while (var_a1 != 0);
                    }
                } else {
                    var_a1_2 = (*(s32 *)((char *)(temp_a0) + 0xE));
                    if (var_a1_2 != 0) {
                        do {
                            if (var_a1_2 & 0x80) {
                                temp_t7 = (*(s32 *)((char *)(var_a0) + 0x1));
                                var_a0 += 2;
                                var_v0 = ((var_a1_2 << 8) | temp_t7) & 0x7FFF;
                            } else {
                                var_v0 += var_a1_2;
                                var_a0 += 1;
                            }
                            if (var_v0 < 0x1760U) {
                                temp_v1_2 = &(&sp40[0])[var_v0 >> 5];
                                *temp_v1_2 |= 1 << (var_v0 & 0x1F);
                                if (var_t0 < var_v0) {
                                    var_t0 = var_v0;
                                }
                            }
                            var_a1_2 = *var_a0;
                        } while (var_a1_2 != 0);
                    }
                }
            } while ((char *)(var_t1) != (char *)(&sp330)[0]);
        }
        D_800D3690 = D_800DBE3C;
        D_800D3694 = &(&sp40[0])[var_t0 >> 5] + 4;
        D_800DF0E8 = arg0 - arg2;
        D_800DF0EC = arg0 + arg2;
        D_800DF0F0 = arg1 - arg2;
        D_800DF0F4 = arg1 + arg2;
        return (s32) (func_150A5B90((s32 (*)[]) &sp40[0], arg3, arg4, arg5) - (s32)(arg3)) / 20;
    }
    return 0;
}

void *func_15186794(void *arg0, s32 arg1) {
    void *sp134;
    u32 sp130;
    s32 sp120;
    u32 sp11C;
    void * sp10C;
    u32 spFC;
    s32 spF8;
    s32 spF4;
    void *spE8;
    s32 spE0;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    void *spC8;
    void * *sp74;
    void *sp6C;
    f32 temp_f0;
    f32 var_f16;
    f32 var_f20;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_cond;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t8;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 var_fp;
    s32 var_s1_2;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u16 temp_t6;
    u32 *var_t4;
    u32 temp_t7;
    u32 temp_v0_10;
    u32 temp_v0_5;
    u32 var_s7;
    u8 temp_a0;
    u8 temp_v0_4;
    u8 var_s1;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v0_11;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_6;
    void *temp_v1_2;
    void *var_s0;
    void *var_s0_2;
    void *var_s5;
    void *var_s6;

    var_s0 = arg0;
    spF4 = 0;
    spC8 = var_s0;
    if (arg1 != 0) {
        goto block_88;
    }
    var_v0 = D_8008D3E0;
    if (D_800DE01C < var_v0) {
        D_8008D3E0 = D_800DE01C;
        var_v0 = D_800DE01C;
        D_800DE028 *= D_800A737C;
    } else {
        if ((*(u16 *)((char *)(D_800B0DF0) + 0x1E)) == 0) {
            (*(u16 *)((char *)(D_800B0DF0) + 0x1E)) = 0x190U;
            var_v0 = D_8008D3E0;
        }
        if (var_v0 < D_800DE020) {
            temp_t6 = (*(u16 *)((char *)(D_800B0DF0) + 0x1E));
            var_f16 = (f32) temp_t6;
            if ((s32) temp_t6 < 0) {
                var_f16 += 4294967296.0f;
            }
            D_800DE028 += (var_f16 - D_800DE028) * D_800A7380;
        }
        if (var_v0 < D_800DE024) {
            D_8008D3E0 = D_800DE024;
            var_v0 = D_800DE024;
        }
    }
    temp_v0 = allocate_memory((var_v0 * 0x10) + 0x1C0, 3, 1, 1);
    var_s6 = temp_v0;
    if (temp_v0 == NULL) {
        goto block_88;
    }
    temp_v0_2 = allocate_memory(D_8008D3E0 * 0x14, 2, 1, 1);
    sp134 = temp_v0_2;
    if (temp_v0_2 == NULL) {
        func_10004074(var_s6);
        goto block_88;
    }
    temp_s1 = (arg1 * 0x10) + &D_800DF090;
    memcpy(temp_s1, D_800BE628 + (D_80082FA4 * 0x180) + (D_800BE9C0 * 0x10) + 0x40, 0x10);
    spE8 = var_s0;
    var_s7 = 0;
    sp74 = &gObjects;
    spF8 = 0;
    (*(s16 *)((char *)(temp_s1) + 0xC)) = (s16) ((s32) ((*(s16 *)((char *)(temp_s1) + 0xC)) * D_800DE030) >> 0xA);
    do {
        if (((*(s32 *)((char *)(sp74) + 0x0)) == 0) || ((*(s32 *)((char *)(sp74) + 0x1D4)) == 0) || (temp_a0 = (*(s32 *)((char *)(sp74) + 0x74)), temp_v1 = 1 << arg1, ((temp_a0 & temp_v1) != 0)) || ((*(s32 *)((char *)(sp74) + 0x5)) != 0) || (((*(s32 *)((char *)(sp74) + 0x66)) & 0x10) != 0x10) || (temp_v1 == (temp_a0 & temp_v1)) || ((*(s32 *)((char *)(sp74) + 0x84)) == 0x2D8) || ((temp_v0_3 = (*(s32 *)((char *)(sp74) + 0x31C)), (temp_v0_3 != NULL)) && (((*(s32 *)((char *)(temp_v0_3) + 0x95)) != 0) || ((*(s32 *)((char *)(temp_v0_3) + 0x98)) != 0))) || (D_800DF0E0 & (1 << spF8))) {
            var_v0_2 = spF8 + 1;
        } else if (((*(s32 *)((char *)(sp74) + 0x65)) != 0) && ((*(s32 *)((char *)(sp74) + 0x4)) != 0x62)) {
            var_v0_2 = spF8 + 1;
        } else {
            if ((*(s32 *)((char *)(sp74) + 0x2C8)) != 0) {
                temp_v0_4 = func_150849CC(sp74, &spE0);
                var_s1 = temp_v0_4;
                func_1503DA9C(sp74, temp_v0_4, spE0, 0);
            } else {
                var_s1 = (*(s32 *)((char *)(sp74) + 0x4));
                spE0 = 0;
            }
            var_v0_2 = spF8 + 1;
            if (*(&D_800C48F0 + (var_s1 * 4)) == 0) {

            } else {
                var_v0_2 = spF8 + 1;
                if (func_15184DF0(spF8, arg1, &spD8, &spD4, &spD0) == 0) {

                } else {
                    var_f20 = 0.0f;
                    sp11C = 0;
                    if ((D_800DE038 != 0) && (spF4 < 8) && (var_s7 < (u32) D_8008D3E0)) {
loop_42:
                        temp_f0 = func_15184368(spF8, spF4, spD8, spD4, spD0, var_f20);
                        temp_cond = temp_f0 == 0.0f;
                        var_f20 = temp_f0;
                        if (!temp_cond) {
                            temp_s1_2 = (spF4 << 6) + &D_800DF0F8;
                            temp_v0_5 = func_151873E4((s32) (*(s32 *)((char *)(sp74) + 0x14)), (s32) (*(s32 *)((char *)(sp74) + 0x1C)), 0xE6, sp134, temp_s1_2, ((D_8008D3E0 * 0x14) + (char *)(sp134)) - 0x28, func_1518652C((s32) (*(s32 *)((char *)(sp74) + 0x14)), (s32) (*(s32 *)((char *)(sp74) + 0x1C)), 0xE6, sp134, temp_s1_2, ((D_8008D3E0 * 0x14) + (char *)(sp134)) - 0x28));
                            sp130 = temp_v0_5;
                            if (temp_v0_5 != 0) {
                                sp6C = (arg1 * 0x10) + &D_800DF090;
                                var_fp = 0;
                                var_s1_2 = 0;
                                func_15184FA4(var_s0, spF8, spF4, arg1);
                                temp_v0_6 = var_s0;
                                temp_s0 = (char *)(temp_v0_6) + 8;
                                if (((*(s32 *)((char *)(sp74) + 0x127)) != 0xFF) && ((s32) (*(s32 *)((char *)(sp74) + 0x1C8)) < 2)) {
                                    sp120 = 1;
                                } else {
                                    temp_v1_2 = ((*(s32 *)((char *)(sp74) + 0x124)) * 0x32C) + &gObjects;
                                    if (((spF8 + 1) == (*(s32 *)((char *)(temp_v1_2) + 0x65))) && ((*(s32 *)((char *)(temp_v1_2) + 0x127)) != 0xFF) && ((*(s32 *)((char *)(sp74) + 0x4)) == 0x53)) {
                                        sp120 = 1;
                                    } else {
                                        sp120 = 0;
                                    }
                                }
                                (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xDE000000;
                                (*(s32 *)((char *)(temp_v0_6) + 0x4)) = &D_8008D410;
                                (*(s32 *)((char *)(temp_s0) + 0x0)) = 0xDC080008;
                                temp_s0_2 = (char *)(temp_s0) + 8;
                                (*(s32 *)((char *)(temp_s0) + 0x4)) = sp6C;
                                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xEF082C3F;
                                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0x5049D8;
                                temp_s0_3 = (char *)(temp_s0_2) + 8;
                                (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xFD900000;
                                temp_s0_4 = (char *)(temp_s0_3) + 8;
                                (*(s32 *)((char *)(temp_s0_3) + 0x4)) = (s32) D_800DF088;
                                (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xF5900000;
                                (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0x07080200;
                                temp_s0_5 = (char *)(temp_s0_4) + 8;
                                (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xE6000000;
                                (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0;
                                temp_s0_6 = (char *)(temp_s0_5) + 8;
                                (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xF3000000;
                                (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0x077FF100;
                                temp_s0_7 = (char *)(temp_s0_6) + 8;
                                (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xE7000000;
                                (*(s32 *)((char *)(temp_s0_7) + 0x4)) = 0;
                                temp_s0_8 = (char *)(temp_s0_7) + 8;
                                (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0xF5881000;
                                (*(s32 *)((char *)(temp_s0_8) + 0x4)) = 0x80200;
                                temp_s0_9 = (char *)(temp_s0_8) + 8;
                                (*(s32 *)((char *)(temp_s0_8) + 0x8)) = 0xF2000000;
                                (*(s32 *)((char *)(temp_s0_9) + 0x4)) = 0xFC0FC;
                                temp_s0_10 = (char *)(temp_s0_9) + 8;
                                var_s5 = temp_s0_10;
                                var_s0_2 = (char *)(temp_s0_10) + 8;
                                if ((sp130 != 0) && (var_s7 < (u32) D_8008D3E0)) {
loop_54:
                                    if ((var_fp % 3) == 2) {
                                        func_15185F24(((var_fp * 0x14) + (char *)(sp134)) - 0x28, 3, 0x1A, var_s6, &spFC, sp120);
                                        var_t4 = &spFC;
                                        do {
                                            temp_t6_2 = (*(s32 *)((char *)(var_t4) + 0x4));
                                            temp_t7 = (*(s32 *)((char *)(var_t4) + 0x0));
                                            var_t4 += 4;
                                            temp_t2 = temp_t6_2 - temp_t7;
                                            var_s1_2 += temp_t2;
                                            var_s6 = (char *)(var_s6) + temp_t2 * 0x10;
                                            var_s7 += temp_t2;
                                            if (var_s1_2 >= 0x11) {
                                                temp_v0_7 = var_s1_2 - temp_t2;
                                                (*(s32 *)((char *)(var_s5) + 0x4)) = (void *) ((var_s1_2 * -0x10) + (char *)(var_s6));
                                                (*(s32 *)((char *)(var_s5) + 0x0)) = (s32) (((temp_v0_7 & 0xFF) << 0xC) | 0x01000000 | ((temp_v0_7 & 0x7F) * 2));
                                                var_s5 = var_s0_2;
                                                var_s0_2 = (char *)(var_s0_2) + 8;
                                                var_s1_2 = temp_t2;
                                            }
                                            temp_t3 = var_s1_2 - temp_t2;
                                            var_t2 = temp_t2 - 2;
                                            var_v1 = temp_t3 + var_t2;
                                            if (var_t2 > 0) {
                                                do {
                                                    if (var_t2 >= 4) {
                                                        temp_t6_3 = (var_v1 - 1) & 0x1F;
                                                        temp_v0_8 = temp_t3 & 0x1F;
                                                        temp_a1 = var_v1 - 2;
                                                        temp_a2 = temp_v0_8 << 0xA;
                                                        (*(s32 *)((char *)(var_s0_2) + 0x0)) = (s32) ((temp_v0_8 << 0x17) | 0x10000000 | (((var_v1 - 3) & 0x1F) << 0x12) | (((temp_a1 >> 2) & 7) << 0xF) | temp_a2 | ((temp_a1 & 0x1F) << 5) | temp_t6_3);
                                                        temp_t1 = var_v1 & 0x1F;
                                                        (*(s32 *)((char *)(var_s0_2) + 0x4)) = (s32) ((temp_a1 << 0x1E) | (temp_v0_8 << 0x19) | (temp_t1 << 0x14) | (((var_v1 + 1) & 0x1F) << 0xF) | temp_a2 | (temp_t6_3 << 5) | temp_t1);
                                                        var_s0_2 = (char *)(var_s0_2) + 8;
                                                        var_t2 -= 4;
                                                        var_v1 -= 4;
                                                    } else {
                                                        temp_t8 = ((temp_t3 * 2) & 0xFF) << 0x10;
                                                        temp_v0_9 = var_v1 * 2;
                                                        temp_a0_2 = temp_v0_9 + 2;
                                                        if (var_t2 >= 2) {
                                                            temp_a2_2 = temp_v0_9 & 0xFF;
                                                            (*(s32 *)((char *)(var_s0_2) + 0x0)) = (s32) (temp_t8 | (temp_a2_2 << 8) | (temp_a0_2 & 0xFF) | 0x06000000);
                                                            (*(s32 *)((char *)(var_s0_2) + 0x4)) = (s32) (temp_t8 | (((temp_v0_9 - 2) & 0xFF) << 8) | temp_a2_2);
                                                            var_s0_2 = (char *)(var_s0_2) + 8;
                                                            var_t2 -= 2;
                                                            var_v1 -= 2;
                                                        } else {
                                                            (*(s32 *)((char *)(var_s0_2) + 0x0)) = (s32) (temp_t8 | ((temp_v0_9 & 0xFF) << 8) | (temp_a0_2 & 0xFF) | 0x05000000);
                                                            (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
                                                            var_s0_2 = (char *)(var_s0_2) + 8;
                                                            var_t2 -= 1;
                                                            var_v1 -= 1;
                                                        }
                                                    }
                                                } while (var_t2 > 0);
                                            }
                                        } while ((char *)(var_t4) != (char *)(&sp10C));
                                    }
                                    var_fp += 1;
                                    if (((u32) var_fp < sp130) && (var_s7 < (u32) D_8008D3E0)) {
                                        goto loop_54;
                                    }
                                }
                                if (var_s1_2 != 0) {
                                    (*(s32 *)((char *)(var_s5) + 0x4)) = (void *) ((var_s1_2 * -0x10) + (char *)(var_s6));
                                    (*(s32 *)((char *)(var_s5) + 0x0)) = (s32) (((var_s1_2 & 0xFF) << 0xC) | 0x01000000 | ((var_s1_2 & 0x7F) * 2));
                                } else {
                                    var_s0_2 = var_s5;
                                }
                                (*(s32 *)((char *)(var_s0_2) + 0x0)) = 0xE7000000;
                                (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
                                var_s0 = (char *)(var_s0_2) + 8;
                                spF4 += 1;
                            }
                            temp_v0_10 = sp11C + 1;
                            if ((temp_v0_10 < (u32) D_800DE038) && (spF4 < 8)) {
                                sp11C = temp_v0_10;
                                if (var_s7 < (u32) D_8008D3E0) {
                                    goto loop_42;
                                }
                            }
                        }
                    }
                    var_v0_2 = spF8 + 1;
                }
            }
        }
        spF8 = var_v0_2;
        sp74 = (char *)(sp74) + 0x32C;
    } while (var_v0_2 != 0x19);
    if (spF4 != 0) {
        temp_v0_11 = func_1510B7B4(var_s0, arg1);
        (*(s32 *)((char *)(temp_v0_11) + 0x0)) = 0xDC080008;
        (*(s32 *)((char *)(temp_v0_11) + 0x4)) = (s32) (D_800BE628 + (D_80082FA4 * 0x180) + (D_800BE9C0 * 0x10) + 0x40);
        var_s0 = (char *)(temp_v0_11) + 8;
    } else {
        var_s0 = spE8;
    }
    if (var_s7 >= (u32) D_8008D3E0) {
        D_8008D3E0 = var_s7 + 0x30;
    } else {
        D_8008D3E0 = (s32) var_s7;
    }
    D_800DF0E0 = 0;
    D_800DF0E1 = 0;
    func_10004074(sp134);
    if (D_800BEBA4 < ((s32) ((char *)(var_s0) - *(&D_800BE9C8 + (D_800BE9C0 * 4))) >> 3)) {
        var_v0_3 = 1;
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 != 0) {
        return spC8;
    }
block_88:
    return var_s0;
}

void func_151872B0(s32 arg0) {
    D_800DE01C = 0x258;
    D_800DE020 = 0xB4;
    D_800DE024 = 0x5A;
    D_800DE030 = 0x3F8;
    D_800DE034 = 0;
    D_800DE038 = 1;
    D_800DE03C = 1.0f;
    D_800DE040 = 1;
    D_800DE041 = 1;
    switch (arg0) {                                 /* irregular */
    case 33:
        D_800DE01C = 0x12C0;
        D_800DE020 = 0x12BF;
        D_800DE024 = 0x12BE;
        D_800DE030 = 0x3F2;
        D_800DE034 = 1;
        D_800DE038 = 4;
        D_800DE040 = 0;
        return;
    case 34:
        D_800DE01C = 0x960;
        D_800DE020 = 0x95F;
        D_800DE024 = 0x95E;
        D_800DE038 = 4;
        D_800DE040 = 0;
        return;
    case 20:
        D_800DE041 = 0;
        return;
    case 41:
        D_800DE01C = 0x4B0;
        D_800DE020 = 0x258;
        D_800DE024 = 0x12C;
        return;
    }
}

u32 func_151873E4(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5, u32 arg6) {
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 var_a3;
    s32 var_s0;
    u16 temp_a0;
    u16 temp_a1;
    u16 var_v1;
    u32 var_t5;
    void *var_t0;

    if (D_800DBEF0 == 0) {
        return arg6;
    }
    func_1510F800(2);
    var_t5 = arg6;
    D_800DF0E8 = arg0 - arg2;
    arg3 = (char *)(arg3) + var_t5 * 0x14;
    D_800DF0EC = arg0 + arg2;
    D_800DF0F0 = arg1 - arg2;
    D_800DF0F4 = arg1 + arg2;
    var_s0 = 0;
    var_a3 = 0;
    if (D_800DBEF0 > 0) {
        var_t0 = D_800DBEF4;
        do {
            if (((*(s32 *)((char *)(var_t0) + 0x6E)) == 0) && !((*(s32 *)((char *)(var_t0) + 0x4F)) & 0x60)) {
                temp_a0 = (*(s32 *)((char *)(var_t0) + 0x52));
                temp_a1 = (*(s32 *)((char *)(var_t0) + 0x50));
                var_v1 = temp_a0;
                if ((s32) temp_a0 < (s32) temp_a1) {
                    var_v1 = temp_a1;
                }
                temp_a0_2 = (*(s32 *)((char *)(var_t0) + 0x10));
                if ((D_800DF0EC >= (temp_a0_2 - var_v1)) && ((temp_a0_2 + var_v1) >= D_800DF0E8)) {
                    temp_a0_3 = (*(s32 *)((char *)(var_t0) + 0x14));
                    if ((D_800DF0F4 >= (temp_a0_3 - var_v1)) && ((temp_a0_3 + var_v1) >= D_800DF0F0)) {
                        *(&D_800D37E0 + (var_s0 * 2)) = var_a3;
                        var_s0 += 1;
                    }
                }
            }
            var_a3 += 1;
            var_t0 = (char *)(var_t0) + 0xA0;
        } while (var_a3 < D_800DBEF0);
    }
    if (var_s0 != 0) {
        func_150A44F0(var_s0, &D_800D37E0, 0, var_a3);
        D_800D3690 = D_800DBE3C;
        D_800DF0E4 = var_s0;
        var_t5 = arg6 + ((s32) (func_150A5E44(&D_800D37E0, arg3, arg4, arg5) - (s32)(arg3)) / 20);
    }
    return var_t5;
}

void func_151875E0(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7) {
    f32 var_f10;
    f32 var_f16;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f8;
    f32 var_f8_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 var_s0;
    s32 var_s3;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_15167A68(6, 0, 0xB0, 1, 0xFF, 1);
    if (temp_v0 != NULL) {
        temp_v0_2 = allocate_memory(0x780, 1, 2, 1);
        (*(s32 *)((char *)(temp_v0) + 0xA4)) = temp_v0_2;
        if (temp_v0_2 == NULL) {
            func_1516972C(temp_v0);
            return;
        }
        (*(s32 *)((char *)(temp_v0) + 0x90)) = arg0;
        var_s0 = 0;
        (*(s32 *)((char *)(temp_v0) + 0x94)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0xA8)) = 0;
        (*(s16 *)((char *)(temp_v0) + 0xAA)) = (s16) arg4;
        (*(s32 *)((char *)(temp_v0) + 0x98)) = arg2;
        var_s3 = 0;
        (*(s32 *)((char *)(temp_v0) + 0x9C)) = arg6;
        (*(s32 *)((char *)(temp_v0) + 0xA0)) = arg7;
        do {
            if (var_s3 < 0x168) {
                temp_t9 = 7 - (random_u32() & 0xF);
                var_f18 = (f32) temp_t9;
                if (temp_t9 < 0) {
                    var_f18 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x80)) = var_f18;
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x84)) = 0.0f;
                temp_t5 = (random_u32() & 0x3F) + (var_s3 - 0x1E);
                var_f8 = (f32) temp_t5;
                if (temp_t5 < 0) {
                    var_f8 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x88)) = var_f8;
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x98)) = 0;
            } else if (var_s3 < 0x2D0) {
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x80)) = 0.0f;
                temp_t3 = (random_u32() & 0x3F) + (var_s3 - 0x23A);
                var_f4 = (f32) temp_t3;
                if (temp_t3 < 0) {
                    var_f4 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x84)) = var_f4;
                temp_t7 = 7 - (random_u32() & 0xF);
                var_f10 = (f32) temp_t7;
                if (temp_t7 < 0) {
                    var_f10 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x88)) = var_f10;
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x98)) = 0;
            } else {
                temp_t3_2 = (random_u32() & 0x3F) + (var_s3 - 0x1E);
                var_f18_2 = (f32) temp_t3_2;
                if (temp_t3_2 < 0) {
                    var_f18_2 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x80)) = var_f18_2;
                temp_t8 = 0x61 - (random_u32() & 0xF);
                var_f8_2 = (f32) temp_t8;
                if (temp_t8 < 0) {
                    var_f8_2 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x84)) = var_f8_2;
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x88)) = 0.0f;
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x98)) = 1;
            }
            if (arg3 >= 4) {
                temp_t6 = (random_u32() % (u32) (arg3 >> 2)) + arg3;
                var_f4_2 = (f32) temp_t6;
                if (temp_t6 < 0) {
                    var_f4_2 += 4294967296.0f;
                }
                (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x8C)) = var_f4_2;
            } else {
                (*(f32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x8C)) = (f32) arg3;
            }
            temp_t2 = random_u32() & 0xF;
            var_f16 = (f32) temp_t2;
            if (temp_t2 < 0) {
                var_f16 += 4294967296.0f;
            }
            (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x90)) = var_f16;
            (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0)) + 0x94)) = 0;
            var_s3 += 0x5A;
            temp_t0 = (*(s32 *)((char *)(temp_v0) + 0xA4)) + var_s0;
            var_s0 += 0xA0;
            (*(s16 *)((char *)(temp_t0) + 0x96)) = (s16) (arg4 - (random_u32() & arg5));
        } while (var_s3 != 0x438);
    }
}

void func_15187978(void *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_a0;
    s16 var_v1;
    s32 var_a1;
    void *temp_v0_3;
    void *var_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0xA8));
    if (temp_v0 < 0) {
        func_10004074((*(s32 *)((char *)(arg0) + 0xA4)), arg0);
        func_1516972C(arg0);
        return;
    }
    (*(s16 *)((char *)(arg0) + 0xA8)) = (s16) (temp_v0 + D_800BE9E4);
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0xA8));
    if ((*(s32 *)((char *)(arg0) + 0xAA)) < temp_v0_2) {
        (*(s32 *)((char *)(arg0) + 0xA8)) = -0xA;
        return;
    }
    var_a1 = 0;
    if (temp_v0_2 >= 0) {
        do {
            temp_v0_3 = (*(s32 *)((char *)(arg0) + 0xA4)) + var_a1;
            temp_v1 = (*(s32 *)((char *)(temp_v0_3) + 0x94));
            if (temp_v1 < (*(s32 *)((char *)(temp_v0_3) + 0x96))) {
                (*(s16 *)((char *)(temp_v0_3) + 0x94)) = (s16) (temp_v1 + D_800BE9E4);
                var_v0 = (*(s32 *)((char *)(arg0) + 0xA4)) + var_a1;
                var_a0 = (*(s32 *)((char *)(var_v0) + 0x96));
                var_v1 = (*(s32 *)((char *)(var_v0) + 0x94));
                if (var_a0 < var_v1) {
                    (*(s32 *)((char *)(var_v0) + 0x94)) = var_a0;
                    var_v0 = (*(s32 *)((char *)(arg0) + 0xA4)) + var_a1;
                    var_v1 = (*(s32 *)((char *)(var_v0) + 0x94));
                    var_a0 = (*(s32 *)((char *)(var_v0) + 0x96));
                }
                temp_f0 = (*(s32 *)((char *)(var_v0) + 0x8C));
                (*(f32 *)((char *)(var_v0) + 0x90)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x90)) + (temp_f0 - (((temp_f0 / 3.0f) * (f32) var_v1) / (f32) var_a0)));
            }
            var_a1 += 0xA0;
        } while (var_a1 != 0x780);
    }
}

void *func_15187A98(void *arg0, void *arg1, void * arg2) {
    f32 spE0;
    f32 spCC;
    f32 spB8;
    f32 sp78;
    s16 temp_a1;
    s32 var_s2;
    s32 var_s3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    var_s0 = arg0;
    if ((*(s32 *)((char *)(arg1) + 0xA8)) >= 0) {
        func_150A7DA0(&spB8, (*(s32 *)((char *)(arg1) + 0x90)), (*(s32 *)((char *)(arg1) + 0x94)), (*(s32 *)((char *)(arg1) + 0x98)));
        guMtxF2L2(&spB8, (char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
        var_s2 = 0;
        var_s3 = 0;
        do {
            (*(s32 *)((char *)(var_s0) + 0x0)) = 0xDA380003;
            temp_s0 = (char *)(var_s0) + 8;
            (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
            func_150A7DA0(&spB8, (*(s32 *)((char *)(((*(s32 *)((char *)(arg1) + 0xA4)) + var_s3)) + 0x90)), 0, 0);
            spB8 *= (*(s32 *)((char *)(arg1) + 0xA0));
            spCC *= (*(s32 *)((char *)(arg1) + 0x9C));
            spE0 *= (*(s32 *)((char *)(arg1) + 0x9C));
            temp_v0 = (*(s32 *)((char *)(arg1) + 0xA4)) + var_s3;
            if ((*(s32 *)((char *)(temp_v0) + 0x98)) == 0) {
                func_150A8050(&sp78, (*(f32 *)((char *)(temp_v0) + 0x80)), (*(f32 *)((char *)(temp_v0) + 0x84)), (*(f32 *)((char *)(temp_v0) + 0x88)));
            } else {
                func_15187D6C(&sp78, (*(s32 *)((char *)(temp_v0) + 0x80)), (*(s32 *)((char *)(temp_v0) + 0x84)), (*(s32 *)((char *)(temp_v0) + 0x88)));
            }
            func_150A7A48(&spB8, &sp78, &spB8);
            guMtxF2L(&spB8, (*(s32 *)((char *)(arg1) + 0xA4)) + (var_s2 * 0xA0) + (D_800BE9C0 << 6));
            temp_v0_2 = (*(s32 *)((char *)(arg1) + 0xA4)) + var_s3;
            temp_a1 = (*(s32 *)((char *)(temp_v0_2) + 0x96));
            temp_s0_2 = (char *)(temp_s0) + 8;
            (*(s32 *)((char *)(temp_s0) + 0x4)) = (s32) ((((s32) ((temp_a1 - (*(s32 *)((char *)(temp_v0_2) + 0x94))) * 0xFF) / temp_a1) & 0xFF) | ~0xFF);
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xFA000100;
            (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xDA380001;
            (*(s32 *)((char *)(temp_s0_2) + 0x4)) = (s32) ((*(s32 *)((char *)(arg1) + 0xA4)) + (var_s2 * 0xA0) + (D_800BE9C0 << 6));
            temp_s0_3 = (char *)(temp_s0_2) + 8;
            (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0x01004008;
            (*(s32 *)((char *)(temp_s0_3) + 0x4)) = &D_8008D538;
            temp_s0_4 = (char *)(temp_s0_3) + 8;
            (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0x05000204;
            (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0;
            temp_s0_5 = (char *)(temp_s0_4) + 8;
            (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0x05000206;
            (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0;
            temp_s0_6 = (char *)(temp_s0_5) + 8;
            (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0x05000406;
            (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0;
            var_s0 = (char *)(temp_s0_6) + 8;
            var_s2 += 1;
            var_s3 += 0xA0;
        } while (var_s2 != 0xC);
    }
    return var_s0;
}

void func_15187D6C(f32 *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 sp44;
    f32 sp3C;
    f32 sp34;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;

    temp_f12 = arg1 * D_8008D578;
    temp_f14 = arg2 * D_8008D578;
    arg1 = temp_f12;
    arg2 = temp_f14;
    arg3 *= D_8008D578;
    sp44 = sinf(temp_f12);
    temp_f20 = cosf(arg1);
    temp_f22 = sinf(arg2);
    sp34 = cosf(arg2);
    sp3C = sinf(arg3);
    sp30 = cosf(arg3);
    func_151EFE00(arg0);
    temp_f0 = sp44 * temp_f22;
    (*(s32 *)((char *)(arg0) + 0x18)) = sp44;
    (*(s32 *)((char *)(arg0) + 0x0)) = (sp34 * sp30) - (temp_f0 * sp3C);
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((sp34 * sp3C) + (temp_f0 * sp30));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (-temp_f22 * temp_f20);
    temp_f0_2 = sp44 * sp34;
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (-temp_f20 * sp3C);
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (temp_f20 * sp30);
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((temp_f22 * sp30) + (temp_f0_2 * sp3C));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (temp_f20 * sp34);
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((temp_f22 * sp3C) - (temp_f0_2 * sp30));
}
