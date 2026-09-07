/**
 * Auto-decompiled from asm/18A8F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * *allocate_memory();                   /* extern */
void * func_10004074();                          /* extern */
void * func_1505D024();             /* extern */
void * func_1507CD64();                         /* extern */
s32 func_150A1DA0();                  /* extern */
void * func_150A7960(); /* extern */
s32 func_150AD960();              /* extern */
void *func_15105C24();                             /* extern */
void * func_15136C3C(); /* extern */
void * *func_1515D5F8(); /* static */
void func_1515E278();
void func_1515E43C();
void *func_1515EB84(); /* static */
void func_1515EC78(f32 arg0, f32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_1515EF74();               /* static */
f32 func_1515F008();              /* static */
void func_1515F040(f32 arg0, s32 arg1);
void func_1515F0AC(f32 arg0, s32 arg1);
extern s32 D_8008B090;
extern s32 D_8008B0C0;
extern f32 D_800A6520;
extern f32 D_800A6524;
extern f32 D_800A6530;
extern f32 D_800A6534;
extern s32 D_800D9C10;
extern u8 D_800D9E21;
extern void *D_800D9E28;
extern s32 D_800DCD10;
extern s32 D_800DCD23;
extern u8 D_800DCD27;

void * *func_1515D440(void) {
    void * *sp1C;
    void * *temp_v0;

    temp_v0 = allocate_memory(0x10, 1, 2, 0);
    sp1C = temp_v0;
    bzero(temp_v0, 0x10);
    return temp_v0;
}

void * *func_1515D480(s32 arg0) {
    void * *sp1C;
    s32 sp18;
    void * *temp_v0;
    s32 temp_a0;

    temp_a0 = arg0 * 0x60;
    sp18 = temp_a0;
    temp_v0 = allocate_memory(temp_a0, 1, 2, 0);
    sp1C = temp_v0;
    bzero(temp_v0, sp18);
    return temp_v0;
}

void func_1515D4D4( s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t6;

    temp_t6 = arg3 & 0xFF;
    if (temp_t6 >= (s32) D_800DCD27) {
        D_800DCD20->unk0 = arg0;
        D_800DCD20->unk1 = arg1;
        D_800DCD20->unk2 = arg2;
        D_800DCD7C = 1;
        D_800DCD27 = (u8) temp_t6;
    }
}

void * *func_1515D520(void) {
    void * *sp1C;
    void * *temp_v0;
    void * *var_a0;
    void * *var_v0;
    void * *var_v1;

    temp_v0 = allocate_memory(0x34, 1, 2, 2);
    var_a0 = temp_v0;
    if (temp_v0 != NULL) {
        sp1C = temp_v0;
        bzero(var_a0, 0x34);
        var_a0 = sp1C;
        if (D_800DCD78 != NULL) {
            var_v0 = (*(s32 *)((D_800DCD78)));
            var_v1 = D_800DCD78;
            if (var_v0 != NULL) {
                do {
                    var_v1 = var_v0;
                    var_v0 = *var_v0;
                } while (var_v0 != NULL);
            }
            *var_v1 = var_a0;
        } else {
            D_800DCD78 = var_a0;
        }
        *var_a0 = NULL;
    }
    return var_a0;
}

void func_1515D5AC(s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    func_1515D5F8(arg4, arg5, arg6, arg7, arg8, (s32) arg9);
}

void * *func_1515D5F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    void * *temp_v0;

    temp_v0 = func_1515D520();
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
        (*(s8 *)((char *)(temp_v0) + 0x5)) = (s8) arg4;
        (*(s8 *)((char *)(temp_v0) + 0x6)) = (s8) arg5;
        (*(s8 *)((char *)(temp_v0) + 0x7)) = (s8) arg6;
        (*(s8 *)((char *)(temp_v0) + 0x8)) = (s8) arg7;
        (*(s8 *)((char *)(temp_v0) + 0x9)) = (s8) arg8;
        (*(s32 *)((char *)(temp_v0) + 0xA)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0xB)) = arg9;
        (*(s16 *)((char *)(temp_v0) + 0xE)) = (s16) arg0;
        (*(s16 *)((char *)(temp_v0) + 0x10)) = (s16) arg1;
        (*(s16 *)((char *)(temp_v0) + 0x12)) = (s16) arg2;
        (*(s32 *)((char *)(temp_v0) + 0x2C)) = 0x7F;
        (*(s32 *)((char *)(temp_v0) + 0x2D)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x2E)) = 0;
        (*(s8 *)((char *)(temp_v0) + 0x2F)) = (s8) arg3;
    }
    return temp_v0;
}

void func_1515D69C(void) {
    void * *var_v0;

    var_v0 = D_800DCD78;
    if (var_v0 != NULL) {
        do {
            (*(s32 *)((char *)(var_v0) + 0xC)) = 0;
            (*(s32 *)((char *)(var_v0) + 0x30)) = 0;
            var_v0 = (*(s32 *)((char *)(var_v0) + 0x0));
        } while (var_v0 != NULL);
    }
}

void func_1515D6C8(void) {

}

void *func_1515D6D0(void *arg0, s32 arg1) {
    void *temp_a2;
    void *temp_a2_10;
    void *temp_a2_11;
    void *temp_a2_12;
    void *temp_a2_13;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a2_7;
    void *temp_a2_8;
    void *temp_a2_9;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB020000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a2_2 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(temp_a2_2) + 0x4)) = 0x20000;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xD9FFFFFF;
    temp_a2_3 = (char *)(temp_a2_2) + 8;
    arg0 = temp_a2_3;
    func_1515EF74(D_800BE628 + (arg1 * 0x180) + (D_800BE9C0 << 6) + 0x100, temp_a2_3);
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB100000;
    temp_a2_4 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) ((((s32) (*(s32 *)((char *)&(D_800DCD10) + 0x4)) >> 0x10) & 0xFFFF) | (((s32) (*(s32 *)((char *)&(D_800DCD10) + 0x0)) >> 0x10) << 0x10));
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDB100008;
    temp_a2_5 = (char *)(temp_a2_4) + 8;
    (*(s32 *)((char *)(temp_a2_4) + 0x4)) = (s32) ((((s32) (*(s32 *)((char *)&(D_800DCD10) + 0x4)) >> 0x10) & 0xFFFF) | (((s32) (*(s32 *)((char *)&(D_800DCD10) + 0x0)) >> 0x10) << 0x10));
    (*(s32 *)((char *)(temp_a2_4) + 0x8)) = 0xDB100004;
    temp_a2_6 = (char *)(temp_a2_5) + 8;
    (*(s32 *)((char *)(temp_a2_5) + 0x4)) = (s32) (((s32) (*(s32 *)((char *)&(D_800DCD10) + 0x8)) >> 0x10) << 0x10);
    (*(s32 *)((char *)(temp_a2_5) + 0x8)) = 0xDB10000C;
    temp_a2_7 = (char *)(temp_a2_6) + 8;
    (*(s32 *)((char *)(temp_a2_6) + 0x4)) = (s32) (((s32) (*(s32 *)((char *)&(D_800DCD10) + 0x8)) >> 0x10) << 0x10);
    (*(s32 *)((char *)(temp_a2_6) + 0x8)) = 0xDB100010;
    temp_a2_8 = (char *)(temp_a2_7) + 8;
    (*(s32 *)((char *)(temp_a2_7) + 0x4)) = (s32) (((*(s32 *)((char *)&(D_800DCD10) + 0x4)) & 0xFFFF) | ((*(s32 *)((char *)&(D_800DCD10) + 0x0)) << 0x10));
    (*(s32 *)((char *)(temp_a2_7) + 0x8)) = 0xDB100018;
    temp_a2_9 = (char *)(temp_a2_8) + 8;
    (*(s32 *)((char *)(temp_a2_8) + 0x4)) = (s32) (((*(s32 *)((char *)&(D_800DCD10) + 0x4)) & 0xFFFF) | ((*(s32 *)((char *)&(D_800DCD10) + 0x0)) << 0x10));
    (*(s32 *)((char *)(temp_a2_8) + 0x8)) = 0xDB100014;
    temp_a2_10 = (char *)(temp_a2_9) + 8;
    (*(s32 *)((char *)(temp_a2_9) + 0x4)) = (s32) ((*(s32 *)((char *)&(D_800DCD10) + 0x8)) << 0x10);
    (*(s32 *)((char *)(temp_a2_9) + 0x8)) = 0xDB10001C;
    temp_a2_11 = (char *)(temp_a2_10) + 8;
    (*(s32 *)((char *)(temp_a2_10) + 0x4)) = (s32) ((*(s32 *)((char *)&(D_800DCD10) + 0x8)) << 0x10);
    (*(s32 *)((char *)(temp_a2_10) + 0x8)) = 0xDB100020;
    temp_a2_12 = (char *)(temp_a2_11) + 8;
    (*(s32 *)((char *)(temp_a2_11) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a2_11) + 0x8)) = 0xDB100024;
    temp_a2_13 = (char *)(temp_a2_12) + 8;
    (*(s32 *)((char *)(temp_a2_12) + 0x4)) = (s32) ((*(s32 *)((char *)&(D_800DCD10) + 0xC)) << 0x10);
    (*(s32 *)((char *)(temp_a2_12) + 0x8)) = 0xDB100028;
    temp_a2 = (char *)(temp_a2_13) + 8;
    (*(s32 *)((char *)(temp_a2_13) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a2_13) + 0x8)) = 0xDB10002C;
    (*(s32 *)((char *)(temp_a2) + 0x4)) = (s32) ((*(s32 *)((char *)&(D_800DCD10) + 0xC)) << 0x10);
    return (char *)(temp_a2) + 8;
}

void *func_1515D914(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, s32 arg6, s32 arg7, void *arg8, s8 *arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13) {
    void *sp;
    s32 spB8[64];
    void *spE4[64];
    s32 sp134;
    s32 sp12C;
    s32 sp128;
    s16 sp120;
    s16 sp11E;
    s16 sp11C;
    u8 sp118;
    u8 sp114;
    s32 spB4;
    u8 spB0;
    void * spAF;
    void * spAC;
    u8 spAB;
    u8 spAA;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    void *sp78;
    s32 sp58;
    s32 sp54;                                       /* compiler-managed */
    s32 sp50;
    u32 sp4C;
    void * *var_a2;
    void * *var_s0;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_t8_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t8;
    s32 temp_t8_4;
    s32 temp_t9;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0_3;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t3;
    s32 var_t4;
    s8 temp_t4;
    s8 var_ra;
    u32 var_t2;
    u8 *temp_v0;
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a3;
    u8 *var_t1;
    u8 temp_v0_2;
    u8 temp_v1;
    void **var_v0;
    void **var_v0_2;
    void **var_v1_4;
    void *temp_a0_2;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s3;
    void *temp_t8_3;
    void *temp_v0_3;
    void *temp_v0_7;
    void *var_a2_2;
    void *var_s3;
    void *var_v1;

    f32 sp115;
    f32 sp116;
    func_1515E278(arg2, arg3, arg4, arg10, &sp118, arg5, arg12);
    temp_t8 = arg12 & 2;
    sp54 = temp_t8;
    if (temp_t8 != 0) {
        func_1515E43C(arg2, arg3, arg4, arg10, &spB0, &spAC, &spAB, &spAA);
        var_a0 = &sp118;
        var_a3 = &sp114;
        var_t1 = &spB0;
        var_a2 = &spAC;
        do {
            temp_v1 = *var_a0;
            var_a0 += 1;
            temp_a1 = 0xFF - temp_v1;
            var_a3 += 1;
            var_a2 = (char *)(var_a2) + 1;
            (*(s8 *)((char *)(var_a3) - 0x1)) = (s8) ((s32) (*var_t1 * ((temp_v1 + ((s32) (temp_a1 * spAB) >> 8)) & 0xFF)) >> 8);
            (*(s8 *)((char *)(var_a0) - 0x1)) = (s8) ((s32) ((*(s8 *)((char *)(var_a2) - 0x1)) * ((temp_v1 + ((s32) (temp_a1 * spAA) >> 8)) & 0xFF)) >> 8);
            var_t1 += 1;
        } while ((char *)(var_a2) != (char *)(&spAF));
    }
    var_t0 = 0;
    var_a0_2 = &sp118;
    var_v1 = arg8;
    do {
        if (arg11 != 0) {
            temp_v0 = arg11 + var_t0;
            if (!(arg12 & 8)) {
                *var_a0_2 = (u8) ((s32) ((*temp_v0 * 3) + *var_a0_2) >> 2);
            }
            *temp_v0 = *var_a0_2;
        }
        temp_v0_2 = *var_a0_2;
        var_t0 += 1;
        var_a0_2 += 1;
        var_v1 = (char *)(var_v1) + 1;
        (*(s32 *)((char *)(var_v1) + 0x3)) = temp_v0_2;
        (*(s32 *)((char *)(var_v1) - 0x1)) = temp_v0_2;
    } while (var_t0 < 3);
    var_t0_2 = 0;
    temp_v1_2 = arg7 & 3;
    if (arg7 > 0) {
        if (temp_v1_2 != 0) {
            var_a1 = &(&spB8[0])[0];
            do {
                var_t0_2 += 1;
                *var_a1 = 0x7FFFFFFF;
                var_a1 += 4;
            } while (temp_v1_2 != var_t0_2);
            if (var_t0_2 != arg7) {
                goto block_14;
            }
        } else {
block_14:
            var_a1_2 = &(&spB8[0])[var_t0_2];
            do {
                var_a1_2 += 0x10;
                (*(s32 *)((char *)(var_a1_2) - 0xC)) = 0x7FFFFFFF;
                (*(s32 *)((char *)(var_a1_2) - 0x8)) = 0x7FFFFFFF;
                (*(s32 *)((char *)(var_a1_2) - 0x4)) = 0x7FFFFFFF;
                (*(s32 *)((char *)(var_a1_2) - 0x10)) = 0x7FFFFFFF;
            } while (var_a1_2 != &(&spB8[0])[arg7]);
        }
    }
    if (!(arg12 & 1)) {
        sp11C = (s16) arg2;
        sp11E = (s16) arg3;
        sp120 = (s16) arg4;
    } else {
        temp_v0_3 = D_800DBFF0 + (arg1 * 0x9A0);
        sp98 = (*(s32 *)((char *)(temp_v0_3) + 0x2BC)) - (*(s32 *)((char *)(temp_v0_3) + 0x2F8));
        temp_f18 = (*(s32 *)((char *)(temp_v0_3) + 0x2C0)) - (*(s32 *)((char *)(temp_v0_3) + 0x2FC));
        sp9C = temp_f18;
        temp_f8 = (*(s32 *)((char *)(temp_v0_3) + 0x2C4)) - (*(s32 *)((char *)(temp_v0_3) + 0x300));
        spA0 = temp_f8;
        temp_f0 = sqrtf((temp_f8 * temp_f8) + ((sp98 * sp98) + (temp_f18 * temp_f18)));
        if (temp_f0 != 0.0f) {
            temp_f2 = 1000.0f / temp_f0;
            sp11C = (s16) (s32) ((sp98 * temp_f2) + (f32) arg2);
            sp11E = (s16) (s32) ((temp_f18 * temp_f2) + (f32) arg3);
            sp120 = (s16) (s32) ((temp_f8 * temp_f2) + (f32) arg4);
        } else {
            sp11C = (s16) arg2;
            sp11E = (s16) arg3;
            sp120 = (s16) arg4;
        }
    }
    var_s0 = D_800DCD78;
    var_ra = 0;
    if (var_s0 != NULL) {
        sp58 = 1 << arg1;
        var_t3 = spB4;
        do {
            if ((((*(s32 *)((char *)(var_s0) + 0xC)) & sp58) || (arg12 & 0x20) || !((*(s32 *)((char *)(var_s0) + 0x8)) & 1)) && ((*(s32 *)((char *)(var_s0) + 0x8)) & arg10) && ((*(s32 *)((char *)(var_s0) + 0x9)) == 0) && !((*(s32 *)((char *)(var_s0) + 0xA)) & sp58)) {
                var_t0_3 = 0;
                temp_a2 = arg7 - 1;
                if ((*(s32 *)((char *)(var_s0) + 0x4)) == 0) {
                    temp_t8_2 = (*(s32 *)((char *)(var_s0) + 0xE));
                    sp8C = (s32) temp_t8_2;
                    if (temp_t8_2 != -0x8000) {
                        sp90 = (s32) (*(s32 *)((char *)(var_s0) + 0x10));
                        sp94 = (s32) (*(s32 *)((char *)(var_s0) + 0x12));
                    } else {
                        temp_v0_4 = ((*(s32 *)((char *)(var_s0) + 0x12)) & 0xFFFF) | ((*(s32 *)((char *)(var_s0) + 0x10)) << 0x10);
                        sp8C = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x0));
                        sp90 = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x4));
                        sp94 = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x8));
                    }
                    temp_v0_5 = sp120 - sp94;
                    temp_v1_3 = sp11C - sp8C;
                    temp_a0 = sp11E - sp90;
                    var_t3 = (temp_v0_5 * temp_v0_5) + (temp_v1_3 * temp_v1_3) + (temp_a0 * temp_a0);
                    if (!(arg12 & 4) && (((*(s32 *)((char *)(var_s0) + 0x2F)) << 0x11) < var_t3)) {
                        var_t3 = 0x7FFFFFFF;
                    }
                }
                var_t1_2 = 0;
                if (temp_a2 > 0) {
                    var_a1_3 = &spB8[0];
loop_38:
                    temp_v0_6 = arg7 - 2;
                    if (var_t3 < *var_a1_3) {
                        var_a0_3 = temp_v0_6;
                        temp_t4 = var_ra + 1;
                        if (var_t0_3 < temp_v0_6) {
                            temp_t2 = -((temp_v0_6 - var_t0_3) & 3);
                            if (temp_t2 != 0) {
                                var_v0 = &(&spE4[0])[temp_v0_6];
                                var_v1_2 = &(&spB8[0])[temp_v0_6];
                                do {
                                    temp_t6 = (*(s32 *)((char *)(var_v1_2) - 0x4));
                                    temp_t7 = (*(s32 *)((char *)(var_v0) - 0x4));
                                    var_a0_3 -= 1;
                                    var_v1_2 -= 4;
                                    var_v0 = (char *)(var_v0) - 4;
                                    (*(s32 *)((char *)(var_v1_2) + 0x4)) = temp_t6;
                                    (*(s32 *)((char *)(var_v0) + 0x4)) = temp_t7;
                                } while ((temp_t2 + temp_v0_6) != var_a0_3);
                                if (var_t0_3 != var_a0_3) {
                                    goto block_44;
                                }
                            } else {
block_44:
                                var_v1_3 = &(&spB8[0])[var_a0_3];
                                var_v0_2 = &(&spE4[0])[var_a0_3];
                                do {
                                    temp_t7_2 = (*(s32 *)((char *)(var_v1_3) - 0x4));
                                    temp_t8_3 = (*(s32 *)((char *)(var_v0_2) - 0x4));
                                    (*(s32 *)((char *)(var_v1_3) - 0x4)) = (s32) (*(s32 *)((char *)(var_v1_3) - 0x8));
                                    (*(s32 *)((char *)(var_v0_2) - 0x4)) = (void *) (*(s32 *)((char *)(var_v0_2) - 0x8));
                                    (*(s32 *)((char *)(var_v1_3) + 0x0)) = temp_t7_2;
                                    (*(s32 *)((char *)(var_v0_2) + 0x0)) = temp_t8_3;
                                    temp_t8_4 = (*(s32 *)((char *)(var_v0_2) - 0xC));
                                    temp_t7_3 = (*(s32 *)((char *)(var_v1_3) - 0xC));
                                    temp_t9 = (*(s32 *)((char *)(var_v0_2) - 0x10));
                                    temp_t6_2 = (*(s32 *)((char *)(var_v1_3) - 0x10));
                                    var_v0_2 = (char *)(var_v0_2) - 0x10;
                                    var_v1_3 -= 0x10;
                                    (*(s32 *)((char *)(var_v0_2) + 0x8)) = temp_t8_4;
                                    (*(s32 *)((char *)(var_v1_3) + 0x8)) = temp_t7_3;
                                    (*(s32 *)((char *)(var_v0_2) + 0x4)) = temp_t9;
                                    (*(s32 *)((char *)(var_v1_3) + 0x4)) = temp_t6_2;
                                } while (&(&spE4[0])[var_t0_3] != var_v0_2);
                            }
                        }
                        *var_a1_3 = var_t3;
                        (*(s32 *)((char *)(((char *)(sp) + var_t1_2)) + 0xE4)) = var_s0;
                        if (arg7 != temp_t4) {
                            var_ra = temp_t4;
                        }
                    } else {
                        var_t0_3 += 1;
                        var_t1_2 += 4;
                        var_a1_3 += 4;
                        if (var_t0_3 != temp_a2) {
                            goto loop_38;
                        }
                    }
                }
            }
            var_s0 = (*(s32 *)((char *)(var_s0) + 0x0));
        } while (var_s0 != NULL);
        spB4 = var_t3;
    }
    if (arg7 != 0) {
        if (var_ra & 1) {
            sp128 = 1;
            if (arg13 != 0) {
                (*(s32 *)((char *)(arg13) + (var_ra * 4))) = 0;
            }
        } else {
            sp128 = 0;
        }
        if (arg9 != NULL) {
            if (sp128 != 0) {
                *arg9 = (var_ra + sp128 + 1) | 0x80;
            } else {
                *arg9 = var_ra + sp128 + 1;
            }
        }
        (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB020000;
        var_s3 = (char *)(arg0) + 8;
        (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (((var_ra + sp128) * 0x30) + 0x30);
    } else {
        if (arg9 != NULL) {
            *arg9 = var_ra;
        }
        (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (var_ra * 0x30);
        (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB020000;
        var_s3 = (char *)(arg0) + 8;
    }
    if (arg7 != 0) {
        var_t0_4 = 0;
        var_t1_3 = 0;
        var_t4 = arg12 & 0x20;
        var_t2 = 0x60;
        temp_a2_2 = (((D_800BE9C0 * arg7) + var_ra) * 0x30) + arg6;
        temp_v0_7 = (arg1 * 3) + &D_800DCD30;
        (*(s8 *)((char *)(temp_a2_2) + 0x8)) = (s8) (*(s8 *)((char *)(temp_v0_7) + 0x0));
        (*(s8 *)((char *)(temp_a2_2) + 0x9)) = (s8) (*(s8 *)((char *)(temp_v0_7) + 0x1));
        (*(s8 *)((char *)(temp_a2_2) + 0xA)) = (s8) (*(s8 *)((char *)(temp_v0_7) + 0x2));
        if (sp54 != 0) {
            (*(s32 *)((char *)(temp_a2_2) + 0x4)) = sp114;
            (*(s32 *)((char *)(temp_a2_2) + 0x0)) = sp114;
            (*(s32 *)((char *)(temp_a2_2) + 0x5)) = sp115;
            (*(s32 *)((char *)(temp_a2_2) + 0x1)) = sp115;
            (*(s32 *)((char *)(temp_a2_2) + 0x6)) = sp116;
            (*(s32 *)((char *)(temp_a2_2) + 0x2)) = sp116;
        } else {
            (*(s32 *)((char *)(temp_a2_2) + 0x4)) = 0U;
            (*(s32 *)((char *)(temp_a2_2) + 0x0)) = 0U;
            (*(s32 *)((char *)(temp_a2_2) + 0x5)) = 0U;
            (*(s32 *)((char *)(temp_a2_2) + 0x1)) = 0U;
            (*(s32 *)((char *)(temp_a2_2) + 0x6)) = 0U;
            (*(s32 *)((char *)(temp_a2_2) + 0x2)) = 0U;
        }
        var_a2_2 = (char *)(temp_a2_2) - (var_ra * 0x30);
        if (var_ra > 0) {
            var_v1_4 = &spE4[0];
            do {
                temp_s0 = *var_v1_4;
                if (arg13 != 0) {
                    (*(s32 *)((char *)(arg13) + var_t1_3)) = temp_s0;
                }
                if (var_t4 != 0) {
                    (*(u8 *)((char *)(temp_s0) + 0xC)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0xC)) | (1 << arg1));
                }
                if ((*(s32 *)((char *)(temp_s0) + 0x4)) == 0) {
                    sp12C = (s32) var_ra;
                    sp54 = var_v1_4;
                    sp78 = var_a2_2;
                    sp134 = var_t0_4;
                    sp50 = var_t1_3;
                    sp4C = var_t2;
                    sp58 = var_t4;
                    func_1515EC78((f32)(s32)(temp_s0), arg1, var_a2_2, arg2, arg3, arg4, arg12);
                }
                (*(s32 *)((char *)(var_s3) + 0x0)) = (s32) ((((var_t2 >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA);
                (*(s32 *)((char *)(var_s3) + 0x4)) = var_a2_2;
                var_s3 = (char *)(var_s3) + 8;
                var_t0_4 += 1;
                var_t1_3 += 4;
                var_v1_4 = (char *)(var_v1_4) + 4;
                var_t2 += 0x30;
                var_a2_2 = (char *)(var_a2_2) + 0x30;
            } while (var_t0_4 != var_ra);
        }
        if (sp128 != 0) {
            (*(s32 *)((char *)(var_s3) + 0x0)) = (s32) (((((u32) ((var_t0_4 * 0x30) + 0x60) >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA);
            (*(s32 *)((char *)(var_s3) + 0x4)) = &D_800DCD40;
            var_s3 = (char *)(var_s3) + 8;
        }
        temp_s3 = (char *)(var_s3) + 8;
        temp_v1_4 = var_t0_4 + sp128;
        (*(s32 *)((char *)(var_s3) + 0x0)) = (s32) (((((u32) (((temp_v1_4 + 1) * 0x30) + 0x30) >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA);
        (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) ((((D_800BE9C0 * arg7) + var_t0_4) * 0x30) + arg6);
        temp_a0_2 = temp_s3;
        var_s3 = (char *)(temp_s3) + 8;
        (*(s32 *)((char *)(temp_a0_2) + 0x0)) = (s32) (((((u32) (((temp_v1_4 + 2) * 0x30) + 0x30) >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA);
        (*(s32 *)((char *)(temp_a0_2) + 0x4)) = arg8;
    }
    return var_s3;
}

void func_1515E278(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u32 arg5, s32 arg6) {
    void * sp50;
    u8 sp4C;
    void * sp4B;
    void * sp48;
    u8 sp47;
    u8 sp46;
    void * *var_a1;
    void * *var_a2;
    s32 temp_t8_2;
    s32 var_a3;
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_t0;
    u8 *var_v0;
    u8 temp_t4;
    u8 temp_t8;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_v0;

    temp_v0 = func_1515EB84(arg0, arg1, arg2, arg3, D_800DCD80);
    var_a0 = arg4;
    if (temp_v0 != NULL) {
        (*(u8 *)((char *)(arg4) + 0x0)) = (u8) (*(u8 *)((char *)(temp_v0) + 0x18));
        (*(s8 *)((char *)(arg4) + 0x1)) = (s8) ((u32) (*(s8 *)((char *)(temp_v0) + 0x18)) >> 8);
        (*(s8 *)((char *)(arg4) + 0x2)) = (s8) ((u32) (*(s8 *)((char *)(temp_v0) + 0x18)) >> 0x10);
    } else {
        var_v0 = &D_800DCD20;
        do {
            temp_t8 = *var_v0;
            var_v0 += 1;
            var_a0 += 1;
            (*(s8 *)((char *)(var_a0) - 0x1)) = (s8) ((s32) (temp_t8 * (0x100 - (((arg5 >> 5) & 3) << 6))) >> 8);
        } while ((char *)(var_v0) != (char *)(&D_800DCD23));
    }
    if (arg6 & 0x10) {
        func_1515E43C(arg0, arg1, arg2, arg3, &sp4C, &sp48, &sp47, &sp46);
        var_a0_2 = arg4;
        var_a1 = &sp50;
        var_t0 = &sp4C;
        var_a2 = &sp48;
        do {
            temp_v0_2 = *var_a0_2;
            temp_t4 = *var_t0;
            var_a1 = (char *)(var_a1) + 1;
            var_t0 += 1;
            var_a2 = (char *)(var_a2) + 1;
            (*(u8 *)((char *)(var_a1) - 0x1)) = (u8) ((s32) (temp_t4 * ((temp_v0_2 + ((s32) ((0xFF - temp_v0_2) * sp47) >> 8)) & 0xFF)) >> 8);
            temp_v0_3 = *var_a0_2;
            temp_t8_2 = (s32) ((*(s32 *)((char *)(var_a2) - 0x1)) * ((temp_v0_3 + ((s32) ((0xFF - temp_v0_3) * sp46) >> 8)) & 0xFF)) >> 8;
            *var_a0_2 = (u8) temp_t8_2;
            var_a3 = ((s32) ((*(s32 *)((char *)(var_a1) - 0x1)) * 7) >> 3) + (temp_t8_2 & 0xFF);
            if (var_a3 >= 0x100) {
                var_a3 = 0xFF;
            }
            *var_a0_2 = (u8) var_a3;
            var_a0_2 += 1;
        } while ((char *)(var_a2) != (char *)(&sp4B));
    }
}

void func_1515E43C(s32 arg3, void *arg4, void *arg5, u8 *arg6, u8 *arg7) {
    u32 var_t9;
    void *temp_v0;

    temp_v0 = func_1515EB84(0, D_800DCD84);
    if (temp_v0 != NULL) {
        (*(u8 *)((char *)(arg4) + 0x0)) = (u8) (*(u8 *)((char *)(temp_v0) + 0x18));
        (*(u8 *)((char *)(arg4) + 0x1)) = (u8) ((u32) (*(u8 *)((char *)(temp_v0) + 0x18)) >> 8);
        (*(u8 *)((char *)(arg4) + 0x2)) = (u8) ((u32) (*(u8 *)((char *)(temp_v0) + 0x18)) >> 0x10);
        (*(u8 *)((char *)(arg5) + 0x0)) = (u8) (*(u8 *)((char *)(temp_v0) + 0x1C));
        (*(u8 *)((char *)(arg5) + 0x1)) = (u8) ((u32) (*(u8 *)((char *)(temp_v0) + 0x1C)) >> 8);
        (*(u8 *)((char *)(arg5) + 0x2)) = (u8) ((u32) (*(u8 *)((char *)(temp_v0) + 0x1C)) >> 0x10);
        *arg6 = (u8) ((u32) (*(u8 *)((char *)(temp_v0) + 0x1C)) >> 0x18);
        var_t9 = (u32) (*(u32 *)((char *)(temp_v0) + 0x18)) >> 0x18;
    } else {
        (*(u8 *)((char *)(arg4) + 0x0)) = (u8) (*(u8 *)((char *)&(D_800DCD24) + 0x0));
        (*(u8 *)((char *)(arg4) + 0x1)) = (u8) (*(u8 *)((char *)&(D_800DCD24) + 0x1));
        (*(u8 *)((char *)(arg4) + 0x2)) = (u8) (*(u8 *)((char *)&(D_800DCD24) + 0x2));
        (*(u8 *)((char *)(arg5) + 0x0)) = (u8) (*(u8 *)((char *)&(D_800DCD28) + 0x0));
        (*(u8 *)((char *)(arg5) + 0x1)) = (u8) (*(u8 *)((char *)&(D_800DCD28) + 0x1));
        (*(u8 *)((char *)(arg5) + 0x2)) = (u8) (*(u8 *)((char *)&(D_800DCD28) + 0x2));
        *arg6 = D_800DCD3C;
        var_t9 = (u32) D_800DCD3D;
    }
    *arg7 = (u8) var_t9;
}

void *func_1515E544(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *temp_t3;
    s32 *temp_v0;
    s32 *var_a0;
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_t3_2;
    s32 temp_t3_3;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_t1;
    s32 var_v1;
    u32 temp_t8;
    u32 temp_t9_3;
    u32 var_s1;
    u32 var_s2;
    u32 var_t4;
    u32 var_t4_2;
    u32 var_t5;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    temp_t6 = arg3 & 0xFF;
    temp_t2 = temp_t6 & 0x7F;
    if (temp_t2 != temp_t6) {
        var_t1 = 1;
    } else {
        var_t1 = 0;
    }
    temp_a2 = temp_t2 - var_t1;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB020000;
    var_a0 = (char *)(arg0) + 8;
    temp_t9 = (temp_a2 - 1) & 3;
    temp_t5 = temp_a2 - 1;
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (temp_t2 * 0x30);
    var_v1 = 0;
    if (temp_t5 > 0) {
        if (temp_t9 != 0) {
            var_t4 = (0 * 0x30) + 0x60;
            do {
                temp_t3 = var_a0;
                (*(s32 *)((char *)(temp_t3) + 0x0)) = (((var_t4 >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA;
                var_a0 += 8;
                var_t4 += 0x30;
                temp_t9_2 = (D_800BE9C0 * arg2) + var_v1;
                var_v1 += 1;
                (*(s32 *)((char *)(temp_t3) + 0x4)) = (s32) ((temp_t9_2 * 0x30) + arg1);
            } while (temp_t9 != var_v1);
            if (var_v1 != temp_t5) {
                goto block_8;
            }
        } else {
block_8:
            temp_t3_2 = var_v1 * 0x30;
            var_t4_2 = temp_t3_2 + 0x60;
            var_t5 = temp_t3_2 + 0x90;
            var_s1 = temp_t3_2 + 0xC0;
            var_s2 = temp_t3_2 + 0xF0;
            do {
                (*(s32 *)((char *)(var_a0) + 0x0)) = (((var_t4_2 >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA;
                temp_a0_2 = var_a0 + 8;
                (*(s32 *)((char *)(var_a0) + 0x4)) = (s32) ((((D_800BE9C0 * arg2) + var_v1) * 0x30) + arg1);
                (*(s32 *)((char *)(var_a0) + 0x8)) = (s32) ((((var_t5 >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA);
                temp_a0_3 = (char *)(temp_a0_2) + 8;
                var_t4_2 += 0xC0;
                var_t5 += 0xC0;
                temp_t9_3 = var_s1 >> 3;
                var_s1 += 0xC0;
                (*(s32 *)((char *)(temp_a0_2) + 0x4)) = (s32) ((((D_800BE9C0 * arg2) + var_v1) * 0x30) + arg1 + 0x30);
                (*(s32 *)((char *)(temp_a0_2) + 0x8)) = (s32) (((temp_t9_3 & 0xFF) << 8) | 0xDC280000 | 0xA);
                temp_a0_4 = (char *)(temp_a0_3) + 8;
                temp_t8 = var_s2 >> 3;
                var_s2 += 0xC0;
                (*(s32 *)((char *)(temp_a0_3) + 0x4)) = (s32) ((((D_800BE9C0 * arg2) + var_v1) * 0x30) + arg1 + 0x60);
                (*(s32 *)((char *)(temp_a0_3) + 0x8)) = (s32) (((temp_t8 & 0xFF) << 8) | 0xDC280000 | 0xA);
                var_a0 = (char *)(temp_a0_4) + 8;
                temp_t7 = (D_800BE9C0 * arg2) + var_v1;
                var_v1 += 4;
                (*(s32 *)((char *)(temp_a0_4) + 0x4)) = (s32) ((temp_t7 * 0x30) + arg1 + 0x90);
            } while (var_v1 != ((temp_t2 - var_t1) - 1));
        }
    }
    if (var_t1 != 0) {
        temp_v0 = var_a0;
        var_a0 += 8;
        (*(u32 *)((char *)(temp_v0) + 0x0)) = ((((u32) ((var_v1 * 0x30) + 0x60) >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA;
        (*(s32 *)((char *)(temp_v0) + 0x4)) = &D_800DCD40;
    }
    temp_t3_3 = var_v1 + var_t1;
    temp_a0 = var_a0 + 8;
    (*(u32 *)((char *)(var_a0) + 0x0)) = ((((u32) (((temp_t3_3 + 1) * 0x30) + 0x30) >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA;
    (*(s32 *)((char *)(var_a0) + 0x4)) = (s32) ((((D_800BE9C0 * arg2) + var_v1) * 0x30) + arg1);
    (*(s32 *)((char *)(var_a0) + 0x8)) = (s32) (((((u32) (((temp_t3_3 + 2) * 0x30) + 0x30) >> 3) & 0xFF) << 8) | 0xDC280000 | 0xA);
    (*(s32 *)((char *)(temp_a0) + 0x4)) = arg4;
    return (char *)(temp_a0) + 8;
}

void func_1515E888(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, u32 arg6, s32 arg7) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f6;
    f32 var_f10;
    f32 var_f10_2;
    f32 var_f10_3;
    f32 var_f16;
    f32 var_f4;
    f32 var_f6;
    f32 var_f6_2;
    f32 var_f8;
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 temp_t0;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_t8_2;
    u8 temp_t9;
    void **var_a0;
    void *temp_v0;

    func_1515E278(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    temp_t8 = (*(s32 *)((char *)(arg5) + 0x0));
    var_f6 = (f32) temp_t8;
    if ((s32) temp_t8 < 0) {
        var_f6 += 4294967296.0f;
    }
    sp50 = var_f6;
    temp_t9 = (*(s32 *)((char *)(arg5) + 0x1));
    var_f4 = (f32) temp_t9;
    if ((s32) temp_t9 < 0) {
        var_f4 += 4294967296.0f;
    }
    sp54 = var_f4;
    temp_t0 = (*(s32 *)((char *)(arg5) + 0x2));
    var_f10 = (f32) temp_t0;
    if ((s32) temp_t0 < 0) {
        var_f10 += 4294967296.0f;
    }
    sp58 = var_f10;
    var_v1 = 0;
    temp_a1 = (D_800D9E21 & 0x7F) - 1;
    if (temp_a1 > 0) {
        var_a0 = &D_800D9E28;
        do {
            temp_v0 = *var_a0;
            var_v1 += 1;
            if (temp_v0 != NULL) {
                sp5C = (f32) (*(f32 *)((char *)(temp_v0) + 0xE));
                sp60 = (f32) (*(f32 *)((char *)(temp_v0) + 0x10));
                temp_f6 = (f32) (*(f32 *)((char *)(temp_v0) + 0x12));
                sp64 = temp_f6;
                temp_t5 = (*(s32 *)((char *)(temp_v0) + 0x2F));
                var_f10_2 = (f32) temp_t5;
                if ((s32) temp_t5 < 0) {
                    var_f10_2 += 4294967296.0f;
                }
                temp_f2 = temp_f6 - (f32) arg3;
                temp_f12 = sp5C - (f32) arg1;
                temp_f14 = sp60 - (f32) arg2;
                var_f16 = (var_f10_2 * 2048.0f) / ((temp_f2 * temp_f2) + ((temp_f12 * temp_f12) + (temp_f14 * temp_f14)));
                if (var_f16 > 1.0f) {
                    var_f16 = 1.0f;
                }
                temp_t6 = (*(s32 *)((char *)(temp_v0) + 0x5));
                var_f10_3 = (f32) temp_t6;
                if ((s32) temp_t6 < 0) {
                    var_f10_3 += 4294967296.0f;
                }
                sp50 += var_f16 * var_f10_3;
                temp_t7 = (*(s32 *)((char *)(temp_v0) + 0x6));
                var_f8 = (f32) temp_t7;
                if ((s32) temp_t7 < 0) {
                    var_f8 += 4294967296.0f;
                }
                sp54 += var_f16 * var_f8;
                temp_t8_2 = (*(s32 *)((char *)(temp_v0) + 0x7));
                var_f6_2 = (f32) temp_t8_2;
                if ((s32) temp_t8_2 < 0) {
                    var_f6_2 += 4294967296.0f;
                }
                sp58 += var_f16 * var_f6_2;
            }
            var_a0 = (char *)(var_a0) + 4;
        } while (var_v1 != temp_a1);
    }
    var_v0 = (s32) sp50;
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }
    (*(u8 *)((char *)(arg5) + 0x0)) = (u8) var_v0;
    var_v0_2 = (s32) sp54;
    if (var_v0_2 >= 0x100) {
        var_v0_2 = 0xFF;
    }
    (*(u8 *)((char *)(arg5) + 0x1)) = (u8) var_v0_2;
    var_v0_3 = (s32) sp58;
    if (var_v0_3 >= 0x100) {
        var_v0_3 = 0xFF;
    }
    (*(u8 *)((char *)(arg5) + 0x2)) = (u8) var_v0_3;
}

void *func_1515EB84(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    f32 sp1B4;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void * sp34;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_a1;
    void *var_s0;

    var_s0 = arg4;
    temp_f0 = (f32) arg1;
    temp_f2 = (f32) arg0;
    sp4C = temp_f0;
    sp1B4 = temp_f0;
    sp64 = temp_f0;
    temp_f12 = (f32) arg2;
    sp48 = temp_f2;
    sp60 = temp_f2;
    sp50 = temp_f12;
    sp68 = temp_f12;
    if (var_s0 != NULL) {
loop_1:
        temp_a1 = (*(s32 *)((char *)(var_s0) + 0x4));
        if (((*(u32 *)((char *)(temp_a1) + 0x14)) == 0) && ((arg3 == 0) || (((u32) (*(u32 *)((char *)(temp_a1) + 0x18)) >> 0x18) & arg3)) && ((((s32) (*(u32 *)((char *)(temp_a1) + 0x15)) >> 2) == 0x18) || (((u32) (*(u32 *)((char *)(temp_a1) + 0x18)) >> 0x1F) == 0)) && (func_150A1DA0(&sp34, temp_a1, 0) == 0)) {
            return (*(s32 *)((char *)(var_s0) + 0x4));
        }
        var_s0 = (*(s32 *)((char *)(var_s0) + 0x0));
        if (var_s0 == NULL) {
            goto block_9;
        }
        goto loop_1;
    }
block_9:
    return NULL;
}

void func_1515EC78(f32 arg0, f32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f14;
    f32 var_f2;
    s16 temp_t6;
    s16 var_t9;
    s32 *var_a2;
    s32 *var_v1;
    s32 temp_f8_2;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_t0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a0;
    void *var_a1;
    void *var_v0;

    var_f12 = arg0;
    var_f14 = arg1;
    temp_t6 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xE));
    sp48 = (s32) temp_t6;
    if (temp_t6 != -0x8000) {
        sp4C = (s32) (*(s32 *)((char *)(*(void **)&(arg0)) + 0x10));
        var_t9 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x12));
    } else {
        temp_v0 = ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x12)) & 0xFFFF) | ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x10)) << 0x10);
        sp48 = (s32) (*(s32 *)((char *)(temp_v0) + 0x0));
        sp4C = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        var_t9 = (s16) (s32) (*(s16 *)((char *)(temp_v0) + 0x8));
    }
    sp50 = (s32) var_t9;
    if (arg6 & 2) {
        temp_f18 = (f32) (sp48 - arg3);
        temp_f4 = (f32) (sp4C - arg4);
        sp3C = temp_f4;
        temp_f8 = (f32) (sp50 - arg5);
        sp38 = temp_f8;
        temp_f0 = sqrtf((temp_f18 * temp_f18) + (temp_f4 * temp_f4) + (temp_f8 * temp_f8));
        if (temp_f0 != 0.0f) {
            temp_f16 = 127.0f / temp_f0;
            var_f2 = temp_f18 * temp_f16;
            var_f12 = temp_f4 * temp_f16;
            var_f14 = temp_f8 * temp_f16;
        } else {
            var_f14 = 0.0f;
            var_f2 = 127.0f;
            var_f12 = 0.0f;
        }
        sp54 = (s32) var_f2;
        sp58 = (s32) var_f12;
        sp5C = (s32) var_f14;
    } else {
        sp54 = 0;
        sp58 = 0;
        sp5C = 0x7F;
    }
    temp_v1 = 1 << (s32) arg1;
    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x30)) & temp_v1) {
        temp_v0_2 = (char *)(*(void **)&(arg0)) + ((s32) arg1 * 6);
        sp48 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x14));
        sp4C = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x16));
        sp50 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x18));
    } else {
        sp40 = temp_v1;
        func_150A7960(var_f12, var_f14, ((s32) arg1 << 6) + &D_800D9C10, (f32) sp48, (f32) sp4C, (f32) sp50, &sp70, &sp74, &sp78);
        temp_f8_2 = (s32) sp70;
        temp_v0_3 = (char *)(*(void **)&(arg0)) + ((s32) arg1 * 6);
        sp48 = temp_f8_2;
        sp4C = (s32) sp74;
        sp50 = (s32) sp78;
        (*(s16 *)((char *)(temp_v0_3) + 0x14)) = (s16) temp_f8_2;
        (*(s16 *)((char *)(temp_v0_3) + 0x16)) = (s16) sp4C;
        (*(s16 *)((char *)(temp_v0_3) + 0x18)) = (s16) sp50;
        (*(u8 *)((char *)(*(void **)&(arg0)) + 0x30)) = (u8) ((*(u8 *)((char *)(*(void **)&(arg0)) + 0x30)) | sp40);
    }
    var_a1 = arg2;
    var_a0 = (*(void **)&(arg0));
    var_a2 = &sp54;
    var_v1 = &sp48;
    var_v0 = var_a1;
    do {
        var_v1 += 4;
        var_v0 = (char *)(var_v0) + 1;
        (*(u8 *)((char *)(var_v0) - 0x1)) = (u8) (*(u8 *)((char *)(var_a0) + 0x5));
        temp_t0 = (*(s32 *)((char *)(var_a0) + 0x5));
        var_a0 = (char *)(var_a0) + 1;
        var_a2 += 4;
        (*(s32 *)((char *)(var_v0) + 0x3)) = temp_t0;
        var_a1 = (char *)(var_a1) + 2;
        (*(s8 *)((char *)(var_v0) + 0x7)) = (s8) (*(s8 *)((char *)(var_a2) - 0x4));
        (*(s16 *)((char *)(var_a1) + 0x1E)) = (s16) (*(s16 *)((char *)(var_v1) - 0x4));
        (*(s16 *)((char *)(var_a1) + 0x26)) = (s16) (*(s16 *)((char *)(var_v1) - 0x4));
    } while ((char *)(var_v1) != (char *)(&sp54));
    (*(u8 *)((char *)(arg2) + 0xC)) = (u8) (*(u8 *)((char *)(*(void **)&(arg0)) + 0x2F));
}

void func_1515EF74(s32 arg0) {
    func_1515F040(1.0f / func_1515F008(arg0, 0), 0);
    func_1515F040(1.0f / func_1515F008(arg0, 5), 1);
    func_1515F040(1.0f / func_1515F008(arg0, 0xA), 2);
    func_1515F0AC(-func_1515F008(arg0, 0xE), 3);
}

f32 func_1515F008(s32 arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = arg0 + (arg1 * 2);
    return (f32) ((*(s32 *)((char *)(temp_v1) + 0x20)) | ((s32)((*(f32 *)((char *)(temp_v1) + 0x0))) << 0x10)) * 0.000015258789f;
}

void func_1515F040(f32 arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f12;

    var_f12 = arg0;
    var_f0 = D_800A6520;
    if (var_f0 <= var_f12) {
        goto block_3;
    }
    var_f0 = -32768.0f;
    if (var_f12 < -32768.0f) {
block_3:
        var_f12 = var_f0;
    }
    *(&D_800DCD10 + (arg1 * 4)) = (s32) (var_f12 * 65536.0f);
}

void func_1515F0AC(f32 arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f12;

    var_f12 = arg0;
    var_f0 = D_800A6524;
    if (var_f0 <= var_f12) {
        goto block_3;
    }
    var_f0 = -32768.0f;
    if (var_f12 < -32768.0f) {
block_3:
        var_f12 = var_f0;
    }
    *(&D_800DCD10 + (arg1 * 4)) = (s32) var_f12;
}

void func_1515F10C(s32 arg0) {
    void * *var_a1;
    void * *var_v0;

    var_a1 = D_800DCD78;
    var_v0 = NULL;
    if (var_a1 != (void *)(arg0)) {
        do {
            var_v0 = var_a1;
            var_a1 = *var_a1;
        } while (var_a1 != (void *)(arg0));
    }
    if (var_v0 != NULL) {
        *var_v0 = *var_a1;
    } else {
        D_800DCD78 = *var_a1;
    }
    func_10004074(var_a1, var_a1);
}

void func_1515F170(s32 arg0, s32 arg1) {
    void * *var_v0;

    var_v0 = D_800DCD78;
    if (var_v0 != NULL) {
        do {
            if (arg0 == (*(s32 *)((char *)(var_v0) + 0xB))) {
                (*(s8 *)((char *)(var_v0) + 0x9)) = (s8) (arg1 & 0xFF);
            }
            var_v0 = (*(s32 *)((char *)(var_v0) + 0x0));
        } while (var_v0 != NULL);
    }
}

void *func_1515F1B0(s32 arg0) {
    void *sp2C;
    void *temp_v0;
    void *var_v1;

    temp_v0 = func_10003C6C(0x10, 1, 2, 0, 1);
    var_v1 = temp_v0;
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x0)) = arg0;
    if (arg0 != 0) {
        sp2C = var_v1;
        (*(s32 *)((char *)(var_v1) + 0x4)) = func_1514462C(arg0);
    } else {
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0.0f;
    }
    if (arg0 != 0) {
        sp2C = var_v1;
        (*(s32 *)((char *)(var_v1) + 0x8)) = func_15144598(arg0);
    } else {
        (*(s32 *)((char *)(var_v1) + 0x8)) = 0.0f;
    }
    (*(s32 *)((char *)(var_v1) + 0xC)) = 0;
    return var_v1;
}

void func_1515F25C(void **arg0, void *arg1) {
    (*(s32 *)((char *)(arg1) + 0xC)) = (void *) *arg0;
    *arg0 = arg1;
}

void func_1515F270(void *arg1) {
    void * (*temp_v1)();
    s32 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x18));
    if ((temp_v0 >= 0) && (temp_v0 < 0xC)) {
        temp_v1 = *(&D_8008B090 + (temp_v0 * 4));
        if (temp_v1 != NULL) {
            temp_v1();
        }
    }
}

void func_1515F2B8(void *arg0, void * arg1) {
    func_1505D024(0x6001D, (*(s32 *)((char *)(arg0) + 0x7A)), -1U);
}

void func_1515F2E8(void *arg0, void *arg1) {
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x3B)) == 1) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x1C));
        if ((temp_v0 >= 0) && (temp_v0 < 3)) {
            ((s32 (*)())((char *)(&D_8008B0C0 + (temp_v0 * 4))))();
        }
    }
}

void func_1515F338(s32 arg0, void * arg1) {
    u8 var_t0;
    u8 var_t1;
    u8 var_v1;

    var_v1 = D_800DCD20->unk0;
    var_t0 = D_800DCD20->unk1;
    var_t1 = D_800DCD20->unk2;
    if (D_800DCD94 != 97.0f) {
        D_800DCD94 += (97.0f - D_800DCD94) * 0.5f;
        var_v1 = (u32) D_800DCD94 & 0xFF;
    }
    if (D_800DCD98 != 96.0f) {
        D_800DCD98 += (96.0f - D_800DCD98) * 0.5f;
        var_t0 = (u32) D_800DCD98 & 0xFF;
    }
    if (D_800DCD9C != 98.0f) {
        D_800DCD9C += (98.0f - D_800DCD9C) * 0.5f;
        var_t1 = (u32) D_800DCD9C & 0xFF;
    }
    func_1515D4D4(0x3F000000U, var_v1, var_t0, var_t1);
}

void func_1515F5C4(s32 arg0, void * arg1) {
    u8 var_t0;
    u8 var_t1;
    u8 var_v1;

    var_v1 = D_800DCD20->unk0;
    var_t0 = D_800DCD20->unk1;
    var_t1 = D_800DCD20->unk2;
    if (D_800DCD94 != 229.0f) {
        D_800DCD94 += (229.0f - D_800DCD94) * 0.5f;
        var_v1 = (u32) D_800DCD94 & 0xFF;
    }
    if (D_800DCD98 != 253.0f) {
        D_800DCD98 += (253.0f - D_800DCD98) * 0.5f;
        var_t0 = (u32) D_800DCD98 & 0xFF;
    }
    if (D_800DCD9C != 160.0f) {
        D_800DCD9C += (160.0f - D_800DCD9C) * 0.5f;
        var_t1 = (u32) D_800DCD9C & 0xFF;
    }
    func_1515D4D4(0x3F000000U, var_v1, var_t0, var_t1);
}

void func_1515F850(s32 arg0, void * arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    u8 sp1E;
    u8 sp1D;
    u8 sp1C;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;

    sp1C = D_800DCD20->unk0;
    sp1D = D_800DCD20->unk1;
    sp1E = D_800DCD20->unk2;
    temp_f0 = sinf(D_800DCDA0);
    temp_f14 = (temp_f0 * 29.5f) + 127.5f;
    temp_f16 = (temp_f0 * 71.0f) + 109.0f;
    sp28 = temp_f14;
    sp24 = temp_f16;
    temp_f18 = (temp_f0 * 26.0f) + 26.0f;
    sp20 = temp_f18;
    D_800DCDA0 += D_800A6530 * D_800BE9A4;
    D_800DCDA0 = func_15144B68(D_800DCDA0, temp_f14);
    if (temp_f14 != D_800DCD94) {
        D_800DCD94 += (temp_f14 - D_800DCD94) * 0.5f;
        sp1C = (u8) (u32) D_800DCD94;
    }
    if (temp_f16 != D_800DCD98) {
        D_800DCD98 += (temp_f16 - D_800DCD98) * 0.5f;
        sp1D = (u8) (u32) D_800DCD98;
    }
    if (temp_f18 != D_800DCD9C) {
        D_800DCD9C += (temp_f18 - D_800DCD9C) * 0.5f;
        sp1E = (u8) (u32) D_800DCD9C;
    }
    func_1515D4D4(0x3F000000U, (u8) temp_f14, sp1C, sp1D);
}

void func_1515FB70(void *arg0, void *arg1) {
    if (((*(s32 *)((char *)(arg0) + 0x3B)) == 1) && ((*(s32 *)((char *)(arg1) + 0x1C)) >= 0)) {

    }
}

void func_1515FB94(void *arg0, void * arg1) {
    func_1505D024(0x6002D, (*(s32 *)((char *)(arg0) + 0x7A)), -1U);
}

void func_1515FBC4(void *arg0, void * arg1) {
    s32 sp18;
    s32 var_a3;
    s32 var_v1;
    void *temp_v0;

    sp18 = 0;
    temp_v0 = func_15105C24(arg1);
    var_v1 = sp18;
    if (temp_v0 != NULL) {
        var_v1 = (*(s32 *)((char *)(temp_v0) + 0x98));
    }
    if (var_v1 != 0) {
        var_a3 = (s32) ((char *)(var_v1) - (char *)(&gObjects)) / 812;
    } else {
        var_a3 = -1;
    }
    func_1505D024(arg0, 0x6002EU, (*(s32 *)((char *)(arg0) + 0x7A)), var_a3);
}

void func_1515FC34(void * arg1) {
    func_1505D024(0x33, 0xC000U, -1U);
}

void func_1515FC60(void *arg0, void *arg1) {
    f32 sp34;
    f32 var_f6;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
    if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x120)) == 0)) {
        temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x1C));
        if (temp_v0_2 != 0) {
            var_f6 = (f32) temp_v0_2;
            if (temp_v0_2 < 0) {
                var_f6 += 4294967296.0f;
            }
            sp34 = var_f6 * D_800A6534;
            if (!((f32) func_150AD960((*(f32 *)((char *)(arg1) + 0x0)), (*(f32 *)((char *)(arg1) + 0x4)), (s32) (*(f32 *)((char *)(arg0) + 0x14)), (s32) (*(f32 *)((char *)(arg0) + 0x1C))) < (((f32) (*(f32 *)((char *)(arg1) + 0x6)) * sp34) - (f32) (*(f32 *)((char *)(arg0) + 0xE4))))) {
                goto block_6;
            }
        } else {
block_6:
            func_1505D024(arg0, 0x2FU, 0U, -1);
            func_15136C3C(arg0, 1, 1, 1, 1, 0, 0xFF, 1);
            func_15145A50(arg0);
            func_1507CD64(arg0, 6);
        }
    }
}
