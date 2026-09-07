/**
 * Auto-decompiled from asm/215960.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 *allocate_memory();                  /* extern */
void * func_10004074();                              /* extern */
void *func_1501A6CC();        /* extern */
s32 *func_1502B6BC();           /* extern */
void * func_1503F4B0();                     /* extern */
void * func_1503F5B8();       /* extern */
s32 func_1503F62C(); /* extern */
void * func_1503F7B8();                               /* extern */
void * func_150428D4();             /* extern */
void * func_15042D94();            /* extern */
s32 func_1507BB28();                           /* extern */
void * func_15086CBC();            /* extern */
s32 func_15086D48();                          /* extern */
void *func_150900F0();                     /* extern */
void *func_15096934();                        /* extern */
void *func_1509B570();                             /* extern */
s32 func_1509BE40();                         /* extern */
void * func_150A7D00();                   /* extern */
s32 random_u32();   /* extern */
void * func_1510CE60();                /* extern */
s32 func_1510D0EC();                /* extern */
void * func_1510D694();                               /* extern */
s32 func_151E24F0(s32 (*)[]);                       /* extern */
s32 func_151E564C();                                /* extern */
void * func_151E7F60();                      /* extern */
void *func_151E966C();
void *func_151E9D18(); /* static */
void *func_151EC648();             /* static */
void *func_151ED1E0();                    /* static */
void *func_151ED430(void *arg0, void * **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, s32 arg7);
u8 *func_151ED90C(); /* static */
void func_151EDB58();
void *func_151EDBDC(void *arg0, u8 *arg1, f32 arg2, f32 arg3, f32 arg4);
void *func_151EE184();             /* static */
void *func_151EEBE8();           /* static */
extern s32 D_1647;
extern s32 D_1648;
extern s32 D_1653;
extern s32 D_1654;
extern s32 D_507;
extern s32 D_508;
extern s32 D_7D3;
extern s32 D_7D4;
extern s32 D_7F1;
extern s32 D_7F2;
extern s32 D_7F6;
extern s32 D_7FB;
extern s32 D_7FC;
extern s8 D_80087268;
extern s32 D_800891BC;
extern s32 D_80089470;
extern s8 D_8008FD7C;
extern u16 D_8008FDC0;
extern s8 D_8008FDC8;
extern s16 D_8008FDCC;
extern void *gGameState;
extern f32 D_8008FDE8;
extern f32 D_8008FE1C;
extern f32 D_8008FE20;
extern s8 D_8008FE2C;
extern s8 D_8008FE40;
extern s8 D_8008FE44;
extern s32 D_8008FE48;
extern s8 D_8008FEF0;
extern s8 D_8008FEF8;
extern s32 D_8008FFC0;
extern s32 D_8008FFF4;
extern s32 D_80090028;
extern u8 *D_80090058;
extern u8 *D_8009005C;
extern void *D_80090060;
extern s32 D_8009006C;
extern s32 D_80090070;
extern s32 D_80090074;
extern s32 D_8009009C;
extern s8 D_800900B8;
extern s32 D_800900BC;
extern u8 D_800900D4;
extern s32 D_800900D8;
extern s8 D_800900F8;
extern s32 D_800900FC;
extern s32 D_80090110;
extern s32 D_80090128;
extern u8 *D_80090138;
extern void *D_8009013C;
extern void *D_800917EC;
extern void *D_800917F8;
extern void *D_80091804;
extern void *D_80091810;
extern void *D_8009181C;
extern void *D_80091828;
extern s32 D_8009DEB0;
extern s32 D_8009DEB4;
extern s32 D_8009DEB8;
extern s32 D_8009DEBC;
extern s32 D_800ABA90;
extern u8 D_800ABAA0;
extern u8 D_800ABAA4;
extern u8 D_800ABAA8;
extern u8 D_800ABAAC;
extern u8 D_800ABAB0;
extern u8 D_800ABAB8;
extern u8 D_800ABABC;
extern u8 D_800ABAC0;
extern u8 D_800ABAC4;
extern u8 D_800ABAC8;
extern u8 D_800ABACC;
extern u8 D_800ABAD0;
extern u8 D_800ABAD4;
extern f32 D_800ABAD8;
extern f32 D_800ABADC;
extern f32 D_800ABAE0;
extern f32 D_800ABAE4;
extern f32 D_800ABAE8;
extern f32 D_800ABAEC;
extern f32 D_800ABAF0;
extern f32 D_800ABAF4;
extern f32 D_800ABAF8;
extern f32 D_800ABAFC;
extern f32 D_800ABB00;
extern f32 D_800ABB04;
extern f32 D_800ABB08;
extern u8 D_800BE740;
extern s32 D_800BE9AC;
extern s32 D_800BE9C8;
extern s32 D_800BEBA4;
extern s16 D_800C3C9E;
extern s32 D_800CC5EC;
extern s32 D_800E0A74;
extern s16 D_800E0A80;
extern s32 D_800E0A90;
extern u8 D_800E0A94;
extern u8 D_800E0A95;
extern s16 D_800E0AA0;
extern s32 D_800E0AC0;
extern s32 D_800E0AD0;
extern s32 D_800E0B90;
extern u8 D_800E0B96;
extern u8 D_800E0B97;
extern s32 D_800E0BA0;
extern s8 D_800E0BB0;
extern u16 D_800E0BCC;
extern s8 D_800E0BD3;
extern void *D_800E0BD8;
extern s8 D_800E0C00;
extern s16 D_800E0C30;
extern s32 D_800E0C38;
extern s16 D_800E0C78;
extern u8 *D_800E0C7C;
extern s8 D_800E0C80;
extern s8 D_800E0C81;
extern s8 D_800E0C82;
extern s8 D_800E0C83;
extern s8 D_800E0C84;
extern u8 D_800E0C85;
extern u8 D_800E0C88;
extern s32 D_80E;
extern s32 D_82F;
extern s32 D_830;
extern s32 D_843;
extern s32 D_85D;
extern s32 D_87B;
extern s32 D_887;
extern s32 D_888;
extern s32 D_88C;
extern s32 D_891;
extern s32 D_89C;
extern s32 D_D10;
extern s32 D_D14;
extern s32 D_D16;
void * func_151EA15C();

void *func_151E84B0(void *arg0) {
    s32 sp1C;
    s32 var_t0;
    void *(*temp_v1)(void *);
    void *temp_v0;

    D_8003C8E0 = 0x09000001;
    sp1C = 0;
    temp_v0 = func_151ED1E0();
    var_t0 = sp1C;
    temp_v1 = *(&D_8008FFF4 + (D_800E0B94 * 4));
    arg0 = temp_v0;
    if (temp_v1 != NULL) {
        arg0 = temp_v1(temp_v0);
    }
    if (D_80000300 != 0) {
        if ((D_800BE616 != 0) && (D_8008FD90 >= 2)) {
            if (!(D_800BE740 & 0xF)) {
                if (D_800E0BD3 == 1) {
                    var_t0 = 0x33;
                } else if (D_800E0BD3 == 2) {
                    var_t0 = 0x16;
                }
            }
        } else if (!(D_800BE740 & 1)) {
            if (D_800E0BD3 == 1) {
                var_t0 = 0x32;
            } else if (D_800E0BD3 == 2) {
                var_t0 = 0x15;
            }
        }
    }
    if (var_t0 != 0) {
        sp1C = var_t0;
        func_1504332C(0xFFU, 0xFFU, 0xFFU, 0xFF);
        func_15042D94(0x94, 0xC8, 0x81, (*(s32 *)((char *)(D_800E0BD8) + (var_t0 * 4))));
    }
    D_8003C8E0 = 0;
    return arg0;
}

s32 func_151E8620(s32 arg0) {
    s32 sp18;
    s32 (*temp_a1)(void *, s32);
    s32 temp_a2;
    s32 var_a0;
    s32 var_v0;
    u8 temp_v1;

    var_a0 = arg0;
    temp_v1 = D_800E0B94;
    temp_a1 = *(&D_8008FFC0 + (temp_v1 * 4));
    temp_a2 = var_a0;
    D_8003C8E0 = 0x09000000;
    if (temp_a1 != NULL) {
        sp18 = temp_a2;
        var_a0 = temp_a1(temp_a1, temp_a2);
    }
    if (temp_v1 != 0) {
        D_80090058 = NULL;
        D_800E0C78 = 0;
    }
    D_8003C8E0 = 0;
    if (D_800BEBA4 < ((s32) (var_a0 - *(&D_800BE9C8 + (D_800BE9C0 * 4))) >> 3)) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return temp_a2;
    }
    return var_a0;
}

void *func_151E86E4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s16 var_t0;
    s16 var_t0_2;
    s16 var_t1;
    s16 var_t1_2;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 var_a2;
    s32 var_t1_3;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_a0_2;

    var_a2 = arg2;
    if (D_8008FE1C != 1.0f) {
        arg1 = (s32) ((f32) arg1 * D_8008FE1C);
        arg3 = (s32) ((f32) arg3 * D_8008FE1C);
        var_a2 = (s32) ((f32) var_a2 * D_8008FE20);
        arg4 = (s32) ((f32) arg4 * D_8008FE20);
        arg8 = (s32) ((f32) arg8 / D_8008FE1C);
        arg9 = (s32) ((f32) arg9 / D_8008FE20);
    }
    temp_a0_2 = (char *)(arg0) + 8;
    if ((s16) arg3 > 0) {
        var_t0 = (s16) arg3;
    } else {
        var_t0 = 0;
    }
    if ((s16) arg4 > 0) {
        var_t1 = (s16) arg4;
    } else {
        var_t1 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = (s32) ((var_t1 & 0xFFF) | 0xE4000000 | ((var_t0 & 0xFFF) << 0xC));
    if ((s16) arg1 > 0) {
        var_t0_2 = (s16) arg1;
    } else {
        var_t0_2 = 0;
    }
    if ((s16) var_a2 > 0) {
        var_t1_2 = (s16) var_a2;
    } else {
        var_t1_2 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) ((var_t1_2 & 0xFFF) | ((arg5 & 7) << 0x18) | ((var_t0_2 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xE1000000;
    temp_a0 = (char *)(temp_a0_2) + 8;
    if ((s16) arg1 < 0) {
        if ((s16) arg8 < 0) {
            temp_t5 = (s32) ((s16) arg1 * (s16) arg8) >> 7;
            if (temp_t5 > 0) {
                var_t2 = temp_t5;
            } else {
                var_t2 = 0;
            }
        } else {
            var_v0 = 0;
            temp_t4 = (s32) ((s16) arg1 * (s16) arg8) >> 7;
            if (temp_t4 < 0) {
                var_v0 = temp_t4;
            }
            var_t2 = var_v0;
        }
    } else {
        var_t2 = 0;
    }
    if (var_a2 < 0) {
        if ((s16) arg9 < 0) {
            temp_t7 = (s32) ((s16) var_a2 * (s16) arg9) >> 7;
            if (temp_t7 > 0) {
                var_t1_3 = temp_t7;
            } else {
                var_t1_3 = 0;
            }
        } else {
            var_v0_2 = 0;
            temp_t6 = (s32) ((s16) var_a2 * (s16) arg9) >> 7;
            if (temp_t6 < 0) {
                var_v0_2 = temp_t6;
            }
            var_t1_3 = var_v0_2;
        }
    } else {
        var_t1_3 = 0;
    }
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = (s32) (((arg7 - var_t1_3) & 0xFFFF) | ((arg6 - var_t2) << 0x10));
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((arg8 << 0x10) | (arg9 & 0xFFFF));
    return (char *)(temp_a0) + 8;
}

void *func_151E89A0(void *arg0, void * arg1, s32 arg2) {
    s32 sp150;
    s32 sp14C;
    s32 sp148;                                      /* compiler-managed */
    s32 sp138;
    s32 sp12C;
    u8 sp11B;
    u8 sp11A;
    f32 sp10C;
    void * sp108;
    f32 sp104;
    s32 sp64;
    s32 sp5C;
    void * *var_s0;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f8;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 var_s2;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_s2;
    s32 temp_t8_3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    s32 var_t0_2;
    s32 var_t3;
    s32 var_v0_2;
    u16 temp_a1;
    u8 var_t0;
    u8 var_t1;
    void *temp_a0;
    void *temp_a3_2;
    void *temp_t1;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t4_3;
    void *temp_t4_4;
    void *temp_t4_5;
    void *temp_t4_6;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t5_3;
    void *temp_t5_4;
    void *temp_t5_5;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t6_3;
    void *temp_t6_4;
    void *temp_t6_5;
    void *temp_t6_6;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_t8_4;
    void *temp_t8_5;
    void *temp_t8_6;
    void *temp_t8_7;
    void *temp_t9;
    void *temp_t9_2;
    void *temp_t9_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0;

    var_t0 = 0;
    D_8008FDBC &= 0xFFEF;
    temp_t8 = arg0;
    arg0 = (char *)(temp_t8) + 8;
    (*(s32 *)((char *)(temp_t8) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(temp_t8) + 0x4)) = &D_80090028;
    temp_t6 = arg0;
    arg0 = (char *)(temp_t6) + 8;
    (*(s32 *)((char *)(temp_t6) + 0x4)) = -0xC07;
    (*(s32 *)((char *)(temp_t6) + 0x0)) = 0xFC12FE25;
    if (D_80082FA0 == 0) {
        sp14C = 0x320;
    } else {
        sp14C = 0x198;
    }
    sp138 = 0x124;
    if (D_800E0BB0 > 0) {
        sp138 = 0x124 / (s8) D_800E0BB0;
    }
    D_800E0BCC = 0;
    sp11B = 0;
    var_t1 = -1U;
    var_a1 = 0;
    if (D_8008FD8C > 0) {
        var_s0 = &gObjects;
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x31C));
            if (((*(s32 *)((char *)(var_s0) + 0x13C)) != 0) || ((*(s32 *)((char *)(temp_v0) + 0x128)) & 0x20)) {
                var_t1 = (*(s32 *)((char *)(var_s0) + 0x128));
                D_800E0BCC |= 1 << var_a1;
            }
            if ((var_t1 != -1U) && (D_8008FDC0 & 0x8000)) {
                var_t1 = -1U;
                if (var_t1 == 0) {
                    var_t0 = (var_t0 | 2) & 0xFF;
                } else {
                    var_t0 = (var_t0 | 1) & 0xFF;
                }
            }
            if (((*(s32 *)((char *)(var_s0) + 0x128)) == 1) && ((*(s32 *)((char *)(var_s0) + 0x2E4)) != 0) && (D_8008FDC0 & 0x4000)) {
                var_t0 = (var_t0 | 4) & 0xFF;
            }
            if (((*(s32 *)((char *)(temp_v0) + 0x75)) & 0x7F) == 0x25) {
                sp12C = (s32) var_t1;
                sp148 = var_a1;
                sp11A = var_t0;
                func_15086CBC(func_15086D48(0x49, var_a1), &sp10C, &sp108, &sp104);
                temp_f8 = sp10C - (*(s32 *)((char *)(var_s0) + 0x14));
                temp_f18 = sp104 - (*(s32 *)((char *)(var_s0) + 0x1C));
                sp10C = temp_f8;
                sp104 = temp_f18;
                temp_f10 = (temp_f8 * temp_f8) + (temp_f18 * temp_f18);
                sp104 = temp_f10;
                if (temp_f10 < D_800ABAD8) {
                    sp11B = 1;
                    D_8008FDBC |= 0x10;
                }
                var_t1 = (u8) sp12C;
                D_800E0BCC |= 1 << var_a1;
                var_t0 = sp11A;
                var_a1 = sp148;
            }
            var_a1 += 1;
            var_s0 = (char *)(var_s0) + 0x32C;
        } while (var_a1 < D_8008FD8C);
    }
    temp_a1 = D_8008FDC0;
    var_t3 = 0;
    if ((D_800BE9AC & 0x1F) < 0xB) {
        D_800E0BCC = 0;
        sp11B = 0;
        var_t1 = -1U;
        var_t0 = 0;
    }
    sp11A = var_t0;
    sp12C = (s32) var_t1;
    if (temp_a1 & 9) {
        sp11A = var_t0;
        sp12C = (s32) var_t1;
        temp_v0_2 = func_1510D0EC(&D_D14, NULL, 3, 0);
        var_t3 = temp_v0_2;
        if (temp_v0_2 != 0x80000000) {
            temp_t8_2 = arg0;
            arg0 = (char *)(temp_t8_2) + 8;
            (*(s32 *)((char *)(temp_t8_2) + 0x4)) = temp_v0_2;
            (*(s32 *)((char *)(temp_t8_2) + 0x0)) = 0xFD180000;
            temp_t6_2 = arg0;
            arg0 = (char *)(temp_t6_2) + 8;
            (*(s32 *)((char *)(temp_t6_2) + 0x4)) = 0x07094250;
            (*(s32 *)((char *)(temp_t6_2) + 0x0)) = 0xF5180000;
            temp_t4 = arg0;
            arg0 = (char *)(temp_t4) + 8;
            (*(s32 *)((char *)(temp_t4) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_t4) + 0x0)) = 0xE6000000;
            temp_t7 = arg0;
            arg0 = (char *)(temp_t7) + 8;
            (*(s32 *)((char *)(temp_t7) + 0x4)) = 0x073FF000;
            (*(s32 *)((char *)(temp_t7) + 0x0)) = 0xF3000000;
            temp_t5 = arg0;
            arg0 = (char *)(temp_t5) + 8;
            (*(s32 *)((char *)(temp_t5) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_t5) + 0x0)) = 0xE7000000;
            temp_t9 = arg0;
            arg0 = (char *)(temp_t9) + 8;
            (*(s32 *)((char *)(temp_t9) + 0x0)) = 0xF5181000;
            (*(s32 *)((char *)(temp_t9) + 0x4)) = 0x94250;
            temp_t6_3 = arg0;
            arg0 = (char *)(temp_t6_3) + 8;
            (*(s32 *)((char *)(temp_t6_3) + 0x0)) = 0xF2000000;
            (*(s32 *)((char *)(temp_t6_3) + 0x4)) = 0x7C07C;
            temp_t4_2 = arg0;
            arg0 = (char *)(temp_t4_2) + 8;
            (*(s32 *)((char *)(temp_t4_2) + 0x0)) = 0xEF002C3F;
            (*(s32 *)((char *)(temp_t4_2) + 0x4)) = 0x504244;
        } else {
            var_t3 = 0;
        }
    }
    if ((temp_a1 & 8) && (var_t3 != 0)) {
        sp150 = sp138 >> 1;
        if (D_800E0BB0 > 0) {
            sp5C = sp14C + 0x1C;
            sp64 = arg2 & 0xFF;
            sp148 = 0;
            do {
                var_s4 = 0;
                var_s5 = 0;
                var_s2 = func_150859AC((s16) sp148, 6);
                temp_t5_2 = arg0;
                arg0 = (char *)(temp_t5_2) + 8;
                (*(s32 *)((char *)(temp_t5_2) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_t5_2) + 0x0)) = 0xE7000000;
                temp_t1 = arg0;
                arg0 = (char *)(temp_t1) + 8;
                (*(s32 *)((char *)(temp_t1) + 0x0)) = 0xFB000000;
                temp_v1 = (sp148 * 4) + &D_800ABA90;
                (*(s32 *)((char *)(temp_t1) + 0x4)) = (s32) (((*(s32 *)((char *)(temp_v1) + 0x2)) << 8) | ((*(s32 *)((char *)(temp_v1) + 0x0)) << 0x18) | ((*(s32 *)((char *)(temp_v1) + 0x1)) << 0x10) | sp64);
                temp_a3 = (sp150 + 0xA) * 4;
                arg0 = func_151E86E4(arg0, (sp150 + 3) * 4, (s16) sp14C, temp_a3, sp5C, 0, 0x1C0, 0x200, 0x400, 0x400);
                var_s1 = temp_a3;
                var_s0_2 = 0x2710;
loop_35:
                temp_lo = var_s2 / var_s0_2;
                if ((temp_lo != 0) || (var_s4 != 0) || (var_s0_2 == 1)) {
                    var_s4 = 1;
                    arg0 = func_151E86E4(arg0, var_s1, (s16) sp14C, var_s1 + 0x14, sp5C, 0, *(&D_8009006C + (temp_lo & 3)) << 5, *(&D_80090070 + (temp_lo >> 2)) << 5, 0x400, 0x400);
                    var_s1 += 0x18;
                }
                var_s2 %= var_s0_2;
                if (var_s0_2 == 1) {
                    var_s5 = 1;
                }
                var_s0_2 = var_s0_2 / 10;
                if (var_s5 == 0) {
                    goto loop_35;
                }
                temp_t8_3 = sp148 + 1;
                sp148 = temp_t8_3;
                sp150 += sp138;
            } while (temp_t8_3 < D_800E0BB0);
        }
    }
    if (temp_a1 & 1) {
        arg0 = func_151E966C(arg0, sp14C, sp12C, 0, 1U);
    }
    if ((sp11B != 0) || (sp12C != -1)) {
        if (D_8008FDC0 & 0x4000) {
            sp148 = &D_D16 + 1;
        } else {
            sp148 = &D_D16;
        }
        temp_v0_3 = func_1510D0EC(sp148, NULL, 3, 0);
        temp_t4_3 = arg0;
        if (temp_v0_3 != 0x80000000) {
            arg0 = (char *)(temp_t4_3) + 8;
            (*(s32 *)((char *)(temp_t4_3) + 0x0)) = 0xFD500000;
            (*(s32 *)((char *)(temp_t4_3) + 0x4)) = temp_v0_3;
            temp_t5_3 = arg0;
            arg0 = (char *)(temp_t5_3) + 8;
            (*(s32 *)((char *)(temp_t5_3) + 0x0)) = 0xF5500000;
            (*(s32 *)((char *)(temp_t5_3) + 0x4)) = 0x07098260;
            temp_t7_2 = arg0;
            arg0 = (char *)(temp_t7_2) + 8;
            (*(s32 *)((char *)(temp_t7_2) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_t7_2) + 0x0)) = 0xE6000000;
            temp_t9_2 = arg0;
            arg0 = (char *)(temp_t9_2) + 8;
            (*(s32 *)((char *)(temp_t9_2) + 0x4)) = 0x073FF000;
            (*(s32 *)((char *)(temp_t9_2) + 0x0)) = 0xF3000000;
            temp_t8_4 = arg0;
            arg0 = (char *)(temp_t8_4) + 8;
            (*(s32 *)((char *)(temp_t8_4) + 0x0)) = 0xE7000000;
            sp64 = arg2 & 0xFF;
            (*(s32 *)((char *)(temp_t8_4) + 0x4)) = 0;
            temp_t7_3 = arg0;
            arg0 = (char *)(temp_t7_3) + 8;
            (*(s32 *)((char *)(temp_t7_3) + 0x4)) = 0x98260;
            (*(s32 *)((char *)(temp_t7_3) + 0x0)) = 0xF5400800;
            temp_t6_4 = arg0;
            arg0 = (char *)(temp_t6_4) + 8;
            (*(s32 *)((char *)(temp_t6_4) + 0x0)) = 0xF2000000;
            (*(s32 *)((char *)(temp_t6_4) + 0x4)) = 0xFC0FC;
            temp_t5_4 = arg0;
            arg0 = (char *)(temp_t5_4) + 8;
            (*(s32 *)((char *)(temp_t5_4) + 0x4)) = (s32) (temp_v0_3 + 0x800);
            (*(s32 *)((char *)(temp_t5_4) + 0x0)) = 0xFD100000;
            temp_t7_4 = arg0;
            arg0 = (char *)(temp_t7_4) + 8;
            (*(s32 *)((char *)(temp_t7_4) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_t7_4) + 0x0)) = 0xE6000000;
            temp_t9_3 = arg0;
            arg0 = (char *)(temp_t9_3) + 8;
            (*(s32 *)((char *)(temp_t9_3) + 0x4)) = 0x0603C000;
            (*(s32 *)((char *)(temp_t9_3) + 0x0)) = 0xF0000000;
            temp_t8_5 = arg0;
            arg0 = (char *)(temp_t8_5) + 8;
            (*(s32 *)((char *)(temp_t8_5) + 0x0)) = 0xEF00AC3F;
            (*(s32 *)((char *)(temp_t8_5) + 0x4)) = 0x504244;
            temp_t4_4 = arg0;
            arg0 = (char *)(temp_t4_4) + 8;
            (*(s32 *)((char *)(temp_t4_4) + 0x0)) = 0xFB000000;
            (*(s32 *)((char *)(temp_t4_4) + 0x4)) = (s32) (sp64 | ~0xFF);
            if (sp11B != 0) {
                arg0 = func_151E86E4(arg0, 0x238, 0xC, 0x268, 0x48, 0, 0x640, 0x660, 0x400, 0x400);
            }
            if (sp12C != -1) {
                if (D_8008FDC0 & 0x4000) {
                    var_v0 = func_151E86E4(arg0, 0x220, 0xC, 0x250, 0x48, 0, 0x600, 0x540, 0x400, 0x400);
                } else {
                    var_v0_2 = 0;
                    if (D_8008FDC0 & 1) {
                        var_t0_2 = 0x1A;
                    } else {
                        var_t0_2 = 0x26;
                        var_v0_2 = 0xB;
                    }
                    var_v0 = func_151E86E4(arg0, 0x238, (var_v0_2 + 3) * 4, 0x268, (var_v0_2 + 0xE) * 4, 0, 0x640, var_t0_2 << 5, 0x400, 0x400);
                }
                arg0 = var_v0;
            }
        }
    }
    var_s0_3 = 0x20;
    temp_s2 = sp11A & 4;
    if (sp11A != 0) {
        if (temp_s2 != 0) {
            sp148 = &D_D10 + 1;
            var_s0_3 = 0x10;
        } else {
            sp148 = &D_D10;
        }
        temp_v0_4 = func_1510D0EC(sp148, NULL, 3, 0);
        temp_t6_5 = arg0;
        if (temp_v0_4 != 0x80000000) {
            arg0 = (char *)(temp_t6_5) + 8;
            (*(s32 *)((char *)(temp_t6_5) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(temp_t6_5) + 0x4)) = 0;
            temp_t8_6 = arg0;
            arg0 = (char *)(temp_t8_6) + 8;
            (*(s32 *)((char *)(temp_t8_6) + 0x4)) = temp_v0_4;
            (*(s32 *)((char *)(temp_t8_6) + 0x0)) = 0xFD180000;
            temp_t6_6 = arg0;
            arg0 = (char *)(temp_t6_6) + 8;
            (*(s32 *)((char *)(temp_t6_6) + 0x4)) = 0x07094250;
            (*(s32 *)((char *)(temp_t6_6) + 0x0)) = 0xF5180000;
            temp_t5_5 = arg0;
            arg0 = (char *)(temp_t5_5) + 8;
            (*(s32 *)((char *)(temp_t5_5) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_t5_5) + 0x0)) = 0xE6000000;
            temp_a3_2 = arg0;
            temp_v0_5 = (var_s0_3 << 5) - 1;
            arg0 = (char *)(temp_a3_2) + 8;
            (*(s32 *)((char *)(temp_a3_2) + 0x0)) = 0xF3000000;
            if (temp_v0_5 < 0x7FF) {
                var_a2 = temp_v0_5;
            } else {
                var_a2 = 0x7FF;
            }
            (*(s32 *)((char *)(temp_a3_2) + 0x4)) = (s32) (((var_a2 & 0xFFF) << 0xC) | 0x07000000);
            temp_t4_5 = arg0;
            arg0 = (char *)(temp_t4_5) + 8;
            (*(s32 *)((char *)(temp_t4_5) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_t4_5) + 0x0)) = 0xE7000000;
            temp_v1_2 = arg0;
            arg0 = (char *)(temp_v1_2) + 8;
            (*(s32 *)((char *)(temp_v1_2) + 0x4)) = 0x94250;
            (*(s32 *)((char *)(temp_v1_2) + 0x0)) = (s32) (((((s32) ((var_s0_3 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5180000);
            temp_a0 = arg0;
            arg0 = (char *)(temp_a0) + 8;
            (*(s32 *)((char *)(temp_a0) + 0x0)) = 0xF2000000;
            (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (((((var_s0_3 - 1) * 4) & 0xFFF) << 0xC) | 0x7C);
            temp_t8_7 = arg0;
            arg0 = (char *)(temp_t8_7) + 8;
            (*(s32 *)((char *)(temp_t8_7) + 0x0)) = 0xEF000C3F;
            (*(s32 *)((char *)(temp_t8_7) + 0x4)) = 0x504244;
            temp_t4_6 = arg0;
            arg0 = (char *)(temp_t4_6) + 8;
            (*(s32 *)((char *)(temp_t4_6) + 0x4)) = -1;
            (*(s32 *)((char *)(temp_t4_6) + 0x0)) = 0xFB000000;
            if (sp11A & 1) {
                temp_a2 = sp14C - 0x10;
                arg0 = func_151E86E4(arg0, 0xA0, temp_a2, 0xE0, temp_a2 + 0x40, 0, 0, 0x200, 0x400, 0x400);
            }
            if (sp11A & 2) {
                temp_a2_2 = sp14C - 0x10;
                arg0 = func_151E86E4(arg0, 0x3B0, temp_a2_2, 0x3F0, temp_a2_2 + 0x40, 0, 0x200, 0x200, 0x400, 0x400);
            }
            if (temp_s2 != 0) {
                arg0 = func_151E86E4(arg0, 0x250, 0xC, 0x280, 0x48, 0, 0, 0x200, 0x400, 0x400);
            }
        }
    }
    if (D_8008FDC0 & 0x6340) {
        arg0 = func_151E9D18(arg0, sp14C, 1);
    }
    return arg0;
}

void *func_151E966C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 spFF;
    s32 spE4;
    s32 spE0;
    s16 *sp60;
    s32 sp5C;
    s16 temp_v0_2;
    s16 var_s4;
    s16 var_s7;
    s16 var_s7_2;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s7_3;
    s32 var_t1;
    s8 temp_v1;
    void *temp_s2;
    void *temp_s2_10;
    void *temp_s2_11;
    void *temp_s2_12;
    void *temp_s2_13;
    void *temp_s2_14;
    void *temp_s2_15;
    void *temp_s2_16;
    void *temp_s2_17;
    void *temp_s2_18;
    void *temp_s2_19;
    void *temp_s2_20;
    void *temp_s2_21;
    void *temp_s2_22;
    void *temp_s2_23;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_s2_6;
    void *temp_s2_7;
    void *temp_s2_8;
    void *temp_s2_9;
    void *temp_v0_3;
    void *temp_v0_5;
    void *var_s2;

    var_s2 = arg0;
    spFF = 0;
    if (arg3 != 0) {
        temp_v0 = func_1510D0EC(&D_D14, NULL, 3, 0);
        if (temp_v0 == 0x80000000) {

        } else {
            (*(s32 *)((char *)(var_s2) + 0x0)) = 0xE7000000;
            temp_s2 = (char *)(var_s2) + 8;
            (*(s32 *)((char *)(var_s2) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_s2) + 0x4)) = -0xC07;
            (*(s32 *)((char *)(var_s2) + 0x8)) = 0xFC12FE25;
            temp_s2_2 = (char *)(temp_s2) + 8;
            (*(s32 *)((char *)(temp_s2) + 0x8)) = 0xFD180000;
            (*(s32 *)((char *)(temp_s2_2) + 0x4)) = temp_v0;
            temp_s2_3 = (char *)(temp_s2_2) + 8;
            (*(s32 *)((char *)(temp_s2_2) + 0x8)) = 0xF5180000;
            (*(s32 *)((char *)(temp_s2_3) + 0x4)) = 0x07094250;
            temp_s2_4 = (char *)(temp_s2_3) + 8;
            (*(s32 *)((char *)(temp_s2_3) + 0x8)) = 0xE6000000;
            (*(s32 *)((char *)(temp_s2_4) + 0x4)) = 0;
            temp_s2_5 = (char *)(temp_s2_4) + 8;
            (*(s32 *)((char *)(temp_s2_4) + 0x8)) = 0xF3000000;
            (*(s32 *)((char *)(temp_s2_5) + 0x4)) = 0x073FF000;
            temp_s2_6 = (char *)(temp_s2_5) + 8;
            (*(s32 *)((char *)(temp_s2_5) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(temp_s2_6) + 0x4)) = 0;
            temp_s2_7 = (char *)(temp_s2_6) + 8;
            (*(s32 *)((char *)(temp_s2_6) + 0x8)) = 0xF5181000;
            (*(s32 *)((char *)(temp_s2_7) + 0x4)) = 0x94250;
            temp_s2_8 = (char *)(temp_s2_7) + 8;
            (*(s32 *)((char *)(temp_s2_7) + 0x8)) = 0xF2000000;
            (*(s32 *)((char *)(temp_s2_8) + 0x4)) = 0x7C07C;
            temp_s2_9 = (char *)(temp_s2_8) + 8;
            (*(s32 *)((char *)(temp_s2_8) + 0x8)) = 0xEF002C3F;
            (*(s32 *)((char *)(temp_s2_9) + 0x4)) = 0x504244;
            var_s2 = (char *)(temp_s2_9) + 8;
            goto block_4;
        }
    } else {
block_4:
        temp_v1 = D_800E0BB0;
        spE0 = 0x124;
        if (temp_v1 > 0) {
            spE0 = 0x124 / temp_v1;
        }
        if (arg4 != 0) {
            spFF = 0xF;
            var_s7 = 0;
            if (D_8008FD8C > 0) {
                do {
                    if (func_150859AC(var_s7, 3) != 0) {
                        spFF &= ~(1 << (&D_800E0C00)[var_s7]);
                    }
                    var_s7 += 1;
                } while (var_s7 < D_8008FD8C);
            }
        }
        var_s7_2 = 0;
        temp_t2 = spE0 >> 1;
        sp5C = temp_t2;
        spE4 = temp_t2;
        if (temp_v1 > 0) {
            sp60 = &D_800E0AA0;
            do {
                if (arg4 != 0) {
                    temp_v0_2 = func_150859AC(var_s7_2, 6);
                    var_s4 = temp_v0_2;
                    *sp60 = temp_v0_2;
                } else {
                    var_s4 = *sp60;
                }
                if (!(spFF & (1 << var_s7_2))) {
                    var_s1 = 0;
                    if (var_s7_2 == arg2) {
                        var_s4 += 1;
                    }
                    (*(s32 *)((char *)(var_s2) + 0x0)) = 0xE7000000;
                    (*(s32 *)((char *)(var_s2) + 0x4)) = 0;
                    temp_s2_10 = (char *)(var_s2) + 8;
                    temp_v0_3 = (var_s7_2 * 4) + &D_800ABA90;
                    (*(s32 *)((char *)(var_s2) + 0x8)) = 0xFB000000;
                    (*(s32 *)((char *)(temp_s2_10) + 0x4)) = (s32) (((*(s32 *)((char *)(temp_v0_3) + 0x2)) << 8) | ((*(s32 *)((char *)(temp_v0_3) + 0x0)) << 0x18) | ((*(s32 *)((char *)(temp_v0_3) + 0x1)) << 0x10) | 0xFF);
                    var_s2 = (char *)(temp_s2_10) + 8;
                    var_s0 = spE4 - (D_80087268 * 4);
                    if (D_80087268 > 0) {
                        do {
                            if (var_s1 == var_s4) {
                                (*(s32 *)((char *)(var_s2) + 0x0)) = 0xE7000000;
                                (*(s32 *)((char *)(var_s2) + 0x4)) = 0;
                                temp_s2_11 = (char *)(var_s2) + 8;
                                (*(s32 *)((char *)(var_s2) + 0x8)) = 0xFB000000;
                                (*(s32 *)((char *)(temp_s2_11) + 0x4)) = 0x40404040;
                                var_s2 = (char *)(temp_s2_11) + 8;
                            }
                            var_s1 += 1;
                            var_s2 = func_151E86E4(var_s2, var_s0 * 4, (s16) arg1, (var_s0 + 7) * 4, arg1 + 0x1C, 0, 0x1C0, 0x200, 0x400, 0x400);
                            var_s0 += 8;
                        } while (var_s1 < D_80087268);
                    }
                }
                var_s7_2 += 1;
                sp60 += 2;
                spE4 += spE0;
            } while (var_s7_2 < D_800E0BB0);
        }
        if (spFF != 0) {
            temp_v0_4 = func_1510D0EC(&D_D16 + 1, NULL, 3, 0);
            if (temp_v0_4 == 0x80000000) {

            } else {
                (*(s32 *)((char *)(var_s2) + 0x0)) = 0xE7000000;
                temp_s2_12 = (char *)(var_s2) + 8;
                (*(s32 *)((char *)(var_s2) + 0x4)) = 0;
                (*(s32 *)((char *)(var_s2) + 0x8)) = 0xFD500000;
                (*(s32 *)((char *)(temp_s2_12) + 0x4)) = temp_v0_4;
                temp_s2_13 = (char *)(temp_s2_12) + 8;
                (*(s32 *)((char *)(temp_s2_12) + 0x8)) = 0xF5500000;
                (*(s32 *)((char *)(temp_s2_13) + 0x4)) = 0x07098260;
                temp_s2_14 = (char *)(temp_s2_13) + 8;
                (*(s32 *)((char *)(temp_s2_13) + 0x8)) = 0xE6000000;
                (*(s32 *)((char *)(temp_s2_14) + 0x4)) = 0;
                temp_s2_15 = (char *)(temp_s2_14) + 8;
                (*(s32 *)((char *)(temp_s2_14) + 0x8)) = 0xF3000000;
                var_t1 = sp5C;
                (*(s32 *)((char *)(temp_s2_15) + 0x4)) = 0x073FF000;
                temp_s2_16 = (char *)(temp_s2_15) + 8;
                var_s7_3 = 0;
                (*(s32 *)((char *)(temp_s2_15) + 0x8)) = 0xE7000000;
                (*(s32 *)((char *)(temp_s2_16) + 0x4)) = 0;
                temp_s2_17 = (char *)(temp_s2_16) + 8;
                (*(s32 *)((char *)(temp_s2_16) + 0x8)) = 0xF5400800;
                (*(s32 *)((char *)(temp_s2_17) + 0x4)) = 0x98260;
                temp_s2_18 = (char *)(temp_s2_17) + 8;
                (*(s32 *)((char *)(temp_s2_17) + 0x8)) = 0xF2000000;
                (*(s32 *)((char *)(temp_s2_18) + 0x4)) = 0xFC0FC;
                temp_s2_19 = (char *)(temp_s2_18) + 8;
                (*(s32 *)((char *)(temp_s2_19) + 0x4)) = (s32) (temp_v0_4 + 0x800);
                (*(s32 *)((char *)(temp_s2_18) + 0x8)) = 0xFD100000;
                temp_s2_20 = (char *)(temp_s2_19) + 8;
                (*(s32 *)((char *)(temp_s2_19) + 0x8)) = 0xE6000000;
                (*(s32 *)((char *)(temp_s2_20) + 0x4)) = 0;
                temp_s2_21 = (char *)(temp_s2_20) + 8;
                (*(s32 *)((char *)(temp_s2_20) + 0x8)) = 0xF0000000;
                (*(s32 *)((char *)(temp_s2_21) + 0x4)) = 0x0603C000;
                temp_s2_22 = (char *)(temp_s2_21) + 8;
                (*(s32 *)((char *)(temp_s2_21) + 0x8)) = 0xEF00AC3F;
                (*(s32 *)((char *)(temp_s2_22) + 0x4)) = 0x504244;
                var_s2 = (char *)(temp_s2_22) + 8;
                if (D_800E0BB0 > 0) {
                    do {
                        if (spFF & (1 << var_s7_3)) {
                            spE4 = var_t1;
                            (*(s32 *)((char *)(var_s2) + 0x0)) = 0xE7000000;
                            (*(s32 *)((char *)(var_s2) + 0x4)) = 0;
                            temp_s2_23 = (char *)(var_s2) + 8;
                            temp_v0_5 = (var_s7_3 * 4) + &D_800ABA90;
                            (*(s32 *)((char *)(var_s2) + 0x8)) = 0xFB000000;
                            (*(s32 *)((char *)(temp_s2_23) + 0x4)) = (s32) (((*(s32 *)((char *)(temp_v0_5) + 0x2)) << 8) | ((*(s32 *)((char *)(temp_v0_5) + 0x0)) << 0x18) | ((*(s32 *)((char *)(temp_v0_5) + 0x1)) << 0x10) | 0xFF);
                            var_s2 = func_151E86E4((char *)(temp_s2_23) + 8, (spE4 - 8) * 4, arg1 - 0x18, (spE4 + 8) * 4, arg1 + 0x28, 0, 0x600, 0x280, 0x400, 0x400);
                        }
                        var_s7_3 += 1;
                        var_t1 += spE0;
                    } while (var_s7_3 < D_800E0BB0);
                }
                goto block_34;
            }
        } else {
block_34:
            (*(s32 *)((char *)(var_s2) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(var_s2) + 0x4)) = 0;
            var_s2 = (char *)(var_s2) + 8;
        }
    }
    return var_s2;
}

void *func_151E9D18(void *arg0, s32 arg1, s32 arg2) {
    s32 sp98;
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp44;
    void * *var_a0;
    void * *var_a2_2;
    s16 temp_s0_2;
    s16 temp_v0_3;
    s16 var_s0_2;
    s16 var_s1;
    s16 var_s2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_s0;
    s8 *var_v0;
    s8 temp_t8;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s3_5;
    void *temp_s3_6;
    void *temp_s3_7;
    void *temp_s3_8;
    void *temp_s3_9;
    void *var_a0_2;
    void *var_s3;

    var_s3 = arg0;
    sp80 = arg1 - 0x10;
    if ((D_8008FDC0 & 0x4000) || (var_a0 = &D_D10, var_s0 = 0x20, ((*(s32 *)((char *)(gGameState) + 0x42)) == 8))) {
        var_a0 = &D_D10 + 1;
        var_s0 = 0x10;
        if ((*(s32 *)((char *)(gGameState) + 0x42)) == 8) {
            var_a0 = &D_D10 + 2;
        }
        sp7C = 0;
        sp78 = 0x200;
    } else {
        sp7C = 0x200;
        sp78 = 0;
    }
    temp_v0 = func_1510D0EC(var_a0, NULL, 3, 0);
    if (temp_v0 == 0x80000000) {

    } else {
        (*(s32 *)((char *)(var_s3) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s3) + 0x4)) = 0;
        temp_s3 = (char *)(var_s3) + 8;
        (*(s32 *)((char *)(var_s3) + 0x8)) = 0xFD180000;
        (*(s32 *)((char *)(temp_s3) + 0x4)) = temp_v0;
        temp_s3_2 = (char *)(temp_s3) + 8;
        (*(s32 *)((char *)(temp_s3_2) + 0x4)) = 0x07094250;
        (*(s32 *)((char *)(temp_s3) + 0x8)) = 0xF5180000;
        temp_s3_3 = (char *)(temp_s3_2) + 8;
        (*(s32 *)((char *)(temp_s3_2) + 0x8)) = 0xE6000000;
        (*(s32 *)((char *)(temp_s3_3) + 0x4)) = 0;
        temp_s3_4 = (char *)(temp_s3_3) + 8;
        temp_v0_2 = (var_s0 << 5) - 1;
        (*(s32 *)((char *)(temp_s3_3) + 0x8)) = 0xF3000000;
        temp_s3_5 = (char *)(temp_s3_4) + 8;
        if (temp_v0_2 < 0x7FF) {
            var_a2 = temp_v0_2;
        } else {
            var_a2 = 0x7FF;
        }
        (*(s32 *)((char *)(temp_s3_4) + 0x4)) = (s32) (((var_a2 & 0xFFF) << 0xC) | 0x07000000);
        (*(s32 *)((char *)(temp_s3_4) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s3_5) + 0x4)) = 0;
        temp_s3_6 = (char *)(temp_s3_5) + 8;
        (*(s32 *)((char *)(temp_s3_5) + 0x8)) = (s32) (((((s32) ((var_s0 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5180000);
        (*(s32 *)((char *)(temp_s3_6) + 0x4)) = 0x94250;
        temp_s3_7 = (char *)(temp_s3_6) + 8;
        (*(s32 *)((char *)(temp_s3_6) + 0x8)) = 0xF2000000;
        (*(s32 *)((char *)(temp_s3_7) + 0x4)) = (s32) (((((var_s0 - 1) * 4) & 0xFFF) << 0xC) | 0x7C);
        temp_s3_8 = (char *)(temp_s3_7) + 8;
        (*(s32 *)((char *)(temp_s3_7) + 0x8)) = 0xEF000C3F;
        (*(s32 *)((char *)(temp_s3_8) + 0x4)) = 0x504244;
        temp_s3_9 = (char *)(temp_s3_8) + 8;
        (*(s32 *)((char *)(temp_s3_9) + 0x4)) = -1;
        (*(s32 *)((char *)(temp_s3_8) + 0x8)) = 0xFB000000;
        sp98 = 0;
        var_s1 = 0;
        var_s2 = 0;
        if (arg2 != 0) {
            if (D_8008FDC0 & 0x6040) {
                var_s1 = func_150859AC(0, 6);
                var_s2 = func_150859AC(1, 6);
            } else if (D_8008FDC0 & 0x100) {
                var_a2_2 = &gObjects;
                var_s0_2 = 0;
                if (D_8008FD8C > 0) {
                    do {
                        sp44 = (s32) var_a2_2;
                        temp_v0_3 = func_150859AC(var_s0_2, 3);
                        var_v1 = temp_v0_3;
                        if (temp_v0_3 < 0) {
                            var_v1 = 0;
                        }
                        if ((*(s32 *)((char *)(var_a2_2) + 0x128)) == 0) {
                            var_s1 += var_v1;
                        } else {
                            var_s2 += var_v1;
                        }
                        var_s0_2 += 1;
                        var_a2_2 = (char *)(var_a2_2) + 0x32C;
                    } while (var_s0_2 < D_8008FD8C);
                }
            } else {
                sp98 = 0x200;
                if (D_8008FD8C > 0) {
                    var_v0 = &D_800E0C00;
                    var_a0_2 = gGameState;
                    do {
                        var_v1_2 = (*(s32 *)((char *)(var_a0_2) + 0x46));
                        if (var_v1_2 < 0) {
                            var_v1_2 = 0;
                        }
                        temp_t8 = *var_v0;
                        var_v0 += 1;
                        if (temp_t8 == 0) {
                            var_s1 += var_v1_2;
                        } else {
                            var_s2 += var_v1_2;
                        }
                        var_a0_2 = (char *)(var_a0_2) + 2;
                    } while ((u32) var_v0 < (u32) &(&D_800E0C00)[D_8008FD8C]);
                }
            }
            (*(s32 *)((char *)&(D_800E0AA0) + 0x0)) = var_s1;
            (*(s32 *)((char *)&(D_800E0AA0) + 0x2)) = var_s2;
        } else {
            var_s1 = (*(s32 *)((char *)&(D_800E0AA0) + 0x0));
            var_s2 = (*(s32 *)((char *)&(D_800E0AA0) + 0x2));
        }
        temp_s0 = sp80 + 0x40;
        var_s3 = func_151E86E4(func_151E86E4((char *)(temp_s3_9) + 8, 0x108, (s16) sp80, 0x148, temp_s0, 0, sp7C, sp98, 0x400, 0x400), 0x318, (s16) sp80, 0x358, temp_s0, 0, 0, sp98 + sp78, 0x400, 0x400);
        func_1504332C(0xC0U, 0xC0U, 0xC0U, 0xFF);
        temp_s0_2 = (sp80 >> 2) + 1;
        func_15042D94(0x4F, temp_s0_2, 0x80, &D_800ABAA0, (s32) var_s2);
        func_15042D94(0xD3, temp_s0_2, 0x80, &D_800ABAA4, (s32) var_s1);
    }
    return var_s3;
}

void *func_151EA15C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 unksp73;
    s32 sp140;
    s32 sp134;
    s8 sp123;
    s8 sp122;
    s8 sp121;
    void * *sp78;
    s32 sp70;
    s8 *sp6C;
    void * *sp64;                                        /* compiler-managed */
    s16 *sp5C;
    s32 sp58;
    s16 temp_a2;
    s16 temp_t1;
    s16 var_s4_2;
    s16 var_v0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_s7;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s3;
    s32 var_s4;
    s8 *temp_v0_4;
    s8 *var_fp;
    s8 *var_fp_2;
    s8 temp_v0;
    s8 temp_v1;
    s8 var_s5;
    s8 var_s6;
    s8 var_v0_2;
    void *temp_s1;
    void *temp_s1_10;
    void *temp_s1_11;
    void *temp_s1_12;
    void *temp_s1_13;
    void *temp_s1_14;
    void *temp_s1_15;
    void *temp_s1_16;
    void *temp_s1_17;
    void *temp_s1_18;
    void *temp_s1_19;
    void *temp_s1_20;
    void *temp_s1_21;
    void *temp_s1_22;
    void *temp_s1_23;
    void *temp_s1_24;
    void *temp_s1_25;
    void *temp_s1_26;
    void *temp_s1_27;
    void *temp_s1_28;
    void *temp_s1_29;
    void *temp_s1_2;
    void *temp_s1_30;
    void *temp_s1_31;
    void *temp_s1_32;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s1_7;
    void *temp_s1_8;
    void *temp_s1_9;
    void *temp_v0_10;
    void *temp_v0_6;
    void *temp_v0_8;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;

    var_s1 = arg0;
    temp_v0 = (*(s32 *)((char *)(gGameState) + 0x42));
    if ((temp_v0 == 0xB) || (temp_v0 == 0xC)) {
        if (arg3 != 0) {

        } else {
            (*(s32 *)((char *)(var_s1) + 0x0)) = 0xE7000000;
            temp_s1 = (char *)(var_s1) + 8;
            (*(s32 *)((char *)(var_s1) + 0x4)) = 0;
            (*(s32 *)((char *)(var_s1) + 0x8)) = 0xFB000000;
            (*(s32 *)((char *)(temp_s1) + 0x4)) = (s32) ((arg2 & 0xFF) | ~0xFF);
            temp_s1_2 = (char *)(temp_s1) + 8;
            (*(s32 *)((char *)(temp_s1) + 0x8)) = 0xFC12D225;
            (*(s32 *)((char *)(temp_s1_2) + 0x4)) = 0xFFA7FFFF;
            var_s1 = (char *)(temp_s1_2) + 8;
            temp_v0_2 = func_1510D0EC(&D_843, NULL, 3, 0);
            if (temp_v0_2 == 0x80000000) {

            } else {
                (*(s32 *)((char *)(temp_s1_2) + 0x8)) = 0xFD180000;
                temp_s1_3 = (char *)(var_s1) + 8;
                (*(s32 *)((char *)(var_s1) + 0x4)) = temp_v0_2;
                (*(s32 *)((char *)(var_s1) + 0x8)) = 0xF5180000;
                (*(s32 *)((char *)(temp_s1_3) + 0x4)) = 0x07094250;
                temp_s1_4 = (char *)(temp_s1_3) + 8;
                (*(s32 *)((char *)(temp_s1_3) + 0x8)) = 0xE6000000;
                (*(s32 *)((char *)(temp_s1_4) + 0x4)) = 0;
                temp_s1_5 = (char *)(temp_s1_4) + 8;
                (*(s32 *)((char *)(temp_s1_4) + 0x8)) = 0xF3000000;
                (*(s32 *)((char *)(temp_s1_5) + 0x4)) = 0x073FF000;
                temp_s1_6 = (char *)(temp_s1_5) + 8;
                (*(s32 *)((char *)(temp_s1_5) + 0x8)) = 0xE7000000;
                (*(s32 *)((char *)(temp_s1_6) + 0x4)) = 0;
                temp_s1_7 = (char *)(temp_s1_6) + 8;
                (*(s32 *)((char *)(temp_s1_6) + 0x8)) = 0xF5181000;
                (*(s32 *)((char *)(temp_s1_7) + 0x4)) = 0x94250;
                temp_s1_8 = (char *)(temp_s1_7) + 8;
                (*(s32 *)((char *)(temp_s1_7) + 0x8)) = 0xF2000000;
                (*(s32 *)((char *)(temp_s1_8) + 0x4)) = 0x7C07C;
                temp_s1_9 = (char *)(temp_s1_8) + 8;
                (*(s32 *)((char *)(temp_s1_8) + 0x8)) = 0xEF002C3F;
                (*(s32 *)((char *)(temp_s1_9) + 0x4)) = 0x504244;
                var_s1 = (char *)(temp_s1_9) + 8;
                var_s4 = 0x48;
                var_fp = &D_8008FE44;
                do {
                    temp_v1 = *var_fp;
                    temp_v0_3 = temp_v1 & 3;
                    if (temp_v1 >= 0) {
                        var_s1 = func_151E86E4(var_s1, 0x120, (var_s4 - 2) * 4, 0x160, (var_s4 + 0xE) * 4, 0, (temp_v0_3 & 1) << 9, (temp_v0_3 >> 1) << 9, 0x400, 0x400);
                        var_s4 += 0x12;
                    }
                    var_fp += 1;
                } while ((char *)(var_fp) != (char *)(&D_8008FE48));
            }
        }
    } else {
        var_s4_2 = arg1;
        if (D_8008FDC0 & 1) {
            sp140 = 0x1A;
        } else {
            sp140 = 0x34;
        }
        temp_a3 = arg2 & 0xFF;
        if ((D_800E0B94 != 0) && (D_8008FDC8 != 0)) {
            var_s4_2 = arg1 - 0x28;
        }
        sp70 = temp_a3;
        func_1504332C(0xFFU, 0xFFU, 0xFFU, temp_a3);
        if (D_800E0BD3 == 2) {
            sp134 = 9;
            sp121 = 1;
        } else {
            sp134 = 0x5E;
            sp121 = 0;
        }
        temp_s1_10 = (char *)(var_s1) + 8;
        temp_s1_11 = (char *)(temp_s1_10) + 8;
        if ((*(s32 *)((char *)(gGameState) + 0x42)) == 8) {
            sp123 = 0;
        } else {
            sp123 = 1;
        }
        (*(s32 *)((char *)(var_s1) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s1) + 0x4)) = 0;
        (*(s32 *)((char *)(var_s1) + 0x8)) = 0xFB000000;
        (*(s32 *)((char *)(temp_s1_10) + 0x4)) = (s32) ((arg2 & 0xFF) | ~0xFF);
        (*(s32 *)((char *)(temp_s1_10) + 0x8)) = 0xFC12D225;
        (*(s32 *)((char *)(temp_s1_11) + 0x4)) = 0xFFA7FFFF;
        var_s1 = (char *)(temp_s1_11) + 8;
        sp122 = 0;
        var_fp_2 = &D_8008FE44;
        var_s5 = 0;
loop_24:
        temp_v0_4 = var_s5 + D_80087270;
        if ((*var_fp_2 >= 0) && (sp6C = temp_v0_4, (*temp_v0_4 != 0xA)) && ((var_s6 = (&D_800E0C00)[var_s5], (var_s6 != 0)) || ((var_s6 == 0) && (sp123 != 0)))) {
            if (sp122 == 0) {
                temp_v0_5 = func_1510D0EC(&D_887, NULL, 3, 0);
                if (temp_v0_5 == 0x80000000) {

                } else {
                    (*(s32 *)((char *)(var_s1) + 0x0)) = 0xFD180000;
                    temp_s1_12 = (char *)(var_s1) + 8;
                    (*(s32 *)((char *)(var_s1) + 0x4)) = temp_v0_5;
                    (*(s32 *)((char *)(var_s1) + 0x8)) = 0xF5180000;
                    (*(s32 *)((char *)(temp_s1_12) + 0x4)) = 0x07094250;
                    temp_s1_13 = (char *)(temp_s1_12) + 8;
                    (*(s32 *)((char *)(temp_s1_12) + 0x8)) = 0xE6000000;
                    (*(s32 *)((char *)(temp_s1_13) + 0x4)) = 0;
                    temp_s1_14 = (char *)(temp_s1_13) + 8;
                    (*(s32 *)((char *)(temp_s1_13) + 0x8)) = 0xF3000000;
                    (*(s32 *)((char *)(temp_s1_14) + 0x4)) = 0x073FF000;
                    temp_s1_15 = (char *)(temp_s1_14) + 8;
                    (*(s32 *)((char *)(temp_s1_14) + 0x8)) = 0xE7000000;
                    temp_t4 = (sp140 - 0x28) * 4;
                    sp64 = &D_888;
                    (*(s32 *)((char *)(temp_s1_15) + 0x4)) = 0;
                    temp_s1_16 = (char *)(temp_s1_15) + 8;
                    (*(s32 *)((char *)(temp_s1_15) + 0x8)) = 0xF5181000;
                    (*(s32 *)((char *)(temp_s1_16) + 0x4)) = 0x94250;
                    temp_s1_17 = (char *)(temp_s1_16) + 8;
                    (*(s32 *)((char *)(temp_s1_16) + 0x8)) = 0xF2000000;
                    (*(s32 *)((char *)(temp_s1_17) + 0x4)) = 0x7C07C;
                    temp_s1_18 = (char *)(temp_s1_17) + 8;
                    (*(s32 *)((char *)(temp_s1_17) + 0x8)) = 0xEF000C3F;
                    (*(s32 *)((char *)(temp_s1_18) + 0x4)) = 0x504244;
                    var_s1_2 = (char *)(temp_s1_18) + 8;
                    var_s0 = temp_t4;
                    if (D_8008FDC0 & 1) {
                        temp_a2 = (var_s4_2 - 0x11) * 4;
                        var_s1_2 = func_151E86E4(var_s1_2, temp_t4 + 0x1D4, temp_a2, temp_t4 + 0x214, temp_a2 + 0x40, 0, 0x200, 0, 0x400, 0x400);
                        var_s0 = temp_t4 + 0x78;
                    }
                    temp_t1 = (var_s4_2 - 0x11) * 4;
                    var_s0_2 = var_s0 + 0x1D4;
                    if ((*(s32 *)((char *)(gGameState) + 0x42)) == 1) {
                        var_s0_2 -= 0x78;
                    }
                    temp_v0_6 = func_151E86E4(var_s1_2, var_s0_2 + 0x164, temp_t1, var_s0_2 + 0x1A4, temp_t1 + 0x3C, 0, 0, 0x200, 0x400, 0x400);
                    var_s1 = (char *)(temp_v0_6) + 8;
                    if ((*(s32 *)((char *)(gGameState) + 0x42)) == 1) {
                        var_s0_2 += 0x78;
                    }
                    (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xE7000000;
                    (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0;
                    temp_v0_7 = func_1510D0EC(sp64, NULL, 3, 0);
                    if (temp_v0_7 == 0x80000000) {

                    } else {
                        (*(s32 *)((char *)(temp_v0_6) + 0x8)) = 0xFD180000;
                        temp_s1_19 = (char *)(var_s1) + 8;
                        (*(s32 *)((char *)(var_s1) + 0x4)) = temp_v0_7;
                        (*(s32 *)((char *)(var_s1) + 0x8)) = 0xF5180000;
                        (*(s32 *)((char *)(temp_s1_19) + 0x4)) = 0x07094250;
                        temp_s1_20 = (char *)(temp_s1_19) + 8;
                        (*(s32 *)((char *)(temp_s1_19) + 0x8)) = 0xE6000000;
                        (*(s32 *)((char *)(temp_s1_20) + 0x4)) = 0;
                        temp_s1_21 = (char *)(temp_s1_20) + 8;
                        (*(s32 *)((char *)(temp_s1_20) + 0x8)) = 0xF3000000;
                        (*(s32 *)((char *)(temp_s1_21) + 0x4)) = 0x073FF000;
                        temp_s1_22 = (char *)(temp_s1_21) + 8;
                        (*(s32 *)((char *)(temp_s1_21) + 0x8)) = 0xE7000000;
                        sp78 = &D_843;
                        (*(s32 *)((char *)(temp_s1_22) + 0x4)) = 0;
                        temp_s1_23 = (char *)(temp_s1_22) + 8;
                        temp_s3 = temp_t1 + 0x40;
                        (*(s32 *)((char *)(temp_s1_22) + 0x8)) = 0xF5181000;
                        (*(s32 *)((char *)(temp_s1_23) + 0x4)) = 0x94250;
                        temp_s1_24 = (char *)(temp_s1_23) + 8;
                        (*(s32 *)((char *)(temp_s1_23) + 0x8)) = 0xF2000000;
                        (*(s32 *)((char *)(temp_s1_24) + 0x4)) = 0x7C07C;
                        temp_s0 = var_s0_2 + 0x74;
                        temp_v0_8 = func_151E86E4(func_151E86E4((char *)(temp_s1_24) + 8, var_s0_2, temp_t1, var_s0_2 + 0x40, temp_s3, 0, 0x200, 0, 0x400, 0x400), temp_s0, temp_t1, temp_s0 + 0x40, temp_s3, 0, 0, 0, 0x400, 0x400);
                        var_s1_3 = temp_v0_8;
                        temp_a1 = temp_s0 + 0x4C;
                        if ((*(s32 *)((char *)(gGameState) + 0x42)) != 1) {
                            var_s1_3 = func_151E86E4(temp_v0_8, temp_a1, temp_t1, temp_a1 + 0x80, temp_s3, 0, 0, 0x200, 0x400, 0x400);
                        }
                        (*(s32 *)((char *)(var_s1_3) + 0x0)) = 0xE7000000;
                        (*(s32 *)((char *)(var_s1_3) + 0x4)) = 0;
                        var_s1 = (char *)(var_s1_3) + 8;
                        temp_v0_9 = func_1510D0EC(sp78, NULL, 3, 0);
                        if (temp_v0_9 == 0x80000000) {

                        } else {
                            (*(s32 *)((char *)(var_s1_3) + 0x8)) = 0xFD180000;
                            temp_s1_25 = (char *)(var_s1) + 8;
                            (*(s32 *)((char *)(var_s1) + 0x4)) = temp_v0_9;
                            (*(s32 *)((char *)(var_s1) + 0x8)) = 0xF5180000;
                            (*(s32 *)((char *)(temp_s1_25) + 0x4)) = 0x07094250;
                            temp_s1_26 = (char *)(temp_s1_25) + 8;
                            (*(s32 *)((char *)(temp_s1_25) + 0x8)) = 0xE6000000;
                            (*(s32 *)((char *)(temp_s1_26) + 0x4)) = 0;
                            temp_s1_27 = (char *)(temp_s1_26) + 8;
                            (*(s32 *)((char *)(temp_s1_26) + 0x8)) = 0xF3000000;
                            (*(s32 *)((char *)(temp_s1_27) + 0x4)) = 0x073FF000;
                            temp_s1_28 = (char *)(temp_s1_27) + 8;
                            (*(s32 *)((char *)(temp_s1_27) + 0x8)) = 0xE7000000;
                            sp122 = 1;
                            (*(s32 *)((char *)(temp_s1_28) + 0x4)) = 0;
                            temp_s1_29 = (char *)(temp_s1_28) + 8;
                            (*(s32 *)((char *)(temp_s1_28) + 0x8)) = 0xF5181000;
                            (*(s32 *)((char *)(temp_s1_29) + 0x4)) = 0x94250;
                            temp_s1_30 = (char *)(temp_s1_29) + 8;
                            (*(s32 *)((char *)(temp_s1_29) + 0x8)) = 0xF2000000;
                            (*(s32 *)((char *)(temp_s1_30) + 0x4)) = 0x7C07C;
                            temp_s1_31 = (char *)(temp_s1_30) + 8;
                            (*(s32 *)((char *)(temp_s1_30) + 0x8)) = 0xEF002C3F;
                            (*(s32 *)((char *)(temp_s1_31) + 0x4)) = 0x504244;
                            var_s1 = (char *)(temp_s1_31) + 8;
                            goto block_45;
                        }
                    }
                }
            } else {
block_45:
                temp_v0_10 = (var_s6 * 4) + &D_800ABA90;
                temp_s7 = var_s5 * 2;
                sp64 = sp134 * 4;
                sp58 = sp140 + 0x3C;
                sp5C = temp_s7 + &D_800E0AD0;
                var_s3 = 0;
                func_1504332C((*(s32 *)((char *)(temp_v0_10) + 0x0)), (*(s32 *)((char *)(temp_v0_10) + 0x1)), (*(s32 *)((char *)(temp_v0_10) + 0x2)), (s32) unksp73);
                temp_t3 = *var_fp_2 & 3;
                var_s1 = func_151E86E4(var_s1, (sp140 + 8) * 4, (var_s4_2 - 2) * 4, (sp140 + 0x18) * 4, (var_s4_2 + 0xE) * 4, 0, (temp_t3 & 1) << 9, (temp_t3 >> 1) << 9, 0x400, 0x400);
                if (arg3 != 0) {
                    var_v0 = (*(s32 *)((char *)((*(&D_800CC5EC + (var_s5 * 0x32C)))) + 0x1AA));
                } else {
                    var_v0 = (*(s32 *)((char *)(((char *)(gGameState) + (var_s5 * 0xC))) + 0x6C));
                }
                if (var_v0 > 0) {
                    var_s3 = (s32) ((*(s32 *)((char *)(((char *)(gGameState) + (var_s5 * 0xC))) + 0x66)) * 0x64) / var_v0;
                }
                if (var_s3 >= 0x2710) {
                    var_s3 = 0x270F;
                }
                if (D_8008FDC8 != 0) {
                    var_s6 = var_s5;
                }
                var_s0_3 = sp140;
                var_v0_2 = *(&D_800E0AC0 + var_s6) - 1;
                if (var_v0_2 < 0) {
                    var_v0_2 = 0;
                }
                func_15042D94(sp58, var_s4_2, 0x81, &D_800ABAA8, (*(s32 *)((char *)(D_800E0BD8) + (var_v0_2 * 4) + (s32)(sp64))));
                if (D_8008FDC0 & 1) {
                    func_15042D94(sp140 + 0x54, var_s4_2, 0x81, &D_800ABAAC, (s32) (&D_800E0AA0)[var_s6]);
                    var_s0_3 = sp140 + 0x1E;
                }
                temp_s0_2 = var_s0_3 + 0x58;
                func_15042D94(temp_s0_2, var_s4_2, 0x81, &D_800ABAB0, var_s3);
                temp_s0_3 = temp_s0_2 + 0x1A;
                func_15042D94(temp_s0_3, var_s4_2, 0x81, &D_800ABAB8, (s32) (*(s32 *)((char *)(((char *)(gGameState) + temp_s7)) + 0x46)));
                var_s0_4 = temp_s0_3 + 0x1E;
                if ((*(s32 *)((char *)(gGameState) + 0x42)) != 1) {
                    if ((*sp6C == 9) || ((var_s5 == 0) && (D_8008FD7C == 9))) {
                        func_15042D94(var_s0_4, var_s4_2, 0x81, &D_800ABABC);
                    } else {
                        func_15042D94(var_s0_4, var_s4_2, 0x81, &D_800ABAC0, (s32) (*(s32 *)((char *)(((char *)(gGameState) + (var_s5 * 0xC))) + 0x6A)));
                    }
                    var_s0_4 += 0x1E;
                }
                func_15042D94(var_s0_4, var_s4_2, 0x81, &D_800ABAC4, (s32) *sp5C);
                var_s4_2 += 0xF;
                goto block_66;
            }
        } else {
block_66:
            var_s5 += 1;
            var_fp_2 += 1;
            if (var_s5 == 4) {
                if (D_8008FDC0 & 0x6340) {
                    (*(s32 *)((char *)(var_s1) + 0x4)) = &D_80090028;
                    temp_s1_32 = (char *)(var_s1) + 8;
                    (*(s32 *)((char *)(var_s1) + 0x0)) = 0xDE000000;
                    (*(s32 *)((char *)(temp_s1_32) + 0x4)) = -0xC07;
                    (*(s32 *)((char *)(var_s1) + 0x8)) = 0xFC12FE25;
                    var_s1 = func_151E9D18((char *)(temp_s1_32) + 8, 0x320, (s32) sp121);
                }
                if ((arg3 != 0) && (D_8008FDC0 & 1)) {
                    var_s1 = func_151E966C(var_s1, 0x320, -1, 1, (u8) (s32) sp121);
                }
            } else {
                goto loop_24;
            }
        }
    }
    return var_s1;
}

void *func_151EADFC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp94;
    void * sp7C;
    s16 temp_t4;
    s32 *var_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *var_s0;

    var_s0 = arg0;
    var_s3 = arg3;
    (*(s32 *)((char *)&(sp7C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0x0));
    (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0x4));
    (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0x8));
    (*(s32 *)((char *)&(sp7C) + 0xC)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0xC));
    (*(s32 *)((char *)&(sp7C) + 0x10)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0x10));
    temp_t4 = arg2 * 4;
    (*(s32 *)((char *)&(sp7C) + 0x18)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0x18));
    var_s2 = arg1 * 4;
    (*(s32 *)((char *)&(sp7C) + 0x14)) = (s32) (*(s32 *)((char *)&(D_8009009C) + 0x14));
    if (var_s3 >= 0x989680) {
        var_s3 = 0x98967F;
    }
    var_s4 = 0;
    if (var_s3 < 0) {
        var_s3 = 0;
    }
    var_s1 = &sp94;
    do {
        temp_v0 = *var_s1;
        temp_v1 = var_s3 / temp_v0;
        var_s3 = var_s3 % temp_v0;
        if ((temp_v1 > 0) || (var_s4 != 0) || ((char *)(var_s1) == (char *)(&sp7C))) {
            var_s4 = 1;
            temp_v0_2 = func_1510D0EC(*(&D_80090074 + (temp_v1 * 4)), NULL, 3, 0);
            if (temp_v0_2 != 0x80000000) {
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0xFD180000;
                (*(s32 *)((char *)(var_s0) + 0x4)) = temp_v0_2;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0xF5180000;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0x07094250;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xE6000000;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                temp_s0_3 = (char *)(temp_s0_2) + 8;
                (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0x073FF000;
                (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xF3000000;
                temp_s0_4 = (char *)(temp_s0_3) + 8;
                (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xE7000000;
                (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0;
                temp_s0_5 = (char *)(temp_s0_4) + 8;
                (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xF5181000;
                (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0x94250;
                temp_s0_6 = (char *)(temp_s0_5) + 8;
                (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xF2000000;
                (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0x7C07C;
                var_s0 = func_151E86E4((char *)(temp_s0_6) + 8, var_s2, temp_t4, var_s2 + 0x80, temp_t4 + 0x80, 0, 0, 0, 0x400, 0x400);
            }
            var_s2 += 0x60;
        }
        var_s1 -= 4;
    } while ((u32) var_s1 >= (u32) &sp7C);
    return var_s0;
}

void *func_151EB06C(void *arg0) {
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp7C;
    s32 sp70;
    s32 sp3C;
    void * *sp34;
    void * *var_v1_2;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 var_a3;
    s16 var_v1_3;
    s32 temp_t9;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_4;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_v0_2;
    void *var_s0;
    void *var_s0_2;

    var_s0 = arg0;
    temp_t9 = (D_800D2E4C->unk19 & 4) != 0;
    sp3C = temp_t9;
    if (temp_t9 == 0) {
        sp3C = D_8008FDA8 < 0;
    }
    if ((D_800BE616 != 0) && (D_800BEAC0 == 0) && (D_800BEAC1 == 0)) {
        if ((func_151E564C() == 0) || ((*(s32 *)((char *)(gGameState) + 0x42)) == 1)) {
            var_s0 = func_151E89A0(var_s0, 0, 0xFF);
        }
    } else {
        D_800E0C78 = 0;
    }
    if ((D_800BEAC0 == 0) || (D_8008FEF0 != 0)) {
        if (D_80090058 != NULL) {
            func_151EDB58(D_80090058, D_80090058);
            func_151EDB58(D_8009005C);
            D_80090058 = NULL;
        }
        D_8008FDCC = 0;
        D_800900B8 = 0;
    } else {
        if ((D_800B0DF0->unk8 == 4) && (D_800900B8 == 0)) {
            var_v1 = 0;
            if (D_800BE9F0 == 0x13) {
                var_v1_2 = &D_1647;
                var_v0 = 0;
                var_a0 = (*(s32 *)((char *)((*(&D_800891BC + (D_800B0DF0->unk9 * 4)))) + 0x8));
                do {
                    if (((char *)(var_a0) != (char *)(var_v1_2)) && ((char *)(var_a0) != (char *)(&D_1648)) && ((char *)(var_a0) != (char *)(&D_1648 + 1)) && ((char *)(var_a0) != (char *)(&D_1653)) && ((char *)(var_a0) != (char *)(&D_1654)) && ((char *)(var_a0) != (char *)(&D_1654 + 1))) {
                        sp84 = var_v0;
                        sp34 = var_v1_2;
                        sp7C = var_a0;
                        func_1510D694(var_a0);
                    }
                    var_v0 += 1;
                    var_a0 += 1;
                } while (var_v0 != 0x48);
                var_v1 = 0x4E;
            }
            var_v0_2 = var_v1;
            if (var_v1 < 0x168) {
                do {
                    sp84 = var_v0_2;
                    func_1510D694((*(s32 *)((char *)((*(&D_800891BC + (D_800B0DF0->unk9 * 4)))) + 0x8)) + var_v0_2);
                    var_v0_2 += 1;
                } while (var_v0_2 != 0x168);
            }
        }
        if (D_800900B8 < 5) {
            D_800900B8 += 1;
        } else {
            temp_s0 = (char *)(var_s0) + 8;
            D_8008FDCC += 0x20;
            if (D_8008FDCC >= 0x100) {
                D_8008FDCC = 0xFF;
            }
            (*(s32 *)((char *)(var_s0) + 0x0)) = 0xDE000000;
            (*(s32 *)((char *)(var_s0) + 0x4)) = &D_80090028;
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xFB000000;
            temp_s0_2 = (char *)(temp_s0) + 8;
            (*(s32 *)((char *)(temp_s0) + 0x4)) = (s32) ((D_8008FDCC & 0xFF) | ~0xFF);
            D_80090060 = &D_891;
            sp34 = &D_80090028;
            func_1510D0EC(&D_7D3, &sp70, 3, 0);
            func_1510D0EC(&D_7D4, &sp70, 3, 0);
            func_1510D0EC(&D_7FC, &sp70, 3, 0);
            func_1510D0EC(&D_7FC + 1, &sp70, 3, 0);
            func_1510D0EC(&D_7F1, &sp70, 3, 0);
            func_1510D0EC(&D_7F2, &sp70, 3, 0);
            func_1510D0EC(&D_82F, &sp70, 3, 0);
            func_1510D0EC(&D_830, &sp70, 3, 0);
            temp_v1 = D_800BE616;
            if (temp_v1 != 0) {
                func_1510D0EC(&D_80E, &sp70, 3, 0);
                func_1510D0EC(&D_80E + 1, &sp70, 3, 0);
            }
            if (temp_v1 == 0) {
                temp_v0 = func_150859AC(0, 6);
                var_v1_3 = temp_v0;
                if (temp_v0 == 0x7D00) {
                    var_v1_3 = 0xF4240;
                }
                sp90 = (s32) var_v1_3;
                if ((func_1509BE40(0, 0x5082, 0x1A) != 0) && (func_1509BE40(0, 0x5083, 0x1A) == 0)) {
                    temp_v0_2 = func_1509B570(0x83);
                    if (temp_v0_2 != NULL) {
                        temp_v1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x64));
                        if (temp_v1_2 == 0) {
                            sp90 = 0;
                        } else if (temp_v1_2 < 3) {
                            sp90 = (s32) (sp90 * temp_v1_2) / 3;
                        }
                    } else {
                        sp90 = 0;
                    }
                }
                var_v1_4 = sp90;
                if ((D_800C35EA == 1) && (D_800C3C9E != -1)) {
                    if (D_800C3C9E == 0) {
                        var_v1_4 = 0;
                    } else {
                        var_v1_4 -= D_800C3C9E;
                        if (D_800C3C9E == 0x7D00) {
                            var_v1_4 = 0xF4240;
                        }
                    }
                }
                if (var_v1_4 > 0) {
                    sp88 = 1;
                } else {
                    sp88 = 0;
                }
                sp90 = var_v1_4;
                temp_s0_3 = func_151ED430(temp_s0_2, &D_80090060, 0x94, 0x3C, 3, 1, 1.0f, 0);
                if (D_80090058 == NULL) {
                    D_80090058 = func_151ED90C(0xA4, 0x17, 0, 0x3F800000);
                    D_8009005C = func_151ED90C(0xA2, 8, 0, 0x3F800000);
                }
                (*(s32 *)((char *)(temp_s0_3) + 0x0)) = 0xD9FFFFFF;
                (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0x220404;
                temp_s0_4 = (char *)(temp_s0_3) + 8;
                (*(s32 *)((char *)(temp_s0_4) + 0x4)) = -1;
                (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xFB000000;
                temp_f0 = (*(s32 *)((char *)(D_800BE628) + 0x4)) * 0.5f;
                temp_f2 = (*(s32 *)((char *)(D_800BE628) + 0x8)) * 0.5f;
                var_s0_2 = func_150900F0((char *)(temp_s0_4) + 8, 1);
                func_151EF954(0x3F000000, 0x3F800000, (f32)(s32)(&D_800E0C38), -temp_f0, temp_f0, -temp_f2, temp_f2, 1.0f);
                D_800E0C30 = D_8008FDCC;
                if (D_80090058 != NULL) {
                    var_v0_3 = 0xA;
                    if (sp88 != 0) {
                        var_t0 = -0x10;
                        if (sp90 >= 0xB) {
                            do {
                                var_t0 -= 0x10;
                                var_v0_3 *= 0xA;
                            } while (var_v0_3 < sp90);
                        }
                        sp8C = var_t0;
                        var_s0_2 = func_151EDBDC(var_s0_2, D_80090058, (f32) var_t0 + -10.0f, -83.0f, D_800ABAE0);
                    }
                }
                var_t0_2 = sp8C;
                if ((D_8009005C != NULL) && (sp3C != 0)) {
                    var_s0_2 = func_151EDBDC(var_s0_2, D_8009005C, 70.0f, 80.0f, D_800ABAE4);
                }
                (*(s32 *)((char *)(var_s0_2) + 0x0)) = 0xDE000000;
                temp_s0_5 = (char *)(var_s0_2) + 8;
                (*(s32 *)((char *)(var_s0_2) + 0x4)) = sp34;
                (*(s32 *)((char *)(var_s0_2) + 0x8)) = 0xEF002C3F;
                (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0x504244;
                var_s0 = (char *)(temp_s0_5) + 8;
                if (sp3C != 0) {
                    sp8C = var_t0_2;
                    temp_v0_3 = func_150859AC(0, 3);
                    var_a3 = temp_v0_3;
                    if (temp_v0_3 != 0) {
                        var_a3 = temp_v0_3 - 1;
                    }
                    if (var_a3 >= 0x64) {
                        var_a3 = 0x63;
                    }
                    (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xFB000000;
                    (*(s32 *)((char *)(var_s0) + 0x4)) = (s32) ((D_8008FDCC & 0xFF) | ~0xFF);
                    sp8C = var_t0_2;
                    var_s0 = func_151EADFC((char *)(var_s0) + 8, 0xEC, 0x1E, (s32) var_a3);
                }
                if (sp88 != 0) {
                    (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
                    temp_s0_6 = (char *)(var_s0) + 8;
                    (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
                    (*(s32 *)((char *)(var_s0) + 0x8)) = 0xFB000000;
                    (*(s32 *)((char *)(temp_s0_6) + 0x4)) = (s32) ((D_8008FDCC & 0xFF) | ~0xFF);
                    D_80090060 = &D_7F6;
                    sp8C = var_t0_2;
                    var_s0 = func_151EADFC(func_151ED430((char *)(temp_s0_6) + 8, &D_80090060, var_t0_2 + 0xA5, 0xAA, 1, 1, 1.0f, 0), var_t0_2 + 0xAD, 0x9B, sp90);
                }
            } else {
                var_s0 = func_151EA15C(func_151ED430(temp_s0_2, &D_80090060, 0x94, 0x12, 3, 1, 1.0f, 0), 0x85, D_8008FDCC, 1);
            }
        }
    }
    return var_s0;
}

void *func_151EB930(void *arg0) {
    void *var_a0;

    var_a0 = arg0;
    if (D_8008FDCC != 0) {
        var_a0 = func_151EA15C(0x6A, D_8008FDCC, 0, 0);
    }
    return var_a0;
}

s32 func_151EB96C(s32 arg0) {
    s32 sp3C;
    s16 var_s1;
    s16 var_s1_2;
    s16 var_t0;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s5;
    s32 var_v0;
    u8 *var_a3;

    if (D_800E0A80 < 0) {

    } else {
        if (D_800E0A90 < 0x168) {
            var_t0 = D_800E0A90 * 4;
            if (var_t0 >= 0x100) {
                goto block_8;
            }
        } else {
            var_t0 = (0x1A9 - D_800E0A90) * 4;
            if (var_t0 < 0) {
                var_t0 = 0;
            }
            if (var_t0 >= 0x100) {
block_8:
                var_t0 = 0xFF;
            }
        }
        var_s1 = D_800E0A80;
        var_v0 = 0;
        temp_s4 = var_t0 & 0xFF;
        if ((*(s16 *)((*(s16 *)((char *)(D_800E0BD8) + ((s16) D_800E0A80 * 4))))) != 0x2A) {
            do {
                var_s1 += 1;
                var_v0 += 1;
            } while ((*(s32 *)((*(s32 *)((char *)(D_800E0BD8) + (var_s1 * 4))))) != 0x2A);
        }
        if (var_v0 >= 0xE) {
            var_s5 = 0xB;
        } else {
            var_s5 = 0x11;
        }
        sp3C = var_v0;
        func_1504332C(0xFFU, 0U, 0U, temp_s4 & 0xFF);
        var_s1_2 = D_800E0A80;
        var_a3 = (*(s32 *)((char *)(D_800E0BD8) + (var_s1_2 * 4)));
        var_s0 = (s32) (0xD0 - (var_v0 * var_s5)) >> 1;
        temp_s3 = var_s0;
        if (*var_a3 != 0x2A) {
            do {
                func_15042D94(0x94, (s16) var_s0, 1, var_a3);
                func_1504332C(0xFFU, 0xFFU, 0xFFU, temp_s4 & 0xFF);
                if (var_s0 == temp_s3) {
                    var_s0 += 0xC;
                }
                var_s1_2 += 1;
                var_a3 = (*(s32 *)((char *)(D_800E0BD8) + (var_s1_2 * 4)));
                var_s0 += var_s5;
            } while (*var_a3 != 0x2A);
        }
    }
    return arg0;
}

void *func_151EBB50(void *arg0) {
    s32 sp6C;
    s32 sp34;
    f32 var_f12;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    temp_s0 = (char *)(arg0) + 8;
    if ((0xFF - ((D_800E0A90 - 0xF0) * 8)) < 0) {

    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xEF082C3F;
    (*(s32 *)((char *)(temp_s0) + 0x4)) = 0x504340;
    temp_s0_2 = (char *)(temp_s0) + 8;
    (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xFCFFFFFF;
    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0xFFFEFB7D;
    temp_s0_3 = (char *)(temp_s0_2) + 8;
    (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0xFF;
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xFB000000;
    temp_v0 = func_1501A6CC((char *)(temp_s0_3) + 8, 0, 0, D_800BE620, D_800BE624);
    var_s0 = temp_v0;
    if (D_80000300 == 0) {

    } else {
        (*(s32 *)((char *)(temp_v0) + 0x4)) = &D_80090028;
        var_s0 = (char *)(temp_v0) + 8;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xDE000000;
        if (D_800E0A90 < 0xF0) {
            var_v1 = 0xFF - ((D_800E0A90 - 0xB4) * 8);
            if (var_v1 < 0) {
                var_v1 = 0;
            }
            if (var_v1 >= 0x100) {
                var_v1 = 0xFF;
            }
            var_f12 = ((f32) D_800E0A90 / 180.0f) + 0.75f;
            if (var_f12 > 1.5f) {
                var_f12 = 1.5f;
            }
            sp6C = var_v1;
            func_150432BC(var_f12);
            func_1504332C(0xFFU, 0U, 0U, var_v1 & 0xFF);
            func_15042D94(0x94, 0x69, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x238)));
            func_150432BC(1.0f);
        } else if (D_800E0A90 < 0x21C) {
            temp_s0_4 = (char *)(var_s0) + 8;
            if (D_800E0A90 < 0x12C) {
                temp_t9 = (D_800E0A90 - 0xF0) * 8;
                var_v1_2 = temp_t9;
                if (temp_t9 >= 0x100) {
                    goto block_18;
                }
            } else {
                var_v1_2 = 0xFF - ((D_800E0A90 - 0x1E0) * 8);
                if (var_v1_2 < 0) {
                    var_v1_2 = 0;
                }
                if (var_v1_2 >= 0x100) {
block_18:
                    var_v1_2 = 0xFF;
                }
            }
            (*(s32 *)((char *)(temp_v0) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xFB000000;
            (*(s32 *)((char *)(temp_s0_4) + 0x4)) = (s32) (((var_v1_2 >> 2) & 0xFF) | ~0xFF);
            sp6C = var_v1_2;
            temp_v0_2 = func_151ED430((char *)(temp_s0_4) + 8, &D_800917F8, 0x92, 0x67, 5, 6, 1.0f, 0);
            (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0;
            temp_t7 = (var_v1_2 & 0xFF) | ~0xFF;
            (*(s32 *)((char *)(temp_v0_2) + 0x8)) = 0xFB000000;
            (*(s32 *)((char *)(temp_v0_2) + 0xC)) = temp_t7;
            sp34 = temp_t7;
            temp_s0_5 = func_151ED430((char *)(temp_v0_2) + 0x10, &D_800917EC, 0x92, 0x1C, 2, 1, 1.0f, 0);
            func_1504332C(0xFFU, 0xFFU, 0xFFU, var_v1_2 & 0xFF);
            func_15042D94(0x94, 0x9D, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x204)));
            func_15042D94(0x94, 0xAA, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x208)));
            func_15042D94(0x94, 0xBC, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x20C)));
            func_150432BC(D_800ABAE8);
            func_15042D94(0x94, 0x2D, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x210)));
            func_15042D94(0x94, 0x37, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x214)));
            func_15042D94(0x94, 0x41, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x218)));
            func_15042D94(0x94, 0x4B, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x21C)));
            func_15042D94(0x94, 0x55, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x220)));
            func_15042D94(0x94, 0x5F, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x224)));
            func_15042D94(0x94, 0x69, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x228)));
            func_15042D94(0x94, 0x73, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x22C)));
            func_15042D94(0x94, 0x7D, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x230)));
            func_15042D94(0x94, 0x87, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x234)));
            func_150432BC(1.0f);
            (*(s32 *)((char *)(temp_s0_5) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0;
            temp_s0_6 = (char *)(temp_s0_5) + 8;
            (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xFB000000;
            (*(s32 *)((char *)(temp_s0_6) + 0x4)) = sp34;
            (*(s32 *)((char *)&(D_80090060) + 0x0)) = &D_89C;
            (*(s32 *)((char *)&(D_80090060) + 0x6)) = 0x10;
            (*(s32 *)((char *)&(D_80090060) + 0x8)) = 0x10;
            var_s0 = func_151ED430((char *)(temp_s0_6) + 8, &D_80090060, 0xC7, 0xB0, 1, 1, 1.0f, 0);
            (*(s32 *)((char *)&(D_80090060) + 0x6)) = 0x20;
            (*(s32 *)((char *)&(D_80090060) + 0x8)) = 0x20;
        } else {
            if (D_800E0A90 < 0x258) {
                temp_t8 = (D_800E0A90 - 0x21C) * 8;
                var_v1_3 = temp_t8;
                if (temp_t8 >= 0x100) {
                    goto block_26;
                }
            } else {
                var_v1_3 = 0xFF - ((D_800E0A90 - 0x30C) * 8);
                if (var_v1_3 < 0) {
                    var_v1_3 = 0;
                }
                if (var_v1_3 >= 0x100) {
block_26:
                    var_v1_3 = 0xFF;
                }
            }
            (*(s32 *)((char *)(temp_v0) + 0x8)) = 0xFB000000;
            (*(s32 *)((char *)(var_s0) + 0x4)) = (s32) ((var_v1_3 & 0xFF) | 0xFF000000);
            (*(s32 *)((char *)&(D_80090060) + 0xA)) = 4;
            (*(s32 *)((char *)&(D_80090060) + 0xB)) = 1;
            (*(s32 *)((char *)&(D_80090060) + 0x0)) = &D_85D;
            (*(s32 *)((char *)&(D_80090060) + 0x6)) = 0x40;
            (*(s32 *)((char *)&(D_80090060) + 0x8)) = 0x40;
            var_s0 = func_151ED430((char *)(var_s0) + 8, &D_80090060, 0x94, 0x69, 3, 1, 1.0f, 0);
            (*(s32 *)((char *)&(D_80090060) + 0x6)) = 0x20;
            (*(s32 *)((char *)&(D_80090060) + 0x8)) = 0x20;
            (*(s32 *)((char *)&(D_80090060) + 0xA)) = 0;
            (*(s32 *)((char *)&(D_80090060) + 0xB)) = 3;
        }
    }
    return var_s0;
}

s32 func_151EC178(s32 arg0) {
    s32 temp_t6;
    s32 var_v0;

    if (D_800E0A90 >= 0x5DD) {
        temp_t6 = (D_800E0A90 - 0x5DC) * 8;
        var_v0 = temp_t6;
        if (temp_t6 >= 0x100) {
            var_v0 = 0xFF;
        }
        func_1504332C(0xFFU, 0xFFU, 0xFFU, var_v0 & 0xFF);
        func_15042D94(0xDC, 0x130, 1, (*(s32 *)((char *)(D_800E0BD8) + 0x1D0)));
    }
    return arg0;
}

void *func_151EC1F0(void *arg0) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;

    var_a0 = arg0;
    if (D_800BE9F0 == 0x21) {

    } else {
        (*(s32 *)((char *)(var_a0) + 0x4)) = &D_80090028;
        var_a0_2 = (char *)(var_a0) + 8;
        (*(s32 *)((char *)(var_a0) + 0x0)) = 0xDE000000;
        if (D_800E0A90 >= 0x12D) {
            temp_v1 = 0x1AC - D_800E0A90;
            var_v1 = temp_v1 * 2;
            if (temp_v1 & 0x40000000) {
                var_v1 = 0;
            }
        } else {
            var_v1 = D_800E0A90 * 8;
            if (var_v1 >= 0x100) {
                var_v1 = 0xFF;
            }
        }
        if (var_v1 != 0) {
            (*(s32 *)((char *)(var_a0) + 0x8)) = 0xFB000000;
            (*(s32 *)((char *)(var_a0_2) + 0x4)) = (s32) ((var_v1 & 0xFF) | ~0xFF);
            var_a0_2 = func_151ED430((char *)(var_a0_2) + 8, &D_800917F8, 0x92, 0x63, 5, 6, 1.0f, 0);
        }
        (*(s32 *)((char *)(var_a0_2) + 0x4)) = -1;
        (*(s32 *)((char *)(var_a0_2) + 0x0)) = 0xFB000000;
        temp_v0 = func_151ED430((char *)(var_a0_2) + 8, &D_80091804, 0x92, 0xCB, 5, 2, 1.0f, 0);
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xFCFFD3FF;
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0xFFA6FF7F;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = 0xFB000000;
        (*(s32 *)((char *)(temp_v0) + 0xC)) = (s32) (D_800E0B97 | 0x20FF2000);
        var_a0 = func_15096934(func_151ED430((char *)(temp_v0) + 0x10, &D_80091810, 0x92, 0xCB, 5, 2, 1.0f, 0));
        temp_v1_2 = 0x1EA - D_800E0A74;
        if (temp_v1_2 < 0) {
            var_v1_2 = 0;
        } else {
            temp_t0 = temp_v1_2 * 0x10;
            var_v1_2 = temp_t0;
            if (temp_t0 >= 0x100) {
                var_v1_2 = 0xFF;
            }
        }
        D_800E0B96 = 0xFF - var_v1_2;
    }
    return var_a0;
}

void *func_151EC3E8(void *arg0) {
    s32 temp_t8;
    s32 var_v0;
    s32 var_v0_3;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 temp_a1_3;
    void *temp_s0;
    void *temp_v0;
    void *var_s0;
    void *var_v0_2;

    var_s0 = arg0;
    if (D_800C35EA == 1) {
        D_800900D4 = 0;
        goto block_24;
    }
    var_v0 = D_800900D4 + (D_800BE9E4 * 4);
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }
    D_800900D4 = (u8) var_v0;
    (*(s32 *)((char *)(var_s0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(var_s0) + 0x4)) = &D_80090028;
    var_s0 = (char *)(var_s0) + 8;
    temp_a1 = (*(s32 *)((char *)(gGameState) + 0x3E));
    if (temp_a1 == 1) {
        return func_151EC648(var_s0, temp_a1, 1);
    }
    if (temp_a1 == 0) {
        temp_a1_2 = (*(s32 *)((char *)(gGameState) + 0x2C));
        if ((temp_a1_2 == 1) && (D_8008FEF8 != 0)) {
            var_v0_2 = func_151EE184(var_s0, temp_a1_2, 1);
        } else {
            var_v0_3 = (s32) (((*(s32 *)((char *)(gGameState) + 0x0)) - 0.5f) * 512.0f);
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 >= 0x100) {
                var_v0_3 = 0xFF;
            }
            if ((s32) D_800900D4 < var_v0_3) {
                var_v0_3 = (s32) D_800900D4;
            }
            if (temp_a1_2 == 1) {
                temp_t8 = (s32) (D_800E0A95 * var_v0_3) >> 8;
                var_v0_3 = temp_t8;
                if (temp_t8 >= 0xFE) {
                    var_v0_3 = 0xFF;
                }
            }
            (*(s32 *)((char *)(var_s0) + 0x4)) = (s32) ((var_v0_3 & 0xFF) | ~0xFF);
            temp_s0 = (char *)(var_s0) + 8;
            (*(s32 *)((char *)(var_s0) + 0x0)) = 0xFB000000;
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xEF002C3F;
            (*(s32 *)((char *)(temp_s0) + 0x4)) = 0x504244;
            D_80090060 = *(&D_800900BC + ((*(s32 *)((char *)(gGameState) + 0x2C)) * 4));
            var_v0_2 = func_151ED430((char *)(temp_s0) + 8, &D_80090060, 0x94, 0x1E, 3, 1, 1.0f, 0);
        }
        var_s0 = var_v0_2;
        if ((*(s32 *)((char *)(gGameState) + 0x8)) >= 0.5f) {
            temp_a1_3 = (*(s32 *)((char *)(gGameState) + 0x2C));
            if (temp_a1_3 >= 3) {
                temp_v0 = (temp_a1_3 * 0x10) + &D_800BE3F8;
                if ((*(s32 *)((char *)(temp_v0) - 0x28)) != -1) {
                    var_s0 = func_151EEBE8(var_s0, (*(s32 *)((char *)(temp_v0) - 0x24)));
                }
            }
        }
    }
block_24:
    return var_s0;
}

void *func_151EC648(void *arg0) {
    s32 sp8C[64];
    s8 spF7;
    s32 spA8;
    s32 spA0;
    s32 sp98;
    s32 sp68;
    f32 sp64;
    void * **sp60;
    void * **temp_t0;
    void * **temp_t1;
    f32 temp_f0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    f32 var_f2;
    s32 *temp_s0_3;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s8 temp_v0;
    s8 var_s2;
    s8 var_v0_4;
    u8 *var_s6_2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s3_5;
    void *temp_v1;
    void *var_s3;
    void *var_v0_5;

    var_s3 = (char *)(arg0) + 8;
    var_a1 = (s32) (((*(s32 *)((char *)(gGameState) + 0x0)) - 0.5f) * 512.0f);
    if (var_a1 < 0) {
        var_a1 = -var_a1;
    }
    if (var_a1 >= 0x100) {
        var_a1 = 0xFF;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_v1 = gGameState;
    var_f2 = (*(s32 *)((char *)(temp_v1) + 0x8));
    if ((var_f2 == 0.0f) && ((*(s32 *)((char *)(temp_v1) + 0xC)) == 0.0f)) {
        D_800900F8 = (*(s32 *)((char *)(temp_v1) + 0x2C));
    } else if (((*(s32 *)((char *)(temp_v1) + 0x2C)) == 0) && ((*(s32 *)((char *)(temp_v1) + 0xC)) < 0.0f)) {
        D_800900F8 = 4;
    }
    if ((*(s32 *)((char *)(temp_v1) + 0x2C)) == 0) {
        var_a3 = 0x6A;
        var_s0 = 0xFF - (s32) (var_f2 * 300.0f);
    } else {
        var_s0 = var_a1;
        if (D_800900F8 == 4) {
            var_f0 = 68.0f;
        } else {
            var_f0 = 76.0f;
        }
        var_a3 = 0x6A - (s32) (var_f2 * var_f0);
    }
    if ((*(s32 *)((char *)(temp_v1) + 0x40)) != 3) {
        if (var_s0 > 0) {
            temp_t0 = (D_800900F8 * 4) + &D_800900D8;
            if (*temp_t0 != NULL) {
                (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) ((var_s0 & 0xFF) | ~0xFF);
                (*(s32 *)((char *)(arg0) + 0x8)) = 0xFB000000;
                var_v1 = 2;
                if (D_800900F8 == 4) {
                    var_f0_2 = D_800ABAEC;
                    var_v0 = 2;
                } else {
                    var_f0_2 = 1.0f;
                    var_v0 = 1;
                    if (D_800900F8 != 0) {
                        var_v1 = 3;
                    }
                }
                D_80090060 = *temp_t0;
                var_s3 = func_151ED430((char *)(var_s3) + 8, &D_80090060, 0x94, var_a3, var_v1, var_v0, var_f0_2, 0);
                var_f2 = (*(s32 *)((char *)(gGameState) + 0x8));
            }
        }
        temp_s0 = 0xFF - (s32) (var_f2 * 300.0f);
        if (temp_s0 > 0) {
            temp_s3 = (char *)(var_s3) + 8;
            (*(s32 *)((char *)(var_s3) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(var_s3) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_s3) + 0x4)) = (s32) ((temp_s0 & 0xFF) | ~0xFF);
            (*(s32 *)((char *)(var_s3) + 0x8)) = 0xFB000000;
            D_80090060 = &D_88C;
            var_s3 = func_151ED430((char *)(temp_s3) + 8, &D_80090060, 0x94, 0x1E, 3, 1, 1.0f, 0);
        }
    }
    temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x40));
    switch (temp_v0) {                              /* irregular */
    case 0:
        (*(s32 *)((char *)&(D_800E0C88) + 0x0)) = 0;
        (*(s32 *)((char *)&(D_800E0C88) + 0x1)) = 0xFF;
        (*(s32 *)((char *)&(D_800E0C88) + 0x2)) = 0xFF;
        (*(s32 *)((char *)&(D_800E0C88) + 0x3)) = 0xFF;
        if (((*(s32 *)((char *)(temp_v1) + 0x8)) >= 0.5f) && ((*(s32 *)((char *)(temp_v1) + 0x2C)) == 4)) {
            temp_t7 = (s32) (D_800E0A94 * D_800E0A95) >> 8;
            var_s6 = temp_t7;
            if (temp_t7 >= 0xFE) {
                var_s6 = 0xFF;
            }
            var_f20 = D_800ABAF0 + (D_800ABAF0 + (D_800ABAF0 * D_8008FDE8));
            var_s1 = (*(s32 *)((char *)(gGameState) + 0x41)) - 4;
            var_s4 = 1;
            var_s0_2 = 0x7E - (s32) (cosf(var_f20) * 52.0f);
            if (var_s1 < 0) {
                var_s1 += 5;
            }
            do {
                var_f20 -= D_800ABAF4;
                temp_t1 = (var_s1 * 4) + &D_800900FC;
                temp_s5 = 0x7E - (s32) (cosf(var_f20) * 52.0f);
                temp_v0_2 = temp_s5 - var_s0_2;
                if (var_s0_2 < temp_s5) {
                    temp_s3_2 = (char *)(var_s3) + 8;
                    (*(s32 *)((char *)(var_s3) + 0x0)) = 0xE7000000;
                    (*(s32 *)((char *)(var_s3) + 0x4)) = 0;
                    (*(s32 *)((char *)(temp_s3_2) + 0x4)) = (s32) ((var_s6 & 0xFF) | ~0xFF);
                    (*(s32 *)((char *)(var_s3) + 0x8)) = 0xFB000000;
                    temp_s2 = (temp_v0_2 >> 1) + var_s0_2;
                    temp_f0 = (f32) temp_v0_2 * 0.03125f;
                    sp64 = temp_f0;
                    sp60 = temp_t1;
                    D_80090060 = *temp_t1;
                    var_s3 = func_151ED430((char *)(temp_s3_2) + 8, &D_80090060, 0x53, temp_s2, 2, 1, temp_f0, -1);
                    if ((D_8008FDE8 == 0.0f) && (var_s4 == 5) && (D_8008FE2C == 0)) {
                        temp_t6 = (D_800BE9AC * 2) & 0x7F;
                        var_v0_2 = temp_t6;
                        if (temp_t6 >= 0x40) {
                            var_v0_2 = 0x7F - temp_t6;
                        }
                        temp_t4 = (s32) (var_s6 * ((var_v0_2 * 3) + 0x3F)) >> 8;
                        var_v0_3 = temp_t4;
                        if (temp_t4 >= 0x100) {
                            var_v0_3 = 0xFF;
                        }
                        (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) ((var_v0_3 & 0xFF) | ~0xFF);
                        (*(s32 *)((char *)(var_s3) + 0x0)) = 0xFB000000;
                        D_80090060 = *(char *)(temp_t1) + 2;
                        var_s3 = func_151ED430((char *)(var_s3) + 8, &D_80090060, 0x53, temp_s2, 2, 1, temp_f0, -1);
                    }
                }
                var_s1 += 1;
                var_s4 += 1;
                if (var_s1 >= 5) {
                    var_s1 -= 5;
                }
                var_s0_2 = temp_s5;
            } while (var_s4 != 8);
        }
        break;
    case 4:
        var_s5 = 0x28;
        spA0 = (s32) (D_800E0A95 * (s32) ((sinf(((f32) (D_800BE9AC & 0x3F) * D_800ABAF8) + D_800ABAFC) + 1.0f) * 127.0f)) >> 8;
        if ((*(s32 *)((char *)(gGameState) + 0x2C)) == 7) {
            var_s5 = 0x70;
            spF7 = 2;
        } else {
            spF7 = 4;
        }
        temp_v0_3 = func_151E24F0((s32 (*)[]) &sp8C[0]);
        var_fp = temp_v0_3;
        if (temp_v0_3 != 0) {
            sp98 = 0;
        }
        var_s6_2 = &D_800E0C88;
        var_s1_2 = 0;
        if (spF7 > 0) {
            do {
                var_s2 = -1;
                var_a2 = 1;
                var_v0_4 = 0;
                if (D_8008FE40 > 0) {
                    do {
                        if (var_s1_2 == (&D_8008FE44)[var_v0_4]) {
                            var_s2 = var_v0_4;
                            var_v0_4 = D_8008FE40;
                            var_a2 = -1;
                        }
                        var_v0_4 += 1;
                    } while (var_v0_4 < D_8008FE40);
                }
                if ((var_s1_2 != 0) && (D_800E0BA0 != 0)) {
                    temp_s0_3 = &(&D_800E0BA0)[var_s1_2];
                    if (*var_s6_2 != 0xFF) {
                        if ((*temp_s0_3 == 0) && (var_s2 != -1)) {
                            spA8 = var_a2;
                            func_151E7F60(var_s1_2, *(&D_800E0B90 + var_s2), var_a2);
                        }
                    } else {
                        temp_a0 = *temp_s0_3;
                        if (temp_a0 != 0) {
                            spA8 = var_a2;
                            func_15060F28(temp_a0, 1, var_a2);
                            *temp_s0_3 = 0;
                        }
                    }
                }
                temp_s3_3 = (char *)(var_s3) + 8;
                var_s0_3 = *var_s6_2 + (var_a2 * (D_800BE9E4 * 8));
                if (var_s0_3 >= 0x100) {
                    var_s0_3 = 0xFF;
                } else if (var_s0_3 < 0) {
                    var_s0_3 = 0;
                }
                *var_s6_2 = (u8) var_s0_3;
                (*(s32 *)((char *)(var_s3) + 0x0)) = 0xE7000000;
                (*(s32 *)((char *)(var_s3) + 0x4)) = 0;
                (*(s32 *)((char *)(var_s3) + 0x8)) = 0xFB000000;
                (*(s32 *)((char *)(temp_s3_3) + 0x4)) = (s32) (D_800E0A95 | ~0xFF);
                D_80090060 = &D_89C + 2;
                temp_a3 = 0x8C - (s32) ((f32) var_s0_3 * D_800ABB00);
                sp68 = temp_a3;
                var_v0_5 = func_151ED430((char *)(temp_s3_3) + 8, &D_80090060, var_s5, temp_a3, 1, 1, 1.0f, 0);
                var_s3 = var_v0_5;
                if (var_s0_3 > 0) {
                    (*(s32 *)((char *)(var_s3) + 0x0)) = 0xE7000000;
                    (*(s32 *)((char *)(var_s3) + 0x4)) = 0;
                    temp_s3_4 = (char *)(var_s3) + 8;
                    (*(s32 *)((char *)(var_s3) + 0x8)) = 0xFB000000;
                    (*(s32 *)((char *)(temp_s3_4) + 0x4)) = (s32) ((spA0 & 0xFF) | ~0xFF);
                    var_v0_5 = func_151ED430((char *)(temp_s3_4) + 8, &D_80090060, var_s5, temp_a3, 1, 1, 1.0f, 1);
                    var_s3 = var_v0_5;
                }
                if (var_s0_3 > 0) {
                    temp_s3_5 = (char *)(var_v0_5) + 8;
                    (*(s32 *)((char *)(var_v0_5) + 0x0)) = 0xE7000000;
                    (*(s32 *)((char *)(var_v0_5) + 0x4)) = 0;
                    temp_t5 = (s32) (D_800E0A95 * var_s0_3) >> 8;
                    var_s0_4 = temp_t5;
                    if (temp_t5 >= 0xFE) {
                        var_s0_4 = 0xFF;
                    }
                    (*(s32 *)((char *)(temp_s3_5) + 0x4)) = (s32) ((var_s0_4 & 0xFF) | ~0xFF);
                    (*(s32 *)((char *)(var_v0_5) + 0x8)) = 0xFB000000;
                    D_80090060 = &D_87B;
                    var_s3 = func_151ED430((char *)(temp_s3_5) + 8, &D_80090060, var_s5, 0x82, 1, 1, 1.0f, 0);
                }
                func_1504332C(0xFFU, 0xFFU, 0xFFU, (s32) D_800E0A95);
                temp_s0_2 = var_s1_2 + 1;
                func_15042D94(var_s5, 0x41, 0x80, &D_800ABAC8, temp_s0_2);
                if ((var_fp != 0) && (var_s2 >= 0) && ((&D_8008FE44)[var_s2] >= 0)) {
                    var_fp -= 1;
                    func_15042D94(var_s5, 0xA8, 0, &D_800ABACC, 0x38);
                    func_15042D94(var_s5, 0xA2, 0x81, &D_800ABAD0, (&sp8C[0])[sp98] + 1);
                    sp98 += 1;
                }
                var_s1_2 = temp_s0_2;
                var_s6_2 += 1;
                var_s5 += 0x48;
            } while (temp_s0_2 != spF7);
        }
        break;
    case 3:
        var_s3 = func_151EA15C(var_s3, 0x6A, 0xFF, 0);
        break;
    }
    return var_s3;
}

void func_151ED09C(void *arg0) {
    s32 sp2C;
    s32 temp_t8;
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80090028;
    temp_a0 = (char *)(arg0) + 8;
    temp_t8 = D_800E0A90 * 4;
    var_v1 = temp_t8;
    if (temp_t8 >= 0x100) {
        var_v1 = 0xFF;
    }
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFB000000;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((var_v1 & 0xFF) | ~0xFF);
    sp2C = var_v1;
    temp_v0 = func_151ED430((char *)(temp_a0) + 8, &D_8009181C, 0x92, 0x6C, 8, 3, 1.0f, 0);
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x8)) = 0xFCFFD3FF;
    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0xFFA6FF7F;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 0xFB000000;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = (s32) ((((s32) (D_800E0B97 * (var_v1 + 1)) >> 8) & 0xFF) | 0xFF802000);
    func_15096934(func_151ED430((char *)(temp_v0) + 0x18, &D_80091828, 0x92, 0x6C, 8, 3, 1.0f, 0));
}

void *func_151ED1E0(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (D_800E0B96 == 0) {
        return arg0;
    }
    temp_a0_2 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xEF082C3F;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0x504340;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xFCFFFFFF;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0xFFFEFB7D;
    temp_a0 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xFB000000;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) D_800E0B96;
    return func_1501A6CC((char *)(temp_a0) + 8, 0, 0, D_800BE620, D_800BE624);
}

void *func_151ED29C(void *arg0, void * **arg1, s32 *arg2) {
    s32 temp_at;
    s32 temp_at_2;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_t6;
    s32 var_a2;
    s32 var_t1;
    s32 var_v0;
    u16 temp_t0;
    u16 temp_v1;
    u8 temp_a3;
    u8 temp_a3_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    temp_a3 = (*(s32 *)((char *)(arg1) + 0xB));
    var_v0 = 1;
    var_t1 = 2;
    *arg2 = (s32) (*(&D_8009DEB0 + temp_a3) + ((*(s32 *)((char *)(arg1) + 0x6)) * (*(s32 *)((char *)(arg1) + 0x8)))) >> *(&D_8009DEB4 + temp_a3);
    temp_t0 = (*(s32 *)((char *)(arg1) + 0x6));
    if ((s32) temp_t0 >= 3) {
        do {
            temp_t5 = var_t1 * 2;
            temp_at = temp_t5 < (s32) temp_t0;
            var_t1 = temp_t5;
            var_v0 += 1;
        } while (temp_at != 0);
        var_t1 = 2;
    }
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x8));
    var_a2 = 1;
    temp_a0_2 = (char *)(arg0) + 8;
    if ((s32) temp_v1 >= 3) {
        do {
            temp_t6 = var_t1 * 2;
            temp_at_2 = temp_t6 < (s32) temp_v1;
            var_t1 = temp_t6;
            var_a2 += 1;
        } while (temp_at_2 != 0);
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_t2 = (((*(s32 *)((char *)(arg1) + 0xA)) & 7) << 0x15) | 0xF5000000;
    (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (((*(&D_8009DEBC + (*(s32 *)((char *)(arg1) + 0xB))) & 3) << 0x13) | temp_t2);
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0x07000000;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    temp_a3_2 = (*(s32 *)((char *)(arg1) + 0xB));
    temp_a0 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = (s32) (((((s32) ((*(&D_8009DEB8 + temp_a3_2) * (*(s32 *)((char *)(arg1) + 0x6))) + 7) >> 3) & 0x1FF) << 9) | temp_t2 | ((temp_a3_2 & 3) << 0x13));
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = (s32) (((var_a2 & 0xF) << 0xE) | 0x80000 | 0x200 | ((var_v0 & 0xF) * 0x10));
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xF2000000;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((((((*(s32 *)((char *)(arg1) + 0x6)) - 1) * 4) & 0xFFF) << 0xC) | ((((*(s32 *)((char *)(arg1) + 0x8)) - 1) * 4) & 0xFFF));
    return (char *)(temp_a0) + 8;
}

void *func_151ED430(void *arg0, void * **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, s32 arg7) {
    s32 spC4;
    s32 spBC;
    s32 spB4;
    s32 spB0;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    void * *var_s4;
    f32 var_f12;
    f32 var_f6;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_t5;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v1_2;
    s16 var_v1_3;
    s32 temp_a1;
    s32 temp_f8;
    s32 temp_fp;
    s32 temp_s7;
    s32 temp_t5_2;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s1;
    s32 var_s3;
    s32 var_s5;
    s32 var_t1;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    u16 temp_t9;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *var_s0;

    sp9C = 0;
    var_a0 = arg7;
    var_v1 = sp9C;
    var_s0 = func_151ED29C(arg0, arg1, &spB0);
    if (var_a0 < 0) {
        var_f12 = 1.0f;
        var_a0 = 0;
    } else {
        var_f12 = arg6;
    }
    var_s4 = (*(s32 *)((char *)(arg1) + 0x0)) + var_a0;
    temp_t9 = (*(s32 *)((char *)(arg1) + 0x8));
    var_f6 = (f32) temp_t9;
    var_t3 = (s32) ((f32) (*(s32 *)((char *)(arg1) + 0x6)) * var_f12 * D_8008FE1C);
    if ((s32) temp_t9 < 0) {
        var_f6 += 4294967296.0f;
    }
    spC4 = 0;
    var_t1 = spA0;
    temp_f8 = (s32) (var_f6 * arg6 * D_8008FE20);
    temp_s7 = (s32) (1024.0f / (arg6 * D_8008FE20));
    temp_fp = (s32) (1024.0f / (var_f12 * D_8008FE1C));
    var_s5 = (s32) ((f32) arg2 * D_8008FE1C) - ((s32) (var_t3 * arg4) >> 1);
    spB4 = (s32) ((f32) arg3 * D_8008FE20) - ((s32) (temp_f8 * arg5) >> 1);
    if (arg4 > 0) {
        do {
            var_s1 = spB4;
            var_s3 = 0;
            if (arg5 > 0) {
                do {
                    if (var_v1 == 0) {
                        spBC = var_t3;
                        var_t3 = spBC;
                        var_t1 = func_1510D0EC(var_s4, &sp98, 3, 0);
                    }
                    var_s3 += 1;
                    if (var_t1 != 0x80000000) {
                        (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
                        (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
                        temp_s0 = (char *)(var_s0) + 8;
                        (*(s32 *)((char *)(var_s0) + 0x8)) = (s32) (((*(&D_8009DEBC + (*(s32 *)((char *)(arg1) + 0xB))) & 3) << 0x13) | 0xFD000000 | (((*(s32 *)((char *)(arg1) + 0xA)) & 7) << 0x15));
                        (*(s32 *)((char *)(temp_s0) + 0x4)) = var_t1;
                        temp_s0_2 = (char *)(temp_s0) + 8;
                        (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xF3000000;
                        temp_a2 = (var_s5 + var_t3) * 4;
                        temp_a1 = spB0 - 1;
                        temp_a3 = var_s5 * 4;
                        temp_s0_3 = (char *)(temp_s0_2) + 8;
                        if (temp_a1 < 0x7FF) {
                            var_v0 = temp_a1;
                        } else {
                            var_v0 = 0x7FF;
                        }
                        (*(s32 *)((char *)(temp_s0_2) + 0x4)) = (s32) (((var_v0 & 0xFFF) << 0xC) | 0x07000000);
                        temp_s0_4 = (char *)(temp_s0_3) + 8;
                        if (temp_a2 > 0) {
                            var_v1_2 = temp_a2;
                        } else {
                            var_v1_2 = 0;
                        }
                        temp_t5 = (var_s1 + temp_f8) * 4;
                        if (temp_t5 > 0) {
                            var_v0_2 = temp_t5;
                        } else {
                            var_v0_2 = 0;
                        }
                        (*(s32 *)((char *)(temp_s0_2) + 0x8)) = (s32) ((var_v0_2 & 0xFFF) | 0xE4000000 | ((var_v1_2 & 0xFFF) << 0xC));
                        if (temp_a3 > 0) {
                            var_v1_3 = temp_a3;
                        } else {
                            var_v1_3 = 0;
                        }
                        temp_a2_2 = var_s1 * 4;
                        if (temp_a2_2 > 0) {
                            var_v0_3 = temp_a2_2;
                        } else {
                            var_v0_3 = 0;
                        }
                        (*(s32 *)((char *)(temp_s0_3) + 0x4)) = (s32) ((var_v0_3 & 0xFFF) | ((var_v1_3 & 0xFFF) << 0xC));
                        (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xE1000000;
                        temp_s0_5 = (char *)(temp_s0_4) + 8;
                        if (temp_a3 < 0) {
                            temp_t7 = (s32) (temp_a3 * (s16) temp_fp) >> 7;
                            if ((s16) temp_fp < 0) {
                                if (temp_t7 > 0) {
                                    var_a1 = temp_t7;
                                } else {
                                    var_a1 = 0;
                                }
                            } else {
                                var_v0_4 = 0;
                                if (temp_t7 < 0) {
                                    var_v0_4 = temp_t7;
                                }
                                var_a1 = var_v0_4;
                            }
                        } else {
                            var_a1 = 0;
                        }
                        var_v0_5 = 0;
                        if (var_s1 & 0x20000000) {
                            if ((s16) temp_s7 < 0) {
                                temp_t5_2 = (s32) (temp_a2_2 * (s16) temp_s7) >> 7;
                                if (temp_t5_2 > 0) {
                                    var_v0_5 = temp_t5_2;
                                } else {
                                    var_v0_5 = 0;
                                }
                            } else {
                                var_a0_2 = 0;
                                temp_t8_2 = (s32) (temp_a2_2 * (s16) temp_s7) >> 7;
                                if (temp_t8_2 < 0) {
                                    var_a0_2 = temp_t8_2;
                                }
                                var_v0_5 = var_a0_2;
                            }
                        }
                        (*(s32 *)((char *)(temp_s0_4) + 0x4)) = (s32) ((-var_v0_5 & 0xFFFF) | (var_a1 * -0x10000));
                        (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xF1000000;
                        (*(s32 *)((char *)(temp_s0_5) + 0x4)) = (s32) ((temp_fp << 0x10) | (temp_s7 & 0xFFFF));
                        var_s0 = (char *)(temp_s0_5) + 8;
                    }
                    var_s1 += temp_f8;
                    var_v1 = 0;
                    if (sp98 >= 0x1001) {
                        var_v1 = 1;
                        if (var_t1 != 0) {
                            var_t1 += (s32) (spB0 << (*(s32 *)((char *)(arg1) + 0xB))) >> 1;
                        }
                        sp98 -= (s32) (spB0 << (*(s32 *)((char *)(arg1) + 0xB))) >> 1;
                    } else {
                        var_s4 = (char *)(var_s4) + 1;
                    }
                } while (var_s3 != arg5);
            }
            var_s5 += var_t3;
            temp_t8 = spC4 + 1;
            spC4 = temp_t8;
        } while (temp_t8 != arg4);
        spA0 = var_t1;
    }
    (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
    return (char *)(var_s0) + 8;
}

u8 *func_151ED90C(s32 arg0, void * arg1, void * arg2, s32 arg3) {
    s32 temp_t4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    u32 *var_v1;
    u32 *var_v1_2;
    u32 temp_a0;
    u32 temp_t2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s1;
    u8 *var_s4;
    u8 *var_s4_2;
    void *var_v0;

    temp_v0 = allocate_memory(0xA8, 1, 0, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x15)) = 1;
    temp_s0 = temp_v0 + 0x28;
    if (func_1503F62C(arg0, arg1, temp_v0, temp_v0 + 0x14, temp_v0 + 0x1C, temp_v0 + 0x20, temp_v0 + 0x24) != 0) {
        func_10004074(temp_v0);
        return NULL;
    }
    guMtxIdentF(temp_s0);
    temp_s1 = temp_v0 + 0x68;
    guMtxIdentF(temp_s1);
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x24))) + 0x3E0)) = temp_s0;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x24))) + 0x3E4)) = temp_s1;
    func_1503F5B8((*(s32 *)((char *)(temp_v0) + 0x24)), 1, arg2, arg3, 0.0f, 0);
    var_s2 = 0;
    var_s3 = 0;
    var_s4 = temp_v0;
    if ((s32) (*(s32 *)((char *)(temp_v0) + 0x14)) > 0) {
loop_6:
        var_s0 = 0;
        var_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x0))) + var_s3));
        do {
            temp_a0 = *var_v1;
            var_v1 += 8;
            var_s0 += 8;
        } while (((temp_a0 >> 0x18) & 0xFF) != 0xDF);
        temp_v0_2 = allocate_memory(var_s0, 1, 1, 1);
        (*(s32 *)((char *)(var_s4) + 0x4)) = temp_v0_2;
        if (temp_v0_2 == NULL) {
            var_s0_2 = 0;
            if (var_s2 > 0) {
                var_s1 = temp_v0;
                do {
                    func_10004074((*(s32 *)((char *)(var_s1) + 0x4)));
                    var_s0_2 += 1;
                    var_s1 += 4;
                } while (var_s0_2 != var_s2);
            }
            func_10004074(temp_v0);
            return NULL;
        }
        var_s2 += 1;
        var_s3 += 4;
        var_s4 += 4;
        if (var_s2 >= (s32) (*(s32 *)((char *)(temp_v0) + 0x14))) {
            var_s2 = 0;
            goto block_15;
        }
        goto loop_6;
    }
block_15:
    if ((s32) (*(s32 *)((char *)(temp_v0) + 0x14)) > 0) {
        var_s3_2 = 0;
        var_s4_2 = temp_v0;
        do {
            var_v0 = (*(s32 *)((char *)(var_s4_2) + 0x4));
            var_v1_2 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x0))) + var_s3_2));
loop_18:
            temp_t2 = *var_v1_2;
            var_v1_2 += 8;
            (*(s32 *)((char *)(var_v0) + 0x0)) = temp_t2;
            temp_t4 = (temp_t2 >> 0x18) & 0xFF;
            (*(s32 *)((char *)(var_v0) + 0x4)) = (s32) (*(s32 *)((char *)(var_v1_2) - 0x4));
            if (temp_t4 == 0xEF) {
                (*(u32 *)((char *)(var_v0) + 0x0)) = (u32) (temp_t2 & 0xFFFEFFFF);
                (*(s32 *)((char *)(var_v0) + 0x4)) = 0x5041C8;
            }
            if (temp_t4 == 0xFC) {
                (*(s32 *)((char *)(var_v0) + 0x0)) = 0U;
            }
            var_v0 = (char *)(var_v0) + 8;
            if (temp_t4 != 0xDF) {
                goto loop_18;
            }
            var_s2 += 1;
            var_s3_2 += 4;
            var_s4_2 += 4;
        } while (var_s2 < (s32) (*(s32 *)((char *)(temp_v0) + 0x14)));
    }
    return temp_v0;
}

void func_151EDB58(u8 *arg0) {
    s32 var_s0;
    u8 *var_s1;

    if (arg0 != NULL) {
        func_1503F7B8((*(s32 *)((char *)(arg0) + 0x24)));
        func_100043B4(arg0, 4);
        var_s0 = 0;
        var_s1 = arg0;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x14)) > 0) {
            do {
                func_100043B4((*(s32 *)((char *)(var_s1) + 0x4)), 4);
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < (s32) (*(s32 *)((char *)(arg0) + 0x14)));
        }
    }
}

void *func_151EDBDC(void *arg0, u8 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    void *sp20;
    void * *var_a0;
    f32 var_f12;
    f32 var_f14;
    s32 *temp_v0_2;
    s32 *var_s0;
    s32 temp_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 **temp_s0_9;
    u8 *var_a0_2;
    u8 temp_t1;
    u8 temp_t2;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;

    var_f12 = arg2;
    var_f14 = arg3;
    sp20 = arg0;
    if (D_8008FE1C != 1.0f) {
        var_f12 *= D_8008FE1C;
        var_f14 *= D_8008FE20;
        arg4 *= D_8008FE1C;
    }
    arg2 = var_f12;
    arg3 = var_f14;
    guMtxIdentF(arg1 + (D_800BE9C0 << 6) + 0x28);
    (*(s32 *)((char *)((arg1 + (D_800BE9C0 << 6))) + 0x58)) = arg2;
    (*(s32 *)((char *)((arg1 + (D_800BE9C0 << 6))) + 0x5C)) = arg3;
    (*(s32 *)((char *)((arg1 + (D_800BE9C0 << 6))) + 0x60)) = -100.0f;
    (*(s32 *)((char *)((arg1 + (D_800BE9C0 << 6))) + 0x28)) = arg4;
    (*(s32 *)((char *)((arg1 + (D_800BE9C0 << 6))) + 0x3C)) = arg4;
    (*(s32 *)((char *)((arg1 + (D_800BE9C0 << 6))) + 0x50)) = arg4;
    func_1503F4B0(arg2, arg3, (*(s32 *)((char *)(arg1) + 0x24)));
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80089470;
    temp_s0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDA380007;
    (*(s32 *)((char *)(temp_s0) + 0x4)) = &D_800E0C38;
    temp_s0_2 = (char *)(temp_s0) + 8;
    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = &D_80090110;
    (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xDE000000;
    temp_s0_3 = (char *)(temp_s0_2) + 8;
    (*(s32 *)((char *)(temp_s0_3) + 0x4)) = -0x403;
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xFC12FE25;
    temp_s0_4 = (char *)(temp_s0_3) + 8;
    (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xD9000000;
    (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0;
    temp_s0_5 = (char *)(temp_s0_4) + 8;
    (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xD9FFFFFF;
    (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0x200404;
    temp_s0_6 = (char *)(temp_s0_5) + 8;
    (*(s32 *)((char *)(temp_s0_6) + 0x4)) = -1;
    (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xFA000000;
    temp_s0_7 = (char *)(temp_s0_6) + 8;
    (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xFB000000;
    temp_s0_8 = (char *)(temp_s0_7) + 8;
    (*(s32 *)((char *)(temp_s0_7) + 0x4)) = (s32) ((D_800E0C30 & 0xFF) | ~0xFF);
    (*(s32 *)((char *)(temp_s0_8) + 0x4)) = 0xFF;
    (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0xF8000000;
    temp_s0_9 = (char *)(temp_s0_8) + 8;
    (*(s32 *)((char *)(temp_s0_8) + 0x8)) = 0xDB06000C;
    temp_s0_10 = temp_s0_9 + 8;
    (*(s32 *)((char *)(temp_s0_9) + 0x4)) = (s32) (*(s32 *)((char *)(((*(s32 *)((char *)(arg1) + 0x24)) + (D_800BE9C0 * 4))) + 0x3E8));
    (*(s32 *)((char *)(temp_s0_9) + 0x8)) = 0xDB060004;
    var_s0 = (char *)(temp_s0_10) + 8;
    (*(s32 *)((char *)(temp_s0_10) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x1C));
    if (arg1 == D_80090058) {
        temp_t1 = (*(s32 *)((char *)(arg1) + 0x15)) - 1;
        var_v1 = temp_t1 & 0xFF;
        (*(s32 *)((char *)(arg1) + 0x15)) = temp_t1;
        if (var_v1 == 0) {
            temp_t2 = (random_u32(temp_s0_6, temp_s0_7, temp_s0_8, temp_s0_9) & 0x7F) + 0xF;
            (*(s32 *)((char *)(arg1) + 0x15)) = temp_t2;
            var_v1 = temp_t2 & 0xFF;
        }
        if (var_v1 < 7) {
            var_a0 = &D_507;
        } else {
            var_a0 = &D_508;
        }
        temp_v0 = func_1510D0EC(var_a0, NULL, 3, 0);
        if (temp_v0 == 0x80000000) {
            return sp20;
        }
        (*(s32 *)((char *)(temp_s0_10) + 0x8)) = 0xDB060018;
        (*(s32 *)((char *)(var_s0) + 0x4)) = temp_v0;
        temp_s0_11 = var_s0 + 8;
        (*(s32 *)((char *)(var_s0) + 0x8)) = 0xDB06001C;
        (*(s32 *)((char *)(temp_s0_11) + 0x4)) = temp_v0;
        var_s0 = (char *)(temp_s0_11) + 8;
        goto block_11;
    }
block_11:
    var_v1_2 = 0;
    if ((s32) (*(s32 *)((char *)(arg1) + 0x14)) > 0) {
        var_a0_2 = arg1;
        do {
            temp_v0_2 = var_s0;
            (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xDE000000;
            var_s0 += 8;
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) (*(s32 *)((char *)(var_a0_2) + 0x4));
            var_v1_2 += 1;
            var_a0_2 += 4;
        } while (var_v1_2 < (s32) (*(s32 *)((char *)(arg1) + 0x14)));
    }
    (*(s32 *)((char *)(var_s0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(var_s0) + 0x4)) = &D_80090128;
    return var_s0 + 8;
}

void func_151EDF4C(void) {
    s32 sp6C;
    s32 sp48;
    s32 *temp_v0_2;
    s32 temp_a0;
    s32 temp_v0_3;
    s32 var_t2;
    s32 var_t3;
    u8 *temp_v0;
    void *temp_v0_4;
    void *var_v1;

    D_80090138 = NULL;
    temp_v0 = allocate_memory(0x1A8, 1, 0, 0);
    D_800E0C7C = temp_v0;
    if (temp_v0 != NULL) {
        D_80090138 = temp_v0 + 0x40;
        var_t3 = 0x1C5;
        var_t2 = 0;
        do {
            sp48 = var_t2;
            sp6C = var_t3;
            temp_v0_2 = func_1502B6BC(0, 1, 0, 2, 9, var_t3);
            D_80090138[var_t2] = (s32) *temp_v0_2;
            func_1510CE60(D_80090138[var_t2], 0, 1, 0x3E, &D_80090138[var_t2] + 8);
            var_v1 = D_80090138[var_t2];
loop_3:
            temp_a0 = ((u32) (*(u32 *)((char *)(var_v1) + 0x0)) >> 0x18) & 0xFF;
            if (temp_a0 == 1) {
                (*(s32 *)((char *)(var_v1) + 0x4)) = (void *) ((*(s32 *)((char *)(var_v1) + 0x4)) + temp_v0_2);
                temp_v0_3 = (s32) (*(s32 *)((char *)(var_v1) + 0x4)) | (s32) &D_8000000C;
                (*(s32 *)((temp_v0_3))) = 0;
                (*(s32 *)((temp_v0_3))) = 0;
                (*(s32 *)((temp_v0_3))) = 0;
                (*(s32 *)((temp_v0_3))) = 0xFF;
                temp_v0_4 = temp_v0_3 + 0x10;
                (*(s32 *)((char *)(temp_v0_4) + 0xC)) = 0;
                (*(s32 *)((char *)(temp_v0_4) + 0xD)) = 0;
                (*(s32 *)((char *)(temp_v0_4) + 0xE)) = 0;
                (*(s32 *)((char *)(temp_v0_4) + 0xF)) = 0xFF;
            }
            if (temp_a0 == 0xFC) {
                (*(s32 *)((char *)(var_v1) + 0x0)) = 0xFC127E05U;
                (*(s32 *)((char *)(var_v1) + 0x4)) = -0xC08;
            }
            if (temp_a0 == 0xEF) {
                (*(s32 *)((char *)(var_v1) + 0x4)) = 0x0F0A4000;
                (*(u32 *)((char *)(var_v1) + 0x0)) = (u32) ((*(u32 *)((char *)(var_v1) + 0x0)) | 0x100000);
            }
            var_v1 = (char *)(var_v1) + 8;
            if (temp_a0 != 0xDF) {
                goto loop_3;
            }
            var_t3 += 1;
            var_t2 += 0xC;
        } while (var_t3 != 0x1E3);
        D_800E0C80 = 0;
        D_800E0C81 = 0;
        D_800E0C82 = 0;
        D_800E0C83 = 0;
        (*(s32 *)((char *)(D_800E0C7C) + 0x0)) = 0;
        (*(s32 *)((char *)(D_800E0C7C) + 0x20)) = 0;
        D_800E0C84 = 0;
    }
}

void *func_151EE184(void *arg0) {
    s32 spBC;
    u8 *spB4;
    u16 spAA;
    s32 spA0;
    s32 sp98;
    void * sp94;
    void * sp90;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_t6;
    s32 temp_v1;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    s32 var_s4_5;
    s32 var_s4_6;
    s32 var_s4_7;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_a0;
    u32 var_a0;
    u8 **var_a3;
    u8 **var_a3_2;
    u8 **var_v0_4;
    u8 *temp_s0_2;
    u8 *temp_v1_4;
    u8 *var_s0;
    u8 *var_v0_3;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 temp_a0_2;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_a0_2;
    u8 var_a1;
    u8 var_a1_2;
    u8 var_v0_5;
    void *temp_s5;
    void *temp_s5_2;
    void *temp_s5_3;
    void *temp_s5_4;
    void *temp_s5_5;
    void *temp_s5_6;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a2_4;
    void *var_s5;
    void *var_s5_2;

    var_s5 = arg0;
    var_s6 = 0;
    if (D_80090138 == NULL) {

    } else {
        var_a2 = 0;
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 1) {
            var_a2 = 1;
            D_800E0C81 -= 1;
        }
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 2) {
            D_800E0C81 += 1;
            var_a2 = 1;
            if ((D_800E0C81 == 4) && (D_800E0C80 >= 5)) {
                D_800E0C80 = 4;
            }
        }
        temp_a0 = D_800E0C81;
        if (temp_a0 < 0) {
            D_800E0C81 = 5;
        }
        if (temp_a0 >= 6) {
            D_800E0C81 = 0;
        }
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 8) {
            D_800E0C80 += 1;
            var_a2 = 1;
        }
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 4) {
            D_800E0C80 -= 1;
            var_a2 = 1;
        }
        if (temp_a0 == 4) {
            var_v0 = 5;
        } else {
            var_v0 = 6;
            if (temp_a0 == 5) {
                var_v0 = 1;
            }
        }
        if (D_800E0C80 < 0) {
            D_800E0C80 = var_v0 - 1;
        }
        if (D_800E0C80 >= var_v0) {
            D_800E0C80 = 0;
        }
        if (var_a2 != 0) {
            func_10010F30(0x62D, 0x4650, 0x40, 0, 0);
        }
        var_v0_2 = (temp_a0 * 6) + D_800E0C80;
        if (temp_a0 == 5) {
            var_v0_2 -= 1;
        }
        spBC = var_v0_2;
        spB4 = allocate_memory(0x80, 4, 2, 0);
        if (D_800BE748[0] & 0x8000) {
            D_800E0C82 += 8;
        } else {
            D_800E0C82 -= 8;
        }
        if (D_800E0C82 < 0) {
            D_800E0C82 = 0;
        }
        if (D_800E0C82 >= 0xD) {
            D_800E0C82 = 0xC;
        }
        temp_s0 = spBC + 0x41;
        var_s4 = temp_s0;
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x10) {
            func_10010F30(0x500, 0x7D00, 0x40, 0, 0);
            if (D_800E0C81 == 5) {
                var_s4 = 0x20;
            } else if (D_800E0C81 == 4) {
                if (D_800E0C80 == 0) {
                    if (D_800E0C83 > 0) {
                        D_800E0C83 -= 1;
                    }
                    var_s4 = 0;
                    D_800E0C7C[D_800E0C83] = 0;
                } else if (D_800E0C80 == 1) {
                    var_s4 = 0x2E;
                } else if (D_800E0C80 == 4) {
                    var_a0 = 0xFFC3FFFE;
                    var_s4_2 = 0x90;
                    var_a3 = (char *)(D_800E0BD8) + 0x240;
                    do {
                        if ((var_s4_2 - 0x90) < D_800E0C83) {
                            var_a1 = (*(s32 *)((char *)&(D_800E0C7C[var_s4_2]) - 0x90));
                        } else {
                            var_a1 = 0x20;
                        }
                        var_a2_2 = 0;
                        var_v0_3 = *var_a3;
loop_51:
                        if (var_a1 != *var_v0_3) {
                            var_a0 &= ~(1 << var_a2_2);
                        }
                        var_a2_2 += 1;
                        var_v0_3 += 1;
                        if (var_a2_2 < 0x20) {
                            goto loop_51;
                        }
                        var_s4_2 += 1;
                        var_a3 += 4;
                    } while (var_s4_2 < 0xA3);
                    var_a2_3 = -1;
                    var_s4_3 = 0;
                    do {
                        if (var_a0 & 1) {
                            var_a2_3 = var_s4_3;
                        }
                        var_s4_3 += 1;
                        var_a0 = var_a0 >> 1;
                    } while (var_s4_3 < 0x21);
                    if (var_a2_3 >= 0) {
                        temp_v1 = 1 << var_a2_3;
                        temp_t6 = D_800E9D00 | temp_v1;
                        D_800E9D00 = temp_t6;
                        if (temp_v1 == 0x400) {
                            D_800E9D00 = temp_t6 & ~0x800;
                        } else if (temp_v1 == 0x800) {
                            D_800E9D00 &= ~0x400;
                        }
                        spA0 = 0x10;
                        var_s6 = (random_u32((void *) var_a0, (void *) var_a1, (void *) var_a2_3, var_a3) & 1) + 0xC3;
                        goto block_104;
                    }
                    spA0 = 0x11;
                    var_s4_4 = 0xA3;
loop_66:
                    var_s0 = D_800E0C7C;
                    if (var_s0 != NULL) {
                        temp_s2 = var_s4_4 * 4;
                        var_a3_2 = (*(s32 *)((char *)(D_800E0BD8) + temp_s2));
                        if (var_a3_2 != NULL) {
loop_68:
                            var_a0_2 = *var_s0;
                            var_a2_4 = NULL;
                            var_a1_2 = var_a0_2;
                            if (((s32)(*var_a3_2) == var_a0_2) && (var_a1_2 != 0)) {
                                var_v0_4 = var_a3_2;
                                if (*var_a3_2 != 0) {
loop_71:
                                    temp_v1_2 = (*(s32 *)((char *)(var_v0_4) + 0x1));
                                    var_a0_2 = (*(s32 *)((char *)(var_s0) + 0x1));
                                    var_s0 += 1;
                                    var_a2_4 = (char *)(var_a2_4) + 1;
                                    var_v0_4 += 1;
                                    var_a1_2 = var_a0_2;
                                    if ((temp_v1_2 == var_a0_2) && (var_a1_2 != 0)) {
                                        if (temp_v1_2 != 0) {
                                            goto loop_71;
                                        }
                                    }
                                }
                            }
                            if (((*(s32 *)((char *)(var_a3_2) + (s32)(var_a2_4))) == 0) && ((var_a1_2 == 0x20) || (var_a1_2 == 0))) {
                                var_s0 = NULL;
                                var_s6 = (random_u32((void *) var_a0_2, (void *) var_a1_2, var_a2_4, var_a3_2) & 1) + 0xC1;
                            } else if (var_a1_2 == 0x20) {
                                var_s0 += 1;
                            } else {
                                if ((var_a0_2 != 0) && (var_a1_2 != 0x20)) {
loop_82:
                                    var_a0_2 = (*(s32 *)((char *)(var_s0) + 0x1));
                                    var_s0 += 1;
                                    if (var_a0_2 != 0) {
                                        if (var_a0_2 != 0x20) {
                                            goto loop_82;
                                        }
                                    }
                                }
                                if (var_a0_2 == 0) {
                                    var_s0 = NULL;
                                }
                            }
                            if (var_s0 != NULL) {
                                var_a3_2 = (*(s32 *)((char *)(D_800E0BD8) + temp_s2));
                                if (var_a3_2 != NULL) {
                                    goto loop_68;
                                }
                            }
                        }
                    }
                    var_s4_4 += 1;
                    if ((var_s4_4 < 0xC8) && (var_s6 == 0)) {
                        goto loop_66;
                    }
                    if (var_s6 == 0) {
                        var_s6 = (random_u32() & 1) + 0xC5;
                        var_s4_5 = 0;
                        if ((*(s32 *)((char *)(D_800E0C7C) + 0x20)) != 0) {
                            temp_v1_3 = (*(s32 *)((char *)(D_800E0C7C) + 0x0));
                            if (temp_v1_3 != 0) {
                                var_v1 = D_800E0C7C;
                                if ((*(s32 *)((char *)(D_800E0C7C) + 0x20)) == temp_v1_3) {
loop_94:
                                    temp_a0_2 = (*(s32 *)((char *)(var_v1) + 0x21));
                                    var_s4_5 += 1;
                                    var_v1 += 1;
                                    if (temp_a0_2 != 0) {
                                        temp_v0 = *var_v1;
                                        if (temp_v0 != 0) {
                                            if (temp_a0_2 == temp_v0) {
                                                goto loop_94;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        temp_v1_4 = &D_800E0C7C[var_s4_5];
                        var_s4_6 = 0;
                        if (((*(s32 *)((char *)(temp_v1_4) + 0x20)) == 0) && ((*(s32 *)((char *)(temp_v1_4) + 0x0)) == 0)) {
                            var_s4_6 = 0;
                            D_800E0C84 += 1;
                            if (D_800E0C84 == 1) {
                                var_s6 = 0xC7;
                            }
                        } else {
                            D_800E0C84 = 0;
                        }
                    } else {
                        D_800E0C84 = 0;
block_104:
                        var_s4_6 = 0;
                    }
                    temp_t8 = (*(s32 *)((char *)(D_800E0C7C) + 0x0));
                    var_v1_2 = D_800E0C7C;
                    var_v0_5 = temp_t8 & 0xFF;
                    if (temp_t8 != 0) {
                        do {
                            (*(s32 *)((char *)(var_v1_2) + 0x20)) = var_v0_5;
                            var_s4_6 += 1;
                            var_v1_2 = &D_800E0C7C[var_s4_6];
                            var_v0_5 = *var_v1_2;
                        } while (var_v0_5 != 0);
                    }
                    (*(s32 *)((char *)(&D_800E0C7C[var_s4_6]) + 0x20)) = 0;
                    var_s4 = 0;
                    if (var_s6 != 0) {
                        func_1001263C(var_s6, 0x7D00, 0x40);
                    }
                    temp_v0_2 = func_15083E90(9);
                    if (temp_v0_2 != NULL) {
                        (*(u8 *)((char *)(temp_v0_2) + 0x232)) = (u8) spA0;
                        gCurrentObject = temp_v0_2;
                        gCurrentObjectIndex = (s8) ((s32) ((char *)(temp_v0_2) - (char *)(&gObjects)) / 812);
                        (*(s32 *)((char *)(temp_v0_2) + 0x218)) = func_1507BB28(0, (*(s32 *)((char *)(temp_v0_2) + 0x232)));
                        (*(s32 *)((char *)(temp_v0_2) + 0x21C)) = 0;
                    }
                    D_800E0C83 = 0;
                    D_800E0C7C[D_800E0C83] = 0;
                } else {
                    var_s4 = temp_s0 - 2;
                }
            }
            if (var_s4 > 0) {
                D_800E0C7C[D_800E0C83] = (u8) var_s4;
                if (D_800E0C83 < 0x13) {
                    D_800E0C83 += 1;
                }
                D_800E0C7C[D_800E0C83] = 0;
            }
        }
        func_15043E68(spB4, 0xC1F00000, 0xC1200000, 0, -115.0f, 10.0f, D_800ABB04);
        temp_s0_2 = spB4 + 0x40;
        func_150A7D00(temp_s0_2, 0, 0, -(f32) D_800E0C82);
        guPerspective(&D_800E0C38, &spAA, 0x42480000, 0x42726666, 53.0f, D_800ABB08, 1.0f);
        (*(s32 *)((char *)(var_s5) + 0x0)) = 0xDB0E0000;
        temp_s5 = (char *)(var_s5) + 8;
        (*(s32 *)((char *)(var_s5) + 0x4)) = (s32) spAA;
        (*(s32 *)((char *)(var_s5) + 0x8)) = 0xDA380007;
        temp_s5_2 = (char *)(temp_s5) + 8;
        (*(s32 *)((char *)(temp_s5) + 0x4)) = &D_800E0C38;
        (*(s32 *)((char *)(temp_s5) + 0x8)) = 0xD9000000;
        (*(s32 *)((char *)(temp_s5_2) + 0x4)) = 0;
        temp_s5_3 = (char *)(temp_s5_2) + 8;
        (*(s32 *)((char *)(temp_s5_2) + 0x8)) = 0xD9FFFFFF;
        (*(s32 *)((char *)(temp_s5_3) + 0x4)) = 0x200404;
        temp_s5_4 = (char *)(temp_s5_3) + 8;
        (*(s32 *)((char *)(temp_s5_3) + 0x8)) = 0xDA380003;
        var_s5 = (char *)(temp_s5_4) + 8;
        (*(s32 *)((char *)(temp_s5_4) + 0x4)) = spB4;
        var_a0_3 = 0;
        do {
            (*(s32 *)((char *)(var_s5) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(var_s5) + 0x4)) = 0;
            temp_s5_5 = (char *)(var_s5) + 8;
            if (var_a0_3 == (spBC * 0xC)) {
                (*(s32 *)((char *)(var_s5) + 0x8)) = 0xFB000000;
                temp_s5_6 = (char *)(temp_s5_5) + 8;
                (*(s32 *)((char *)(temp_s5_5) + 0x4)) = (s32) (D_800E0A95 | 0xFF00FF00);
                var_s5_2 = (char *)(temp_s5_6) + 8;
                (*(s32 *)((char *)(temp_s5_5) + 0x8)) = 0xDA380001;
                (*(s32 *)((char *)(temp_s5_6) + 0x4)) = temp_s0_2;
            } else {
                (*(s32 *)((char *)(var_s5) + 0x8)) = 0xFB000000;
                var_s5_2 = (char *)(temp_s5_5) + 8;
                (*(s32 *)((char *)(temp_s5_5) + 0x4)) = (s32) (D_800E0A95 | ~0xFF);
            }
            (*(s32 *)((char *)(var_s5_2) + 0x0)) = 0xDE000000;
            var_s5 = (char *)(var_s5_2) + 8;
            (*(s32 *)((char *)(var_s5_2) + 0x4)) = (s32) D_80090138[var_a0_3];
            temp_v0_3 = var_s5;
            if (var_a0_3 == (spBC * 0xC)) {
                (*(s32 *)((char *)(var_s5_2) + 0x8)) = 0xDA380003;
                var_s5 = (char *)(var_s5) + 8;
                (*(s32 *)((char *)(temp_v0_3) + 0x4)) = spB4;
            }
            var_a0_3 += 0xC;
        } while (var_a0_3 < 0x168);
        func_1504332C(0xFFU, 0xB1U, 0x1EU, (s32) D_800E0A95);
        func_150428D4(D_800E0C7C, &sp98, &sp94, &sp90);
        var_s4_7 = 0x4B - (sp98 >> 1);
        if (var_s4_7 < 0xA) {
            var_s4_7 = 0xA;
        }
        func_15042D94(var_s4_7, 0xB4, 0x80, D_800E0C7C);
        if ((D_800BE9AC & 0x1F) >= 0xA) {
            sp98 = var_s4_7 + sp98 + 2;
            func_1504332C(0xFFU, 0xFFU, 0xFFU, 0xFF);
            func_15042D94(sp98, 0xB4, 0x80, &D_800ABAD4);
        }
    }
    return var_s5;
}

void *func_151EEBE8(void *arg0, u32 arg1) {
    u8 *sp48;
    s32 sp3C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_13;
    void *temp_s0_14;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *var_s0;
    void *var_s0_2;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_s0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFB000000;
    var_s0_2 = (char *)(temp_s0) + 8;
    (*(s32 *)((char *)(temp_s0) + 0x4)) = (s32) (D_800E0A94 | ~0xFF);
    temp_v0 = func_1510D0EC(&D_7FB, NULL, 3, 0);
    if (temp_v0 != 0x80000000) {
        (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xFD100000;
        temp_s0_2 = (char *)(var_s0_2) + 8;
        (*(s32 *)((char *)(var_s0_2) + 0x4)) = temp_v0;
        (*(s32 *)((char *)(var_s0_2) + 0x8)) = 0xF5100000;
        (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0x07054260;
        temp_s0_3 = (char *)(temp_s0_2) + 8;
        (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xE6000000;
        (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0;
        temp_s0_4 = (char *)(temp_s0_3) + 8;
        (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xF3000000;
        (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0x075FF000;
        temp_s0_5 = (char *)(temp_s0_4) + 8;
        (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0;
        temp_s0_6 = (char *)(temp_s0_5) + 8;
        (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xF5101800;
        (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0x54260;
        temp_s0_7 = (char *)(temp_s0_6) + 8;
        (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xF2000000;
        (*(s32 *)((char *)(temp_s0_7) + 0x4)) = 0xBC07C;
        temp_s0_8 = (char *)(temp_s0_7) + 8;
        (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0xEF002C3F;
        (*(s32 *)((char *)(temp_s0_8) + 0x4)) = 0x504244;
        var_s0_2 = func_151E86E4(func_151E86E4((char *)(temp_s0_8) + 8, 0x190, 0x100, 0x250, 0x200, 0, 0, 0, 0x400, 0x400), 0x250, 0x100, 0x310, 0x200, 0, 0x5E0, 0, -0x400, 0x400);
    }
    (*(s32 *)((char *)(var_s0_2) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
    var_s0 = (char *)(var_s0_2) + 8;
    temp_v0_2 = func_1510D0EC(&D_887, NULL, 3, 0);
    if (temp_v0_2 != 0x80000000) {
        (*(s32 *)((char *)(var_s0_2) + 0x8)) = 0xFD180000;
        temp_s0_9 = (char *)(var_s0) + 8;
        (*(s32 *)((char *)(var_s0) + 0x4)) = temp_v0_2;
        (*(s32 *)((char *)(var_s0) + 0x8)) = 0xF5180000;
        (*(s32 *)((char *)(temp_s0_9) + 0x4)) = 0x07094250;
        temp_s0_10 = (char *)(temp_s0_9) + 8;
        (*(s32 *)((char *)(temp_s0_9) + 0x8)) = 0xE6000000;
        (*(s32 *)((char *)(temp_s0_10) + 0x4)) = 0;
        temp_s0_11 = (char *)(temp_s0_10) + 8;
        (*(s32 *)((char *)(temp_s0_10) + 0x8)) = 0xF3000000;
        (*(s32 *)((char *)(temp_s0_11) + 0x4)) = 0x073FF000;
        temp_s0_12 = (char *)(temp_s0_11) + 8;
        (*(s32 *)((char *)(temp_s0_11) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0_12) + 0x4)) = 0;
        temp_s0_13 = (char *)(temp_s0_12) + 8;
        (*(s32 *)((char *)(temp_s0_12) + 0x8)) = 0xF5181000;
        (*(s32 *)((char *)(temp_s0_13) + 0x4)) = 0x94250;
        temp_s0_14 = (char *)(temp_s0_13) + 8;
        (*(s32 *)((char *)(temp_s0_13) + 0x8)) = 0xF2000000;
        (*(s32 *)((char *)(temp_s0_14) + 0x4)) = 0x7C07C;
        var_s0 = func_151E86E4(func_151E86E4((char *)(temp_s0_14) + 8, 0x250, 0xBC, 0x290, 0xFC, 0, 0, 0, 0x400, 0x400), 0x180, 0xBC, 0x1D0, 0xFC, 0, 0x200, 0x200, 0x400, 0x400);
    }
    temp_v1 = arg1 + 1;
    if (temp_v1 != D_800E0C85) {
        sp48 = NULL;
        sp3C = temp_v1;
        if (arg1 < (u32) (func_1502B7F0(&sp48, 1, 0x1D) >> 1)) {
            D_8009013C = (void * *) (*(s32 *)((char *)(sp48) + (arg1 * 2)));
        } else {
            D_8009013C = NULL;
        }
        func_10004074(sp48);
        D_800E0C85 = (u8) sp3C;
    }
    if (D_8009013C != NULL) {
        (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
        var_s0 = func_151ED430((char *)(var_s0) + 8, &D_8009013C, 0x94, 0x60, 1, 2, 1.0f, 0);
    }
    return var_s0;
}

void func_151EEFF0(void) {
    D_800E9D00 = 0;
}
