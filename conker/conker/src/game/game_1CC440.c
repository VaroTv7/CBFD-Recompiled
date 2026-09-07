/**
 * Auto-decompiled from asm/1CC440.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15045800();           /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                                /* extern */
s32 func_1510F8CC();                             /* extern */
s32 func_15130374();            /* extern */
void * func_1513170C();                       /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();             /* extern */
void * func_15143794();           /* extern */
void * func_151478F4();                    /* extern */
void * func_15147928();                    /* extern */
void *func_15147A80(); /* extern */
void * func_1514C678(); /* extern */
void * func_15152B38();             /* extern */
s32 func_15167D84(); /* extern */
void * func_151D5D60();    /* extern */
u8 func_151D8E20();                                 /* extern */
void * memcpy();                          /* extern */
void func_1519F48C();             /* static */
void func_151A0928();                     /* static */
void func_151A11CC(f32 arg0, f32 arg1, s32 arg2, f32 arg3);
void func_151A2C24(void *arg0, void *arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, s16 arg12, s16 arg13, s16 arg14, s16 arg15, s16 arg16, s16 arg17, s8 arg18, u8 arg19, s32 arg20, u8 arg21);
extern s32 D_8008F8D0;
extern s32 D_8008F8E0;
extern s32 D_8008F8E8;
extern s32 D_80090B60;
extern s32 D_80090D34;
extern s32 D_80090E0C;
extern s32 D_8009187C;
extern s32 D_800918A0;
extern f32 D_800A8CE0;
extern f32 D_800A8CE4;
extern f32 D_800A8CE8;
extern f32 D_800A8CEC;
extern f32 D_800A8CF0;
extern f32 D_800A8CF4;
extern f32 D_800A8CF8;
extern f32 D_800A8CFC;
extern f32 D_800A8D00;
extern f32 D_800A8D10;
extern f32 D_800A8D14;
extern f32 D_800A8D18;
extern f32 D_800A8D20;
extern f32 D_800A8D24;
extern f32 D_800A8D28;
extern f32 D_800A8D2C;
extern f32 D_800A8D30;
extern f32 D_800A8D34;
extern f32 D_800A8D38;
extern f32 D_800A8D3C;
extern f32 D_800A8D40;
extern f32 D_800A8D44;
extern s32 D_800AB414;
extern s32 D_800D2C9C;
s32 func_1519EF90();
void * func_1519F1C8();

s32 func_1519EF90(void **arg0, s32 arg1, void * *arg2) {
    void *sp3C;
    void *sp38;
    f32 sp2C;
    f32 sp28;
    u8 sp1F;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f16;
    f32 var_f18;
    u8 temp_v0_2;
    void *temp_a3;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x0));
    sp38 = (char *)(temp_v0) + 0x58;
    temp_a3 = (*(s32 *)((char *)(temp_v0) + 0x18));
    if ((*(s32 *)((char *)(temp_a3) + 0x1D4)) == 0) {
        return 0;
    }
    var_f16 = (*(s32 *)((char *)(temp_a3) + 0x14));
    temp_f12 = var_f16 - (*(s32 *)((char *)(arg0) + 0x20));
    temp_f14 = (*(s32 *)((char *)(temp_a3) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x24));
    if ((D_800A8CE0 < fabsf(temp_f12)) || (D_800A8CE0 < fabsf(temp_f14))) {
        temp_f2 = 1.0f / sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14));
        var_f18 = temp_f14 * temp_f2;
        sp28 = temp_f12 * temp_f2;
    } else {
        sp3C = temp_a3;
        temp_v0_2 = func_15143E08(temp_f12, temp_f14, temp_a3, temp_a3);
        sp1F = temp_v0_2;
        sp2C = func_151423D8(temp_v0_2 & 0xFF);
        var_f18 = sp2C;
        sp28 = func_151423D8((sp1F - 0x40) & 0xFF);
        var_f16 = (*(s32 *)((char *)(temp_a3) + 0x14));
    }
    if (arg1 == 6) {
        var_f0 = (*(s32 *)((char *)(sp38) + 0x10));
    } else {
        var_f0 = -(*(s32 *)((char *)(sp38) + 0x10));
    }
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (var_f16 + (var_f0 * var_f18));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x1C)) - (var_f0 * sp28));
    temp_f2_2 = (*(s32 *)((char *)(temp_a3) + 0x118));
    if (temp_f2_2 < D_800A8CE4) {
        (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (*(f32 *)((char *)(temp_a3) + 0x18));
        return 1;
    }
    (*(s32 *)((char *)(arg2) + 0x4)) = temp_f2_2;
    return 1;
}

void func_1519F108(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
    if (temp_v1 != NULL) {
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 6) {
            (*(s32 *)((char *)(temp_v1) + 0x58)) = 0;
        }
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 7) {
            (*(s32 *)((char *)(((char *)(temp_v1) + 0x58)) + 0x8)) = 0;
        }
    }
    func_151478F4(arg0, arg0);
}

void func_1519F168(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
    if (temp_v1 != NULL) {
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 6) {
            (*(s32 *)((char *)(temp_v1) + 0x58)) = 0;
        }
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 7) {
            (*(s32 *)((char *)(((char *)(temp_v1) + 0x58)) + 0x8)) = 0;
        }
    }
    func_15147928(arg0, arg0);
}

void *func_1519F1C8(void *arg0, s32 arg1) {
    void *spB4;
    s8 spAD;
    s32 spA8;
    u16 spA6;
    s16 spA4;
    void * sp98;
    f32 sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    u8 sp74;
    u8 sp73;
    u8 sp72;
    s16 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    void * sp58;
    f32 sp54;
    f32 sp50;
    s8 sp4C;
    void *sp48;
    void *sp44;
    u8 sp43;
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
    spB4 = temp_v1;
    temp_v0 = func_151D8E20();
    spA6 = 0x42;
    spA4 = 0x12C;
    spAD = 0xA;
    sp76 = 0xC8;
    sp88 = 3;
    sp48 = arg0;
    sp43 = temp_v0;
    sp4C = 6;
    sp89 = 0x55;
    sp8A = 3;
    sp8B = 0x55;
    sp8C = 0x88;
    sp8D = 0xC4;
    sp70 = 0;
    sp8E = 0;
    sp78 = 0xFF;
    sp7A = 0x28;
    sp7C = 0x19;
    sp90 = 6;
    sp92 = 0x325;
    sp50 = D_800A8CE8;
    sp80 = D_800A8CEC;
    sp84 = 1.0f;
    sp54 = 0.0f;
    sp64 = 0.0f;
    spA8 = (s32) arg1;
    sp94 = 1.5f;
    sp68 = (*(s32 *)((char *)(temp_v1) + 0x14));
    sp6C = (*(s32 *)((char *)(temp_v1) + 0x1C));
    if (func_1519EF90(&sp48, arg1 & 0xFF, &sp98) != 0) {
        (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)&(sp98) + 0x0));
        (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)&(sp98) + 0x4));
        (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)&(sp98) + 0x8));
        spA6 |= 4;
    }
    temp_v0_2 = (sp43 * 3) + &D_800AB414;
    sp72 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
    sp73 = (*(s32 *)((char *)(temp_v0_2) + 0x1));
    sp74 = (*(s32 *)((char *)(temp_v0_2) + 0x2));
    temp_v0_3 = func_15147A80(&sp98, 0x50, 0x24, 5, 5, 5, 0, 0, (char *)(arg0) + 0x34, 0xFF, 1);
    var_v1 = temp_v0_3;
    if (temp_v0_3 != NULL) {
        sp44 = temp_v0_3;
        memcpy((*(s32 *)((char *)(temp_v0_3) + 0x98)), &sp48, 0x50);
        var_v1 = sp44;
    }
    return var_v1;
}

void func_1519F3B8(void *arg0) {
    void *sp18;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x58;
    (*(s32 *)((char *)(arg0) + 0x58)) = func_1519F1C8(6, 0);
    (*(s32 *)((char *)(temp_v1) + 0x4)) = 0;
    sp18 = temp_v1;
    (*(s32 *)((char *)(temp_v1) + 0x8)) = func_1519F1C8(arg0, 7U);
    (*(s32 *)((char *)(temp_v1) + 0xC)) = 0;
}

void func_1519F400(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_t6;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x58));
    if (temp_t6 != NULL) {
        func_1519F48C(temp_t6, arg0);
    }
    temp_s0 = (char *)(arg0) + 0x58;
    temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x8));
    if (temp_a0 != NULL) {
        func_1519F48C(temp_a0, arg0);
    }
    temp_a0_2 = (*(s32 *)((char *)(temp_s0) + 0x4));
    if (temp_a0_2 != NULL) {
        func_151A0928(temp_a0_2);
        func_1516972C((*(s32 *)((char *)(temp_s0) + 0x4)));
    }
    temp_a0_3 = (*(s32 *)((char *)(temp_s0) + 0xC));
    if (temp_a0_3 != NULL) {
        func_151A0928(temp_a0_3);
        func_1516972C((*(s32 *)((char *)(temp_s0) + 0xC)));
    }
}

void func_1519F48C(void *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
    if (temp_v1 != NULL) {
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 6) {
            (*(s32 *)((char *)(temp_v1) + 0x58)) = 0;
        }
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 7) {
            (*(s32 *)((char *)(((char *)(temp_v1) + 0x58)) + 0x8)) = 0;
        }
        (*(s32 *)((char *)(temp_v0) + 0x0)) = NULL;
    }
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFD);
    (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x4)) | 1);
}

s32 func_1519F4F0(void *arg0) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f22;
    s16 temp_v0;
    s32 temp_fp;
    s32 var_s3;
    s8 var_s2;
    void *temp_s1;
    void *temp_s6;
    void *temp_v0_2;

    temp_s6 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_fp = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(temp_s6) + 0x4)) & 1)) {
        return 0;
    }
    var_s2 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        temp_f22 = D_800A8CF0;
        do {
            var_s2 -= 1;
            var_s3 = 0;
            if (var_s2 < 0) {
                var_s2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s1 = (var_s2 * 0x24) + temp_fp;
            (*(s16 *)((char *)(temp_s1) + 0x18)) = (s16) ((*(s16 *)((char *)(temp_s1) + 0x18)) - D_800BE9E4);
            if ((*(s32 *)((char *)(temp_s1) + 0x18)) < 0) {
                var_s3 = 1;
            }
            temp_v0 = (*(s32 *)((char *)(temp_s1) + 0x12));
            (*(s32 *)((char *)(temp_s1) + 0x14)) = 0xFF;
            if (temp_v0 > 0) {
                (*(s16 *)((char *)(temp_s1) + 0x12)) = (s16) (temp_v0 - D_800BE9E4);
            } else {
                (*(s16 *)((char *)(temp_s1) + 0x10)) = (s16) ((*(s16 *)((char *)(temp_s1) + 0x10)) - ((*(s16 *)((char *)(temp_s6) + 0x34)) * D_800BE9E4));
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((*(f32 *)((char *)(temp_s6) + 0x3C)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_s1) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x0)) + ((*(f32 *)((char *)(temp_s1) + 0x1C)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x4)) + ((*(f32 *)((char *)(temp_s1) + 0x20)) * D_800BE9A4));
            sp58 = (*(s32 *)((char *)(temp_s1) + 0x0));
            temp_f0 = fabsf(sp58);
            sp5C = (*(s32 *)((char *)(temp_s1) + 0x8)) + 30.0f;
            sp60 = (*(s32 *)((char *)(temp_s1) + 0x4));
            if ((temp_f22 < temp_f0) || (temp_f22 < fabsf(sp60))) {
                goto block_17;
            }
            if (func_15045800(&sp58, 0, (*(s32 *)((char *)(temp_s1) + 0x8)) - 30.0f, (char *)(arg0) + 0x60) != 0) {
                (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x60));
            } else {
block_17:
                var_s3 = 1;
            }
            if ((*(s32 *)((char *)(temp_s1) + 0x10)) < 0) {
                var_s3 = 1;
            }
            if (var_s3 != 0) {
                if (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
                (*(s32 *)((char *)((temp_fp + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24))) + 0x10)) = 0;
            }
        } while (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    (*(s16 *)((char *)(temp_s6) + 0x46)) = (s16) ((*(s16 *)((char *)(temp_s6) + 0x46)) + ((*(s16 *)((char *)(temp_s6) + 0x48)) * D_800BE9E4));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_v0_2 = temp_fp + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24);
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x0));
        (*(f32 *)((char *)(arg0) + 0x58)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x5C)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x4));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0.0f;
    }
    return 1;
}

s32 func_1519F7F0(void *arg0) {
    s32 sp110;
    f32 spF4;
    s8 spF0;
    void *spEC;
    f32 spD8;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spAC;
    f32 spA8;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    void **sp84;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    void * *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 var_f20;
    f32 var_f22;
    s32 temp_a3;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s8 temp_v1;
    void **temp_a1;
    void **temp_s3;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;

    temp_s3 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_v0 = (*(s32 *)((char *)(temp_s3) + 0x0));
    temp_s4 = (*(s32 *)((char *)(temp_v0) + 0x18));
    if ((*(s32 *)((char *)(temp_s4) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(temp_s4) + 0x1D4)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(temp_v0) + 0x1C)) != (*(s32 *)((char *)(temp_s4) + 0x3B))) {
        return 0;
    }
    sp110 = temp_a3;
    var_v0 = 0;
    temp_s0 = (char *)(arg0) + 0x10;
    if (!((*(s32 *)((char *)(arg0) + 0x1E)) & 4)) {
        sp110 = temp_a3;
        if (func_1519EF90(temp_s3, (*(u8 *)((char *)(arg0) + 0x23)), temp_s0) != 0) {
            var_v0 = 1;
            (*(f32 *)((char *)(temp_s3) + 0x10)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)(temp_s3) + 0x14)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x4));
            (*(f32 *)((char *)(temp_s3) + 0x18)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x8));
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
            goto block_10;
        }
        goto block_51;
    }
block_10:
    if ((var_v0 == 0) && (func_1519EF90(temp_s3, (*(u8 *)((char *)(arg0) + 0x23)), (char *)(arg0) + 0x10) == 0)) {
        func_1519F48C(arg0);
        temp_v0_2 = (*(s32 *)((char *)(temp_s3) + 0x0));
        spEC = temp_v0_2;
        temp_s2 = (char *)(temp_v0_2) + 0x58;
        spF0 = (s8) (*(s8 *)((char *)(arg0) + 0x20));
        temp_v0_3 = func_151491F4(0x12C, -1, 0xB, 0, 6, 8, 0xFF, 0);
        if (temp_v0_3 != 0) {
            memcpy(temp_v0_3 + 0x28, &spEC, 8);
        }
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 6) {
            (*(s32 *)((char *)(temp_s2) + 0x4)) = temp_v0_3;
            return 1;
        }
        (*(s32 *)((char *)(temp_s2) + 0xC)) = temp_v0_3;
        goto block_51;
    }
    (*(f32 *)((char *)(temp_s3) + 0x20)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x14));
    (*(f32 *)((char *)(temp_s3) + 0x24)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x1C));
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x10)) - (*(s32 *)((char *)(temp_s3) + 0x10));
    temp_f24 = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_s3) + 0x14));
    temp_f18 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(temp_s3) + 0x18));
    if ((D_800A8CF4 < fabsf(temp_f16)) || (D_800A8CF4 < fabsf(temp_f24)) || (D_800A8CF4 < fabsf(temp_f18))) {
        temp_f0 = sqrtf((temp_f16 * temp_f16) + (temp_f24 * temp_f24) + (temp_f18 * temp_f18));
        (*(f32 *)((char *)(temp_s3) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0xC)) + (temp_f0 * (*(f32 *)((char *)(temp_s3) + 0x8))));
        spF4 = 1.0f / temp_f0;
    }
    temp_f2 = (*(s32 *)((char *)(temp_s3) + 0xC));
    if (temp_f2 > 1.0f) {
        temp_f14 = 1.0f / temp_f2;
        temp_a1 = (char *)(temp_s3) + 0x10;
        var_f20 = (*(s32 *)((char *)(temp_s3) + 0x1C)) + D_800BE9A4;
        spD8 = var_f20 * temp_f14;
        (*(s32 *)((char *)&(spC8) + 0x0)) = (*(s32 *)((char *)(temp_s3) + 0x10));
        (*(s32 *)((char *)&(spC8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
        (*(s32 *)((char *)&(spC8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
        temp_f0_2 = (*(s32 *)((char *)(temp_s3) + 0x38));
        var_f22 = temp_f0_2 + ((*(s32 *)((char *)(temp_s3) + 0x3C)) * var_f20);
        if ((*(s32 *)((char *)(arg0) + 0x20)) == 7) {
            spA8 = -temp_f18 * spF4 * (*(s32 *)((char *)(temp_s3) + 0x4C));
            spAC = temp_f16 * spF4 * (*(s32 *)((char *)(temp_s3) + 0x4C));
        } else {
            spA8 = temp_f18 * spF4 * (*(s32 *)((char *)(temp_s3) + 0x4C));
            spAC = -temp_f16 * spF4 * (*(s32 *)((char *)(temp_s3) + 0x4C));
        }
        var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_v1 < 0) {
            var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        if (var_v1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
            var_a0 = var_v1 - 1;
            if ((*(s32 *)((char *)(arg0) + 0x2C)) != 0) {
                if (var_a0 < 0) {
                    var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v0_4 = (var_a0 * 0x24) + sp110;
                (*(f32 *)((char *)(temp_v0_4) + 0x1C)) = (f32) (((*(f32 *)((char *)(temp_v0_4) + 0x1C)) + spA8) * 0.5f);
                (*(f32 *)((char *)(temp_v0_4) + 0x20)) = (f32) (((*(f32 *)((char *)(temp_v0_4) + 0x20)) + spAC) * 0.5f);
            }
        }
        sp84 = temp_a1;
        sp7C = temp_f16 * temp_f14;
        temp_f26 = D_800A8CF8;
        sp74 = temp_f18 * temp_f14;
        sp78 = temp_f24 * temp_f14;
        sp70 = (temp_f0_2 - var_f22) * temp_f14;
        do {
            var_s2 = 1;
            temp_s0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24) + sp110;
            (*(f32 *)((char *)(temp_s0_2) + 0x1C)) = (f32) (*(f32 *)((char *)&(spA8) + 0x0));
            (*(f32 *)((char *)(temp_s0_2) + 0x20)) = (f32) (*(f32 *)((char *)&(spA8) + 0x4));
            (*(s32 *)((char *)(temp_s0_2) + 0x0)) = spC8;
            (*(s32 *)((char *)(temp_s0_2) + 0x4)) = spD0;
            (*(s32 *)((char *)(temp_s0_2) + 0xC)) = var_f22;
            (*(s16 *)((char *)(temp_s0_2) + 0x18)) = (s16) (*(s16 *)((char *)(temp_s3) + 0x2E));
            (*(s16 *)((char *)(temp_s0_2) + 0x10)) = (s16) (*(s16 *)((char *)(temp_s3) + 0x30));
            (*(s32 *)((char *)(temp_s0_2) + 0x14)) = 0xFF;
            (*(s16 *)((char *)(temp_s0_2) + 0x12)) = (s16) (*(s16 *)((char *)(temp_s3) + 0x32));
            (*(s16 *)((char *)(temp_s0_2) + 0x16)) = (s16) (*(s16 *)((char *)(temp_s3) + 0x28));
            (*(s16 *)((char *)(temp_s3) + 0x28)) = (s16) ((*(s16 *)((char *)(temp_s3) + 0x28)) + (*(s16 *)((char *)(temp_s3) + 0x44)) + (random_u32() % (u32) ((*(s16 *)((char *)(temp_s3) + 0x45)) + 1)));
            (*(f32 *)((char *)(temp_s0_2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x0)) + ((*(f32 *)((char *)(temp_s0_2) + 0x1C)) * var_f20));
            (*(f32 *)((char *)(temp_s0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x4)) + ((*(f32 *)((char *)(temp_s0_2) + 0x20)) * var_f20));
            sp8C = (*(s32 *)((char *)(temp_s0_2) + 0x0));
            temp_f0_3 = (*(s32 *)((char *)(temp_s4) + 0x118));
            if (temp_f0_3 < D_800A8CFC) {
                sp90 = (*(s32 *)((char *)(temp_s4) + 0x18)) + 100.0f;
            } else {
                sp90 = temp_f0_3 + 100.0f;
            }
            temp_f0_4 = fabsf(sp8C);
            sp94 = (*(s32 *)((char *)(temp_s0_2) + 0x4));
            if ((temp_f26 < temp_f0_4) || (temp_f26 < fabsf(sp94))) {
                goto block_41;
            }
            if (func_15045800(&sp8C, 0, sp90 - 200.0f, (char *)(arg0) + 0x60) != 0) {
                (*(f32 *)((char *)(temp_s0_2) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x60));
            } else {
block_41:
                var_s2 = 0;
            }
            if (var_s2 != 0) {
                (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                    (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
                }
                temp_v1 = (*(s32 *)((char *)(arg0) + 0x2D));
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
                if (temp_v1 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                    (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1 + 1);
                    if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                        (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                    }
                    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                }
            }
            spC8 += sp7C;
            spCC += sp78;
            var_f22 += sp70;
            spD0 += sp74;
            var_f20 -= spD8;
            (*(f32 *)((char *)(temp_s3) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s3) + 0xC)) > 1.0f);
        (*(s32 *)((char *)(sp84) + 0x0)) = (void *) (*(s32 *)((char *)&(spC8) + 0x0));
        (*(s32 *)((char *)(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(spC8) + 0x4));
        (*(s32 *)((char *)(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(spC8) + 0x8));
        (*(s32 *)((char *)(temp_s3) + 0x1C)) = var_f20;
    }
block_51:
    return 1;
}

void *func_1519FE6C(void *arg0, void *arg1, s32 arg2) {
    void *spEC;
    void *spE8;
    s32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spA4;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    s8 sp91;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f14;
    f32 var_f16;
    f32 var_f20;
    f32 var_f22;
    s16 *temp_t1_2;
    s16 *temp_t5;
    s16 var_a1;
    s16 var_a3;
    s16 var_t2;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t4;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_t0;
    s32 var_t3;
    s32 var_t7;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s8 var_v0;
    u8 var_a0;
    u8 var_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_t1;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;
    void *var_v0_3;

    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) * 0x30) + 0x120, &spEC, 0);
        if (spEC != NULL) {
            temp_t1 = (*(s32 *)((char *)(arg0) + 0x98));
            temp_t4 = (*(s32 *)((char *)(arg0) + 0x94));
            sp91 = 1;
            var_a1 = 0;
            if ((*(s32 *)((char *)(temp_t1) + 0x4)) & 2) {
                var_a0 = (*(s32 *)((char *)(temp_t1) + 0x40));
                var_v0 = (*(s32 *)((char *)(arg0) + 0x2D));
loop_4:
                temp_lo = var_v0 * 0x24;
                var_v0 += 1;
                (*(s32 *)((char *)((temp_t4 + temp_lo)) + 0x14)) = var_a1;
                var_a1 = (var_a1 + (*(s32 *)((char *)(temp_t1) + 0x41))) & 0xFF;
                if (var_v0 == (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_v0 = 0;
                }
                var_a0 = (u8) (s16) (var_a0 - 1);
                if ((var_a0 != 0) && (var_v0 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_4;
                }
            }
            if ((*(s32 *)((char *)(temp_t1) + 0x4)) & 4) {
                var_a2 = 0;
                var_a1_2 = (*(s32 *)((char *)(temp_t1) + 0x42));
                var_v0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
loop_12:
                temp_lo_2 = var_v0_2 * 0x24;
                var_v0_2 -= 1;
                temp_v1 = temp_t4 + temp_lo_2;
                (*(s16 *)((char *)(temp_v1) + 0x14)) = (s16) ((s32) ((*(s16 *)((char *)(temp_v1) + 0x14)) * var_a2) >> 8);
                var_a1_2 = (u8) (s16) (var_a1_2 - 1);
                var_a2 = (var_a2 + (*(s32 *)((char *)(temp_t1) + 0x43))) & 0xFF;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if ((var_a1_2 != 0) && (var_v0_2 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_12;
                }
            }
            spE8 = temp_t1;
            spE4 = temp_t4;
            var_s0 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142B7C(func_15142E24(var_s0, &D_80090E0C, 0, 0, 0, 0, 0x39, 0, 0, &sp91, 0x3E), 1, 0x160600), (*(s32 *)((char *)(spE8) + 0x2A)), (*(s32 *)((char *)(spE8) + 0x2B)), (*(s32 *)((char *)(spE8) + 0x2C)), 0xFF, &sp91), 0, 0, 0xFF, 0xFF, 0xFF, 0, &sp91), 7, &sp91), D_800D2C9C | 0x80000 | 0x2CA0, 0x5049D8, &sp91);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_t0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(spCC) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                var_v0_3 = spE4 + (var_t0 * 0x24);
                (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                var_t2 = (*(s32 *)((char *)(var_v0_3) + 0x16));
                spA4 = (*(s32 *)((char *)(spE8) + 0x38));
                var_t7 = (s32) ((*(s32 *)((char *)(var_v0_3) + 0x14)) * (*(s32 *)((char *)(var_v0_3) + 0x10))) >> 8;
            } else {
                var_a0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a0_2 < 0) {
                    var_a0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_t0 = var_a0_2 - 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v1_2 = spE4 + (var_a0_2 * 0x24);
                spCC = (*(s32 *)((char *)(temp_v1_2) + 0x0));
                var_v0_3 = spE4 + (var_t0 * 0x24);
                spD0 = (*(s32 *)((char *)(temp_v1_2) + 0x8));
                spD4 = (*(s32 *)((char *)(temp_v1_2) + 0x4));
                var_t2 = (*(s32 *)((char *)(temp_v1_2) + 0x16));
                spA4 = (*(s32 *)((char *)(temp_v1_2) + 0xC));
                var_t7 = (s32) ((*(s32 *)((char *)(temp_v1_2) + 0x14)) * (*(s32 *)((char *)(temp_v1_2) + 0x10))) >> 8;
            }
            spD8 = (*(s32 *)((char *)(var_v0_3) + 0x0));
            spDC = (*(s32 *)((char *)(var_v0_3) + 0x8));
            temp_f12 = spD8 - spCC;
            var_v1 = 2;
            spE0 = (*(s32 *)((char *)(var_v0_3) + 0x4));
            temp_f2 = spE0 - spD4;
            var_a3 = (*(s32 *)((char *)(var_v0_3) + 0x16));
            var_f16 = (*(s32 *)((char *)(var_v0_3) + 0xC));
            var_f22 = temp_f2;
            var_f20 = temp_f12;
            var_t3 = (s32) ((*(s32 *)((char *)(var_v0_3) + 0x14)) * (*(s32 *)((char *)(var_v0_3) + 0x10))) >> 8;
            if ((D_800A8D00 < fabsf(temp_f12)) || (D_800A8D00 < fabsf(temp_f2))) {
                var_f14 = 1.0f / sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2));
            } else {
                var_f14 = 1.0f;
            }
            sp94 = (*(s32 *)((char *)(spE8) + 0x46));
            sp98 = (*(s32 *)((char *)(spE8) + 0x46)) + (*(s32 *)((char *)(spE8) + 0x4A));
            if (sp98 < sp94) {
                temp_t9 = sp94 % 1024;
                sp94 = (s16) temp_t9;
                (*(s16 *)((char *)(spE8) + 0x46)) = (s16) temp_t9;
                sp98 = (*(s32 *)((char *)(spE8) + 0x46)) + (*(s32 *)((char *)(spE8) + 0x4A));
            }
            temp_f0 = -var_f22 * var_f14 * spA4;
            sp96 = (s16) ((s32) (sp98 + sp94) >> 1);
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x20));
            if (temp_v0 == 6) {
                var_v0_4 = 0;
            } else {
                var_v1 = 0;
                if (temp_v0 == 7) {
                    var_v0_4 = 2;
                    var_v1 = 0;
                } else {
                    var_v0_4 = 2;
                }
            }
            (*(s16 *)((char *)(spEC) + 0x0)) = (s16) (s32) (spCC + temp_f0);
            temp_f2_2 = var_f20 * var_f14 * spA4;
            temp_t5 = &(&sp94)[var_v0_4];
            (*(s16 *)((char *)(spEC) + 0x2)) = (s16) (s32) spD0;
            (*(s16 *)((char *)(spEC) + 0x4)) = (s16) (s32) (spD4 + temp_f2_2);
            (*(s32 *)((char *)(spEC) + 0x8)) = var_t2;
            (*(s16 *)((char *)(spEC) + 0xA)) = (s16) *temp_t5;
            (*(s32 *)((char *)(spEC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spEC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spEC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(spEC) + 0xF)) = 0;
            (*(s32 *)((char *)(spEC) + 0x6)) = 0;
            temp_t7 = (char *)(spEC) + 0x10;
            spEC = temp_t7;
            (*(s16 *)((char *)(spEC) + 0x10)) = (s16) (s32) spCC;
            (*(s16 *)((char *)(spEC) + 0x2)) = (s16) (s32) spD0;
            (*(s16 *)((char *)(spEC) + 0x4)) = (s16) (s32) spD4;
            (*(s32 *)((char *)(spEC) + 0x8)) = var_t2;
            (*(s32 *)((char *)(spEC) + 0xA)) = sp96;
            (*(s32 *)((char *)(spEC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spEC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(temp_t7) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(spEC) + 0xF)) = (s8) var_t7;
            (*(s32 *)((char *)(spEC) + 0x6)) = 0;
            temp_t7_2 = (char *)(spEC) + 0x10;
            spEC = temp_t7_2;
            (*(s16 *)((char *)(spEC) + 0x10)) = (s16) (s32) (spCC - temp_f0);
            (*(s16 *)((char *)(temp_t7_2) + 0x2)) = (s16) (s32) spD0;
            (*(s32 *)((char *)(temp_t7_2) + 0x8)) = var_t2;
            temp_t1_2 = &(&sp94)[var_v1];
            (*(s16 *)((char *)(temp_t7_2) + 0x4)) = (s16) (s32) (spD4 - temp_f2_2);
            (*(s32 *)((char *)(temp_t7_2) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(temp_t7_2) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(temp_t7_2) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(temp_t7_2) + 0xF)) = 0;
            (*(s32 *)((char *)(temp_t7_2) + 0x6)) = 0;
            (*(s16 *)((char *)(temp_t7_2) + 0xA)) = (s16) *temp_t1_2;
            spEC = (char *)(temp_t7_2) + 0x10;
            do {
                temp_f0_2 = -var_f22 * var_f14 * var_f16;
                (*(s16 *)((char *)(spEC) + 0x0)) = (s16) (s32) (spD8 + temp_f0_2);
                temp_f2_3 = var_f20 * var_f14 * var_f16;
                (*(s16 *)((char *)(spEC) + 0x2)) = (s16) (s32) spDC;
                (*(s16 *)((char *)(spEC) + 0x4)) = (s16) (s32) (spE0 + temp_f2_3);
                (*(s32 *)((char *)(spEC) + 0x8)) = var_a3;
                (*(s16 *)((char *)(spEC) + 0xA)) = (s16) *temp_t5;
                (*(s32 *)((char *)(spEC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spEC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spEC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spEC) + 0xF)) = 0;
                (*(s32 *)((char *)(spEC) + 0x6)) = 0;
                temp_t7_3 = (char *)(spEC) + 0x10;
                spEC = temp_t7_3;
                (*(s16 *)((char *)(spEC) + 0x10)) = (s16) (s32) spD8;
                (*(s16 *)((char *)(spEC) + 0x2)) = (s16) (s32) spDC;
                (*(s16 *)((char *)(spEC) + 0x4)) = (s16) (s32) spE0;
                (*(s32 *)((char *)(spEC) + 0x8)) = var_a3;
                (*(s32 *)((char *)(spEC) + 0xA)) = sp96;
                (*(s32 *)((char *)(spEC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spEC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(temp_t7_3) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(spEC) + 0xF)) = (s8) var_t3;
                (*(s32 *)((char *)(spEC) + 0x6)) = 0;
                temp_t7_4 = (char *)(spEC) + 0x10;
                spEC = temp_t7_4;
                (*(s16 *)((char *)(spEC) + 0x10)) = (s16) (s32) (spD8 - temp_f0_2);
                (*(s16 *)((char *)(spEC) + 0x2)) = (s16) (s32) spDC;
                (*(s16 *)((char *)(spEC) + 0x4)) = (s16) (s32) (spE0 - temp_f2_3);
                (*(s32 *)((char *)(spEC) + 0x8)) = var_a3;
                (*(s16 *)((char *)(spEC) + 0xA)) = (s16) *temp_t1_2;
                (*(s32 *)((char *)(spEC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spEC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(temp_t7_4) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spEC) + 0xF)) = 0;
                (*(s32 *)((char *)(spEC) + 0x6)) = 0;
                spEC = (char *)(spEC) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x0100600C;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spEC) - 0x60);
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000608;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05000802;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                temp_s0_3 = (char *)(temp_s0_2) + 8;
                (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0x0502080A;
                (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0;
                temp_s0_4 = (char *)(temp_s0_3) + 8;
                (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0x05020A04;
                (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_4) + 8;
                temp_a0 = var_t0;
                var_t0 -= 1;
                if (var_t0 < 0) {
                    var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)&(spCC) + 0x0)) = (*(s32 *)((char *)&(spD8) + 0x0));
                    (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)&(spD8) + 0x4));
                    temp_v0_2 = spE4 + (var_t0 * 0x24);
                    (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)&(spD8) + 0x8));
                    spD8 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                    spDC = (*(s32 *)((char *)(temp_v0_2) + 0x8));
                    spE0 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
                    temp_f12_2 = spD8 - spCC;
                    var_a3 = (*(s32 *)((char *)(temp_v0_2) + 0x16));
                    temp_f2_4 = spE0 - spD4;
                    var_f20 = temp_f12_2;
                    var_f22 = temp_f2_4;
                    var_t3 = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x14)) * (*(s32 *)((char *)(temp_v0_2) + 0x10))) >> 8;
                    if ((spD8 != spCC) || (temp_f2_4 != 0.0f)) {
                        var_f14 = 1.0f / sqrtf((temp_f12_2 * temp_f12_2) + (temp_f2_4 * temp_f2_4));
                    } else {
                        var_f14 = 1.0f;
                    }
                    var_f16 = (*(s32 *)((char *)(temp_v0_2) + 0xC));
                }
            } while (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_151A084C(void *arg0) {
    void *sp28;
    u8 sp23;
    void *sp18;
    s32 var_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    var_v1 = 0;
    temp_a2 = (char *)(arg0) + 0x28;
    temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x18));
    temp_t0 = (char *)(temp_v0) + 0x58;
    if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 0) {
        var_v1 = 1;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
    if ((*(s32 *)((char *)(temp_a0) + 0x1C)) != (*(s32 *)((char *)(temp_a1) + 0x3B))) {
        var_v1 = 1;
    }
    if ((var_v1 == 0) && ((*(s32 *)((char *)(temp_a1) + 0x1D4)) != 0)) {
        sp23 = 1;
        sp28 = temp_t0;
        sp18 = temp_a2;
        temp_v0_2 = func_1519F1C8(temp_a0, (*(s32 *)((char *)(temp_a2) + 0x4)));
        var_v1 = 1;
        if ((*(s32 *)((char *)(temp_a2) + 0x4)) == 6) {
            (*(s32 *)((char *)(temp_v0) + 0x58)) = temp_v0_2;
        } else {
            (*(s32 *)((char *)(temp_t0) + 0x8)) = temp_v0_2;
        }
    }
    if (var_v1 != 0) {
        func_151A0928(arg0);
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
    }
}

void func_151A0928(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28)) + 0x58;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) == 6) {
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
        return;
    }
    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0;
}

void func_151A0950(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0xA) {
        temp_v0 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
        if ((temp_v0 != NULL) && (((*(s32 *)((char *)(temp_v0) + 0x18)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x1C)) == (*(s32 *)((char *)(arg1) + 0x4))))) {
            func_1519F48C((void *) temp_t6);
        }
    }
}

void func_151A09B4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x18));
    if ((temp_t6 == 0) && (((char *)(temp_v0) == (char *)(*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x3B)) == (*(s32 *)((char *)(arg1) + 0x4))))) {
        func_151A0928((void *) temp_t6);
        func_1516972C(arg0);
    }
}

void func_151A0A10(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp48;
    s8 sp44;
    f32 sp40;
    f32 sp3C;
    void *sp38;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        sp38 = (*(s32 *)((char *)(arg0) + 0x14));
        sp40 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (D_800C35EA != 1) {
            sp3C = (*(s32 *)((char *)(arg0) + 0x180));
            sp48 = 0.0f;
            temp_v0 = func_1510F8CC((*(s32 *)((char *)(arg0) + 0x184)));
            switch (temp_v0) {                      /* irregular */
            default:
                sp44 = 0;
                break;
            case 10:
                sp44 = 0;
                break;
            case 15:
            case 17:
                sp44 = 1;
                break;
            }
            temp_v0_2 = func_151491F4(arg1, -1, 1, 1, 0, 0x14, (s32) arg2, arg3);
            if (temp_v0_2 != 0) {
                memcpy(temp_v0_2 + 0x28, &sp38, 0x14);
            }
        }
    }
}

void func_151A0AF8(void *arg0) {
    void *temp_s0;

    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + (D_800A8D10 * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x38)) > 1.0f) {
        temp_s0 = (char *)(arg0) + 0x28;
        do {
            func_1514C678((*(s32 *)((char *)(arg0) + 0x28)), (*(s32 *)((char *)(temp_s0) + 0x4)), (*(s32 *)((char *)(temp_s0) + 0x8)), (random_float() * 25.0f) + 15.0f, 0, 0xFF, 5, 4, (s32) (*(s32 *)((char *)(temp_s0) + 0xC)), 0.0f, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)));
            (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x10)) > 1.0f);
    }
}

s32 func_151A0C0C(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg8, s32 arg11, u8 arg14) {
    s16 sp7C;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    u8 sp76;
    u8 sp75;
    u8 sp74;
    s8 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s16 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    void * *sp48;
    s16 sp46;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_t0;
    s16 temp_t6;
    s32 temp_f10;
    u8 temp_a0;

    temp_t6 = (random_u32() % 15U) - 0x3F;
    sp46 = temp_t6;
    sp40 = func_151423D8(temp_t6 & 0xFF);
    sp3C = func_151423D8((sp46 - 0x40) & 0xFF);
    sp38 = func_151423D8(arg8);
    sp34 = func_151423D8(((s32) arg8 - 0x40) & 0xFF);
    temp_f2 = (random_float() * D_800A8D14) + D_800A8D18;
    temp_f12 = temp_f2 * sp40;
    sp5E = (s16) (s32) (temp_f12 * sp34);
    sp68 = (s16) (s32) (-temp_f2 * sp3C);
    sp60 = (s16) (s32) (temp_f12 * sp38);
    sp6A = (random_u32(temp_f12) % 41U) - 0x82;
    sp72 = (random_u32() % 3U) + 6;
    temp_a0 = *(&D_8008F8D0 + arg11);
    temp_t0 = (random_u32() % 451U) + 0xFA;
    temp_f10 = (s32) (arg2 * 256.0f);
    sp6C = temp_t0;
    sp78 = 0;
    sp79 = 0;
    sp7A = 0;
    sp77 = 0xFF;
    sp67 = -1;
    sp7C = 0;
    sp54 = 0;
    sp56 = 0;
    sp6E = temp_t0;
    sp58 = (s16) (s32) arg2;
    sp74 = temp_a0;
    sp75 = temp_a0;
    sp76 = temp_a0;
    sp5A = (s16) (s32) arg3;
    sp5C = (s16) (s32) arg4;
    sp64 = (s8) temp_f10;
    sp65 = (s8) temp_f10;
    sp66 = (s8) temp_f10;
    switch (arg11) {                                /* irregular */
    case 0:
        sp48 = &D_800918A0;
        break;
    case 1:
        sp48 = &D_8009187C;
        break;
    }
    sp70 = 0xC8;
    func_15167D84(&sp48, 0.0f, NULL, -1, (s32) arg14, 1);
    return 1;
}

void func_151A0E40(f32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;

    temp_a0 = arg3 & 0xFF;
    func_151A11CC(temp_a0, arg2, 0x43230000, D_800A8D20);
}

void func_151A0F28(f32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;

    temp_a0 = arg3 & 0xFF;
    func_151A11CC(temp_a0, arg2, 0x43230000, D_800A8D24);
}

void func_151A1010(s32 arg2, s16 arg3, f32 arg4, f32 arg5, u8 arg6, s32 arg7) {
    s16 temp_v0;
    s16 var_t4;
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f4;
    s32 temp_f8;

    temp_v0 = arg3 - 0x20;
    var_t4 = temp_v0;
    if (temp_v0 <= 0) {
        var_t4 = 1;
    }
    temp_f18 = (s32) (70.0f * arg5);
    temp_f8 = (s32) (30.0f * arg5);
    temp_f4 = (s32) (D_800A8D28 * arg4);
    temp_f10 = (s32) (100.0f * arg4);
    func_151A11CC((s32) (s16) temp_f18, (f32) (s16) temp_f8, arg2, 250.0f * arg4);
}

void func_151A11CC(f32 arg0, f32 arg1, s32 arg2, f32 arg3) {

}

void func_151A11E4(void *arg0) {
    u16 sp108;
    s8 sp106;
    s8 sp105;
    s8 sp104;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s8 spFE;
    s16 spFC;
    s16 spFA;
    s16 spF8;
    s16 spF6;
    s16 spF4;
    s8 spF3;
    s8 spF2;
    s8 spF1;
    s8 spF0;
    s16 spEC;
    s16 spEA;
    s16 spE8;
    s16 spE6;
    s16 spE4;
    s16 spE2;
    s16 spE0;
    s32 spD8;
    void * *spD4;
    s16 spD0;
    s16 spCE;
    s16 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s16 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    f32 sp90;
    f32 sp8C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s16 temp_a1;
    s16 temp_t2;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800BE9A4));
    temp_s0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x38)) > 1.0f) {
        sp100 = 0xFF;
        sp101 = 0xFF;
        sp102 = 0xFF;
        sp104 = 0;
        sp105 = 0;
        sp106 = 0;
        spF3 = 0x10;
        sp108 = 0x120;
        spD8 = 0xC0001;
        spE0 = 0;
        spD4 = &D_80090D34;
        spEA = 0;
        spF4 = 0;
        spEC = 0;
        spF6 = 0;
        spFE = 0;
        sp103 = 0;
        spFA = 0x7D0;
        spF8 = 0x7D0;
        do {
            temp_s1 = random_u32() & 0xFF;
            temp_s2 = random_u32() & 0xFF;
            temp_f20 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f22 = func_151423D8(temp_s1 & 0xFF);
            temp_f24 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f26 = func_151423D8(temp_s2 & 0xFF);
            temp_f2 = random_float() * (*(s32 *)((char *)(temp_s0) + 0xC));
            temp_f12 = temp_f2 * temp_f26;
            temp_f30 = (*(s32 *)((char *)(arg0) + 0x28)) + (temp_f12 * temp_f20);
            sp8C = (*(s32 *)((char *)(temp_s0) + 0x4)) - (temp_f2 * temp_f24);
            sp90 = (*(s32 *)((char *)(temp_s0) + 0x8)) + (temp_f12 * temp_f22);
            if (random_u32(temp_f12) & 1) {
                sp108 |= 4;
            }
            if (random_u32() & 1) {
                sp108 |= 8;
            }
            spE2 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1A)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x18));
            temp_a1 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1E)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x1C));
            spFC = (*(s32 *)((char *)&(D_80090B60) + 0x1D8)) * (0x100 / spE2);
            temp_a0 = spFC >> 2;
            temp_t2 = spFC - temp_a0;
            temp_v1 = spFC >> 1;
            spBA = (s16) temp_v1;
            spB4 = temp_t2;
            spB0 = (s16) (0xFF / (s32) (spFC - temp_t2));
            spB6 = (s16) (temp_a1 / (s32) (spFC - spBA));
            spCA = (s16) temp_a0;
            spCC = (s16) (0xFF / (s16) temp_a0);
            spCE = (s16) temp_v1;
            spB2 = spFC;
            spB8 = spFC;
            spD0 = (s16) (temp_a1 / (s16) temp_v1);
            spE4 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x28));
            spE6 = (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x4));
            spE8 = (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x8));
            spF0 = (s8) (s32) ((*(s8 *)((char *)(arg0) + 0x28)) * 256.0f);
            spF2 = (s8) (s32) ((*(s8 *)((char *)(temp_s0) + 0x4)) * 256.0f);
            spBC = (s16) temp_v1;
            temp_f0 = 1.0f / (f32) (s16) temp_v1;
            spF1 = (s8) (s32) ((*(s8 *)((char *)(temp_s0) + 0x8)) * 256.0f);
            temp_f14 = (temp_f30 - (*(s32 *)((char *)(arg0) + 0x28))) * temp_f0;
            temp_f0_2 = (sp8C - (*(s32 *)((char *)(temp_s0) + 0x4))) * temp_f0;
            temp_f2_2 = (sp90 - (*(s32 *)((char *)(temp_s0) + 0x8))) * temp_f0;
            spBE = (s16) (s32) temp_f14;
            spC0 = (s16) (s32) temp_f0_2;
            spC2 = (s16) (s32) temp_f2_2;
            spC4 = (s32) (temp_f14 * 256.0f) & 0xFF;
            spC6 = (s32) (temp_f0_2 * 256.0f) & 0xFF;
            spC8 = (s32) (temp_f2_2 * 256.0f) & 0xFF;
            temp_v0 = func_15167D84((*(void ** *)&temp_f0), temp_f14, &spD4, 0, 0x22, -1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x50, (void **) &spB0, 0x22);
            }
            (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x10)) > 1.0f);
    }
}

void func_151A175C(void *arg0) {
    s16 temp_lo;
    s16 temp_lo_2;
    s16 temp_v1;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    if ((*(s32 *)((char *)(arg0) + 0x54)) < temp_v1) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (((*(s8 *)((char *)(((char *)(arg0) + 0x50)) + 0x2)) - temp_v1) * (*(s8 *)((char *)(arg0) + 0x50)));
    }
    temp_v0 = (char *)(arg0) + 0x50;
    if ((*(s32 *)((char *)(temp_v0) + 0xA)) < temp_v1) {
        temp_lo = ((*(s32 *)((char *)(temp_v0) + 0x8)) - temp_v1) * (*(s32 *)((char *)(temp_v0) + 0x6));
        (*(s32 *)((char *)(arg0) + 0x36)) = temp_lo;
        (*(s32 *)((char *)(arg0) + 0x34)) = temp_lo;
    }
    if ((*(s32 *)((char *)(temp_v0) + 0xC)) < temp_v1) {
        temp_t7 = (((*(s32 *)((char *)(arg0) + 0x20)) << 8) | (*(s32 *)((char *)(arg0) + 0x2C))) + ((((*(s32 *)((char *)(temp_v0) + 0xE)) << 8) | (*(s32 *)((char *)(temp_v0) + 0x14))) * D_800BE9E4);
        (*(s16 *)((char *)(arg0) + 0x20)) = (s16) (temp_t7 >> 8);
        (*(u8 *)((char *)(arg0) + 0x2C)) = (u8) temp_t7;
        temp_t6 = (((*(s32 *)((char *)(arg0) + 0x22)) << 8) | (*(s32 *)((char *)(arg0) + 0x2E))) + ((((*(s32 *)((char *)(temp_v0) + 0x10)) << 8) | (*(s32 *)((char *)(temp_v0) + 0x16))) * D_800BE9E4);
        (*(s16 *)((char *)(arg0) + 0x22)) = (s16) (temp_t6 >> 8);
        (*(u8 *)((char *)(arg0) + 0x2E)) = (u8) temp_t6;
        temp_t5 = (((*(s32 *)((char *)(arg0) + 0x24)) << 8) | (*(s32 *)((char *)(arg0) + 0x2D))) + ((((*(s32 *)((char *)(temp_v0) + 0x12)) << 8) | (*(s32 *)((char *)(temp_v0) + 0x18))) * D_800BE9E4);
        (*(s16 *)((char *)(arg0) + 0x24)) = (s16) (temp_t5 >> 8);
        (*(u8 *)((char *)(arg0) + 0x2D)) = (u8) temp_t5;
    }
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(temp_v0) + 0x1A))) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) ((*(s8 *)((char *)(arg0) + 0x38)) * (*(s8 *)((char *)(temp_v0) + 0x1C)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(temp_v0) + 0x1E))) {
        temp_lo_2 = (*(s32 *)((char *)(arg0) + 0x38)) * (*(s32 *)((char *)(temp_v0) + 0x20));
        (*(s32 *)((char *)(arg0) + 0x36)) = temp_lo_2;
        (*(s32 *)((char *)(arg0) + 0x34)) = temp_lo_2;
    }
}

void func_151A18DC(void *arg0) {
    s16 sp52;
    s16 sp50;
    s16 sp4E;
    s16 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    void *sp34;
    s32 temp_v0;

    (*(s32 *)((char *)&(sp34) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x28));
    (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x2C));
    (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x30));
    sp44 = 0.0f;
    sp40 = (*(s32 *)((char *)(arg0) + 0x34));
    sp48 = (*(s32 *)((char *)(arg0) + 0x38));
    sp4C = (*(s32 *)((char *)(arg0) + 0x3E));
    sp4E = (*(s32 *)((char *)(arg0) + 0x40));
    sp50 = (*(s32 *)((char *)(arg0) + 0x42));
    sp52 = (*(s32 *)((char *)(arg0) + 0x44));
    temp_v0 = func_151491F4((*(s32 *)((char *)(arg0) + 0x3C)), -1, 3, 1, 0, 0x20, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0x20);
    }
}

void func_151A1998(void *arg0) {
    u16 spE8;
    s8 spE6;
    s8 spE5;
    s8 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s8 spDE;
    s16 spDC;
    s16 spDA;
    s16 spD8;
    s16 spD6;
    s16 spD4;
    s8 spD3;
    s8 spD2;
    s8 spD1;
    s8 spD0;
    s16 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s16 spC4;
    s16 spC2;
    s16 spC0;
    s32 spB8;
    void * *spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    f32 sp80;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t5;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800BE9A4));
    temp_s0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x38)) > 1.0f) {
        spE0 = 0xFF;
        spE1 = 0xFF;
        spE2 = 0xFF;
        spE4 = 0;
        spE5 = 0;
        spE6 = 0;
        spD3 = 0x11;
        spE8 = 0x120;
        spB8 = 0xC0001;
        spC0 = 0;
        spB4 = &D_80090D34;
        spCA = 0;
        spD4 = 0;
        spCC = 0;
        spD6 = 0;
        spDE = 0;
        spE3 = 0;
        spD8 = 0x7D0;
        spDA = 0x7D0;
        do {
            temp_s1 = random_u32() & 0xFF;
            temp_s2 = random_u32() & 0xFF;
            temp_f20 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f22 = func_151423D8(temp_s1 & 0xFF);
            temp_f24 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f26 = func_151423D8(temp_s2 & 0xFF);
            temp_f2 = random_float() * (*(s32 *)((char *)(temp_s0) + 0xC));
            temp_f12 = temp_f2 * temp_f26;
            temp_f28 = (*(s32 *)((char *)(arg0) + 0x28)) + (temp_f12 * temp_f20);
            temp_f30 = (*(s32 *)((char *)(temp_s0) + 0x4)) - (temp_f2 * temp_f24);
            sp80 = (*(s32 *)((char *)(temp_s0) + 0x8)) + (temp_f12 * temp_f22);
            if (random_u32(temp_f12) & 1) {
                spE8 |= 4;
            }
            if (random_u32() & 1) {
                spE8 |= 8;
            }
            temp_t5 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1A)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x18));
            spC2 = temp_t5;
            temp_t1 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1E)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x1C));
            spDC = (*(s32 *)((char *)&(D_80090B60) + 0x1D8)) * (0x100 / temp_t5);
            temp_v1 = spDC >> 2;
            temp_t2 = spDC - temp_v1;
            temp_t0 = spDC >> 1;
            spAA = (s16) temp_t0;
            spA4 = temp_t2;
            spA0 = (s16) (0xFF / (s32) (spDC - temp_t2));
            spA2 = spDC;
            spA8 = spDC;
            spA6 = (s16) (temp_t1 / (s32) (spDC - spAA));
            spAC = (s16) temp_v1;
            spC6 = (s16) (s32) temp_f30;
            spAE = (s16) (0xFF / (s16) temp_v1);
            spB0 = (s16) temp_t0;
            spB2 = (s16) (temp_t1 / (s16) temp_t0);
            spC4 = (s16) (s32) temp_f28;
            spC8 = (s16) (s32) sp80;
            spD0 = (s8) (s32) (temp_f28 * 256.0f);
            spD2 = (s8) (s32) (temp_f30 * 256.0f);
            spD1 = (s8) (s32) (sp80 * 256.0f);
            temp_v0 = func_15167D84(&spB4, 0.0f, (void * **)0x14, -1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x50, (void **) &spA0, 0x14);
            }
            (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x10)) > 1.0f);
    }
}

void func_151A1E34(void *arg0) {
    s16 temp_lo;
    s16 temp_lo_2;
    s16 temp_v1;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    if ((*(s32 *)((char *)(arg0) + 0x54)) < temp_v1) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (((*(s8 *)((char *)(((char *)(arg0) + 0x50)) + 0x2)) - temp_v1) * (*(s8 *)((char *)(arg0) + 0x50)));
    }
    temp_v0 = (char *)(arg0) + 0x50;
    if ((*(s32 *)((char *)(temp_v0) + 0xA)) < temp_v1) {
        temp_lo = ((*(s32 *)((char *)(temp_v0) + 0x8)) - temp_v1) * (*(s32 *)((char *)(temp_v0) + 0x6));
        (*(s32 *)((char *)(arg0) + 0x36)) = temp_lo;
        (*(s32 *)((char *)(arg0) + 0x34)) = temp_lo;
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0xC))) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (temp_v1 * (*(s8 *)((char *)(temp_v0) + 0xE)));
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x10))) {
        temp_lo_2 = temp_v1 * (*(s32 *)((char *)(temp_v0) + 0x12));
        (*(s32 *)((char *)(arg0) + 0x36)) = temp_lo_2;
        (*(s32 *)((char *)(arg0) + 0x34)) = temp_lo_2;
    }
}

void func_151A1EE8(void *arg0) {
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    void *sp38;
    s32 temp_v0;

    (*(s32 *)((char *)&(sp38) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x28));
    (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x2C));
    (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x30));
    sp48 = 0.0f;
    sp44 = (*(s32 *)((char *)(arg0) + 0x34));
    sp4C = (*(s32 *)((char *)(arg0) + 0x38));
    sp50 = (*(s32 *)((char *)(arg0) + 0x3E));
    sp52 = (*(s32 *)((char *)(arg0) + 0x40));
    sp54 = (*(s32 *)((char *)(arg0) + 0x42));
    sp56 = (*(s32 *)((char *)(arg0) + 0x44));
    sp58 = (*(s32 *)((char *)(arg0) + 0x46));
    sp5A = (*(s32 *)((char *)(arg0) + 0x48));
    temp_v0 = func_151491F4((*(s32 *)((char *)(arg0) + 0x3C)), -1, 4, 1, 0, 0x24, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 0x24);
    }
}

void func_151A1FB4(void *arg0) {
    u16 spF8;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s8 spF3;
    s8 spF2;
    s8 spF1;
    s8 spF0;
    s8 spEE;
    s16 spEC;
    s16 spEA;
    s16 spE8;
    s16 spE6;
    s16 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s16 spDC;
    s16 spDA;
    s16 spD8;
    s16 spD6;
    s16 spD4;
    s16 spD2;
    s16 spD0;
    s32 spC8;
    void * *spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    f32 sp88;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s16 temp_a1;
    s16 temp_t0;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800BE9A4));
    temp_s0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x38)) > 1.0f) {
        spF0 = 5;
        spF1 = 0;
        spF2 = 0;
        spF4 = 0;
        spF5 = 0;
        spF6 = 0;
        spE3 = 0x12;
        spF8 = 0x120;
        spC8 = 0xC0001;
        spD0 = 0;
        spC4 = &D_80090D34;
        spDA = 0;
        spE4 = 0;
        spDC = 0;
        spE6 = 0;
        spEE = 0;
        spF3 = 0;
        spEA = 0x7D0;
        spE8 = 0x7D0;
        do {
            temp_s1 = random_u32() & 0xFF;
            temp_s2 = random_u32() & 0xFF;
            temp_f20 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f22 = func_151423D8(temp_s1 & 0xFF);
            temp_f24 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f26 = func_151423D8(temp_s2 & 0xFF);
            temp_f2 = random_float() * (*(s32 *)((char *)(temp_s0) + 0xC));
            temp_f12 = temp_f2 * temp_f26;
            temp_f28 = (*(s32 *)((char *)(arg0) + 0x28)) + (temp_f12 * temp_f20);
            temp_f30 = (*(s32 *)((char *)(temp_s0) + 0x4)) - (temp_f2 * temp_f24);
            sp88 = (*(s32 *)((char *)(temp_s0) + 0x8)) + (temp_f12 * temp_f22);
            if (random_u32(temp_f12) & 1) {
                spF8 |= 4;
            }
            if (random_u32() & 1) {
                spF8 |= 8;
            }
            spD2 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1A)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x18));
            temp_a1 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1E)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x1C));
            spEC = (*(s32 *)((char *)&(D_80090B60) + 0x1D8)) * (0x100 / spD2);
            temp_a0 = spEC >> 2;
            temp_t0 = spEC - temp_a0;
            temp_v1 = spEC >> 1;
            spAC = temp_t0;
            spA8 = (s16) (0xFF / (s32) (spEC - temp_t0));
            spB2 = (s16) temp_v1;
            spAE = (s16) (temp_a1 / (s32) (spEC - (s16) temp_v1));
            spB4 = (s16) temp_v1;
            spB6 = (s16) (0xFF / temp_v1);
            spB8 = (s16) temp_a0;
            spBA = (s16) (0xFF / temp_a0);
            spBC = (s16) temp_v1;
            spAA = spEC;
            spB0 = spEC;
            spBE = (random_u32((f32) temp_a0, temp_a1) % (u32) ((*(f32 *)((char *)(temp_s0) + 0x22)) + 1)) + (*(f32 *)((char *)(temp_s0) + 0x20));
            spC0 = (s16) (spEC >> 1);
            spC2 = (random_u32() % 81U) + 0x50;
            spD4 = (s16) (s32) temp_f28;
            spD6 = (s16) (s32) temp_f30;
            spD8 = (s16) (s32) sp88;
            spE0 = (s8) (s32) (temp_f28 * 256.0f);
            spE2 = (s8) (s32) (temp_f30 * 256.0f);
            spE1 = (s8) (s32) (sp88 * 256.0f);
            temp_v0 = func_15167D84(&spC4, 0.0f, (void * **)0x1C, -1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x50, (void **) &spA8, 0x1C);
            }
            (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x10)) > 1.0f);
    }
}

void func_151A24A8(void *arg0) {
    s16 temp_lo;
    s16 temp_v1;
    s32 temp_lo_2;
    s8 temp_lo_3;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    if ((*(s32 *)((char *)(arg0) + 0x54)) < temp_v1) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (((*(s8 *)((char *)(((char *)(arg0) + 0x50)) + 0x2)) - temp_v1) * (*(s8 *)((char *)(arg0) + 0x50)));
    }
    temp_v0 = (char *)(arg0) + 0x50;
    if ((*(s32 *)((char *)(temp_v0) + 0xA)) < temp_v1) {
        temp_lo = ((*(s32 *)((char *)(temp_v0) + 0x8)) - temp_v1) * (*(s32 *)((char *)(temp_v0) + 0x6));
        (*(s32 *)((char *)(arg0) + 0x36)) = temp_lo;
        (*(s32 *)((char *)(arg0) + 0x34)) = temp_lo;
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x10))) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (temp_v1 * (*(s8 *)((char *)(temp_v0) + 0x12)));
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x14))) {
        temp_lo_2 = (*(s32 *)((char *)(temp_v0) + 0x16)) * D_800BE9E4;
        (*(s16 *)((char *)(arg0) + 0x34)) = (s16) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_lo_2);
        (*(s16 *)((char *)(arg0) + 0x36)) = (s16) ((*(s16 *)((char *)(arg0) + 0x36)) + temp_lo_2);
    }
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(temp_v0) + 0xC))) {
        (*(s32 *)((char *)(arg0) + 0x2F)) = 0x13;
        (*(u16 *)((char *)(arg0) + 0x44)) = (u16) ((*(u16 *)((char *)(arg0) + 0x44)) | 0x101);
        temp_lo_3 = (*(s32 *)((char *)(arg0) + 0x38)) * (*(s32 *)((char *)(temp_v0) + 0xE));
        (*(s32 *)((char *)(arg0) + 0x14)) = 0x520003;
        (*(s32 *)((char *)(arg0) + 0x42)) = temp_lo_3;
        (*(s32 *)((char *)(arg0) + 0x41)) = temp_lo_3;
        (*(s32 *)((char *)(arg0) + 0x40)) = temp_lo_3;
    }
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(temp_v0) + 0x18))) {
        (*(s16 *)((char *)(arg0) + 0x32)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x1A));
        (*(s32 *)((char *)(temp_v0) + 0x18)) = -0x270F;
    }
}

void func_151A25E0(void *arg0) {
    s16 temp_lo;
    s16 temp_v1;
    s32 temp_lo_2;
    s8 temp_lo_3;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    if ((*(s32 *)((char *)(arg0) + 0x54)) < temp_v1) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (((*(s8 *)((char *)(((char *)(arg0) + 0x50)) + 0x2)) - temp_v1) * (*(s8 *)((char *)(arg0) + 0x50)));
    }
    temp_v0 = (char *)(arg0) + 0x50;
    if ((*(s32 *)((char *)(temp_v0) + 0xA)) < temp_v1) {
        temp_lo = ((*(s32 *)((char *)(temp_v0) + 0x8)) - temp_v1) * (*(s32 *)((char *)(temp_v0) + 0x6));
        (*(s32 *)((char *)(arg0) + 0x36)) = temp_lo;
        (*(s32 *)((char *)(arg0) + 0x34)) = temp_lo;
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x10))) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (temp_v1 * (*(s8 *)((char *)(temp_v0) + 0x12)));
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x14))) {
        temp_lo_2 = (*(s32 *)((char *)(temp_v0) + 0x16)) * D_800BE9E4;
        (*(s16 *)((char *)(arg0) + 0x34)) = (s16) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_lo_2);
        (*(s16 *)((char *)(arg0) + 0x36)) = (s16) ((*(s16 *)((char *)(arg0) + 0x36)) + temp_lo_2);
    }
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(temp_v0) + 0x18))) {
        (*(s16 *)((char *)(arg0) + 0x32)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x1A));
        (*(s32 *)((char *)(temp_v0) + 0x18)) = -0x270F;
    }
    temp_lo_3 = (*(s32 *)((char *)(arg0) + 0x38)) * (*(s32 *)((char *)(temp_v0) + 0xE));
    (*(s32 *)((char *)(arg0) + 0x42)) = temp_lo_3;
    (*(s32 *)((char *)(arg0) + 0x41)) = temp_lo_3;
    (*(s32 *)((char *)(arg0) + 0x40)) = temp_lo_3;
}

s32 func_151A26EC(void *arg0, void * *arg1, void * *arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, s16 arg8, s16 arg9, s16 arg10, s8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, s32 arg16) {
    s8 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    f32 sp9C;
    s32 sp98;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp80;
    f32 sp7C;
    void * sp70;
    void * sp64;
    void * sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s16 sp4A;
    s16 sp48;
    s16 sp46;
    s8 sp45;
    s8 sp44;
    u8 sp43;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    s8 sp3F;
    u8 sp3E;
    u8 sp3D;
    u8 sp3C;
    s32 sp38;
    s32 sp34;
    s16 sp32;
    s16 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp20;
    s16 var_a3;
    s16 var_v0;
    s32 temp_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_a3 = arg8;
    var_v0 = arg9;
    if (var_a3 <= 0) {
        var_a3 = 1;
    }
    if (var_v0 <= 0) {
        var_v0 = 1;
    }
    spA2 = (s16) (0xFF / var_v0);
    sp30 = 0x5203;
    sp48 = (s16) (0xFF / var_a3);
    sp45 = 0x27;
    sp28 = 0x200005;
    spA4 = arg10;
    spA6 = arg11;
    sp9C = arg3;
    spA0 = var_v0;
    sp46 = var_a3;
    sp2C = 0;
    sp34 = 0;
    sp38 = 0;
    sp3F = 0xFF;
    sp40 = 0xFF;
    sp41 = 0xFF;
    sp42 = 0xFF;
    sp44 = 0xFF;
    sp54 = arg5;
    sp50 = arg5;
    sp32 = arg6;
    sp3C = arg12;
    sp3D = arg13;
    sp3E = arg14;
    sp43 = arg7;
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(sp64) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp64) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp64) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)(arg2) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)(arg2) + 0x8));
    sp4A = 1;
    sp7C = arg4;
    sp4C = 1.0f;
    var_v1 = 0;
    if (random_u32(arg3, var_a3) & 1) {
        var_v1 = 0x40;
    }
    sp20 = var_v1;
    if (random_u32() & 1) {
        var_v0_2 = 0x80;
    } else {
        var_v0_2 = 0;
    }
    sp80 = var_v0_2 | 7 | var_v1 | 0xD200 | 0x800000;
    sp88 = 7;
    sp89 = 2;
    sp8A = 0x11;
    sp8B = -1;
    sp8C = -1;
    sp8D = 2;
    temp_v0 = func_15130374(&sp28, 1, 0x10, arg15, arg16);
    if (temp_v0 != 0) {
        sp98 = temp_v0;
        memcpy(temp_v0 + 0xA8, (void **) &sp9C, 8);
        memcpy(sp98 + 0xB0, (void **) &spA0, 8);
    }
    return 0;
}

void func_151A2960(void *arg0, s32 arg1) {
    void *sp18;
    s16 temp_a1;
    s16 temp_a2;
    s8 temp_v1;
    void *temp_v0;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x1A));
    temp_v0 = (char *)(arg0) + 0xB0;
    if (temp_a2 < (*(s32 *)((char *)(arg0) + 0xB0))) {
        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (temp_a2 * (*(s8 *)((char *)(arg0) + 0xB2)));
    }
    if (D_800BE616 == 0) {
        temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x4));
        if (temp_a1 != -1) {
            temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x6));
            if ((temp_v1 != -1) && (temp_a1 >= temp_a2)) {
                sp18 = temp_v0;
                ((s32 (*)())((char *)(&D_8008F8E0 + (temp_v1 * 4))))(temp_a1, temp_a2, -1);
                (*(s32 *)((char *)(temp_v0) + 0x4)) = -1;
            }
        }
    }
    func_1513170C(arg0, arg1);
}

void func_151A2A14(s16 arg1, s16 arg2, void *arg3, void *arg4, void *arg5, s32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, s16 arg11, s16 arg12, s16 arg13, s16 arg14, s16 arg15, s16 arg16, s8 arg17, u8 arg18, s32 arg19) {
    func_151A2C24(arg3, NULL, arg1, arg2, 0.0f, 0.0f, 0.0f, arg6, arg7, arg8, arg9, arg10, (s32) arg11, (s32) arg12, (s32) arg13, (s32) arg14, (s32) arg15, (s32) arg16, (s32) arg17, (s32) arg18, arg19, 1U);
}

void func_151A2AD4(void *arg2, void *arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s16 arg9, s16 arg10, s16 arg11, s16 arg12, s16 arg13, s16 arg14, s8 arg15, u8 arg16, s32 arg17) {
    func_151A2C24(arg2, arg3, 0, 0, NULL, 0.0f, 0.0f, arg4, arg5, arg6, arg7, arg8, (s32) arg9, (s32) arg10, (s32) arg11, (s32) arg12, (s32) arg13, (s32) arg14, (s32) arg15, (s32) arg16, arg17, 0U);
}

void func_151A2B84(void *arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4, void * *arg5) {
    f32 temp_f0;

    temp_f0 = 1.0f - arg4;
    (*(f32 *)((char *)(arg5) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) * temp_f0);
    (*(f32 *)((char *)(arg5) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) * temp_f0);
    (*(f32 *)((char *)(arg5) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) * temp_f0);
}

void func_151A2BD0(void *arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4, void * *arg5) {
    func_15143794(arg3, arg1, arg2, (1.0f - arg4) * arg3, arg5);
}

void func_151A2C24(void *arg0, void *arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, s16 arg12, s16 arg13, s16 arg14, s16 arg15, s16 arg16, s16 arg17, s8 arg18, u8 arg19, s32 arg20, u8 arg21) {
    s16 spFE;
    void (*spF0)(void *, s16, s16, f32, f32, void * *);
    void * spE4;
    void * spD8;
    void * spC8;
    s32 spB0;
    u32 spAC;
    s32 spA8;
    f32 temp_f22;
    f32 temp_f24;
    f32 var_f20;
    s16 temp_s4;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s3;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_s1_2;
    void *temp_v0;

    if (arg21 == 0) {
        spF0 = func_151A2B84;
    } else {
        spF0 = func_151A2BD0;
    }
    if (arg16 < arg17) {
        spFE = arg16;
    } else {
        spFE = arg17;
    }
    var_s3 = arg7;
    var_f20 = 0.0f;
    temp_f24 = 1.0f / (f32) var_s3;
    if (var_s3 != 0) {
        spB0 = (s32) arg12;
        spAC = arg15 + 1;
        spA8 = (s32) arg14;
        do {
            temp_s4 = (random_u32() % (u32) (arg13 + 1)) + spB0;
            temp_s1 = random_u32();
            temp_s0 = random_u32();
            func_15143794((f32) (s16) (temp_s1 & 0xFF), (s16) (temp_s0 & 0xFF), (s16) (random_float() * arg8), (f32)(s32)&spE4);
            spF0(arg1, arg2, arg3, arg4, var_f20, &spD8);
            (*(s32 *)((char *)&(spC8) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008F8E8) + 0x0));
            (*(s32 *)((char *)&(spC8) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008F8E8) + 0x4));
            (*(s32 *)((char *)&(spC8) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8008F8E8) + 0x8));
            temp_s2 = random_u32() & 3;
            temp_f22 = random_float();
            temp_s1_2 = random_u32();
            if (random_float() < D_800A8D2C) {
                var_s0 = 0x19;
            } else {
                var_s0 = -1;
            }
            temp_v0 = &spC8 + (temp_s2 * 3);
            func_151A26EC(arg0, &spE4, &spD8, arg9, (temp_f22 * arg11) + arg10, (arg6 * var_f20) + arg5, (s16) (temp_s4 + spFE), (u8) ((temp_s1_2 % spAC) + spA8), (s16) (s32) arg16, (s16) (s32) arg17, (s16) var_s0, (s8) (s32) arg18, (u8) (s32) (*(s16 *)((char *)(temp_v0) + 0x0)), (u8) (s32) (*(s16 *)((char *)(temp_v0) + 0x1)), (u8) (s32) (*(s16 *)((char *)(temp_v0) + 0x2)), (u8) (s32) arg19, arg20);
            var_f20 += temp_f24;
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_151A2F0C(void *arg0) {
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    s8 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
    s32 sp78;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    s32 sp1C;

    sp1C = 8;
    sp20 = 6;
    (*(s32 *)((char *)&(sp24) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x40));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x44));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x48));
    if ((*(s32 *)((char *)(arg0) + 0x68)) & 0x1000) {
        sp24 += (*(s32 *)((char *)(arg0) + 0x4C));
        sp28 += (*(s32 *)((char *)(arg0) + 0x50));
        sp2C += (*(s32 *)((char *)(arg0) + 0x54));
    }
    sp30 = ((*(s32 *)((char *)(arg0) + 0x38)) + (*(s32 *)((char *)(arg0) + 0x3C))) * 0.5f * D_800A8D30;
    sp4A = 0xFF;
    sp4C = -0x40;
    sp54 = 1;
    sp58 = 0x11;
    sp4E = 0x56;
    sp50 = 3;
    sp5A = 0x12;
    sp5C = 1;
    sp5E = 4;
    sp5F = 2;
    sp60 = 3;
    sp64 = 0xFF;
    sp66 = 0x37;
    sp61 = 0xFF;
    sp62 = 0xC8;
    sp63 = 0xC8;
    sp67 = 0x37;
    sp69 = 0xFF;
    sp6A = 0xFF;
    sp6B = 0xFF;
    sp6C = 0xFF;
    sp71 = 0xFF;
    sp34 = ((*(s32 *)((char *)(arg0) + 0x38)) + (*(s32 *)((char *)(arg0) + 0x3C))) * 0.5f * D_800A8D34;
    sp48 = 0;
    sp65 = 0;
    sp68 = 0;
    sp6D = 0;
    sp6E = 0;
    sp6F = 0;
    sp70 = 0;
    sp72 = 0;
    sp73 = 1;
    sp74 = 0x24;
    sp78 = 0x200005;
    sp7C = 0x60600;
    sp80 = 7;
    sp82 = 0x24;
    sp84 = 1;
    sp86 = 0;
    sp8C = -1;
    sp8D = 0;
    sp8E = -1;
    sp8F = -1;
    sp38 = D_800A8D38;
    sp40 = 8.0f;
    sp44 = 10.0f;
    sp3C = 0.0f;
    sp88 = 1.0f;
    func_15152B38(&sp1C, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)), arg0);
}

void func_151A3150(void *arg0) {
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    s8 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
    s32 sp78;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    s32 sp1C;

    sp1C = 0xA;
    sp20 = 0xF;
    (*(s32 *)((char *)&(sp24) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x40));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x44));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x48));
    if ((*(s32 *)((char *)(arg0) + 0x68)) & 0x1000) {
        sp24 += (*(s32 *)((char *)(arg0) + 0x4C));
        sp28 += (*(s32 *)((char *)(arg0) + 0x50));
        sp2C += (*(s32 *)((char *)(arg0) + 0x54));
    }
    sp30 = ((*(s32 *)((char *)(arg0) + 0x38)) + (*(s32 *)((char *)(arg0) + 0x3C))) * 0.5f * D_800A8D3C;
    sp4A = 0xFF;
    sp4C = -0x40;
    sp54 = 2;
    sp58 = 0xF;
    sp4E = 0x56;
    sp50 = 3;
    sp5A = 0x1E;
    sp5C = 1;
    sp5E = 4;
    sp5F = 2;
    sp60 = 3;
    sp64 = 0xFF;
    sp66 = 0x37;
    sp61 = 0xFF;
    sp62 = 0xC8;
    sp63 = 0xC8;
    sp67 = 0x37;
    sp69 = 0xFF;
    sp6A = 0xFF;
    sp6B = 0xFF;
    sp6C = 0xFF;
    sp71 = 0xFF;
    sp34 = ((*(s32 *)((char *)(arg0) + 0x38)) + (*(s32 *)((char *)(arg0) + 0x3C))) * 0.5f * D_800A8D40;
    sp48 = 0;
    sp65 = 0;
    sp68 = 0;
    sp6D = 0;
    sp6E = 0;
    sp6F = 0;
    sp70 = 0;
    sp72 = 0;
    sp73 = 1;
    sp74 = 0x24;
    sp78 = 0x200005;
    sp7C = 0x60600;
    sp80 = 0xF;
    sp82 = 0x11;
    sp84 = 1;
    sp86 = 0;
    sp8C = -1;
    sp8D = 0;
    sp8E = -1;
    sp8F = -1;
    sp40 = 8.0f;
    sp44 = 8.0f;
    sp38 = D_800A8D44;
    sp3C = 0.0f;
    sp88 = 1.0f;
    func_15152B38(&sp1C, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)), arg0);
}
