/**
 * Auto-decompiled from asm/FC5F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15042D94();                      /* extern */
void func_1504715C();                       /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15143794();              /* extern */
void * func_15143874();               /* extern */
s32 func_1515548C(); /* extern */
void * func_1515572C();                          /* extern */
void * func_1515C244();       /* extern */
void * func_151CF898();                       /* extern */
void * func_151D9014(); /* extern */
void * memcpy();                       /* extern */
extern s32 D_80088890;
extern s32 D_80088894;
extern s32 D_80088898;
extern s32 D_8008889C;
extern s32 D_800888A0;
extern s32 D_800888B0;
extern s32 D_8008FCD0;
extern f32 D_800A0840;
extern f32 D_800A0844;
extern f32 D_800A0848;
extern f32 D_800A084C;
extern f32 D_800A0850;
extern f32 D_800A0854;
extern f32 D_800A0860;
extern f32 D_800A0864;
extern f32 D_800A0868;
extern f32 D_800A086C;
extern f32 D_800A0870;
extern f32 D_800A0874;
extern f32 D_800A0878;
extern f32 D_800A087C;
extern s32 D_800A0880;
extern f32 D_800A0888;
u8 * func_150CFD5C();
s8 func_150CFD84();
void func_150CFE3C();
void * * func_150CFF10();

void func_150CF140(void *arg0) {
    f32 sp104;
    f32 sp100;
    void * spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spBC;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    s16 temp_s0_2;
    u32 temp_s0_3;
    u32 temp_s0_4;
    u32 temp_s1;
    void *temp_s0;
    void *temp_s2;

    f32 sp108;
    f32 sp10C;
    temp_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s2 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s2) + 0x4)) != (*(s32 *)((char *)(temp_s0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if ((*(s32 *)((char *)(temp_s0) + 0x1D4)) != 0) {
        (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x8)) + ((D_800A0840 + (random_float() * D_800A0844)) * D_800BE9A4));
        func_1515C244(temp_s0, &sp104, &spD8, &spD4);
        sp100 = (spD8 + spD4) * 0.5f;
        func_1504715C(&spDC, temp_s0);
        if ((*(s32 *)((char *)(temp_s2) + 0x8)) > 1.0f) {
            temp_f30 = D_800A0848;
            temp_f28 = D_800A084C;
            temp_f26 = D_800A0850;
            temp_f24 = D_800A0854;
            do {
                temp_s0_2 = random_u32() & 0xFF;
                func_15143794(temp_s0_2, (s16) ((random_u32() % 76U) - 0x40), sp100, &spC8);
                spC8 += sp104;
                spCC += sp108;
                spD0 += sp10C;
                temp_s0_3 = random_u32();
                func_15143794(temp_s0_2, (s16) ((temp_s0_3 % 54U) - 0x38), (random_float() * temp_f24) + temp_f26, &spBC);
                temp_f20 = random_float();
                temp_s1 = random_u32();
                temp_s0_4 = random_u32();
                func_151D9014(&spC8, &spBC, 5, (temp_f20 * temp_f28) + temp_f30, (temp_s1 % 21U) + 0x1E, (temp_s0_4 % 156U) + 0x64, (random_float() * 50.0f) + 48.0f, 1, 1.0f, 1.0f, 0, &spDC, 1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s2) + 0x8)) > 1.0f);
        }
    }
}

void func_150CF484(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x28))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
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
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_150CF530(s32 arg0) {
    func_151CF898(&gObjects, gObjects[0].y_position + 300.0f, 0xC61C4000);
}

void func_150CF578(s32 arg0) {
    s32 temp_v1;

    temp_v1 = D_800BE9E4 * 0x1C;
    D_80088890 += D_800BE9E4 * 0x1A;
    D_80088894 -= temp_v1;
    D_80088898 -= temp_v1;
}

void *func_150CF5E8(void *arg0) {
    void *temp_a0;

    (*(s32 *)((char *)(arg0) + 0x0)) = (s32) (((((s32) D_80088890 >> 7) & 0xFFF) << 0xC) | 0xF2000000 | (((s32) D_80088894 >> 7) & 0xFFF));
    (*(s32 *)((char *)(arg0) + 0x4)) = 0x47E47E;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (((((s32) D_80088898 >> 7) & 0xFFF) << 0xC) | 0xF2000000 | (((s32) D_8008889C >> 7) & 0xFFF));
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0x0147E47E;
    return (char *)(temp_a0) + 8;
}

void func_150CF680( s32 arg0, s32 arg1, s32 arg2) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s8 sp84;
    s8 sp81;
    s8 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s8 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    u8 sp30;
    s32 temp_v0;

    sp54 = 0x31;
    sp5A = 8;
    sp50 = 0xC1;
    sp56 = 1;
    sp61 = 0xFF;
    sp52 = arg0;
    sp58 = 0xFF;
    sp5B = 0xFF;
    sp63 = 0xFF;
    sp68 = 0x200004;
    sp5C = 0xFF;
    sp5D = 0xFF;
    sp5E = 0xFF;
    sp5F = 0xFF;
    sp60 = 0xFF;
    sp62 = 0xFF;
    sp30 = 0;
    sp34 = 0.0f;
    sp40 = -300.0f;
    sp38 = -300.0f;
    sp3C = 0.0f;
    sp4C = 7.5f;
    sp48 = 7.5f;
    sp64 = 0;
    sp6C = 0x9F0601;
    sp80 = 0;
    sp81 = 0xA;
    sp70 = 0x17;
    sp74 = 0x44;
    sp78 = 0x80;
    sp7C = 0x20;
    sp8C = 1.0f;
    sp88 = 1.0f;
    sp94 = 0.0f;
    sp90 = 0.0f;
    sp44 = 72.0f;
    sp84 = (s8) D_80082FA0;
    temp_v0 = func_1515548C(0x40F00000, 0x3F800000, &sp40, 0xC, 0, 0, 0x10, (s32) arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, &sp30, 0x10U);
    }
}

s32 func_150CF800(void *arg0) {
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s8 spF0;
    s8 spED;
    s8 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s8 spCF;
    s8 spCE;
    s8 spCD;
    s8 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s8 spC7;
    s8 spC6;
    s16 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s8 spBC;
    f32 spB8;
    f32 spB4;
    void * spAC;
    f32 spA8;
    f32 spA4;
    void * spA0;
    u8 sp9C;
    void *sp84;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s8 temp_t0;
    s8 temp_v1;
    s8 var_s2;
    u32 temp_s0;
    void *var_v0;

    if ((*(s32 *)((char *)(arg0) + 0x70)) & 1) {
        var_v0 = (char *)(arg0) + 0x70;
        (*(f32 *)((char *)(var_v0) + 0x4)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x4)) + (D_800A0860 * D_800BE9A4));
        var_f0 = (*(s32 *)((char *)(var_v0) + 0x4));
        if (var_f0 >= 1.0f) {
            (*(s32 *)((char *)(var_v0) + 0x4)) = 1.0f;
            (*(u8 *)((char *)(arg0) + 0x70)) = (u8) ((*(u8 *)((char *)(arg0) + 0x70)) & 0xFFFE);
            sp84 = var_v0;
            temp_v1 = (random_u32() & 3) + 2;
            temp_t0 = temp_v1;
            spA8 = (*(s32 *)((char *)(arg0) + 0x14)) + 15.0f;
            var_s2 = temp_t0;
            (*(f32 *)((char *)&(spAC) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)&(spAC) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
            spCD = 0xFF;
            spC2 = 0xC;
            spC4 = 0x15;
            spCE = 0xFF;
            spC7 = 0xFF;
            spC8 = 0xFF;
            spC9 = 0xFF;
            spCB = 0xFF;
            spCC = 0xFF;
            spCF = 0xFF;
            spC6 = 0;
            spD0 = 0;
            spD4 = 0x200004;
            spD8 = 0x9F0601;
            spEC = 0;
            spED = 0xA;
            spDC = 0x17;
            spE0 = 0x44;
            spE4 = 0x80;
            spE8 = 0x20;
            spF4 = 1.0f;
            spF8 = 1.0f;
            sp100 = 0.0f;
            spFC = 0.0f;
            spF0 = (s8) D_80082FA0;
            if (temp_v1 > 0) {
                temp_f30 = D_800A0864;
                temp_f28 = D_800A0868;
                temp_f26 = D_800A086C;
                temp_f24 = D_800A0870;
                do {
                    spCA = (random_u32() % 101U) + 0x9B;
                    spBC = (*(s32 (**)())((char *)&(D_8008FCD0) + 0x8))();
                    temp_s0 = random_u32();
                    func_15143874((s16) ((temp_s0 % 65U) - 0xA0), (random_float() * 2.0f) + 2.5f, &sp9C, &spA0);
                    spA4 = (random_float() * temp_f24) + temp_f26;
                    temp_f2 = (random_float() * temp_f28) + temp_f30;
                    spB4 = temp_f2;
                    spB8 = temp_f2;
                    spBE = (random_u32() % 26U) + 0x1E;
                    var_s1 = 0;
                    if (random_u32() & 1) {
                        var_s1 = 2;
                    }
                    if (random_u32() & 1) {
                        var_s0 = 4;
                    } else {
                        var_s0 = 0;
                    }
                    spC0 = var_s0 | 1 | var_s1 | 0x38;
                    temp_v0 = func_1515548C(&spAC, 0xD, NULL, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    if (temp_v0 != 0) {
                        memcpy(temp_v0 + 0x70, &sp9C, 0x10U);
                    }
                    var_s2 -= 1;
                } while (var_s2 > 0);
            }
            var_v0 = sp84;
            var_f0 = (*(s32 *)((char *)(var_v0) + 0x4));
        }
        (*(f32 *)((char *)(arg0) + 0x10)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x8)) + (var_f0 * (*(f32 *)((char *)(var_v0) + 0xC))));
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((sinf((*(f32 *)((char *)(var_v0) + 0x4)) * D_800A0874) * -17.5f) + 72.0f);
    }
    return 1;
}

void func_150CFBEC(void *arg0, f32 *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x70;
    if ((arg2 & 0xFF) == 0x52) {
        (*(u8 *)((char *)(arg0) + 0x70)) = (u8) ((*(u8 *)((char *)(arg0) + 0x70)) | 1);
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0.0f;
        (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
        (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) (*arg1 - (*(f32 *)((char *)(arg0) + 0x10)));
    }
}

void func_150CFC38(f32 arg0) {
    f32 sp1C;

    sp1C = arg0;
    func_1515572C(&sp1C, 0x52);
}

s32 func_150CFC60(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x74));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x78));
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + ((*(f32 *)((char *)(arg0) + 0x70)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + ((temp_f2 * D_800BE9A4) + (0.5f * temp_f12 * D_800BE9A4 * D_800BE9A4)));
    temp_v0 = (char *)(arg0) + 0x70;
    (*(f32 *)((char *)(arg0) + 0x74)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x7C)) < (*(s32 *)((char *)(arg0) + 0x14))) {
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (*(f32 *)((char *)(temp_v0) + 0xC));
        temp_f0 = fabsf((*(s32 *)((char *)(temp_v0) + 0x4)));
        (*(f32 *)((char *)(arg0) + 0x70)) = (f32) ((*(f32 *)((char *)(arg0) + 0x70)) * D_800A0878);
        (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (temp_f0 * D_800A087C);
    }
    return 1;
}

u8 *func_150CFD20(u8 *arg0) {
    u8 *var_a0;
    u8 temp_v0;
    u8 temp_v0_2;

    var_a0 = arg0;
    temp_v0 = *var_a0;
    if ((temp_v0 != 0xBD) && (temp_v0 != 0)) {
loop_2:
        temp_v0_2 = (*(s32 *)((char *)(var_a0) + 0x1));
        var_a0 += 1;
        if (temp_v0_2 != 0xBD) {
            if (temp_v0_2 != 0) {
                goto loop_2;
            }
        }
    }
    return var_a0;
}

u8 *func_150CFD5C(u8 *arg0) {
    u8 *var_a0;
    u8 temp_t7;

    var_a0 = arg0;
    if (*var_a0 != 0) {
        do {
            temp_t7 = (*(s32 *)((char *)(var_a0) + 0x1));
            var_a0 += 1;
        } while (temp_t7 != 0);
    }
    return var_a0;
}

s8 func_150CFD84(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;

    temp_v0 = func_150CFD20(arg0);
    *arg1 = temp_v0;
    return temp_v0 - arg0;
}

s8 func_150CFDB8(u32 arg0) {
    u8 *sp2C;
    s8 temp_v0_3;
    s8 var_s0;
    u32 temp_v0;
    u32 var_a0;
    u8 *temp_v0_2;

    var_s0 = 0;
    temp_v0 = func_150CFD5C(0);
    var_a0 = arg0;
    if (var_a0 < temp_v0) {
        do {
            temp_v0_3 = func_150CFD84((u8 *) var_a0, &sp2C);
            if (var_s0 < temp_v0_3) {
                var_s0 = temp_v0_3;
            }
            temp_v0_2 = sp2C + 1;
            var_a0 = (u32) temp_v0_2;
        } while ((u32) temp_v0_2 < temp_v0);
    }
    return var_s0;
}

void func_150CFE3C(void * *arg0) {
    void *temp_v0;

    memcpy((*(s32 *)((char *)(((char *)(arg0) + ((*(s32 *)((char *)(arg0) + 0x3D)) * 4))) + 0x40)), (*(s32 *)((char *)(arg0) + 0x34)), (*(s32 *)((char *)(arg0) + 0x3C)), arg0);
    temp_v0 = (char *)(arg0) + 0x28;
    (*(s32 *)((char *)((*(s32 *)((char *)(((char *)(temp_v0) + ((*(s32 *)((char *)(temp_v0) + 0x15)) * 4))) + 0x18))) + (*(s32 *)((char *)(temp_v0) + 0x14)))) = 0;
}

void func_150CFE98(void * *arg0) {
    void *sp18;
    u8 *temp_a0;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x38)))) != 0) {
        temp_a0 = (*(s32 *)((char *)(temp_v1) + 0x10)) + 1;
        (*(s32 *)((char *)(temp_v1) + 0xC)) = temp_a0;
        sp18 = temp_v1;
        (*(s32 *)((char *)(temp_v1) + 0x14)) = func_150CFD84(temp_a0, (char *)(temp_v1) + 0x10);
        (*(u8 *)((char *)(temp_v1) + 0x15)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x15)) ^ 1);
        func_150CFE3C(arg0);
        (*(u8 *)((char *)(temp_v1) + 0x8)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x8)) | 1);
    }
}

void * *func_150CFF10( s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u8 sp65;
    s8 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s8 sp55;
    s8 sp54;
    u8 *sp50;
    u8 *sp4C;
    s8 sp48;
    u8 *sp44;
    u8 sp40;
    void * *sp3C;
    s32 sp38;
    void * *sp30;
    void * *temp_a3;
    void * *temp_v0_2;
    s8 *temp_v1;
    s8 temp_v0;
    void *temp_a1;

    sp55 = 0;
    sp48 = 1;
    sp44 = arg1;
    sp4C = arg1;
    sp65 = arg5;
    sp64 = arg4;
    sp40 = arg0;
    sp54 = func_150CFD84(arg1, &sp50);
    sp58 = 0;
    sp5C = 0;
    sp60 = 0;
    temp_v0 = func_150CFDB8((u32) arg1);
    sp38 = temp_v0 + 1;
    temp_v0_2 = func_15149130(arg2, -1, -1, 5, 3, 0x47, arg3 + (temp_v0 * 2) + 0x2A, (s32) arg6, arg7);
    sp3C = temp_v0_2;
    if (temp_v0_2 != NULL) {
        temp_a3 = (char *)(temp_v0_2) + 0x28;
        sp30 = temp_a3;
        memcpy(temp_a3, &sp40, 0x28U, temp_a3);
        temp_a1 = (char *)(sp30) + 0x28;
        (*(s32 *)((char *)(sp30) + 0x20)) = temp_a1;
        temp_v1 = (char *)(temp_a1) + arg3;
        (*(s32 *)((char *)(sp30) + 0x18)) = temp_v1;
        (*(s32 *)((char *)(sp30) + 0x1C)) = (s8 *) (temp_v1 + sp38);
        *temp_v1 = 0;
        (*(s32 *)((*(s32 *)((char *)(sp30) + 0x1C)))) = 0;
        func_150CFE3C(sp3C);
    }
    return sp3C;
}

s32 func_150D0034(s32 arg0, void *arg1, void * arg2) {
    void *temp_v1;

    if (((*(s32 *)((char *)(arg1) + 0x4C)) != -1) && (((s32 (*)())((char *)(&D_800888A0 + ((*(s32 *)((char *)(arg1) + 0x4C)) * 4))))(arg1, arg0) == 0)) {
        (*(s32 *)((char *)(arg1) + 0xE)) = -1;
        return arg0;
    }
    temp_v1 = (char *)(arg1) + 0x28;
    (*(u8 *)((char *)(temp_v1) + 0x8)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x8)) & 0xFFFE);
    return arg0;
}

void func_150D00C0(void *arg0, u8 *arg1, s32 arg2) {
    void * (*temp_v0)(s32);
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x51) {
        if ((*(s32 *)((char *)(arg0) + 0x28)) == *arg1) {
            func_150CFE98((void * *) temp_t6);
        }
    } else {
        temp_v0 = *(&D_800888B0 + ((*(s32 *)((char *)(arg0) + 0x4D)) * 4));
        if (temp_v0 != NULL) {
            temp_v0(temp_t6);
        }
    }
}

void func_150D0134(s32 arg0, s32 arg2, s32 arg3, s32 arg4) {
    u8 sp30;
    void * *temp_v0;

    sp30 = 0;
    temp_v0 = func_150CFF10(arg0 & 0xFF, (u8 *) arg2, 8, 0, 0, (u8) (s32) arg3, (u8) arg4, 0);
    if (temp_v0 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0) + 0x48)), &sp30, 1U);
    }
}

s32 func_150D01A0(void *arg0) {
    void *sp20;
    s32 temp_t0;
    s32 var_a3;
    s32 var_s0;
    s8 *temp_v0;
    s8 temp_v1;
    void *temp_v0_2;

    var_a3 = 0xFF;
    var_s0 = 0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x48));
    if ((*(s32 *)((char *)(arg0) + 0x30)) & 1) {
        *temp_v0 = 8;
    }
    temp_v1 = *temp_v0;
    if (temp_v1 > 0) {
        temp_t0 = (temp_v1 * 0x1F) & 0xFF;
        var_s0 = temp_t0;
        var_a3 = (0xFF - temp_t0) & 0xFF;
        *temp_v0 = temp_v1 - D_800BE9E4;
    }
    if (var_a3 != 0) {
        func_1504332C(0xCE, 0xC4, 0x61, var_a3);
        func_15042D94(0x92, 0xBE, 0x81, (*(s32 *)((char *)(((char *)(arg0) + 0x28 + ((*(s32 *)((char *)(arg0) + 0x3D)) * 4))) + 0x18)));
    }
    if (var_s0 != 0) {
        temp_v0_2 = (char *)(arg0) + 0x28;
        sp20 = temp_v0_2;
        func_1504332C(0xCE, 0xC4, 0x61, var_s0 & 0xFF);
        func_15042D94(0x92, 0xBE, 0x81, (*(s32 *)((char *)(((char *)(temp_v0_2) + (((*(s32 *)((char *)(temp_v0_2) + 0x15)) ^ 1) * 4))) + 0x18)));
    }
    return 1;
}

void func_150D02B4(s32 arg0, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp30;
    f32 sp2C;
    void * *temp_v0;

    sp30 = 0;
    sp2C = 0.0f;
    temp_v0 = func_150CFF10(arg0 & 0xFF, (u8 *) arg2, 8, 1, 0, (u8) (s32) arg3, (u8) arg4, 0);
    if (temp_v0 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0) + 0x48)), (u8 *) &sp2C, 8U);
    }
}

s32 func_150D032C(void *arg0) {
    void *sp78;
    void * sp2C;
    void * sp28;
    u8 sp20;
    void * *sp1C;
    void * *temp_a3;
    f32 temp_f2;
    f32 var_f8;
    u8 temp_t2;
    u8 temp_v1;
    void *temp_v0;

    temp_a3 = (char *)(arg0) + 0x28;
    (*(s32 *)((char *)&(sp20) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A0880) + 0x0));
    (*(u8 *)((char *)&(sp20) + 0x4)) = (u8) (*(u8 *)((char *)&(D_800A0880) + 0x4));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x48));
    if ((*(s32 *)((char *)(arg0) + 0x30)) & 1) {
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0.0f;
    }
    temp_t2 = (*(s32 *)((char *)(temp_a3) + 0x14));
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x0));
    var_f8 = (f32) temp_t2;
    if ((s32) temp_t2 < 0) {
        var_f8 += 4294967296.0f;
    }
    if (temp_f2 < var_f8) {
        (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) (temp_f2 + (D_800A0888 * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_v0) + 0x0)) > 1.0f) {
            do {
                (*(s16 *)((char *)(temp_v0) + 0x4)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x4)) + 1);
                temp_v1 = (*(s32 *)((char *)(temp_a3) + 0x14));
                if ((s32) temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x4))) {
                    (*(s16 *)((char *)(temp_v0) + 0x4)) = (s16) temp_v1;
                }
                (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x0)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_v0) + 0x0)) > 1.0f);
        }
    }
    sp78 = temp_v0;
    sp1C = temp_a3;
    memcpy(&sp28, &sp20, 4U, temp_a3);
    memcpy(&sp2C, (*(u8 *)((char *)(((char *)(sp1C) + ((*(u8 *)((char *)(sp1C) + 0x15)) * 4))) + 0x18)), (u8) (*(u8 *)((char *)(sp78) + 0x4)), sp1C);
    (*(s32 *)((char *)((&sp28 + (*(s32 *)((char *)(sp78) + 0x4)))) + 0x4)) = 0x20;
    (*(s32 *)((char *)((&sp28 + (*(s32 *)((char *)(sp78) + 0x4)))) + 0x5)) = 0xBB;
    (*(s32 *)((char *)((&sp28 + (*(s32 *)((char *)(sp78) + 0x4)))) + 0x6)) = 0;
    func_1504332C(0, 0xFF, 0, 0x96);
    func_15042D94(0xF, 0xBE, 0x80, &sp28);
    return 1;
}

void func_150D04C4(s32 arg0, s32 arg2, s32 arg3, s32 arg4) {
    u8 sp30;
    void * *temp_v0;

    sp30 = 0;
    temp_v0 = func_150CFF10(arg0 & 0xFF, (u8 *) arg2, 8, 2, 0, (u8) (s32) arg3, (u8) arg4, 0);
    if (temp_v0 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0) + 0x48)), &sp30, 1U);
    }
}

s32 func_150D0534(void *arg0) {
    void *sp20;
    s32 temp_t0;
    s32 var_a3;
    s32 var_s0;
    s8 *temp_v0;
    s8 temp_v1;
    void *temp_v0_2;

    var_a3 = 0xFF;
    var_s0 = 0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x48));
    if ((*(s32 *)((char *)(arg0) + 0x30)) & 1) {
        *temp_v0 = 0x14;
    }
    temp_v1 = *temp_v0;
    if (temp_v1 > 0) {
        temp_t0 = (temp_v1 * 0xC) & 0xFF;
        var_s0 = temp_t0;
        var_a3 = (0xFF - temp_t0) & 0xFF;
        *temp_v0 = temp_v1 - D_800BE9E4;
    }
    if (var_a3 != 0) {
        func_1504332C(0xFF, 0xFF, 0xFF, var_a3);
        func_15042D94(0x14, 0x14, 0x80, (*(s32 *)((char *)(((char *)(arg0) + 0x28 + ((*(s32 *)((char *)(arg0) + 0x3D)) * 4))) + 0x18)));
    }
    if (var_s0 != 0) {
        temp_v0_2 = (char *)(arg0) + 0x28;
        sp20 = temp_v0_2;
        func_1504332C(0xFF, 0xFF, 0xFF, var_s0 & 0xFF);
        func_15042D94(0x14, 0x14, 0x80, (*(s32 *)((char *)(((char *)(temp_v0_2) + (((*(s32 *)((char *)(temp_v0_2) + 0x15)) ^ 1) * 4))) + 0x18)));
    }
    return 1;
}
