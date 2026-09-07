/**
 * Auto-decompiled from asm/FB600.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15052590();                            /* extern */
void * func_15052F9C(); /* extern */
void * func_1505327C();             /* extern */
void * func_15063168();                            /* extern */
u16 random_u32();                                /* extern */
void * func_15143134();                /* extern */
s32 func_15144CEC(); /* extern */
s32 func_1515FF74();                    /* extern */
s32 memcpy();                 /* extern */
extern s32 D_800A07F0;
extern f32 D_800A07FC;
extern f32 D_800A0800;
extern s32 D_800A080F;
extern s32 D_800A0818;
extern f32 D_800A0820;
extern f32 D_800A0824;
extern f32 D_800A0828;
extern s32 D_800BE648;

s32 func_150CE150(void *arg0, s32 arg1, s32 arg2) {
    s8 sp916;
    s16 sp914;
    s8 sp912;
    s8 sp911;
    s8 sp910;
    s8 sp34;
    s32 sp30;
    f32 sp2C;
    f32 sp28;
    u8 sp24;
    void *sp20;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    sp910 = 1;
    sp911 = 1;
    sp912 = 0;
    sp916 = 2;
    sp30 = 0x2710;
    sp34 = 0;
    sp28 = D_800A07FC;
    sp2C = D_800A07FC;
    sp914 = arg1;
    sp20 = arg0;
    sp24 = (*(s32 *)((char *)(arg0) + 0x3B));
    var_v0 = func_1515FF74(&sp910, 0x8F0, arg2 & 0xFF);
    if (var_v0 != 0) {
        var_v0 = memcpy(var_v0 + 0x18, &sp20, 0x8F0);
    }
    return var_v0;
}

s32 func_150CE200(void *arg0) {
    void * sp40;
    void * sp3C;
    void * sp38;
    f32 sp34;
    void *sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_a3;
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f4;
    s32 temp_f8;
    u8 var_t5;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x18;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x18))) + 0x0)) == 0) {
        return 0;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
        return 0;
    }
    temp_a3 = (*(s32 *)((char *)(temp_v0) + 0x1D4));
    if (temp_a3 == 0) {
        (*(u8 *)((char *)(temp_v1) + 0x14)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x14)) & 0xFFFE);
    } else {
        sp28 = temp_v1;
        func_15143134(&D_800A07F0, &sp40, temp_a3 + 0xD00, temp_a3);
        if (func_15144CEC(&sp40, (char *)(sp28) + 0x28, &sp3C, &sp38, &sp34, D_80082FA4) != 0) {
            temp_f12 = (*(s32 *)((char *)(sp28) + 0x28));
            temp_f0 = (*(s32 *)((char *)(sp28) + 0x8)) * sp34;
            temp_f14 = (*(s32 *)((char *)(sp28) + 0x2C));
            temp_f2 = (*(s32 *)((char *)(sp28) + 0xC)) * sp34;
            temp_f18 = (s32) (temp_f12 - temp_f0);
            temp_f8 = (s32) (temp_f14 - temp_f2);
            (*(s32 *)((char *)(sp28) + 0x18)) = temp_f18;
            (*(s32 *)((char *)(sp28) + 0x1C)) = temp_f8;
            temp_f10 = (s32) (temp_f12 + temp_f0);
            (*(s32 *)((char *)(sp28) + 0x20)) = temp_f10;
            temp_f4 = (s32) (temp_f14 + temp_f2);
            (*(s32 *)((char *)(sp28) + 0x24)) = temp_f4;
            if ((D_800A0800 < (f32) temp_f18) || ((f32) temp_f10 < 0.0f) || (var_f0 = (f32) temp_f8, (var_f0 > 215.0f)) || ((f32) temp_f4 < 0.0f)) {
                var_t5 = (*(s32 *)((char *)(sp28) + 0x14)) & 0xFFFE;
                goto block_22;
            }
            if ((f32) (*(f32 *)((char *)(sp28) + 0x18)) < 0.0f) {
                (*(s32 *)((char *)(sp28) + 0x18)) = 0;
                var_f0 = (f32) (*(f32 *)((char *)(sp28) + 0x1C));
            }
            if (var_f0 < 0.0f) {
                (*(s32 *)((char *)(sp28) + 0x1C)) = 0;
            }
            if (D_800A0800 < (f32) (*(f32 *)((char *)(sp28) + 0x20))) {
                (*(s32 *)((char *)(sp28) + 0x20)) = 0x123;
            }
            if ((f32) (*(f32 *)((char *)(sp28) + 0x24)) > 215.0f) {
                (*(s32 *)((char *)(sp28) + 0x24)) = 0xD7;
            }
            (*(u8 *)((char *)(sp28) + 0x14)) = (u8) ((*(u8 *)((char *)(sp28) + 0x14)) | 1);
        } else {
            var_t5 = (*(s32 *)((char *)(sp28) + 0x14)) & 0xFFFE;
block_22:
            (*(s32 *)((char *)(sp28) + 0x14)) = var_t5;
        }
    }
    return 1;
}

void func_150CE450(void *arg0, s32 arg1) {
    s16 *var_a0;
    s16 *var_a0_2;
    s16 *var_a1;
    s32 temp_t3;
    s32 var_a0_3;
    s32 var_s0;
    u32 temp_a0;
    u32 temp_a3;
    u32 temp_t0;
    u32 temp_t0_2;
    u32 var_a2;
    u32 var_a2_2;
    u32 var_v0;
    u32 var_v1;
    u32 var_v1_2;
    u32 var_v1_3;
    void *temp_a2;
    void *temp_s3;

    temp_s3 = (char *)(arg0) + 0x18;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) & 1) {
        temp_a0 = (*(s32 *)((char *)(temp_s3) + 0x18));
        var_v0 = 0;
        var_a2 = temp_a0;
        var_v1 = temp_a0;
        if ((u32) (*(u32 *)((char *)(temp_s3) + 0x20)) >= temp_a0) {
            var_a0 = (char *)(temp_s3) + (temp_a0 * 2) + 0x30;
            do {
                *var_a0 = (s16) var_a2;
                var_v0 += (*(s32 *)((char *)(temp_s3) + 0x10));
                if (var_v0 >= 0x10000U) {
                    var_a2 = var_v1;
                    var_v0 -= 0x10000;
                }
                var_v1 += 1;
                var_a0 += 2;
            } while ((u32) (*(u32 *)((char *)(temp_s3) + 0x20)) >= var_v1);
            var_v0 = 0;
        }
        temp_t0 = (*(s32 *)((char *)(temp_s3) + 0x1C));
        var_a2_2 = temp_t0;
        var_v1_2 = temp_t0;
        if ((u32) (*(u32 *)((char *)(temp_s3) + 0x24)) >= temp_t0) {
            var_a0_2 = (char *)(temp_s3) + (var_v1_2 * 2) + 0x530;
            do {
                *var_a0_2 = (s16) var_a2_2;
                var_v0 += (*(s32 *)((char *)(temp_s3) + 0x10));
                if (var_v0 >= 0x10000U) {
                    var_a2_2 = var_v1_2;
                    var_v0 -= 0x10000;
                }
                var_v1_2 += 1;
                var_a0_2 += 2;
            } while ((u32) (*(u32 *)((char *)(temp_s3) + 0x24)) >= var_v1_2);
        }
        var_s0 = (s32) (*(s32 *)((char *)(temp_s3) + 0x24));
        if ((s32) (*(s32 *)((char *)(temp_s3) + 0x24)) >= (s32) (*(s32 *)((char *)(temp_s3) + 0x1C))) {
            do {
                temp_a3 = (*(s32 *)((char *)(temp_s3) + 0x18));
                temp_t0_2 = (*(s32 *)((char *)(temp_s3) + 0x20));
                if ((var_s0 != (*(s32 *)((char *)(temp_s3) + 0x24))) && (temp_a2 = (char *)(temp_s3) + (var_s0 * 2), ((*(s32 *)((char *)(temp_a2) + 0x532)) == (*(s32 *)((char *)(temp_a2) + 0x530))))) {
                    memcpy(arg1 + (((var_s0 * D_800BE620) + temp_a3) * 2), arg1 + ((((var_s0 + 1) * D_800BE620) + temp_a3) * 2), ((temp_t0_2 - temp_a3) * 2) + 2, temp_a3);
                } else {
                    var_v1_3 = temp_t0_2;
                    if ((s32) temp_t0_2 >= (s32) temp_a3) {
                        var_a0_3 = temp_t0_2 * 2;
                        var_a1 = (char *)(temp_s3) + var_a0_3 + 0x30;
                        do {
                            var_v1_3 -= 1;
                            temp_t3 = arg1 + (*var_a1 * 2);
                            var_a1 -= 2;
                            (*(s32 *)((char *)(arg1) + (var_s0 * D_800BE620 * 2) + var_a0_3)) = (*(s32 *)((char *)(temp_t3) + ((*(s32 *)((char *)(((char *)(temp_s3) + (var_s0 * 2))) + 0x530)) * D_800BE620 * 2)));
                            var_a0_3 -= 2;
                        } while ((s32) var_v1_3 >= (s32) (*(s32 *)((char *)(temp_s3) + 0x18)));
                    }
                }
                var_s0 -= 1;
            } while (var_s0 >= (s32) (*(s32 *)((char *)(temp_s3) + 0x1C)));
        }
    }
}

void func_150CE694(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0x18;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x18));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0x18)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x18))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x18)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, temp_t6, arg0);
    }
}

void func_150CE740(void *arg0) {
    u16 sp42;
    u16 sp40;
    u8 sp3F;
    u8 sp3E;
    f32 temp_f0;
    s16 var_a0;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s8 var_v1;
    u16 temp_t9;
    u8 temp_t6;
    u8 temp_v1;
    u8 var_a1;
    u8 var_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;

    var_t0 = 0;
    sp40 = (*(s32 *)((char *)(arg0) + 0x7A));
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x21) {
        var_t0 = 1;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x13C));
    if ((temp_v1 != 0) || (D_800BE616 != 0)) {
        var_a1 = 0;
        if (D_800BE616 != 0) {
            if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x84)) != 0) {
                sp3E = 0;
                sp3F = var_t0;
                func_1504C854(arg0, 0);
                var_a1 = sp3E;
            } else {
                D_800CC288 = (s32) (*(s32 *)((char *)(D_800BE710) + (gCurrentObjectIndex * 2)));
            }
        } else {
            D_800CC288 = (s32) *(&D_800BE648 + (temp_v1 * 2));
        }
        if ((D_800CC288 & 0x8000) && ((*(s32 *)((char *)(arg0) + 0x8A)) == 0) && ((*(s32 *)((char *)(arg0) + 0x28)) == 0.0f)) {
            var_a1 = 1;
        }
        if ((D_800CC288 & 0x6000) && ((*(s32 *)((char *)(arg0) + 0x28)) == 0.0f) && (((var_t0 != 0) && ((*(s32 *)((char *)(arg0) + 0x89)) != 0xFF)) || ((*(s32 *)((char *)(arg0) + 0x89)) == 0))) {
            var_a1 = 2;
        }
        if (var_a1 != 0) {
            if (var_t0 != 0) {
                var_a1 = (var_a1 + 4) & 0xFF;
            }
            if (D_800BE616 != 0) {
                var_a1 = (var_a1 + 2) & 0xFF;
            }
            (*(s32 *)((char *)(arg0) + 0x89)) = 0xB4U;
            temp_t6 = *(&D_800A080F + var_a1);
            (*(s32 *)((char *)(arg0) + 0x218)) = 0;
            (*(s32 *)((char *)(arg0) + 0x232)) = temp_t6;
            if (((temp_t6 & 0xFF) == 0x22) && ((*(s32 *)((char *)(arg0) + 0x2E4)) == 0)) {
                temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
                (*(s16 *)((char *)(temp_v0) + 0x1AA)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x1AA)) + 1);
            }
        }
        (*(s32 *)((char *)(arg0) + 0x124)) = 0U;
        if (((*(s32 *)((char *)(arg0) + 0x89)) == 0) && ((D_800BE616 == 0) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x84)) == 0))) {
            if (D_800BE616 != 0) {
                D_800CC280 = (s32) ((*(s32 *)((char *)((D_800DBFF0 + (gCurrentObjectIndex * 0x9A0))) + 0x37C)) * D_800A0820);
                sp3F = var_t0;
                sp42 = func_1505A630((f32) (*(f32 *)((char *)(D_800CC284) + 0x2)), (f32) (*(f32 *)((char *)(D_800CC284) + 0x3)), var_a1) + D_800CC280;
                (*(s32 *)((char *)(arg0) + 0x44)) = func_1505A5CC(D_800CC284);
            } else {
                temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C) + &gObjects;
                (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x44)) * 1.75f);
                sp42 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_2) + 0x31C))) + 0x4C));
            }
            if ((*(s32 *)((char *)(arg0) + 0x223)) == 0xD) {
                (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
            }
            if (var_t0 != 0) {
                if ((*(s32 *)((char *)(arg0) + 0x44)) < 5.0f) {
                    sp3F = var_t0;
                    sp42 = random_u32();
                    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((f32) (random_u32() % 60U) + 20.0f);
                }
                sp3F = var_t0;
                temp_t9 = ((random_u32() % 10000U) + sp42) - 0x1388;
                (*(s32 *)((char *)(arg0) + 0x78)) = temp_t9;
                (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (((*(f32 *)((char *)(arg0) + 0x44)) * 0.5f) + 22.0f);
                if (((((s32) ((*(s32 *)((char *)(arg0) + 0x76)) - temp_t9) >> 8) - 0x50) & 0xFF) < 0x60) {
                    (*(s32 *)((char *)(arg0) + 0x218)) = 0;
                    (*(s32 *)((char *)(arg0) + 0x232)) = 0x10U;
                }
            } else if ((*(s32 *)((char *)(arg0) + 0x44)) < 5.0f) {
                (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
                if ((*(s32 *)((char *)(arg0) + 0x232)) != 5) {
                    (*(u16 *)((char *)(arg0) + 0x78)) = (u16) (*(u16 *)((char *)(arg0) + 0x76));
                }
            } else {
                (*(s32 *)((char *)(arg0) + 0x78)) = sp42;
                if ((*(s32 *)((char *)(arg0) + 0x223)) == 1) {
                    var_v1 = 3;
                    if ((*(s32 *)((char *)(arg0) + 0x3C)) < 35.0f) {
                        var_v1 = 4;
                    }
                    (*(s32 *)((char *)(arg0) + 0x1E6)) = var_v1;
                    (*(s32 *)((char *)(arg0) + 0x1E5)) = var_v1;
                    if (((((s32) ((*(s32 *)((char *)(arg0) + 0x76)) - (*(s32 *)((char *)(arg0) + 0x78))) >> 8) - 0x50) & 0xFF) < 0x60) {
                        if ((*(s32 *)((char *)(arg0) + 0x3C)) > 35.0f) {
                            (*(s32 *)((char *)(arg0) + 0x232)) = 4U;
                        } else {
                            (*(s32 *)((char *)(arg0) + 0x232)) = 5U;
                        }
                    } else {
                        (*(s32 *)((char *)(arg0) + 0x232)) = 3U;
                    }
                    (*(s32 *)((char *)(arg0) + 0x218)) = 0;
                }
            }
        }
    }
    if ((D_800BE616 == 0) || ((s32) gCurrentObjectIndex >= D_8008FD8C) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x120)) == 0)) {
        sp3F = var_t0;
        func_15052590(arg0);
    }
    if ((gObjects[0].unk31C->unk27 != 0) && (((*(s32 *)((char *)(arg0) + 0x232)) != *(&D_800A0818 + var_t0)) || ((*(s32 *)((char *)(arg0) + 0x104)) != 0))) {
        gObjects[0].unk31C->unk27 = 0U;
        gObjects[0].disable_run = 0;
        gObjects[0].unk83 = 0;
        gObjects[0].immune = 0;
        (*(s32 *)((char *)(arg0) + 0x232)) = 0x11U;
    }
    temp_v0_3 = var_t0 + &D_800A0818;
    if (D_800BE616 == 0) {
        if ((*(s32 *)((char *)(arg0) + 0x232)) == (*(s32 *)((char *)(temp_v0_3) + 0x0))) {
            sp3F = var_t0;
            func_15052F9C(arg0, 0x431C0000, (*(s32 *)((char *)(temp_v0_3) + 0x4)), 4, 0, (s32) (*(s32 *)((char *)(temp_v0_3) + 0x2)), 0xFF, 0, 0, 0);
            goto block_68;
        }
        if ((D_800CC268 & 1) && ((*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C))) + 0x65)) == 0) && ((*(s32 *)((char *)(arg0) + 0x25C)) & 0x400)) {
            (*(s32 *)((char *)(arg0) + 0x124)) = 0U;
            sp3F = var_t0;
            func_1505327C(arg0, 0x42480000, 0x40400000, (*(s32 *)((char *)(temp_v0_3) + 0x0)), (s32) (*(s32 *)((char *)(temp_v0_3) + 0x4)));
block_68:
            var_t0 = sp3F;
        }
    }
    var_a0 = 0;
    if (((var_t0 != 0) && ((*(s32 *)((char *)(arg0) + 0x3C)) > 5.0f)) || ((var_t0 == 0) && ((*(s32 *)((char *)(arg0) + 0x84)) == 0xA))) {
        var_a0 = (*(s32 *)((char *)(arg0) + 0x76)) - (*(s32 *)((char *)(arg0) + 0x78));
        if (var_a0 >= 0x3001) {
            var_a0 = 0x3000;
        }
        if (var_a0 < -0x3000) {
            var_a0 = -0x3000;
        }
        if ((var_t0 != 0) && ((*(s32 *)((char *)(arg0) + 0x13C)) == 0)) {
            var_a0 = (s16) (var_a0 >> 1);
        }
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0xC4));
    (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) (temp_f0 + ((((f32) var_a0 * D_800A0824) - temp_f0) * D_800A0828));
    if (var_t0 != 0) {
        temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x2E4));
        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x2E8));
        (*(s32 *)((char *)(arg0) + 0x2E4)) = (s32) (temp_v0_4 + ((s32) ((s16) ((sp40 - (*(s32 *)((char *)(arg0) + 0x7A))) * 4) - (s16) temp_v0_4) / 8));
        (*(s32 *)((char *)(arg0) + 0x2E8)) = (s32) (temp_v1_2 + ((s32) (-var_a0 - temp_v1_2) / 8));
    }
    if ((D_800BE616 != 0) && (D_800CC268 != 0)) {
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x31C));
        if ((temp_v0_5 != NULL) && ((*(s32 *)((char *)(temp_v0_5) + 0x1AC)) != 0)) {
            func_15063168(arg0);
        }
    }
}
