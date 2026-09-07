/**
 * Auto-decompiled from asm/B3020.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                /* extern */
void *func_1502B5C8();                  /* extern */
void * func_1502EA0C();            /* extern */
void * func_1502EA50();                        /* extern */
void * func_15030158();                         /* extern */
s32 func_15033E28();                    /* extern */
void * func_1503DDD0();                  /* extern */
void * func_15042D94();             /* extern */
f32 func_150497E0();                   /* extern */
f32 func_150498A4();            /* extern */
void *func_1505EEF4();            /* extern */
void * func_15062800();          /* extern */
s32 func_1507BB28();                   /* extern */
void * func_15080620();                     /* extern */
s32 func_1509B570();                     /* extern */
void * func_150A3194();               /* extern */
s32 func_150A32B4();              /* extern */
s32 func_150AC9C0(); /* extern */
f32 random_float();                                /* extern */
void * func_150DA5EC();     /* extern */
void * func_151027E8();                            /* extern */
void *func_151149AC();                            /* extern */
void * func_15114B94();                  /* extern */
void * func_1512D560();       /* extern */
f32 func_15144BC8();                    /* extern */
s32 func_15085BE8();                                /* static */
s32 func_15086364();
f32 func_15086BD0();
s32 func_15086C70();                         /* static */
f32 func_15086D94(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
s32 func_1508802C();
void func_15088824();   /* static */
u8 func_150888A8();
s8 func_15088A08(void *arg0, f32 arg1);
void func_15088F30();
void func_150891E8(f32 arg0, void *arg1);
void func_150896EC(); /* static */
void func_1508B3F8();                               /* static */
s32 func_1508C5B8();              /* static */
s32 func_1508CAD8(); /* static */
s32 func_1508DAEC();
s32 func_1508E780();                      /* static */
s32 func_1508EB90(); /* static */
void func_1508EBF8();             /* static */
void func_1508EC5C(); /* static */
extern s16 D_80087290;
extern s16 D_80087294;
extern s8 D_80087298;
extern u8 D_8008729C;
extern void *D_800872A0;
extern s32 D_800872C4;
extern s32 D_800872D0;
extern s32 D_800872D8;
extern s32 D_800872E0;
extern s32 D_800872E8;
extern s32 D_800872F8;
extern s32 D_80087320;
extern s8 D_80087340;
extern s32 gGameState;
extern f32 D_8009D9C0;
extern f32 D_8009D9C4;
extern f32 D_8009D9C8;
extern f32 D_8009D9CC;
extern f32 D_8009D9D0;
extern f32 D_8009D9E0;
extern f32 D_8009D9E4;
extern f32 D_8009D9E8;
extern f64 D_8009D9F0;
extern f32 D_8009D9F8;
extern f32 D_8009D9FC;
extern f32 D_8009DA00;
extern f32 D_8009DA04;
extern s32 D_8009DA08;
extern f32 D_8009DA0C;
extern f32 D_8009DA10;
extern f64 D_8009DA18;
extern s32 D_8009DA20;
extern f32 D_8009DA44;
extern f32 D_8009DA48;
extern f32 D_8009DA4C;
extern f32 D_8009DA50;
extern f32 D_8009DA54;
extern f32 D_8009DA58;
extern f32 D_8009DA5C;
extern f32 D_8009DA60;
extern f32 D_8009DA64;
extern f32 D_8009DA68;
extern f32 D_8009DA6C;
extern f32 D_8009DA70;
extern f32 D_8009DA74;
extern f32 D_8009DA78;
extern f32 D_8009DA7C;
extern f32 D_8009DA80;
extern f32 D_8009DA84;
extern f32 D_8009DA88;
extern f32 D_8009DA8C;
extern f32 D_8009DA90;
extern s32 D_800BE9AC;
extern f32 D_800CC310;
extern s32 D_800CC40F;
extern f32 *D_800D2350;
extern s32 D_800D2354;
extern u8 D_800D2358;
extern f32 D_800D2360;
extern s32 D_800D237C;
extern s8 D_800D2390;
extern s32 D_800D2394;
extern s8 D_800D2398;
extern s8 D_800D2399;
extern s8 D_800D239A;
extern f32 D_800D239C;
extern f32 D_800D23A0;
extern f32 D_800D23A4;
extern s8 D_800D23A8;
extern void *D_800D23B0;
extern s32 D_800D2E48;
extern s32 D_800E0BB8;
extern s8 D_800E0BD0;
extern s8 D_800E0BE7;
extern s32 D_800E0C10;
extern s32 D_800E0C18;
s8 func_15086D48();
s32 func_1508855C();
u8 func_1508907C();
void func_1508C1A4();

void func_15085B70(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_1502B5C8(0, 2, 0x19, arg0);
    if (temp_v0 == NULL) {
        D_80087290 = 0;
        D_80087294 = 0;
        D_800D2350 = NULL;
    } else {
        D_80087290 = (*(s32 *)((char *)(temp_v0) + 0x0));
        D_80087294 = (*(s32 *)((char *)(temp_v0) + 0x2));
        D_800D2350 = (char *)(temp_v0) + 4;
    }
    func_15085BE8();
}

s32 func_15085BE8(void) {
    f32 sp30[64];
    f32 sp18[64];
    void * *var_a2;
    f32 *temp_a3;
    f32 *temp_v0_2;
    f32 *var_a1;
    f32 *var_a1_2;
    f32 *var_a1_3;
    f32 *var_t0;
    f32 *var_v0;
    f32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f2;
    s32 temp_v0_3;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v1;
    s8 var_a0;
    u8 temp_v0;

    var_v1 = 0;
    var_v0 = &sp30[0];
    var_a1 = &sp18[0];
    do {
        var_a1 += 4;
        var_v0 += 4;
        (*(f32 *)((char *)(var_v0) - 0x4)) = (f32) D_8009D9C4;
        (*(f32 *)((char *)(var_a1) - 0x4)) = (f32) D_8009D9C0;
    } while ((u32) var_a1 < (u32) &sp30[0]);
    var_a0 = 0;
    if (D_80087290 > 0) {
        var_a0_2 = 0;
        var_a1_2 = D_800D2350;
        do {
            temp_v0 = (*(s32 *)((char *)(var_a1_2) + 0x6));
            var_a0_2 += 0x10;
            temp_a3 = &(&sp30[0])[temp_v0];
            temp_f0 = (f32) (*(f32 *)((char *)(var_a1_2) + 0x2));
            temp_v0_2 = &(&sp18[0])[temp_v0];
            if (temp_f0 < *temp_a3) {
                *temp_a3 = temp_f0;
            }
            if (*temp_v0_2 < temp_f0) {
                *temp_v0_2 = temp_f0;
            }
            var_a1_2 += 0x10;
        } while (var_a0_2 < (D_80087290 * 0x10));
        var_a0 = 0;
    }
    D_800D2358 = 0;
    var_v0_2 = &sp30[0];
    var_a1_3 = &sp18[0];
    do {
        temp_f16 = *var_v0_2;
        var_v0_2 += 4;
        if (temp_f16 <= *var_a1_3) {
            *(&D_800D237C + D_800D2358) = var_a0;
            D_800D2358 += 1;
        }
        var_a0 += 1;
        var_a1_3 += 4;
    } while (var_a0 < 6);
    var_a2 = &D_800D237C;
    temp_v0_3 = D_800D2358 - 1;
    var_a0_3 = 0;
    if (temp_v0_3 > 0) {
        var_t0 = &D_800D2360;
        do {
            var_a0_3 += 1;
            temp_f2 = (&sp18[0])[(*(s32 *)((char *)(var_a2) + 0x0))];
            temp_f0_2 = (&sp30[0])[(*(s32 *)((char *)(var_a2) + 0x1))];
            var_a2 = (char *)(var_a2) + 1;
            *var_t0 = (temp_f0_2 + temp_f2) * 0.5f;
            if (temp_f0_2 < temp_f2) {
                var_v1 = 1;
            }
            var_t0 += 4;
        } while (var_a0_3 < temp_v0_3);
    }
    (&D_800D2360)[var_a0_3] = D_8009D9C8;
    return var_v1;
}

u8 func_15085DA8(f32 arg0) {
    f32 *var_v0;
    f32 temp_f6;
    s32 var_v1;

    var_v1 = 0;
    var_v0 = &D_800D2360;
    if (D_800D2360 <= arg0) {
        do {
            temp_f6 = (*(s32 *)((char *)(var_v0) + 0x4));
            var_v1 += 1;
            var_v0 += 4;
        } while (temp_f6 <= arg0);
    }
    return *(&D_800D237C + var_v1);
}

s8 func_15085DF8(f32 arg0, f32 arg1, f32 arg2, s8 arg3, s8 arg4) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f22;
    s32 var_s3;
    s8 var_s0;
    s8 var_s5;
    void *temp_v0;
    void *temp_v0_2;

    var_s3 = 0;
    var_f22 = D_8009D9CC;
    if (arg3 == 0) {
        var_s3 = 1;
    }
    if (D_8008729C != 0xFF) {
        temp_v0 = (D_8008729C * 0x10) + D_800D2350;
        temp_f2 = (f32) (*(f32 *)((char *)(temp_v0) + 0x0)) - arg0;
        temp_f16 = (f32) (*(f32 *)((char *)(temp_v0) + 0x2)) - arg1;
        temp_f18 = (f32) (*(f32 *)((char *)(temp_v0) + 0x4)) - arg2;
        if ((var_s3 == 0) || ((var_s3 != 0) && (sp70 = temp_f2, sp6C = temp_f16, sp68 = temp_f18, (func_15086D94(arg0, arg1, arg2, temp_f2, temp_f18) < 0.0f)))) {
            var_f22 = (temp_f2 * temp_f2) + (temp_f16 * temp_f16) + (temp_f18 * temp_f18) + 10.0f;
        }
        D_8008729C = 0xFF;
    }
    var_s5 = -1;
    var_s0 = 0;
    if (D_80087290 > 0) {
        do {
            temp_v0_2 = (var_s0 * 0x10) + D_800D2350;
            if (((arg4 == (*(s32 *)((char *)(temp_v0_2) + 0x6))) || (arg4 == -1)) && ((arg3 == (*(s32 *)((char *)(temp_v0_2) + 0xE))) || (arg3 == -1))) {
                temp_f2_2 = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x0)) - arg0;
                temp_f16_2 = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x2)) - arg1;
                temp_f18_2 = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x4)) - arg2;
                temp_f20 = (temp_f2_2 * temp_f2_2) + (temp_f16_2 * temp_f16_2) + (temp_f18_2 * temp_f18_2);
                if ((temp_f20 < var_f22) && ((var_s3 == 0) || ((var_s3 != 0) && (func_15086D94(arg0, arg1, arg2, temp_f2_2, temp_f18_2) < 0.0f)))) {
                    var_f22 = temp_f20;
                    var_s5 = var_s0;
                }
            }
            var_s0 += 1;
        } while (var_s0 < D_80087290);
    }
    D_800D2354 = (s32) sqrtf(var_f22);
    return var_s5;
}

s32 func_15086098(f32 arg0, f32 arg1, f32 arg2, s8 arg3, s8 arg4, u8 *arg5, u8 *arg6) {
    s32 sp60;
    s32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f12;
    f32 var_f26;
    f32 var_f2;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_v0;
    s8 temp_v0;
    s8 var_s0;
    u8 temp_a1;
    u8 temp_t7;
    u8 var_t2;
    void *temp_t0;
    void *temp_v0_3;
    void *var_a3;

    sp60 = 0xFF;
    temp_v0 = func_15085DF8(arg0, arg1, arg2, 0, (s8) func_15085DA8(arg1));
    var_s0 = temp_v0;
    if ((arg3 > 0) && (temp_v0 != -1)) {
        temp_v0_2 = func_15086C70(temp_v0);
        if ((temp_v0_2 != 0) && (func_150A32B4(temp_v0_2, (s32) arg0, (s32) arg1, (s32) arg2) != 0)) {
            var_v0 = func_15086364(var_s0, arg3, arg4, arg5, arg6);
            goto block_17;
        }
        temp_t0 = (var_s0 * 0x10) + D_800D2350;
        temp_t7 = (*(s32 *)((char *)(temp_t0) + 0x8));
        var_f12 = D_8009D9D0;
        var_t2 = 0xFF;
        var_f2 = (f32) temp_t7;
        if ((s32) temp_t7 < 0) {
            var_f2 += 4294967296.0f;
        }
        temp_f0 = 2.0f * var_f2;
        var_a2 = 0;
        var_a3 = temp_t0;
        if (var_f12 < (temp_f0 * temp_f0)) {
            var_v0 = func_15086364((s8) var_f12, var_s0, arg3, (u8 *) arg4, arg5, arg6);
            goto block_17;
        }
        var_f26 = var_f12;
        do {
            temp_a1 = (*(s32 *)((char *)(var_a3) + 0x9));
            var_a2 += 1;
            if (temp_a1 != 0xFF) {
                temp_v0_3 = D_800D2350 + (temp_a1 * 0x10);
                temp_v1 = (*(s32 *)((char *)(temp_t0) + 0x0));
                temp_a0 = (*(s32 *)((char *)(temp_t0) + 0x4));
                temp_f2 = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x0)) - temp_v1);
                temp_f12 = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x4)) - temp_a0);
                temp_f18 = (f32) temp_v1;
                temp_f20 = (f32) temp_a0;
                temp_f14 = 1.0f / sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
                temp_f2_2 = temp_f2 * temp_f14;
                var_f12 = temp_f12 * temp_f14;
                temp_f24 = (arg0 * temp_f2_2) + (arg2 * var_f12) + -((temp_f18 * temp_f2_2) + (temp_f20 * var_f12));
                if (temp_f24 > 0.0f) {
                    temp_f2_3 = arg0 - (temp_f18 + (temp_f2_2 * temp_f24));
                    var_f12 = arg2 - (temp_f20 + (var_f12 * temp_f24));
                    temp_f0_2 = (temp_f2_3 * temp_f2_3) + (var_f12 * var_f12);
                    if (temp_f0_2 < var_f26) {
                        var_t2 = temp_a1;
                        var_f26 = temp_f0_2;
                    }
                }
            }
            var_a3 = (char *)(var_a3) + 1;
        } while (var_a2 < 5);
        if (var_t2 != 0xFF) {
            sp58 = (s32) var_t2;
            var_v0 = func_15086364((s8) var_f12, var_s0, arg3, (u8 *) arg4, arg5, arg6);
            if (var_v0 == var_t2) {
block_17:
                sp60 = var_v0;
            }
        }
    }
    if (sp60 != 0xFF) {
        var_s0 = (s8) sp60;
    }
    return (s32) var_s0;
}

s32 func_15086364( s32 arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4) {
    void *sp;
    s16 sp28C[256];
    f32 sp5D0;
    u8 sp1C4;
    void * spFC;
    void * spBD;
    u8 spBC;
    void * sp7C;
    f32 *sp60;
    void * *var_s0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f2;
    s32 *temp_a2;
    s32 *temp_v1;
    s32 *var_v0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a0;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_4;
    s32 var_s4_3;
    s32 var_s7;
    s32 var_s7_2;
    s32 var_t0;
    s32 var_t4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 *temp_s1;
    u8 *temp_v0_10;
    u8 *temp_v0_8;
    u8 *var_a0_2;
    u8 *var_a0_3;
    u8 *var_s1;
    u8 *var_v0;
    u8 *var_v0_4;
    u8 *var_v0_6;
    u8 *var_v0_8;
    u8 *var_v0_9;
    u8 temp_a3;
    u8 temp_s0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v1_7;
    u8 var_s5;
    u8 var_t0_2;
    void *temp_s2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s5;
    void *temp_s5_2;
    void *temp_v0;
    void *temp_v0_9;
    void *var_s4;
    void *var_s4_2;
    void *var_v0_10;
    void *var_v0_2;
    void *var_v0_5;
    void *var_v0_7;

    D_80087298 = -1;
    D_800D2354 = 0;
    if (arg1 <= 0) {
        return 0xFF;
    }
    if ((arg0 < 0) || (var_v1 = 1, ((arg0 < D_80087290) == 0))) {
        return 0xFF;
    }
    var_a2 = 0;
    if (arg1 > 0) {
        temp_a1 = arg1 & 3;
        if (temp_a1 != 0) {
            var_v0 = arg3;
            do {
                var_a2 += 1;
                if (arg0 == *var_v0) {
                    var_v1 = 0;
                }
                var_v0 += 1;
            } while (temp_a1 != var_a2);
            if (var_a2 != arg1) {
                goto block_12;
            }
        } else {
block_12:
            var_v0_2 = arg3 + var_a2;
            do {
                var_a2 += 4;
                if (arg0 == (*(s32 *)((char *)(var_v0_2) + 0x0))) {
                    var_v1 = 0;
                }
                if (arg0 == (*(s32 *)((char *)(var_v0_2) + 0x1))) {
                    var_v1 = 0;
                }
                if (arg0 == (*(s32 *)((char *)(var_v0_2) + 0x2))) {
                    var_v1 = 0;
                }
                if (arg0 == (*(s32 *)((char *)(var_v0_2) + 0x3))) {
                    var_v1 = 0;
                }
                var_v0_2 = (char *)(var_v0_2) + 4;
            } while (var_a2 != arg1);
        }
    }
    var_t4 = 0;
    if (var_v1 == 0) {
        D_80087298 = arg0;
        return (s32) arg0;
    }
    var_s0 = 0;
    if (D_80087290 > 0) {
        var_v0_3 = &sp28C[0];
        temp_v1 = &var_v0_3[D_80087290];
        do {
            var_v0_3 += 4;
            (*(s32 *)((char *)(var_v0_3) - 0x4)) = 0xF4240;
        } while ((u32) var_v0_3 < (u32) temp_v1);
        var_s0 = 0;
    }
    temp_s5 = (arg0 * 0x10) + D_800D2350;
    var_s4 = temp_s5;
    arg1 = arg1;
    sp60 = D_800D2350;
    do {
        temp_a3 = (*(s32 *)((char *)(var_s4) + 0x9));
        var_s0 += 1;
        if (temp_a3 != 0xFF) {
            var_a0 = 0;
            var_a2_2 = 0;
            if (arg2 > 0) {
                temp_t1 = arg2 & 3;
                if (temp_t1 != 0) {
                    var_v0_4 = arg4;
                    do {
                        var_a2_2 += 1;
                        if (temp_a3 == *var_v0_4) {
                            var_a0 = 0x1388;
                        }
                        var_v0_4 += 1;
                    } while (temp_t1 != var_a2_2);
                    if (var_a2_2 != arg2) {
                        goto block_37;
                    }
                } else {
block_37:
                    var_v0_5 = arg4 + var_a2_2;
                    do {
                        var_a2_2 += 4;
                        if (temp_a3 == (*(s32 *)((char *)(var_v0_5) + 0x0))) {
                            var_a0 = 0x1388;
                        }
                        if (temp_a3 == (*(s32 *)((char *)(var_v0_5) + 0x1))) {
                            var_a0 = 0x1388;
                        }
                        if (temp_a3 == (*(s32 *)((char *)(var_v0_5) + 0x2))) {
                            var_a0 = 0x1388;
                        }
                        if (temp_a3 == (*(s32 *)((char *)(var_v0_5) + 0x3))) {
                            var_a0 = 0x1388;
                        }
                        var_v0_5 = (char *)(var_v0_5) + 4;
                    } while (var_a2_2 != arg2);
                }
            }
            (&sp1C4)[var_t4] = temp_a3;
            temp_v0 = (temp_a3 * 0x10) + sp60;
            *(&spFC + (*(s8 *)((char *)(var_s4) + 0x9))) = (s8) (s32) arg0;
            var_t4 += 1;
            temp_f2 = (f32) ((*(f32 *)((char *)(temp_s5) + 0x0)) - (*(f32 *)((char *)(temp_v0) + 0x0)));
            temp_f12 = (f32) ((*(f32 *)((char *)(temp_s5) + 0x2)) - (*(f32 *)((char *)(temp_v0) + 0x2)));
            temp_f14 = (f32) ((*(f32 *)((char *)(temp_s5) + 0x4)) - (*(f32 *)((char *)(temp_v0) + 0x4)));
            (&sp28C[0])[(*(s16 *)((char *)(var_s4) + 0x9))] = (s16) (s32) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) + var_a0;
        }
        var_s4 = (char *)(var_s4) + 1;
    } while (var_s0 != 5);
    var_s7 = 0;
    do {
        var_a1 = 0xF4240;
        var_a3 = 0xFF;
        var_t0 = 0;
        if (var_t4 > 0) {
            temp_v0_2 = var_t4 & 3;
            if (temp_v0_2 != 0) {
                var_a0_2 = &sp1C4;
                do {
                    temp_v0_3 = *var_a0_2;
                    if (temp_v0_3 != 0xFF) {
                        temp_v1_2 = (&sp28C[0])[temp_v0_3];
                        if (temp_v1_2 < var_a1) {
                            var_a1 = temp_v1_2;
                            var_a3 = var_t0;
                        }
                    }
                    var_t0 += 1;
                    var_a0_2 += 1;
                } while (temp_v0_2 != var_t0);
                if (var_t0 != var_t4) {
                    goto block_58;
                }
            } else {
block_58:
                var_a0_3 = &(&sp1C4)[var_t0];
                do {
                    temp_v0_4 = (*(s32 *)((char *)(var_a0_3) + 0x0));
                    if (temp_v0_4 != 0xFF) {
                        temp_v1_3 = (&sp28C[0])[temp_v0_4];
                        if (temp_v1_3 < var_a1) {
                            var_a1 = temp_v1_3;
                            var_a3 = var_t0;
                        }
                    }
                    temp_v0_5 = (*(s32 *)((char *)(var_a0_3) + 0x1));
                    if (temp_v0_5 != 0xFF) {
                        temp_v1_4 = (&sp28C[0])[temp_v0_5];
                        if (temp_v1_4 < var_a1) {
                            var_a1 = temp_v1_4;
                            var_a3 = var_t0 + 1;
                        }
                    }
                    temp_v0_6 = (*(s32 *)((char *)(var_a0_3) + 0x2));
                    if (temp_v0_6 != 0xFF) {
                        temp_v1_5 = (&sp28C[0])[temp_v0_6];
                        if (temp_v1_5 < var_a1) {
                            var_a1 = temp_v1_5;
                            var_a3 = var_t0 + 2;
                        }
                    }
                    temp_v0_7 = (*(s32 *)((char *)(var_a0_3) + 0x3));
                    if (temp_v0_7 != 0xFF) {
                        temp_v1_6 = (&sp28C[0])[temp_v0_7];
                        if (temp_v1_6 < var_a1) {
                            var_a1 = temp_v1_6;
                            var_a3 = var_t0 + 3;
                        }
                    }
                    var_t0 += 4;
                    var_a0_3 += 4;
                } while (var_t0 != var_t4);
            }
        }
        var_a2_3 = 0;
        if (var_a3 != 0xFF) {
            var_v1_2 = 0;
            if (var_t4 == (var_a3 + 1)) {
                var_t4 -= 1;
            }
            temp_v0_8 = &(&sp1C4)[var_a3];
            temp_s0 = *temp_v0_8;
            *temp_v0_8 = 0xFF;
            if (arg1 > 0) {
                temp_a1_2 = arg1 & 3;
                if (temp_a1_2 != 0) {
                    var_v0_6 = arg3;
                    do {
                        var_a2_3 += 1;
                        if (temp_s0 == *var_v0_6) {
                            var_v1_2 = 1;
                        }
                        var_v0_6 += 1;
                    } while (temp_a1_2 != var_a2_3);
                    if (var_a2_3 != arg1) {
                        goto block_82;
                    }
                } else {
block_82:
                    var_v0_7 = arg3 + var_a2_3;
                    do {
                        var_a2_3 += 4;
                        if (temp_s0 == (*(s32 *)((char *)(var_v0_7) + 0x0))) {
                            var_v1_2 = 1;
                        }
                        if (temp_s0 == (*(s32 *)((char *)(var_v0_7) + 0x1))) {
                            var_v1_2 = 1;
                        }
                        if (temp_s0 == (*(s32 *)((char *)(var_v0_7) + 0x2))) {
                            var_v1_2 = 1;
                        }
                        if (temp_s0 == (*(s32 *)((char *)(var_v0_7) + 0x3))) {
                            var_v1_2 = 1;
                        }
                        var_v0_7 = (char *)(var_v0_7) + 4;
                    } while (var_a2_3 != arg1);
                }
            }
            if (var_v1_2 != 0) {
                D_80087298 = (s8) temp_s0;
                var_t0_2 = temp_s0;
                var_v0_8 = &(&spBC)[var_s7];
                var_a3 = 0xFF;
                if (temp_s0 != (s32) arg0) {
                    do {
                        *var_v0_8 = var_t0_2;
                        var_t0_2 = *(&spFC + var_t0_2);
                        var_s7 += 1;
                        var_v0_8 += 1;
                    } while (var_t0_2 != (s32) arg0);
                }
                *var_v0_8 = var_t0_2;
                var_s7 += 1;
            } else {
                temp_s5_2 = (temp_s0 * 0x10) + sp60;
                var_s4_2 = temp_s5_2;
                var_s0_2 = 0;
                var_a3 = 0;
                do {
                    temp_v1_7 = (*(s32 *)((char *)(var_s4_2) + 0x9));
                    var_s0_2 += 1;
                    if (temp_v1_7 != 0xFF) {
                        var_a0_4 = 0;
                        if (temp_v1_7 != (s32) arg0) {
                            var_a2_4 = 0;
                            if (arg2 > 0) {
                                temp_t1_2 = arg2 & 3;
                                if (temp_t1_2 != 0) {
                                    var_v0_9 = arg4;
                                    do {
                                        var_a2_4 += 1;
                                        if (temp_v1_7 == *var_v0_9) {
                                            var_a0_4 = 0x1388;
                                        }
                                        var_v0_9 += 1;
                                    } while (temp_t1_2 != var_a2_4);
                                    if (var_a2_4 != arg2) {
                                        goto block_106;
                                    }
                                } else {
block_106:
                                    var_v0_10 = arg4 + var_a2_4;
                                    do {
                                        var_a2_4 += 4;
                                        if (temp_v1_7 == (*(s32 *)((char *)(var_v0_10) + 0x0))) {
                                            var_a0_4 = 0x1388;
                                        }
                                        if (temp_v1_7 == (*(s32 *)((char *)(var_v0_10) + 0x1))) {
                                            var_a0_4 = 0x1388;
                                        }
                                        if (temp_v1_7 == (*(s32 *)((char *)(var_v0_10) + 0x2))) {
                                            var_a0_4 = 0x1388;
                                        }
                                        if (temp_v1_7 == (*(s32 *)((char *)(var_v0_10) + 0x3))) {
                                            var_a0_4 = 0x1388;
                                        }
                                        var_v0_10 = (char *)(var_v0_10) + 4;
                                    } while (var_a2_4 != arg2);
                                }
                            }
                            temp_v0_9 = (temp_v1_7 * 0x10) + sp60;
                            temp_f2_2 = (f32) ((*(f32 *)((char *)(temp_s5_2) + 0x0)) - (*(f32 *)((char *)(temp_v0_9) + 0x0)));
                            temp_f12_2 = (f32) ((*(f32 *)((char *)(temp_s5_2) + 0x2)) - (*(f32 *)((char *)(temp_v0_9) + 0x2)));
                            temp_a2 = &(&sp28C[0])[temp_v1_7];
                            temp_f14_2 = (f32) ((*(f32 *)((char *)(temp_s5_2) + 0x4)) - (*(f32 *)((char *)(temp_v0_9) + 0x4)));
                            temp_a1_3 = (s32) sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2)) + (&sp28C[0])[temp_s0] + var_a0_4;
                            if (temp_a1_3 < *temp_a2) {
                                var_v1_3 = 0xFF;
                                if (var_t4 > 0) {
                                    do {
                                        temp_v0_10 = &(&sp1C4)[var_a3];
                                        if ((var_v1_3 == 0xFF) && (*temp_v0_10 == 0xFF)) {
                                            var_v1_3 = var_a3;
                                        }
                                        if (temp_v1_7 == *temp_v0_10) {
                                            *temp_a2 = temp_a1_3;
                                            *(&spFC + temp_v1_7) = temp_s0;
                                            var_a3 = var_t4 + 0xA;
                                        }
                                        var_a3 += 1;
                                    } while (var_a3 < var_t4);
                                }
                                var_a3 = 0;
                                if ((var_a3 ^ var_t4) == 0) {
                                    *(&spFC + temp_v1_7) = temp_s0;
                                    *temp_a2 = temp_a1_3;
                                    if (var_v1_3 == 0xFF) {
                                        var_v1_3 = var_t4;
                                        var_t4 += 1;
                                    }
                                    (*(s32 *)((char *)((char *)(sp) + var_v1_3) + 0x1C4)) = temp_v1_7;
                                }
                            }
                        }
                    }
                    var_s4_2 = (char *)(var_s4_2) + 1;
                } while (var_s0_2 != 5);
            }
        }
    } while (var_a3 != 0xFF);
    if (var_s7 < 2) {
        return 0xFF;
    }
    var_s7_2 = var_s7 - 2;
    temp_v0_11 = var_s7_2 + 1;
    var_s5 = (*(u8 *)((char *)(&(&spBC)[var_s7]) - 0x2));
    if (temp_v0_11 >= 0) {
        var_s0_3 = &sp7C;
        temp_s2 = temp_v0_11 + (char *)(var_s0_3);
        var_s1 = &spBC;
        do {
            var_s0_3 = (char *)(var_s0_3) + 1;
            (*(s8 *)((char *)(var_s0_3) - 0x1)) = (s8) (func_15086C70((s8) *var_s1) != 0);
            var_s1 += 1;
        } while ((u32) temp_s2 >= (u32) var_s0_3);
    }
    temp_s3 = &sp7C + var_s7_2;
    var_f2 = 0.0f;
    var_s4_3 = 0;
    if (((*(s32 *)((char *)(temp_s3) + 0x0)) != 0) && (((*(s32 *)((char *)(temp_s3) + 0x1)) == 0) || ((var_s7_2 > 0) && ((*(s32 *)((char *)(temp_s3) - 0x1)) == 0)))) {
        var_s4_3 = 1;
    }
    if (var_s7_2 > 0) {
        do {
            temp_s3_2 = &sp7C + var_s7_2;
            temp_v0_12 = var_s7_2 - 1;
            var_s0_4 = temp_v0_12;
            if ((*(s32 *)((char *)(temp_s3_2) - 0x1)) != 0) {
                if ((temp_v0_12 >= 0) && (*(&sp7C + temp_v0_12) != 0)) {
loop_144:
                    var_s0_4 -= 1;
                    if (var_s0_4 >= 0) {
                        if (*(&sp7C + var_s0_4) != 0) {
                            goto loop_144;
                        }
                    }
                }
                var_s0_4 += 1;
            }
            temp_s1 = &(&spBC)[var_s0_4];
            sp5D0 = var_f2;
            var_f2 += func_15086BD0((&spBC)[var_s7_2], *temp_s1);
            if (var_s4_3 == 0) {
                var_s4_3 = 1;
                if ((*(s32 *)((char *)(temp_s3_2) + 0x0)) != 0) {
                    var_s5 = *temp_s1;
                }
            }
            var_s7_2 = var_s0_4;
        } while ((u32) temp_s1 >= (u32) &spBD);
    }
    D_800D2354 = (s32) var_f2;
    return (s32) var_s5;
}

f32 func_15086BD0( s32 arg0, s32 arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_a2;
    void *temp_v1;

    if ((arg0 == 0xFF) || (arg1 == 0xFF)) {
        return 0.0f;
    }
    temp_a2 = D_800D2350 + (arg1 * 0x10);
    temp_v1 = D_800D2350 + (arg0 * 0x10);
    temp_f2 = (f32) ((*(f32 *)((char *)(temp_v1) + 0x0)) - (*(f32 *)((char *)(temp_a2) + 0x0)));
    temp_f12 = (f32) ((*(f32 *)((char *)(temp_v1) + 0x2)) - (*(f32 *)((char *)(temp_a2) + 0x2)));
    temp_f14 = (f32) ((*(f32 *)((char *)(temp_v1) + 0x4)) - (*(f32 *)((char *)(temp_a2) + 0x4)));
}

s32 func_15086C70(s32 arg0) {
    void *temp_v0;

    temp_v0 = D_800D2350 + (arg0 * 0x10);
    func_150A3194(3, 0xB, (*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x2)), (s32) (*(s32 *)((char *)(temp_v0) + 0x4)));
    return 0;
}

s32 func_15086CBC( s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    s32 temp_v1;

    if ((arg0 < 0) || (arg0 >= D_80087290)) {
        return 0;
    }
    temp_v1 = arg0 * 0x10;
    *arg1 = (f32) *(D_800D2350 + temp_v1);
    *arg2 = (f32) (*(f32 *)((char *)((D_800D2350 + temp_v1)) + 0x2));
    *arg3 = (f32) (*(f32 *)((char *)((D_800D2350 + temp_v1)) + 0x4));
    return 1;
}

s8 func_15086D48(s32 arg0) {
    f32 *var_a1;
    s8 var_v1;

    var_v1 = 0;
    if (D_80087290 > 0) {
        var_a1 = D_800D2350;
loop_2:
        if (arg0 == (*(s32 *)((char *)(var_a1) + 0x7))) {
            return var_v1;
        }
        var_v1 += 1;
        var_a1 += 0x10;
        if (var_v1 >= D_80087290) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_2;
    }
    return -1;
}

f32 func_15086D94(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp54;
    f32 sp50;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f16;
    f32 var_f20;
    f32 var_f28;
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v1_2;
    s32 var_t0;
    s32 var_t3;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_a1;
    void *temp_t2;
    void *var_t1;

    temp_v0 = func_15085DA8(arg1);
    var_t3 = 0;
    sp50 = 100.0f;
    if (D_80087290 > 0) {
        var_f28 = sp54;
        do {
            temp_t2 = (var_t3 * 0x10) + D_800D2350;
            if ((*(s32 *)((char *)(temp_t2) + 0xE)) == 1) {
                var_t0 = 0;
                var_t1 = temp_t2;
                if (temp_v0 == (*(s32 *)((char *)(temp_t2) + 0x6))) {
                    do {
                        temp_v1 = (*(s32 *)((char *)(var_t1) + 0x9));
                        var_t0 += 1;
                        if ((temp_v1 != 0xFF) && (var_t3 < (s32) temp_v1)) {
                            temp_a1 = (temp_v1 * 0x10) + D_800D2350;
                            if (((*(f32 *)((char *)(temp_a1) + 0xE)) == 1) && (((temp_a2 = (*(f32 *)((char *)(temp_a1) + 0x4)), temp_v1_2 = (*(f32 *)((char *)(temp_t2) + 0x4)), temp_a0 = (*(f32 *)((char *)(temp_t2) + 0x0)), temp_a3 = (*(f32 *)((char *)(temp_a1) + 0x0)), temp_f12 = (f32) (temp_a2 - temp_v1_2), temp_f24 = (f32) temp_a0, temp_f26 = (f32) temp_v1_2, temp_f14 = -(f32) (temp_a3 - temp_a0), temp_f0 = -((temp_f24 * temp_f12) + (temp_f14 * temp_f26)), temp_f18 = (arg0 * temp_f12) + (arg2 * temp_f14) + temp_f0, var_f16 = temp_f18, temp_f2 = ((arg0 + arg3) * temp_f12) + ((arg2 + arg4) * temp_f14) + temp_f0, var_f20 = temp_f2, (temp_f2 < 0.0f)) && (temp_f18 >= 0.0f)) || ((temp_f18 < 0.0f) && (temp_f2 >= 0.0f)))) {
                                if (temp_f2 < 0.0f) {
                                    var_f20 = -temp_f2;
                                }
                                if (temp_f18 < 0.0f) {
                                    var_f16 = -temp_f18;
                                }
                                temp_f12_2 = -temp_f14;
                                temp_f2_2 = var_f16 / (var_f16 + var_f20);
                                var_f28 = temp_f2_2;
                                temp_f0_2 = -((temp_f24 * temp_f12_2) + (temp_f12 * temp_f26));
                                temp_f16 = (((temp_f2_2 * arg3) + arg0) * temp_f12_2) + (((temp_f2_2 * arg4) + arg2) * temp_f12) + temp_f0_2;
                                temp_f20 = ((f32) temp_a3 * temp_f12_2) + (temp_f12 * (f32) temp_a2) + temp_f0_2;
                                if ((((temp_f20 > 0.0f) && (temp_f16 > 0.0f) && (temp_f16 <= temp_f20)) || ((temp_f20 < 0.0f) && (temp_f16 < 0.0f) && (temp_f20 <= temp_f16))) && (var_f28 < sp50)) {
                                    sp50 = var_f28;
                                }
                            }
                        }
                        var_t1 = (char *)(var_t1) + 1;
                    } while (var_t0 != 5);
                }
            }
            var_t3 += 1;
        } while (var_t3 < D_80087290);
        sp54 = var_f28;
    }
    if (sp50 <= 1.0f) {
        return sqrtf((arg3 * arg3) + (arg4 * arg4)) * sp54;
    }
    return -1.0f;
}

void func_150870D0(s32 arg1, s32 arg2) {
    s8 sp4B;
    u8 sp49;
    u8 sp48;
    s8 sp46;
    u8 sp45;
    u8 sp44;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s8 temp_v0;
    s8 var_s1_2;
    s8 var_s1_3;
    s8 var_s3;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_s7;
    u8 temp_v0_2;
    u8 temp_v1_2;
    u8 var_s6;
    void *temp_a0;
    void *temp_s0;
    void *var_a2;

    D_800872A0 = NULL;
    temp_v0 = func_15086D48(0);
    temp_v1 = temp_v0 & 0xFF;
    sp4B = temp_v0;
    if (temp_v1 != 0xFF) {
        var_s6 = 0xFF;
        var_s1 = 0;
        var_a2 = (temp_v1 * 0x10) + D_800D2350;
        var_a1 = (D_800D23A8 * 0xFF) & 0xFF;
        do {
            temp_v1_2 = (*(s32 *)((char *)(var_a2) + 0x9));
            var_s1 += 1;
            if (temp_v1_2 != 0xFF) {
                temp_a0 = (temp_v1_2 * 0x10) + D_800D2350;
                if (((*(s32 *)((char *)(temp_a0) + 0xE)) == 0) && (((D_800D23A8 == 0) && ((s32) (*(s32 *)((char *)(temp_a0) + 0xF)) >= var_a1)) || ((D_800D23A8 != 0) && (var_a1 >= (s32) (*(s32 *)((char *)(temp_a0) + 0xF)))))) {
                    var_a1 = (*(s32 *)((char *)(temp_a0) + 0xF)) & 0xFF;
                    var_s6 = temp_v1_2 & 0xFF;
                }
            }
            var_a2 = (char *)(var_a2) + 1;
        } while (var_s1 != 5);
        if (var_s6 != 0xFF) {
            temp_s7 = func_150888A8((u8) sp4B, var_s6 & 0xFF, 0, D_800D23A8) & 0xFF;
            temp_v0_2 = func_150888A8(var_s6 & 0xFF, (u8) sp4B, 0);
            sp49 = temp_s7;
            sp48 = temp_v0_2;
        }
        if ((var_s6 != 0xFF) && (sp48 != 0xFF)) {
            var_s1_2 = sp49 & 0xFF;
            if (sp49 != 0xFF) {
                var_s3 = 0;
                sp45 = var_s6;
                do {
                    temp_a0_2 = sp45;
                    temp_a1 = var_s1_2 & 0xFF;
                    sp45 = temp_a1;
                    sp46 = var_s1_2;
                    sp44 = temp_a0_2;
                    var_s1_2 = func_150888A8(temp_a0_2, temp_a1, 0) & 0xFF;
                    var_s3 += 1;
                } while ((u8) sp4B != temp_a0_2);
                D_800D2399 = arg2;
                D_800D2398 = (s8) arg1;
                temp_v0_3 = arg1 + arg2;
                sp46 = var_s1_2;
                D_800D2394 = 0;
                arg1 = temp_v0_3;
                D_800872A0 = allocate_memory(temp_v0_3 * 0x84, 1, 0, 0);
                var_s1_3 = 0;
                if (arg1 > 0) {
                    var_s2 = 0;
                    do {
                        temp_s0 = var_s2 + (char *)(D_800872A0);
                        func_15088824(temp_s0);
                        (*(s32 *)((char *)(temp_s0) + 0x2B)) = sp48;
                        (*(s32 *)((char *)(temp_s0) + 0x2D)) = var_s6;
                        (*(s32 *)((char *)(temp_s0) + 0x2E)) = sp49;
                        (*(u8 *)((char *)(temp_s0) + 0x2C)) = (u8) sp4B;
                        if (var_s1_3 < D_800D2398) {
                            (*(s32 *)((char *)(temp_s0) + 0x31)) = var_s1_3;
                        }
                        (*(s32 *)((char *)(temp_s0) + 0x26)) = var_s3;
                        var_s2 += 0x84;
                        (*(s8 *)((char *)(temp_s0) + 0x30)) = (s8) (var_s1_3 >= D_8008FD90);
                        var_s1_3 += 1;
                    } while (var_s1_3 != arg1);
                }
                D_800D239A = 1;
            }
        }
    }
}

void func_15087350(s32 arg0, s32 arg1, f32 arg2) {
    s32 spDC;
    f32 sp18C;
    f32 sp188;
    f32 sp16C;
    f32 sp168;
    f32 sp70[8];
    f32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A0;
    f32 sp19C;
    f32 sp184;
    f32 sp174;
    f32 sp164;
    void *sp15C;
    s8 sp15A;
    f32 spD4;
    s8 spB4;
    s32 sp68;
    s32 sp48;
    f32 *temp_s1;
    f32 *temp_v1_3;
    f32 *var_a2;
    f32 *var_a2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f12;
    f32 var_f20;
    f32 var_f22;
    f32 var_f2;
    s32 temp_t3;
    s32 temp_t7;
    s32 var_s0;
    s32 var_t2;
    s8 *temp_a3;
    s8 *temp_v0;
    s8 *var_a3;
    s8 *var_a3_2;
    s8 temp_a0;
    s8 temp_t0;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 var_a1;
    s8 var_a1_2;
    s8 var_a1_3;
    s8 var_s2;
    s8 var_t0;
    void *temp_t7_2;
    void *var_v0;

    var_s2 = 0;
    if (D_800872A0 != NULL) {
        temp_t7 = arg0 * 0x84;
        sp68 = temp_t7;
        temp_s1 = temp_t7 + (char *)(D_800872A0);
        temp_t7_2 = ((*(s32 *)((char *)(temp_s1) + 0x31)) * 0x32C) + &gObjects;
        sp15C = temp_t7_2;
        sp1BC = (*(s32 *)((char *)(temp_t7_2) + 0x14));
        D_800D2390 = 0;
        sp1B8 = (*(s32 *)((char *)(temp_t7_2) + 0x1C));
        if ((*(s32 *)((char *)(temp_s1) + 0x30)) == 0) {
            (*(s32 *)((char *)(temp_s1) + 0x0)) = 0.5f;
        } else {
            temp_f0 = (*(s32 *)((char *)(temp_s1) + 0x0));
            var_f20 = ((*(s32 *)((char *)(temp_s1) + 0x4)) - temp_f0) * 0.125f;
            if (D_8009D9E0 < var_f20) {
                var_f20 = D_8009D9E0;
            }
            if (var_f20 < D_8009D9E4) {
                var_f20 = D_8009D9E4;
            }
            (*(s32 *)((char *)(temp_s1) + 0x0)) = temp_f0 + var_f20;
        }
        var_f22 = 0.75f;
        sp15A = 1;
        sp1A0 = D_8009D9E8;
        do {
            var_s0 = 0;
            if (sp15A != 0) {
                func_15088F30(temp_s1, &sp184, &sp174, &sp164);
                temp_f12 = sp18C - sp188;
                temp_f2 = sp16C - sp168;
                sp1B4 = temp_f12;
                sp1B0 = temp_f2;
                sp19C = sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2));
            }
            temp_f20 = func_150498A4(&sp184, 0, (*(s32 *)((char *)(temp_s1) + 0x8)), &sp1B4);
            temp_f16 = func_150498A4(&sp164, 0, (*(s32 *)((char *)(temp_s1) + 0x8)), &sp1B0);
            temp_f2_2 = -1.0f / sqrtf((sp1B4 * sp1B4) + (sp1B0 * sp1B0));
            temp_f8 = sp1B4 * temp_f2_2;
            sp1B4 = temp_f8;
            sp1B0 *= temp_f2_2;
            (*(s32 *)((char *)(temp_s1) + 0xC)) = temp_f8;
            (*(s32 *)((char *)(temp_s1) + 0x10)) = sp1B0;
            temp_f12_2 = -((temp_f20 * sp1B4) + (temp_f16 * sp1B0));
            sp1AC = temp_f12_2;
            temp_f14 = (sp1B4 * sp1BC) + (sp1B0 * sp1B8) + temp_f12_2;
            if ((temp_f14 < -50.0f) || (temp_f14 > 50.0f)) {
                var_f12 = temp_f14;
                if (temp_f14 < 0.0f) {
                    var_f12 = -temp_f14;
                }
                if (sp1A0 < var_f12) {
                    var_f22 *= 0.5f;
                }
                sp1A0 = var_f12;
                var_s0 = 1;
                var_f2 = (temp_f14 * var_f22) / sp19C;
                if (var_f2 < -0.5f) {
                    var_f2 = -0.5f;
                }
                if (var_f2 > 0.5f) {
                    var_f2 = 0.5f;
                }
                sp1A8 = temp_f14;
                sp15A = func_15088A08((void *)(s32)(var_f12), temp_f14);
            }
            var_s2 += 1;
            if (var_s2 >= 0xB) {
                var_s0 = 0;
            }
        } while (var_s0 != 0);
        sp1A8 = temp_f14;
        func_15042D78(0x80);
        (*(s8 *)((char *)(temp_s1) + 0x32)) = (s8) (*(s8 *)((char *)(temp_s1) + 0x33));
        (*(s8 *)((char *)(temp_s1) + 0x33)) = (s8) D_800BE9E4;
        temp_f12_3 = (((*(s32 *)((char *)(sp15C) + 0x2C)) * sp1B4) + (sp1B0 * (*(s32 *)((char *)(sp15C) + 0x34))) + sp1AC) - temp_f14;
        (*(f32 *)((char *)(temp_s1) + 0x14)) = (f32) ((temp_f12_3 * 4.0f) / (f32) (*(f32 *)((char *)(temp_s1) + 0x32)));
        if ((*(s32 *)((char *)(temp_s1) + 0x30)) != 0) {
            bcopy(temp_s1, &spD4, 0x40);
            func_15088A08(&spD4, 2.0f * arg2);
            func_15088F30(&spD4, &sp184, &sp174, &sp164);
            D_800D239C = func_150497E0(&sp184, 0, spDC);
            D_800D23A0 = func_150497E0(&sp174, 0, spDC);
            D_800D23A4 = func_150497E0(&sp164, 0, spDC);
            if (arg0 < D_800D2398) {
                if (arg1 == 0) {
                    temp_f20_2 = (f32) ((f64) D_800CC310 * D_8009D9F0);
                    D_800D239C = (sinf(temp_f20_2) * 300.0f) + (*(s32 *)((char *)(sp15C) + 0x14));
                    D_800D23A0 = (*(s32 *)((char *)(sp15C) + 0x18));
                    D_800D23A4 = (cosf(temp_f20_2) * 300.0f) + (*(s32 *)((char *)(sp15C) + 0x1C));
                }
                sp48 = (s32) D_800D239C;
                (*(s16 *)((char *)((*(D_800D2104 + ((*(s16 *)((char *)(sp15C) + 0x13F)) * 4)))) + 0x8)) = (s16) sp48;
                sp48 = (s32) D_800D23A0;
                (*(s16 *)((char *)((*(D_800D2104 + ((*(s16 *)((char *)(sp15C) + 0x13F)) * 4)))) + 0xA)) = (s16) sp48;
                sp48 = (s32) D_800D23A4;
                (*(s16 *)((char *)((*(D_800D2104 + ((*(s16 *)((char *)(sp15C) + 0x13F)) * 4)))) + 0xC)) = (s16) sp48;
                (*(f32 *)((char *)(sp15C) + 0x44)) = (f32) arg1;
                if (D_800D2390 == 1) {
                    (*(s32 *)((char *)(sp15C) + 0x20)) = 75.0f;
                } else if (D_800D2390 == 2) {
                    (*(s32 *)((char *)(sp15C) + 0x20)) = 55.0f;
                } else if (D_800D2390 == 3) {
                    (*(s32 *)((char *)(sp15C) + 0x20)) = 65.0f;
                }
                (*(s32 *)((char *)(sp15C) + 0x21E)) = 0;
            }
        } else {
            (*(s32 *)((char *)(temp_s1) + 0x0)) = 0.0f;
            func_15088F30((*(f32 * *)&temp_f12_3), temp_s1, &sp184, &sp174, &sp164);
            temp_f20_3 = func_150497E0(&sp184, 0, (*(s32 *)((char *)(temp_s1) + 0x8)));
            temp_f0_2 = func_150497E0(&sp164, 0, (*(s32 *)((char *)(temp_s1) + 0x8)));
            (*(s32 *)((char *)(temp_s1) + 0x0)) = 1.0f;
            sp1C0 = temp_f0_2;
            func_15088F30(temp_s1, &sp184, &sp174, &sp164);
            sp1B4 = func_150497E0(&sp184, 0, (*(s32 *)((char *)(temp_s1) + 0x8))) - temp_f20_3;
            temp_f2_3 = func_150497E0(&sp164, 0, (*(s32 *)((char *)(temp_s1) + 0x8))) - sp1C0;
            sp1B0 = temp_f2_3;
            temp_f0_3 = sqrtf((sp1B4 * sp1B4) + (temp_f2_3 * temp_f2_3));
            if (temp_f0_3 > 1.0f) {
                temp_f18 = 1.0f / temp_f0_3;
                temp_f8_2 = sp1B4 * temp_f18;
                temp_f6 = sp1B0 * temp_f18;
                sp1B4 = temp_f8_2;
                sp1B0 = temp_f6;
                (*(s32 *)((char *)(temp_s1) + 0x0)) = (((temp_f8_2 * sp1BC) + (temp_f6 * sp1B8)) - ((temp_f8_2 * temp_f20_3) + (temp_f6 * sp1C0))) * temp_f18;
            } else {
                (*(s32 *)((char *)(temp_s1) + 0x0)) = 0.0f;
            }
        }
        (*(u8 *)((char *)(temp_s1) + 0x48)) = (u8) arg1;
        D_800D23A9 = 1;
        if (((*(s32 *)((char *)(temp_s1) + 0x30)) == 0) && ((s32) (*(s32 *)((char *)(temp_s1) + 0x48)) > 0) && !(D_800D18A0 & (1 << (*(s32 *)((char *)(temp_s1) + 0x31))))) {
            (*(s32 *)((char *)(temp_s1) + 0x1C)) = (s32) ((*(s32 *)((char *)(temp_s1) + 0x1C)) + D_800BE9E4);
        }
        if (((*(s32 *)((char *)(temp_s1) + 0x30)) >= 2) && ((*(s32 *)((char *)((*(s32 *)((char *)(sp15C) + 0x31C))) + 0x84)) == 0)) {
            func_1508802C(temp_s1, sp15C, 0xD);
        }
        if (sp68 == 0) {
            var_t0 = 0;
            temp_t3 = D_800D2398 - 1;
            if (D_800D2398 > 0) {
                var_v0 = D_800872A0;
                var_a3 = &spB4;
                var_a2 = &sp70[0];
                var_a1 = 1;
                do {
                    *var_a3 = var_t0;
                    var_t0 = var_a1;
                    var_a1 += 1;
                    var_a3 += 1;
                    *var_a2 = (*(f32 *)((char *)(var_v0) + 0x8)) + (f32) (*(f32 *)((char *)(var_v0) + 0x24));
                    temp_v1 = (*(s32 *)((char *)(var_v0) + 0x2A));
                    if (temp_v1 != 0x7F) {
                        *var_a2 += D_8009D9F8 - ((f32) temp_v1 * 1000.0f);
                    }
                    temp_v1_2 = (*(s32 *)((char *)(var_v0) + 0x31));
                    var_v0 = (char *)(var_v0) + 0x84;
                    if (D_800D18A0 & (1 << temp_v1_2)) {
                        *var_a2 -= D_8009D9FC;
                    }
                    var_a2 += 4;
                } while (var_t0 < D_800D2398);
                var_t0 = 0;
            }
            do {
                var_t2 = 1;
                if (temp_t3 > 0) {
                    var_a2_2 = &sp70[0];
                    var_a1_2 = 1;
                    do {
                        temp_f2_4 = (*(s32 *)((char *)(var_a2_2) + 0x0));
                        temp_a3 = &(&spB4)[var_t0];
                        temp_v1_3 = &(&sp70[0])[var_a1_2];
                        temp_v0 = &(&spB4)[var_a1_2];
                        if (temp_f2_4 < (*(s32 *)((char *)(var_a2_2) + 0x4))) {
                            temp_a0 = *temp_a3;
                            *temp_a3 = *temp_v0;
                            (*(s32 *)((char *)(var_a2_2) + 0x0)) = *temp_v1_3;
                            var_t2 = 0;
                            *temp_v1_3 = temp_f2_4;
                            *temp_v0 = temp_a0;
                        }
                        var_t0 = var_a1_2;
                        var_a1_2 += 1;
                        var_a2_2 += 4;
                    } while (var_t0 < temp_t3);
                    var_t0 = 0;
                }
            } while (var_t2 == 0);
            var_a3_2 = &spB4;
            if (D_800D2398 > 0) {
                var_a1_3 = 1;
                do {
                    (*(s32 *)((char *)(((char *)(D_800872A0) + (*var_a3_2 * 0x84))) + 0x29)) = var_a1_3;
                    temp_t0 = var_a1_3;
                    var_a1_3 += 1;
                    var_a3_2 += 1;
                } while (temp_t0 < D_800D2398);
            }
        }
    }
}

void func_15087CC0(void) {
    s32 var_s0;
    s32 var_s1;
    s8 var_v0;
    void *temp_a0;
    void *temp_a1;

    D_800D23A9 = 0;
    if (D_800872A0 != NULL) {
        var_v0 = D_800D2398;
        var_s0 = 0;
        var_s1 = 0;
        if (var_v0 > 0) {
            do {
                temp_a0 = var_s1 + (char *)(D_800872A0);
                temp_a1 = &gObjects + ((*(s32 *)((char *)(temp_a0) + 0x31)) * 0x32C);
                if ((*(s32 *)((char *)(temp_a1) + 0x318)) != 0) {
                    if ((*(s32 *)((char *)(temp_a0) + 0x30)) >= 2) {
                        func_150891E8((f32)(s32)(temp_a0), temp_a1);
                        goto block_10;
                    }
                    if ((*(s32 *)((char *)(temp_a0) + 0x48)) == 0) {
                        func_150896EC(temp_a0, temp_a1, 0);
                        goto block_10;
                    }
                    if ((*(s32 *)((char *)(temp_a0) + 0x49)) != 0) {
                        func_150896EC(temp_a0, temp_a1, 1);
block_10:
                        var_v0 = D_800D2398;
                    }
                }
                var_s0 += 1;
                var_s1 += 0x84;
            } while (var_s0 < var_v0);
        }
    }
}

void func_15087DCC(s32 arg0, s32 arg1) {
    void *sp1C;
    s8 var_a3;
    u8 temp_v0;
    void *temp_v1;

    var_a3 = arg1;
    if (D_800872A0 != NULL) {
        temp_v1 = (arg0 * 0x84) + (char *)(D_800872A0);
        if (var_a3 != (*(s32 *)((char *)(temp_v1) + 0x2F))) {
            if (var_a3 != 0) {
                sp1C = temp_v1;
                temp_v0 = func_150888A8((*(s32 *)((char *)(temp_v1) + 0x2B)), (*(s32 *)((char *)(temp_v1) + 0x2C)), 1, var_a3);
                (*(s32 *)((char *)(temp_v1) + 0x2D)) = temp_v0;
                var_a3 = (s8) (s32) arg1;
                (*(s32 *)((char *)(temp_v1) + 0x2E)) = func_150888A8((*(s32 *)((char *)(temp_v1) + 0x2C)), temp_v0 & 0xFF, 1);
            }
            (*(s32 *)((char *)(temp_v1) + 0x2F)) = var_a3;
        }
    }
}

void func_15087E54(s32 arg0, void *arg1) {
    s32 temp_t7;
    s32 temp_t9;
    void *temp_v0;

    if (D_800872A0 != NULL) {
        temp_v0 = (arg0 * 0x84) + (char *)(D_800872A0);
        temp_t7 = (func_1505A630((*(s32 *)((char *)(temp_v0) + 0x10)), (*(s32 *)((char *)(temp_v0) + 0xC)), NULL) + 0x4000) & 0xFFFF;
        temp_t9 = (temp_t7 - (*(s32 *)((char *)(arg1) + 0x76))) & 0xFFFF;
        if (temp_t9 & 0x8000) {
            if (temp_t9 < 0xDBFF) {
                (*(u16 *)((char *)(arg1) + 0x76)) = (u16) (temp_t7 + 0x2400);
            }
        } else if (temp_t9 >= 0x2401) {
            (*(u16 *)((char *)(arg1) + 0x76)) = (u16) (temp_t7 - 0x2400);
        }
    }
}

void func_15087EF0(s32 arg0, void *arg1) {
    void *sp1C;
    s16 var_v1;
    u32 temp_v0;
    void *temp_v1;

    if (D_800872A0 != NULL) {
        temp_v1 = (arg0 * 0x84) + (char *)(D_800872A0);
        sp1C = temp_v1;
        temp_v0 = func_1505A630((*(s32 *)((char *)(temp_v1) + 0x10)), (*(s32 *)((char *)(temp_v1) + 0xC)), NULL);
        if (D_800D23A8 == 0) {
            if ((*(s32 *)((char *)(temp_v1) + 0x0)) < 0.5f) {
                var_v1 = (temp_v0 + 0x4A00) & 0xFFFF;
            } else {
                var_v1 = (temp_v0 + 0x3600) & 0xFFFF;
            }
        } else {
            var_v1 = (temp_v0 + 0x3600) & 0xFFFF;
            if ((*(s32 *)((char *)(temp_v1) + 0x0)) >= 0.5f) {
                var_v1 = (temp_v0 + 0x4A00) & 0xFFFF;
            }
        }
        (*(s32 *)((char *)(arg1) + 0x76)) = var_v1;
    }
}

void func_15087FC4(s32 arg0, s32 arg1) {
    if (D_800872A0 != NULL) {
        (*(s32 *)((char *)(((arg0 * 0x84) + (char *)(D_800872A0))) + 0x31)) = arg1;
    }
}

void func_15087FEC(s32 arg0, s32 arg1) {
    if (D_800872A0 != NULL) {
        (*(f32 *)((char *)(((arg0 * 0x84) + (char *)(D_800872A0))) + 0x4)) = (f32) ((f32) arg1 * 0.00390625f);
    }
}

s32 func_1508802C(f32 *arg0, void *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x31C));
    if ((*(s32 *)((char *)(temp_v0) + 0x120)) != 0) {
        return 1;
    }
    if (D_800D18A0 & (1 << ((s32) ((char *)(arg1) - (char *)(&gObjects)) / 812))) {
        return 1;
    }
    (*(s32 *)((char *)(temp_v0) + 0x84)) = 1;
    (*(s32 *)((char *)(arg1) + 0x0)) = 0xC;
    (*(s32 *)((char *)(arg1) + 0x232)) = arg2;
    gCurrentObject = arg1;
    gCurrentObjectIndex = (*(s32 *)((char *)(arg0) + 0x31));
    (*(s32 *)((char *)(arg1) + 0x218)) = func_1507BB28(0, arg2, arg1);
    (*(s32 *)((char *)(arg1) + 0x21C)) = 0;
    (*(s32 *)((char *)(arg1) + 0x125)) = 0xFF;
    (*(s32 *)((char *)(arg0) + 0x30)) = 2;
    return 0;
}

s32 func_150880F8(s32 arg0, s32 arg1) {
    f32 *sp1C;
    f32 *temp_a0;
    s32 var_a2;
    s8 temp_v1;
    void *temp_a1;

    var_a2 = 0;
    if (D_800872A0 == NULL) {
        return 0;
    }
    temp_a0 = (arg0 * 0x84) + (char *)(D_800872A0);
    temp_v1 = (*(s32 *)((char *)(temp_a0) + 0x30));
    temp_a1 = ((*(s32 *)((char *)(temp_a0) + 0x31)) * 0x32C) + &gObjects;
    if (temp_v1 == 0) {
        sp1C = temp_a0;
        var_a2 = func_1508802C(temp_a0, temp_a1, (s8) arg1);
    } else if (temp_v1 == 1) {
        (*(s32 *)((char *)(temp_a0) + 0x30)) = 2;
        (*(s32 *)((char *)(temp_a1) + 0x125)) = 0xFF;
    }
    (*(s8 *)((char *)(temp_a0) + 0x2A)) = (s8) D_800D239A;
    D_800D239A += 1;
    return var_a2;
}

s32 func_150881CC(s32 arg0) {
    if (D_800872A0 == NULL) {
        return 0;
    }
    return (s32) ((*(s32 *)((arg0 * 0x84) + (char *)(D_800872A0))) * 256.0f);
}

s32 func_15088218(s32 arg0) {
    void *temp_a0;

    if (D_800872A0 == NULL) {
        return 0;
    }
    temp_a0 = (arg0 * 0x84) + (char *)(D_800872A0);
    return ((*(s32 *)((char *)(temp_a0) + 0x24)) * 0x10) + (s32) ((*(s32 *)((char *)(temp_a0) + 0x8)) * 16.0f);
}

s32 func_15088270(s32 arg0) {
    if (D_800872A0 == NULL) {
        return 0;
    }
    return (s32) (*(s32 *)((char *)(((arg0 * 0x84) + (char *)(D_800872A0))) + 0x14));
}

s8 func_150882B0(s32 arg0) {
    if (D_800872A0 == NULL) {
        return 0;
    }
    return (*(s32 *)((char *)(((arg0 * 0x84) + (char *)(D_800872A0))) + 0x27));
}

s32 func_150882E4(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a3;
    void *temp_v1;
    void *var_a2;

    if (D_800872A0 == NULL) {
        return 0x10;
    }
    temp_v1 = (arg0 * 0x84) + (char *)(D_800872A0);
    var_a3 = 0;
    if (D_800D2398 > 0) {
        var_a2 = D_800872A0;
loop_4:
        if ((((*(s32 *)((char *)(temp_v1) + 0x29)) + arg1) == (*(s32 *)((char *)(var_a2) + 0x29))) && (var_a3 != arg0)) {
            var_a0 = ((((*(s32 *)((char *)(temp_v1) + 0x24)) * 0x10) + (s32) ((*(s32 *)((char *)(temp_v1) + 0x8)) * 16.0f)) - ((*(s32 *)((char *)(var_a2) + 0x24)) * 0x10)) - (s32) ((*(s32 *)((char *)(var_a2) + 0x8)) * 16.0f);
            if (var_a0 < 0) {
                var_a0 = -var_a0;
            }
            return (var_a0 << 8) | var_a3;
        }
        var_a3 += 1;
        var_a2 = (char *)(var_a2) + 0x84;
        if (var_a3 >= D_800D2398) {
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return 0x10;
        }
        goto loop_4;
    }
    return 0x10;
}

void *func_150883B0(s32 arg0, s32 arg1, f32 *arg2, s32 *arg3) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 var_f0;
    f32 var_f20;
    s32 var_t0;
    s32 var_t2;
    s8 temp_a1;
    s8 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a3;

    if (D_800872A0 == NULL) {
        return NULL;
    }
    temp_v1 = (arg0 * 0x84) + (char *)(D_800872A0);
    if (arg1 >= 0) {
        var_f0 = -1.0f;
    } else {
        var_f0 = 1.0f;
    }
    temp_f14 = (*(s32 *)((char *)(temp_v1) + 0xC)) * var_f0;
    temp_f16 = (*(s32 *)((char *)(temp_v1) + 0x10)) * var_f0;
    temp_a1 = (*(s32 *)((char *)(temp_v1) + 0x2F));
    temp_a0 = &gObjects + ((*(s32 *)((char *)(temp_v1) + 0x31)) * 0x32C);
    var_a3 = NULL;
    var_f20 = D_8009DA00;
    var_t0 = 0;
    if (D_800D2398 > 0) {
        var_t2 = 0;
        do {
            var_t0 += 1;
            temp_v1_2 = var_t2 + (char *)(D_800872A0);
            temp_v0 = (*(s32 *)((char *)(temp_v1_2) + 0x31));
            if (((s8) ((*(s8 *)((char *)(temp_a0) + 0x124)) - 1) != temp_v0) && ((temp_a1 == 0) || (temp_a1 == (*(s8 *)((char *)(temp_v1_2) + 0x2F))))) {
                temp_a0_2 = &gObjects + (temp_v0 * 0x32C);
                temp_f0 = (temp_f14 * (*(s32 *)((char *)(temp_a0_2) + 0x14))) + (temp_f16 * (*(s32 *)((char *)(temp_a0_2) + 0x1C))) + -((temp_f14 * (*(s32 *)((char *)(temp_a0) + 0x14))) + (temp_f16 * (*(s32 *)((char *)(temp_a0) + 0x1C))));
                if ((temp_f0 > 0.0f) && (temp_f0 < var_f20)) {
                    var_f20 = temp_f0;
                    *arg2 = (*(s32 *)((char *)(temp_v1_2) + 0x0));
                    *arg3 = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x2F));
                    var_a3 = &gObjects + ((*(s32 *)((char *)(temp_v1_2) + 0x31)) * 0x32C);
                }
            }
            var_t2 += 0x84;
        } while (var_t0 < D_800D2398);
    }
    return var_a3;
}

s32 func_1508855C(void *arg0) {
    s32 temp_a1;
    s32 temp_lo;
    s32 var_a0;
    void *var_a2;

    if (D_800872A0 == NULL) {
        return -1;
    }
    temp_lo = (s32) ((char *)(arg0) - (char *)(&gObjects)) / 812;
    if (temp_lo == 0) {
        return 0;
    }
    var_a0 = 1;
    var_a2 = (char *)(D_800872A0) + 0x84;
    temp_a1 = D_800D2398 + D_800D2399;
    if (temp_a1 >= 2) {
loop_5:
        if (temp_lo == (*(s32 *)((char *)(var_a2) + 0x31))) {
            return var_a0;
        }
        var_a0 += 1;
        var_a2 = (char *)(var_a2) + 0x84;
        if (var_a0 >= temp_a1) {
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_5;
    }
    return -1;
}

void func_150885EC(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;
    s32 sp18;
    s32 temp_lo;
    void *temp_v0;

    if (D_800872A0 != NULL) {
        temp_lo = arg1 * 0x84;
        temp_v0 = (char *)(D_800872A0) + temp_lo;
        sp24 = (s32) (*(s32 *)((char *)(temp_v0) + 0x31));
        sp18 = temp_lo;
        sp20 = (s32) (*(s32 *)((char *)(temp_v0) + 0x30));
        bcopy((arg0 * 0x84) + (char *)(D_800872A0), temp_lo + (char *)(D_800872A0), 0x84);
        (*(s8 *)((char *)(((char *)(D_800872A0) + temp_lo)) + 0x31)) = (s8) sp24;
        (*(s8 *)((char *)(((char *)(D_800872A0) + temp_lo)) + 0x30)) = (s8) sp20;
    }
}

s32 func_1508868C(s32 arg0) {
    s32 sp24;
    s32 sp18;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    if (D_800872A0 == NULL) {
        goto block_7;
    }
    var_v0 = 1;
    var_v1 = 0;
    if (D_800D2399 > 0) {
        temp_a1 = D_800D2394;
loop_4:
        if (!(temp_a1 & var_v0)) {
            temp_v1 = var_v1 + D_800D2398;
            temp_a2 = temp_v1 * 0x84;
            D_800D2394 = temp_a1 | var_v0;
            sp18 = temp_a2;
            sp24 = temp_v1;
            func_15088824(temp_a2 + (char *)(D_800872A0), temp_a1, temp_a2, D_800872A0);
            (*(s32 *)((char *)(((char *)(D_800872A0) + temp_a2)) + 0x30)) = 1;
            (*(s8 *)((char *)(((char *)(D_800872A0) + temp_a2)) + 0x31)) = (s8) ((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812);
            return sp24;
        }
        var_v1 += 1;
        var_v0 *= 2;
        if (var_v1 >= D_800D2399) {
            goto block_7;
        }
        goto loop_4;
    }
block_7:
    return -1;
}

void func_15088780(void) {
    s32 temp_v0;

    if (D_800872A0 != NULL) {
        temp_v0 = func_1508855C(0);
        (*(s32 *)((char *)(((char *)(D_800872A0) + (temp_v0 * 0x84))) + 0x31)) = 0;
        D_800D2394 &= ~(1 << (temp_v0 - D_800D2398));
    }
}

s32 func_150887F8(void) {
    if (D_800872A0 == NULL) {
        return 0;
    }
    return (*(s32 *)((char *)(D_800872A0) + 0x46)) == 0xFF;
}

void func_15088824(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x2B)) = 0;
    (*(s32 *)((char *)(arg0) + 0x2C)) = 0;
    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
    (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
    (*(s32 *)((char *)(arg0) + 0x28)) = 0;
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0;
    (*(s32 *)((char *)(arg0) + 0x18)) = 0;
    (*(s32 *)((char *)(arg0) + 0x20)) = -1;
    (*(s32 *)((char *)(arg0) + 0x2F)) = 0;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0.5f;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0.5f;
    (*(s32 *)((char *)(arg0) + 0x24)) = 0;
    (*(s32 *)((char *)(arg0) + 0x26)) = 0;
    (*(s32 *)((char *)(arg0) + 0x27)) = 0;
    (*(s32 *)((char *)(arg0) + 0x31)) = 0;
    (*(s32 *)((char *)(arg0) + 0xC)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x14)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x33)) = 2;
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(s32 *)((char *)(arg0) + 0x2A)) = 0x7F;
    (*(s32 *)((char *)(arg0) + 0x49)) = 0;
    (*(s32 *)((char *)(arg0) + 0x10)) = 1.0f;
}

u8 func_150888A8( s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_a0;
    s32 var_a3;
    s32 var_t0;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t3_2;
    u8 var_t4;
    u8 var_v1;
    void *temp_a2;
    void *temp_t1;
    void *temp_t2_2;
    void *temp_t3;
    void *var_t1;

    temp_s0 = arg0 & 0xFF;
    var_v1 = 0xFF;
    var_a3 = 0xFF;
    if (arg2 != 0) {
        var_a0 = 1;
    } else {
        var_a0 = 2;
    }
    temp_a2 = (arg1 * 0x10) + D_800D2350;
    temp_t0 = (*(s32 *)((char *)(temp_a2) + 0x9));
    if ((temp_t0 != 0xFF) && (temp_s0 != temp_t0)) {
        temp_t1 = (temp_t0 * 0x10) + D_800D2350;
        if ((*(s32 *)((char *)(temp_t1) + 0xE)) == 0) {
            if (var_a0 != (*(s32 *)((char *)(temp_t1) + 0xF))) {
                var_v1 = temp_t0 & 0xFF;
            } else {
                var_a3 = temp_t0 & 0xFF;
            }
        }
    }
    var_t0 = 1;
    var_t1 = (char *)(temp_a2) + 1;
    var_t4 = var_v1;
    do {
        temp_a2_2 = (*(s32 *)((char *)(var_t1) + 0x9));
        var_t0 += 2;
        if ((temp_a2_2 != 0xFF) && (temp_s0 != temp_a2_2)) {
            temp_t3 = (temp_a2_2 * 0x10) + D_800D2350;
            if ((*(s32 *)((char *)(temp_t3) + 0xE)) == 0) {
                temp_t2 = (*(s32 *)((char *)(temp_t3) + 0xF));
                if (var_a0 != temp_t2) {
                    if ((var_t4 == 0xFF) || (temp_t2 != 0)) {
                        var_v1 = temp_a2_2 & 0xFF;
                        var_t4 = var_v1;
                    }
                } else {
                    var_a3 = temp_a2_2 & 0xFF;
                }
            }
        }
        temp_t3_2 = (*(s32 *)((char *)(var_t1) + 0xA));
        if ((temp_t3_2 != 0xFF) && (temp_s0 != temp_t3_2)) {
            temp_t2_2 = (temp_t3_2 * 0x10) + D_800D2350;
            if ((*(s32 *)((char *)(temp_t2_2) + 0xE)) == 0) {
                temp_a2_3 = (*(s32 *)((char *)(temp_t2_2) + 0xF));
                if (var_a0 != temp_a2_3) {
                    if ((var_t4 == 0xFF) || (temp_a2_3 != 0)) {
                        var_v1 = temp_t3_2 & 0xFF;
                        var_t4 = var_v1;
                    }
                } else {
                    var_a3 = temp_t3_2 & 0xFF;
                }
            }
        }
        var_t1 = (char *)(var_t1) + 2;
    } while (var_t0 != 5);
    if (var_t4 == 0xFF) {
        var_v1 = var_a3 & 0xFF;
    }
    return var_v1;
}

s8 func_15088A08(void *arg0, f32 arg1) {
    f32 temp_f0;
    s16 *temp_v0_2;
    s16 temp_a0_2;
    s16 var_v1;
    s32 temp_a0;
    s32 var_v0_3;
    s8 temp_a2;
    s8 temp_v0;
    s8 temp_v0_3;
    s8 var_t0;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t7;
    u8 temp_t8;
    u8 var_v0;
    u8 var_v0_2;

    var_t0 = 0;
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + arg1);
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x8));
    if (temp_f0 < 0.0f) {
        temp_t7 = (*(s32 *)((char *)(arg0) + 0x2C));
        temp_t8 = (*(s32 *)((char *)(arg0) + 0x2B));
        (*(u8 *)((char *)(arg0) + 0x2E)) = (u8) (*(u8 *)((char *)(arg0) + 0x2D));
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f0 + 1.0f);
        (*(s32 *)((char *)(arg0) + 0x2D)) = temp_t7;
        (*(s32 *)((char *)(arg0) + 0x2C)) = temp_t8;
        var_t0 = -1;
        (*(u8 *)((char *)(arg0) + 0x2B)) = func_150888A8((u8) arg1, temp_t7 & 0xFF, temp_t8 & 0xFF);
    } else if (temp_f0 >= 1.0f) {
        temp_t1 = (*(s32 *)((char *)(arg0) + 0x2D));
        temp_t2 = (*(s32 *)((char *)(arg0) + 0x2E));
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f0 - 1.0f);
        (*(u8 *)((char *)(arg0) + 0x2B)) = (u8) (*(u8 *)((char *)(arg0) + 0x2C));
        (*(s32 *)((char *)(arg0) + 0x2C)) = temp_t1;
        (*(s32 *)((char *)(arg0) + 0x2D)) = temp_t2;
        var_t0 = 1;
        (*(u8 *)((char *)(arg0) + 0x2E)) = func_150888A8((u8) arg1, temp_t1 & 0xFF, temp_t2 & 0xFF);
        if (D_800D23A8 == 0) {
            var_v0 = (*(s32 *)((char *)((D_800D2350 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 0x10))) + 0xF));
            if (var_v0 == 5) {
                D_800D2390 = 1;
                var_v0 = (*(s32 *)((char *)((D_800D2350 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 0x10))) + 0xF));
            }
            if (var_v0 == 6) {
                D_800D2390 = 2;
            }
        } else {
            var_v0_2 = (*(s32 *)((char *)((D_800D2350 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 0x10))) + 0xF));
            if (var_v0_2 == 7) {
                D_800D2390 = 1;
                var_v0_2 = (*(s32 *)((char *)((D_800D2350 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 0x10))) + 0xF));
            }
            if (var_v0_2 == 8) {
                D_800D2390 = 2;
                var_v0_2 = (*(s32 *)((char *)((D_800D2350 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 0x10))) + 0xF));
            }
            if (var_v0_2 == 9) {
                D_800D2390 = 3;
            }
        }
    }
    if (var_t0 != 0) {
        (*(s16 *)((char *)(arg0) + 0x24)) = (s16) ((*(s16 *)((char *)(arg0) + 0x24)) + var_t0);
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x31));
        (*(s8 *)((char *)(arg0) + 0x27)) = (s8) ((s16) (*(s8 *)((char *)(arg0) + 0x24)) / (s8) (*(s8 *)((char *)(arg0) + 0x26)));
        if ((D_800BE616 != 0) && (D_800E0BE7 < (*(s32 *)((char *)(arg0) + 0x27)))) {
            (*(s8 *)((char *)(arg0) + 0x27)) = (s8) (D_800E0BE7 + 1);
        }
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x27));
        if ((*(s32 *)((char *)(arg0) + 0x28)) < temp_v0) {
            (*(s32 *)((char *)(arg0) + 0x28)) = temp_v0;
            if ((temp_a2 < D_8008FD90) && ((*(s32 *)((char *)(arg0) + 0x30)) == 0)) {
                temp_a0 = (*(s32 *)((char *)(arg0) + 0x1C));
                if (temp_a0 > 0) {
                    if (D_800E0BE7 >= (*(s32 *)((char *)(arg0) + 0x28))) {
                        temp_v0_2 = (temp_a2 * 2) + &D_800E0C10;
                        var_v1 = temp_a0 - (*(s32 *)((char *)(arg0) + 0x18));
                        if (var_v1 >= 0x7D01) {
                            var_v1 = 0x7D00;
                        }
                        temp_a0_2 = *temp_v0_2;
                        if ((temp_a0_2 <= 0) || (var_v1 < temp_a0_2)) {
                            *temp_v0_2 = var_v1;
                        }
                        (*(s32 *)((char *)(arg0) + 0x20)) = (s32) var_v1;
                    }
                    if (D_800E0BE7 == (*(s32 *)((char *)(arg0) + 0x28))) {
                        var_v0_3 = (*(s32 *)((char *)(arg0) + 0x1C));
                        if (var_v0_3 >= 0x57E41) {
                            var_v0_3 = 0x57E40;
                        }
                        *(&D_800E0C18 + (temp_a2 * 4)) = var_v0_3;
                    }
                }
            }
            temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x28));
            if (D_800E0BE7 == temp_v0_3) {
                (*(s32 *)((char *)(arg0) + 0x18)) = (s32) -(*(s32 *)((char *)(arg0) + 0x1C));
            } else if (temp_v0_3 < D_800E0BE7) {
                (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)(arg0) + 0x1C));
            }
        }
    }
    return var_t0;
}

void func_15088D58(void *arg0) {
    f32 sp9C;
    f32 sp98;
    f32 sp88;
    f32 sp78;
    f32 sp68;
    f32 *temp_s4;
    f32 temp_f0;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 var_v0;
    u8 temp_a0;
    u8 var_s0;
    void *temp_a1;
    void *var_v1;

    temp_v0 = func_1508855C(arg0);
    if (temp_v0 >= 0) {
        temp_s4 = (temp_v0 * 0x84) + (char *)(D_800872A0);
        (*(s32 *)((char *)(temp_s4) + 0x0)) = 0.5f;
        (*(s32 *)((char *)(temp_s4) + 0x4)) = 0.5f;
        (*(s32 *)((char *)(temp_s4) + 0x8)) = 0.5f;
        do {
            var_s0 = 0;
            var_v0 = 0;
            var_v1 = ((*(s32 *)((char *)(temp_s4) + 0x2C)) * 0x10) + D_800D2350;
loop_3:
            temp_a0 = (*(s32 *)((char *)(var_v1) + 0x9));
            var_v0 += 1;
            if (temp_a0 != 0xFF) {
                temp_a1 = (temp_a0 * 0x10) + D_800D2350;
                if ((*(s32 *)((char *)(temp_a1) + 0xE)) == 4) {
                    var_s0 = (*(s32 *)((char *)(temp_a1) + 0xF));
                }
            }
            var_v1 = (char *)(var_v1) + 1;
            if (var_v0 != 5) {
                goto loop_3;
            }
            if (var_s0 != 0) {
                func_15088A08((void *)(temp_s4), 1.0f);
            }
        } while (var_s0 != 0);
        (*(s32 *)((char *)(temp_s4) + 0x8)) = 0.0f;
        func_15088F30(temp_s4, &sp88, &sp78, &sp68);
        (*(s32 *)((char *)(arg0) + 0x14)) = func_150498A4(&sp88, 0, (*(s32 *)((char *)(temp_s4) + 0x8)), &sp9C);
        (*(s32 *)((char *)(arg0) + 0x18)) = func_150497E0(&sp78, 0, (*(s32 *)((char *)(temp_s4) + 0x8)));
        (*(s32 *)((char *)(arg0) + 0x1C)) = func_150498A4(&sp68, 0, (*(s32 *)((char *)(temp_s4) + 0x8)), &sp98);
        temp_f0 = func_15144BC8((f32) (func_1505A630((*(f32 *)((char *)(temp_s4) + 0x10)), (*(f32 *)((char *)(temp_s4) + 0xC)), NULL) + 0x8000) * 0.005493164f);
        (*(s32 *)((char *)(arg0) + 0x40)) = temp_f0;
        temp_v0_2 = (s32) (temp_f0 * D_8009DA04) - 0x4000;
        (*(s32 *)((char *)(arg0) + 0x7A)) = temp_v0_2;
        (*(s32 *)((char *)(arg0) + 0x78)) = temp_v0_2;
        (*(s32 *)((char *)(arg0) + 0x76)) = temp_v0_2;
    }
}

void func_15088F30(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 *var_t2;
    f32 *var_t3;
    f32 *var_t4;
    f32 *var_v1;
    s16 temp_a1_3;
    s32 var_t1;
    s32 var_v0;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a2;
    void *var_t0;

    var_v0 = 0;
    var_v1 = arg0;
    var_t2 = arg1;
    var_t3 = arg2;
    var_t4 = arg3;
    do {
        temp_a1 = (*(s32 *)((char *)(var_v1) + 0x2B));
        var_v1 += 1;
        if (temp_a1 != 0xFF) {
            var_t1 = 0;
            temp_a2 = (temp_a1 * 0x10) + D_800D2350;
            var_t0 = temp_a2;
            do {
                temp_a1_2 = (*(s32 *)((char *)(((char *)(temp_a2) + var_t1)) + 0x9));
                if ((temp_a1_2 != 0xFF) && ((*(s32 *)((char *)((D_800D2350 + (temp_a1_2 * 0x10))) + 0xE)) == 4)) {
                    var_t0 = (temp_a1_2 * 0x10) + D_800D2350;
                    var_t1 = 5;
                }
                var_t1 += 1;
            } while (var_t1 < 5);
            temp_a1_3 = (*(s32 *)((char *)(temp_a2) + 0x0));
            *var_t2 = (f32) temp_a1_3 + ((f32) ((*(f32 *)((char *)(var_t0) + 0x0)) - temp_a1_3) * *arg0);
            *var_t3 = (f32) (*(f32 *)((char *)(temp_a2) + 0x2));
            *var_t4 = (f32) (*(f32 *)((char *)(temp_a2) + 0x4)) + ((f32) ((*(f32 *)((char *)(var_t0) + 0x4)) - (*(f32 *)((char *)(temp_a2) + 0x4))) * *arg0);
        } else {
            *var_t2 = (f32) (var_v0 << 6);
            *var_t3 = 0.0f;
            *var_t4 = 0.0f;
        }
        var_v0 += 1;
        var_t2 += 4;
        var_t3 += 4;
        var_t4 += 4;
    } while (var_v0 != 4);
}

u8 func_1508907C( s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 var_a0;
    u8 temp_a0;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 var_v1;
    void *temp_t1;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_2;
    void *var_t1;

    temp_t6 = arg0 & 0xFF;
    temp_t7 = arg1 & 0xFF;
    temp_t8 = arg2 & 0xFF;
    temp_t9 = arg3 & 0xFF;
    var_v1 = 0xFF;
    if (temp_t6 >= D_80087290) {
        return 0xFFU;
    }
    temp_v0 = (temp_t6 * 0x10) + D_800D2350;
    temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x9));
    if ((temp_a0 != 0xFF) && (temp_t8 != temp_a0) && ((temp_t1 = (temp_a0 * 0x10) + D_800D2350, (temp_t7 == (*(s32 *)((char *)(temp_t1) + 0xE)))) || (temp_t7 == 0xFF))) {
        var_v1 = temp_a0 & 0xFF;
        if (temp_t9 == (*(s32 *)((char *)(temp_t1) + 0xF))) {
            return temp_a0;
        }
    }
    var_a0 = 1;
    var_t1 = (char *)(temp_v0) + 1;
loop_9:
    temp_t2_2 = (*(s32 *)((char *)(var_t1) + 0x9));
    if ((temp_t2_2 != 0xFF) && (temp_t8 != temp_t2_2) && ((temp_v0_2 = (temp_t2_2 * 0x10) + D_800D2350, (temp_t7 == (*(s32 *)((char *)(temp_v0_2) + 0xE)))) || (temp_t7 == 0xFF))) {
        var_v1 = temp_t2_2 & 0xFF;
        if (temp_t9 == (*(s32 *)((char *)(temp_v0_2) + 0xF))) {
            return temp_t2_2;
        }
    }
    temp_t2 = (*(s32 *)((char *)(var_t1) + 0xA));
    var_a0 += 2;
    if ((temp_t2 != 0xFF) && (temp_t8 != temp_t2) && ((temp_t3 = (temp_t2 * 0x10) + D_800D2350, (temp_t7 == (*(s32 *)((char *)(temp_t3) + 0xE)))) || (temp_t7 == 0xFF))) {
        var_v1 = temp_t2 & 0xFF;
        if (temp_t9 == (*(s32 *)((char *)(temp_t3) + 0xF))) {
            return temp_t2;
        }
    }
    var_t1 = (char *)(var_t1) + 2;
    if (var_a0 == 5) {
        return var_v1;
    }
    goto loop_9;
}

void func_150891E8(f32 arg0, void *arg1) {
    f32 sp5C;
    s32 sp50;
    void *sp48;
    u8 sp44;
    void *sp3C;
    s32 sp30;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14_2;
    f32 var_f14_3;
    f32 var_f2;
    s32 var_f14;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_s3;
    u8 var_s4;
    u8 var_t1;
    u8 var_v0;
    void *temp_a1;
    void *temp_a2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_s1;

    var_f12 = arg0;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x318));
    if (temp_v0 != NULL) {
        if (D_8008FDBC & 0x40) {
            sp44 = 1;
        } else {
            sp44 = 0;
        }
        sp3C = temp_v0;
        if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x30)) == 2) {
            var_v0 = 0;
            if (D_80087290 > 0) {
                do {
                    temp_s1 = (var_v0 * 0x10) + D_800D2350;
                    if (((*(s32 *)((char *)(temp_s1) + 0xE)) == 5) && ((*(s32 *)((char *)(temp_s1) + 0xF)) == 2)) {
                        (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4A)) = var_v0;
                        (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = var_v0;
                        temp_v1 = (*(s32 *)((char *)(temp_s1) + 0x9));
                        if ((temp_v1 != 0xFF) && (((D_800D23A8 == 0) && ((*(s32 *)((char *)(((temp_v1 * 0x10) + D_800D2350)) + 0xF)) == 3)) || ((D_800D23A8 != 0) && ((*(s32 *)((char *)(((temp_v1 * 0x10) + D_800D2350)) + 0xF)) != 3)))) {
                            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = temp_v1;
                        }
                        temp_a1 = (char *)(temp_s1) + 1;
                        temp_v1_2 = (*(s32 *)((char *)(temp_a1) + 0x9));
                        if ((temp_v1_2 != 0xFF) && (((D_800D23A8 == 0) && ((*(s32 *)((char *)(((temp_v1_2 * 0x10) + D_800D2350)) + 0xF)) == 3)) || ((D_800D23A8 != 0) && ((*(s32 *)((char *)(((temp_v1_2 * 0x10) + D_800D2350)) + 0xF)) != 3)))) {
                            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = temp_v1_2;
                        }
                        temp_a0 = (*(s32 *)((char *)(temp_a1) + 0xA));
                        if ((temp_a0 != 0xFF) && (((temp_v1_3 = (temp_a0 * 0x10) + D_800D2350, (D_800D23A8 == 0)) && ((*(s32 *)((char *)(temp_v1_3) + 0xF)) == 3)) || ((D_800D23A8 != 0) && ((*(s32 *)((char *)(temp_v1_3) + 0xF)) != 3)))) {
                            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = temp_a0;
                        }
                        temp_a0_2 = (*(s32 *)((char *)(temp_a1) + 0xB));
                        if ((temp_a0_2 != 0xFF) && (((temp_v1_4 = (temp_a0_2 * 0x10) + D_800D2350, (D_800D23A8 == 0)) && ((*(s32 *)((char *)(temp_v1_4) + 0xF)) == 3)) || ((D_800D23A8 != 0) && ((*(s32 *)((char *)(temp_v1_4) + 0xF)) != 3)))) {
                            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = temp_a0_2;
                        }
                        temp_a0_3 = (*(s32 *)((char *)(temp_a1) + 0xC));
                        if ((temp_a0_3 != 0xFF) && (((temp_v1_5 = (temp_a0_3 * 0x10) + D_800D2350, (D_800D23A8 == 0)) && ((*(s32 *)((char *)(temp_v1_5) + 0xF)) == 3)) || ((D_800D23A8 != 0) && ((*(s32 *)((char *)(temp_v1_5) + 0xF)) != 3)))) {
                            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = temp_a0_3;
                        }
                        var_v0 = (u8) D_80087290;
                    }
                    var_v0 += 1;
                } while ((s32) var_v0 < D_80087290);
            }
            var_s3 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B));
            var_f14 = D_8009DA08;
            var_s4 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4A));
            var_t1 = var_s3;
            do {
                sp30 = (s32) var_t1;
                sp50 = var_f14;
                temp_s1_2 = (var_s3 * 0x10) + D_800D2350;
                temp_v0_2 = func_1508907C((u8) var_f12, var_f14, var_s3 & 0xFF, 0xFF);
                var_s4 = var_s3 & 0xFF;
                var_s3 = temp_v0_2 & 0xFF;
                temp_f2 = (*(f32 *)((char *)(arg1) + 0x14)) - (f32) (*(f32 *)((char *)(temp_s1_2) + 0x0));
                var_f12 = (*(f32 *)((char *)(arg1) + 0x1C)) - (f32) (*(f32 *)((char *)(temp_s1_2) + 0x4));
                temp_f0 = (temp_f2 * temp_f2) + (var_f12 * var_f12);
                if (temp_f0 < (f32) var_f14) {
                    var_f14 = (s32) temp_f0;
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4A)) = var_s4;
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B)) = temp_v0_2;
                }
            } while (var_t1 != var_s3);
            func_1512D560(var_f12, (f32) var_f14, (*(f32 *)((char *)(arg1) + 0x318)), 5, NULL);
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x30)) = 3;
        }
        temp_t1 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4B));
        temp_f16 = (*(s32 *)((char *)(arg1) + 0x14));
        temp_v1_6 = (temp_t1 * 0x10) + D_800D2350;
        temp_f18 = (*(s32 *)((char *)(arg1) + 0x1C));
        temp_t0 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4A));
        var_s1 = (temp_t0 * 0x10) + D_800D2350;
        temp_f2_2 = temp_f16 - (f32) (*(f32 *)((char *)(temp_v1_6) + 0x0));
        temp_f12 = temp_f18 - (f32) (*(f32 *)((char *)(temp_v1_6) + 0x4));
        temp_f8 = (temp_f2_2 * temp_f2_2) + (temp_f12 * temp_f12);
        sp5C = temp_f8;
        var_f2 = temp_f16 - (f32) (*(f32 *)((char *)(var_s1) + 0x0));
        var_f12_2 = temp_f18 - (f32) (*(f32 *)((char *)(var_s1) + 0x4));
        var_f14_2 = (var_f2 * var_f2) + (var_f12_2 * var_f12_2);
        if (temp_f8 < var_f14_2) {
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4A)) = temp_t1;
            sp48 = temp_v1_6;
            var_s1 = sp48;
            (*(u8 *)((char *)(*(void **)&(arg0)) + 0x4B)) = func_1508907C((u8) var_f12_2, (s32) var_f14_2, temp_t1 & 0xFF, 0xFF);
            var_f14_2 = sp5C;
            var_f2 = (*(f32 *)((char *)(arg1) + 0x14)) - (f32) (*(f32 *)((char *)(var_s1) + 0x0));
            var_f12_2 = (*(f32 *)((char *)(arg1) + 0x1C)) - (f32) (*(f32 *)((char *)(var_s1) + 0x4));
        }
        temp_a2 = (void *)((s32)(arg0) + 0x4C);
        temp_f16_2 = (*(f32 *)((char *)(arg1) + 0x18)) - (f32) (*(f32 *)((char *)(var_s1) + 0x2));
        var_f14_3 = sqrtf((temp_f16_2 * temp_f16_2) + var_f14_2);
        temp_f2_3 = var_f2 / var_f14_3;
        temp_f16_3 = temp_f16_2 / var_f14_3;
        temp_f12_2 = var_f12_2 / var_f14_3;
        if (var_f14_3 > 1000.0f) {
            var_f14_3 = 1000.0f;
        }
        (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4C)) = 0;
        (*(f32 *)((char *)(temp_a2) + 0x20)) = (f32) (*(f32 *)((char *)(arg1) + 0x14));
        (*(f32 *)((char *)(temp_a2) + 0x24)) = (f32) (*(f32 *)((char *)(arg1) + 0x18));
        (*(f32 *)((char *)(temp_a2) + 0x28)) = (f32) (*(f32 *)((char *)(arg1) + 0x1C));
        (*(f32 *)((char *)(temp_a2) + 0x14)) = (f32) ((*(f32 *)((char *)(arg1) + 0x14)) - (temp_f2_3 * var_f14_3));
        (*(f32 *)((char *)(temp_a2) + 0x18)) = (f32) ((*(f32 *)((char *)(arg1) + 0x18)) - (temp_f16_3 * var_f14_3));
        (*(s32 *)((char *)(temp_a2) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_a2) + 0x30)) = 30.0f;
        (*(s32 *)((char *)(temp_a2) + 0x34)) = 30.0f;
        (*(s32 *)((char *)(temp_a2) + 0x2C)) = 0.0f;
        (*(f32 *)((char *)(temp_a2) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg1) + 0x1C)) - (temp_f12_2 * var_f14_3));
        func_1512D560(temp_f12_2, var_f14_3, (*(s32 *)((char *)(arg1) + 0x318)), 7, temp_a2);
        (*(s32 *)((char *)(sp3C) + 0x19C)) = 30.0f;
        (*(s32 *)((char *)(sp3C) + 0x1A4)) = 30.0f;
        (*(s32 *)((char *)(sp3C) + 0x1A0)) = 30.0f;
        (*(s32 *)((char *)(sp3C) + 0x1A8)) = 30.0f;
    }
}

void func_150896EC(void *arg0, void *arg1, s32 arg2) {
    f32 spCC;
    f32 spBC;
    f32 spAC;
    f32 sp9C;
    f32 sp8C;
    f32 sp7C;
    f32 *var_s0;
    f32 *var_s1;
    f32 *var_s2;
    f32 *var_s3;
    f32 *var_s4;
    f32 *var_s5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f64 temp_f22;
    s32 var_fp;
    s8 var_v0;
    u8 temp_a0;
    u8 temp_t1;
    u8 temp_t9;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_a2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;
    void *var_s6;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x318));
    if (temp_v0 != NULL) {
        if (arg2 != 0) {
            temp_a2 = (char *)(arg0) + 0x4C;
            (*(s32 *)((char *)(temp_a2) + 0x10)) = 0x78;
            (*(f32 *)((char *)(temp_a2) + 0xC)) = (f32) D_8009DA0C;
            func_1512D560((f32) (*(f32 *)((char *)(arg1) + 0x318)), 1.4e-44f, temp_a2);
            func_1512D560((f32) (*(f32 *)((char *)(arg1) + 0x318)), 8e-45f, (void *)(s32) (*(f32 *)((char *)(temp_v0) + 0x23D)));
            (*(s32 *)((char *)(arg0) + 0x49)) = 0;
            return;
        }
        if ((*(s32 *)((char *)(arg0) + 0x49)) == 0) {
            var_v0 = 0;
            if (D_80087290 > 0) {
                do {
                    temp_v1 = (var_v0 * 0x10) + D_800D2350;
                    if (((*(s32 *)((char *)(temp_v1) + 0xE)) == 6) && (((D_800D23A8 + 1) & 0xFF) == (*(s32 *)((char *)(temp_v1) + 0xF)))) {
                        (*(s32 *)((char *)(arg0) + 0x44)) = var_v0;
                        var_v0 = (s8) D_80087290;
                    }
                    var_v0 += 1;
                } while (var_v0 < D_80087290);
            }
            temp_v0_2 = func_1508907C((u8) (*(u8 *)((char *)(arg0) + 0x44)), 6, 0xFFU, 0);
            (*(s32 *)((char *)(arg0) + 0x45)) = temp_v0_2;
            temp_v0_3 = func_1508907C(temp_v0_2 & 0xFF, 6, (u8) (*(u8 *)((char *)(arg0) + 0x44)), 0);
            (*(s32 *)((char *)(arg0) + 0x46)) = temp_v0_3;
            (*(s32 *)((char *)(arg0) + 0x47)) = func_1508907C(temp_v0_3 & 0xFF, 6, (*(s32 *)((char *)(arg0) + 0x45)), 0);
            (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(arg1) + 0x14));
            (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(arg1) + 0x18));
            (*(s32 *)((char *)(arg0) + 0x34)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(arg1) + 0x1C));
            func_1512D560((f32) (*(f32 *)((char *)(arg1) + 0x318)), 7e-45f, (void *)(s32) (*(f32 *)((char *)(temp_v0) + 0x23D)));
            (*(s32 *)((char *)(arg0) + 0x49)) = 1;
        }
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + (D_8009DA10 * (f32) D_800BE9E4));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x34));
        if (temp_f0 >= 1.0f) {
            temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x46));
            if (temp_v0_4 == 0xFF) {
                (*(s32 *)((char *)(arg0) + 0x34)) = 1.0f;
            } else {
                temp_t1 = (*(s32 *)((char *)(arg0) + 0x47));
                temp_t9 = (*(s32 *)((char *)(arg0) + 0x45));
                (*(s32 *)((char *)(arg0) + 0x45)) = temp_v0_4;
                (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (temp_f0 - 1.0f);
                (*(s32 *)((char *)(arg0) + 0x46)) = temp_t1;
                (*(s8 *)((char *)(arg0) + 0x44)) = (s8) temp_t9;
                (*(s32 *)((char *)(arg0) + 0x47)) = func_1508907C(temp_t1 & 0xFF, 6, temp_v0_4 & 0xFF, 0);
            }
        }
        var_fp = 0;
        temp_f22 = D_8009DA18;
        var_s6 = arg0;
        var_s1 = &spCC;
        var_s2 = &spBC;
        var_s3 = &spAC;
        var_s4 = &sp9C;
        var_s5 = &sp8C;
        var_s0 = &sp7C;
        do {
            temp_a0 = (*(s32 *)((char *)(var_s6) + 0x44));
            if (temp_a0 != 0xFF) {
                var_fp = 1;
                func_15086CBC((s8) temp_a0, var_s1, var_s2, var_s3);
                func_15086CBC(func_1508907C((*(s32 *)((char *)(var_s6) + 0x44)), 4, 0xFFU, 0), var_s4, var_s5, var_s0);
            } else if (var_fp == 1) {
                var_fp = 0;
                temp_f20 = (f32) ((f64) (*(f32 *)((char *)(arg1) + 0x40)) * temp_f22);
                (*(s32 *)((char *)(var_s1) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x38)) - (sinf(temp_f20) * 500.0f);
                (*(s32 *)((char *)(var_s2) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x3C)) + 180.0f;
                (*(s32 *)((char *)(var_s3) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x40)) - (cosf(temp_f20) * 500.0f);
                (*(s32 *)((char *)(var_s4) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x38));
                (*(s32 *)((char *)(var_s5) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x3C)) + 120.0f;
                (*(s32 *)((char *)(var_s0) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x40));
            } else {
                temp_f0_2 = (*(s32 *)((char *)(var_s1) - 0x4));
                temp_f2 = (*(s32 *)((char *)(var_s2) - 0x4));
                temp_f12 = (*(s32 *)((char *)(var_s3) - 0x4));
                temp_f14 = (*(s32 *)((char *)(var_s4) - 0x4));
                temp_f16 = (*(s32 *)((char *)(var_s5) - 0x4));
                temp_f0_3 = (*(s32 *)((char *)(var_s0) - 0x4));
                (*(s32 *)((char *)(var_s1) + 0x0)) = (temp_f0_2 - (*(s32 *)((char *)(var_s1) - 0x8))) + temp_f0_2;
                (*(s32 *)((char *)(var_s2) + 0x0)) = (temp_f2 - (*(s32 *)((char *)(var_s2) - 0x8))) + temp_f2;
                (*(s32 *)((char *)(var_s3) + 0x0)) = (temp_f12 - (*(s32 *)((char *)(var_s3) - 0x8))) + temp_f12;
                (*(s32 *)((char *)(var_s4) + 0x0)) = (temp_f14 - (*(s32 *)((char *)(var_s4) - 0x8))) + temp_f14;
                (*(s32 *)((char *)(var_s5) + 0x0)) = (temp_f16 - (*(s32 *)((char *)(var_s5) - 0x8))) + temp_f16;
                (*(s32 *)((char *)(var_s0) + 0x0)) = (temp_f0_3 - (*(s32 *)((char *)(var_s0) - 0x8))) + temp_f0_3;
            }
            var_s0 += 4;
            var_s6 = (char *)(var_s6) + 1;
            var_s1 += 4;
            var_s2 += 4;
            var_s3 += 4;
            var_s4 += 4;
            var_s5 += 4;
        } while ((char *)(var_s0) != (char *)(&sp8C));
        temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x34));
        temp_s0 = (char *)(arg0) + 0x4C;
        (*(s32 *)((char *)(temp_s0) + 0x14)) = func_150497E0(&spCC, 0, temp_f20_2);
        (*(s32 *)((char *)(temp_s0) + 0x18)) = func_150497E0(&spBC, 0, temp_f20_2);
        (*(s32 *)((char *)(temp_s0) + 0x1C)) = func_150497E0(&spAC, 0, temp_f20_2);
        (*(s32 *)((char *)(temp_s0) + 0x20)) = func_150497E0(&sp9C, 0, temp_f20_2);
        (*(s32 *)((char *)(temp_s0) + 0x24)) = func_150497E0(&sp8C, 0, temp_f20_2);
        (*(s32 *)((char *)(temp_s0) + 0x28)) = func_150497E0(&sp7C, 0, temp_f20_2);
        (*(s32 *)((char *)(arg0) + 0x4C)) = 0;
        (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_s0) + 0x30)) = 30.0f;
        (*(s32 *)((char *)(temp_s0) + 0x34)) = 30.0f;
        (*(s32 *)((char *)(temp_s0) + 0x2C)) = 0.0f;
        func_1512D560((f32) (*(f32 *)((char *)(arg1) + 0x318)), 1e-44f, temp_s0);
    }
}

void func_15089BB0(void) {
    D_800D23B0 = NULL;
}

/*
Decompilation failure in function func_15089BC0:

Found jr instruction at B3020.s line 4647, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s32 func_15089F9C(s32 arg0) {
    f32 temp_f12;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f14;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    s32 *var_s1;
    s32 temp_fp;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s6;
    void *temp_v0_2;
    void *temp_v1;

    temp_s5 = arg0 * 4;
    var_s6 = -1;
    temp_fp = (*(s32 *)((char *)(D_800D23B0) + 0x14));
    temp_s4 = (*(s32 *)((char *)(D_800D23B0) + 0x10));
    if ((*(s32 *)((char *)(((char *)(D_800D23B0) + temp_s5)) + 0x15C)) == 0) {
        var_f20 = D_8009DA44;
        var_f22 = D_8009DA48;
    } else {
        var_f20 = D_8009DA4C;
        var_f22 = 8000.0f;
    }
    var_f24 = D_8009DA50;
    var_s0 = 0;
    if (temp_s4 > 0) {
        temp_f26 = D_8009DA54;
        var_s1 = (char *)(D_800D23B0) + 0xE64;
        do {
            temp_v0 = 1 << var_s0;
            if ((*var_s1 != 3) && (temp_fp & temp_v0) && ((*(s32 *)((char *)(((char *)(D_800D23B0) + temp_s5)) + 0x16C0)) & (temp_v0 << 0x10))) {
                temp_v1 = &gObjects + (var_s0 * 0x32C);
                if (temp_v1 != NULL) {
                    temp_v0_2 = &gObjects + (arg0 * 0x32C);
                    temp_f2 = (*(s32 *)((char *)(temp_v0_2) + 0x14)) - (*(s32 *)((char *)(temp_v1) + 0x14));
                    temp_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x1C)) - (*(s32 *)((char *)(temp_v1) + 0x1C));
                    var_f14 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
                } else {
                    var_f14 = 32000.0f;
                }
                if (var_f22 < var_f14) {
                    var_f14 = var_f22;
                }
                if (var_f14 < var_f20) {
                    var_f14 = var_f20;
                }
                temp_f2_2 = sinf(((var_f14 - var_f20) * (D_8009DA58 / (var_f22 - var_f20))) + temp_f26) + 1.0f;
                if (var_f24 < temp_f2_2) {
                    var_f24 = temp_f2_2;
                    var_s6 = var_s0;
                }
            }
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 != temp_s4);
    }
    return var_s6;
}

s32 func_1508A1BC(void) {
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    void *sp78;
    s32 sp70;
    void *sp64;
    void *sp60;
    void *sp5C;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a3;
    s16 var_s0;
    s32 *temp_v0_5;
    s32 *var_s3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t6_4;
    s32 temp_t6_5;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0_2;
    s32 var_s7;
    s32 var_t0;
    s32 var_t2;
    s32 var_t4;
    s32 var_t5;
    s32 var_t5_2;
    s32 var_t5_3;
    s32 var_t5_4;
    s8 temp_a2;
    s8 var_v1;
    void *temp_s6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_t1;
    void *var_t3;

    var_t5 = 0;
    sp78 = (char *)(D_800D23B0) + 0xE64;
    sp64 = (char *)(D_800D23B0) + 0x15C;
    sp70 = (*(s32 *)((char *)(D_800D23B0) + 0x10));
    temp_s6 = (char *)(D_800D23B0) + 0x9C;
    var_t3 = (char *)(D_800D23B0) + 0x5DC;
    var_t1 = (char *)(D_800D23B0) + 0x9DC;
    (*(s8 *)((char *)(D_800D23B0) + 0x1704)) = (s8) ((*(s8 *)((char *)(D_800D23B0) + 0x1704)) + 1);
    var_t4 = 0;
    var_v1 = (*(s32 *)((char *)(D_800D23B0) + 0x1704));
    var_s7 = 0x7D00;
    if ((*(s32 *)((char *)(D_800D23B0) + 0x10)) == var_v1) {
        (*(s32 *)((char *)(D_800D23B0) + 0x1704)) = 0;
        var_v1 = (*(s32 *)((char *)(D_800D23B0) + 0x1704));
    }
    var_t2 = var_v1 * 0x10;
    temp_s1 = var_t2;
    if (!((1 << var_v1) & (*(s32 *)((char *)(D_800D23B0) + 0x14)))) {
        do {
            temp_v0 = (char *)(var_t3) + (var_t2 * 4) + var_t5;
            var_t5 += 0x10;
            (*(s32 *)((char *)(temp_v0) + 0x0)) = -1;
            (*(s32 *)((char *)(temp_v0) + 0x4)) = -1;
            (*(s32 *)((char *)(temp_v0) + 0x8)) = -1;
            (*(s32 *)((char *)(temp_v0) + 0xC)) = -1;
        } while (var_t5 != 0x40);
    } else {
        temp_t6 = var_v1 * 4;
        sp40 = temp_t6;
        var_s0 = 0;
        sp8C = *((char *)(sp78) + temp_t6);
        sp88 = (s32) var_v1;
        sp84 = (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_t6)) + 0x16C0));
        if (sp70 > 0) {
            var_t5_2 = 0;
            var_s3 = (char *)(D_800D23B0) + 0x39C;
            do {
                if ((*var_s3 > 0) && (sp8C != *((char *)(sp78) + var_t5_2))) {
                    temp_a2 = D_8008FD90;
                    temp_v1 = &gObjects + (var_s0 * 0x32C);
                    temp_a3 = (*(s32 *)((char *)(D_800D23B0) + 0x16BC));
                    if (temp_v1 != NULL) {
                        temp_v0_2 = &gObjects + (sp88 * 0x32C);
                        temp_f2 = (*(s32 *)((char *)(temp_v0_2) + 0x14)) - (*(s32 *)((char *)(temp_v1) + 0x14));
                        temp_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x1C)) - (*(s32 *)((char *)(temp_v1) + 0x1C));
                        var_t0 = (s32) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
                    } else {
                        var_t0 = 0x7D00;
                    }
                    temp_s2 = var_t0;
                    if (*((char *)(temp_s6) + sp40) != *((char *)(temp_s6) + var_t5_2)) {
                        var_t0 += 0x1F4;
                    }
                    if ((0x10000 << var_s0) & sp84) {
                        if ((var_t0 >= 0xBB9) && ((*(s32 *)((char *)(temp_v1) + 0x65)) != 0)) {
                            goto block_24;
                        }
                    } else {
                        if (var_s0 >= temp_a2) {
                            var_t0 *= 2;
                        }
                        if ((temp_a3 != 0xB8) && ((temp_v0_3 = *((char *)(sp64) + var_t5_2), (temp_v0_3 == 2)) || (temp_v0_3 == 3))) {
block_24:
                            var_t0 = -1;
                        }
                    }
                    if (temp_a3 == 0xB7) {
                        if (var_t0 == -1) {
                            var_t0 = temp_s2;
                        }
                        if ((*(s32 *)((char *)(temp_v1) + 0x13C)) != 0) {
                            if (var_s0 >= temp_a2) {
                                var_t0 *= 2;
                            }
                            sp90 = var_t0;
                            sp5C = var_t1;
                            sp3C = var_t2;
                            sp60 = var_t3;
                            sp94 = var_t4;
                            sp44 = var_t5_2;
                            var_t0 = var_t0 / (s32) (func_150859AC(var_s0, 6) + 2);
                        }
                    }
                    if ((var_s0 < temp_a2) && (var_t0 != -1)) {
                        var_t0 = (s32) ((f32) var_t0 * (*(s32 *)((char *)(D_800D23B0) + 0x16B8)));
                    }
                    if (var_t0 >= 0) {
                        var_a2 = 0;
                        if ((var_t4 > 0) && (*((char *)(var_t1) + (var_t2 * 4)) < var_t0)) {
loop_38:
                            var_a2 += 1;
                            if (var_a2 < var_t4) {
                                if (*((char *)(var_t1) + (temp_s1 * 4) + (var_a2 * 4)) < var_t0) {
                                    goto loop_38;
                                }
                            }
                        }
                        var_a1 = var_t4;
                        if (var_a2 < var_t4) {
                            temp_v0_4 = -((var_t4 - var_a2) & 3);
                            if (temp_v0_4 != 0) {
                                do {
                                    temp_t6_2 = (var_t2 + var_a1) * 4;
                                    temp_v0_5 = (char *)(var_t3) + temp_t6_2;
                                    temp_t7 = (*(s32 *)((char *)(temp_v0_5) - 0x4));
                                    temp_v1_2 = (char *)(var_t1) + temp_t6_2;
                                    var_a1 -= 1;
                                    (*(s32 *)((char *)(temp_v0_5) + 0x0)) = temp_t7;
                                    (*(s32 *)((char *)(temp_v1_2) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v1_2) - 0x4));
                                } while ((temp_v0_4 + var_t4) != var_a1);
                                if (var_a2 != var_a1) {
                                    goto loop_44;
                                }
                            } else {
                                do {
loop_44:
                                    temp_t9 = (var_t2 + var_a1) * 4;
                                    temp_v0_6 = (char *)(var_t3) + temp_t9;
                                    temp_t6_3 = (*(s32 *)((char *)(temp_v0_6) - 0x4));
                                    temp_v1_3 = (char *)(var_t1) + temp_t9;
                                    var_a1 -= 4;
                                    (*(s32 *)((char *)(temp_v0_6) + 0x0)) = temp_t6_3;
                                    (*(s32 *)((char *)(temp_v1_3) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v1_3) - 0x4));
                                    (*(s32 *)((char *)(temp_v0_6) - 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_6) - 0x8));
                                    (*(s32 *)((char *)(temp_v1_3) - 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_3) - 0x8));
                                    (*(s32 *)((char *)(temp_v0_6) - 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_6) - 0xC));
                                    (*(s32 *)((char *)(temp_v1_3) - 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_3) - 0xC));
                                    (*(s32 *)((char *)(temp_v0_6) - 0xC)) = (s32) (*(s32 *)((char *)(temp_v0_6) - 0x10));
                                    (*(s32 *)((char *)(temp_v1_3) - 0xC)) = (s32) (*(s32 *)((char *)(temp_v1_3) - 0x10));
                                } while (var_a2 != var_a1);
                            }
                        }
                        temp_t6_4 = (var_t2 + var_a2) * 4;
                        *((char *)(var_t3) + temp_t6_4) = (s32) var_s0;
                        var_t4 += 1;
                        *((char *)(var_t1) + temp_t6_4) = var_t0;
                    }
                    if (temp_s2 < var_s7) {
                        var_s7 = temp_s2;
                    }
                }
                var_s0 += 1;
                var_t5_2 += 4;
                var_s3 += 4;
            } while (var_s0 != sp70);
        }
        var_s0_2 = var_t4;
        if (var_t4 < 0x10) {
            temp_t6_5 = (0x10 - var_t4) & 3;
            if (temp_t6_5 != 0) {
                var_t5_3 = var_t4 * 4;
                do {
                    var_s0_2 += 1;
                    *((char *)(var_t3) + (var_t2 * 4) + var_t5_3) = -1;
                    var_t5_3 += 4;
                } while ((temp_t6_5 + var_t4) != var_s0_2);
                if (var_s0_2 != 0x10) {
                    goto block_54;
                }
            } else {
block_54:
                var_t5_4 = var_s0_2 * 4;
                do {
                    temp_v0_7 = (char *)(var_t3) + (var_t2 * 4) + var_t5_4;
                    var_t5_4 += 0x10;
                    (*(s32 *)((char *)(temp_v0_7) + 0x0)) = -1;
                    (*(s32 *)((char *)(temp_v0_7) + 0x4)) = -1;
                    (*(s32 *)((char *)(temp_v0_7) + 0x8)) = -1;
                    (*(s32 *)((char *)(temp_v0_7) + 0xC)) = -1;
                } while (var_t5_4 != 0x40);
            }
        }
        if (((char *)(D_800D23B0) + 0x51C) != NULL) {
            (*(s32 *)((char *)(((char *)(D_800D23B0) + sp40)) + 0x51C)) = var_s7;
        }
    }
    return 0;
}

s32 func_1508A6FC(void) {
    s32 sp104;
    s32 sp100;
    s32 spF8;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    void *spDC;
    void *spD8;
    void *spD4;
    void *spCC;
    void *spC8;
    void *spC4;
    void *spC0;
    void *spBC;
    void *spB8;
    void *spB0;
    void *spAC;
    u8 spAB;
    s32 spA0;
    void * *sp8C;
    s32 *sp84;
    s32 *sp7C;
    s32 *sp74;
    s32 *sp6C;
    s32 *sp68;
    u8 *sp64;
    s32 *sp60;
    s32 *sp5C;
    s32 *sp54;
    void * *var_t0;
    s16 temp_v0_9;
    s16 var_s2;
    s32 *temp_s6;
    s32 *temp_s7;
    s32 *temp_v0_2;
    s32 *temp_v0_4;
    s32 *temp_v0_5;
    s32 *temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_s3_2;
    s32 temp_s5;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0;
    s32 var_v1;
    s8 temp_t0;
    s8 temp_v1_3;
    u16 temp_v0_13;
    u8 *temp_a2;
    u8 temp_v0_3;
    u8 temp_v0_6;
    void *temp_s3;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_14;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v1_2;

    temp_t1 = D_800D23B0;
    sp100 = 0;
    var_s2 = 0;
    spEC = (*(s32 *)((char *)(temp_t1) + 0x14));
    spE8 = (*(s32 *)((char *)(temp_t1) + 0x18));
    temp_a1 = (*(s32 *)((char *)(temp_t1) + 0x10));
    spDC = (char *)(temp_t1) + 0xE64;
    spD8 = (char *)(temp_t1) + 0x35C;
    spD4 = (char *)(temp_t1) + 0x31C;
    spCC = (char *)(temp_t1) + 0x19C;
    spC8 = (char *)(temp_t1) + 0x21C;
    spC4 = (char *)(temp_t1) + 0x29C;
    spC0 = (char *)(temp_t1) + 0x25C;
    spBC = (char *)(temp_t1) + 0x41C;
    spB8 = (char *)(temp_t1) + 0x3DC;
    spB0 = (char *)(temp_t1) + 0xDDC;
    spAC = (char *)(temp_t1) + 0x1574;
    if (temp_a1 > 0) {
        var_s0 = 0;
        sp84 = (char *)(temp_t1) + 0x1C;
        sp60 = (char *)(temp_t1) + 0x39C;
        sp5C = (char *)(temp_t1) + 0x9C;
        spE4 = temp_a1;
        do {
            temp_fp = 1 << var_s2;
            *sp84 = 0;
            var_s4 = 0;
            temp_v0 = spEC & temp_fp;
            if (temp_v0 == 0) {
                if (!(spE8 & temp_fp)) {
                    var_s4 = 1;
                }
                spE8 |= temp_fp;
            }
            if ((temp_v0 != 0) || (var_s4 != 0)) {
                temp_s3 = (var_s2 * 0x32C) + &gObjects;
                temp_s5 = *((char *)(spDC) + var_s0);
                sp7C = (char *)(spC4) + var_s0;
                temp_v1 = (char *)(spAC) + var_s0;
                sp74 = (char *)(spC0) + var_s0;
                temp_v0_2 = (char *)(spBC) + var_s0;
                temp_s7 = (char *)(spC8) + var_s0;
                sp68 = (char *)(spB8) + var_s0;
                sp54 = (char *)(spD4) + var_s0;
                temp_a2 = var_s2 + &D_800E0BB8;
                spAB = 1;
                sp6C = (char *)(spCC) + var_s0;
                temp_s6 = (char *)(spD8) + var_s0;
                if ((temp_s5 != 0) && ((*(s32 *)((char *)(D_800D23B0) + 0x16BC)) == 0xB9)) {
                    (*(s32 *)((char *)(temp_s3) + 0x1E4)) = 1;
                }
                spF8 = *sp7C;
                *temp_s7 += D_800BE9E4;
                *sp7C += D_800BE9E4;
                temp_t2 = *sp74 - D_800BE9E4;
                *sp74 = temp_t2;
                if (temp_t2 <= 0) {
                    *sp74 = 0;
                }
                temp_t7 = *temp_v0_2 - D_800BE9E4;
                *temp_v0_2 = temp_t7;
                if (temp_t7 <= 0) {
                    *temp_v0_2 = 0;
                }
                temp_t3 = *temp_v1 - D_800BE9E4;
                *temp_v1 = temp_t3;
                if (temp_t3 < 0) {
                    *temp_v1 = 0;
                }
                if ((*sp6C == 3) && ((*sp74 & 0x1F) >= 0x1D)) {
                    sp64 = temp_a2;
                    func_1508EC5C(var_s2, 0x8000, temp_a2, &D_800BE9E4);
                }
                *sp68 = (s32) *temp_a2;
                *temp_a2 &= 0x7F;
                if (D_800D23B0 != (void *)-0x4DC) {
                    (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x4DC)) = (s32) (*(s32 *)((char *)((*(s32 *)((char *)(temp_s3) + 0x31C))) + 0x19A));
                }
                *sp60 = func_150859AC(var_s2, 4);
                *sp5C = func_15085DA8((*(s32 *)((char *)(temp_s3) + 0x18)));
                if ((*sp60 == 0) || (var_s4 != 0) || ((*(s32 *)((char *)(temp_s3) + 0x2FD)) != 0)) {
                    if (*temp_s6 == 0) {
                        temp_v0_3 = (*(s32 *)((char *)(temp_s3) + 0x20F));
                        if (temp_v0_3 != 0xFF) {
                            (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x59C)) = (s32) temp_v0_3;
                        } else {
                            (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x59C)) = -1;
                        }
                        *temp_s6 = 1;
                        *sp74 = 0;
                        *sp6C = 0;
                        (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x5C)) = 1;
                        (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x11C)) = -1;
                        temp_v0_4 = (char *)(spB0) + (temp_s5 * 4);
                        *temp_v0_4 -= 1;
                        temp_t3_2 = *sp68 & 0x7F;
                        if (temp_t3_2 < spE4) {
                            temp_a0 = *((char *)(spDC) + (temp_t3_2 * 4));
                            if (temp_s5 != temp_a0) {
                                temp_v0_5 = (char *)(spB0) + (temp_a0 * 4);
                                *temp_v0_5 += 1;
                            }
                        }
                        if ((*(s32 *)((char *)(D_800D23B0) + 0x16BC)) != 0xB9) {
                            (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0xFF0)) = 0;
                            func_1508DAEC(var_s2, 1);
                        }
                        sp100 |= temp_fp;
                    }
                } else {
                    *temp_s6 = 0;
                }
                temp_a0_2 = *sp54;
                if ((temp_a0_2 != 0) && ((*(s32 *)((char *)(D_800D23B0) + 0x16BC)) != 0xB8)) {
                    var_s4_2 = 0;
                    if ((*sp6C != 1) && (*temp_s7 < 0x1E)) {
                        temp_v0_6 = (*(s32 *)((char *)(temp_s3) + 0x232));
                        (*(s8 *)((char *)(temp_s3) + 0x222)) = (s8) (temp_a0_2 - 2);
                        if ((temp_v0_6 != 4) && (temp_v0_6 != 5)) {
                            sp104 = (s32) temp_v0_6;
                            func_1508EBF8(var_s2, 4);
                        }
                        if (temp_v0_6 == 4) {
                            *temp_s7 = 0;
                        }
                        if (temp_v0_6 == 5) {
                            *temp_s7 = 0x1E;
                            (*(f32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x1868)) = (f32)(s32)*(&D_800872F8 + (D_800E0BD0 * 4));
                            (*(f32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x17A8)) = (f32) ((random_float() * 50.0f) + (*(f32 *)((char *)(temp_s3) + 0x14)));
                            (*(f32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x17E8)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x18)) + 40.0f);
                            (*(f32 *)((char *)(((char *)(D_800D23B0) + var_s0)) + 0x1828)) = (f32) ((random_float() * 50.0f) + (*(f32 *)((char *)(temp_s3) + 0x1C)));
                            temp_a0_3 = *sp54;
                            if ((temp_a0_3 - 2) >= 2) {
                                temp_v1_2 = (temp_a0_3 * 0x32C) - 0x658 + &gObjects;
                                temp_v0_7 = (char *)(D_800D23B0) + var_s0;
                                (*(f32 *)((char *)(temp_v0_7) + 0x17A8)) = (f32) ((*(f32 *)((char *)(temp_v0_7) + 0x17A8)) + (((*(f32 *)((char *)(temp_v1_2) + 0x14)) - (*(f32 *)((char *)(temp_s3) + 0x14))) * 0.5f));
                                temp_v0_8 = (char *)(D_800D23B0) + var_s0;
                                (*(f32 *)((char *)(temp_v0_8) + 0x1828)) = (f32) ((*(f32 *)((char *)(temp_v0_8) + 0x1828)) + (((*(f32 *)((char *)(temp_v1_2) + 0x1C)) - (*(f32 *)((char *)(temp_s3) + 0x1C))) * 0.5f));
                            }
                        }
                    }
                    spAB = 0;
                    var_v0 = *sp7C;
                    var_a2 = 0;
                    if (*(&D_800872D0 + D_800E0BD0) < var_v0) {
                        *sp7C = 0;
                        spF8 = -1;
                        var_v0 = *sp7C;
                    }
                    if ((var_v0 >= 0) && (spF8 < 0)) {
                        var_a2 = 1;
                    }
                    temp_v0_9 = *(&D_800872C4 + (D_800E0BD0 * 2));
                    if ((temp_v0_9 != -1) && (*temp_s7 >= temp_v0_9)) {
                        var_s4_2 = 1;
                    }
                    temp_v0_10 = (char *)(D_800D23B0) + var_s2;
                    temp_v1_3 = (*(s32 *)((char *)(temp_v0_10) + 0x1725));
                    (*(s8 *)((char *)(temp_v0_10) + 0x1725)) = (s8) (temp_v1_3 + ((s32) ((*(s8 *)((char *)(temp_v0_10) + 0x1705)) - temp_v1_3) >> 2));
                    temp_v0_11 = (char *)(D_800D23B0) + var_s2;
                    temp_t0 = (*(s32 *)((char *)(temp_v0_11) + 0x1735));
                    (*(s8 *)((char *)(temp_v0_11) + 0x1735)) = (s8) (temp_t0 + ((s32) ((*(s8 *)((char *)(temp_v0_11) + 0x1715)) - temp_t0) >> 2));
                    temp_v0_12 = (char *)(D_800D23B0) + var_s2;
                    if ((func_1508CAD8(var_s2, *sp54 - 2, var_a2, var_s4_2, (s32) (*(s32 *)((char *)(temp_v0_12) + 0x1725)), (s32) (*(s32 *)((char *)(temp_v0_12) + 0x1735))) != 0) && (*sp6C != 1)) {
                        *temp_s7 = 0;
                    }
                    if (*sp7C == 0) {
                        (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s2)) + 0x1705)) = 0;
                        (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s2)) + 0x1715)) = 0;
                        if (*(&D_800872E8 + D_800E0BD0) < (s32) (random_float() * 100.0f)) {
                            if (random_float() > 0.5f) {
                                (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s2)) + 0x1705)) = -0x32;
                            } else {
                                (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s2)) + 0x1705)) = 0x32;
                            }
                            if (random_float() > 0.5f) {
                                (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s2)) + 0x1715)) = 0x32;
                            } else {
                                (*(s32 *)((char *)(((char *)(D_800D23B0) + var_s2)) + 0x1715)) = 0;
                            }
                        }
                    }
                }
                if ((spAB != 0) && ((*(s32 *)((char *)(D_800D23B0) + 0x16BC)) != 0xB8)) {
                    *sp7C = (s32) -*(&D_800872E0 + D_800E0BD0);
                }
                temp_v0_13 = (*(s32 *)((char *)(temp_s3) + 0x22C));
                (*(u16 *)((char *)(temp_s3) + 0x22C)) = (u16) (temp_v0_13 & 0xFDFF);
                if ((temp_v0_13 & 0x200) || (*sp68 & 0x80)) {
                    *sp6C = 0;
                    *sp84 = 1;
                }
                if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_s3) + 0x31C))) + 0x1AC)) != 0) {
                    *sp74 = 0x14;
                }
            } else {
                *sp60 = 0;
                *sp5C = -1;
            }
            var_s2 += 1;
            sp5C += 4;
            sp60 += 4;
            sp84 += 4;
            var_s0 += 4;
        } while (var_s2 != spE4);
    }
    (*(s32 *)((char *)(temp_t1) + 0x18)) = spE8;
    if (D_800BE9E4 != 0) {
        (*(f32 *)((char *)(D_800D23B0) + 0x16B4)) = (f32) D_800BE9E4;
    } else {
        (*(s32 *)((char *)(D_800D23B0) + 0x16B4)) = 1.0f;
    }
    temp_t1_2 = D_800D23B0;
    if (temp_t1_2 != (void *)-0x55C) {
        func_1508B3F8();
    }
    if ((*(s32 *)((char *)(temp_t1_2) + 0x16BC)) == 0xB9) {
        temp_s3_2 = (s32) ((*(s32 *)((char *)(D_800BE628) + 0x30)) - (*(s32 *)((char *)(D_800BE628) + 0x2C))) >> 1;
        func_1504332C(0xFF, 0xFF, 0xFF, 0xFF);
        var_t0 = &gObjects;
        var_v1 = 0;
        if (D_80082FA0 >= 0) {
            do {
                if ((*(s32 *)((char *)(var_t0) + 0x128)) == 0) {
                    temp_v0_14 = D_800BE628 + (var_v1 * 0x180);
                    sp8C = var_t0;
                    spA0 = var_v1;
                    func_15042D94((s32) ((*(s32 *)((char *)(temp_v0_14) + 0x2C)) + (f32) temp_s3_2), (s32) ((*(s32 *)((char *)(temp_v0_14) + 0x24)) + 6.0f), 1, &D_8009DA20, (s32) *((char *)(spAC) + (var_v1 * 4)) / 60);
                }
                var_v1 += 1;
                var_t0 = (char *)(var_t0) + 0x32C;
            } while (D_80082FA0 >= var_v1);
        }
    }
    return sp100;
}

s16 func_1508B194(s32 arg0) {
    if (arg0 >= D_8008FD90) {
        return 0;
    }
    return (*(s32 *)((char *)((gGameState + (arg0 * 0xC))) + 0x70));
}

void func_1508B1D4(s32 arg0) {
    if (arg0 < D_8008FD90) {
        (*(s32 *)((char *)((gGameState + (arg0 * 0xC))) + 0x70)) = 0;
    }
}

void func_1508B20C(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 temp_a1;
    s8 temp_v1;

    if (D_800D23B0 != NULL) {
        temp_v1 = (*(s32 *)((char *)(D_800D23B0) + 0x1745));
        if (temp_v1 < 8) {
            (*(s8 *)((char *)(D_800D23B0) + 0x1745)) = (s8) (temp_v1 + 1);
            temp_a1 = temp_v1 * 0xC;
            (*(s16 *)((char *)(((char *)(D_800D23B0) + temp_a1)) + 0x174C)) = (s16) (s32) arg0;
            (*(s16 *)((char *)(((char *)(D_800D23B0) + temp_a1)) + 0x174E)) = (s16) (s32) arg1;
            (*(s16 *)((char *)(((char *)(D_800D23B0) + temp_a1)) + 0x1750)) = (s16) (s32) arg2;
            (*(f32 *)((char *)(((char *)(D_800D23B0) + temp_a1)) + 0x1748)) = (f32) (arg3 * arg3);
        }
    }
}

void func_1508B2A8( s32 arg0, f32 *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s32 temp_v1_2;
    s32 var_s0;
    s8 temp_t6;
    u8 temp_a0;
    void *temp_a2;
    void *temp_v1;
    void *var_s1;

    temp_t6 = arg0 & 0xFF;
    temp_v1 = arg1 + (temp_t6 >> 3);
    (*(u8 *)((char *)(temp_v1) + 0x36)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x36)) | (1 << (temp_t6 & 3)));
    temp_a2 = (temp_t6 * 0x10) + D_800D2350;
    var_s1 = temp_a2;
    var_s0 = 0;
    temp_f0 = (f32) (*(f32 *)((char *)(temp_a2) + 0x0)) - (*(f32 *)((char *)(arg1) + 0x0));
    temp_f2 = (f32) (*(f32 *)((char *)(temp_a2) + 0x4)) - (*(f32 *)((char *)(arg1) + 0x4));
    temp_f2_2 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2);
    if ((*(s32 *)((char *)(arg1) + 0x8)) < temp_f2_2) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x2C));
        if (temp_v0 < 8) {
            (*(s32 *)((char *)((arg1 + temp_v0)) + 0x2E)) = temp_t6;
            (*(s32 *)((char *)((arg1 + ((*(s32 *)((char *)(arg1) + 0x2C)) * 4))) + 0xC)) = temp_f2_2;
            (*(s16 *)((char *)(arg1) + 0x2C)) = (s16) ((*(s16 *)((char *)(arg1) + 0x2C)) + 1);
        }
    } else {
        do {
            temp_a0 = (*(s32 *)((char *)(var_s1) + 0x9));
            temp_v1_2 = temp_a0 & 0xFF;
            if ((temp_a0 != 0xFF) && !((*(s32 *)((char *)((arg1 + (temp_v1_2 >> 3))) + 0x36)) & (1 << (temp_v1_2 & 3)))) {
                func_1508B2A8(temp_a0, arg1);
            }
            var_s0 += 1;
            var_s1 = (char *)(var_s1) + 1;
        } while (var_s0 != 5);
    }
}

void func_1508B3F8(void) {
    s32 sp13C;
    s32 *sp124;
    void * spE2;
    s16 spD8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    void *sp94;
    f32 *var_a0;
    f32 *var_a0_2;
    f32 *var_a1;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 var_f20;
    s32 *temp_a0;
    s32 *temp_t6;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_t0;
    s32 temp_t6_2;
    s32 temp_t9;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    s8 temp_v0;
    s8 var_s4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *var_a1_2;
    void *var_s3;

    temp_t6 = (char *)(D_800D23B0) + 0x55C;
    sp124 = temp_t6;
    sp13C = 0;
    if (D_8008FD8C > 0) {
        var_v1 = temp_t6;
        do {
            if (*var_v1 != -1) {
                *var_v1 = -2;
            }
            var_v1 += 4;
            temp_t0 = sp13C + 1;
            sp13C = temp_t0;
        } while (temp_t0 < D_8008FD8C);
        sp13C = 0;
    }
    if ((*(s32 *)((char *)(D_800D23B0) + 0x1745)) > 0) {
        sp94 = (char *)(D_800D23B0) + 0x1748;
        do {
            var_s4 = D_8008FD90;
            var_s5 = 0;
            spB4 = (*(s32 *)((char *)(sp94) + 0x0));
            temp_f22 = (f32) (*(f32 *)((char *)(sp94) + 0x4));
            temp_f24 = (f32) (*(f32 *)((char *)(sp94) + 0x6));
            temp_f26 = (f32) (*(f32 *)((char *)(sp94) + 0x8));
            if (var_s4 < D_8008FD8C) {
                var_s3 = (var_s4 * 0x32C) + &gObjects;
                do {
                    temp_f0 = (*(s32 *)((char *)(var_s3) + 0x18)) - temp_f24;
                    if ((temp_f0 < 200.0f) && (temp_f0 > -100.0f)) {
                        temp_f2 = (*(s32 *)((char *)(var_s3) + 0x14)) - temp_f22;
                        temp_f0_2 = (*(s32 *)((char *)(var_s3) + 0x1C)) - temp_f26;
                        var_s1 = 0xFF;
                        var_s0 = 0;
                        if (((temp_f2 * temp_f2) + (temp_f0_2 * temp_f0_2)) < (spB4 + 100.0f)) {
                            var_f20 = D_8009DA5C;
                            if (var_s5 == 0) {
                                spD8 = 0;
                                var_s5 = 1;
                                temp_v0 = func_15085DF8(temp_f22, temp_f24, temp_f26, 0, (s8) func_15085DA8(temp_f24));
                                if (temp_v0 != -1) {
                                    spAC = temp_f22;
                                    spB0 = temp_f26;
                                    spD8 = 0;
                                    bzero(&spE2, 0x20);
                                    func_1508B2A8(temp_v0 & 0xFF, &spAC);
                                }
                            }
                            temp_v0_2 = spD8 & 3;
                            if (spD8 > 0) {
                                temp_f12 = (*(s32 *)((char *)(var_s3) + 0x14));
                                temp_f14 = (*(s32 *)((char *)(var_s3) + 0x1C));
                                if (temp_v0_2 != 0) {
                                    var_a0 = &(&spAC)[0];
                                    var_a1 = &spAC;
                                    do {
                                        temp_v1 = (*(s32 *)((char *)(var_a1) + 0x2E));
                                        var_s0 += 1;
                                        var_a1 += 1;
                                        temp_v0_3 = (temp_v1 * 0x10) + D_800D2350;
                                        temp_f2_2 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0)) - temp_f12;
                                        temp_f0_3 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x4)) - temp_f14;
                                        temp_f0_4 = (temp_f2_2 * temp_f2_2) + (temp_f0_3 * temp_f0_3);
                                        if ((temp_f0_4 < (*(s32 *)((char *)(var_a0) + 0xC))) && (temp_f0_4 < var_f20)) {
                                            var_s1 = temp_v1 & 0xFF;
                                            var_f20 = temp_f0_4;
                                        }
                                        var_a0 += 4;
                                    } while (temp_v0_2 != var_s0);
                                    if (var_s0 != spD8) {
                                        goto block_24;
                                    }
                                } else {
block_24:
                                    var_a0_2 = &(&spAC)[var_s0];
                                    var_a1_2 = &spAC + var_s0;
                                    do {
                                        temp_v1_2 = (*(s32 *)((char *)(var_a1_2) + 0x2E));
                                        temp_v0_4 = (temp_v1_2 * 0x10) + D_800D2350;
                                        temp_f2_3 = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x0)) - temp_f12;
                                        temp_f0_5 = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x4)) - temp_f14;
                                        temp_f0_6 = (temp_f2_3 * temp_f2_3) + (temp_f0_5 * temp_f0_5);
                                        if ((temp_f0_6 < (*(s32 *)((char *)(var_a0_2) + 0xC))) && (temp_f0_6 < var_f20)) {
                                            var_s1 = temp_v1_2 & 0xFF;
                                            var_f20 = temp_f0_6;
                                        }
                                        temp_v1_3 = (*(s32 *)((char *)(var_a1_2) + 0x2F));
                                        temp_v0_5 = (temp_v1_3 * 0x10) + D_800D2350;
                                        temp_f2_4 = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x0)) - temp_f12;
                                        temp_f0_7 = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x4)) - temp_f14;
                                        temp_f0_8 = (temp_f2_4 * temp_f2_4) + (temp_f0_7 * temp_f0_7);
                                        if ((temp_f0_8 < (*(s32 *)((char *)(var_a0_2) + 0x10))) && (temp_f0_8 < var_f20)) {
                                            var_s1 = temp_v1_3 & 0xFF;
                                            var_f20 = temp_f0_8;
                                        }
                                        temp_v1_4 = (*(s32 *)((char *)(var_a1_2) + 0x30));
                                        temp_v0_6 = (temp_v1_4 * 0x10) + D_800D2350;
                                        temp_f2_5 = (f32) (*(f32 *)((char *)(temp_v0_6) + 0x0)) - temp_f12;
                                        temp_f0_9 = (f32) (*(f32 *)((char *)(temp_v0_6) + 0x4)) - temp_f14;
                                        temp_f0_10 = (temp_f2_5 * temp_f2_5) + (temp_f0_9 * temp_f0_9);
                                        if ((temp_f0_10 < (*(s32 *)((char *)(var_a0_2) + 0x14))) && (temp_f0_10 < var_f20)) {
                                            var_s1 = temp_v1_4 & 0xFF;
                                            var_f20 = temp_f0_10;
                                        }
                                        temp_v1_5 = (*(s32 *)((char *)(var_a1_2) + 0x31));
                                        var_a0_2 += 0x10;
                                        temp_v0_7 = (temp_v1_5 * 0x10) + D_800D2350;
                                        temp_f2_6 = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x0)) - temp_f12;
                                        temp_f0_11 = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x4)) - temp_f14;
                                        temp_f0_12 = (temp_f2_6 * temp_f2_6) + (temp_f0_11 * temp_f0_11);
                                        if ((temp_f0_12 < (*(s32 *)((char *)(var_a0_2) + 0x8))) && (temp_f0_12 < var_f20)) {
                                            var_s1 = temp_v1_5 & 0xFF;
                                            var_f20 = temp_f0_12;
                                        }
                                        var_a1_2 = (char *)(var_a1_2) + 4;
                                    } while (var_a0_2 != &(&spAC)[spD8]);
                                }
                            }
                            if (var_s1 != 0xFF) {
                                temp_a0 = &sp124[var_s4];
                                if (*temp_a0 != -2) {
                                    (*(s32 *)((char *)(((char *)(D_800D23B0) + (var_s4 * 4))) + 0x5C)) = 1;
                                }
                                *temp_a0 = (s32) (*(s32 *)((char *)(((var_s1 * 0x10) + D_800D2350)) + 0x7));
                            }
                        }
                    }
                    var_s4 += 1;
                    var_s3 = (char *)(var_s3) + 0x32C;
                } while (var_s4 < D_8008FD8C);
            }
            temp_t9 = sp13C + 1;
            sp94 = (char *)(sp94) + 0xC;
            sp13C = temp_t9;
        } while (temp_t9 < (*(s32 *)((char *)(D_800D23B0) + 0x1745)));
        sp13C = 0;
    }
    if (D_8008FD8C > 0) {
        var_v1_2 = sp124;
        do {
            if (*var_v1_2 < 0) {
                *var_v1_2 = -1;
            }
            var_v1_2 += 4;
            temp_t6_2 = sp13C + 1;
            sp13C = temp_t6_2;
        } while (temp_t6_2 < D_8008FD8C);
    }
    (*(s32 *)((char *)(D_800D23B0) + 0x1745)) = 0;
}

s32 func_1508B9BC(void) {
    s32 sp38;
    s32 *sp30;
    void *sp2C;
    void *sp28;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;
    s32 *var_t4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_f4;
    s32 temp_s0;
    s32 temp_t1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_ra;
    s32 var_t3;
    s32 var_t5;
    s32 var_v0;
    s32 var_v1;
    void *temp_s2;
    void *temp_t0;
    void *temp_t2;
    void *temp_v0;
    void *temp_v1_2;

    var_a1 = 1;
    temp_s0 = (*(s32 *)((char *)(D_800D23B0) + 0x10));
    temp_t1 = (*(s32 *)((char *)(D_800D23B0) + 0x4));
    sp30 = (char *)(D_800D23B0) + 0x39C;
    temp_t0 = (char *)(D_800D23B0) + 0x5DC;
    temp_t2 = (char *)(D_800D23B0) + 0x9DC;
    temp_s2 = (char *)(D_800D23B0) + 0x11C;
    if (temp_s0 >= 9) {
        var_a1 = 4;
    }
    sp2C = temp_t0;
    sp38 = temp_t1;
    sp28 = temp_t2;
    func_1508C5B8(0, var_a1);
    func_1508A1BC();
    var_ra = -1;
    var_t5 = 0x989680;
    var_t3 = 0;
    if (temp_s0 > 0) {
        var_t4 = sp30;
        do {
            if (*var_t4 > 0) {
                var_a2 = -1;
                if (var_t3 != temp_t1) {
                    temp_v1 = var_t3 * 0x10;
                    temp_a1 = temp_v1 + 0x10;
                    var_v0 = temp_v1;
                    if (temp_v1 < temp_a1) {
                        var_v1 = temp_v1 * 4;
                        if (*((char *)(temp_t0) + (temp_v1 * 4)) != -1) {
                            var_a0 = *((char *)(temp_t0) + var_v1);
loop_9:
                            var_v0 += 1;
                            if (temp_t1 == var_a0) {
                                var_a2 = *((char *)(temp_t2) + var_v1);
                                var_v0 = temp_a1;
                            }
                            var_v1 = var_v0 * 4;
                            if (var_v0 < temp_a1) {
                                var_a0 = *((char *)(temp_t0) + var_v1);
                                if (var_a0 != -1) {
                                    goto loop_9;
                                }
                            }
                        }
                    }
                    if (var_a2 != -1) {
                        var_f0 = (f32) (*(f32 *)((char *)(D_800D23B0) + (temp_t1 * 0x10) + 0x15B4 + var_t3)) * D_8009DA64;
                        if (var_t3 == *((char *)(temp_s2) + (temp_t1 * 4))) {
                            var_f0 *= D_8009DA60;
                        }
                        temp_f4 = (s32) ((f32) var_a2 * var_f0);
                        if (temp_f4 < var_t5) {
                            var_t5 = temp_f4;
                            var_ra = var_t3;
                        }
                    }
                }
            }
            var_t3 += 1;
            var_t4 += 4;
        } while (var_t3 != temp_s0);
    }
    temp_a0 = temp_t1 * 4;
    (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a0)) + 0x49C)) = var_ra;
    if (var_ra != -1) {
        temp_v0 = &gObjects + (temp_t1 * 0x32C);
        temp_v1_2 = &gObjects + (var_ra * 0x32C);
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x14)) - (*(s32 *)((char *)(temp_v1_2) + 0x14));
        temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x1C)) - (*(s32 *)((char *)(temp_v1_2) + 0x1C));
        (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a0)) + 0x45C)) = (s32) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    } else {
        (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a0)) + 0x45C)) = var_t5;
    }
    return 0;
}

void func_1508BC20(void) {
    s32 sp84;
    s32 sp6C;
    void * sp60;
    void * sp50;
    f32 sp48;
    void * *var_v0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s2;
    s32 var_s6;
    s32 var_v1;
    s32 var_v1_2;
    s8 *temp_v0_3;
    s8 *temp_v0_4;
    s8 *var_s5;
    s8 *var_v0_2;
    s8 *var_v0_3;
    s8 *var_v0_4;
    s8 *var_v0_5;
    s8 temp_s1;
    s8 temp_s1_2;
    s8 temp_s1_3;
    s8 temp_s3;
    s8 var_s1;

    temp_s3 = D_8008FD8C;
    temp_v0 = temp_s3 >> 1;
    var_v1 = temp_v0;
    var_s5 = (char *)(D_800D23B0) + 0x15B4;
    if (temp_v0 < 2) {
        var_v1 = 2;
    }
    sp6C = 0xAA / var_v1;
    var_a1 = 0;
    if (temp_s3 > 0) {
        sp48 = (f32) temp_s3;
        do {
            var_v0 = &sp50;
            var_s6 = -1;
            var_s1 = 0x55;
            var_s2 = sp6C;
loop_5:
            var_v0 = (char *)(var_v0) + 4;
            (*(s32 *)((char *)(var_v0) - 0x4)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x3)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x2)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x1)) = 0;
            if ((char *)(var_v0) != (char *)(&sp60)) {
                goto loop_5;
            }
            sp84 = var_a1;
            var_s0 = (s32) (random_float() * sp48);
            var_v0_2 = &sp50 + var_s0;
            var_v1_2 = 0;
            var_a1 += 1;
            if (random_float() > 0.5f) {
                var_s6 = 1;
            }
            if (*var_v0_2 != 0) {
                do {
                    var_s0 += var_s6;
                    if (var_s0 < 0) {
                        var_s0 = temp_s3 - 1;
                    }
                    if (var_s0 >= temp_s3) {
                        var_s0 = 0;
                    }
                    var_v0_2 = &sp50 + var_s0;
                } while (*var_v0_2 != 0);
            }
            *var_v0_2 = 1;
            if (temp_s3 > 0) {
                temp_v0_2 = temp_s3 & 3;
                if (temp_v0_2 != 0) {
                    do {
                        temp_v0_3 = var_s5 + var_s0;
                        if (var_s1 < 0x100) {
                            *temp_v0_3 = var_s1;
                        } else {
                            *temp_v0_3 = -1;
                        }
                        var_s0 += 1;
                        var_s1 += var_s2;
                        if (var_s0 >= temp_s3) {
                            var_s0 = 0;
                        }
                        var_v1_2 += 1;
                        if (var_s1 >= 0x100) {
                            var_s2 = -var_s2;
                        }
                    } while (temp_v0_2 != var_v1_2);
                    if (var_v1_2 != temp_s3) {
                        goto loop_25;
                    }
                } else {
                    do {
loop_25:
                        temp_v0_4 = var_s5 + var_s0;
                        if (var_s1 < 0x100) {
                            *temp_v0_4 = var_s1;
                        } else {
                            *temp_v0_4 = -1;
                        }
                        var_s0_2 = var_s0 + 1;
                        var_v0_3 = temp_v0_4 + 1;
                        if (var_s0_2 >= temp_s3) {
                            var_s0_2 = 0;
                            var_v0_3 = var_s5;
                        }
                        temp_s1 = var_s1 + var_s2;
                        var_s0_3 = var_s0_2 + 1;
                        if (temp_s1 >= 0x100) {
                            var_s2 = -var_s2;
                        }
                        var_v1_2 += 4;
                        if (temp_s1 < 0x100) {
                            *var_v0_3 = temp_s1;
                        } else {
                            *var_v0_3 = -1;
                        }
                        var_v0_4 = var_v0_3 + 1;
                        if (var_s0_3 >= temp_s3) {
                            var_s0_3 = 0;
                            var_v0_4 = var_s5;
                        }
                        temp_s1_2 = temp_s1 + var_s2;
                        var_s0_4 = var_s0_3 + 1;
                        if (temp_s1_2 >= 0x100) {
                            var_s2 = -var_s2;
                        }
                        if (temp_s1_2 < 0x100) {
                            *var_v0_4 = temp_s1_2;
                        } else {
                            *var_v0_4 = -1;
                        }
                        var_v0_5 = var_v0_4 + 1;
                        if (var_s0_4 >= temp_s3) {
                            var_s0_4 = 0;
                            var_v0_5 = var_s5;
                        }
                        temp_s1_3 = temp_s1_2 + var_s2;
                        var_s0 = var_s0_4 + 1;
                        if (temp_s1_3 >= 0x100) {
                            var_s2 = -var_s2;
                        }
                        if (temp_s1_3 < 0x100) {
                            *var_v0_5 = temp_s1_3;
                        } else {
                            *var_v0_5 = -1;
                        }
                        var_s1 = temp_s1_3 + var_s2;
                        if (var_s0 >= temp_s3) {
                            var_s0 = 0;
                        }
                        if (var_s1 >= 0x100) {
                            var_s2 = -var_s2;
                        }
                    } while (var_v1_2 != temp_s3);
                }
            }
            var_s5 += 0x10;
        } while (var_a1 != temp_s3);
    }
}

s32 func_1508BF14(void) {
    s32 spA4;
    s8 sp7C;
    s32 *sp6C;
    s32 *sp68;
    void *sp64;
    void *sp60;
    s32 *var_s7;
    s32 *var_t5;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s6;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t4;
    s32 var_v0_3;
    s32 var_v1;
    s8 *temp_v0_3;
    s8 *var_v0;
    s8 *var_v0_2;
    void *temp_s4;
    void *temp_t2;

    var_t1 = 0;
    temp_s3 = (*(s32 *)((char *)(D_800D23B0) + 0x10));
    sp6C = (char *)(D_800D23B0) + 0x15C;
    sp68 = (char *)(D_800D23B0) + 0x39C;
    temp_s4 = (char *)(D_800D23B0) + 0xE64;
    sp64 = (char *)(D_800D23B0) + 0x45C;
    sp60 = (char *)(D_800D23B0) + 0x49C;
    temp_s5 = *((char *)(temp_s4) + ((*(s32 *)((char *)(D_800D23B0) + 0x4)) * 4));
    temp_t2 = (char *)(D_800D23B0) + 0x5DC;
    if (temp_s3 > 0) {
        temp_a0 = temp_s3 & 3;
        if (temp_a0 != 0) {
            var_v0 = &sp7C;
            do {
                var_t1 += 1;
                *var_v0 = 0;
                var_v0 += 1;
            } while (temp_a0 != var_t1);
            if (var_t1 != temp_s3) {
                goto block_5;
            }
        } else {
block_5:
            var_v0_2 = &(&sp7C)[var_t1];
            do {
                var_v0_2 += 4;
                (*(s32 *)((char *)(var_v0_2) - 0x4)) = 0;
                (*(s32 *)((char *)(var_v0_2) - 0x3)) = 0;
                (*(s32 *)((char *)(var_v0_2) - 0x2)) = 0;
                (*(s32 *)((char *)(var_v0_2) - 0x1)) = 0;
            } while (var_v0_2 != &(&sp7C)[temp_s3]);
        }
    }
    spA4 = 0;
    do {
        var_t1_2 = 0;
        if (temp_s3 > 0) {
            var_s6 = 0;
            var_s7 = sp6C;
            do {
                temp_v0 = *var_s7;
                var_s7 += 4;
                var_a0 = 0;
                if ((temp_v0 == 2) || (temp_v0 == 3)) {
                    var_a0 = 1;
                }
                if (((var_a0 != 0) && (spA4 == 0)) || ((var_a0 == 0) && (spA4 != 0))) {
                    var_s1 = -1;
                    var_s0 = 0x989680;
                    if (temp_s5 == *((char *)(temp_s4) + var_s6)) {
                        var_a3 = 0;
                        if (temp_s3 > 0) {
                            var_t4 = 0;
                            var_t5 = sp68;
                            do {
                                temp_t8 = *var_t5;
                                var_t5 += 4;
                                if (temp_t8 > 0) {
                                    temp_v0_2 = var_a3 * 0x10;
                                    var_a2 = -1;
                                    temp_a1 = temp_v0_2 + 0x10;
                                    if (temp_s5 != *((char *)(temp_s4) + var_t4)) {
                                        var_a0_2 = temp_v0_2;
                                        if (temp_v0_2 < temp_a1) {
                                            var_v0_3 = temp_v0_2 * 4;
                                            if (*((char *)(temp_t2) + (temp_v0_2 * 4)) != -1) {
                                                var_v1 = *((char *)(temp_t2) + var_v0_3);
loop_25:
                                                var_a0_2 += 1;
                                                if (var_t1_2 == var_v1) {
                                                    var_a2 = (*(s32 *)((char *)(D_800D23B0) + 0x9DC + var_v0_3));
                                                    var_a0_2 = temp_a1;
                                                }
                                                var_v0_3 = var_a0_2 * 4;
                                                if (var_a0_2 < temp_a1) {
                                                    var_v1 = *((char *)(temp_t2) + var_v0_3);
                                                    if (var_v1 != -1) {
                                                        goto loop_25;
                                                    }
                                                }
                                            }
                                        }
                                        if (var_a2 != -1) {
                                            temp_a2 = var_a2 << (&sp7C)[var_a3];
                                            if (temp_a2 < var_s0) {
                                                var_s0 = temp_a2;
                                                var_s1 = var_a3;
                                            }
                                        }
                                    }
                                }
                                var_a3 += 1;
                                var_t4 += 4;
                            } while (var_a3 != temp_s3);
                        }
                        temp_v0_3 = &(&sp7C)[var_s1];
                        *temp_v0_3 += 1;
                        *((char *)(sp64) + var_s6) = var_s0;
                        *((char *)(sp60) + var_s6) = var_s1;
                    }
                }
                var_t1_2 += 1;
                var_s6 += 4;
            } while (var_t1_2 != temp_s3);
        }
        temp_t6 = spA4 + 1;
        spA4 = temp_t6;
    } while (temp_t6 != 2);
    return 0;
}

s32 func_1508C194(s32 arg0) {
    return 0;
}

void func_1508C1A4(s32 arg0, s32 arg1) {
    s32 spA4;
    s32 spA0;
    void *sp9C;
    f32 sp88;
    void * sp84;
    void * sp80;
    void * sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    s32 var_t0;
    u8 temp_a2;
    u8 var_a1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    spA0 = 0;
    spA4 = 0;
    sp9C = func_1505EEF4(arg0 & 0xFFFF0FFF);
    temp_v0 = func_1505EEF4(arg1 & 0xFFFF0FFF);
    var_t0 = spA4;
    if ((sp9C != NULL) && (temp_v0 != NULL)) {
        var_f12 = (*(s32 *)((char *)(sp9C) + 0x14));
        sp64 = (*(s32 *)((char *)(sp9C) + 0x1C));
        temp_a0 = (*(s32 *)((char *)(sp9C) + 0x31C));
        temp_a2 = (*(s32 *)((char *)(temp_a0) + 0x84));
        if (temp_a2 != 0) {
            var_f14 = (*(f32 *)((char *)(sp9C) + 0x18)) + ((f32) (*(f32 *)((char *)(temp_a0) + 0x114)) * 0.75f);
            if (((*(s32 *)((char *)(temp_a0) + 0x75)) & 0x7F) == 9) {
                var_f14 -= 50.0f;
            }
            var_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x84));
        } else if ((*(s32 *)((char *)(sp9C) + 0x0)) == 0x1F) {
            var_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x84));
            var_f14 = (*(s32 *)((char *)(sp9C) + 0x18)) + 80.0f;
        } else {
            var_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x84));
            if ((var_a1 != 0) && (*(&D_800872C4 + (D_800E0BD0 * 2)) != -1)) {
                var_f12 = (f32) (*(f32 *)((char *)(sp9C) + 0x1A4));
                sp64 = (f32) (*(f32 *)((char *)(sp9C) + 0x1A8));
                var_f14 = (f32) (*(f32 *)((char *)(sp9C) + 0x1A6));
            } else {
                var_f14 = (*(s32 *)((char *)(sp9C) + 0x18)) + 40.0f;
            }
        }
        sp70 = (*(s32 *)((char *)(temp_v0) + 0x14));
        sp60 = (*(s32 *)((char *)(temp_v0) + 0x1C));
        if (var_a1 != 0) {
            var_f16 = (*(f32 *)((char *)(temp_v0) + 0x18)) + ((f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x114)) * 0.75f);
            if (((*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x75)) & 0x7F) == 9) {
                var_f16 -= 50.0f;
            }
        } else if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0x1F) {
            var_f16 = (*(s32 *)((char *)(temp_v0) + 0x18)) + 80.0f;
        } else if ((temp_a2 != 0) && (*(&D_800872C4 + (D_800E0BD0 * 2)) != -1)) {
            sp70 = (f32) (*(f32 *)((char *)(temp_v0) + 0x1A4));
            var_f16 = (f32) (*(f32 *)((char *)(temp_v0) + 0x1A6));
            sp60 = (f32) (*(f32 *)((char *)(temp_v0) + 0x1A8));
        } else {
            var_f16 = (*(s32 *)((char *)(temp_v0) + 0x18)) + 40.0f;
        }
        temp_f2 = var_f16 - var_f14;
        sp48 = sp64;
        temp_f6 = sp60 - sp64;
        temp_f18 = sp70 - var_f12;
        sp58 = temp_f6;
        sp5C = temp_f18;
        temp_f0 = sqrtf((temp_f18 * temp_f18) + (temp_f2 * temp_f2) + (temp_f6 * temp_f6));
        sp74 = var_f12;
        sp6C = var_f14;
        sp88 = temp_f0;
        var_t0 = spA4;
        if (func_150AC9C0(var_f12, var_f14, (*(s32 *)((char *)(temp_v0) + 0x31C)), var_a1, sp64, temp_f18, temp_f2, temp_f6, 0, 0, &sp84, &sp80, &sp7C, &sp78, 0, 0, 0.0f) == 0) {
            goto block_24;
        }
        if (sp88 < sp78) {
block_24:
            var_t0 = 1;
        }
        spA0 = var_t0;
        if (var_t0 != 0) {
            spA4 = var_t0;
            if (func_15086D94(sp74, sp6C, sp64, sp5C, sp58) > 0.0f) {
                var_t0 = 0;
            }
        }
    }
    if (var_t0 != 0) {
        temp_v0_2 = (char *)(D_800D23B0) + (arg0 * 4);
        (*(s32 *)((char *)(temp_v0_2) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x16C0)) | (1 << arg1));
        temp_v1 = (char *)(D_800D23B0) + (arg1 * 4);
        (*(s32 *)((char *)(temp_v1) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v1) + 0x16C0)) | (1 << arg0));
    }
    if (spA0 != 0) {
        temp_v0_3 = (char *)(D_800D23B0) + (arg0 * 4);
        (*(s32 *)((char *)(temp_v0_3) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0x16C0)) | (0x10000 << arg1));
        temp_v1_2 = (char *)(D_800D23B0) + (arg1 * 4);
        (*(s32 *)((char *)(temp_v1_2) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v1_2) + 0x16C0)) | (0x10000 << arg0));
    }
}

s32 func_1508C5B8(s32 arg0, s32 arg1) {
    f32 sp80[8];
    f32 sp88;
    void * sp93;
    s8 sp90;
    void * sp8C;
    void *sp7C;
    void * *var_fp;
    f32 *var_v0;
    f32 *var_v1;
    f32 temp_f12;
    f32 temp_f22;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f2;
    s32 *var_t0;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_v0_2;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s4;
    s8 *var_s0;
    s8 *var_s0_2;
    s8 *var_v0_2;
    s8 temp_a2;
    s8 temp_t9;
    s8 temp_v1;
    s8 var_a0;
    u8 var_s2;
    u8 var_s3;
    u8 var_t2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s0_3;

    var_s3 = (*(s32 *)((char *)(D_800D23B0) + 0x1700));
    var_s2 = (*(s32 *)((char *)(D_800D23B0) + 0x1701));
    sp7C = (char *)(D_800D23B0) + 0xE64;
    if (arg1 != 0) {
        temp_v1 = D_8008FD90;
        var_s4 = 0;
        if (temp_v1 > 0) {
            temp_f22 = D_8009DA68;
            var_fp = &gObjects;
            do {
                temp_f12 = (*(s32 *)((char *)(var_fp) + 0x14));
                var_s0 = &sp90;
                var_v0 = &sp80[0];
loop_4:
                var_v0 += 4;
                var_s0 += 1;
                (*(s32 *)((char *)(var_s0) - 0x1)) = -1;
                (*(s32 *)((char *)(var_v0) - 0x4)) = temp_f22;
                if ((u32) var_v0 < (u32) &sp8C) {
                    goto loop_4;
                }
                var_a0 = temp_v1;
                if (temp_v1 < D_8008FD8C) {
                    var_a3 = temp_v1 * 4;
                    temp_t2 = var_s4 * 4;
                    var_t0 = (char *)(sp7C) + var_a3;
                    do {
                        temp_t5 = *var_t0;
                        var_t0 += 4;
                        if ((*((char *)(sp7C) + temp_t2) != temp_t5) && !((*(s32 *)((char *)(((char *)(D_800D23B0) + temp_t2)) + 0x16C0)) & (0x10001 << var_a0))) {
                            var_f2 = temp_f12 - temp_f12;
                            var_f0 = temp_f12 - (*(s32 *)((char *)(var_fp) + 0x1C));
                            if (var_s4 == (*(s32 *)((char *)(((char *)(D_800D23B0) + var_a3)) + 0x11C))) {
                                var_f2 *= 0.5f;
                                var_f0 *= 0.5f;
                            }
                            var_v0_2 = &sp90 + 2;
                            var_v1 = &(&sp80[0])[2];
                            temp_f2 = (var_f2 * var_f2) + (var_f0 * var_f0);
                            if (temp_f2 < sp88) {
                                var_f0_2 = *var_v1;
loop_13:
                                temp_t9 = *var_v0_2;
                                var_v0_2 -= 1;
                                (*(s32 *)((char *)(var_v1) + 0x4)) = var_f0_2;
                                (*(s32 *)((char *)(var_v0_2) + 0x1)) = var_a0;
                                (*(s32 *)((char *)(var_v1) + 0x0)) = temp_f2;
                                var_v1 -= 4;
                                (*(s32 *)((char *)(var_v0_2) + 0x2)) = temp_t9;
                                if ((u32) var_v0_2 >= (u32) &sp90) {
                                    var_f0_2 = *var_v1;
                                    if (temp_f2 < var_f0_2) {
                                        goto loop_13;
                                    }
                                }
                            }
                        }
                        var_a0 += 1;
                        var_a3 += 4;
                    } while (var_a0 < D_8008FD8C);
                }
                var_s0_2 = &sp90;
loop_17:
                temp_a2 = *var_s0_2;
                if (temp_a2 != -1) {
                    temp_v0 = (char *)(D_800D23B0) + (var_s4 * 4);
                    (*(s32 *)((char *)(temp_v0) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v0) + 0x16C0)) & ~(0x10001 << temp_a2));
                    temp_v1_2 = (char *)(D_800D23B0) + (temp_a2 * 4);
                    (*(s32 *)((char *)(temp_v1_2) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v1_2) + 0x16C0)) & ~(0x10001 << var_s4));
                    func_1508C1A4(var_s4, (s32) temp_a2);
                }
                var_s0_2 += 1;
                if ((char *)(var_s0_2) != (char *)(&sp93)) {
                    goto loop_17;
                }
                var_s4 += 1;
                var_fp = (char *)(var_fp) + 0x32C;
            } while (var_s4 < D_8008FD90);
        }
    }
    if (arg1 != 0) {
        var_s0_3 = (var_s3 * 0x32C) + &gObjects;
        do {
            var_t2 = (*(s32 *)((char *)(var_s0_3) + 0x128));
            var_a3_2 = 0;
loop_24:
            var_a1 = (var_s2 + 1) & 0xFF;
            var_s2 = (u8) var_a1;
            if (var_a1 >= D_8008FD8C) {
                var_a0_2 = (var_s3 + 1) & 0xFF;
                var_s3 = (u8) var_a0_2;
                if (var_a0_2 >= (D_8008FD8C - 1)) {
                    var_s3 = 0;
                    var_a0_2 = 0;
                }
                var_a1 = (var_a0_2 + 1) & 0xFF;
                var_s2 = (u8) var_a1;
                var_s0_3 = &gObjects + (var_s3 * 0x32C);
                var_t2 = (*(s32 *)((char *)(var_s0_3) + 0x128));
            }
            temp_v0_3 = (char *)(D_800D23B0) + (var_s3 * 4);
            (*(s32 *)((char *)(temp_v0_3) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0x16C0)) & ~(0x10001 << var_a1));
            temp_v1_3 = (char *)(D_800D23B0) + (var_s2 * 4);
            var_a3_2 += 1;
            (*(s32 *)((char *)(temp_v1_3) + 0x16C0)) = (s32) ((*(s32 *)((char *)(temp_v1_3) + 0x16C0)) & ~(0x10001 << var_s3));
            if ((var_a3_2 < 0x40) && ((D_800D18A0 & ((1 << var_s3) | (1 << var_a1))) || (var_t2 == (*(s32 *)((char *)((&gObjects + (var_s2 * 0x32C))) + 0x128))))) {
                goto loop_24;
            }
            func_1508C1A4((s32) var_s3, var_a1);
            temp_v0_2 = arg1 - 1;
            arg1 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    (*(s32 *)((char *)(D_800D23B0) + 0x1700)) = var_s3;
    (*(s32 *)((char *)(D_800D23B0) + 0x1701)) = var_s2;
    return (*(s32 *)((char *)(((char *)(D_800D23B0) + (arg0 * 4))) + 0x16C0));
}

s8 func_1508C9CC(void) {
    s8 var_a0;
    s8 var_v0;
    s8 var_v1;
    void *temp_a3;
    void *temp_t0;

    var_v0 = 0;
    var_v1 = -1;
    var_a0 = (*(s32 *)((char *)(D_800D23B0) + 0x1702));
    do {
        var_a0 += 1;
        if (var_a0 >= D_8008FD8C) {
            var_a0 = 0;
        }
        temp_a3 = &gObjects + (var_a0 * 0x32C);
        if ((*(s32 *)((char *)(temp_a3) + 0x0)) != 0) {
            temp_t0 = (*(s32 *)((char *)(temp_a3) + 0x31C));
            if ((temp_t0 != NULL) && ((*(s32 *)((char *)(temp_t0) + 0x84)) != 0) && !(D_800D18A0 & (1 << var_a0))) {
                var_v0 = D_8008FD8C;
                var_v1 = var_a0;
            }
        }
        var_v0 += 1;
    } while (var_v0 < D_8008FD8C);
    (*(s32 *)((char *)(D_800D23B0) + 0x1702)) = var_a0;
    return var_v1;
}

s8 func_1508CA88(void) {
    s8 var_v1;

    (*(s8 *)((char *)(D_800D23B0) + 0x1703)) = (s8) ((*(s8 *)((char *)(D_800D23B0) + 0x1703)) + 1);
    var_v1 = (*(s32 *)((char *)(D_800D23B0) + 0x1703));
    if (var_v1 >= D_8008FD90) {
        (*(s32 *)((char *)(D_800D23B0) + 0x1703)) = 0;
        var_v1 = (*(s32 *)((char *)(D_800D23B0) + 0x1703));
    }
    return var_v1;
}

s32 func_1508CAD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *sp9C;
    f32 sp94;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp74;
    f32 sp70;
    f32 sp68;
    f32 *sp64;
    f32 sp60;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    void *sp38;
    f32 sp2C;
    void *sp24;
    s32 sp1C;
    f32 *temp_a2;
    f32 *var_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f14_3;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f18_3;
    f32 var_f18_4;
    f32 var_f18_5;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    f32 var_f2_5;
    f32 var_f2_6;
    f32 var_f2_7;
    s32 var_ra;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    u16 *temp_v0_11;
    u16 temp_t8;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_a3;
    void *temp_t2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_a3;
    void *var_t2;
    void *var_v1;
    void *var_v1_2;

    sp54 = 1;
    sp3C = 0;
    temp_a3 = (arg0 * 0x32C) + &gObjects;
    sp60 = (*(s32 *)((char *)(D_800BE628) + 0x70)) / (*(s32 *)((char *)(D_800BE628) + 0x6C));
    if (arg1 != -1) {
        temp_t2 = (*(s32 *)((char *)(temp_a3) + 0x318));
        if (temp_t2 != NULL) {
            sp40 = 1;
        } else {
            sp40 = 0;
        }
        temp_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_a3) + 0x31C))) + 0x78));
        if ((temp_a1 == 9) || (temp_a1 == 0x38) || (temp_a1 == 0x15)) {
            sp40 = 0;
        }
        sp44 = (s32) temp_a1;
        sp24 = temp_a3;
        sp38 = temp_t2;
        temp_v0 = func_1505EEF4(arg1 & 0xFFFF0FFF, temp_a1, 9, temp_a3);
        sp9C = temp_v0;
        if (temp_v0 == NULL) {
            return 1;
        }
        var_ra = 0;
        var_t1 = 0;
        if ((temp_a1 == 0x24) || (temp_a1 == 0x18) || (temp_a1 == 0x23) || (temp_a1 == 0x41)) {
            var_ra = 1;
        } else if (temp_a1 == 9) {
            var_t1 = 1;
        } else if ((temp_a1 == 0x15) || (temp_a1 == 0x1B) || (temp_a1 == 3)) {
            var_t1 = 1;
            if (temp_a1 != 0x1B) {
                var_t1 = 3;
            }
            sp54 = 0;
        } else if (temp_a1 == 0x38) {
            var_t1 = 2;
        }
        if (temp_a1 == 3) {
            arg3 = 0;
        }
        sp5C = 40.0f;
        if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0x1F) {
            arg3 = 0;
            sp5C = 80.0f;
        }
        sp94 = 0.0f;
        var_f18 = 0.0f;
        if (((*(s32 *)((char *)(D_800D23B0) + 0x16BC)) == 0xB9) || (D_800E0BD0 >= 3)) {
            temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_a3) + 0x31C))) + 0x78));
            switch (temp_v1) {                      /* irregular */
            default:
                var_f2 = 0.0f;
                break;
            case 0x18:
            case 0x41:
                var_f2 = D_8009DA6C;
                break;
            case 0x14:
            case 0x3F:
                var_f2 = D_8009DA70;
                break;
            case 0x1B:
                var_f2 = D_8009DA74;
                break;
            case 0x16:
                var_f2 = D_8009DA78;
                break;
            }
            if (var_f2 != 0.0f) {
                temp_f14 = (*(s32 *)((char *)(temp_v0) + 0x14));
                temp_f4 = temp_f14 - (*(s32 *)((char *)(temp_a3) + 0x14));
                sp94 = temp_f4;
                temp_f16 = (*(s32 *)((char *)(temp_v0) + 0x1C));
                temp_f18 = temp_f16 - (*(s32 *)((char *)(temp_a3) + 0x1C));
                temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x18)) - (*(s32 *)((char *)(temp_a3) + 0x18));
                temp_f2 = (sqrtf((temp_f4 * temp_f4) + (temp_f12 * temp_f12) + (temp_f18 * temp_f18)) * var_f2) / (*(s32 *)((char *)(D_800D23B0) + 0x16B4));
                sp94 = (temp_f14 - (*(s32 *)((char *)(temp_v0) + 0x2C))) * temp_f2;
                var_f18 = (temp_f16 - (*(s32 *)((char *)(temp_v0) + 0x34))) * temp_f2;
            }
        }
        if (arg3 == 0) {
            var_t0 = arg0 * 4;
            var_v1 = (char *)(D_800D23B0) + var_t0;
            var_f2_2 = (*(s32 *)((char *)(var_v1) + 0x17A8));
            sp94 = ((*(s32 *)((char *)(temp_v0) + 0x14)) + sp94) - var_f2_2;
            var_f18_2 = ((*(s32 *)((char *)(temp_v0) + 0x1C)) + var_f18) - (*(s32 *)((char *)(var_v1) + 0x1828));
        } else {
            var_t0 = arg0 * 4;
            var_v1 = (char *)(D_800D23B0) + var_t0;
            var_f2_2 = (*(s32 *)((char *)(var_v1) + 0x17A8));
            sp94 = ((f32) (*(f32 *)((char *)(temp_v0) + 0x1A4)) + sp94) - var_f2_2;
            var_f18_2 = ((f32) (*(f32 *)((char *)(temp_v0) + 0x1A8)) + var_f18) - (*(f32 *)((char *)(var_v1) + 0x1828));
        }
        var_f16 = (*(f32 *)((char *)(var_v1) + 0x1868)) * (f32) D_800BE9E4;
        if (temp_a1 == 3) {
            var_f16 = 1.0f;
            arg5 = 0;
            arg4 = 0;
        }
        var_v0 = arg4;
        if (var_f16 > 1.0f) {
            var_f16 = 1.0f;
        }
        (*(f32 *)((char *)(var_v1) + 0x17A8)) = (f32) (var_f2_2 + (sp94 * var_f16));
        temp_v1_2 = (char *)(D_800D23B0) + var_t0;
        (*(f32 *)((char *)(temp_v1_2) + 0x1828)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x1828)) + (var_f18_2 * var_f16));
        temp_v1_3 = (char *)(D_800D23B0) + var_t0;
        sp94 = (*(s32 *)((char *)(temp_v1_3) + 0x17A8)) - (*(s32 *)((char *)(temp_a3) + 0x14));
        var_f18_3 = (*(s32 *)((char *)(temp_v1_3) + 0x1828)) - (*(s32 *)((char *)(temp_a3) + 0x1C));
        temp_f0 = sqrtf((sp94 * sp94) + (var_f18_3 * var_f18_3));
        sp70 = temp_f0;
        if (temp_f0 < 1.0f) {
            sp70 = 1.0f;
        } else {
            if (((temp_f0 < 100.0f) || (temp_a1 == 3)) && (arg5 != 0)) {
                arg5 = 0;
                if (var_v0 == 0) {
                    var_v0 = 0x32;
                }
            }
            temp_f12_2 = (f32) var_v0;
            var_f2_3 = temp_f12_2;
            if (temp_a1 == 9) {
                var_f2_3 = temp_f12_2 * 1.25f;
            }
            temp_f2_2 = var_f2_3 / temp_f0;
            temp_f14_2 = sp94 - (var_f18_3 * temp_f2_2);
            var_f18_3 += sp94 * temp_f2_2;
            sp94 = temp_f14_2;
        }
        sp58 = var_ra;
        sp44 = (s32) temp_a1;
        sp24 = temp_a3;
        sp1C = var_t0;
        sp50 = var_t1;
        sp38 = temp_t2;
        sp88 = var_f16;
        temp_f12_3 = (f32) func_1505A630(sp94, -var_f18_3, D_800D23B0) * 0.005493164f;
        if (temp_a1 != 3) {
            var_f14 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_a3) + 0x31C))) + 0x16C));
        } else {
            var_f14 = (*(s32 *)((char *)(temp_a3) + 0x40)) - 90.0f;
        }
        sp44 = (s32) temp_a1;
        sp24 = temp_a3;
        sp1C = var_t0;
        sp50 = var_t1;
        sp38 = temp_t2;
        sp80 = var_f14;
        sp88 = var_f16;
        sp84 = func_15144BC8(temp_f12_3, var_f14, temp_a1);
        temp_f0_2 = func_15144BC8(func_15144BC8(sp80) - sp84);
        var_f2_4 = temp_f0_2;
        if (temp_f0_2 > 180.0f) {
            var_f2_4 = -360.0f + temp_f0_2;
        }
        if ((var_f2_4 > 45.0f) || (var_f2_4 < -45.0f)) {
            sp3C = 1;
        }
        if (arg3 == 0) {
            var_v1_2 = (char *)(D_800D23B0) + var_t0;
            var_f0 = (*(s32 *)((char *)(var_v1_2) + 0x17E8));
            var_f14_2 = (((*(f32 *)((char *)(sp9C) + 0x18)) + sp5C) - (f32) arg5) - var_f0;
        } else {
            var_v1_2 = (char *)(D_800D23B0) + var_t0;
            var_f0 = (*(s32 *)((char *)(var_v1_2) + 0x17E8));
            var_f14_2 = ((f32) (*(f32 *)((char *)(sp9C) + 0x1A6)) - (f32) arg5) - var_f0;
        }
        (*(f32 *)((char *)(var_v1_2) + 0x17E8)) = (f32) (var_f0 + (var_f14_2 * var_f16));
        sp7C = var_f2_4;
        sp38 = temp_t2;
        sp50 = var_t1;
        sp1C = var_t0;
        sp24 = temp_a3;
        sp44 = (s32) temp_a1;
        var_f0_2 = (f32) func_1505A630(sp70, (*(f32 *)((char *)((*(s32 *)((char *)(temp_a3) + 0x31C))) + 0x140)) - (*(f32 *)((char *)(((char *)(D_800D23B0) + var_t0)) + 0x17E8)), (void *) temp_a1) * 0.005493164f;
        var_f14_3 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_a3) + 0x31C))) + 0x170));
        if (var_f0_2 > 180.0f) {
            do {
                var_f0_2 -= 360.0f;
            } while (var_f0_2 > 180.0f);
        }
        if (var_f14_3 > 180.0f) {
            do {
                var_f14_3 -= 360.0f;
            } while (var_f14_3 > 180.0f);
        }
        sp44 = (s32) temp_a1;
        sp24 = temp_a3;
        sp1C = var_t0;
        sp50 = var_t1;
        sp38 = temp_t2;
        sp84 = var_f0_2;
        temp_f0_3 = func_15144BC8(var_f14_3 - var_f0_2, var_f14_3, temp_a1);
        var_a3 = temp_a3;
        var_t2 = temp_t2;
        var_f2_5 = temp_f0_3;
        if (temp_f0_3 > 180.0f) {
            do {
                var_f2_5 -= 360.0f;
            } while (var_f2_5 > 180.0f);
        }
        var_f16_2 = sp7C * 8.0f;
        temp_f14_3 = var_f2_5 * 8.0f;
        var_f12 = temp_f14_3;
        if (var_f16_2 < -90.0f) {
            var_f16_2 = -90.0f;
        }
        if (var_f16_2 > 90.0f) {
            var_f16_2 = 90.0f;
        }
        if (temp_f14_3 < -30.0f) {
            var_f12 = -30.0f;
        }
        if (var_f12 > 30.0f) {
            var_f12 = 30.0f;
        }
        temp_f2_3 = sqrtf((var_f16_2 * var_f16_2) + (var_f12 * var_f12)) * 1.5f;
        var_f18_4 = temp_f2_3 - 20.0f;
        if (temp_f2_3 < 20.0f) {
            var_f18_4 = 0.0f;
        }
        var_f18_5 = -80.0f + var_f18_4;
        if (temp_a1 == 3) {
            var_f18_5 = 35.0f;
            var_f12 = 0.0f;
        }
        if (sp54 != 0) {
            temp_v0_2 = (*(s32 *)((char *)(var_a3) + 0x31C));
            temp_a2 = (char *)(temp_v0_2) + 0x90;
            (*(f32 *)((char *)(temp_v0_2) + 0x16C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x16C)) - sp7C);
            (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x170)) = sp84;
            sp74 = var_f18_5;
            sp68 = var_f16_2;
            sp38 = var_t2;
            sp50 = var_t1;
            sp1C = var_t0;
            sp24 = var_a3;
            sp64 = temp_a2;
            sp44 = (s32) temp_a1;
            func_15048758(var_f12, 0, (*(s32 *)((char *)(var_a3) + 0x31C)) + 0x16C, temp_a1, temp_a2, var_a3);
            var_a2 = temp_a2;
            temp_v0_3 = (*(s32 *)((char *)(var_a3) + 0x31C));
            (*(f32 *)((char *)(temp_v0_3) + 0x174)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x16C));
            temp_v0_4 = (*(s32 *)((char *)(var_a3) + 0x31C));
            (*(f32 *)((char *)(temp_v0_4) + 0x178)) = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x170));
            (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x85)) = 0;
            (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x86)) = 0;
        } else if (sp40 != 0) {
            var_a2 = (char *)(var_t2) + 0x1A4;
            (*(s8 *)((char *)((*(s8 *)((char *)(var_t2) + 0x36C))) + 0x2)) = (s8) (s32) var_f16_2;
            (*(s8 *)((char *)((*(s8 *)((char *)(var_t2) + 0x36C))) + 0x3)) = (s8) (s32) -var_f12;
        } else {
            temp_v0_5 = (*(s32 *)((char *)(var_a3) + 0x31C));
            var_a2 = (char *)(temp_v0_5) + 0x90;
            (*(s8 *)((char *)(temp_v0_5) + 0x85)) = (s8) (s32) var_f16_2;
            (*(s8 *)((char *)((*(s8 *)((char *)(var_a3) + 0x31C))) + 0x86)) = (s8) (s32) -var_f12;
        }
        if (var_t1 != 0) {
            if (temp_a1 == 0x1B) {
                if ((var_f18_5 < -50.0f) && ((*(s32 *)((char *)(((char *)(D_800D23B0) + var_t0)) + 0x16C0)) & (0x10001 << arg1))) {
                    temp_v0_6 = (*(s32 *)((char *)(var_a3) + 0x31C));
                    (*(u16 *)((char *)(temp_v0_6) + 0x8A)) = (u16) ((*(u16 *)((char *)(temp_v0_6) + 0x8A)) | 0x2000);
                    (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 2;
                }
            } else if (temp_a1 == 3) {
                var_f2_6 = (sp70 - 136.0f) / 664.0f;
                if (var_f2_6 < 0.0f) {
                    var_f2_6 = 0.0f;
                }
                sp64 = var_a2;
                sp24 = var_a3;
                sp38 = var_t2;
                sp2C = var_f2_6;
                sp68 = var_f16_2;
                sp74 = var_f18_5;
                var_f2_7 = (sinf((f32) (D_800BE9AC & 0x3F) * D_8009DA7C) * D_8009DA80) + var_f2_6;
                if (var_f2_7 > 1.0f) {
                    var_f2_7 = 1.0f;
                }
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x86)) = 0;
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x85)) = 0;
                temp_t8 = (*(s32 *)((char *)(var_a3) + 0x76)) - (s32) (var_f16_2 * 16.0f);
                (*(s32 *)((char *)(var_a3) + 0x76)) = temp_t8;
                (*(s32 *)((char *)(var_a3) + 0x7A)) = temp_t8;
                (*(f32 *)((char *)(var_a3) + 0x40)) = (f32) ((f32) (s16) (temp_t8 + 0x4000) * 0.005493164f);
                sp74 = var_f18_5;
                sp38 = var_t2;
                sp24 = var_a3;
                sp64 = var_a2;
                func_150DA5EC(0x3F800000, var_a3, (var_f2_7 * D_8009DA84) + D_8009DA88, var_a2, var_a3);
            } else if ((*(s32 *)((char *)(((char *)(D_800D23B0) + var_t0)) + 0x29C)) >= 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8A)) = 0x2000U;
                if (var_t1 == 1) {
                    (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 2;
                    if (*(&D_800872D8 + D_800E0BD0) < (*(s32 *)((char *)(((char *)(D_800D23B0) + var_t0)) + 0x29C))) {
                        temp_v0_7 = (*(s32 *)((char *)(var_a3) + 0x31C));
                        (*(u16 *)((char *)(temp_v0_7) + 0x8A)) = (u16) ((*(u16 *)((char *)(temp_v0_7) + 0x8A)) & 0xDFFF);
                        (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 0;
                    }
                } else if (var_t1 == 2) {
                    if (arg2 != 0) {
                        (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 0xA;
                    } else {
                        temp_v0_8 = (*(s32 *)((char *)(var_a3) + 0x31C));
                        (*(u16 *)((char *)(temp_v0_8) + 0x8A)) = (u16) ((*(u16 *)((char *)(temp_v0_8) + 0x8A)) & 0xDFFF);
                    }
                } else {
                    (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 2;
                }
            }
        } else if (arg2 != 0) {
            if (sp58 != 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8C)) = 0;
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8A)) = 0U;
            } else {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8C)) = 0x2000;
                (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8F)) = 1;
            }
        } else if (sp58 != 0) {
            if (var_t2 != NULL) {
                temp_v0_9 = (*(s32 *)((char *)(var_t2) + 0x36C));
                (*(u16 *)((char *)(temp_v0_9) + 0x0)) = (u16) ((*(u16 *)((char *)(temp_v0_9) + 0x0)) | 0x2000);
            }
            (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8A)) = 0x2000U;
            (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 2;
        }
        temp_v0_10 = (*(s32 *)((char *)(var_a3) + 0x31C));
        (*(u16 *)((char *)(temp_v0_10) + 0x8A)) = (u16) ((*(u16 *)((char *)(temp_v0_10) + 0x8A)) | 0x10);
        (*(s32 *)((char *)((*(s32 *)((char *)(var_a3) + 0x31C))) + 0x8E)) = 1;
        temp_f0_4 = *var_a2;
        *var_a2 = temp_f0_4 + ((var_f18_5 - temp_f0_4) * 0.125f);
        if (sp40 != 0) {
            (*(f32 *)((char *)(var_t2) + 0x1A8)) = (f32) ((*(f32 *)((char *)(var_t2) + 0x1A4)) * sp60);
        }
        if (var_t2 != NULL) {
            temp_v0_11 = (*(s32 *)((char *)(var_t2) + 0x36C));
            *temp_v0_11 |= 0x10;
        }
        goto block_128;
    }
block_128:
    return sp3C;
}

s32 func_1508D850(s32 arg0) {
    void *sp24;
    s32 *sp18;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_ret;
    s32 *temp_a3;
    s32 *temp_t0;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;
    void *temp_t1;
    void *temp_v0;

    temp_a2 = arg0 * 4;
    temp_t0 = (char *)(D_800D23B0) + 0x11C + temp_a2;
    temp_t1 = &gObjects + (arg0 * 0x32C);
    (*(s8 *)((char *)((*(s8 *)((char *)(temp_t1) + 0x31C))) + 0x129)) = (s8) *temp_t0;
    temp_a1 = *temp_t0;
    if (temp_a1 < 0) {
        return 0;
    }
    temp_v0 = &gObjects + (temp_a1 * 0x32C);
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x14)) - (*(s32 *)((char *)(temp_t1) + 0x14));
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x1C)) - (*(s32 *)((char *)(temp_t1) + 0x1C));
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    if (D_8009DA8C < temp_f0) {
        var_v0 = 0;
    } else {
        var_v0 = 2;
        if (temp_f0 > 2000.0f) {
            var_v0 = 1;
        }
    }
    temp_a3 = (char *)(D_800D23B0) + 0x29C + temp_a2;
    if (*(&D_80087320 + ((D_800E0BD0 * 6) + (var_v0 * 2))) < *temp_a3) {
        *temp_a3 = 0;
        if ((0x10000 << *temp_t0) & (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a2)) + 0x16C0))) {
            sp18 = temp_a3;
            sp24 = temp_t1;
            var_v0 = func_1508EB90(temp_f12, 0x61, temp_a3);
        }
    }
    if (*temp_a3 == 0) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_t1) + 0x31C))) + 0x12A)) = 0;
        sp24 = temp_t1;
        temp_ret = random_float();
        var_v0 = (s32) temp_ret;
        if (*(&D_800872E8 + D_800E0BD0) < (s32) (temp_ret * 100.0f)) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_t1) + 0x31C))) + 0x12A)) = 1;
        }
    }
    return var_v0;
}

void func_1508DA1C(void) {
    s32 *var_t2;
    s32 *var_t2_2;
    s32 *var_t3;
    s32 *var_t4;
    s32 *var_v0;
    s32 *var_v1;
    s32 var_t1;

    var_t1 = 0;
    if ((*(s32 *)((char *)(D_800D23B0) + 0x10)) > 0) {
        var_t2 = (char *)(D_800D23B0) + 0xEB0;
        do {
            *var_t2 = -1;
            var_t1 += 1;
            var_t2 += 4;
        } while (var_t1 < (*(s32 *)((char *)(D_800D23B0) + 0x10)));
        var_t1 = 0;
    }
    var_v1 = (char *)(D_800D23B0) + 0xFF0;
    var_t2_2 = (char *)(D_800D23B0) + 0x10F0;
    if ((*(s32 *)((char *)(D_800D23B0) + 0xEA4)) > 0) {
        var_v0 = (char *)(D_800D23B0) + 0xF70;
        var_t3 = (char *)(D_800D23B0) + 0x1070;
        var_t4 = (char *)(D_800D23B0) + 0x12F4;
        do {
            *var_v0 = -1;
            *var_v1 = 0;
            *var_t2_2 = -1;
            *var_t3 = 1;
            *var_t4 = 0;
            var_t1 += 1;
            var_v0 += 4;
            var_v1 += 4;
            var_t2_2 += 4;
            var_t3 += 4;
            var_t4 += 4;
        } while (var_t1 < (*(s32 *)((char *)(D_800D23B0) + 0xEA4)));
    }
}

s32 func_1508DAEC( s32 arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a1;
    void *temp_a1;
    void *temp_t0;
    void *temp_v1_2;

    temp_a1 = (char *)(D_800D23B0) + (arg0 * 4);
    if (D_800D23B0 == NULL) {
        return 0;
    }
    temp_v1 = (*(s32 *)((char *)(temp_a1) + 0xEB0));
    if (temp_v1 >= 0) {
        if (arg1 < 0) {
            return 1;
        }
        (*(s32 *)((char *)(temp_a1) + 0xEB0)) = -1;
        temp_a3 = temp_v1 * 4;
        temp_t0 = (char *)(D_800D23B0) + temp_a3;
        if (!((*(s32 *)((char *)(temp_t0) + 0x11F4)) & 2)) {
            (*(s32 *)((char *)(temp_t0) + 0xF70)) = -1;
            (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a3)) + 0x10F0)) = -1;
            var_a1 = (*(s32 *)((char *)(D_800D23B0) + 0xEAC));
            if (arg1 == 1) {
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a3)) + 0x12F4)) = 0x12C;
                temp_v1_2 = (arg0 * 0x32C) + &gObjects;
                var_a1 = 4;
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a3)) + 0x1374)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x14));
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a3)) + 0x13F4)) = (s32) ((*(s32 *)((char *)(temp_v1_2) + 0x18)) + 50.0f);
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a3)) + 0x1474)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x1C));
            }
            (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a3)) + 0x1070)) = var_a1;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_1508DC24(void) {
    s32 sp110;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    void *spD8;
    void *spD4;
    void *spD0;
    void *spCC;
    void *spC8;
    void *spC0;
    void *spBC;
    void *spB8;
    void *spB4;
    void *spB0;
    void *spAC;
    void *spA8;
    void *sp80;
    void * *var_s6;
    f32 temp_f20;
    s16 temp_a0;
    s16 temp_s1;
    s16 var_a0;
    s32 *temp_s0;
    s32 *temp_s2;
    s32 *temp_s6;
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_15;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_8;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_5;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_v1;
    s8 temp_t4;
    s8 temp_v0_12;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v1_2;
    u8 var_s1;
    void **var_s0_2;
    void **var_s0_3;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_16;
    void *temp_v0_4;
    void *temp_v0_9;
    void *temp_v1_7;
    void *var_s0_4;
    void *var_s7;

    temp_v0 = D_800D23B0;
    sp110 = 0;
    spD8 = (char *)(temp_v0) + 0xEB0;
    spD4 = (char *)(temp_v0) + 0xEF0;
    spD0 = (char *)(temp_v0) + 0xF70;
    spCC = (char *)(temp_v0) + 0xFF0;
    spC8 = (char *)(temp_v0) + 0x1070;
    spC0 = (char *)(temp_v0) + 0x1174;
    spBC = (char *)(temp_v0) + 0x11F4;
    spB8 = (char *)(temp_v0) + 0x1274;
    spB4 = (char *)(temp_v0) + 0x12F4;
    spB0 = (char *)(temp_v0) + 0x1374;
    spAC = (char *)(temp_v0) + 0x13F4;
    spA8 = (char *)(temp_v0) + 0x1474;
    var_a1 = (*(s32 *)((char *)(temp_v0) + 0x10));
    var_s6 = &gObjects;
    temp_s3 = (char *)(temp_v0) + 0x10F0;
    if (var_a1 > 0) {
        do {
            temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x16BC));
            temp_t0 = sp110 * 4;
            if ((temp_a0 == 0xB9) && ((*(s32 *)((char *)(var_s6) + 0x128)) != 0)) {

            } else {
                temp_a1 = (*(s32 *)((char *)(var_s6) + 0x31C));
                temp_v1_2 = (*(s32 *)((char *)(temp_a1) + 0x19B));
                var_s1 = (*(s32 *)((char *)(temp_a1) + 0x75)) & 0x7F;
                var_s0 = *((char *)(spCC) + temp_t0);
                if ((s32) temp_v1_2 >= 5) {
                    var_s0 = 0x3A;
                } else if ((s32) temp_v1_2 > 0) {
                    var_s0 = 0x26;
                }
                if (var_s0 == 0) {
                    temp_v1_3 = *((char *)(spD8) + temp_t0);
                    if (temp_v1_3 != -1) {
                        var_s0 = *((char *)(spC0) + (temp_v1_3 * 4));
                    } else {
                        var_s0 = (*(s32 *)((char *)(temp_v0) + 0x1170));
                    }
                } else if (var_s0 == 0x457) {
                    var_s0 = 0;
                }
                if (temp_a0 == 0xB8) {
                    var_s1 = (*(s32 *)((char *)(temp_a1) + 0x128)) & ~0x20;
                }
                if (var_s0 != var_s1) {
                    temp_v0_2 = func_1508E780(var_s1, temp_a1);
                    if (temp_v0_2 != -1) {
                        temp_a2 = temp_v0_2 & ~0x1000;
                        func_1508EB90((f32) sp110, 0x4C, temp_a2);
                        if (temp_a2 == 0x1D) {
                            func_1508EB90((f32) sp110, 0x4C, 0x1E);
                        }
                        (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x11A)) = 0U;
                    }
                    temp_v0_3 = func_1508E780((u8) var_s0);
                    if (temp_v0_3 >= 0x1001) {
                        func_1508EB90((f32) sp110, 0x4B, temp_v0_3 & ~0x1000);
                    }
                    if ((*(s32 *)((char *)(D_800D23B0) + 0x16BC)) == 0xB8) {
                        if (var_s1 == 0x80) {
                            func_1502EA50(var_s6, 1, (u8) var_s0);
                            (*(s32 *)((char *)(var_s6) + 0x125)) = 0;
                        }
                        (*(u8 *)((char *)((*(u8 *)((char *)(var_s6) + 0x31C))) + 0x128)) = (u8) var_s0;
                        if (var_s0 == 1) {
                            (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x12C)) = 0x258;
                        } else if (var_s0 == 0x80) {
                            (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x12C)) = 0x708;
                            func_1502EA0C(var_s6, 0, 0, 0xFF, 0xBF, 4);
                        } else if (var_s0 == 0x10) {
                            (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x12C)) = 3;
                        }
                    } else {
                        func_15080620(sp110, 1, (u8) var_s0, 0);
                        if ((var_s0 == 0) && (var_s1 != 3)) {
                            (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x78)) = 0;
                        }
                        if (var_s1 == 0x20) {
                            func_1508EB90((f32) sp110, 0x45, 4);
                        }
                        if (var_s0 == 0x20) {
                            func_1508EB90((f32) sp110, 0x45, 3);
                        }
                    }
                }
                temp_v0_4 = D_800D23B0;
                if ((D_80087340 == sp110) && ((*(s32 *)((char *)(temp_v0_4) + 0x16BC)) != 0xB8)) {
                    var_s5 = 0;
                    var_s2 = func_1508E780((u8) var_s0);
                    temp_v0_5 = func_15033E28(var_s6, &sp80);
                    if ((temp_v0_5 == 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x11A)) == 2) && (var_s2 != 0x55) && (var_s2 != 0x2E)) {
                        func_15083568(var_s6, var_s2, 0x3F800000, 0);
                        if (var_s2 == 0x1D) {
                            func_15083568(var_s6, 0x1E, 0x3F800000, 0);
                        }
                    }
                    if ((temp_v0_5 != 0) && (var_s0 != 0x20)) {
                        var_s1_2 = 0;
                        if (var_s2 != -1) {
                            var_s2 &= ~0x1000;
                            if (temp_v0_5 > 0) {
                                var_s0_2 = &sp80;
                                do {
                                    temp_a0_2 = *var_s0_2;
                                    temp_v0_6 = (*(s32 *)((char *)(temp_a0_2) + 0x6));
                                    if (((temp_v0_6 != 0x1E) || (var_s2 != 0x1D)) && (var_s2 != temp_v0_6) && (temp_v0_6 != 0x2A) && (temp_v0_6 != 0x22) && (temp_v0_6 != 0x2D) && (temp_v0_6 != 0x72) && (temp_v0_6 != 0x73) && (temp_v0_6 != 0x76) && (temp_v0_6 != 0x77) && (temp_v0_6 != 0x78) && (temp_v0_6 != 7)) {
                                        func_15030158(temp_a0_2, 0);
                                        (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x11A)) = 0U;
                                    } else if (var_s2 == temp_v0_6) {
                                        var_s5 = 1;
                                    }
                                    var_s1_2 += 1;
                                    var_s0_2 = (char *)(var_s0_2) + 4;
                                } while (var_s1_2 != temp_v0_5);
                            }
                            if ((var_s5 == 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x11A)) == 2) && (var_s2 != 0x55) && (var_s2 != 0x2E)) {
                                func_15083568(var_s6, var_s2, 0x3F800000, 0);
                                if (var_s2 == 0x1D) {
                                    func_15083568(var_s6, 0x1E, 0x3F800000, 0);
                                }
                            }
                        } else {
                            var_s0_3 = &sp80;
                            if (temp_v0_5 > 0) {
                                do {
                                    temp_a0_3 = *var_s0_3;
                                    temp_v0_7 = (*(s32 *)((char *)(temp_a0_3) + 0x6));
                                    if ((temp_v0_7 != 0x2A) && (temp_v0_7 != 0x22) && (temp_v0_7 != 0x2C) && (temp_v0_7 != 0x64) && (temp_v0_7 != 0x2D) && (temp_v0_7 != 0x72) && (temp_v0_7 != 0x73) && (temp_v0_7 != 0x76) && (temp_v0_7 != 0x77) && (temp_v0_7 != 0x78) && (temp_v0_7 != 7)) {
                                        func_15030158(temp_a0_3, 0);
                                        (*(s32 *)((char *)((*(s32 *)((char *)(var_s6) + 0x31C))) + 0x11A)) = 0U;
                                    }
                                    var_s1_2 += 1;
                                    var_s0_3 = (char *)(var_s0_3) + 4;
                                } while (var_s1_2 != temp_v0_5);
                            }
                        }
                    }
                    if (var_s2 != 0x55) {
                        temp_v0_8 = (*(s32 *)((char *)(D_800D23B0) + 0x10));
                        if (temp_v0_8 < 0x19) {
                            var_s0_4 = (temp_v0_8 * 0x32C) + &gObjects;
loop_92:
                            if (((*(s32 *)((char *)(var_s0_4) + 0x0)) != 0) && ((sp110 + 1) == (*(s32 *)((char *)(var_s0_4) + 0x65))) && ((*(s32 *)((char *)(var_s0_4) + 0x4)) == 0x6E)) {
                                func_151027E8(var_s0_4);
                                func_15060F28(var_s0_4, 0);
                            } else {
                                var_s0_4 = (char *)(var_s0_4) + 0x32C;
                                if ((u32) var_s0_4 < (u32) &D_800D121C) {
                                    goto loop_92;
                                }
                            }
                        }
                    }
                }
                var_a1 = (*(s32 *)((char *)(temp_v0_4) + 0x10));
            }
            temp_v1 = sp110 + 1;
            var_s6 = (char *)(var_s6) + 0x32C;
            sp110 = temp_v1;
        } while (temp_v1 < var_a1);
        sp110 = 0;
    }
    var_s4 = 0;
    temp_t4 = D_80087340 + 1;
    D_80087340 = temp_t4;
    if (temp_t4 >= var_a1) {
        D_80087340 = 0;
    }
    var_s7 = spD4;
    if ((*(s32 *)((char *)(temp_v0) + 0xEA4)) > 0) {
        temp_f20 = D_8009DA90;
        do {
            temp_v0_9 = func_151149AC((*(s32 *)((char *)(var_s7) + 0x3)));
            if (temp_v0_9 == NULL) {

            } else {
                temp_s2 = (char *)(spB4) + var_s4;
                temp_v1_5 = *temp_s2;
                temp_s0 = (char *)(spC8) + var_s4;
                if (temp_v1_5 != 0) {
                    temp_t1 = temp_v1_5 - D_800BE9E4;
                    *temp_s2 = temp_t1;
                    if (temp_t1 <= 0) {
                        *temp_s0 = 4;
                        *temp_s2 = 0;
                    }
                }
                temp_v1_6 = *temp_s0;
                if (temp_v1_6 > 0) {
                    temp_t5 = temp_v1_6 - D_800BE9E4;
                    *temp_s0 = temp_t5;
                    if (temp_t5 <= 0) {
                        *temp_s0 = 0;
                        (*(s32 *)((char *)(temp_v0_9) + 0x6E)) = 0;
                        if (*temp_s2 != 0) {
                            (*(s16 *)((char *)(temp_v0_9) + 0x10)) = (s16) *((char *)(spB0) + var_s4);
                            (*(s16 *)((char *)(temp_v0_9) + 0x12)) = (s16) *((char *)(spAC) + var_s4);
                            (*(s16 *)((char *)(temp_v0_9) + 0x14)) = (s16) *((char *)(spA8) + var_s4);
                        } else {
                            temp_v0_10 = *((char *)(spBC) + var_s4);
                            if (!(temp_v0_10 & 4)) {
                                if (temp_v0_10 & 1) {
                                    spF0 = (f32) (*(f32 *)((char *)(D_800D23B0) + 0xEA8));
                                    do {
                                        var_s0_5 = 0;
                                        temp_v0_11 = (*(s32 *)((char *)(D_800D23B0) + 0xEA8));
                                        var_v1 = (s32) (random_float() * temp_f20 * spF0);
                                        if (temp_v0_11 > 0) {
                                            do {
                                                if (var_v1 == *((char *)(temp_s3) + (var_s0_5 * 4))) {
                                                    var_v1 = -1;
                                                    var_s0_5 = 0x3E8;
                                                }
                                                var_s0_5 += 1;
                                            } while (var_s0_5 < temp_v0_11);
                                        }
                                    } while (var_v1 == -1);
                                } else {
                                    var_v1 = *((char *)(spB8) + var_s4);
                                }
                                *((char *)(temp_s3) + var_s4) = var_v1;
                                temp_v0_12 = func_15086D48((*(s32 *)((char *)(((char *)(D_800D23B0) + (var_v1 * 4))) + 0x14F4)));
                                if (temp_v0_12 != -1) {
                                    func_15086CBC(temp_v0_12, &spF0, &spEC, &spE8);
                                    (*(s16 *)((char *)(temp_v0_9) + 0x10)) = (s16) (s32) spF0;
                                    (*(s16 *)((char *)(temp_v0_9) + 0x12)) = (s16) ((s32) spEC + 0x3C);
                                    (*(s16 *)((char *)(temp_v0_9) + 0x14)) = (s16) (s32) spE8;
                                }
                            }
                        }
                    }
                } else if (temp_v1_6 == 0) {
                    temp_s1 = (*(s32 *)((char *)(temp_v0_9) + 0x80)) - 1;
                    if (temp_s1 != -1) {
                        (*(s32 *)((char *)(temp_v0_9) + 0x80)) = 0;
                        temp_s6 = (char *)(spC0) + var_s4;
                        if (*temp_s6 == 0x8AE) {
                            temp_v1_7 = &gObjects + (temp_s1 * 0x32C);
                            temp_v0_13 = (*(s32 *)((char *)(temp_v1_7) + 0x31C));
                            (*(u8 *)((char *)(temp_v0_13) + 0x19A)) = (u8) ((*(u8 *)((char *)(temp_v0_13) + 0x19A)) + 3);
                            temp_v0_14 = (*(s32 *)((char *)(temp_v1_7) + 0x31C));
                            if ((s32) (*(s32 *)((char *)(temp_v0_14) + 0x19A)) >= 7) {
                                (*(s32 *)((char *)(temp_v0_14) + 0x19A)) = 6U;
                            }
                            *temp_s0 = (*(s32 *)((char *)(D_800D23B0) + 0xEAC));
                        } else {
                            func_1508DAEC(temp_s1, 0);
                            temp_v0_15 = temp_s1 * 4;
                            if (*((char *)(spBC) + var_s4) & 2) {
                                *temp_s0 = (*(s32 *)((char *)(D_800D23B0) + 0xEAC));
                            } else {
                                *temp_s0 = -1;
                                *((char *)(spD0) + var_s4) = temp_s1 | 0x2000;
                                *((char *)(temp_s3) + var_s4) = -1;
                            }
                            *temp_s2 = 0;
                            *((char *)(spD8) + temp_v0_15) = sp110;
                            (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_v0_15)) + 0x5C)) = 1;
                        }
                        var_a0 = (*(s32 *)((char *)(D_800D23B0) + 0x16BC));
                        if (var_a0 == 0xB9) {
                            (*(s32 *)((char *)((*(s32 *)((char *)((&gObjects + (temp_s1 * 0x32C))) + 0x31C))) + 0x12C)) = 0x258;
                            var_a0 = (*(s32 *)((char *)(D_800D23B0) + 0x16BC));
                        }
                        if (var_a0 == 0xB8) {
                            temp_v0_16 = (*(s32 *)((char *)((&gObjects + (temp_s1 * 0x32C))) + 0x31C));
                            temp_v1_8 = *temp_s6;
                            if (temp_v1_8 == (*(s32 *)((char *)(temp_v0_16) + 0x128))) {
                                if (temp_v1_8 == 1) {
                                    (*(s32 *)((char *)(temp_v0_16) + 0x12C)) = 0x258;
                                } else if (temp_v1_8 == 0x80) {
                                    (*(s32 *)((char *)(temp_v0_16) + 0x12C)) = 0x708;
                                } else if (temp_v1_8 == 0x10) {
                                    (*(s32 *)((char *)(temp_v0_16) + 0x12C)) = 3;
                                }
                            }
                        }
                    }
                }
            }
            var_s4 += 4;
            var_s7 = (char *)(var_s7) + 4;
            temp_v1_4 = sp110 + 1;
            sp110 = temp_v1_4;
        } while (temp_v1_4 < (*(s32 *)((char *)(D_800D23B0) + 0xEA4)));
    }
}

void func_1508E6C8(void) {

}

/*
Decompilation failure in function func_1508E6D0:

Found jr instruction at B3020.s line 9919, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function func_1508E780:

Found jr instruction at B3020.s line 9987, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s32 func_1508E89C( s32 arg0, s32 arg1) {
    s32 unksp1E;
    s32 sp48;
    u8 sp3F;
    void *sp2C;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 temp_a0;
    s32 temp_a2_2;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u16 temp_a2;
    u16 temp_t7;
    u8 temp_v0;
    void *temp_a0_2;
    void *temp_a1;

    if ((s32) *(&D_800D18A4 + arg0) >= 0x33) {
        temp_a2 = D_800D18A2;
        temp_v1 = 1 << arg0;
        if (!(temp_a2 & temp_v1)) {
            temp_t0 = ~temp_v1;
            temp_t7 = D_800D18A0 & temp_t0;
            temp_t1 = 1 << arg1;
            D_800D18A0 = temp_t7;
            D_800D18A2 = temp_a2 | temp_v1;
            D_800D18A0 = temp_t7 | temp_t1;
            sp20 = temp_t1;
            sp24 = temp_t0;
            sp1C = (s32) (s16) arg1;
            func_15085710((s16) (s32) arg0, 2, func_150859AC((s16) arg1, 3), (s32) arg0);
            func_15085710(unksp1E, 2, 0);
            temp_v1_2 = (*(s32 *)((char *)(D_800D23B0) + 0x18));
            if (temp_v1_2 != 0) {
                (*(s32 *)((char *)(D_800D23B0) + 0x18)) = (s32) (temp_v1_2 & sp24);
                (*(s32 *)((char *)(D_800D23B0) + 0x18)) = (s32) ((*(s32 *)((char *)(D_800D23B0) + 0x18)) | sp20);
            }
            temp_v1_3 = (s32) arg0 * 4;
            if (((char *)(D_800D23B0) + 0x9C) != NULL) {
                (*(s32 *)((char *)(((char *)(D_800D23B0) + ((s32) arg0 * 4))) + 0x9C)) = (s32) (*(s32 *)((char *)(((char *)(D_800D23B0) + (arg1 * 4))) + 0x9C));
            }
            temp_a2_2 = arg1 * 4;
            if (((char *)(D_800D23B0) + 0x39C) != NULL) {
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_v1_3)) + 0x39C)) = (s32) (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a2_2)) + 0x39C));
            }
            if (((char *)(D_800D23B0) + 0x3DC) != NULL) {
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_v1_3)) + 0x3DC)) = (s32) (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a2_2)) + 0x3DC));
            }
            if (((char *)(D_800D23B0) + 0xEB0) != NULL) {
                (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_v1_3)) + 0xEB0)) = (s32) (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a2_2)) + 0xEB0));
                temp_a0 = (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_v1_3)) + 0xEB0));
                if (temp_a0 >= 0) {
                    (*(s32 *)((char *)(((char *)(D_800D23B0) + (temp_a0 * 4))) + 0xF70)) = (s32) arg0;
                }
            }
            (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_v1_3)) + 0x16C0)) = (s32) (*(s32 *)((char *)(((char *)(D_800D23B0) + temp_a2_2)) + 0x16C0));
            temp_a1 = &gObjects + ((s32) arg0 * 0x32C);
            sp2C = temp_a1;
            sp48 = (s32) (*(s32 *)((char *)((*(s32 *)((char *)(temp_a1) + 0x31C))) + 0x1AA));
            func_15062800(&gObjects + (arg1 * 0x32C), temp_a1, temp_a2_2, (s32) arg0);
            if (D_800BE9F0 == 0x3F) {
                temp_v0 = (*(s32 *)((char *)(temp_a1) + 0x13C));
                if ((s32) temp_v0 >= 0x64) {
                    sp3F = temp_v0 - 0x64;
                    sp2C = temp_a1;
                    temp_v0_2 = func_1509B570(D_800D2E48, temp_a1);
                    if (temp_v0_2 != 0) {
                        temp_lo = (s32) ((char *)(temp_a1) - (char *)(&gObjects)) / 812;
                        temp_a0_2 = temp_v0_2 + (((*(s32 *)((char *)((&gObjects + (sp3F * 0x32C))) + 0x3B)) - 0x14) * 4);
                        (*(s32 *)((char *)(temp_a0_2) + 0x24B8)) = (s32) (temp_lo | 0x2000);
                        (*(s32 *)((char *)(temp_a0_2) + 0x24DC)) = temp_lo;
                    }
                }
            }
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_a1) + 0x31C))) + 0x84)) = 0;
            (*(s32 *)((char *)(temp_a1) + 0x125)) = 0x5A;
            (*(s16 *)((char *)((*(s16 *)((char *)(temp_a1) + 0x31C))) + 0x1AA)) = (s16) sp48;
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_a1) + 0x31C))) + 0x1AF)) = 0x40;
            func_15128774((*(s32 *)((char *)(temp_a1) + 0x318)), temp_a1);
            D_8008FD94 += 1;
        }
    }
    return 0;
}

s32 func_1508EB90(s32 arg0, void * arg1, s32 arg2) {
    func_1509BFB0(1, *(&D_800CC40F + (arg0 * 0x32C)) | 0x2000, arg1, arg2);
    return 0;
}

void func_1508EBF8(s32 arg0, s32 arg1) {
    func_1509BFB0(1, *(&D_800CC40F + (arg0 * 0x32C)) | 0x2000, 0x14, arg1);
}

void func_1508EC5C(s32 arg0, s32 arg1) {
    func_1509BFB0(1, *(&D_800CC40F + (arg0 * 0x32C)) | 0x2000, 0x61, arg1);
}

s32 func_1508ECC0(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_a1;
    u16 temp_t1;
    u32 var_a2;
    u32 var_v0;
    u32 var_v0_2;
    void *temp_t2;
    void *var_a0;
    void *var_t0;
    void *var_t3;

    var_v0 = 0;
    if (D_80087380 != 0) {
        var_t0 = D_800D23C0;
loop_2:
        temp_t1 = (*(s32 *)((char *)(var_t0) + 0x2));
        var_a2 = 0;
        if (temp_t1 != 0) {
            temp_t2 = D_800D23C0 + (var_v0 * 0x18);
            var_t3 = temp_t2;
loop_4:
            if (((((arg0 & 0xFFFF) << 0xC) + (arg1 & 0xFFFF)) & 0xFFFF) == (*(s32 *)((char *)(var_t3) + 0x8))) {
                var_v0_2 = 0;
                if (temp_t1 != 0) {
                    var_a0 = temp_t2;
loop_7:
                    temp_a1 = (*(s32 *)((char *)(var_a0) + 0x8));
                    if (((arg2 & 0xFFFF) == ((s32) temp_a1 >> 0xC)) && (var_v0_2 != var_a2)) {
                        return temp_a1 & 0xFFF;
                    }
                    var_v0_2 += 1;
                    var_a0 = (char *)(var_a0) + 2;
                    if (var_v0_2 >= temp_t1) {
                        goto block_11;
                    }
                    goto loop_7;
                }
block_11:
                goto block_14;
            }
            var_a2 += 1;
            var_t3 = (char *)(var_t3) + 2;
            if (var_a2 >= temp_t1) {
                goto block_13;
            }
            goto loop_4;
        }
block_13:
        var_v0 += 1;
        var_t0 = (char *)(var_t0) + 0x18;
        if (var_v0 >= (u32) D_80087380) {
            goto block_14;
        }
        goto loop_2;
    }
block_14:
    return -1;
}

void func_1508EDBC(u32 arg0) {
    s32 temp_v0;

    if (arg0 < (u32) D_80087380) {
        temp_v0 = arg0 * 0x18;
        (*(s32 *)((char *)((D_800D23C0 + temp_v0)) + 0x2)) = 0;
        (*(s32 *)((char *)((D_800D23C0 + temp_v0)) + 0x4)) = 0;
        (*(s32 *)((char *)(D_800D23C0) + temp_v0)) = 0;
    }
}

void func_1508EE0C(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s3;
    u16 temp_v0;
    u16 var_a0;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s2;
    void *temp_a2;
    void *var_a1;
    void *var_v0;

    var_s2 = 0;
    if (D_80087380 != 0) {
        temp_a2 = D_800D23C0;
        var_s3 = 0;
        var_a1 = temp_a2;
loop_2:
        var_a0 = (*(s32 *)((char *)(var_a1) + 0x2));
        var_s0 = 0;
        if (var_a0 != 0) {
            var_v0 = (char *)(temp_a2) + (var_s2 * 0x18);
loop_4:
            var_s0 += 1;
            if (((((arg0 & 0xFFFF) << 0xC) + (arg1 & 0xFFFF)) & 0xFFFF) == (*(s32 *)((char *)(var_v0) + 0x8))) {
                var_s0_2 = 0;
                if (var_a0 != 0) {
                    var_s1 = 0;
                    do {
                        temp_v0 = (*(s32 *)((char *)(((char *)(temp_a2) + (var_s2 * 0x18) + var_s1)) + 0x8));
                        temp_v1 = (s32) temp_v0 >> 0xC;
                        temp_a1 = temp_v0 & 0xFFF;
                        switch (temp_v1) {          /* irregular */
                        case 2:
                            func_15114B94(temp_a1, temp_a1, temp_a2);
                            var_a0 = (*(s32 *)((char *)((D_800D23C0 + var_s3)) + 0x2));
                            break;
                        case 3:
                            func_1503DDD0(temp_a1, temp_a1, temp_a2);
                            var_a0 = (*(s32 *)((char *)((D_800D23C0 + var_s3)) + 0x2));
                            break;
                        }
                        var_s0_2 += 1;
                        var_s1 += 2;
                    } while (var_s0_2 < var_a0);
                }
                func_1508EDBC(var_s2);
                return;
            }
            var_v0 = (char *)(var_v0) + 2;
            if (var_s0 >= var_a0) {
                goto block_15;
            }
            goto loop_4;
        }
block_15:
        var_s2 += 1;
        var_s3 += 0x18;
        var_a1 = (char *)(var_a1) + 0x18;
        if (var_s2 >= (u32) D_80087380) {

        } else {
            goto loop_2;
        }
    }
}
