/**
 * Auto-decompiled from asm/10CD70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A2864();                              /* extern */
void * func_150A3444();             /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                          /* extern */
void * func_15102B38(); /* extern */
void * func_15107700(); /* extern */
void * func_15107B78();         /* extern */
s32 func_1510D0EC();                  /* extern */
void * func_1513418C();                   /* extern */
void * func_1513BAE8();                                  /* extern */
void * func_15143794();              /* extern */
void * func_15145EA4();             /* extern */
void * func_1515F170();                              /* extern */
void * func_151602C0(); /* extern */
void * func_151749A0();                              /* extern */
void * func_151A26EC(); /* extern */
extern s32 D_80088984;
extern u8 D_80088988;
extern s32 D_80090324;
extern s32 D_800A0F70;
extern s32 D_800A0F88;
extern f32 D_800A0FA0;
extern f32 D_800A0FA4;
extern f32 D_800A0FA8;
extern f32 D_800A0FAC;
extern f32 D_800A0FB0;
extern f32 D_800A0FB4;
extern f32 D_800A0FB8;
extern f32 D_800A0FBC;
extern f32 D_800A0FC0;
extern f32 D_800A0FC4;
extern f32 D_800A0FC8;
extern f32 D_800A0FCC;
extern f32 D_800A0FD0;
extern f32 D_800A0FD4;
extern u8 D_800D9950;
s32 func_150DF8C0();

s32 func_150DF8C0(s32 arg0) {
    void * sp4;
    s32 var_v0;

    sp4 = D_80088984;
    var_v0 = 0;
    if ((*(s32 *)((char *)((D_800D3098 + ((s32)(*(&sp4 + arg0)) * 0x34))) + 0x14)) != 0) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_150DF920(s32 arg0) {
    s32 sp48;
    u8 *sp38;
    void * temp_a0_2;
    void * temp_a0_3;
    void * var_s1;
    f32 temp_f12;
    s32 temp_a0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v1_2;
    s8 var_v1;
    u32 *temp_a0_4;
    u32 temp_v0_3;
    u8 *var_a3;
    u8 temp_t6;
    u8 temp_v1;
    void *temp_v0;

    if (arg0 == 0) {
        func_151749A0(5, 4);
        var_s2 = 6;
        var_s1 = 3;
        var_s4 = 0;
        do {
            temp_a0 = var_s2 & 0xFF;
            var_s2 = 7;
            temp_v0 = func_15083E90(temp_a0);
            if (temp_v0 != NULL) {
                func_150A2864(var_s1, 0);
                temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x1C));
                temp_a0_2 = var_s1;
                var_s1 = 4;
                func_150A3444(temp_f12, temp_a0_2, (s16) (s32) (*(s16 *)((char *)(temp_v0) + 0x14)), (s16) (s32) ((*(s16 *)((char *)(temp_v0) + 0x18)) + 200.0f), (s16) (s32) temp_f12);
            } else {
                temp_a0_3 = var_s1;
                var_s1 = 4;
                func_150A2864(temp_a0_3, 1);
            }
            var_s4 += 1;
        } while (var_s4 < 2);
        var_a1 = D_800B0E00;
        var_a3 = &D_800D9950;
        var_s4_2 = 0;
        do {
            var_s0 = -1;
            sp48 = var_a1;
            sp38 = var_a3;
            temp_v0_2 = func_150DF8C0(var_s4_2);
            if (temp_v0_2 != 0) {
                temp_v1 = *var_a3;
                if ((s32) temp_v1 < 0x60) {
                    temp_t6 = temp_v1 + D_800BE9E4;
                    *var_a3 = temp_t6;
                    if ((temp_t6 & 0xFF) >= 0x61) {
                        *var_a3 = 0x60;
                    }
                }
            } else {
                *var_a3 = 0;
            }
loop_12:
            var_s0 += 1;
            var_v1 = (*(s32 *)((var_s0 * 8) + (char *)(var_a1)));
            if ((var_v1 != -3) && (var_v1 != -0x21)) {
loop_14:
                var_s0 += 1;
                var_v1 = (*(s32 *)((var_s0 * 8) + (char *)(var_a1)));
                if (var_v1 != -3) {
                    if (var_v1 != -0x21) {
                        goto loop_14;
                    }
                }
            }
            if (var_v1 == -0x21) {
                var_s0 = -1;
            } else if (((var_s4_2 << 0x18) + 0x02000000) != (*(s32 *)((char *)((var_a1 + (var_s0 * 8))) + 0x4))) {
                goto loop_12;
            }
            var_s4_2 += 1;
            if (var_s0 != -1) {
                if ((*(s32 *)((var_s0 * 8) + (char *)(var_a1))) != -0xE) {
                    do {
                        var_s0 += 1;
                    } while ((*(s32 *)((var_s0 * 8) + (char *)(var_a1))) != -0xE);
                }
                if (var_s0 != -1) {
                    temp_a0_4 = var_a1 + (var_s0 * 8);
                    if (temp_v0_2 != 0) {
                        temp_v0_3 = *temp_a0_4;
                        var_a2 = (temp_v0_3 >> 0xC) & 0xFFF;
                        var_v1_2 = (temp_v0_3 & 0xFFF) + (((s32) *var_a3 / 16) * D_800BE9E4);
                    } else {
                        var_v1_2 = 2;
                        var_a2 = 2;
                    }
                    *temp_a0_4 = ((var_a2 & 0xFFF) << 0xC) | 0xF2000000 | (var_v1_2 & 0xFFF);
                }
            }
            var_a3 += 1;
        } while (var_s4_2 != 3);
    }
}

void *func_150DFBD0(void *arg0) {
    void * sp48;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    void *var_s1;

    var_s1 = arg0;
    var_s0 = 0;
    var_s2 = 8;
    do {
        if (func_150DF8C0(var_s0) != 0) {
            var_a0 = (*(s32 *)((char *)((&D_80090324 + (D_800DD405 * 4))) + 0x24));
        } else {
            var_a0 = (*(s32 *)((char *)&(D_80090324) + 0x20));
        }
        temp_v0 = func_1510D0EC(var_a0, &sp48, 3, 0);
        (*(s32 *)((char *)(var_s1) + 0x0)) = (s32) ((var_s2 & 0xFFFF) | 0xDB060000);
        (*(s32 *)((char *)(var_s1) + 0x4)) = temp_v0;
        var_s1 = (char *)(var_s1) + 8;
        var_s0 += 1;
        var_s2 += 4;
    } while (var_s0 != 3);
    return var_s1;
}

void func_150DFCA8(void *arg0) {
    f32 temp_f12;
    f32 var_f0;

    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((*(f32 *)((char *)(arg0) + 0x64)) * (f32) D_800BE9E4));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x4));
    if (temp_f12 < 11.0f) {
        var_f0 = D_800A0FA0;
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_f0;
    } else if (temp_f12 > 55.0f) {
        var_f0 = -D_800A0FA4;
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_f0;
    } else {
        var_f0 = (*(s32 *)((char *)(arg0) + 0x7C));
    }
    if ((*(s32 *)((char *)(arg0) + 0x64)) < var_f0) {
        (*(f32 *)((char *)(arg0) + 0x64)) = (f32) ((*(f32 *)((char *)(arg0) + 0x64)) + D_800A0FA8);
        if (var_f0 < (*(s32 *)((char *)(arg0) + 0x64))) {
            (*(s32 *)((char *)(arg0) + 0x64)) = var_f0;
        }
    } else if (var_f0 < (*(s32 *)((char *)(arg0) + 0x64))) {
        (*(f32 *)((char *)(arg0) + 0x64)) = (f32) ((*(f32 *)((char *)(arg0) + 0x64)) - D_800A0FAC);
        if ((*(s32 *)((char *)(arg0) + 0x64)) < var_f0) {
            (*(s32 *)((char *)(arg0) + 0x64)) = var_f0;
        }
    }
}

void func_150DFDA4(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x40;
    (*(f32 *)((char *)(temp_v0) + 0x30)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(temp_v0) + 0x34)) = (f32) D_800A0FB0;
    (*(f32 *)((char *)(temp_v0) + 0x38)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
}

s32 func_150DFDD0(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 var_f2;
    s32 var_a2;
    s32 var_v1;
    s8 *temp_v0;
    u32 *temp_a1;

    if ((*(s32 *)((char *)(arg1) + 0x2EC)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x13)) = 2;
        (*(f32 *)((char *)(arg1) + 0x2D8)) = (f32) ((*(f32 *)((char *)(arg1) + 0x2D8)) - D_800BE9A4);
        temp_f0 = (*(s32 *)((char *)(arg1) + 0x2D8));
        if (temp_f0 < 0.0f) {
            (*(s32 *)((char *)(arg1) + 0x2EC)) = 0;
            return 1;
        }
        var_f2 = 1.0f - ((*(s32 *)((char *)(arg1) + 0x2DC)) * temp_f0);
        goto block_5;
    }
    var_f2 = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x13)) = 0;
block_5:
    temp_v0 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x24))));
    if (temp_v0 != NULL) {
        var_v1 = 0;
        if (*temp_v0 != -0xE) {
            do {
                var_v1 += 1;
            } while ((*(s32 *)((var_v1 * 8) + (char *)(temp_v0))) != -0xE);
        }
        temp_a1 = temp_v0 + (var_v1 * 8);
        var_a2 = 2 - ((s32) (((u32) *temp_a1 >> 0xC) & 0xFFF) / 3);
        if (var_a2 < 0) {
            do {
                var_a2 += 0x40;
            } while (var_a2 < 0);
        }
        *temp_a1 = (((s32) ((500.0f * var_f2) + 2.0f) & 0xFFF) << 0xC) | 0xF2000000 | (var_a2 & 0xFFF);
    }
    return 0;
}

void func_150DFEFC(void *arg0) {
    void *spA8;
    s8 spA4;
    s16 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    void *sp78;
    s8 var_s1;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s2;
    u32 temp_s3;
    void *temp_t6;
    void *temp_v0;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_v0 = (char *)(arg0) + 0x28;
    spA8 = temp_t6;
    if (((*(s32 *)((char *)(temp_t6) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_t6) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    (*(s16 *)((char *)(temp_v0) + 0x6)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x6)) - D_800BE9E4);
    sp78 = temp_v0;
    if ((*(s32 *)((char *)(temp_v0) + 0x6)) < 0) {
        sp94 = (s32) (*(s32 *)((char *)(spA8) + 0x14));
        sp98 = (s32) (*(s32 *)((char *)(spA8) + 0x18));
        spA0 = 3;
        spA1 = -1;
        sp78 = temp_v0;
        sp9C = (s32) (*(s32 *)((char *)(spA8) + 0x1C));
        spA2 = (random_u32() % 11U) + 5;
        spA4 = 0;
        func_151602C0(&spA0, &sp94, (random_u32() % 121U) + 0x32, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        (*(s16 *)((char *)(sp78) + 0x6)) = (s16) ((random_u32() % 81U) + 0x45);
    }
    (*(s16 *)((char *)(sp78) + 0x8)) = (s16) ((*(s16 *)((char *)(sp78) + 0x8)) - D_800BE9E4);
    if ((*(s32 *)((char *)(sp78) + 0x8)) < 0) {
        var_s1 = (random_u32() % 3U) + 2;
        do {
            sp8C = 0xAE;
            sp8D = 0xD2;
            sp8E = 0xFF;
            sp8F = (random_u32() % 61U) + 0x96;
            temp_s3 = random_u32();
            temp_s0 = random_u32();
            temp_s2 = random_u32();
            func_15107700(spA8, (s16) (temp_s3 & 0xFF), (s16) ((temp_s0 % 129U) - 0x3F), (s16) ((temp_s2 % 21U) + 0xA), 4, 40.0f, (random_float() * 20.0f) + 25.0f, 0, 2, &sp8C, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
            var_s1 -= 1;
        } while (var_s1 > 0);
        (*(s16 *)((char *)(sp78) + 0x8)) = (s16) ((random_u32() % 141U) + 0x19);
    }
    (*(s16 *)((char *)(sp78) + 0xA)) = (s16) ((*(s16 *)((char *)(sp78) + 0xA)) - D_800BE9E4);
    if ((*(s32 *)((char *)(sp78) + 0xA)) < 0) {
        temp_s0_2 = random_u32();
        func_15107B78(spA8, (s16) (temp_s0_2 & 0xFF), (s16) ((random_u32() & 0x7F) - 0x40), (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
        (*(s16 *)((char *)(sp78) + 0xA)) = (s16) ((random_u32() % 26U) + 0xF);
    }
}

void func_150E02C0(s32 arg0, s32 arg1, s32 arg2) {
    func_15149514(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150E0300(void) {
    if (D_80088980 == 0) {
        func_1515F170(6, 0);
        func_1513BAE8();
        D_80088980 = 1;
    }
}

void func_150E0348(void *arg0, s32 arg1, void * arg2) {
    s8 sp45;
    s8 sp44;
    s8 sp43;
    s8 sp42;
    s16 sp40;
    f32 sp3C;
    f32 sp38;
    void * sp2C;
    s8 sp28;
    void *sp24;
    u8 sp20;
    s32 sp1C;
    s32 sp18;

    sp18 = 0;
    sp1C = 0;
    sp28 = 0;
    sp24 = arg0;
    sp20 = (*(s32 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)&(sp2C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp40 = 0x12C;
    sp42 = 0x1B;
    sp43 = 0xB;
    sp44 = -1;
    sp45 = 0;
    sp38 = D_800A0FB4;
    sp3C = D_800A0FB8;
    func_1513418C(&sp18, 0, arg1, arg2);
}

void func_150E03F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    u32 sp60;
    u32 sp5C;
    f32 sp58;
    f32 temp_f2;

    sp84 = arg0;
    sp88 = arg1;
    sp8C = arg2;
    sp5C = random_u32();
    sp60 = random_u32();
    func_15143794((s16) (sp5C & 0xFF), (s16) ((sp60 % 65U) - 0x20), random_float() * D_800A0FBC, &sp78);
    temp_f2 = (random_float() * D_800A0FC0) + D_800A0FC4;
    sp6C = 0.0f;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 += -arg3 * D_800BE9A8 * temp_f2;
    sp7C += -arg4 * D_800BE9A8 * temp_f2;
    sp80 += -arg5 * D_800BE9A8 * temp_f2;
    sp58 = random_float(D_800BE9A8, 0);
    sp64 = random_float();
    sp5C = random_u32();
    func_151A26EC(&sp84, &sp6C, &sp78, 0x3F7CA4E3, (sp58 * D_800A0FC8) + D_800A0FCC, (sp64 * 200.0f) + 150.0f, (sp5C % 26U) + 0x28, (random_u32() % 201U) + 0x37, 0x1E, 0x14, 0, -1, 0x34, 0x35, 0x34, (s32) (*(s32 *)((char *)(arg6) + 0xC)), (s32) (*(s32 *)((char *)(arg6) + 0x1)));
}

void func_150E05F8(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 var_v0;

    temp_f2 = D_800DBFF0->unk300 - (f32) (*(f32 *)((char *)(arg0) + 0x14));
    temp_f12 = D_800DBFF0->unk2F8 - (f32) (*(f32 *)((char *)(arg0) + 0x10));
    temp_f14 = D_800DBFF0->unk2FC - (f32) (*(f32 *)((char *)(arg0) + 0x12));
    temp_f0 = sqrtf((temp_f2 * temp_f2) + ((temp_f12 * temp_f12) + (temp_f14 * temp_f14)));
    if (temp_f0 <= D_800A0FD0) {
        var_v0 = 0xFF;
    } else if (D_800A0FD4 <= temp_f0) {
        var_v0 = 0;
    } else {
        var_v0 = (s32) (255.0f - ((temp_f0 - D_800A0FD0) * (1.0f / (D_800A0FD4 - D_800A0FD0)) * 255.0f));
    }
    (*(s8 *)((char *)(arg0) + 0x8A)) = (s8) var_v0;
}

void func_150E06D8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void * sp64;
    f32 sp5C;
    f32 sp58;
    void *sp54;
    void * *sp50;
    u32 sp48;
    u32 sp44;
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp54 = (arg1 * 0xC) + &D_800A0F70;
        sp50 = &sp64;
        func_15145EA4(&sp54, &sp50, (*(s32 *)((char *)(arg0) + 0x1D4)) + (D_80088988 << 6), 1);
        sp5C = (random_float() * 1.0f) + 2.0f;
        sp58 = (random_float() * 14.0f) + 28.0f;
        sp44 = random_u32();
        sp48 = random_u32();
        temp_v0 = arg1 * 0xC;
        func_15102B38(arg0, D_80088988, temp_v0 + &D_800A0F70, temp_v0 + &D_800A0F88, &sp58, (sp44 % 3U) + 4, (sp48 % 156U) + 0x64, (random_float() * 300.0f) + 400.0f, &sp64, 0xFF, 0, -1, (s32) arg2, arg3);
    }
}
