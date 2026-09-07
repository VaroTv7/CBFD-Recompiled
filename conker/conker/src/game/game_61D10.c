/**
 * Auto-decompiled from asm/61D10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
void *func_1502CCFC(); /* extern */
void * func_1502D54C();                        /* extern */
s32 func_1502DB20();                              /* extern */
s32 func_15031070();    /* extern */
void * func_15034728();                  /* extern */
void * func_1507C3E0();              /* extern */
s32 func_150A6360(); /* extern */
void * func_150A7A48();                   /* extern */
s32 func_150AD960();              /* extern */
s32 func_150AD9A0();                   /* extern */
u32 random_u32();                /* extern */
void * guMtxF2L2();                              /* extern */
extern s32 D_80082FC0;
extern s32 D_80083140;
extern f32 D_80097D40;
extern f32 D_80097D44;
extern f32 D_80097D48;
extern f32 D_80097D4C;
extern f32 D_80097D50;
extern f32 D_80097D54;
extern f32 D_80097D58;
extern f32 D_80097D5C;
extern f32 D_80097D60;
extern f32 D_80097D70;
extern f32 D_80097D74;
extern u16 D_800C3E7A;
extern void *D_800C3E88;
extern s32 D_800C3E8C;
extern s16 D_800C3EF0;
extern u8 D_800C3F00;
extern s32 D_800C3F08;
extern s32 D_800D9C10;
void func_15034F30(void *arg0, void *arg1, s32 arg2, void *arg3, void * *arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14, f32 arg15, f32 arg16, s32 arg17, s32 arg18);
void * func_150356C8();

void *func_15034860(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp24;
    s32 sp20;
    s32 sp18;
    f32 temp_f18;
    f32 var_f18;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f6;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 var_v0;
    s16 var_v1_2;
    s32 temp_f16;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_3;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t1;
    s8 temp_v0_4;
    s8 temp_v1_2;
    s8 var_a2_2;
    u32 temp_t5;
    u8 temp_a0;
    u8 temp_t7;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_5;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 var_a0_2;
    u8 var_v1;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x4));
    if (temp_v0 == 0x70) {
        var_a0 = 1;
    } else {
        var_a0 = 0;
    }
    if (temp_v0 == 0x7C) {
        var_t1 = 4;
        var_a2 = 0;
    } else {
        var_t1 = 0;
        var_a2 = 2;
    }
    if ((temp_v0 != 0x69) && (temp_v0 != 0x7C) && (temp_v0 != 0x87)) {
        var_t0 = 0xA;
    } else {
        var_t0 = 0;
    }
    if (arg2 != 0xFF) {
        temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x201));
        if (temp_v0_2 == 0) {
            var_f2 = D_80097D40;
        } else {
            var_f6 = (f32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                var_f6 += 4294967296.0f;
            }
            var_f2 = var_f6 * D_80097D44;
        }
        temp_t7 = (*(s32 *)((char *)(arg1) + 0x1FE));
        var_a3 = 0x28;
        var_f18 = (f32) temp_t7;
        if ((s32) temp_t7 < 0) {
            var_f18 += 4294967296.0f;
        }
        temp_f16 = (s32) (var_f18 * var_f2 * D_80097D48);
        if (var_a0 == 0) {
            (*(s16 *)((char *)(arg0) + 0x0)) = (s16) ((arg2 * 6) + var_t1);
            (*(s16 *)((char *)(arg0) + 0x2)) = (s16) temp_f16;
            arg0 = (char *)(arg0) + 4;
        }
        D_800C3EF0 = (s16) temp_f16;
        if (var_a0 == 0) {
            (*(s16 *)((char *)(arg0) + 0x0)) = (s16) ((arg2 * 6) + var_a2);
            (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (s32) ((f32) ((s32) ((*(s16 *)((char *)(arg1) + 0x202)) * (*(s16 *)((char *)(arg1) + 0x1FE))) / 255) * D_80097D4C * D_80097D50);
            arg0 = (char *)(arg0) + 4;
        }
        var_a2_2 = 0x3C;
        if ((*(s32 *)((char *)(arg1) + 0x4)) == 0x42) {
            var_a3 = 0x50;
            var_a2_2 = 0x78;
        }
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x1FF));
        if (temp_a0 == 0) {
            (*(s8 *)((char *)(arg1) + 0x203)) = (s8) -var_a2_2;
            goto block_37;
        }
        if (temp_a0 == 2) {
            (*(s32 *)((char *)(arg1) + 0x203)) = var_a2_2;
            (*(s32 *)((char *)(arg1) + 0x202)) = 0;
            goto block_37;
        }
        if (((*(s32 *)((char *)(arg1) + 0x203)) == 0) || (var_v1 = (*(s32 *)((char *)(arg1) + 0x1FE)), (var_v1 == 0)) || (var_v1 == 0xFF)) {
            sp30 = (s32) var_a2_2;
            sp34 = var_a3;
            sp24 = var_t0;
            sp2C = var_t1;
            var_v1 = (*(s32 *)((char *)(arg1) + 0x1FE));
            (*(s8 *)((char *)(arg1) + 0x203)) = (s8) ((random_u32(temp_a0, var_a2_2, var_a3) % (u32) (var_a2_2 - var_a3)) + var_a3);
            if (var_v1 == 0xFF) {
                var_v1 = (*(s32 *)((char *)(arg1) + 0x1FE));
                (*(s8 *)((char *)(arg1) + 0x203)) = (s8) -(*(s8 *)((char *)(arg1) + 0x203));
            } else if ((var_v1 == 0) && (var_t0 != 0)) {
                sp24 = var_t0;
                sp2C = var_t1;
                (*(s8 *)((char *)(arg1) + 0x202)) = (s8) ((random_u32() % (u32) (var_t0 * 2)) - var_t0);
block_37:
                var_v1 = (*(s32 *)((char *)(arg1) + 0x1FE));
            }
        }
        temp_v0_3 = var_v1 + (*(s32 *)((char *)(arg1) + 0x203));
        if (temp_v0_3 < 0) {
            var_v0 = 0;
        } else {
            var_v1_2 = temp_v0_3;
            if (temp_v0_3 >= 0x100) {
                var_v1_2 = 0xFF;
            }
            var_v0 = var_v1_2;
        }
        (*(u8 *)((char *)(arg1) + 0x1FE)) = (u8) var_v0;
        if ((*(s32 *)((char *)(arg1) + 0x1FF)) == 3) {
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x200));
            if ((s32) temp_v1 >= D_800BE9E4) {
                (*(u8 *)((char *)(arg1) + 0x200)) = (u8) (temp_v1 - D_800BE9E4);
            } else {
                (*(s32 *)((char *)(arg1) + 0x200)) = 0U;
                (*(s32 *)((char *)(arg1) + 0x1FF)) = 0U;
            }
        }
    }
    if (arg3 != 0xFF) {
        temp_v0_4 = (*(s32 *)((char *)(arg1) + 0x208));
        var_a2_3 = 1;
        if (temp_v0_4 == 0) {
            var_f2_2 = D_80097D54;
        } else {
            var_f2_2 = (f32) temp_v0_4 * D_80097D58;
        }
        if (var_f2_2 < 0.0f) {
            var_a2_3 = -1;
        }
        temp_f18 = (f32) (*(f32 *)((char *)(arg1) + 0x204)) * fabsf(var_f2_2);
        (*(s16 *)((char *)(arg0) + 0x0)) = (s16) ((arg3 * 6) + var_t1);
        var_a0_2 = 0;
        var_a3_2 = 0;
        (*(s16 *)((char *)(arg0) + 0x2)) = (s16) -(s32) (temp_f18 * D_80097D5C);
        arg0 = (char *)(arg0) + 4;
        temp_v0_5 = (*(s32 *)((char *)(arg1) + 0x206));
        if (temp_v0_5 == 0) {
            if (var_a2_3 > 0) {
                (*(s32 *)((char *)(arg1) + 0x209)) = -0x3C;
            } else {
                (*(s32 *)((char *)(arg1) + 0x209)) = 0x3C;
            }
        } else if (temp_v0_5 == 2) {
            if (var_a2_3 > 0) {
                (*(s32 *)((char *)(arg1) + 0x209)) = 0x3C;
            } else {
                (*(s32 *)((char *)(arg1) + 0x209)) = -0x3C;
            }
        } else {
            temp_v1_2 = (*(s32 *)((char *)(arg1) + 0x209));
            if (temp_v1_2 == 0) {
                goto block_80;
            }
            temp_v0_6 = (*(s32 *)((char *)(arg1) + 0x204));
            if (var_a2_3 > 0) {
                if ((temp_v0_6 < 0) && (temp_v1_2 < 0)) {
                    var_a3_2 = 1;
                } else {
                    if ((temp_v0_6 == 0) && (temp_v1_2 < 0)) {
                        goto block_80;
                    }
                    if (temp_v0_6 == 0xFF) {
                        var_a3_2 = 1;
                        goto block_80;
                    }
                }
            } else if ((temp_v0_6 > 0) && (temp_v1_2 > 0)) {
                var_a3_2 = 1;
            } else {
                if ((temp_v0_6 == 0) && (temp_v1_2 > 0)) {
                    goto block_80;
                }
                if (temp_v0_6 == -0xFF) {
                    var_a3_2 = 1;
block_80:
                    var_a0_2 = 1;
                }
            }
        }
        if (var_a0_2 != 0) {
            sp20 = var_a2_3;
            sp18 = var_a3_2;
            temp_t5 = random_u32(var_a0_2, (s8) arg1, var_a2_3, var_a3_2) % 20U;
            (*(s8 *)((char *)(arg1) + 0x209)) = (s8) (temp_t5 + 0x28);
            (*(s8 *)((char *)(arg1) + 0x209)) = (s8) ((*(s8 *)((char *)(arg1) + 0x209)) * var_a2_3);
        }
        if (var_a3_2 != 0) {
            (*(s8 *)((char *)(arg1) + 0x209)) = (s8) -(*(s8 *)((char *)(arg1) + 0x209));
        }
        (*(s16 *)((char *)(arg1) + 0x204)) = (s16) ((*(s16 *)((char *)(arg1) + 0x204)) + (*(s16 *)((char *)(arg1) + 0x209)));
        if (var_a2_3 > 0) {
            temp_v0_7 = (*(s32 *)((char *)(arg1) + 0x204));
            if ((temp_v0_7 < 0) && ((*(s32 *)((char *)(arg1) + 0x209)) < 0)) {
                (*(s32 *)((char *)(arg1) + 0x204)) = 0;
            } else if (temp_v0_7 >= 0x100) {
                (*(s32 *)((char *)(arg1) + 0x204)) = 0xFF;
            }
        } else {
            temp_v0_8 = (*(s32 *)((char *)(arg1) + 0x204));
            if ((temp_v0_8 > 0) && ((*(s32 *)((char *)(arg1) + 0x209)) > 0)) {
                (*(s32 *)((char *)(arg1) + 0x204)) = 0;
            } else if (temp_v0_8 < -0xFF) {
                (*(s32 *)((char *)(arg1) + 0x204)) = -0xFF;
            }
        }
        if ((*(s32 *)((char *)(arg1) + 0x206)) == 3) {
            temp_v1_3 = (*(s32 *)((char *)(arg1) + 0x207));
            if ((s32) temp_v1_3 >= D_800BE9E4) {
                (*(u8 *)((char *)(arg1) + 0x207)) = (u8) (temp_v1_3 - D_800BE9E4);
            } else {
                (*(s32 *)((char *)(arg1) + 0x207)) = 0U;
                (*(s32 *)((char *)(arg1) + 0x206)) = 0U;
            }
        }
    }
    return arg0;
}

void func_15034EB4(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f0;
    s32 temp_v1;
    void *temp_a2;
    void *temp_v0;

    if (D_800C3EF0 != 0) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1D4));
        temp_a2 = (arg1 << 6) + temp_v1;
        temp_v0 = (arg2 << 6) + temp_v1;
        temp_f0 = (f32) D_800C3EF0 * D_80097D60 * (*(f32 *)((char *)(arg0) + 0x14C));
        (*(f32 *)((char *)(temp_a2) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x34)) - temp_f0);
        if (arg2 != -1) {
            (*(f32 *)((char *)(temp_v0) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x34)) - temp_f0);
        }
    }
}

void func_15034F20(void) {
    D_800C3F00 = 0;
}

void func_15034F30(void *arg0, void *arg1, s32 arg2, void *arg3, void * *arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14, f32 arg15, f32 arg16, s32 arg17, s32 arg18) {
    f32 sp164;
    f32 sp150;
    f32 sp110;
    f32 spD0;
    void * sp84;
    void * *temp_s0;
    void * *temp_s1;
    void * *temp_s1_2;
    void * *var_s0;
    void * *var_s0_2;
    void * *var_s1;
    void * *var_s1_2;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f12;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    void *temp_v0;
    void *temp_v0_2;

    guMtxIdentF(&sp150);
    if ((arg2 == 1) || (arg2 == 0)) {
        var_s3 = 0;
        sp164 = -1.0f;
        if (arg5 > 0) {
            var_s4 = 0;
            var_s0 = arg4;
            do {
                temp_v0 = (char *)(arg3) + var_s4;
                if (arg17 != 0) {
                    var_s2 = var_s3 << 6;
                    var_s1 = &sp84;
                    guMtxL2F(&sp84, var_s2 + (char *)(arg3));
                } else {
                    var_s2 = var_s3 << 6;
                    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0) + 0x1C)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0) + 0x2C)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0) + 0x3C)) = 1.0f;
                    var_s1 = var_s2 + (char *)(arg3);
                }
                func_150A7A48(var_s1, &sp150, var_s0);
                temp_f0 = (*(s32 *)((char *)(var_s1) + 0x34));
                (*(f32 *)((char *)(var_s0) + 0x34)) = (f32) (temp_f0 - (2.0f * (temp_f0 - arg7)));
                if (arg18 != 0) {
                    temp_s1 = var_s2 + (char *)(arg4);
                    bcopy(temp_s1, &sp84, 0x40);
                    guMtxF2L2(&sp84, temp_s1);
                }
                var_s3 += 1;
                var_s4 += 0x40;
                var_s0 = (char *)(var_s0) + 0x40;
            } while (var_s3 != arg5);
        }
        var_f12 = arg14;
        temp_f2 = arg12 - arg7;
        if (arg15 < temp_f2) {
            (*(s32 *)((char *)(arg1) + 0x4)) = 0;
        } else if (temp_f2 < var_f12) {
            if (arg2 == 0) {
                var_f12 = 10.0f;
                if (temp_f2 < 10.0f) {
                    (*(s8 *)((char *)(arg1) + 0x4)) = (s8) (u32) ((arg16 / 10.0f) * temp_f2);
                } else {
                    (*(s8 *)((char *)(arg1) + 0x4)) = (s8) (u32) arg16;
                }
            } else {
                (*(s8 *)((char *)(arg1) + 0x4)) = (s8) (u32) arg16;
            }
        } else {
            (*(s8 *)((char *)(arg1) + 0x4)) = (s8) (u32) (arg16 - ((arg16 * (temp_f2 - var_f12)) / (arg15 - var_f12)));
        }
        goto block_33;
    }
    if (arg2 == 2) {
        sp150 = -1.0f;
        func_150A8050(&sp110, 0, -arg10, 0);
        func_150A8050(&spD0, 0, arg10, 0);
        var_s3_2 = 0;
        var_s4_2 = 0;
        var_s0_2 = arg4;
        if (arg5 > 0) {
            do {
                temp_v0_2 = (char *)(arg3) + var_s4_2;
                if (arg17 != 0) {
                    var_s2_2 = var_s3_2 << 6;
                    var_s1_2 = &sp84;
                    guMtxL2F(&sp84, var_s2_2 + (char *)(arg3));
                } else {
                    var_s2_2 = var_s3_2 << 6;
                    (*(s32 *)((char *)(temp_v0_2) + 0xC)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0_2) + 0x1C)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0_2) + 0x2C)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0_2) + 0x3C)) = 1.0f;
                    var_s1_2 = var_s2_2 + (char *)(arg3);
                }
                bcopy(var_s1_2, var_s0_2, 0x40);
                (*(f32 *)((char *)(var_s0_2) + 0x30)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x30)) - arg6);
                (*(f32 *)((char *)(var_s0_2) + 0x34)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x34)) - arg7);
                (*(f32 *)((char *)(var_s0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x38)) - arg8);
                func_150A7A48(var_s0_2, &sp110, var_s0_2);
                func_150A7A48(var_s0_2, &sp150, var_s0_2);
                func_150A7A48(var_s0_2, &spD0, var_s0_2);
                (*(f32 *)((char *)(var_s0_2) + 0x30)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x30)) + arg6);
                (*(f32 *)((char *)(var_s0_2) + 0x34)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x34)) + arg7);
                (*(f32 *)((char *)(var_s0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(var_s0_2) + 0x38)) + arg8);
                if (arg18 != 0) {
                    temp_s1_2 = var_s2_2 + (char *)(arg4);
                    bcopy(temp_s1_2, &sp84, 0x40);
                    guMtxF2L2(&sp84, temp_s1_2);
                }
                var_s3_2 += 1;
                var_s4_2 += 0x40;
                var_s0_2 = (char *)(var_s0_2) + 0x40;
            } while (var_s3_2 != arg5);
        }
        var_f12 = arg14;
        temp_f2_2 = (f32) func_150AD960((s32) arg6, (s32) arg8, (s32) arg11, (s32) arg13);
        if (arg15 < temp_f2_2) {
            (*(s32 *)((char *)(arg1) + 0x4)) = 0;
        } else if (temp_f2_2 < var_f12) {
            (*(s8 *)((char *)(arg1) + 0x4)) = (s8) (u32) arg16;
        } else {
            (*(s8 *)((char *)(arg1) + 0x4)) = (s8) (u32) (arg16 - ((arg16 * (temp_f2_2 - var_f12)) / (arg15 - var_f12)));
        }
block_33:
        if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x9C)) != 0)) {
            temp_s0 = (*(s32 *)((char *)(arg0) + 0x1D4));
            (*(s32 *)((char *)(arg0) + 0x1D4)) = arg4;
            func_15034728(var_f12, arg15, arg0);
            (*(s32 *)((char *)(arg0) + 0x1D4)) = temp_s0;
        }
    }
}

void *func_150356C8(void) {
    u8 temp_t6;

    temp_t6 = D_800C3F00 + 1;
    if (D_800C3F00 == 0xF) {
        return NULL;
    }
    D_800C3F00 = temp_t6;
    return ((temp_t6 & 0xFF) * 0xC) - 0xC + &D_800C3F08;
}

s32 func_15035714(s32 arg0, void *arg1, void *arg2, f32 arg3) {
    s32 sp28;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    u16 temp_t8;
    void *temp_v0;

    sp28 = D_800BE628;
    temp_v0 = *(&D_800D1C90 + ((*(s32 *)((char *)(arg1) + 0x4)) * 4));
    temp_t8 = (*(s32 *)((char *)(temp_v0) + 0xE));
    var_f0 = (f32) temp_t8;
    if ((s32) temp_t8 < 0) {
        var_f0 += 4294967296.0f;
    }
    temp_f2 = (*(s32 *)((char *)(arg1) + 0x150));
    temp_f12 = (f32) (*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f2;
    if ((arg0 == 1) || (arg0 == 0)) {
        var_f2 = arg3 - (((*(s32 *)((char *)(arg1) + 0x18)) + temp_f12) - arg3);
    } else {
        var_f2 = (*(s32 *)((char *)(arg1) + 0x18)) + temp_f12;
    }
    if (func_150A6360(temp_f12, arg3, sp28, &D_800D9C10, (*(s32 *)((char *)(arg2) + 0x30)), var_f2, (*(s32 *)((char *)(arg2) + 0x38)), var_f0 * (*(s32 *)((char *)(arg1) + 0x14C)), var_f0 * temp_f2, D_80097D70) == 0) {
        return 1;
    }
    return 0;
}

void func_15035808(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9) {
    s32 spC4;
    void *spC0;
    void * spB0;
    s32 sp80;
    void * *var_v1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f8;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s6;
    s32 var_v0;
    u8 temp_s0;
    u8 var_s2;
    void *temp_a3;
    void *temp_s3;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s0;

    f32 spC8;
    f32 spCC;
    var_s1 = 0x578;
    if ((D_800C3F00 != 0xF) && ((arg0 != 0) || ((*(s32 *)((char *)(&gObjects) + (arg1 * 0x32C))) == 1)) && (temp_s4 = (char *)(&gObjects) + (arg1 * 0x32C), ((*(u32 *)((char *)(temp_s4) + 0x1D4)) != NULL)) && (((*(u32 *)((char *)(temp_s4) + 0x74)) & 0xF) != 0xF) && (temp_s0 = (*(u32 *)((char *)(temp_s4) + 0x7)), (temp_s0 != 0)) && (temp_v0 = func_1502DB20((*(u32 *)((char *)(temp_s4) + 0x4))), (((u32) (D_800C3E7C << 6) < (u32) (((char *)(D_800C3E88) + (temp_v0 << 6)) - D_800C3E8C)) == 0))) {
        if (D_800C35EA == 1) {
            var_s1 = 0x2710;
        }
        temp_f2 = (f32) var_s1;
        temp_f0 = (f32) func_150AD9A0((s32) (D_800DBFF0->unk2F8 - (*(f32 *)((char *)(temp_s4) + 0x14))), (s32) (D_800DBFF0->unk2FC - (*(f32 *)((char *)(temp_s4) + 0x18))), (s32) (D_800DBFF0->unk300 - (*(f32 *)((char *)(temp_s4) + 0x1C))));
        if (!(temp_f2 < temp_f0)) {
            var_s6 = 0x100;
            temp_f12 = (f32) (var_s1 - 0xC8);
            if (temp_f12 < temp_f0) {
                var_s6 = (s32) (((temp_f2 - temp_f0) * 256.0f) / temp_f12);
            }
            if (temp_s0 != 0xFF) {
                var_s6 = (s32) (var_s6 * temp_s0) >> 8;
            }
            temp_v0_2 = func_150356C8();
            if (temp_v0_2 != NULL) {
                (*(s32 *)((char *)(temp_v0_2) + 0x0)) = (void * *) D_800C3E88;
                func_1502D54C(arg1, &spC4);
                (*(s8 *)((char *)(temp_v0_2) + 0x5)) = (s8) spC4;
                (*(s8 *)((char *)(temp_v0_2) + 0x6)) = (s8) spC8;
                (*(s8 *)((char *)(temp_v0_2) + 0x7)) = (s8) spCC;
                (*(s32 *)((char *)(temp_v0_2) + 0xB)) = 0;
                (*(s8 *)((char *)(temp_v0_2) + 0x8)) = (s8) arg1;
                (*(u8 *)((char *)(temp_v0_2) + 0x9)) = (u8) (*(u8 *)((char *)(temp_s4) + 0x3B));
                temp_a3 = (*(s32 *)((char *)(temp_s4) + 0x1D4));
                spC0 = temp_a3;
                func_15034F30(temp_s4, temp_v0_2, arg0, temp_a3, (*(s32 *)((char *)(temp_v0_2) + 0x0)), temp_v0, arg2, arg3, arg4, arg5, arg6, (*(s32 *)((char *)(temp_s4) + 0x14)), (*(s32 *)((char *)(temp_s4) + 0x18)), (*(s32 *)((char *)(temp_s4) + 0x1C)), arg7, arg8, arg9, 0);
                (*(u8 *)((char *)(temp_v0_2) + 0x4)) = (u8) ((s32) ((*(u8 *)((char *)(temp_v0_2) + 0x4)) * var_s6) >> 8);
                if (func_15035714(arg0, temp_s4, spC0, arg3) != 0) {
                    D_800C3F00 -= 1;
                    return;
                }
                D_800C3E88 = (char *)(D_800C3E88) + (temp_v0 << 6);
                D_800C3E7A += temp_v0;
                var_s0 = D_800C3EE0;
                if (var_s0 != NULL) {
loop_19:
                    temp_s3 = (*(s32 *)((char *)(var_s0) + 0x54));
                    if (((*(s32 *)((char *)(var_s0) + 0x0)) != (*(s32 *)((char *)(temp_s4) + 0x3B))) || ((*(s32 *)((char *)(var_s0) + 0x3)) == 0)) {
                        var_s0 = temp_s3;
                        goto block_33;
                    }
                    temp_v0_3 = func_150356C8();
                    if (temp_v0_3 != NULL) {
                        (*(s8 *)((char *)(temp_v0_3) + 0x5)) = (s8) spC4;
                        (*(s8 *)((char *)(temp_v0_3) + 0x6)) = (s8) spC8;
                        (*(s8 *)((char *)(temp_v0_3) + 0x7)) = (s8) spCC;
                        (*(s32 *)((char *)(temp_v0_3) + 0xB)) = 1;
                        (*(s8 *)((char *)(temp_v0_3) + 0x8)) = (s8) arg1;
                        (*(u8 *)((char *)(temp_v0_3) + 0x9)) = (u8) (*(u8 *)((char *)(temp_s4) + 0x3B));
                        (*(u8 *)((char *)(temp_v0_3) + 0xA)) = (u8) (*(u8 *)((char *)(var_s0) + 0x6));
                        if (func_15031070(var_s0, temp_s4, &spC0, &spB0) == 0) {
                            var_s0 = temp_s3;
                        } else {
                            temp_f8 = (s32) arg9;
                            temp_v0_4 = (*(s32 *)((char *)(var_s0) + 0x48));
                            var_s2 = 1;
                            if (temp_v0_4 != NULL) {
                                var_s2 = (*(s32 *)((char *)(temp_v0_4) + 0x3F4));
                            }
                            var_v1 = (*(s32 *)((char *)(((char *)(var_s0) + (D_800BE9C0 * 4))) + 0x4C));
                            if (var_v1 == NULL) {
                                sp80 = temp_f8;
                                (*(s32 *)((char *)(((char *)(var_s0) + (D_800BE9C0 * 4))) + 0x4C)) = allocate_memory(var_s2 << 6, 1, 2, 0);
                                var_v1 = (*(s32 *)((char *)(((char *)(var_s0) + (D_800BE9C0 * 4))) + 0x4C));
                            }
                            (*(s32 *)((char *)(temp_v0_3) + 0x0)) = var_v1;
                            var_v0 = 1;
                            if (((*(s32 *)((char *)(var_s0) + 0x34)) == 0) && ((*(s32 *)((char *)(var_s0) + 0x48)) == NULL)) {
                                var_v0 = 0;
                            }
                            func_15034F30(NULL, temp_v0_3, arg0, spC0, var_v1, (s32) var_s2, arg2, arg3, arg4, arg5, arg6, (*(s32 *)((char *)(temp_s4) + 0x14)), (*(s32 *)((char *)(temp_s4) + 0x18)), (*(s32 *)((char *)(temp_s4) + 0x1C)), arg7, arg8, (s32) (f32) ((s32) (temp_f8 * (*(s32 *)((char *)(var_s0) + 0x3))) >> 8), var_v0);
                            var_s0 = temp_s3;
                            (*(u8 *)((char *)(temp_v0_3) + 0x4)) = (u8) ((s32) ((*(u8 *)((char *)(temp_v0_3) + 0x4)) * var_s6) >> 8);
                        }
block_33:
                        if (var_s0 != NULL) {
                            goto loop_19;
                        }
                    }
                }
            }
        }
    }
}

void *func_15035D6C(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void * *var_a2;
    s32 *temp_s4;
    s32 *var_a0_2;
    s32 temp_t6;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *var_a0;
    void *var_s3;

    var_a0 = arg0;
    if (D_800C3F00 == 0) {

    } else {
        (*(s32 *)((char *)(var_a0) + 0x4)) = 0x200;
        var_a0_2 = (char *)(var_a0) + 8;
        (*(s32 *)((char *)(var_a0) + 0x0)) = 0xD9FFFFFF;
        var_a2 = &D_800C3F08;
        if ((s32) D_800C3F00 > 0) {
            do {
                if ((*(s32 *)((char *)(var_a2) + 0xB)) != 1) {
                    var_s3 = (D_800C3F00 * 0xC) + &D_800C3F08;
                } else if ((*(s32 *)((char *)(arg1) + 0x0)) != (*(s32 *)((char *)(var_a2) + 0x9))) {
                    var_s3 = (D_800C3F00 * 0xC) + &D_800C3F08;
                } else if ((*(s32 *)((char *)(arg1) + 0x6)) != (*(s32 *)((char *)(var_a2) + 0xA))) {
                    var_s3 = (D_800C3F00 * 0xC) + &D_800C3F08;
                } else {
                    temp_a0 = var_a0_2 + 8;
                    temp_t6 = (s32) ((*(s32 *)((char *)(var_a2) + 0x4)) * (*(s32 *)((char *)(arg1) + 0x3))) >> 8;
                    (*(s32 *)((char *)(var_a0_2) + 0x0)) = 0xE7000000;
                    (*(s32 *)((char *)(var_a0_2) + 0x4)) = 0;
                    (*(s32 *)((char *)(var_a0_2) + 0x8)) = 0xDB06000C;
                    temp_a0_2 = (char *)(temp_a0) + 8;
                    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (*(s32 *)((char *)(var_a2) + 0x0));
                    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = (s32) ((arg2 << 0x18) | ((arg3 & 0xFF) << 0x10) | ((arg4 & 0xFF) << 8) | (temp_t6 & 0xFF));
                    temp_a0_3 = (char *)(temp_a0_2) + 8;
                    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xFB000000;
                    var_v0 = 0;
                    if (temp_t6 < 0xFF) {
                        (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xDB060020;
                        (*(s32 *)((char *)(temp_a0_3) + 0x4)) = &D_80082FC0;
                        var_a0_2 = (char *)(temp_a0_3) + 8;
                    } else {
                        (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xDB060020;
                        (*(s32 *)((char *)(temp_a0_3) + 0x4)) = &D_80083140;
                        var_a0_2 = (char *)(temp_a0_3) + 8;
                    }
                    if ((s32) (*(s32 *)((char *)(arg1) + 0x14)) > 0) {
                        do {
                            temp_s4 = var_a0_2;
                            if (!((*(s32 *)((char *)(arg1) + 0x13)) & (1 << var_v0))) {
                                (*(s32 *)((char *)(temp_s4) + 0x0)) = 0xDE000000;
                                var_a0_2 += 8;
                                (*(s32 *)((char *)(temp_s4) + 0x4)) = (s32) (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x24))) + (var_v0 * 4)));
                            }
                            var_v0 += 1;
                        } while (var_v0 < (s32) (*(s32 *)((char *)(arg1) + 0x14)));
                    }
                    var_s3 = (D_800C3F00 * 0xC) + &D_800C3F08;
                }
                var_a2 = (char *)(var_a2) + 0xC;
            } while ((u32) var_a2 < (u32) var_s3);
        }
        (*(s32 *)((char *)(var_a0_2) + 0x0)) = 0xD9FFFDFF;
        (*(s32 *)((char *)(var_a0_2) + 0x4)) = 0;
        var_a0 = var_a0_2 + 8;
    }
    return var_a0;
}

void *func_15035FE8(void *arg0, void * arg1) {
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    void * *var_s0;
    u8 temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *var_s1;
    void *var_v1;

    var_s1 = arg0;
    if (D_800C3F00 == 0) {

    } else {
        (*(s32 *)((char *)(var_s1) + 0x4)) = 0x200004;
        temp_s1 = (char *)(var_s1) + 8;
        (*(s32 *)((char *)(var_s1) + 0x0)) = 0xD9FFFFFF;
        (*(s32 *)((char *)(var_s1) + 0x8)) = 0xD9EEFFFF;
        (*(s32 *)((char *)(temp_s1) + 0x4)) = 0;
        temp_s1_2 = (char *)(temp_s1) + 8;
        (*(s32 *)((char *)(temp_s1) + 0x8)) = 0xE2001E01;
        (*(s32 *)((char *)(temp_s1_2) + 0x4)) = 0;
        var_s1 = (char *)(temp_s1_2) + 8;
        temp_a0 = D_800C3F00;
        var_s0 = &D_800C3F08;
        if ((s32) temp_a0 > 0) {
            do {
                if ((*(s32 *)((char *)(var_s0) + 0xB)) != 0) {
                    var_v1 = (temp_a0 * 0xC) + &D_800C3F08;
                } else {
                    sp60 = 0xFF;
                    sp54 = (s32) (*(s32 *)((char *)(var_s0) + 0x5));
                    sp58 = (s32) (*(s32 *)((char *)(var_s0) + 0x6));
                    sp5C = (s32) (*(s32 *)((char *)(var_s0) + 0x7));
                    var_v1 = (D_800C3F00 * 0xC) + &D_800C3F08;
                    var_s1 = func_1502CCFC(var_s1, (*(s32 *)((char *)(var_s0) + 0x8)), arg1, (*(s32 *)((char *)(var_s0) + 0x0)), (s32) (*(s32 *)((char *)(var_s0) + 0x4)), &sp54, 0, 1);
                }
                var_s0 = (char *)(var_s0) + 0xC;
            } while ((u32) var_s0 < (u32) var_v1);
        }
    }
    return var_s1;
}

void func_15036148(void) {
    s16 sp92;
    void * sp90;
    void * sp8E;
    void * *var_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f22;
    s32 var_s1;
    u8 temp_v0;

    var_s0 = &gObjects;
    var_s1 = 0;
    if (!(D_800DBFF0->unk5F0 & 1)) {
        temp_f22 = D_80097D74;
        do {
            if (((*(s32 *)((char *)(var_s0) + 0x0)) != 0) && ((temp_v0 = (*(s32 *)((char *)(var_s0) + 0x5)), (temp_v0 == 0)) || (temp_v0 == 1))) {
                temp_f0 = (*(s32 *)((char *)(var_s0) + 0x118));
                if ((temp_f22 != temp_f0) && (temp_f0 < (*(s32 *)((char *)(var_s0) + 0x18))) && ((*(s32 *)((char *)(var_s0) + 0x180)) < temp_f0) && ((*(s32 *)((char *)(var_s0) + 0x28)) > 5.0f)) {
                    func_1507C3E0(var_s0, &sp92, &sp90, &sp8E);
                    temp_f0_2 = (*(s32 *)((char *)(var_s0) + 0x118));
                    if ((f32) sp92 < (temp_f0_2 - (*(f32 *)((char *)(var_s0) + 0x180)))) {
                        func_15035808(1, var_s1, (*(s32 *)((char *)(var_s0) + 0x14)), temp_f0_2, (*(s32 *)((char *)(var_s0) + 0x1C)), 0.0f, 0.0f, 100.0f, 150.0f, 0x42FE0000);
                    }
                }
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 0x32C;
        } while (var_s1 != 0x19);
    }
}
