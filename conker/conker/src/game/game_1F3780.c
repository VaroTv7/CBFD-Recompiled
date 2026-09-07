/**
 * Auto-decompiled from asm/1F3780.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_150F7470(); /* extern */
void * func_15102B38(); /* extern */
s32 func_1513264C();   /* extern */
s32 func_15142A5C();          /* extern */
void * func_15143134();                  /* extern */
void * func_15145740();      /* extern */
void * func_15145EA4();           /* extern */
s32 func_1514654C(); /* extern */
s32 func_1514ECE0();                 /* extern */
s32 func_151C229C(); /* extern */
void * func_151D3F14();                    /* extern */
void * func_151D4408(); /* extern */
void * func_151D5148();                            /* extern */
void * func_151D5174(); /* extern */
void * func_151D8868();                     /* extern */
void * memcpy();                             /* extern */
void func_151C69CC();   /* static */
void func_151C6D70();
extern s32 D_800AAB00;
extern s32 D_800AAB08;
extern s32 D_800AAB20;
extern s32 D_800AAB38;
extern s32 D_800AAB50;
extern s32 D_800AAB68;
extern f32 D_800AABF8;
extern f32 D_800AABFC;
extern f32 D_800AAC00;
extern f32 D_800AAC04;
extern f32 D_800AAC08;
extern f32 D_800AAC0C;
extern f32 D_800AAC10;
extern f32 D_800AAC14;
extern f32 D_800AAC18;
extern f32 D_800AAC1C;
extern f32 D_800AAC20;
extern u8 D_800DCA20;

s32 func_151C62D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    void * sp13C;
    void * sp130;
    void * sp124;
    void * sp118;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    s32 spFC;
    s32 spF4;
    s32 spF0;
    void * spE4;
    void *spE0;
    void *spDC;
    void *spD8;
    void *spD4;
    void *spD0;
    f32 *spCC;
    void * *spC8;
    f32 *spC4;
    f32 *spC0;
    f32 *spBC;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s16 spA6;
    s8 spA4;
    s32 spA0;
    s32 sp98;
    f32 sp84;
    f32 sp80;
    void * var_a3;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_t1;
    u8 var_v0_2;

    f32 sp110;
    f32 sp114;
    if (arg0 == NULL) {
        return 0;
    }
    if ((s32) arg1 >= 2) {
        return 0;
    }
    if (func_15142A5C() != 0) {
        return 0;
    }
    func_151D5148(arg0);
    if (arg2 == 0) {
        func_15145740(arg0, &sp148, &sp118, &spE4, D_800AABF8);
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
    if (temp_v0 != 0) {
        spBC = &sp154;
        spC0 = &sp10C;
        spFC = *(&D_800AAB00 + (arg1 * 4)) + temp_v0;
        spC4 = &sp100;
        spC8 = &sp13C;
        spCC = &sp148;
        spD0 = (arg1 * 0xC) + &D_800AAB08;
        spD4 = (arg1 * 0xC) + &D_800AAB38;
        spD8 = (arg1 * 0xC) + &D_800AAB50;
        spDC = (arg1 * 0xC) + &D_800AAB68;
        spE0 = (arg1 * 0xC) + &D_800AAB20;
        if (arg3 != 0) {
            if (arg2 != 0) {
                sp98 = 5;
            } else {
                sp98 = 4;
            }
            if (func_1514654C(arg0, arg3, 0, &spD0, &spBC, sp98) == 0) {
                return 0;
            }
            goto block_19;
        }
        if (arg2 != 0) {
            var_a3 = 5;
        } else {
            var_a3 = 4;
        }
        func_15145EA4(&spD0, &spBC, spFC, var_a3);
block_19:
        var_f12 = sp148;
        var_f14 = sp150;
        sp100 -= sp10C;
        sp104 -= sp110;
        sp108 -= sp114;
        if (arg2 != 0) {
            var_f12 -= sp154;
            sp148 = var_f12;
            var_f14 -= sp15C;
            sp14C -= sp158;
            sp150 = var_f14;
        }
        goto block_32;
    }
    var_f12 = sp148;
    if (arg2 != 0) {
        return 0;
    }
    var_f14 = sp150;
    if ((D_800AABFC < fabsf(var_f12)) || (D_800AABFC < fabsf(var_f14))) {
        var_f14 = sp150;
        temp_f2 = 1.0f / sqrtf((var_f12 * var_f12) + (var_f14 * var_f14));
        var_f16 = var_f14 * temp_f2;
        var_f18 = -var_f12 * temp_f2;
    } else {
        var_f16 = 1.0f;
        var_f18 = 0.0f;
    }
    if (arg1 != 0) {
        var_f0 = 34.0f;
    } else {
        var_f0 = -34.0f;
    }
    sp154 = (*(s32 *)((char *)(arg0) + 0x14)) + (var_f0 * var_f18);
    sp158 = (*(s32 *)((char *)(arg0) + 0x18)) + 49.0f;
    sp15C = (*(s32 *)((char *)(arg0) + 0x1C)) + (var_f0 * var_f16);
    (*(f32 *)((char *)&(sp13C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp154) + 0x0));
    (*(s32 *)((char *)&(sp13C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp154) + 0x4));
    (*(s32 *)((char *)&(sp13C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp154) + 0x8));
block_32:
    func_151D5174(var_f12, var_f14, arg0, &sp154, &sp148, &sp118, &spE4, &sp130, &sp124, &spF4, &spF0, &sp13C);
    if ((*(s32 *)((char *)(arg0) + 0x318)) != NULL) {
        spA4 = 1;
        spA6 = (random_u32() % 11U) + 0xB;
        spA9 = 1 << (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x318))) + 0x23D));
        random_u32();
        spA8 = 8;
        spAA = -1;
        func_151D8868(&spA4, 0, 0xFF, 1);
    }
    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        if ((arg2 != 0) || ((D_80082FA0 < 2) && (random_u32() & 1))) {
            func_151D3F14(&sp154, arg5, arg6);
        }
        if (((arg2 != 0) || (D_80082FA0 < 2)) && (random_u32() & 1)) {
            func_151D4408(&sp10C, &sp100, spFC, arg0, 1.0f, (s32) arg5, arg6);
        }
        var_v0_2 = D_800DCA20;
        var_v1_2 = 1;
        if (var_v0_2 != 0) {
            do {
                temp_t9 = 1 << var_v0_2;
                var_v0_2 -= 1;
                var_v1_2 |= temp_t9;
            } while (var_v0_2 != 0);
        }
        if ((arg2 != 0) || (spA0 = var_v1_2, ((random_u32() & var_v1_2) == 0))) {
            func_151C6D70(arg0, arg1, &sp154, arg4, (s32) arg5, arg6);
        }
    }
    sp80 = random_float();
    sp84 = random_float();
    temp_t1 = random_u32();
    if (arg2 != 0) {
        var_t0 = 0;
    } else {
        var_t0 = 1;
    }
    if (arg2 != 0) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (arg2 != 0) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    if (arg2 != 0) {
        sp98 = 0;
    } else {
        sp98 = 1;
    }
    return func_151C229C(&sp13C, &sp148, spF4, spF0, 1, 0, 300.0f, D_800AAC00, (sp80 * 10.0f) + 25.0f, (sp84 * 150.0f) + 400.0f, 50.0f, (temp_t1 % 156U) + 0x64, arg0, var_t0, var_v0, var_v1, 8, sp98, 1, 0, 0x1A, 0.0f, 0xFF, -1, 0, (s32) arg5, arg6);
}

void func_151C6974(void * arg1, void *arg2) {
    func_151C69CC(arg2, 0, arg2);
}

void func_151C69A0(void * arg1, void *arg2) {
    func_151C69CC(arg2, 1, arg2);
}

void func_151C69CC(void *arg0, s32 arg2) {
    s32 temp_a3;

    temp_a3 = arg2 & 0xFF;
    func_15143134((temp_a3 * 0xC) + &D_800AAB08, *(&D_800AAB00 + (temp_a3 * 4)) + (*(s32 *)((char *)(arg0) + 0x1D4)), temp_a3);
}

void func_151C6A28(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp124;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    s32 sp108;
    void *sp104;
    void *sp100;
    void *spFC;
    f32 *spF8;
    f32 *spF4;
    f32 *spF0;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    void *spDC;
    void * sp90;
    void * sp64;
    void * *var_t0;
    s32 *temp_v0_3;
    s32 *var_t9;
    s32 temp_a2;
    s32 temp_at;
    s32 temp_v0;
    s32 var_v0;
    void *temp_v0_2;
    void *temp_v1;

    f32 sp11C;
    f32 sp120;
    f32 sp128;
    f32 sp12C;
    if ((arg0 != NULL) && ((s32) arg1 < 2) && (func_15142A5C() == 0)) {
        func_151D5148(arg0);
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
        if (temp_v0 != 0) {
            temp_a2 = *(&D_800AAB00 + (arg1 * 4)) + temp_v0;
            spFC = (arg1 * 0xC) + &D_800AAB08;
            sp100 = (arg1 * 0xC) + &D_800AAB38;
            sp104 = (arg1 * 0xC) + &D_800AAB50;
            spF0 = &sp124;
            spF4 = &sp118;
            spF8 = &sp10C;
            sp108 = temp_a2;
            func_15145EA4(&spFC, &spF0, temp_a2, 3);
            sp10C -= sp118;
            sp110 -= sp11C;
            sp114 -= sp120;
            func_151D3F14(&sp124, arg2, arg3);
            func_151D4408(&sp118, &sp10C, sp108, arg0, 1.0f, (s32) arg2, arg3);
            func_151C6D70(arg0, arg1, &sp124, -1, (s32) arg2, arg3);
            if (func_1514ECE0((*(s32 *)((char *)(arg0) + 0x2F4)), 0x1B, &spDC) != 0) {
                temp_v0_2 = (*(s32 *)((char *)(spDC) + 0x10));
                temp_v1 = (char *)(temp_v0_2) + 0x28;
                if ((*(s32 *)((char *)(temp_v0_2) + 0x9C)) & 1) {
                    temp_v0_3 = (char *)(temp_v1) + 0x10;
                    var_t9 = temp_v0_3;
                    if ((*(s32 *)((char *)(temp_v1) + 0x69)) != 0) {
                        var_t0 = &sp64;
                        if ((s32) (*(s32 *)((char *)(temp_v0_3) + 0x59)) >= 2) {
                            spE0 = (((*(s32 *)((char *)(temp_v0_3) + 0x8)) - sp124) * D_800AAC04) + sp124;
                            spE4 = (((*(s32 *)((char *)(temp_v0_3) + 0xC)) - sp128) * D_800AAC04) + sp128;
                            spE8 = (((*(s32 *)((char *)(temp_v0_3) + 0x10)) - sp12C) * D_800AAC04) + sp12C;
                        } else {
                            (*(s32 *)((char *)&(spE0) + 0x0)) = (*(s32 *)((char *)(temp_v0_3) + 0x8));
                            (*(f32 *)((char *)&(spE0) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0xC));
                            (*(f32 *)((char *)&(spE0) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x10));
                        }
                        do {
                            temp_at = *var_t9;
                            var_t9 += 0xC;
                            var_t0 = (char *)(var_t0) + 0xC;
                            (*(s32 *)((char *)(var_t0) - 0xC)) = temp_at;
                            (*(s32 *)((char *)(var_t0) - 0x8)) = (s32) (*(s32 *)((char *)(var_t9) - 0x8));
                            (*(s32 *)((char *)(var_t0) - 0x4)) = (s32) (*(s32 *)((char *)(var_t9) - 0x4));
                        } while (var_t9 != (temp_v0_3 + 0x60));
                        (*(s32 *)((char *)(var_t0) + 0x0)) = (s32) (*(s32 *)((char *)(var_t9) + 0x0));
                        (*(f32 *)((char *)&(sp90) + 0x0)) = (f32) (*(f32 *)((char *)&(spE0) + 0x0));
                        (*(f32 *)((char *)&(sp90) + 0x4)) = (f32) (*(f32 *)((char *)&(spE0) + 0x4));
                        (*(f32 *)((char *)&(sp90) + 0x8)) = (f32) (*(f32 *)((char *)&(spE0) + 0x8));
                        var_v0 = 1;
                        if ((s32) (*(s32 *)((char *)(temp_v0_3) + 0x59)) >= 2) {
                            var_v0 = 0;
                        }
                        func_150F7470(&sp124, 0, 0, 0, 0, &sp64, D_800AAC08, D_800AAC0C, 500.0f, arg0, 0, var_v0, 1, 0, 0x1A, -1, 0, 1, (s32) arg2, arg3);
                    }
                }
            }
        }
    }
}

void func_151C6D70(void *arg0, s32 arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 sp54;
    f32 sp50;
    u32 sp48;
    u32 sp44;
    s32 temp_v0;

    sp54 = (random_float() * D_800AAC10) + D_800AAC14;
    sp50 = (random_float() * D_800AAC18) + D_800AAC1C;
    sp44 = random_u32();
    sp48 = random_u32();
    temp_v0 = arg1 * 0xC;
    func_15102B38(arg0, ((u32) *(&D_800AAB00 + (arg1 * 4)) >> 6) & 0xFF, temp_v0 + &D_800AAB08, temp_v0 + &D_800AAB20, &sp50, (sp44 & 3) + 6, 0xFF, (random_float() * 270.0f) + D_800AAC20, arg2, 0xFF, 0, (s32) arg3, (s32) arg4, arg5);
}

void func_151C6EA0(void *arg0, s32 arg1, s32 arg2) {
    s32 spAC;
    s16 spA8;
    s16 spA6;
    u8 spA4;
    void *spA0;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s8 sp8C;
    s16 sp8A;
    s16 sp88;
    s32 sp84;
    f32 sp80;
    void * sp74;
    void * sp68;
    void * sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    void * sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s8 sp30;
    s32 temp_v0;

    sp30 = 0;
    sp34 = 1.0f;
    sp38 = 1.0f;
    sp40 = 1.0f;
    sp3C = 1.0f;
    (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp50 = 1.0f;
    sp54 = 1.0f;
    sp58 = 1.0f;
    (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp5C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp5C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp74) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp74) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp74) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp84 = 0x11900;
    sp88 = 0x12C;
    sp8A = 0xF;
    sp8C = 0;
    sp90 = 0;
    sp94 = 0x64;
    sp95 = 0x17;
    sp96 = 0;
    sp97 = 0;
    sp98 = 0;
    sp99 = 0;
    sp9A = 0;
    sp9B = 0;
    sp9C = 5;
    sp9D = -1;
    sp9E = 1;
    sp80 = 0.0f;
    spA0 = arg0;
    spA6 = 1;
    spA8 = 0xFF;
    spAC = 0;
    spA4 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_1513264C(&sp34, 3, 0xFF, 0, 1, (s32) arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x170, &sp30, 1);
    }
}

s32 func_151C7038(void *arg0) {
    void *sp1C;
    f32 var_f0;
    void *temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x7C));
    if ((*(s32 *)((char *)(temp_a2) + 0x84)) != 0xE9) {
        return 0;
    }
    sp1C = temp_a2;
    if (func_15142A5C(temp_a2, arg0, temp_a2) != 0) {
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) | 0x20000);
    } else {
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) & 0xFFFDFFFF);
    }
    var_f0 = (*(s32 *)((char *)(temp_a2) + 0x4C)) * 35.0f;
    if (var_f0 > 255.0f) {
        var_f0 = 255.0f;
    } else if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
    }
    (*(s8 *)((char *)(arg0) + 0x70)) = (s8) (u32) var_f0;
    return 1;
}
