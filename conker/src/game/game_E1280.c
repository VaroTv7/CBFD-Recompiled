/**
 * Auto-decompiled from asm/E1280.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000FC18();             /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                                /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();             /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
void * func_15147D64();                              /* extern */
void * func_15147DA0(); /* extern */
void * func_151D5D60();    /* extern */
void * memcpy();      /* extern */
void func_150B5088();                     /* static */
extern s32 D_80091238;
extern s32 D_8009FBF0;
extern s32 D_800D2C9C;

void func_150B3DD0(void) {
    s8 sp24;

    func_15147D64(0, 5);
    sp24 = 0;
    func_151494E0(&sp24, 0x18);
    sp24 = 2;
    func_151494E0(&sp24, 0x18);
    sp24 = 4;
    func_151494E0(&sp24, 0x18);
    sp24 = 1;
    func_151494E0(&sp24, 0x18);
    sp24 = 3;
    func_151494E0(&sp24, 0x18);
    sp24 = 5;
    func_151494E0(&sp24, 0x18);
}

void func_150B3E74(void *arg0) {
    func_1000FC18(0x221, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x10)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18)), 0xFA0);
    func_151478F4(arg0);
}

void func_150B3EE8(void *arg0) {
    func_1000FC18(0x221, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x10)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18)), 0xFA0);
    func_15147928(arg0);
}

void *func_150B3F5C(void * *arg0, void *arg1, s32 arg2) {
    s8 spB1;
    s32 spAC;
    s16 spAA;
    s16 spA8;
    void * sp9C;
    f32 sp98;
    s8 sp94;
    f32 sp90;
    s8 sp8C;
    f32 sp88;
    f32 sp84;
    void * sp44;
    void *sp40;
    void *temp_v0;

    memcpy(&sp44, arg0, 0x40);
    sp8C = 0;
    spAA = 2;
    spA8 = 0x1F4;
    sp88 = 0.0f;
    spB1 = (s8) arg2;
    sp94 = 0;
    sp98 = 0.0f;
    sp90 = (*(s32 *)((char *)(arg0) + 0x14)) + (*(s32 *)((char *)(arg0) + 0x18));
    sp84 = sp90;
    (*(f32 *)((char *)&(sp9C) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
    (*(f32 *)((char *)&(sp9C) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
    (*(f32 *)((char *)&(sp9C) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
    spAC = 9;
    temp_v0 = func_15147A80(&sp9C, 0x58, 0x24, 7, 7, 7, 0, 0, 0, 0xFF, 1);
    sp40 = temp_v0;
    if (temp_v0 != NULL) {
        func_1000FA64(0x221, (s16) (s32) (*(s16 *)((char *)(arg1) + 0x0)), (s16) (s32) (*(s16 *)((char *)(arg1) + 0x4)), (s16) (s32) (*(s16 *)((char *)(arg1) + 0x8)), 0x61A8, 0xFA0, 0x258, &func_1000EF40, 0, 0, 8, random_u32() & 0x40);
        memcpy((*(s32 *)((char *)(sp40) + 0x98)), &sp44, 0x58);
    }
    return sp40;
}

s32 func_150B40E8(void *arg0) {
    s32 temp_v1;
    s32 var_a1;
    s8 var_a2;
    void *temp_a3;
    void *temp_t6;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(temp_v0) + 0x1C)) & 1)) {
        return 0;
    }
    var_a2 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_a2 -= 1;
            var_a1 = 0;
            if (var_a2 < 0) {
                var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a3 = temp_v1 + (var_a2 * 0x24);
            (*(s32 *)((char *)(temp_a3) + 0x1C)) = 0xFF;
            (*(s16 *)((char *)(temp_a3) + 0x1E)) = (s16) ((*(s16 *)((char *)(temp_a3) + 0x1E)) - D_800BE9E4);
            if ((*(s32 *)((char *)(temp_a3) + 0x1E)) < 0) {
                var_a1 = 1;
            }
            (*(f32 *)((char *)(temp_a3) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x10)) + ((*(f32 *)((char *)(temp_v0) + 0xC)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x0)) + ((*(f32 *)((char *)(temp_a3) + 0xC)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x4)) + ((*(f32 *)((char *)(temp_a3) + 0x10)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x8)) + ((*(f32 *)((char *)(temp_a3) + 0x14)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_a3) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x18)) + ((*(f32 *)((char *)(temp_v0) + 0x28)) * D_800BE9A4));
            if ((var_a1 != 0) && (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)))) {
                do {
                    (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                    if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                        (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                    }
                    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
            }
        } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t6 = temp_v1 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    return 1;
}

s32 func_150B4294(void *arg0) {
    f32 sp80;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 var_f20;
    f32 var_f22;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f6;
    s32 temp_s3;
    s8 temp_v0_5;
    u8 temp_a0;
    u8 temp_t4;
    u8 temp_t6;
    u8 temp_t8;
    void *temp_s2;
    void *temp_s5;
    void *temp_t9;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    f32 sp84;
    f32 sp88;
    temp_s2 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_a0 = (*(u32 *)((char *)(temp_s2) + 0x50)) + ((random_u32() % (u32) ((*(u32 *)((char *)(temp_s2) + 0x10)) + 1)) * D_800BE9E4);
    (*(s32 *)((char *)(temp_s2) + 0x50)) = temp_a0;
    (*(f32 *)((char *)(temp_s2) + 0x4C)) = (f32) ((func_151423D8((temp_a0 - 0x40) & 0xFF) * (*(f32 *)((char *)(temp_s2) + 0x18))) + (*(f32 *)((char *)(temp_s2) + 0x14)));
    (*(f32 *)((char *)(temp_s2) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x44)) + ((*(f32 *)((char *)(temp_s2) + 0x20)) * D_800BE9A4));
    temp_f16 = (*(s32 *)((char *)(temp_s2) + 0x44));
    if (temp_f16 > 1.0f) {
        temp_f2 = 1.0f / temp_f16;
        var_f20 = D_800BE9A4;
        (*(s32 *)((char *)&(sp80) + 0x0)) = (*(s32 *)((char *)(temp_s2) + 0x0));
        temp_s5 = (char *)(arg0) + 0x10;
        (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s2) + 0x4));
        (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s2) + 0x8));
        var_f22 = (*(s32 *)((char *)(temp_s2) + 0x40));
        temp_f26 = var_f20 * temp_f2;
        temp_f28 = ((*(s32 *)((char *)(temp_s2) + 0x4C)) - var_f22) * temp_f2;
        do {
            (*(f32 *)((char *)(temp_s2) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x54)) + (*(f32 *)((char *)(temp_s2) + 0x3C)));
            if ((*(s32 *)((char *)(temp_s2) + 0x54)) > 1.0f) {
                func_150B5088(arg0);
            }
            temp_t9 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(s32 *)((char *)(temp_t9) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
            (*(s32 *)((char *)(temp_t9) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s5) + 0x4));
            (*(s32 *)((char *)(temp_t9) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s5) + 0x8));
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0xC)) = (f32) (sp80 * var_f22);
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0x10)) = (f32) (sp84 * var_f22);
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0x14)) = (f32) (sp88 * var_f22);
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0x18)) = (f32) (*(f32 *)((char *)(temp_s2) + 0x2C));
            (*(s32 *)((char *)((temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x1C)) = 0xFF;
            (*(s16 *)((char *)((temp_s3 + ((*(s16 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x1E)) = (s16) (*(s16 *)((char *)(temp_s2) + 0x36));
            (*(u8 *)((char *)((temp_s3 + ((*(u8 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x20)) = (u8) (*(u8 *)((char *)(temp_s2) + 0x48));
            temp_f0 = random_float();
            temp_t4 = (*(s32 *)((char *)(temp_s2) + 0x30));
            var_f6 = (f32) temp_t4;
            if ((s32) temp_t4 < 0) {
                var_f6 += 4294967296.0f;
            }
            temp_t6 = (*(s32 *)((char *)(temp_s2) + 0x31));
            var_f4 = (f32) temp_t6;
            if ((s32) temp_t6 < 0) {
                var_f4 += 4294967296.0f;
            }
            temp_t8 = (*(s32 *)((char *)(temp_s2) + 0x48));
            var_f4_2 = (f32) temp_t8;
            if ((s32) temp_t8 < 0) {
                var_f4_2 += 4294967296.0f;
            }
            (*(u8 *)((char *)(temp_s2) + 0x48)) = (u8) (u32) (var_f4_2 + (var_f6 + (temp_f0 * var_f4)));
            temp_v0 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) + ((*(f32 *)((char *)(temp_s2) + 0xC)) * var_f20));
            temp_v0_2 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v0_2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x0)) + ((*(f32 *)((char *)(temp_v0_2) + 0xC)) * var_f20));
            temp_v0_3 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v0_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x4)) + ((*(f32 *)((char *)(temp_v0_3) + 0x10)) * var_f20));
            temp_v0_4 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v0_4) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0_4) + 0x8)) + ((*(f32 *)((char *)(temp_v0_4) + 0x14)) * var_f20));
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v0_5 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v0_5 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            var_f22 += temp_f28;
            var_f20 -= temp_f26;
            (*(f32 *)((char *)(temp_s2) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x44)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s2) + 0x44)) > 1.0f);
        (*(s32 *)((char *)(temp_s2) + 0x40)) = var_f22;
    }
    return 1;
}

void *func_150B4710(void *arg0, void *arg1, s32 arg2) {
    void *sp11C;
    f32 sp10C;
    f32 sp100;
    s32 spFC;
    s8 spC7;
    s8 spC1;
    void *sp9C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f22;
    f32 var_f22_2;
    s16 var_a0_3;
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_t1;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 var_v0;
    u8 temp_a1;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_a1;
    u8 var_t2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s3;
    void *temp_s4;
    void *temp_t4;
    void *temp_t5;
    void *temp_t6;
    void *temp_t8;
    void *temp_v1;
    void *var_a3;
    void *var_s0;

    f32 sp104;
    f32 sp108;
    f32 sp110;
    f32 sp114;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp11C, 0);
        if (sp11C != NULL) {
            temp_s3 = (*(s32 *)((char *)(arg0) + 0x98));
            temp_s2 = (*(s32 *)((char *)(arg0) + 0x94));
            temp_s4 = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
            spC1 = 1;
            if ((*(s32 *)((char *)(temp_s3) + 0x1C)) & 2) {
                var_v1 = 0;
                var_a0 = (*(s32 *)((char *)(temp_s3) + 0x32));
                var_v0 = (*(s32 *)((char *)(arg0) + 0x2D));
loop_4:
                temp_lo = var_v0 * 0x24;
                var_v0 += 1;
                var_a0 = (u8) (s16) (var_a0 - 1);
                (*(s32 *)((char *)((temp_s2 + temp_lo)) + 0x1C)) = var_v1;
                var_v1 = (var_v1 + (*(s32 *)((char *)(temp_s3) + 0x33))) & 0xFF;
                if (var_v0 == (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_v0 = 0;
                }
                if ((var_a0 != 0) && (var_v0 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_4;
                }
            }
            if ((*(s32 *)((char *)(temp_s3) + 0x1C)) & 4) {
                var_v1_2 = 0;
                var_a0_2 = (*(s32 *)((char *)(temp_s3) + 0x34));
                var_v0_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
loop_12:
                temp_lo_2 = var_v0_2 * 0x24;
                var_v0_2 -= 1;
                var_a0_2 = (u8) (s16) (var_a0_2 - 1);
                (*(s32 *)((char *)((temp_s2 + temp_lo_2)) + 0x1C)) = var_v1_2;
                var_v1_2 = (var_v1_2 + (*(s32 *)((char *)(temp_s3) + 0x35))) & 0xFF;
                if (var_v0_2 < 0) {
                    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if ((var_a0_2 != 0) && (var_v0_2 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
                    goto loop_12;
                }
            }
            temp_a1 = (*(s32 *)((char *)(temp_s3) + 0x24));
            var_s0 = func_15142FBC(func_15142C10(func_1513F4E4(func_15142B7C(func_15142E24(var_s0, &D_80091238, 0, 0, 0, 0, 0x92, 0, 0, &spC1, 3), 1, 0x160600), 0x4D, &spC1), temp_a1, temp_a1, temp_a1, 0xFF, &spC1), D_800D2C9C | 0x80000 | 0x2CA0, 0x5049D8, &spC1);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_t1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_t1 < 0) {
                    var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(sp100) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(sp100) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)&(sp100) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                var_a3 = temp_s2 + (var_t1 * 0x24);
                var_a1 = (*(s32 *)((char *)(var_a3) + 0x20));
                var_a0_3 = (s16) ((s32) ((*(s16 *)((char *)(var_a3) + 0x1C)) * (*(s16 *)((char *)(temp_s3) + 0x26))) >> 8);
            } else {
                var_v0_3 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v0_3 < 0) {
                    var_v0_3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_t1 = var_v0_3 - 1;
                if (var_t1 < 0) {
                    var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v1 = temp_s2 + (var_v0_3 * 0x24);
                (*(s32 *)((char *)&(sp100) + 0x0)) = (*(s32 *)((char *)(temp_v1) + 0x0));
                (*(s32 *)((char *)&(sp100) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
                (*(s32 *)((char *)&(sp100) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
                var_a1 = (*(s32 *)((char *)(temp_v1) + 0x20));
                var_a3 = temp_s2 + (var_t1 * 0x24);
                var_a0_3 = (s16) ((s32) ((*(s16 *)((char *)(temp_v1) + 0x1C)) * (*(s16 *)((char *)(temp_s3) + 0x26))) >> 8);
            }
            (*(s32 *)((char *)&(sp10C) + 0x0)) = (*(s32 *)((char *)(var_a3) + 0x0));
            (*(s32 *)((char *)&(sp10C) + 0x4)) = (s32) (*(s32 *)((char *)(var_a3) + 0x4));
            (*(s32 *)((char *)&(sp10C) + 0x8)) = (s32) (*(s32 *)((char *)(var_a3) + 0x8));
            temp_f20 = sp100 - (*(s32 *)((char *)(temp_s4) + 0x0));
            temp_f22 = sp104 - (*(s32 *)((char *)(temp_s4) + 0x4));
            var_t2 = (*(s32 *)((char *)(var_a3) + 0x20));
            temp_f24 = sp108 - (*(s32 *)((char *)(temp_s4) + 0x8));
            temp_f2 = sp104 - sp110;
            temp_f18 = sp108 - sp114;
            temp_f0 = sp100 - sp10C;
            var_v1_3 = (s16) ((s32) ((*(s16 *)((char *)(var_a3) + 0x1C)) * (*(s16 *)((char *)(temp_s3) + 0x26))) >> 8);
            temp_f12 = (temp_f2 * temp_f24) - (temp_f22 * temp_f18);
            temp_f14 = (temp_f18 * temp_f20) - (temp_f24 * temp_f0);
            temp_f16 = (temp_f0 * temp_f22) - (temp_f20 * temp_f2);
            temp_f28 = (temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16);
            if (temp_f28 == 0.0f) {
                var_f18 = 0.0f;
                var_f20 = 0.0f;
                var_f22 = 0.0f;
            } else {
                temp_f2_2 = (*(s32 *)((char *)(var_a3) + 0x18)) / sqrtf(temp_f28);
                var_f18 = temp_f12 * temp_f2_2;
                var_f20 = temp_f14 * temp_f2_2;
                var_f22 = temp_f16 * temp_f2_2;
            }
            (*(s16 *)((char *)(sp11C) + 0x0)) = (s16) (s32) (sp100 + var_f18);
            (*(s16 *)((char *)(sp11C) + 0x2)) = (s16) (s32) (sp104 + var_f20);
            (*(s16 *)((char *)(sp11C) + 0x4)) = (s16) (s32) (sp108 + var_f22);
            (*(s16 *)((char *)(sp11C) + 0x8)) = (s16) ((*(s16 *)((char *)(var_a3) + 0x20)) << 6);
            (*(s32 *)((char *)(sp11C) + 0xA)) = 0x43C0;
            (*(s32 *)((char *)(sp11C) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp11C) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp11C) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(sp11C) + 0xF)) = (s8) var_a0_3;
            (*(s32 *)((char *)(sp11C) + 0x6)) = 0;
            temp_t6 = (char *)(sp11C) + 0x10;
            sp11C = temp_t6;
            (*(s16 *)((char *)(sp11C) + 0x10)) = (s16) (s32) (sp100 - var_f18);
            (*(s16 *)((char *)(sp11C) + 0x2)) = (s16) (s32) (sp104 - var_f20);
            (*(s16 *)((char *)(sp11C) + 0x4)) = (s16) (s32) (sp108 - var_f22);
            (*(s16 *)((char *)(sp11C) + 0x8)) = (s16) ((*(s16 *)((char *)(var_a3) + 0x20)) << 6);
            (*(s32 *)((char *)(sp11C) + 0xA)) = 0x4000;
            (*(s32 *)((char *)(sp11C) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp11C) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp11C) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(temp_t6) + 0xF)) = (s8) var_a0_3;
            (*(s32 *)((char *)(sp11C) + 0x6)) = 0;
            sp11C = (char *)(sp11C) + 0x10;
            do {
                temp_f20_2 = sp10C - (*(s32 *)((char *)(temp_s4) + 0x0));
                temp_f22_2 = sp110 - (*(s32 *)((char *)(temp_s4) + 0x4));
                temp_f24_2 = sp114 - (*(s32 *)((char *)(temp_s4) + 0x8));
                temp_f2_3 = sp104 - sp110;
                temp_f18_2 = sp108 - sp114;
                temp_f0_2 = sp100 - sp10C;
                temp_f12_2 = (temp_f2_3 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f14_2 = (temp_f18_2 * temp_f20_2) - (temp_f24_2 * temp_f0_2);
                temp_f16_2 = (temp_f0_2 * temp_f22_2) - (temp_f20_2 * temp_f2_3);
                temp_f28_2 = (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2);
                if (temp_f28_2 == 0.0f) {
                    var_f18_2 = 0.0f;
                    var_f20_2 = 0.0f;
                    var_f22_2 = 0.0f;
                } else {
                    temp_f2_4 = (*(s32 *)((char *)(var_a3) + 0x18)) / sqrtf(temp_f28_2);
                    var_f18_2 = temp_f12_2 * temp_f2_4;
                    var_f20_2 = temp_f14_2 * temp_f2_4;
                    var_f22_2 = temp_f16_2 * temp_f2_4;
                }
                (*(s16 *)((char *)(sp11C) + 0x0)) = (s16) (s32) (sp10C + var_f18_2);
                (*(s16 *)((char *)(sp11C) + 0x2)) = (s16) (s32) (sp110 + var_f20_2);
                (*(s16 *)((char *)(sp11C) + 0x4)) = (s16) (s32) (sp114 + var_f22_2);
                (*(s16 *)((char *)(sp11C) + 0x8)) = (s16) ((*(s16 *)((char *)(var_a3) + 0x20)) << 6);
                (*(s32 *)((char *)(sp11C) + 0xA)) = 0x43C0;
                (*(s32 *)((char *)(sp11C) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp11C) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp11C) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(sp11C) + 0xF)) = (s8) var_v1_3;
                (*(s32 *)((char *)(sp11C) + 0x6)) = 0;
                temp_t4 = (char *)(sp11C) + 0x10;
                sp11C = temp_t4;
                (*(s16 *)((char *)(sp11C) + 0x10)) = (s16) (s32) (sp10C - var_f18_2);
                (*(s16 *)((char *)(sp11C) + 0x2)) = (s16) (s32) (sp110 - var_f20_2);
                (*(s16 *)((char *)(sp11C) + 0x4)) = (s16) (s32) (sp114 - var_f22_2);
                (*(s16 *)((char *)(sp11C) + 0x8)) = (s16) ((*(s16 *)((char *)(var_a3) + 0x20)) << 6);
                (*(s32 *)((char *)(sp11C) + 0xA)) = 0x4000;
                (*(s32 *)((char *)(sp11C) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp11C) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp11C) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(temp_t4) + 0xF)) = (s8) var_v1_3;
                (*(s32 *)((char *)(sp11C) + 0x6)) = 0;
                sp11C = (char *)(sp11C) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(sp11C) - 0x40);
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_2) + 8;
                if ((s32) var_a1 < (s32) var_t2) {
                    sp9C = var_a3;
                    spFC = var_t1;
                    spC7 = (s8) var_t2;
                    memcpy((*(void **)&temp_f12_2), (*(void **)&temp_f14_2), sp11C, (char *)(sp11C) - 0x20, 0x20, var_a3);
                    var_t2 = (u8) spC7;
                    (*(s16 *)((char *)(sp11C) - 0x18)) = (s16) ((*(s16 *)((char *)(sp11C) - 0x18)) - 0x4000);
                    temp_t5 = (char *)(sp11C) + 0x10;
                    sp11C = temp_t5;
                    (*(s16 *)((char *)(temp_t5) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t5) - 0x18)) - 0x4000);
                    sp11C = (char *)(sp11C) + 0x10;
                }
                temp_v0 = var_t1;
                var_t1 -= 1;
                var_a3 = (char *)(var_a3) - 0x24;
                if (var_t1 < 0) {
                    var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    var_a3 = temp_s2 + (var_t1 * 0x24);
                }
                var_a1 = var_t2 & 0xFF;
                temp_t8 = temp_s2 + (temp_v0 * 0x24);
                (*(s32 *)((char *)&(sp100) + 0x0)) = (*(s32 *)((char *)(temp_t8) + 0x0));
                (*(s32 *)((char *)&(sp100) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
                (*(s32 *)((char *)&(sp100) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
                (*(s32 *)((char *)&(sp10C) + 0x0)) = (*(s32 *)((char *)(var_a3) + 0x0));
                (*(s32 *)((char *)&(sp10C) + 0x4)) = (s32) (*(s32 *)((char *)(var_a3) + 0x4));
                (*(s32 *)((char *)&(sp10C) + 0x8)) = (s32) (*(s32 *)((char *)(var_a3) + 0x8));
                var_t2 = (*(s32 *)((char *)(var_a3) + 0x20));
                var_v1_3 = (s16) ((s32) ((*(s16 *)((char *)(var_a3) + 0x1C)) * (*(s16 *)((char *)(temp_s3) + 0x26))) >> 8);
            } while (temp_v0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_150B5060(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFD);
    (*(u8 *)((char *)(temp_v0) + 0x1C)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x1C)) | 1);
}

void func_150B5088(void *arg0) {
    s8 sp11D;
    s8 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    s32 sp100;
    s8 spF5;
    s16 spEE;
    s16 spEC;
    void * spE0;
    s8 spDB;
    u8 spDA;
    s8 spD9;
    s8 spD8;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spB4;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s3;

    temp_s3 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s0 = ((*(s32 *)((char *)(temp_s3) + 0x38)) * 0x24) + &D_8009FBF0;
    sp100 = 0;
    sp104 = 1;
    sp108 = 0x160600;
    sp10C = 3;
    sp110 = 0x10;
    sp114 = 0x80;
    sp118 = 0x20;
    sp11C = 0;
    sp11D = 9;
    spEE = 1;
    spD9 = 6;
    spD8 = 8;
    spDA = (*(s32 *)((char *)(temp_s3) + 0x24));
    spDB = (s8) (*(s8 *)((char *)(temp_s3) + 0x26));
    (*(s32 *)((char *)&(spE0) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
    (*(s32 *)((char *)&(spE0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)&(spE0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
    do {
        temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x8))) + (*(s32 *)((char *)(temp_s0) + 0x4));
        temp_s1 = random_u32() & 0xFF;
        temp_s2 = random_u32() & 0xFF;
        temp_f22 = func_151423D8((temp_s1 - 0x40) & 0xFF);
        temp_f24 = func_151423D8(temp_s1 & 0xFF);
        temp_f26 = func_151423D8((temp_s2 - 0x40) & 0xFF);
        temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x0));
        temp_f12 = temp_f2 * func_151423D8(temp_s2 & 0xFF);
        temp_f28 = (*(s32 *)((char *)(temp_s3) + 0x0)) + (temp_f12 * temp_f22);
        temp_f30 = (*(s32 *)((char *)(temp_s3) + 0x4)) - (temp_f2 * temp_f26);
        spB4 = (*(s32 *)((char *)(temp_s3) + 0x8)) + (temp_f12 * temp_f24);
        spF5 = (random_u32(temp_f12) % (u32) ((*(u32 *)((char *)(temp_s0) + 0x22)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x20));
        spEC = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1E)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x1C));
        spC0 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x10))) + (*(s32 *)((char *)(temp_s0) + 0xC));
        temp_f18 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x18))) + (*(s32 *)((char *)(temp_s0) + 0x14));
        spC4 = temp_f20 * temp_f28;
        spD0 = temp_f18;
        spC8 = temp_f20 * temp_f30;
        spCC = temp_f20 * spB4;
        func_15147DA0(&spE0, &spC0, 0, 1, 7, 0, 0, 0, 0, 0, 0, &sp100, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        (*(f32 *)((char *)(temp_s3) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x54)) - 1.0f);
    } while ((*(s32 *)((char *)(temp_s3) + 0x54)) > 1.0f);
}

void func_150B538C(void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 5) {
        func_150B5060((void *) temp_t6);
    }
}
