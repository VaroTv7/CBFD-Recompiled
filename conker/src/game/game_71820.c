/**
 * Auto-decompiled from asm/71820.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * *allocate_memory();                        /* extern */
f32 func_150489B0();                      /* extern */
void * func_1505D024();                    /* extern */
void * func_1505D1C4(); /* extern */
void * func_1507C3E0();                   /* extern */
s32 func_150A3A70();                        /* extern */
s32 func_150A3FC4(); /* extern */
s32 func_150A43E0();              /* extern */
void * func_150A44F0();                       /* extern */
s32 func_150A4FA0();                        /* extern */
s32 func_150A6500();            /* extern */
s32 func_150AB1F0();        /* extern */
void * func_150AC3E4();          /* extern */
void * func_1510F800();                     /* extern */
s32 func_15145C90();                /* extern */
void func_15044660(void *arg0, f32 arg1, f32 arg2, void * arg3);
void * *func_15044964(); /* static */
u8 func_15045F8C(void *arg0, f32 arg1, s32 *arg2, f32 *arg3);
u8 func_15047004(void *arg0, f32 arg1, f32 *arg2);
s32 func_150470B0(void *arg0, f32 arg1, f32 *arg2);
extern s32 D_80085E80;
extern s32 D_80085E8C;
extern u8 D_80089120;
extern u8 D_80089123;
extern f32 D_80098D40;
extern f32 D_80098D44;
extern f32 D_80098D48;
extern f32 D_80098D4C;
extern f32 D_80098D50;
extern f32 D_80098D54;
extern f32 D_80098D58;
extern f32 D_80098D5C;
extern f32 D_80098D60;
extern f32 D_80098D64;
extern f32 D_80098D68;
extern s32 D_800CBD9C;
extern u8 D_800CBDD3;
extern f32 D_800CBDD8;
extern f32 D_800CBDDC;
extern f32 D_800CBDF4;
extern f32 D_800CBDF8;
extern s32 D_800D37E0;
extern s32 D_800D3830;
extern f32 D_800DBE68;
extern f32 D_800DBE6C;
extern f32 D_800DBE70;
extern f32 D_800DBE74;
s32 func_15044B78();
s32 func_150450CC(void *arg0, f32 arg1, f32 *arg2);
s32 func_1504554C(void *arg0, f32 arg1, f32 *arg2);
void func_15045714();
void func_15047390(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9);
void func_15047700(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10);
s32 func_15044ED0(void *arg0, f32 arg1, f32 *arg2);

void func_15044370(void) {
    D_800CBD9C = 0;
}

s32 func_15044380(f32 arg0, f32 arg1, void * arg2, void *arg3, s32 arg4, s32 arg5) {
    s32 sp5C;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s6;
    u8 *var_s1;
    u8 *var_s1_2;

    D_800CBDF4 = -32768.0f;
    D_800CBDF8 = -32768.0f;
    var_s6 = 0;
    (*(s32 *)((char *)(arg3) + 0x275)) = 0;
    func_15044660(arg3, arg0, arg1, arg2);
    var_s1 = &D_80089123;
    var_s0 = 3;
    sp5C = (s32) D_800CBDD3;
    do {
        if ((*var_s1 == 1) && ((var_s0 != 3) || !((*(s32 *)((char *)(arg3) + 0xF8)) & 0x200))) {
            func_1510F800(var_s0);
            if (D_800DBE62 != 0) {
                var_s6 += func_150AB1F0(arg0, arg1, arg2, arg3, arg4);
            }
        }
        var_s0 -= 1;
        var_s1 -= 1;
    } while (var_s0 >= 0);
    var_s1_2 = &D_80089120;
    var_s0_2 = 0;
    if (arg5 != 0) {
        do {
            if (*var_s1_2 == 1) {
                func_1510F800(var_s0_2);
                if (D_800DBE62 != 0) {
                    func_150AC3E4(arg0, arg1, arg2, arg3, 0);
                }
            }
            var_s0_2 += 1;
            var_s1_2 += 1;
        } while (var_s0_2 != 3);
    }
    func_1510F800(0);
    D_800CBDD3 = (u8) sp5C;
    return var_s6;
}

void func_1504452C(s32 *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f12;
    s16 var_f16;
    s32 *var_v1;
    s32 var_a2;
    void *temp_a3;
    void *var_a3;
    void *var_v0;

    var_v1 = arg0;
    var_a3 = arg1;
    var_a2 = 0xC;
    var_v0 = *var_v1 + arg7;
    var_f16 = (*(s32 *)((char *)(var_v0) + 0x4));
    var_f12 = (f32) (*(f32 *)((char *)(var_v0) + 0x0));
    if (0xC != 0x24) {
        do {
            var_a2 += 0xC;
            var_v1 += 4;
            temp_f6 = var_f12 - arg4;
            var_a3 = (char *)(var_a3) + 0xC;
            temp_f10 = (f32) var_f16 - arg6;
            (*(f32 *)((char *)(var_a3) - 0x8)) = (f32) ((f32) (*(f32 *)((char *)(var_v0) + 0x2)) - arg5);
            (*(f32 *)((char *)(var_a3) - 0xC)) = (f32) ((temp_f6 * arg3) + (temp_f10 * arg2));
            (*(f32 *)((char *)(var_a3) - 0x4)) = (f32) ((temp_f10 * arg3) - (temp_f6 * arg2));
            var_v0 = *var_v1 + arg7;
            var_f16 = (*(s32 *)((char *)(var_v0) + 0x4));
            var_f12 = (f32) (*(f32 *)((char *)(var_v0) + 0x0));
        } while (var_a2 != 0x24);
    }
    temp_a3 = (char *)(var_a3) + 0xC;
    temp_f6_2 = var_f12 - arg4;
    temp_f10_2 = (f32) var_f16 - arg6;
    (*(f32 *)((char *)(temp_a3) - 0xC)) = (f32) ((temp_f6_2 * arg3) + (temp_f10_2 * arg2));
    (*(f32 *)((char *)(temp_a3) - 0x4)) = (f32) ((temp_f10_2 * arg3) - (temp_f6_2 * arg2));
    (*(f32 *)((char *)(temp_a3) - 0x8)) = (f32) ((f32) (*(f32 *)((char *)(var_v0) + 0x2)) - arg5);
}

void func_15044658(void) {

}

void func_15044660(void *arg0, f32 arg1, f32 arg2, void * arg3) {
    s16 sp2E;
    void * sp2C;
    void * sp2A;
    f32 var_f4;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a3;
    u8 temp_v0_2;

    f32 sp20;
    func_1507C3E0(&sp2E, &sp2C, &sp2A);
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x0));
    if ((temp_v0 == 0x2D) || (temp_v0 == 0x2E) || (temp_v0 == 0x2C)) {
        var_a3 = sp20;
        D_800CBDDC = 0.0f;
        D_800CBDD8 = (f32) sp2E;
    } else {
        var_a3 = (s32) ((char *)(arg0) - (char *)(&gObjects)) / 812;
        sp2E = (s16) (s32) ((f32) sp2E + fabsf(arg2 - (*(s16 *)((char *)(arg0) + 0x18))));
    }
    if ((*(s32 *)((char *)(arg0) + 0x5)) == 5) {
        D_800CBDDC = 0.0f;
        D_800CBDD8 = (f32) sp2E;
        return;
    }
    if ((*(s32 *)((char *)(arg0) + 0xAD)) != 0) {
        D_800CBDD8 = (f32) sp2E;
        D_800CBDDC = (f32) (sp2E >> 1);
        return;
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x4));
    if (temp_v0_2 == 0x53) {
        D_800CBDD8 = (f32) sp2E;
        D_800CBDDC = (f32) (sp2E >> 1);
        return;
    }
    if (temp_v0_2 == 0x28) {
        D_800CBDD8 = (f32) (sp2E - 0x14);
        var_f4 = 20.0f + (D_800CBDD8 * 0.5f);
        goto block_20;
    }
    if ((var_a3 >= 0) && (var_a3 < D_8008FD8C) && ((*(s32 *)((char *)(arg0) + 0x28)) != 0.0f)) {
        D_800CBDD8 = (f32) sp2E;
        D_800CBDDC = (f32) (sp2E >> 1);
        return;
    }
    if (temp_v0_2 == 0x25) {
        temp_v0_3 = sp2E / 2;
        D_800CBDD8 = (f32) (sp2E - temp_v0_3);
        D_800CBDDC = (f32) temp_v0_3 + (D_800CBDD8 * 0.5f);
        return;
    }
    var_f4 = (f32) (sp2E >> 1);
    D_800CBDD8 = (f32) sp2E;
block_20:
    D_800CBDDC = var_f4;
}

void * *func_150448D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    void * *temp_v0;

    temp_v0 = func_15044964(0x20, 1, arg0, arg1, arg2, 0, 0, 0);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s16 *)((char *)(temp_v0) + 0x10)) = (s16) arg3;
    (*(s16 *)((char *)(temp_v0) + 0x12)) = (s16) arg4;
    (*(s16 *)((char *)(temp_v0) + 0x14)) = (s16) arg5;
    (*(s8 *)((char *)(temp_v0) + 0x16)) = (s8) arg6;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = arg7;
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg8;
    return temp_v0;
}

void * *func_15044964(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void * *temp_v0;
    void * *var_a0;
    void * *var_v1;

    temp_v0 = allocate_memory(1, 0, 0);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x0)) = NULL;
    (*(s16 *)((char *)(temp_v0) + 0x4)) = (s16) arg2;
    (*(s8 *)((char *)(temp_v0) + 0xC)) = (s8) arg1;
    (*(s8 *)((char *)(temp_v0) + 0xD)) = (s8) arg4;
    (*(s8 *)((char *)(temp_v0) + 0xE)) = (s8) arg3;
    (*(s16 *)((char *)(temp_v0) + 0x6)) = (s16) arg5;
    (*(s16 *)((char *)(temp_v0) + 0x8)) = (s16) arg6;
    (*(s16 *)((char *)(temp_v0) + 0xA)) = (s16) arg7;
    if (D_800CBE00 == NULL) {
        D_800CBE00 = temp_v0;
    } else {
        var_v1 = (*(s32 *)((D_800CBE00)));
        var_a0 = D_800CBE00;
        if (var_v1 != NULL) {
            do {
                var_a0 = var_v1;
                var_v1 = *var_v1;
            } while (var_v1 != NULL);
        }
        *var_a0 = temp_v0;
    }
    return temp_v0;
}

void func_15044A28(void) {
    void * *temp_s2;
    void * *var_s0;
    void * *var_s1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_v0;
    u8 temp_v1;

    var_s0 = D_800CBE00;
    var_s1 = NULL;
    if (var_s0 != NULL) {
        do {
            temp_v1 = (*(s32 *)((char *)(var_s0) + 0xE));
            temp_s2 = (*(s32 *)((char *)(var_s0) + 0x0));
            if (temp_v1 == 0) {
                if (((s32 (*)())((char *)(&D_80085E80 + ((*(s32 *)((char *)(var_s0) + 0xC)) * 4))))(var_s0) != 0) {
                    ((s32 (*)())((char *)(&D_80085E8C + ((*(s32 *)((char *)(var_s0) + 0xD)) * 4))))();
                }
            } else {
                var_v0 = temp_v1 - D_800BE9E4;
                if (var_v0 < 0) {
                    var_v0 = 0;
                }
                (*(u8 *)((char *)(var_s0) + 0xE)) = (u8) var_v0;
            }
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x4));
            if (temp_v0 != -1) {
                temp_v0_2 = temp_v0 - D_800BE9E4;
                if (temp_v0_2 <= 0) {
                    if (var_s1 == NULL) {
                        D_800CBE00 = (*(s32 *)((char *)(var_s0) + 0x0));
                    } else {
                        *var_s1 = (*(s32 *)((char *)(var_s0) + 0x0));
                    }
                    func_100043B4(var_s0, 2);
                } else {
                    (*(s32 *)((char *)(var_s0) + 0x4)) = temp_v0_2;
                    goto block_15;
                }
            } else {
block_15:
                var_s1 = var_s0;
            }
            var_s0 = temp_s2;
        } while (temp_s2 != NULL);
    }
}

s32 func_15044B78(void *arg0) {
    f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a2;
    s32 temp_t6;
    s32 var_v0;

    temp_a2 = gObjects[0].unk31C->unk114;
    sp1C = (s32) gObjects[0].unk31C->unk116;
    temp_t6 = temp_a2 >> 1;
    sp18 = (s32) gObjects[0].unk31C->unk118;
    temp_f2 = gObjects[0].x_position - (f32) (*(f32 *)((char *)(arg0) + 0x6));
    sp34 = (gObjects[0].y_position - (f32) (*(f32 *)((char *)(arg0) + 0x8))) + (f32) temp_t6;
    sp30 = gObjects[0].z_position - (f32) (*(f32 *)((char *)(arg0) + 0xA));
    sp38 = temp_f2;
    sp20 = temp_t6;
    sp40 = func_15048A40((*(s32 *)((char *)(arg0) + 0x16)), arg0, temp_a2);
    temp_f0 = func_150489B0((*(s32 *)((char *)(arg0) + 0x16)), arg0);
    temp_f14 = (sp30 * temp_f0) + (temp_f2 * sp40);
    var_v0 = 0;
    temp_f2_2 = (temp_f2 * temp_f0) - (sp30 * sp40);
    if ((fabsf(sp34) < (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + sp20)) && (fabsf(temp_f2_2) < (f32) ((*(f32 *)((char *)(arg0) + 0x12)) + sp1C)) && (fabsf(temp_f14) < (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + sp18))) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_15044CE4(void *arg0) {
    s32 temp_t0;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x0));
    (*(s16 *)((char *)(arg0) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x2));
    (*(s16 *)((char *)(arg0) + 0xA)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x4));
    temp_t0 = (s16) (*(s16 *)((*(s16 *)((char *)(arg0) + 0x1C)))) / 32;
    (*(s16 *)((char *)(arg0) + 0x10)) = (s16) temp_t0;
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) temp_t0;
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) temp_t0;
    func_15044B78(0);
}

s32 func_15044D40(void *arg0) {
    func_1505D1C4((f32) (*(f32 *)((char *)(arg0) + 0x6)), (f32) (*(f32 *)((char *)(arg0) + 0x8)), (f32) (*(f32 *)((char *)(arg0) + 0xA)), (*(f32 *)((char *)(arg0) + 0x10)), 0xFF, 0, 0, 0);
    return 0;
}

void func_15044DA0(void) {
    if ((gObjects[0].stunned == 0) && (gObjects[0].immune == 0)) {
        func_1505D024(&gObjects, 5, gObjects[0].unk7A, -1);
    }
}

void func_15044DE8(void) {
    if ((gObjects[0].stunned == 0) && (gObjects[0].immune == 0) && (D_800C35EA != 1)) {
        func_1505D024(&gObjects, 4, gObjects[0].unk7A, -1);
    }
}

void func_15044E40(void) {
    if ((gObjects[0].stunned == 0) && (gObjects[0].immune == 0)) {
        func_1505D024(&gObjects, 0x40, gObjects[0].unk7A, -1);
    }
}

void func_15044E88(void) {
    if ((gObjects[0].stunned == 0) && (gObjects[0].immune == 0)) {
        func_1505D024(&gObjects, 1, gObjects[0].unk7A, -1);
    }
}

s32 func_15044ED0(void *arg0, f32 arg1, f32 *arg2) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u8 temp_t4;
    void *temp_t1;
    void *temp_v0_2;

    if (arg1 < (*(s32 *)((char *)(arg0) + 0x4))) {
        (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg2) + 0x1C)) & 0xFFFD);
        return 0;
    }
    (*(s32 *)((char *)(arg2) + 0x0)) = D_80098D40;
    sp20 = -1;
    func_1510F800(0, -1, arg2);
    temp_v0 = func_150A3A70((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    var_a2 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if (((*(s32 *)((char *)(arg0) + 0x4)) <= temp_f0) && (temp_f0 < (*(s32 *)((char *)(arg2) + 0x0)))) {
                var_a2 = var_v1;
                (*(s32 *)((char *)(arg2) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_a2 != -1) {
        temp_t1 = (var_a2 * 0x10) + &D_800D3300;
        var_a1 = (*(s32 *)((char *)(temp_t1) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg2;
        do {
            temp_t6 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_2 = temp_t6 + ((*(s32 *)((char *)(temp_t1) + 0x8)) * 0x10);
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        (*(s32 *)((char *)(arg2) + 0x18)) = (s32) (*(s32 *)((char *)(D_800DBE5C) + (((s32) ((*(s32 *)((char *)(temp_t1) + 0x4)) - D_800DBE3C) / 12) * 4)));
        (*(s32 *)((char *)(arg2) + 0x1D)) = 1;
        (*(s32 *)((char *)(arg2) + 0x20)) = 0;
        temp_t4 = (*(s32 *)((char *)(arg2) + 0x1C)) | 5;
        (*(s32 *)((char *)(arg2) + 0x1C)) = temp_t4;
        if ((*(s32 *)((char *)(arg2) + 0x0)) <= arg1) {
            (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) (temp_t4 | 2);
            return 1;
        }
        return 0;
    }
    (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg2) + 0x1C)) & 0xFFFD);
    return 0;
}

s32 func_150450CC(void *arg0, f32 arg1, f32 *arg2) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u8 temp_t3;
    void *temp_t1;
    void *temp_v0_2;

    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg1) {
        (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg2) + 0x1C)) & 0xFFFD);
        return 0;
    }
    (*(s32 *)((char *)(arg2) + 0x0)) = D_80098D44;
    sp20 = -1;
    func_1510F800(0, -1, arg2);
    D_800DBE68 = (*(s32 *)((char *)(arg0) + 0x0));
    D_800DBE6C = (*(s32 *)((char *)(arg0) + 0x4));
    D_800DBE70 = (*(s32 *)((char *)(arg0) + 0x8));
    D_800DBE74 = arg1;
    temp_v0 = func_150A3A70((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    var_a2 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if ((temp_f0 <= (*(s32 *)((char *)(arg0) + 0x4))) && ((*(s32 *)((char *)(arg2) + 0x0)) < temp_f0)) {
                var_a2 = var_v1;
                (*(s32 *)((char *)(arg2) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_a2 != -1) {
        temp_t1 = (var_a2 * 0x10) + &D_800D3300;
        var_a1 = (*(s32 *)((char *)(temp_t1) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg2;
        do {
            temp_t6 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_2 = temp_t6 + ((*(s32 *)((char *)(temp_t1) + 0x8)) * 0x10);
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        if (D_800DBE5C != 0) {
            (*(s32 *)((char *)(arg2) + 0x18)) = (s32) (*(s32 *)((char *)(D_800DBE5C) + (((s32) ((*(s32 *)((char *)(temp_t1) + 0x4)) - D_800DBE3C) / 12) * 4)));
        } else {
            (*(s32 *)((char *)(arg2) + 0x18)) = 0;
        }
        (*(s32 *)((char *)(arg2) + 0x1D)) = 1;
        temp_t3 = (*(s32 *)((char *)(arg2) + 0x1C)) | 7;
        (*(s32 *)((char *)(arg2) + 0x1C)) = temp_t3;
        (*(s32 *)((char *)(arg2) + 0x20)) = 0;
        if (arg1 <= (*(s32 *)((char *)(arg2) + 0x0))) {
            (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) (temp_t3 | 2);
            return 1;
        }
        return 0;
    }
    (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg2) + 0x1C)) & 0xFFFD);
    return 0;
}

s32 func_1504530C(void *arg0, f32 arg1, f32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_150470B0(arg0, arg1, arg2);
    switch (temp_v0) {                              /* irregular */
    case 0:
        return func_15044ED0(arg0, arg1, arg2);
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return temp_v0;
    }
}

s32 func_15045384(void *arg0, f32 arg1, f32 *arg2) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_t5;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u8 temp_t2;
    u8 var_t7;
    void *temp_v0_2;
    void *temp_v0_3;

    if (arg1 < (*(s32 *)((char *)(arg0) + 0x4))) {
        var_t7 = (*(s32 *)((char *)(arg2) + 0x1C)) & 0xFFFD;
        goto block_15;
    }
    (*(s32 *)((char *)(arg2) + 0x0)) = D_80098D48;
    sp20 = -1;
    func_1510F800(3, -1, arg2);
    temp_v0 = func_150A4FA0((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    var_a2 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if (((*(s32 *)((char *)(arg0) + 0x4)) <= temp_f0) && (temp_f0 < (*(s32 *)((char *)(arg2) + 0x0)))) {
                var_a2 = var_v1;
                (*(s32 *)((char *)(arg2) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_a2 != -1) {
        temp_v0_2 = (var_a2 * 0x10) + &D_800D3300;
        var_a1 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg2;
        do {
            temp_t5 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_3 = temp_t5 + (*(s32 *)((char *)(temp_v0_2) + 0x8));
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        (*(s32 *)((char *)(arg2) + 0x18)) = 0;
        temp_t2 = (*(s32 *)((char *)(arg2) + 0x1C)) | 6;
        (*(s32 *)((char *)(arg2) + 0x1C)) = temp_t2;
        (*(s32 *)((char *)(arg2) + 0x1D)) = 4;
        (*(s32 *)((char *)(arg2) + 0x20)) = 0;
        if ((*(s32 *)((char *)(arg2) + 0x0)) <= arg1) {
            (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) (temp_t2 | 2);
            return 1;
        }
        return 0;
    }
    var_t7 = (*(s32 *)((char *)(arg2) + 0x1C)) & 0xFFFD;
block_15:
    (*(s32 *)((char *)(arg2) + 0x1C)) = var_t7;
    return 0;
}

s32 func_1504554C(void *arg0, f32 arg1, f32 *arg2) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_t5;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u8 temp_t2;
    u8 var_t7;
    void *temp_v0_2;
    void *temp_v0_3;

    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg1) {
        var_t7 = (*(s32 *)((char *)(arg2) + 0x1C)) & 0xFFFD;
        goto block_15;
    }
    (*(s32 *)((char *)(arg2) + 0x0)) = D_80098D4C;
    sp20 = -1;
    func_1510F800(3, -1, arg2);
    temp_v0 = func_150A4FA0((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    var_a2 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if ((temp_f0 <= (*(s32 *)((char *)(arg0) + 0x4))) && ((*(s32 *)((char *)(arg2) + 0x0)) < temp_f0)) {
                var_a2 = var_v1;
                (*(s32 *)((char *)(arg2) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_a2 != -1) {
        temp_v0_2 = (var_a2 * 0x10) + &D_800D3300;
        var_a1 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg2;
        do {
            temp_t5 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_3 = temp_t5 + (*(s32 *)((char *)(temp_v0_2) + 0x8));
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        (*(s32 *)((char *)(arg2) + 0x18)) = 0;
        temp_t2 = (*(s32 *)((char *)(arg2) + 0x1C)) | 6;
        (*(s32 *)((char *)(arg2) + 0x1C)) = temp_t2;
        (*(s32 *)((char *)(arg2) + 0x1D)) = 4;
        (*(s32 *)((char *)(arg2) + 0x20)) = 0;
        if (arg1 <= (*(s32 *)((char *)(arg2) + 0x0))) {
            (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) (temp_t2 | 2);
            return 1;
        }
        return 0;
    }
    var_t7 = (*(s32 *)((char *)(arg2) + 0x1C)) & 0xFFFD;
block_15:
    (*(s32 *)((char *)(arg2) + 0x1C)) = var_t7;
    return 0;
}

void func_15045714(void *arg0, s32 arg1, s32 *arg2, f32 *arg3) {
    func_1510F800(2);
    *arg2 = func_150A6500((s16) (s32) (*(s16 *)((char *)(arg0) + 0x0)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x8)), arg3, arg1);
}

u8 func_15045780(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    s32 sp1C;
    f32 sp18;

    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg2) {
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
        return 0U;
    }
    func_15045714((*(void **)&(arg2)), arg1 & 0xFFFF, &sp1C, &sp18);
    return func_15045F8C(arg0, arg1, (*(s32 **)&(arg2)), arg3);
}

u8 func_15045800(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    u8 temp_v0;

    temp_v0 = func_15047004(arg0, arg2, arg3);
    switch (temp_v0) {                              /* irregular */
    case 0:
        return func_15045780(arg0, arg1, arg2, arg3);
    case 1:
        return 0U;
    case 2:
        return 1U;
    default:
        return temp_v0;
    }
}

u8 func_15045880(void *arg0, f32 arg1, s32 *arg2, f32 *arg3) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *temp_t2;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_t0;
    s32 var_v1;
    void *temp_t1;
    void *temp_t5;
    void *temp_v0_2;

    (*(s32 *)((char *)(arg3) + 0x0)) = D_80098D50;
    sp20 = -1;
    func_150A44F0(*arg2, &D_800D37E0, 0);
    temp_v0 = func_150A43E0((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)), *arg2, &D_800D37E0);
    var_t0 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if (((*(s32 *)((char *)(arg0) + 0x4)) <= temp_f0) && (temp_f0 < (*(s32 *)((char *)(arg3) + 0x0)))) {
                var_t0 = var_v1;
                (*(s32 *)((char *)(arg3) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_t0 != -1) {
        temp_t1 = (var_t0 * 0x10) + &D_800D3300;
        temp_t2 = (*(s32 *)((char *)(temp_t1) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg3;
        var_a1 = temp_t2;
        do {
            temp_t6 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_2 = temp_t6 + (*(s32 *)((char *)(temp_t1) + 0x8));
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        temp_t5 = ((*(s32 *)((char *)(temp_t1) + 0xC)) * 0xA0) + D_800DBEF4;
        (*(s32 *)((char *)(arg3) + 0x20)) = temp_t5;
        temp_a0 = (*(s32 *)((char *)(temp_t5) + 0x44));
        if (temp_a0 != 0) {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_a0) + ((((s32) (temp_t2 - D_800DBE3C) / 12) - (*(s32 *)((char *)(temp_t5) + 0x58))) * 4)));
        } else {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x40));
        }
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 6);
        if (((*(s32 *)((char *)((D_800DBEF4 + ((*(s32 *)((char *)(temp_t1) + 0xC)) * 0xA0))) + 0x6F)) & 0x80) == 0x80) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 1);
        }
        (*(s32 *)((char *)(arg3) + 0x1D)) = 2;
        if ((*(s32 *)((char *)(arg3) + 0x0)) <= arg1) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 2);
            return 1U;
        }
        return 0U;
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

u8 func_15045AE4(void *arg0, f32 arg1, s32 *arg2, f32 *arg3) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *temp_t2;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_t0;
    s32 var_v1;
    void *temp_t1;
    void *temp_t5;
    void *temp_v0_2;

    (*(s32 *)((char *)(arg3) + 0x0)) = D_80098D54;
    sp20 = -1;
    func_150A44F0(*arg2, &D_800D37E0, 0);
    temp_v0 = func_150A43E0((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)), *arg2, &D_800D37E0);
    var_t0 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if ((temp_f0 <= (*(s32 *)((char *)(arg0) + 0x4))) && ((*(s32 *)((char *)(arg3) + 0x0)) < temp_f0)) {
                var_t0 = var_v1;
                (*(s32 *)((char *)(arg3) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_t0 != -1) {
        temp_t1 = (var_t0 * 0x10) + &D_800D3300;
        temp_t2 = (*(s32 *)((char *)(temp_t1) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg3;
        var_a1 = temp_t2;
        do {
            temp_t6 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_2 = temp_t6 + (*(s32 *)((char *)(temp_t1) + 0x8));
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        temp_t5 = ((*(s32 *)((char *)(temp_t1) + 0xC)) * 0xA0) + D_800DBEF4;
        (*(s32 *)((char *)(arg3) + 0x20)) = temp_t5;
        temp_a0 = (*(s32 *)((char *)(temp_t5) + 0x44));
        if (temp_a0 != 0) {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_a0) + ((((s32) (temp_t2 - D_800DBE3C) / 12) - (*(s32 *)((char *)(temp_t5) + 0x58))) * 4)));
        } else {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x40));
        }
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 6);
        if (((*(s32 *)((char *)((D_800DBEF4 + ((*(s32 *)((char *)(temp_t1) + 0xC)) * 0xA0))) + 0x6F)) & 0x80) == 0x80) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 1);
        }
        (*(s32 *)((char *)(arg3) + 0x1D)) = 2;
        if (arg1 <= (*(s32 *)((char *)(arg3) + 0x0))) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 2);
            return 1U;
        }
        return 0U;
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

s32 func_15045D48(void *arg0, f32 arg1, s32 *arg2, f32 *arg3) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *temp_t2;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_t0;
    s32 var_v1;
    u8 temp_t8;
    void *temp_t1;
    void *temp_v0_2;
    void *temp_v0_3;

    (*(s32 *)((char *)(arg3) + 0x0)) = D_80098D58;
    sp20 = -1;
    func_150A44F0(*arg2, &D_800D3830, 0);
    temp_v0 = func_150A43E0((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)), *arg2, &D_800D3830);
    var_t0 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if (((*(s32 *)((char *)(arg0) + 0x4)) <= temp_f0) && (temp_f0 < (*(s32 *)((char *)(arg3) + 0x0)))) {
                var_t0 = var_v1;
                (*(s32 *)((char *)(arg3) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_t0 != -1) {
        temp_t1 = (var_t0 * 0x10) + &D_800D3300;
        temp_t2 = (*(s32 *)((char *)(temp_t1) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg3;
        var_a1 = temp_t2;
        do {
            temp_t6 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_2 = temp_t6 + (*(s32 *)((char *)(temp_t1) + 0x8));
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        temp_v0_3 = ((*(s32 *)((char *)(temp_t1) + 0xC)) * 0xA0) + D_800DBEF4;
        (*(s32 *)((char *)(arg3) + 0x20)) = temp_v0_3;
        temp_a0 = (*(s32 *)((char *)(temp_v0_3) + 0x44));
        if (temp_a0 != 0) {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_a0) + ((((s32) (temp_t2 - D_800DBE3C) / 12) - (*(s32 *)((char *)(temp_v0_3) + 0x58))) * 4)));
        } else {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x40));
        }
        temp_t8 = (*(s32 *)((char *)(arg3) + 0x1C)) | 6;
        (*(s32 *)((char *)(arg3) + 0x1C)) = temp_t8;
        if (((*(s32 *)((char *)(temp_v0_3) + 0x6F)) & 0x80) == 0x80) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) (temp_t8 | 1);
        }
        (*(s32 *)((char *)(arg3) + 0x1D)) = 3;
        if ((*(s32 *)((char *)(arg3) + 0x0)) <= arg1) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 2);
            return 1;
        }
        return 0;
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0;
}

u8 func_15045F8C(void *arg0, f32 arg1, s32 *arg2, f32 *arg3) {
    s32 sp20;
    f32 *var_v1_2;
    f32 temp_f0;
    s32 *temp_t2;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a0;
    s32 var_t0;
    s32 var_v1;
    u8 temp_t8;
    void *temp_t1;
    void *temp_v0_2;
    void *temp_v0_3;

    (*(s32 *)((char *)(arg3) + 0x0)) = D_80098D5C;
    sp20 = -1;
    func_150A44F0(*arg2, &D_800D3830, 0);
    temp_v0 = func_150A43E0((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)), *arg2, &D_800D3830);
    var_t0 = -1;
    var_v1 = 0;
    if (temp_v0 > 0) {
        var_v0 = &D_800D3300;
        do {
            temp_f0 = (f32) *var_v0 * 0.00390625f;
            if ((temp_f0 <= (*(s32 *)((char *)(arg0) + 0x4))) && ((*(s32 *)((char *)(arg3) + 0x0)) < temp_f0)) {
                var_t0 = var_v1;
                (*(s32 *)((char *)(arg3) + 0x0)) = temp_f0;
            }
            var_v1 += 1;
            var_v0 += 0x10;
        } while (var_v1 < temp_v0);
    }
    if (var_t0 != -1) {
        temp_t1 = (var_t0 * 0x10) + &D_800D3300;
        temp_t2 = (*(s32 *)((char *)(temp_t1) + 0x4));
        var_a0 = 0;
        var_v1_2 = arg3;
        var_a1 = temp_t2;
        do {
            temp_t6 = *var_a1;
            var_a0 += 1;
            var_a1 += 4;
            temp_v0_2 = temp_t6 + (*(s32 *)((char *)(temp_t1) + 0x8));
            (*(s16 *)((char *)(var_v1_2) + 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
            (*(s16 *)((char *)(var_v1_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
            (*(s16 *)((char *)(var_v1_2) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
            var_v1_2 += 6;
        } while (var_a0 != 3);
        temp_v0_3 = ((*(s32 *)((char *)(temp_t1) + 0xC)) * 0xA0) + D_800DBEF4;
        (*(s32 *)((char *)(arg3) + 0x20)) = temp_v0_3;
        temp_a0 = (*(s32 *)((char *)(temp_v0_3) + 0x44));
        if (temp_a0 != 0) {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_a0) + ((((s32) (temp_t2 - D_800DBE3C) / 12) - (*(s32 *)((char *)(temp_v0_3) + 0x58))) * 4)));
        } else {
            (*(s32 *)((char *)(arg3) + 0x18)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x40));
        }
        temp_t8 = (*(s32 *)((char *)(arg3) + 0x1C)) | 6;
        (*(s32 *)((char *)(arg3) + 0x1C)) = temp_t8;
        if (((*(s32 *)((char *)(temp_v0_3) + 0x6F)) & 0x80) == 0x80) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) (temp_t8 | 1);
        }
        (*(s32 *)((char *)(arg3) + 0x1D)) = 3;
        if (arg1 <= (*(s32 *)((char *)(arg3) + 0x0))) {
            (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) | 2);
            return 1U;
        }
        return 0U;
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

u8 func_150461D0(void *arg0, s32 arg1, f32 arg2, f32 *arg3) {
    s32 sp74;
    s32 sp70;
    f32 sp4C;
    f32 sp28;
    u8 sp27;
    f32 *var_t4;
    f32 *var_t4_2;
    f32 *var_t6;
    f32 *var_t7;
    f32 *var_t7_2;
    f32 *var_t7_3;
    f32 temp_at;
    f32 temp_at_2;
    f32 temp_at_3;
    s32 temp_t8;
    s32 temp_v0;

    var_t4 = &sp28;
    var_t7 = arg3;
    if (arg2 < (*(s32 *)((char *)(arg0) + 0x4))) {
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
        return 0U;
    }
    M2C_MEMCPY_ALIGNED(&sp4C, arg3, 0x24);
    do {
        temp_at = *var_t7;
        var_t7 += 0xC;
        var_t4 += 0xC;
        (*(s32 *)((char *)(var_t4) - 0xC)) = temp_at;
        (*(s32 *)((char *)(var_t4) - 0x8)) = (s32) (*(s32 *)((char *)(var_t7) - 0x8));
        (*(s32 *)((char *)(var_t4) - 0x4)) = (s32) (*(s32 *)((char *)(var_t7) - 0x4));
    } while (var_t7 != (arg3 + 0x24));
    func_15045714((void *) (arg1 & 0xFFFF), (u16) &sp74, &sp70, 0);
    sp27 = func_15045880(arg0, arg2, &sp74, &sp4C);
    temp_v0 = func_15045D48(arg0, arg2, &sp70, &sp28);
    temp_t8 = temp_v0 & 0xFF;
    if ((sp27 != 0) && (temp_t8 != 0)) {
        var_t7_2 = &sp28;
        var_t4_2 = arg3;
        if (sp4C < sp28) {
            M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
            return 1U;
        }
        do {
            temp_at_2 = *var_t7_2;
            var_t7_2 += 0xC;
            var_t4_2 += 0xC;
            (*(s32 *)((char *)(var_t4_2) - 0xC)) = temp_at_2;
            (*(s32 *)((char *)(var_t4_2) - 0x8)) = (s32) (*(s32 *)((char *)(var_t7_2) - 0x8));
            (*(s32 *)((char *)(var_t4_2) - 0x4)) = (s32) (*(s32 *)((char *)(var_t7_2) - 0x4));
        } while (var_t7_2 != (&sp28 + 0x24));
        return 1U;
    }
    if (sp27 != 0) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
        return 1U;
    }
    if (temp_v0 & 0xFF) {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1U;
    }
    var_t6 = &sp28;
    var_t7_3 = arg3;
    if (sp4C < sp28) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
    } else {
        do {
            temp_at_3 = *var_t6;
            var_t6 += 0xC;
            var_t7_3 += 0xC;
            (*(s32 *)((char *)(var_t7_3) - 0xC)) = temp_at_3;
            (*(s32 *)((char *)(var_t7_3) - 0x8)) = (s32) (*(s32 *)((char *)(var_t6) - 0x8));
            (*(s32 *)((char *)(var_t7_3) - 0x4)) = (s32) (*(s32 *)((char *)(var_t6) - 0x4));
        } while (var_t6 != (&sp28 + 0x24));
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

u8 func_15046460(void *arg0, s32 arg1, f32 arg2, f32 *arg3) {
    s32 sp74;
    s32 sp70;
    f32 sp4C;
    f32 sp28;
    u8 sp27;
    f32 *var_t4;
    f32 *var_t4_2;
    f32 *var_t6;
    f32 *var_t7;
    f32 *var_t7_2;
    f32 *var_t7_3;
    f32 temp_at;
    f32 temp_at_2;
    f32 temp_at_3;
    s32 temp_t8;
    u8 temp_v0;

    var_t4 = &sp28;
    var_t7 = arg3;
    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg2) {
        (*(s32 *)((char *)(arg3) + 0x1D)) = 0;
        (*(s32 *)((char *)(arg3) + 0x20)) = 0;
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
        return 0U;
    }
    M2C_MEMCPY_ALIGNED(&sp4C, arg3, 0x24);
    do {
        temp_at = *var_t7;
        var_t7 += 0xC;
        var_t4 += 0xC;
        (*(s32 *)((char *)(var_t4) - 0xC)) = temp_at;
        (*(s32 *)((char *)(var_t4) - 0x8)) = (s32) (*(s32 *)((char *)(var_t7) - 0x8));
        (*(s32 *)((char *)(var_t4) - 0x4)) = (s32) (*(s32 *)((char *)(var_t7) - 0x4));
    } while (var_t7 != (arg3 + 0x24));
    func_15045714((void *) (arg1 & 0xFFFF), (u16) &sp74, &sp70, 0);
    sp27 = func_15045AE4(arg0, arg2, &sp74, &sp4C);
    temp_v0 = func_15045F8C(arg0, arg2, &sp70, &sp28);
    temp_t8 = temp_v0 & 0xFF;
    if ((sp27 != 0) && (temp_t8 != 0)) {
        var_t7_2 = &sp28;
        var_t4_2 = arg3;
        if (sp28 < sp4C) {
            M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
            return 1U;
        }
        do {
            temp_at_2 = *var_t7_2;
            var_t7_2 += 0xC;
            var_t4_2 += 0xC;
            (*(s32 *)((char *)(var_t4_2) - 0xC)) = temp_at_2;
            (*(s32 *)((char *)(var_t4_2) - 0x8)) = (s32) (*(s32 *)((char *)(var_t7_2) - 0x8));
            (*(s32 *)((char *)(var_t4_2) - 0x4)) = (s32) (*(s32 *)((char *)(var_t7_2) - 0x4));
        } while (var_t7_2 != (&sp28 + 0x24));
        return 1U;
    }
    if (sp27 != 0) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
        return 1U;
    }
    if (temp_v0 & 0xFF) {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1U;
    }
    var_t6 = &sp28;
    var_t7_3 = arg3;
    if (sp28 < sp4C) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
    } else {
        do {
            temp_at_3 = *var_t6;
            var_t6 += 0xC;
            var_t7_3 += 0xC;
            (*(s32 *)((char *)(var_t7_3) - 0xC)) = temp_at_3;
            (*(s32 *)((char *)(var_t7_3) - 0x8)) = (s32) (*(s32 *)((char *)(var_t6) - 0x8));
            (*(s32 *)((char *)(var_t7_3) - 0x4)) = (s32) (*(s32 *)((char *)(var_t6) - 0x4));
        } while (var_t6 != (&sp28 + 0x24));
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

s32 func_150466F8(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    f32 sp4C;
    f32 sp28;
    u8 sp27;
    f32 *var_t3;
    f32 *var_t6;
    f32 temp_at;
    s32 temp_t7;
    s32 temp_v0;

    var_t3 = &sp28;
    var_t6 = arg3;
    if (arg2 < (*(s32 *)((char *)(arg0) + 0x4))) {
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
        return 0;
    }
    M2C_MEMCPY_ALIGNED(&sp4C, arg3, 0x24);
    do {
        temp_at = *var_t6;
        var_t6 += 0xC;
        var_t3 += 0xC;
        (*(s32 *)((char *)(var_t3) - 0xC)) = temp_at;
        (*(s32 *)((char *)(var_t3) - 0x8)) = (s32) (*(s32 *)((char *)(var_t6) - 0x8));
        (*(s32 *)((char *)(var_t3) - 0x4)) = (s32) (*(s32 *)((char *)(var_t6) - 0x4));
    } while (var_t6 != (arg3 + 0x24));
    sp27 = func_150461D0((*(void **)&(arg2)), arg1 & 0xFFFF, arg2, &sp4C);
    temp_v0 = func_15044ED0(arg0, arg2, arg3);
    temp_t7 = temp_v0 & 0xFF;
    if ((sp27 != 0) && (temp_t7 != 0)) {
        if (sp4C < sp28) {
            M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
            return 1;
        }
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1;
    }
    if (sp27 != 0) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
        return 1;
    }
    if (temp_v0 & 0xFF) {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1;
    }
    if (sp4C < sp28) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
    } else {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0;
}

u8 func_1504697C(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    f32 sp4C;
    f32 sp28;
    u8 sp27;
    f32 *var_t3;
    f32 *var_t6;
    f32 temp_at;
    s32 temp_t7;
    s32 temp_v0;

    var_t3 = &sp28;
    var_t6 = arg3;
    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg2) {
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
        return 0U;
    }
    M2C_MEMCPY_ALIGNED(&sp4C, arg3, 0x24);
    do {
        temp_at = *var_t6;
        var_t6 += 0xC;
        var_t3 += 0xC;
        (*(s32 *)((char *)(var_t3) - 0xC)) = temp_at;
        (*(s32 *)((char *)(var_t3) - 0x8)) = (s32) (*(s32 *)((char *)(var_t6) - 0x8));
        (*(s32 *)((char *)(var_t3) - 0x4)) = (s32) (*(s32 *)((char *)(var_t6) - 0x4));
    } while (var_t6 != (arg3 + 0x24));
    sp27 = func_15046460((*(void **)&(arg2)), arg1 & 0xFFFF, arg2, &sp4C);
    temp_v0 = func_150450CC(arg0, arg2, arg3);
    temp_t7 = temp_v0 & 0xFF;
    if ((sp27 != 0) && (temp_t7 != 0)) {
        if (sp28 < sp4C) {
            M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
            return 1U;
        }
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1U;
    }
    if (sp27 != 0) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
        return 1U;
    }
    if (temp_v0 & 0xFF) {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1U;
    }
    if (sp28 < sp4C) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
    } else {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

s32 func_15046C00(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    s32 temp_v0;

    temp_v0 = func_150470B0(arg0, arg2, arg3);
    switch (temp_v0) {                              /* irregular */
    case 0:
        return func_150466F8(arg0, arg1, arg2, arg3);
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return temp_v0;
    }
}

u8 func_15046C80(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    u8 temp_v0;

    temp_v0 = func_15047004(arg0, arg2, arg3);
    switch (temp_v0) {                              /* irregular */
    case 0:
        return func_1504697C(arg0, arg1, arg2, arg3);
    case 1:
        return 0U;
    case 2:
        return 1U;
    default:
        return temp_v0;
    }
}

u8 func_15046D00(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    f32 sp4C;
    f32 sp28;
    u8 sp27;
    f32 *var_t3;
    f32 *var_t6;
    f32 temp_at;
    s32 temp_t7;
    s32 temp_v0;

    var_t3 = &sp28;
    var_t6 = arg3;
    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg2) {
        (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
        return 0U;
    }
    M2C_MEMCPY_ALIGNED(&sp4C, arg3, 0x24);
    do {
        temp_at = *var_t6;
        var_t6 += 0xC;
        var_t3 += 0xC;
        (*(s32 *)((char *)(var_t3) - 0xC)) = temp_at;
        (*(s32 *)((char *)(var_t3) - 0x8)) = (s32) (*(s32 *)((char *)(var_t6) - 0x8));
        (*(s32 *)((char *)(var_t3) - 0x4)) = (s32) (*(s32 *)((char *)(var_t6) - 0x4));
    } while (var_t6 != (arg3 + 0x24));
    sp27 = func_1504697C(arg0, arg1 & 0xFFFF, arg2, &sp4C);
    temp_v0 = func_1504554C(arg0, arg2, &sp4C);
    temp_t7 = temp_v0 & 0xFF;
    if ((sp27 != 0) && (temp_t7 != 0)) {
        if (sp28 < sp4C) {
            M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
            return 1U;
        }
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1U;
    }
    if (sp27 != 0) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
        return 1U;
    }
    if (temp_v0 & 0xFF) {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
        return 1U;
    }
    if (sp28 < sp4C) {
        M2C_MEMCPY_ALIGNED(arg3, &sp4C, 0x24);
    } else {
        M2C_MEMCPY_ALIGNED(arg3, &sp28, 0x24);
    }
    (*(u8 *)((char *)(arg3) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg3) + 0x1C)) & 0xFFFD);
    return 0U;
}

u8 func_15046F84(void *arg0, u16 arg1, f32 arg2, f32 *arg3) {
    u8 temp_v0;

    temp_v0 = func_15047004(arg0, arg2, arg3);
    switch (temp_v0) {                              /* irregular */
    case 0:
        return func_15046D00(arg0, arg1, arg2, arg3);
    case 1:
        return 0U;
    case 2:
        return 1U;
    default:
        return temp_v0;
    }
}

u8 func_15047004(void *arg0, f32 arg1, f32 *arg2) {
    f32 sp24;

    if (((*(s32 *)((char *)(arg2) + 0x1C)) & 4) && (func_150A3FC4((*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x8)), arg2, 0, arg2 + 4, &sp24) != 0)) {
        if ((arg1 <= sp24) && (sp24 <= (*(s32 *)((char *)(arg0) + 0x4)))) {
            (*(s32 *)((char *)(arg2) + 0x0)) = sp24;
            (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg2) + 0x1C)) | 2);
            return 2U;
        }
        return 1U;
    }
    return 0U;
}

s32 func_150470B0(void *arg0, f32 arg1, f32 *arg2) {
    f32 sp24;

    if (((*(s32 *)((char *)(arg2) + 0x1C)) & 4) && (func_150A3FC4((*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x8)), arg2, 0, arg2 + 4, &sp24) != 0)) {
        if ((sp24 <= arg1) && ((*(s32 *)((char *)(arg0) + 0x4)) <= sp24)) {
            (*(s32 *)((char *)(arg2) + 0x0)) = sp24;
            (*(u8 *)((char *)(arg2) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg2) + 0x1C)) | 2);
            return 2;
        }
        return 1;
    }
    return 0;
}

void func_1504715C(void *arg0, void *arg1, s32 arg3) {
    s16 var_a3;
    s32 temp_a0;
    s32 temp_f16;
    s32 temp_f4;
    s32 temp_f8;
    s32 var_v0;
    u16 temp_v0;

    var_a3 = arg3;
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x180));
    if ((*(s32 *)((char *)(arg1) + 0xF8)) & 0x200000) {
        temp_f8 = (s32) (*(s32 *)((char *)(arg1) + 0x14));
        temp_f16 = (s32) (*(s32 *)((char *)(arg1) + 0x180));
        temp_f4 = (s32) (*(s32 *)((char *)(arg1) + 0x1C));
        var_a3 = temp_f8 + 0x3E8;
        (*(s32 *)((char *)(arg0) + 0x4)) = var_a3;
        (*(s16 *)((char *)(arg0) + 0xA)) = (s16) (temp_f8 - 0x3E8);
        (*(s16 *)((char *)(arg0) + 0x8)) = (s16) (temp_f4 + 0x3E8);
        (*(s32 *)((char *)(arg0) + 0x10)) = var_a3;
        (*(u16 *)((char *)(arg0) + 0x14)) = (u16) (temp_f4 - 0x3E8);
        (*(s16 *)((char *)(arg0) + 0x6)) = (s16) temp_f16;
        (*(s16 *)((char *)(arg0) + 0xC)) = (s16) temp_f16;
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) temp_f16;
        (*(s16 *)((char *)(arg0) + 0xE)) = (s16) temp_f4;
    } else {
        (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x18C));
        (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x190));
        (*(s32 *)((char *)(arg0) + 0xC)) = (s32) (*(s32 *)((char *)(arg1) + 0x194));
        (*(s32 *)((char *)(arg0) + 0x10)) = (s32) (*(s32 *)((char *)(arg1) + 0x198));
        (*(u16 *)((char *)(arg0) + 0x14)) = (u16) (*(u16 *)((char *)(arg1) + 0x19C));
    }
    (*(s32 *)((char *)(arg0) + 0x1C)) = 6U;
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)(arg1) + 0x184));
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x1A0));
    temp_a0 = temp_v0 - 1;
    if (temp_v0 != 0) {
        (*(s32 *)((char *)(arg0) + 0x1D)) = 2;
        (*(s32 *)((char *)(arg0) + 0x20)) = (s32) ((temp_a0 * 0xA0) + D_800DBEF4);
        if (func_15145C90(temp_a0, arg0, var_a3) != 0) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) | var_v0);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x1D)) = 1;
    (*(s32 *)((char *)(arg0) + 0x20)) = 0;
    (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) | 1);
}

void func_150472C0(void *arg0, void *arg1) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0;

    var_v1 = 0;
    var_a2 = 0;
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0xC));
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x44));
    (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x48));
    (*(s32 *)((char *)(arg0) + 0xC)) = (s32) (*(s32 *)((char *)(arg1) + 0x4C));
    (*(s32 *)((char *)(arg0) + 0x10)) = (s32) (*(s32 *)((char *)(arg1) + 0x50));
    (*(u16 *)((char *)(arg0) + 0x14)) = (u16) (*(u16 *)((char *)(arg1) + 0x54));
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)(arg1) + 0x60));
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x59));
    if (temp_v0 == 1) {
        var_v1 = 2;
    }
    if (temp_v0 == 1) {
        var_a2 = 1;
    }
    if (temp_v0 == 1) {
        var_v0 = 4;
    } else {
        var_v0 = 0;
    }
    (*(s8 *)((char *)(arg0) + 0x1C)) = (s8) (var_v0 | var_a2 | var_v1);
    if ((*(s32 *)((char *)(arg1) + 0x59)) == 1) {
        (*(s32 *)((char *)(arg0) + 0x1D)) = 1;
    } else {
        (*(s32 *)((char *)(arg0) + 0x1D)) = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x20)) = (s32) (*(s32 *)((char *)(arg1) + 0x5C));
}

void func_15047390(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f18_3;

    guMtxIdentF(arg0);
    temp_f0 = arg4 - arg1;
    temp_f28 = arg5 - arg2;
    temp_f30 = arg6 - arg3;
    temp_f0_2 = sqrtf((temp_f0 * temp_f0) + (temp_f28 * temp_f28) + (temp_f30 * temp_f30));
    var_f18 = temp_f0_2;
    if (temp_f0_2 == 0.0f) {
        var_f18 = D_80098D60;
    }
    temp_f0_3 = -1.0f / var_f18;
    temp_f26 = temp_f0 * temp_f0_3;
    temp_f28_2 = temp_f28 * temp_f0_3;
    temp_f30_2 = temp_f30 * temp_f0_3;
    temp_f20 = (arg8 * temp_f30_2) - (arg9 * temp_f28_2);
    temp_f22 = (arg9 * temp_f26) - (arg7 * temp_f30_2);
    temp_f24 = (arg7 * temp_f28_2) - (arg8 * temp_f26);
    temp_f0_4 = sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22) + (temp_f24 * temp_f24));
    var_f18_2 = temp_f0_4;
    if (temp_f0_4 == 0.0f) {
        var_f18_2 = D_80098D64;
    }
    temp_f0_5 = 1.0f / var_f18_2;
    temp_f20_2 = temp_f20 * temp_f0_5;
    temp_f22_2 = temp_f22 * temp_f0_5;
    temp_f24_2 = temp_f24 * temp_f0_5;
    temp_f2 = (temp_f28_2 * temp_f24_2) - (temp_f30_2 * temp_f22_2);
    arg7 = temp_f2;
    temp_f14 = (temp_f30_2 * temp_f20_2) - (temp_f26 * temp_f24_2);
    arg8 = temp_f14;
    temp_f16 = (temp_f26 * temp_f22_2) - (temp_f28_2 * temp_f20_2);
    arg9 = temp_f16;
    temp_f0_6 = sqrtf((temp_f2 * temp_f2) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16));
    var_f18_3 = temp_f0_6;
    if (temp_f0_6 == 0.0f) {
        var_f18_3 = D_80098D68;
    }
    temp_f0_7 = 1.0f / var_f18_3;
    temp_f12 = arg7 * temp_f0_7;
    temp_f2_2 = arg8 * temp_f0_7;
    arg9 *= temp_f0_7;
    (*(s32 *)((char *)(arg0) + 0x0)) = temp_f20_2;
    (*(s32 *)((char *)(arg0) + 0x10)) = temp_f22_2;
    (*(s32 *)((char *)(arg0) + 0x20)) = temp_f24_2;
    (*(s32 *)((char *)(arg0) + 0x4)) = temp_f12;
    (*(s32 *)((char *)(arg0) + 0x14)) = temp_f2_2;
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) -((arg1 * temp_f20_2) + (arg2 * temp_f22_2) + (arg3 * temp_f24_2));
    arg8 = temp_f2_2;
    arg7 = temp_f12;
    (*(s32 *)((char *)(arg0) + 0x24)) = arg9;
    (*(s32 *)((char *)(arg0) + 0x8)) = temp_f26;
    (*(s32 *)((char *)(arg0) + 0x18)) = temp_f28_2;
    (*(s32 *)((char *)(arg0) + 0x28)) = temp_f30_2;
    (*(s32 *)((char *)(arg0) + 0xC)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x2C)) = 0.0f;
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) -((arg1 * arg7) + (arg2 * arg8) + (arg3 * arg9));
    (*(s32 *)((char *)(arg0) + 0x3C)) = 1.0f;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) -((arg1 * temp_f26) + (arg2 * temp_f28_2) + (arg3 * temp_f30_2));
}

void func_15047688(s32 arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    void * sp30;

    func_15047390(arg1, arg2, (f32)(s32)&sp30, (f32)(s32)(arg1), arg2, arg3, arg4, arg5, arg6, arg7);
    guMtxF2L(&sp30, arg0);
}

void func_15047700(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10) {
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f12_8;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f18;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    f32 var_f28;
    f32 var_f30;

    guMtxIdentF(arg0);
    temp_f0 = arg6 - arg3;
    temp_f2 = arg7 - arg4;
    var_f22 = temp_f0;
    var_f20 = arg5 - arg2;
    var_f24 = temp_f2;
    if ((arg5 == arg2) && (temp_f0 == 0.0f) && (temp_f2 == 0.0f)) {
        var_f24 = 1.0f;
        var_f20 = 0.0f;
        var_f22 = 0.0f;
    }
    temp_f2_2 = -1.0f / sqrtf((var_f20 * var_f20) + (var_f22 * var_f22) + (var_f24 * var_f24));
    temp_f20 = var_f20 * temp_f2_2;
    temp_f22 = var_f22 * temp_f2_2;
    temp_f24 = var_f24 * temp_f2_2;
    temp_f12 = (arg9 * temp_f24) - (arg10 * temp_f22);
    temp_f14 = (arg10 * temp_f20) - (arg8 * temp_f24);
    temp_f18 = (arg8 * temp_f22) - (arg9 * temp_f20);
    sp4C = temp_f18;
    temp_f0_2 = (temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f18 * temp_f18);
    if (temp_f0_2 != 0.0f) {
        temp_f2_3 = 1.0f / sqrtf(temp_f0_2);
        var_f28 = temp_f12 * temp_f2_3;
        var_f30 = temp_f14 * temp_f2_3;
        sp4C *= temp_f2_3;
    } else {
        var_f28 = 1.0f;
        var_f30 = 0.0f;
        sp4C = 0.0f;
    }
    temp_f0_3 = (temp_f22 * sp4C) - (temp_f24 * var_f30);
    arg8 = temp_f0_3;
    temp_f2_4 = (temp_f24 * var_f28) - (temp_f20 * sp4C);
    arg9 = temp_f2_4;
    temp_f12_2 = (temp_f20 * var_f30) - (temp_f22 * var_f28);
    arg10 = temp_f12_2;
    temp_f14_2 = (temp_f0_3 * temp_f0_3) + (temp_f2_4 * temp_f2_4) + (temp_f12_2 * temp_f12_2);
    if (temp_f14_2 != 0.0f) {
        temp_f2_5 = 1.0f / sqrtf(temp_f14_2);
        var_f18 = arg8 * temp_f2_5;
        arg9 *= temp_f2_5;
        arg10 *= temp_f2_5;
    } else {
        arg8 = 0.0f;
        var_f18 = arg8;
        arg10 = 0.0f;
        arg9 = 1.0f;
    }
    temp_f12_3 = var_f28 * 128.0f;
    if (temp_f12_3 < 127.0f) {
        var_f0 = temp_f12_3;
    } else {
        var_f0 = 127.0f;
    }
    temp_f12_4 = var_f30 * 128.0f;
    (*(s8 *)((char *)(arg1) + 0x8)) = (s8) (s32) var_f0;
    if (temp_f12_4 < 127.0f) {
        var_f0_2 = temp_f12_4;
    } else {
        var_f0_2 = 127.0f;
    }
    (*(s8 *)((char *)(arg1) + 0x9)) = (s8) (s32) var_f0_2;
    temp_f12_5 = sp4C * 128.0f;
    if (temp_f12_5 < 127.0f) {
        var_f0_3 = temp_f12_5;
    } else {
        var_f0_3 = 127.0f;
    }
    temp_f12_6 = var_f18 * 128.0f;
    (*(s8 *)((char *)(arg1) + 0xA)) = (s8) (s32) var_f0_3;
    if (temp_f12_6 < 127.0f) {
        var_f0_4 = temp_f12_6;
    } else {
        var_f0_4 = 127.0f;
    }
    (*(s8 *)((char *)(arg1) + 0x18)) = (s8) (s32) var_f0_4;
    temp_f12_7 = arg9 * 128.0f;
    if (temp_f12_7 < 127.0f) {
        var_f0_5 = temp_f12_7;
    } else {
        var_f0_5 = 127.0f;
    }
    temp_f12_8 = arg10 * 128.0f;
    (*(s8 *)((char *)(arg1) + 0x19)) = (s8) (s32) var_f0_5;
    if (temp_f12_8 < 127.0f) {
        var_f0_6 = temp_f12_8;
    } else {
        var_f0_6 = 127.0f;
    }
    (*(s32 *)((char *)(arg1) + 0x0)) = 0;
    (*(s32 *)((char *)(arg1) + 0x1)) = 0;
    (*(s32 *)((char *)(arg1) + 0x2)) = 0;
    (*(s32 *)((char *)(arg1) + 0x3)) = 0;
    (*(s32 *)((char *)(arg1) + 0x4)) = 0;
    (*(s32 *)((char *)(arg1) + 0x5)) = 0;
    (*(s32 *)((char *)(arg1) + 0x6)) = 0;
    (*(s32 *)((char *)(arg1) + 0x7)) = 0;
    (*(s32 *)((char *)(arg1) + 0x10)) = 0;
    (*(s32 *)((char *)(arg1) + 0x11)) = 0x80;
    (*(s32 *)((char *)(arg1) + 0x12)) = 0;
    (*(s32 *)((char *)(arg1) + 0x13)) = 0;
    (*(s32 *)((char *)(arg1) + 0x14)) = 0;
    (*(s32 *)((char *)(arg1) + 0x15)) = 0x80;
    (*(s32 *)((char *)(arg1) + 0x16)) = 0;
    (*(s32 *)((char *)(arg1) + 0x17)) = 0;
    (*(s8 *)((char *)(arg1) + 0x1A)) = (s8) (s32) var_f0_6;
    (*(s32 *)((char *)(arg0) + 0x0)) = var_f28;
    (*(s32 *)((char *)(arg0) + 0x10)) = var_f30;
    (*(s32 *)((char *)(arg0) + 0x4)) = var_f18;
    (*(s32 *)((char *)(arg0) + 0x20)) = sp4C;
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) -((arg2 * var_f28) + (arg3 * var_f30) + (arg4 * sp4C));
    (*(s32 *)((char *)(arg0) + 0x24)) = arg10;
    (*(s32 *)((char *)(arg0) + 0x14)) = arg9;
    (*(s32 *)((char *)(arg0) + 0x8)) = temp_f20;
    (*(s32 *)((char *)(arg0) + 0x18)) = temp_f22;
    (*(s32 *)((char *)(arg0) + 0x28)) = temp_f24;
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) -((arg2 * var_f18) + (arg3 * arg9) + (arg4 * arg10));
    (*(s32 *)((char *)(arg0) + 0xC)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x2C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x3C)) = 1.0f;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) -((arg2 * temp_f20) + (arg3 * temp_f22) + (arg4 * temp_f24));
}

void func_15047B80(s32 arg0, void *arg2, void *arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10) {
    void * sp38;

    func_15047700(arg2, arg3, (f32)(s32)&sp38, (f32)(s32)(arg2), (f32)(s32)(arg3), arg4, arg5, arg6, arg7, arg8, arg9);
    guMtxF2L(&sp38, arg0);
}
