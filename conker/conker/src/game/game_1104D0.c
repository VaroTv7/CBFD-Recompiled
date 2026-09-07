/**
 * Auto-decompiled from asm/1104D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 nanf();                             /* extern */
void * func_1000E7A0();                            /* extern */
s32 func_15046C80();           /* extern */
void * func_1505D1C4(); /* extern */
s32 func_150AD9A0();                   /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                     /* extern */
void * func_15103254(); /* extern */
void * func_15143874();            /* extern */
s32 func_15145128();        /* extern */
void *func_15167A68();          /* extern */
s32 func_151C229C(); /* extern */
void * func_151C3B0C();       /* extern */
extern f32 D_800A1030;
extern f32 D_800A1034;
extern f32 D_800A1038;
extern f32 D_800A103C;
extern f32 D_800A1040;
extern f32 D_800A1044;
extern f32 D_800A1048;
extern f32 D_800A104C;
extern f32 D_800A1050;
extern f32 D_800A1054;
extern s32 D_800DCE50;
void * func_150E3020(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, s32 arg8, f32 arg9, f32 arg10, f32 arg11, s32 arg12, s16 arg13);
void func_150E3514();

void *func_150E3020(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, s32 arg8, f32 arg9, f32 arg10, f32 arg11, s32 arg12, s16 arg13) {
    void * *var_v1;
    f32 temp_f0;
    s8 var_a1;
    void *temp_v0;

    temp_v0 = func_15167A68(0x27, 0, 0x80, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x4C)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x50)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x6C)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x70)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x71)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x74)) = 0;
    (*(f32 *)((char *)(temp_v0) + 0x54)) = (f32) D_800A1030;
    var_v1 = D_800D99D0;
    var_a1 = 0;
    (*(s32 *)((char *)(temp_v0) + 0x7C)) = arg13;
    (*(s32 *)((char *)(temp_v0) + 0x78)) = arg12;
    (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) arg0;
    temp_f0 = (f32) arg1;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = temp_f0;
    (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) arg2;
    (*(f32 *)((char *)(temp_v0) + 0x1C)) = (f32) arg3;
    (*(f32 *)((char *)(temp_v0) + 0x20)) = (f32) arg4;
    (*(f32 *)((char *)(temp_v0) + 0x24)) = (f32) arg5;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = arg9;
    (*(s32 *)((char *)(temp_v0) + 0x2C)) = arg10;
    (*(s32 *)((char *)(temp_v0) + 0x30)) = arg11;
    (*(s32 *)((char *)(temp_v0) + 0x38)) = temp_f0;
    (*(s32 *)((char *)(temp_v0) + 0x34)) = arg7;
    (*(s32 *)((char *)(temp_v0) + 0x3C)) = arg8;
    (*(s32 *)((char *)(temp_v0) + 0x44)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x4A)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x40)) = arg6;
loop_3:
    if ((*(s32 *)((char *)(var_v1) + 0x0)) == NULL) {
        (*(s32 *)((char *)(var_v1) + 0x0)) = temp_v0;
        (*(s32 *)((char *)(temp_v0) + 0x48)) = var_a1;
    } else if ((*(s32 *)((char *)(var_v1) + 0x4)) == NULL) {
        (*(s32 *)((char *)(var_v1) + 0x4)) = temp_v0;
        (*(s8 *)((char *)(temp_v0) + 0x48)) = (s8) (var_a1 + 1);
    } else if ((*(s32 *)((char *)(var_v1) + 0x8)) == NULL) {
        (*(s32 *)((char *)(var_v1) + 0x8)) = temp_v0;
        (*(s8 *)((char *)(temp_v0) + 0x48)) = (s8) (var_a1 + 2);
    } else if ((*(s32 *)((char *)(var_v1) + 0xC)) == NULL) {
        (*(s32 *)((char *)(var_v1) + 0xC)) = temp_v0;
        (*(s8 *)((char *)(temp_v0) + 0x48)) = (s8) (var_a1 + 3);
    } else {
        var_a1 += 4;
        var_v1 = (char *)(var_v1) + 0x10;
        if (var_a1 == 8) {
            (*(s32 *)((char *)(temp_v0) + 0x48)) = 0;
        } else {
            goto loop_3;
        }
    }
    return temp_v0;
}

s32 func_150E3208(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *temp_v0;

    temp_v0 = func_150E3020(arg0, arg1, arg2, arg3, arg4, arg5, arg6, (f32) func_150AD9A0(arg0 - arg3, arg1 - arg4, arg2 - arg5) / (f32) arg7, 0, 0.0f, 0.0f, 0.0f, 0, -0x63);
    if (temp_v0 != NULL) {
        return (*(s32 *)((char *)(temp_v0) + 0x48)) + 1;
    }
    return 0;
}

s32 func_150E32D0(s32 arg3, s32 arg4, s32 arg5) {
    void *temp_v0;

    temp_v0 = func_150E3020(0, 0, 0, arg4, arg5, arg3, 0, 0.0f, 0, 0.0f, nanf(""), 0, 0, 0);
    if (temp_v0 != NULL) {
        return (*(s32 *)((char *)(temp_v0) + 0x48)) + 1;
    }
    return 0;
}

void func_150E3340(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;

    temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
    temp_a1 = (*(s32 *)((char *)(arg1) + 0x4));
    temp_a2 = (*(s32 *)((char *)(arg1) + 0x8));
    func_150E3020(temp_a0, temp_a1, temp_a2, temp_a0, temp_a1, temp_a2, 0x1A, 10.0f, 0, (*(s16 *)((char *)(arg0) + 0x0)), (*(s16 *)((char *)(arg0) + 0x4)), (*(s16 *)((char *)(arg0) + 0x8)), arg2, (s16) (s32) arg3);
}

s32 func_150E33CC(s32 arg0, void * arg1, s32 *arg2, void * arg3) {
    s32 temp_v0;

    temp_v0 = *arg2;
    if (temp_v0 == 0) {
        return 1;
    }
    func_1000E7A0(2, temp_v0);
    return 0;
}

s32 func_150E3414(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 arg8) {
    void *sp44;
    void *temp_v0;

    temp_v0 = func_150E3020(arg3, arg4, arg5, 0, 0, 0, arg7, arg8, arg6, (f32) arg0, (f32) arg1, (f32) arg2, 0, -0x63);
    if (temp_v0 != NULL) {
        sp44 = temp_v0;
        (*(s16 *)((char *)(sp44) + 0x4A)) = func_1000FA64(0x2D0, (s16) arg0, (s16) arg1, (s16) arg2, 0x5DC0, 0x1770, 0x3E8, func_150E33CC, 0, 0, 0, 0);
        return (*(s32 *)((char *)(sp44) + 0x48)) + 1;
    }
    return 0;
}

void func_150E3514(void *arg0) {
    s32 *temp_v1;
    u16 temp_a0;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x48));
    if ((s32) temp_v0 >= 0) {
        temp_v1 = (temp_v0 * 4) + D_800D99D0;
        if ((char *)(arg0) == (char *)(*temp_v1)) {
            *temp_v1 = 0;
        }
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x4A));
    if (temp_a0 != 0) {
        func_100111C8(temp_a0);
        (*(s32 *)((char *)(arg0) + 0x4A)) = 0U;
        func_10010F88(0x2D7, 0x5DC0, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x28)), (s32) (*(s32 *)((char *)(arg0) + 0x2C)), (s32) (*(s32 *)((char *)(arg0) + 0x30)), 0x3E8, 0x1770);
    }
    func_1516972C(arg0);
}

void func_150E35DC(s32 arg0) {
    void * *var_s2;
    s32 temp_s0;
    void **var_v0;
    void *var_a0;

    temp_s0 = arg0 - 1;
    var_s2 = &D_800DCE50;
    do {
        var_a0 = (*(s32 *)((char *)(var_s2) + 0x9C));
        D_800DD190 += 1;
        if (var_a0 != NULL) {
            var_v0 = (D_800DD190 * 4) + D_800DD198;
            do {
                *var_v0 = (*(s32 *)((char *)(var_a0) + 0x8));
                if ((temp_s0 == -1) || (temp_s0 == (*(s32 *)((char *)(var_a0) + 0x48)))) {
                    func_150E3514(var_a0);
                    var_v0 = (D_800DD190 * 4) + D_800DD198;
                }
                var_a0 = *var_v0;
            } while (var_a0 != NULL);
        }
        var_s2 = (char *)(var_s2) + 0x1A0;
        D_800DD190 -= 1;
    } while ((char *)(var_s2) != (char *)(&D_800DD190));
}

void func_150E36BC(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_a0;
    void *temp_v0;

    temp_a0 = arg0 - 1;
    if ((temp_a0 >= 0) && (temp_a0 < 8)) {
        temp_v0 = (*(s32 *)((char *)(D_800D99D0) + (temp_a0 * 4)));
        if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0x27)) {
            *arg1 = (s32) (*(s32 *)((char *)(temp_v0) + 0x10));
            *arg2 = (s32) (*(s32 *)((char *)(temp_v0) + 0x14));
            *arg3 = (s32) (*(s32 *)((char *)(temp_v0) + 0x18));
        }
    }
}

void func_150E3738(void *arg0) {
    f32 sp1C8;
    f32 sp1C4;
    f32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp190;
    f32 sp18C;
    f32 sp188;
    f32 sp180;
    f32 sp17C;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp154;
    f32 sp150;
    void * sp14C;
    s32 sp140;
    s32 sp13C;
    s8 sp13A;
    s8 sp139;
    s8 sp138;
    s16 sp136;
    void * sp124;
    void * sp118;
    void * sp10C;
    void * sp100;
    void * spF4;
    void * spE8;
    f32 spE4;
    s32 spE0;
    void *spC4;
    void *spC0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s32 temp_t6;
    s32 temp_v1;
    s32 var_fp;
    s32 var_s0;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s2;
    u32 temp_s2_2;
    u8 temp_v0_4;
    void *temp_a0;
    void *temp_s7;
    void *temp_v0_2;
    void *temp_v0_3;

    f32 sp1CC;
    f32 sp1D0;
    f32 sp184;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    var_fp = 0;
    if (temp_v0 != -0x63) {
        (*(s16 *)((char *)(arg0) + 0x7C)) = (s16) (temp_v0 - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x7C)) < 0) {
            func_150E3514(arg0);
        }
    }
    temp_a0 = (char *)(arg0) + 0x10;
    (*(s32 *)((char *)&(sp1C8) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
    (*(f32 *)((char *)&(sp1C8) + 0x4)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x4));
    (*(f32 *)((char *)&(sp1C8) + 0x8)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x8));
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3C));
    if (temp_v0_2 != NULL) {
        if ((*(s32 *)((char *)(temp_v0_2) + 0x0)) == 0) {
            func_150E3514(arg0);
            return;
        }
        (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x1C));
        goto block_9;
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x78));
    if (temp_v0_3 != NULL) {
        (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0));
        (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x4));
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x8));
    }
block_9:
    sp1B0 = (*(s32 *)((char *)(arg0) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x10));
    sp1B4 = (*(s32 *)((char *)(arg0) + 0x20)) - (*(s32 *)((char *)(arg0) + 0x14));
    sp1B8 = (*(s32 *)((char *)(arg0) + 0x24)) - (*(s32 *)((char *)(arg0) + 0x18));
    temp_f0 = sqrtf((sp1B0 * sp1B0) + (sp1B4 * sp1B4) + (sp1B8 * sp1B8));
    temp_f12 = (*(f32 *)((char *)(arg0) + 0x34)) * (f32) D_800BE9E4;
    if ((*(s32 *)((char *)(arg0) + 0x78)) == NULL) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x44));
        temp_t6 = temp_v1 - D_800BE9E4;
        if (temp_v1 == 0) {
            if (temp_f0 <= temp_f12) {
                if ((*(s32 *)((char *)(arg0) + 0x3C)) != NULL) {
                    (*(s32 *)((char *)(arg0) + 0x44)) = 0x1E;
                    (*(s32 *)((char *)(arg0) + 0x3C)) = NULL;
                    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x1C)) + (sp1B0 * 500.0f));
                    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + (sp1B4 * 500.0f));
                    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + (sp1B8 * 500.0f));
                    goto block_17;
                }
                func_150E3514((*(void **)&temp_f12));
                return;
            }
            goto block_17;
        }
        (*(s32 *)((char *)(arg0) + 0x44)) = temp_t6;
        if (temp_t6 <= 0) {
            func_150E3514((*(void **)&temp_f12));
            return;
        }
        goto block_17;
    }
block_17:
    if (temp_f0 != 0.0f) {
        temp_f2 = temp_f12 / temp_f0;
        temp_f14 = temp_f2 * sp1B0;
        temp_f16 = temp_f2 * sp1B4;
        temp_f18 = temp_f2 * sp1B8;
        sp1BC = sp1C8 + temp_f14;
        sp1C0 = sp1CC + temp_f16;
        sp1C4 = sp1D0 + temp_f18;
        sp1A4 = temp_f14;
        sp1A8 = temp_f16;
        sp1AC = temp_f18;
    } else {
        (*(s32 *)((char *)&(sp1BC) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x1C));
        (*(f32 *)((char *)&(sp1BC) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x20));
        (*(f32 *)((char *)&(sp1BC) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x24));
        (*(s32 *)((char *)&(sp1A4) + 0x0)) = (*(s32 *)((char *)&(sp1B0) + 0x0));
        (*(s32 *)((char *)&(sp1A4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1B0) + 0x4));
        (*(s32 *)((char *)&(sp1A4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1B0) + 0x8));
    }
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)&(sp1BC) + 0x0));
    (*(f32 *)((char *)(temp_a0) + 0x4)) = (f32) (*(f32 *)((char *)&(sp1BC) + 0x4));
    (*(f32 *)((char *)(temp_a0) + 0x8)) = (f32) (*(f32 *)((char *)&(sp1BC) + 0x8));
    temp_s7 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) + ((D_800A1034 + (random_float(temp_f12, temp_a0) * D_800A1038)) * D_800A103C * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x4C)) > 1.0f) {
        spC4 = (char *)(arg0) + 0x58;
        spC0 = (char *)(arg0) + 0x54;
        do {
            (*(s32 *)((char *)&(sp16C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x28));
            (*(s32 *)((char *)&(sp16C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s7) + 0x4));
            (*(s32 *)((char *)&(sp16C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s7) + 0x8));
            temp_f20 = random_float();
            temp_s0 = random_u32();
            func_15143874((s16) (temp_s0 & 0xFF), random_float() * 129.0f, &sp150, &sp154);
            sp188 = (temp_f20 * sp1A4) + sp1C8 + sp150;
            sp18C = (temp_f20 * sp1A8) + sp1CC + 200.0f;
            sp190 = (temp_f20 * sp1AC) + sp1D0 + sp154;
            (*(s32 *)((char *)&(sp17C) + 0x0)) = (*(s32 *)((char *)&(sp188) + 0x0));
            (*(s32 *)((char *)&(sp17C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp188) + 0x4));
            (*(s32 *)((char *)&(sp17C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp188) + 0x8));
            if (func_15046C80(&sp188, 0, sp18C - 1000.0f, spC0) != 0) {
                sp180 = (*(s32 *)((char *)(arg0) + 0x54));
            }
            sp160 = sp17C - sp16C;
            sp164 = sp180 - sp170;
            sp168 = sp184 - sp174;
            if (func_15145128(&sp160, &sp160, &sp15C, &sp14C) != 0) {
                temp_f2_2 = 190.0f * (random_float() * D_800BE9A4);
                sp16C += sp160 * temp_f2_2;
                sp170 += sp164 * temp_f2_2;
                sp174 += sp168 * temp_f2_2;
                sp15C -= temp_f2_2;
            }
            spE0 = 0;
            spE4 = sp15C;
            (*(f32 *)((char *)&(spE8) + 0x0)) = (f32) (*(f32 *)((char *)&(sp17C) + 0x0));
            (*(s32 *)((char *)&(spE8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x4));
            (*(s32 *)((char *)&(spE8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x8));
            (*(f32 *)((char *)&(spF4) + 0x0)) = (f32) (*(f32 *)((char *)&(sp17C) + 0x0));
            (*(s32 *)((char *)&(spF4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x4));
            (*(s32 *)((char *)&(spF4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x8));
            (*(f32 *)((char *)&(sp100) + 0x0)) = (f32) (*(f32 *)((char *)&(sp17C) + 0x0));
            (*(s32 *)((char *)&(sp100) + 0x4)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x4));
            (*(s32 *)((char *)&(sp100) + 0x8)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x8));
            (*(f32 *)((char *)&(sp10C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp16C) + 0x0));
            (*(s32 *)((char *)&(sp10C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x4));
            (*(s32 *)((char *)&(sp10C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x8));
            (*(f32 *)((char *)&(sp118) + 0x0)) = (f32) (*(f32 *)((char *)&(sp160) + 0x0));
            (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)&(sp160) + 0x4));
            (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)&(sp160) + 0x8));
            (*(s32 *)((char *)&(sp124) + 0x0)) = (s32) (*(s32 *)((char *)(spC4) + 0x0));
            (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(spC4) + 0x4));
            (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(spC4) + 0x8));
            (*(s32 *)((char *)&(sp124) + 0xC)) = (s32) (*(s32 *)((char *)(spC4) + 0xC));
            (*(u16 *)((char *)&(sp124) + 0x10)) = (u16) (*(u16 *)((char *)(spC4) + 0x10));
            sp136 = 0;
            sp138 = 0;
            sp139 = 1;
            sp13A = 0;
            temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x71));
            if ((temp_v0_4 == 2) || (temp_v0_4 == 3)) {
                sp13C = (*(s32 *)((char *)(arg0) + 0x74));
            } else {
                sp13C = 0;
            }
            sp140 = (*(s32 *)((char *)(arg0) + 0x6C));
            temp_f22 = random_float();
            temp_f20_2 = random_float();
            temp_s2 = random_u32();
            if ((var_fp != 0) || (var_s0 = 1, ((*(s32 *)((char *)(arg0) + 0x78)) != NULL))) {
                var_s0 = 2;
            }
            if (func_151C229C(&sp16C, 0, 0, 0, 0, &spE0, 190.0f, D_800A1040, (temp_f22 * 50.0f) + 10.0f, (temp_f20_2 * 191.0f) + 160.0f, 80.0f, (temp_s2 % 176U) + 0x50, 0, 0, 0, 0, 0, 0, 1, var_s0, (*(s32 *)((char *)(arg0) + 0x40)), 0.0f, 0xFF, -1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1))) != 0) {
                var_fp = 1;
            }
            (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) - 1.0f);
        } while ((*(s32 *)((char *)(arg0) + 0x4C)) > 1.0f);
    }
    if ((*(s32 *)((char *)(arg0) + 0x78)) == NULL) {
        (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((56.0f + (random_float() * 235.0f)) * D_800A1044 * D_800BE9A4));
        if ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f) {
            temp_f22_2 = D_800A1048;
            temp_f20_3 = D_800A104C;
            do {
                temp_s2_2 = random_u32();
                temp_s0_2 = random_u32();
                func_15103254((s16) ((temp_s2_2 & 3) + 6), ((temp_s0_2 % 156U) + 0x64) & 0xFF, (random_float() * temp_f20_3) + temp_f22_2, (char *)(arg0) + 0x28, 0xFF, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) - 1.0f);
            } while ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f);
        }
    }
}

void func_150E4010(void *arg0) {
    void *sp2C;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x1B4)) != 0) {
        sp2C = temp_v0;
        func_1505D1C4((*(u32 *)((char *)(temp_v0) + 0x30)), (*(u32 *)((char *)(temp_v0) + 0x34)), (*(u32 *)((char *)(temp_v0) + 0x38)), (*(u32 *)((char *)(temp_v0) + 0xA4)) | 0x60000, -1, (((u32) (func_150484A0((*(u32 *)((char *)(temp_v0) + 0x60)), (*(u32 *)((char *)(temp_v0) + 0x64))) * D_800A1050) & 0xFFFF) - 0x4000) | 1, 0, 0);
    }
}

void func_150E411C(void) {
    func_151C3B0C(0x3EB43959, 0x3F3374BD, 0x3F10E561, D_800A1054, 0xFF, 0xFF, 0xFF);
}

s32 func_150E4174(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    return 1;
}
