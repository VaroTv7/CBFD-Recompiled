/**
 * Auto-decompiled from asm/49D30.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u64 __ll_lshift();                    /* extern */
u16 **allocate_memory();                /* extern */
void * func_10004074();                            /* extern */
void * func_1000E17C();                                  /* extern */
void * func_1501A39C();                      /* extern */
void * func_1501C730();                 /* extern */
void * func_150238D0();                                  /* extern */
s16 func_15023BB0(); /* extern */
void * func_150242F8();                            /* extern */
s32 func_1502B6BC();   /* extern */
f32 func_150497E0(s32 (*)[], void *, f32, u16);          /* extern */
void * func_1504A730();                                  /* extern */
void *func_1505EEF4();                           /* extern */
void * func_15061B4C();                                  /* extern */
void * func_1507E73C();                             /* extern */
void * func_1507E7E4();               /* extern */
void * func_1507EABC();                             /* extern */
void * func_1507F640();                                  /* extern */
void * func_1507FEA0();                             /* extern */
void * func_15080228();                                  /* extern */
void * func_15082A44();             /* extern */
void * func_1508F060();                     /* extern */
void * func_1510E7A4(); /* extern */
void *func_151149AC();                     /* extern */
void * func_15128CB0();                            /* extern */
void * func_1512D560();                    /* extern */
void * func_15169040();                   /* extern */
void * func_1516D2E0();                        /* extern */
void * func_1516D328();                        /* extern */
void * func_1517D5FC();        /* extern */
void * func_1517EE40();           /* extern */
void * func_151F2BA8();                                  /* extern */
s32 func_151F2CDC();                 /* extern */
void * func_151F2D6C();                              /* extern */
void func_1501CC3C();                            /* static */
void func_1501DAAC();                       /* static */
void func_1501E400();                       /* static */
void func_1501E81C();             /* static */
void func_1501EA18();                       /* static */
void func_1501EC38();                       /* static */
void func_1501FC8C(s32 arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, s32 arg5);
void func_1501FE68(s32 arg0, f32 arg1, f32 *arg2, s32 arg3);
void func_1501FFE8(); /* static */
void func_15020388(f32 arg0, f32 arg1);
f32 *func_15020878(); /* static */
void func_15020EC4();                       /* static */
void func_1502178C();  /* static */
void func_15022234();                       /* static */
void func_15022248();                       /* static */
void func_15022528();                       /* static */
void func_15022754();                       /* static */
void func_150227BC();                        /* static */
void func_15022848();                       /* static */
void func_150228E4();                        /* static */
s32 func_150229E4();                       /* static */
void func_15022BA4();                       /* static */
u8 func_15023264();               /* static */
void func_150233BC();                               /* static */
void func_150233E4();                               /* static */
void func_150235DC();                       /* static */
extern s32 D_2D4B0;
extern s32 D_7FFFC000;
extern s32 D_8003A5E8;
extern s8 D_80084070;
extern s8 D_80084074;
extern s32 D_80084078;
extern s32 D_800840FC;
extern s32 D_80084110;
extern s8 D_8008FD84;
extern f32 D_800969C0;
extern f32 D_800969C4;
extern f32 D_800969C8;
extern f32 D_800969CC;
extern f32 D_800969D0;
extern f32 D_800969D4;
extern f32 D_800969D8;
extern f32 D_800969DC;
extern f32 D_800969E0;
extern f32 D_800969E4;
extern f32 D_800969E8;
extern f32 D_800969EC;
extern f32 D_800969F0;
extern f32 D_800969F4;
extern f32 D_800969F8;
extern f32 D_800969FC;
extern f32 D_80096A00;
extern f32 D_80096A04;
extern f32 D_80096A08;
extern f32 D_80096A0C;
extern f32 D_80096A10;
extern f32 D_80096A14;
extern f32 D_80096A18;
extern f32 D_80096A1C;
extern s32 D_800BE9C8;
extern void *D_800BEAD0;
extern s32 *D_800BEAD4;
extern s32 D_800BEAD8;
extern s32 D_800BEB98;
extern void *D_800BEB9C;
extern u8 D_800BEBA0;
extern s32 D_800BEBB0;
extern s32 D_800C1060;
extern s32 D_800C3510;
extern s32 D_800C3518;
extern s32 D_800C354A;
extern s32 D_800C3550;
extern s32 D_800C358C;
extern f32 D_800C3594;
extern s32 D_800C3598;
extern f32 D_800C35A0;
extern f32 D_800C35A4;
extern s8 D_800C35A8;
extern u8 D_800C35A9;
extern u8 D_800C35AA;
extern s32 D_800C35B0;
extern s32 D_800C35B8;
extern s32 D_800C35C0;
extern u8 D_800C35C2;
extern u8 D_800C35C3;
extern u16 *D_800C35C8;
extern s32 D_800C35D0;
extern s32 D_800C35D8;
extern s32 D_800C35E0;
extern u8 D_800C35E8;
extern s32 D_800C35F0;
extern u8 D_800C35F8;
extern f32 D_800C3620;
extern f32 D_800C3628;
extern s32 D_800C363A;
extern s32 D_800C3640;
extern f32 D_800C3648;
extern f32 D_800C364C;
extern f32 D_800C3650;
extern s32 D_800C3656;
extern s32 D_800C3658;
extern s32 D_800C365A;
extern s32 D_800C365C;
extern s32 D_800C365E;
extern s32 D_800C3660;
extern s8 D_800C3662;
extern s32 D_800C3668;
extern s8 D_800C3672;
extern f32 D_800C3674;
extern f32 D_800C3678;
extern s32 D_800C367C;
extern u8 D_800C3680;
extern s32 D_800C3688;
extern s32 D_800C3778;
extern s32 D_800C3868;
extern s32 D_800C3960;
extern s32 D_800C3A50;
extern u8 D_800C3A58;
extern s32 D_800C3A64;
extern u8 D_800C3C89;
extern s8 D_800C3C8A;
extern u8 D_800C3C8B;
extern u8 D_800C3C8C;
extern u8 D_800C3C8D;
extern s16 D_800C3C8E;
extern u8 D_800C3C98;
extern u8 D_800C3C99;
extern s16 D_800C3C9A;
extern u8 D_800C3C9C;
extern s8 D_800C3C9D;
extern s16 D_800C3C9E;
extern s32 D_800C3D48;
extern u16 **D_800C3D50;
extern s32 D_800CBE10;
extern s32 D_800CBFDF;
extern u8 D_800D2100;
extern u8 D_800D2E40;
s32 func_1501D2C4();
void func_1501E1B4();
s32 func_1501F72C(s32 arg0, f32 arg1, f32 *arg2, s32 arg3, s32 *arg4);
void func_15023440();

void func_1501C880(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 *temp_t5;
    s32 temp_t4;
    s32 temp_t8;
    s32 var_a0;
    s32 var_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_t5 = (D_800BE9C0 * 0x60) + &D_800BEAD8;
    D_800BEAD4 = temp_t5;
    *temp_t5 = 0;
    temp_t8 = (s32) ((*(s32 *)((char *)&(D_800BE9C8) + 0x4)) - (*(s32 *)((char *)&(D_800BE9C8) + 0x0))) >> 3;
    var_t0 = *(&D_800BE9C8 + (D_800BE9C0 * 4));
    temp_t4 = (s32) (D_800BE9D0 - var_t0) >> 3;
    var_a0 = temp_t4;
    if ((temp_t4 < 0) || (temp_t8 < temp_t4)) {
        sp24 = temp_t8;
        func_1501A39C(var_a0, &D_800BE9D0);
        D_800BE9D0 = (*(s32 *)((char *)(D_800BE9D8) + (D_800BE9C0 * 4)));
        temp_v0 = D_800BE9D0;
        D_800BE9D0 = (char *)(temp_v0) + 8;
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xE9000000;
        temp_v0_2 = D_800BE9D0;
        D_800BE9D0 = (char *)(temp_v0_2) + 8;
        (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xDF000000;
        var_t0 = *(&D_800BE9C8 + (D_800BE9C0 * 4));
        var_a0 = (s32) (D_800BE9D0 - var_t0) >> 3;
    }
    if ((var_a0 < 0) || ((temp_t8 - 0x190) < var_a0)) {
        D_800BE9D0 = var_t0 + ((temp_t8 - 0x190) * 8);
        temp_v0_3 = D_800BE9D0;
        D_800BE9D0 = (char *)(temp_v0_3) + 8;
        (*(s32 *)((char *)(temp_v0_3) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_v0_3) + 0x0)) = 0xE9000000;
        temp_v0_4 = D_800BE9D0;
        D_800BE9D0 = (char *)(temp_v0_4) + 8;
        (*(s32 *)((char *)(temp_v0_4) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_v0_4) + 0x0)) = 0xDF000000;
        var_t0 = *(&D_800BE9C8 + (D_800BE9C0 * 4));
    }
    (*(s32 *)((char *)(D_800BEAD4) + 0x48)) = var_t0;
    (*(s32 *)((char *)(D_800BEAD4) + 0x4C)) = (s32) (((s32) (D_800BE9D0 - *(&D_800BE9C8 + (D_800BE9C0 * 4))) >> 3) * 8);
    func_1501CC3C(var_a0);
    (*(s32 *)((char *)(D_800BEAD4) + 0x18)) = 1;
    (*(s32 *)((char *)(D_800BEAD4) + 0x1C)) = 4;
    (*(s32 *)((char *)(D_800BEAD4) + 0x20)) = &D_100290D0;
    (*(s32 *)((char *)(D_800BEAD4) + 0x24)) = (s32) (&D_100291A0 - &D_100290D0);
    if (D_800BEBA0 != 0) {
        (*(s32 *)((char *)(D_800BEAD4) + 0x28)) = &D_800C1060;
        (*(s32 *)((char *)(D_800BEAD4) + 0x30)) = (void * *) D_800BEB9C;
    } else {
        (*(s32 *)((char *)(D_800BEAD4) + 0x28)) = &D_800BEBB0;
        (*(s32 *)((char *)(D_800BEAD4) + 0x30)) = (void * *) D_800BEAD0;
    }
    (*(s32 *)((char *)(D_800BEAD4) + 0x34)) = 0x800;
    (*(s32 *)((char *)(D_800BEAD4) + 0x38)) = &D_800CBE10;
    (*(s32 *)((char *)(D_800BEAD4) + 0x3C)) = 0x400;
    (*(s32 *)((char *)(D_800BEAD4) + 0x40)) = (s32) D_80038090;
    (*(s32 *)((char *)(D_800BEAD4) + 0x44)) = (s32) D_80038094;
    (*(s32 *)((char *)(D_800BEAD4) + 0x50)) = &D_8003A5E8;
    (*(s32 *)((char *)(D_800BEAD4) + 0x54)) = 0xC00;
    (*(s32 *)((char *)(D_800BEAD4) + 0xC)) = 0x23;
    if (arg1 != 0) {
        (*(s32 *)((char *)(D_800BEAD4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_800BEAD4) + 0xC)) | 0x40);
    }
    if (D_800BE617 != 0) {
        (*(s32 *)((char *)(D_800BEAD4) + 0xC)) = (s32) ((*(s32 *)((char *)(D_800BEAD4) + 0xC)) | ((D_80082FA0 + 1) << 0x10));
        D_800BE617 = 0;
    }
    (*(s32 *)((char *)(D_800BEAD4) + 0x58)) = &D_800BEA10;
    (*(s32 *)((char *)(D_800BEAD4) + 0x5C)) = (void *) ((D_800BE9C0 << 5) + &D_800BEA68);
    (*(s32 *)((char *)(D_800BEAD4) + 0x10)) = (s32) (*(s32 *)((char *)(D_8002AAE8) + (D_800BE9C0 * 4)));
    osWritebackDCacheAll();
    osSendMesg(&D_8003B1E8, D_800BEAD4, 1);
    if (arg1 != 0) {
        D_800BE9C0 ^= 1;
    }
    D_800BEAA8 += 1;
}

void func_1501CC3C(void) {
    s32 sp2C;
    s32 sp28;
    void *sp20;
    void * *temp_a1;
    void * *temp_a1_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_t1;
    u8 var_t0;
    void *temp_v0;
    void *temp_v0_2;

    var_t1 = 4;
    var_t0 = D_800B0DF0->unk2B;
    if ((s32) var_t0 >= 2) {
        var_t0 -= 2;
        var_t1 = 0;
    }
    if (D_800BEB98 == 1) {
        var_t0 += 2;
    }
    temp_v0 = (var_t0 * 0x10) + &D_80084078;
    if ((var_t0 != D_80084070) || (var_t1 != D_80084074)) {
        temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
        sp20 = temp_v0;
        sp2C = (s32) var_t0;
        sp28 = var_t1;
        func_10004514(temp_v1 + &D_2D4B0, &D_800C1060, (*(s32 *)((char *)(temp_v0) + 0x4)) - temp_v1, 1);
        temp_v1_2 = (*(s32 *)((char *)(temp_v0) + 0x8));
        temp_a1 = ((*(s32 *)((char *)(temp_v0) + 0x4)) - (*(s32 *)((char *)(temp_v0) + 0x0))) + &D_800C1060;
        D_800BEB9C = temp_a1;
        func_10004514(temp_v1_2 + &D_2D4B0, temp_a1, (*(s32 *)((char *)(temp_v0) + 0xC)) - temp_v1_2, 1);
        D_80084070 = (s8) var_t0;
        temp_v0_2 = ((var_t0 + var_t1) * 0x10) + &D_80084078;
        D_80084074 = (s8) var_t1;
        temp_v1_3 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
        sp20 = temp_v0_2;
        func_10004514(temp_v1_3 + &D_2D4B0, &D_800BEBB0, (*(s32 *)((char *)(temp_v0_2) + 0x4)) - temp_v1_3, 1);
        temp_a1_2 = ((*(s32 *)((char *)(temp_v0_2) + 0x4)) - (*(s32 *)((char *)(temp_v0_2) + 0x0))) + &D_800BEBB0;
        D_800BEAD0 = temp_a1_2;
        temp_v1_4 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
        func_10004514(temp_v1_4 + &D_2D4B0, temp_a1_2, (*(s32 *)((char *)(temp_v0_2) + 0xC)) - temp_v1_4, 1);
    }
}

void func_1501CDC0(s32 arg0) {
    s32 *var_a1;
    s32 var_a0;
    s32 var_v0;
    u8 *temp_v1;
    void *temp_t7;

    temp_v1 = arg0 + &D_800C363A;
    var_v0 = 0;
    if ((s32) *temp_v1 > 0) {
        var_a1 = (arg0 * 0x78) + &D_800C3960;
        do {
            var_a0 = 0;
loop_3:
            (*(s32 *)((char *)(*var_a1) + var_a0)) = 0xFF;
            (*(s32 *)((char *)((*var_a1 + var_a0)) + 0x1)) = 0xFF;
            (*(s32 *)((char *)((*var_a1 + var_a0)) + 0x2)) = 0xFF;
            temp_t7 = *var_a1 + var_a0;
            var_a0 += 4;
            (*(s32 *)((char *)(temp_t7) + 0x3)) = 0xFF;
            if (var_a0 != 0x10) {
                goto loop_3;
            }
            var_v0 += 1;
            var_a1 += 4;
        } while (var_v0 < (s32) *temp_v1);
    }
}

void func_1501CE54(s32 arg0) {
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t3;
    s32 *temp_v1;
    s32 temp_v0;
    s32 var_a3;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t1_2;
    u16 *temp_a2;
    u16 *var_t2;
    u16 *var_t2_2;
    u16 temp_a2_2;
    u16 temp_t5;
    u16 temp_t6;
    u8 temp_a1;

    temp_v0 = arg0 * 4;
    temp_v1 = temp_v0 + &D_800C3640;
    *temp_v1 = 0;
    temp_a1 = *(&D_800C363A + arg0);
    if (temp_a1 != 0) {
        temp_a2 = *(&D_800C35D8 + temp_v0);
        if ((s32) *temp_a2 >= 4) {
            temp_a3 = (*(s32 *)((char *)((*(&D_800C3688 + (arg0 * 0x78)))) + 0x12));
            if (temp_a3 != -0x270F) {
                *temp_v1 = (s32) temp_a3;
                return;
            }
        }
        var_a3 = 0;
        var_t0 = 0;
        if ((s32) temp_a1 > 0) {
            var_t2 = (&D_800C35C8)[arg0];
            var_t1 = 0;
            do {
                temp_t6 = *var_t2;
                var_t2 += 2;
                if ((temp_t6 != 0) && ((*(s32 *)((char *)(temp_a2) + var_t1)) != 0)) {
                    temp_t3 = (*(s32 *)((char *)((*(&D_800C3688 + (arg0 * 0x78) + (var_t0 * 4)))) + 0xA));
                    if (*temp_v1 < temp_t3) {
                        *temp_v1 = (s32) temp_t3;
                        var_a3 = 1;
                    }
                }
                var_t0 += 1;
                var_t1 += 2;
            } while (var_t0 < (s32) temp_a1);
        }
        if (var_a3 == 0) {
            var_t0_2 = 0;
            if ((s32) temp_a1 > 0) {
                var_t2_2 = (&D_800C35C8)[arg0];
                var_t1_2 = 0;
                do {
                    temp_t5 = *var_t2_2;
                    var_t2_2 += 2;
                    if (temp_t5 != 0) {
                        temp_a2_2 = (*(u16 *)(*(&D_800C35D0 + temp_v0) + var_t1_2));
                        if (temp_a2_2 != 0) {
                            temp_a3_2 = (*(s32 *)((char *)((*(&D_800C3778 + (arg0 * 0x78) + (var_t0_2 * 4)) + (temp_a2_2 * 8))) - 0x2));
                            if (*temp_v1 < temp_a3_2) {
                                *temp_v1 = (s32) temp_a3_2;
                            }
                        }
                    }
                    var_t0_2 += 1;
                    var_t1_2 += 2;
                } while (var_t0_2 < (s32) temp_a1);
            }
        }
    }
}

s16 func_1501CFF8(s32 arg0) {
    s16 var_v1;
    s32 var_v0;
    u16 *var_a2;
    u16 temp_t7;
    u8 temp_a1;

    temp_a1 = *(&D_800C363A + arg0);
    var_v1 = 0;
    var_v0 = 0;
    if ((s32) temp_a1 > 0) {
        var_a2 = *(&D_800C35D8 + (arg0 * 4));
        do {
            temp_t7 = *var_a2;
            var_v0 += 1;
            var_a2 += 2;
            var_v1 += temp_t7;
        } while (var_v0 < (s32) temp_a1);
    }
    return var_v1;
}

void func_1501D044(s32 arg0) {
    *(&D_800C35B8 + (arg0 * 4)) = -0x64;
    (&D_800C35B0)[arg0] = 0;
    *(&D_800C35C0 + arg0) = 0;
    D_800C3C8E = 0;
    *(&D_800C363A + arg0) = 0;
    *(&D_800C35EA + arg0) = 0;
    D_800C3D50 = NULL;
    D_800C35F8 = 0xFF;
    D_800C3648 = 0.0f;
    D_800C364C = 0.0f;
    D_800C3650 = 0.0f;
    (&D_800C3654)[arg0] = 0;
    *(&D_800C3656 + arg0) = 0;
    *(&D_800C3658 + arg0) = 1;
    *(&D_800C365A + arg0) = 0;
    *(&D_800C365C + arg0) = 0;
    *(&D_800C365E + arg0) = 0;
    *(&D_800C3660 + arg0) = 0;
    D_800C3638 = 0;
    D_800C3662 = 0;
    D_800C3C8C = 0;
    D_800C3C8D = 0;
    D_800C35C2 = 0;
    D_800C3A58 = 0;
    D_800C35A4 = 0.0f;
    D_800C3C8A = -1;
    D_800C3C8B = 0;
    D_800C3674 = D_800969C0;
    D_800C3678 = D_800969C0;
    D_800C367C = 0;
    D_800C3680 = 0;
    D_800C3672 = 0;
    D_800C3C9D = 0x64;
    D_800C3C9E = -1;
    func_150233BC();
    D_8008FD84 = 0;
    D_800C3670 = 0;
}

s32 func_1501D1D4(s32 arg0, s32 arg1, s32 arg2) {
    void * sp34;
    void * sp30;
    s32 temp_v0;

    temp_v0 = func_1502B6BC(&sp30, 0, &sp34, 3, 6, arg0, arg1);
    if (temp_v0 != 0) {
        *(&D_800C3668 + (arg2 * 4)) = temp_v0;
    } else {
        *(&D_800C3668 + (arg2 * 4)) = 0;
    }
    return temp_v0;
}

void func_1501D258(s32 arg0, s32 arg1) {
    u64 temp_ret;
    void *temp_a0;

    if (D_800C3670 == 0) {
        temp_ret = __ll_lshift(0, 1, arg1 >> 0x1F, arg1);
        temp_a0 = (arg0 * 8) + &D_800C3A60;
        (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((*(s32 *)((char *)(temp_a0) + 0x4)) | (u32) temp_ret);
        (*(s32 *)((char *)(temp_a0) + 0x0)) = (s32) ((*(s32 *)((char *)(temp_a0) + 0x0)) | temp_ret);
    }
}

s32 func_1501D2C4(s32 arg0, s32 arg1) {
    s32 temp_t9;
    s32 var_v0;
    u64 temp_ret;

    if (D_800C3670 != 0) {
        return 1;
    }
    temp_ret = __ll_lshift(0, 1, arg1 >> 0x1F, arg1);
    temp_t9 = arg0 * 8;
    if ((temp_ret & *(D_800C3A60 + temp_t9)) || (var_v0 = 0, (((u32) temp_ret & *(&D_800C3A64 + temp_t9)) != 0))) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_1501D348(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void **sp70;
    u8 *sp5C;
    s32 sp58;
    u16 ***sp54;
    u16 ***sp48;
    u16 ***sp44;
    u16 ***sp40;
    u16 ***sp3C;
    s16 temp_v0_7;
    s32 *var_v0_7;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v1;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u16 ***temp_s4;
    u16 ***temp_t5;
    u16 ***temp_v1_2;
    u16 ***temp_v1_3;
    u16 ***temp_v1_4;
    s32 var_v1_2;
    u16 ***var_v1_3;
    u16 **temp_v0_3;
    u16 **temp_v0_4;
    u16 **temp_v0_5;
    u16 temp_t0;
    u16 temp_v0_6;
    u16 var_v0_2;
    u16 var_v0_3;
    u8 *temp_s1_4;
    u8 *temp_t7;
    u8 temp_v0;
    void **temp_v1;
    void **var_v0;
    void **var_v0_4;
    void *temp_s2;
    void *var_a0;
    void *var_a0_2;
    void *var_a0_3;
    void *var_v0_5;
    void *var_v0_6;

    temp_t7 = arg2 + &D_800C35EA;
    sp5C = temp_t7;
    temp_v0 = *temp_t7;
    if ((temp_v0 != 1) && (D_800C35C4 == 0)) {
        D_800C3C90 = (u8) arg3;
        D_800C3C94 = arg4;
        if (arg0 != D_800BE9F0) {
            D_800C35C4 = arg1 + 1;
            func_1501C730(1, arg0, 0, 0, 0);
            if (*sp5C != 0) {
                D_800C35C5 = 0;
                return;
            }
            D_800C35C5 = 1;
            return;
        }
        (&D_800C35E8)[arg2] = arg1;
        if (temp_v0 != 2) {
            D_800C35A8 = (s8) D_800BE9F0;
            D_800C3C98 = arg1;
        }
        func_1501D044(arg2);
        if (func_1501D1D4(arg0, (s32) arg1, arg2) != 0) {
            temp_v0_2 = arg2 * 4;
            temp_v1 = *(&D_800C3668 + temp_v0_2);
            temp_s2 = *temp_v1;
            sp58 = temp_v0_2;
            sp70 = temp_v1;
            temp_s4 = sp58 + &D_800C35C8;
            *temp_s4 = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x0)) * 2, 1, 0, 0);
            var_s3 = 1;
            var_s0 = 0;
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x0)) > 0) {
                var_v1 = 0;
                var_s3 = 1;
                var_v0 = (char *)(sp70) + 8;
                do {
                    var_s0 += 1;
                    (*(s16 *)((char *)(*temp_s4) + var_v1)) = (s16) ((u32) (*(s16 *)((char *)(var_v0) + 0x4)) >> 3);
                    var_v1 += 2;
                    var_v0 = (char *)(var_v0) + 8;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x0)));
                var_s0 = 0;
            }
            var_v0_2 = (*(s32 *)((char *)(temp_s2) + 0x2));
            if ((s32) var_v0_2 < (s32) (*(s32 *)((char *)(temp_s2) + 0x0))) {
                var_v0_2 = (u16) (s32) (*(u16 *)((char *)(temp_s2) + 0x0));
            }
            temp_s1 = var_v0_2 * 2;
            temp_v0_3 = allocate_memory(temp_s1, 1, 0, 0);
            temp_v1_2 = sp58 + &D_800C35D0;
            *temp_v1_2 = temp_v0_3;
            sp44 = temp_v1_2;
            bzero(temp_v0_3, temp_s1);
            var_v0_3 = (*(s32 *)((char *)(temp_s2) + 0x4));
            temp_t0 = (*(s32 *)((char *)(temp_s2) + 0x0));
            if ((s32) var_v0_3 < (s32) temp_t0) {
                var_v0_3 = temp_t0;
            }
            temp_s1_2 = var_v0_3 * 2;
            temp_v0_4 = allocate_memory(temp_s1_2, 1, 0, 0);
            temp_v1_3 = sp58 + &D_800C35D8;
            *temp_v1_3 = temp_v0_4;
            sp40 = temp_v1_3;
            bzero(temp_v0_4, temp_s1_2);
            temp_v1_4 = sp58 + &D_800C35E0;
            *temp_v1_4 = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x6)) * 4, 1, 0, 0);
            sp3C = temp_v1_4;
            temp_v0_5 = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x0)) << 6, 1, 0, 0);
            temp_t5 = sp58 + &D_800C3A50;
            sp54 = temp_t5;
            *temp_t5 = temp_v0_5;
            var_v1_2 = NULL;
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x0)) > 0) {
                do {
                    temp_v0_6 = (*(s32 *)((char *)(*temp_s4) + var_v1_2));
                    temp_s1_3 = var_s0 << 6;
                    if (temp_v0_6 != 0) {
                        sp48 = var_v1_2;
                        (*(s32 *)((char *)((*sp54 + temp_s1_3)) + 0x4)) = allocate_memory(temp_v0_6 * 4, 1, 0, 0);
                        (*(s32 *)((char *)((*sp54 + temp_s1_3)) + 0x38)) = allocate_memory(0x194, 1, 0, 0);
                    }
                    var_s0 += 1;
                    var_v1_2 += 2;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x0)));
                var_s0 = 0;
            }
            *(&D_800C3958 + sp58) = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x0)) * 0x44, 1, 0, 0);
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x0)) > 0) {
                var_v1_3 = (arg2 * 0x78) + &D_800C3960;
                do {
                    sp48 = var_v1_3;
                    var_s0 += 1;
                    *var_v1_3 = allocate_memory(0x10, 1, 0, 0);
                    var_v1_3 += 4;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x0)));
                var_s0 = 0;
            }
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x0)) > 0) {
                var_v1_4 = 0;
                do {
                    var_s0 += 1;
                    (*(s32 *)((char *)(*sp40) + var_v1_4)) = 0;
                    (*(s32 *)((char *)(*sp44) + var_v1_4)) = 0;
                    (*(s32 *)((char *)(*temp_s4) + var_v1_4)) = 0;
                    var_v1_4 += 2;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x0)));
                var_s0 = 0;
            }
            temp_s1_4 = arg2 + &D_800C363A;
            *temp_s1_4 = (u8) (*(u8 *)((char *)(temp_s2) + 0x0));
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x0)) > 0) {
                var_a0 = (arg2 * 0x78) + &D_800C3868;
                var_v1_5 = 0;
                var_v0_4 = (char *)(sp70) + 8;
                do {
                    var_s0 += 1;
                    (*(s16 *)((char *)(*temp_s4) + var_v1_5)) = (s16) ((u32) (*(s16 *)((char *)(var_v0_4) + 0x4)) >> 3);
                    var_v1_5 += 2;
                    var_a0 = (char *)(var_a0) + 4;
                    (*(s32 *)((char *)(var_a0) - 0x4)) = (void *) (*(s32 *)((char *)(var_v0_4) + 0x0));
                    var_s3 += 1;
                    var_v0_4 = (char *)(var_v0_4) + 8;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x0)));
                var_s0 = 0;
            }
            *(&D_800C35F0 + sp58) = *((char *)(sp70) + (var_s3 * 8));
            var_s3_2 = var_s3 + (*(s32 *)((char *)(temp_s2) + 0x0));
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x2)) > 0) {
                var_v0_5 = (char *)(sp70) + (var_s3_2 * 8);
                var_a0_2 = (arg2 * 0x78) + &D_800C3778;
                var_v1_6 = 0;
                do {
                    var_s0 += 1;
                    (*(s16 *)((char *)(*sp44) + var_v1_6)) = (s16) ((u32) (*(s16 *)((char *)(var_v0_5) + 0x4)) >> 3);
                    var_v1_6 += 2;
                    var_a0_2 = (char *)(var_a0_2) + 4;
                    (*(s32 *)((char *)(var_a0_2) - 0x4)) = (s32) (*(s32 *)((char *)(var_v0_5) + 0x0));
                    var_s3_2 += 1;
                    var_v0_5 = (char *)(var_v0_5) + 8;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x2)));
                var_s0 = 0;
            }
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x4)) > 0) {
                var_v0_6 = (char *)(sp70) + (var_s3_2 * 8);
                var_a0_3 = (arg2 * 0x78) + &D_800C3688;
                var_v1_7 = 0;
                do {
                    var_s0 += 1;
                    (*(s16 *)((char *)(*sp40) + var_v1_7)) = (s16) ((u32) (*(s16 *)((char *)(var_v0_6) + 0x4)) >> 3);
                    var_v1_7 += 2;
                    var_a0_3 = (char *)(var_a0_3) + 4;
                    (*(s32 *)((char *)(var_a0_3) - 0x4)) = (s32) (*(s32 *)((char *)(var_v0_6) + 0x0));
                    var_s3_2 += 1;
                    var_v0_6 = (char *)(var_v0_6) + 8;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x4)));
                var_s0 = 0;
            }
            if ((s32) (*(s32 *)((char *)(temp_s2) + 0x6)) > 0) {
                var_v0_7 = (char *)(sp70) + (var_s3_2 * 8);
                var_v1_8 = 0;
                do {
                    var_s0 += 1;
                    (*(s32 *)((char *)(*sp3C) + var_v1_8)) = *var_v0_7;
                    var_v1_8 += 4;
                    var_v0_7 += 8;
                } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x6)));
                var_s0 = 0;
            }
            if (arg3 != 0) {
                ((s32 (*)())((char *)(&D_800840FC + (arg3 * 4))))(arg0, (s32) arg1, arg2, arg4);
            }
            temp_v0_7 = func_1501CFF8(arg2);
            D_800C3C9A = temp_v0_7;
            D_800C3D50 = allocate_memory((temp_v0_7 & 0xFFFF) * 0xC, 1, 0, 0);
            *(&D_800C35B0 + sp58) = 0;
            func_1501CDC0(arg2);
            func_1501CE54(arg2);
            func_15022BA4(arg2);
            if ((s32) *temp_s1_4 > 0) {
                do {
                    func_15020388(var_s0, arg2);
                    var_s0 += 1;
                } while (var_s0 < (s32) *temp_s1_4);
            }
            func_150238D0();
            *sp5C = 1;
            D_800C3638 = 1;
            func_15022234(arg2);
            func_15022248(arg2);
            if (*temp_s1_4 == 0) {
                func_1501E81C(0, arg2);
            }
            func_150242F8(1, arg2);
            func_1501EC38(arg2);
            func_15022848(arg2);
            func_15022754(arg2);
            func_15022528(arg2);
            func_15020EC4(arg2);
            D_800DBFF4[0] = 4;
            func_1501DAAC(arg2);
        }
    }
}

void func_1501DAAC(s32 arg0) {
    void *sp74;
    u8 *sp68;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 var_s5;
    s32 *var_s6;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    u8 *temp_t7;
    void *temp_v0_4;
    void *temp_v0_5;

    D_800C3C99 = 0;
    D_800C35A9 = 0;
    D_800C3C9C = 0;
    D_800C35AA = 0;
    temp_t7 = arg0 + &D_800C363A;
    D_800C3C8E = 0;
    sp68 = temp_t7;
    var_s5 = -1;
    var_s1 = 0;
    if ((s32) *temp_t7 > 0) {
        var_s6 = (arg0 * 0x78) + &D_800C3688;
        do {
            temp_v0 = *var_s6;
            temp_s0 = temp_v0 + 0x18;
            if (temp_v0 != 0) {
                sp74 = NULL;
                func_15023BB0(temp_s0, 5, var_s1, &sp74, 1, 0x1E, 0, 0, 0, 0, arg0);
                if (sp74 != NULL) {
                    D_800C3C99 = 1;
                }
                sp74 = NULL;
                func_15023BB0(temp_s0, 5, var_s1, &sp74, 1, 0xE, 0, 0, 0, 0, arg0);
                if (sp74 != NULL) {
                    D_800C3C9C = 1;
                }
                sp74 = NULL;
                func_15023BB0(temp_s0, 5, var_s1, &sp74, 1, 0x68, 0, 0, 0, 0, arg0);
                if (sp74 != NULL) {
                    D_800C35AA = 1;
                }
                sp74 = NULL;
                func_15023BB0(temp_s0, 5, var_s1, &sp74, 1, 0x44, 0, 0, 0, 0, arg0);
                if (sp74 != NULL) {
                    D_800C35A9 = 1;
                }
                sp74 = NULL;
                temp_v0_2 = func_15023BB0(temp_s0, 5, var_s1, &sp74, 1, 0x77, 0, 0, 0, 0, arg0);
                if (sp74 != NULL) {
                    D_800C3C8E = temp_v0_2;
                }
                sp74 = NULL;
                temp_v0_3 = func_15023BB0(temp_s0, 5, var_s1, &sp74, 1, 1, 1, 0, 0, 0, arg0);
                if ((sp74 != NULL) && ((var_s5 == -1) || (temp_v0_3 < var_s5))) {
                    var_s5 = temp_v0_3;
                    if ((*(s32 *)((char *)(sp74) + 0x6)) == 1) {
                        temp_v0_4 = &D_80084110 + ((*(s32 *)((char *)(sp74) + 0x5)) * 3);
                        func_1517EE40((*(s32 *)((char *)(temp_v0_4) + 0x0)), (*(s32 *)((char *)(temp_v0_4) + 0x1)), (*(s32 *)((char *)(temp_v0_4) + 0x2)), 0, 1, 0);
                    } else {
                        temp_v0_5 = &D_80084110 + ((*(s32 *)((char *)(sp74) + 0x5)) * 3);
                        func_1517EE40((*(s32 *)((char *)(temp_v0_5) + 0x0)), (*(s32 *)((char *)(temp_v0_5) + 0x1)), (*(s32 *)((char *)(temp_v0_5) + 0x2)), 0, 0, 0);
                    }
                }
            }
            var_s1 += 1;
            var_s6 += 4;
        } while (var_s1 < (s32) *sp68);
    }
    (&D_800C35B0)[arg0] = (s32) (u16) D_800C3C8E;
}

void func_1501DE18(s32 arg0) {
    s32 *var_s0;
    s8 var_s1;

    (&D_800C35B0)[arg0] = *(&D_800C3640 + (arg0 * 4)) + D_800BEA08;
    func_150242F8(1, 0);
    func_1501EC38(0);
    func_150242F8(0, 0);
    func_15020EC4(0);
    var_s0 = &gObjects;
    var_s1 = 0;
    do {
        if (*var_s0 != 0) {
            gCurrentObjectIndex = var_s1;
            if (func_150229E4(var_s0) != 0) {
                func_1502178C(var_s0, arg0, -1);
            }
        }
        var_s1 += 1;
        var_s0 += 0x32C;
    } while (var_s1 != 0x19);
    func_1501E81C(1, arg0);
}

void func_1501DF04(s32 arg0) {
    s32 *temp_v0;
    s32 *var_v0;
    u8 temp_s0;
    u8 temp_s0_2;

    if (func_100127D0() != 0) {
        func_151F2BA8();
    }
    temp_v0 = func_15072208(&gObjects, 0);
    if (temp_v0 != NULL) {
        func_15060F28(temp_v0, 0);
    }
    temp_s0 = D_800C3C99;
    func_1501DE18(arg0);
    if ((temp_s0 != 0) && (D_800C35C4 == 0)) {
loop_6:
        temp_s0_2 = D_800C3C99;
        func_1501DE18(arg0);
        if (temp_s0_2 != 0) {
            if (D_800C35C4 == 0) {
                goto loop_6;
            }
        }
    }
    if ((D_800C35A9 == 0) && (D_800C3C8A != 1) && (D_800C3C8D == 0)) {
        func_1517EE40(0U, 0U, 0U, 0x1E, 0, 0);
    }
    var_v0 = &gObjects;
    do {
        if ((*(s32 *)((char *)(var_v0) + 0x0)) != 0) {
            (*(s32 *)((char *)(var_v0) + 0xA4)) = 0;
        }
        var_v0 += 0x32C;
    } while ((char *)(var_v0) != (char *)(&D_800D121C));
    D_800C3663 = 0;
    func_1000E17C();
    D_800DBFF4[0] = 4;
    D_800C3672 = 1;
}

s32 func_1501E05C(s32 arg0) {
    if (D_800BE9F0 == 0x1D) {
        if (D_8008FD84 != 0) {
            D_8008FD84 = 0;
            return 1;
        }
        if (D_800C35E8 != 5) {
            goto block_19;
        }
        goto block_5;
    }
block_5:
    if (D_800BE9F0 == 0x21) {
        if ((((*(s32 *)((D_800BE710)))) & 0x1000) && (D_8000030C == 1) && (D_800C35B0 >= 0x12D)) {
            return 1;
        }
        goto block_19;
    }
    if ((((*(s32 *)((D_800BE710)))) & 0x20) && (D_800C3C9C == 0)) {
        if (D_800D2E40 != 0) {
            return 1;
        }
        if ((func_1501D2C4(D_800BE9F0, (s32) (&D_800C35E8)[arg0]) != 0) && ((D_800C3C99 != 0) || (((&D_800C35B0)[arg0] + 0x1E) < *(&D_800C3640 + (arg0 * 4))))) {
            return 1;
        }
        goto block_19;
    }
block_19:
    return 0;
}

void func_1501E1B4(s32 arg0) {
    if (D_800C3C88 == 0) {
        if ((*(&D_800C35EA + arg0) == 1) && (func_1501E05C((s32) &D_800C3C88) != 0)) {
            D_8008FD84 = 0;
            if (((*(&D_800C3640 + (arg0 * 4)) - (&D_800C35B0)[arg0]) >= 0x5B) && ((D_800C3C88 = 1, D_800C3C89 = 0x1E, func_1517EE40(0U, 0U, 0U, 0x1E, 1, 0), func_1000E17C(), (func_151F2CDC() == 1)) || (func_151F2CDC() == 2))) {
                func_151F2D6C(0, 0x2B02);
            }
        }
    } else if (D_800C3C88 == 1) {
        if (D_800BEA08 < (s32) D_800C3C89) {
            D_800C3C89 -= D_800BEA08;
            return;
        }
        D_800C3C89 = 0;
        D_800C3C88 = 2;
        func_1501DF04((s32) &D_800C3C88);
        D_800C3C88 = 0;
    }
}

void func_1501E2F8(s32 arg0) {
    s32 var_s1;
    u8 *temp_s0;

    var_s1 = arg0;
loop_1:
    temp_s0 = &D_800C35EA + var_s1;
    if ((*temp_s0 == 1) && ((&D_800C35B0)[var_s1] >= *(&D_800C3640 + (var_s1 * 4)))) {
        if (D_800C3C8C == 0) {
            func_1501E81C(0, var_s1);
            if (*temp_s0 == 1) {
                var_s1 = 0;
                func_1501E400(0);
                func_150242F8(1, 0);
                func_1501EC38(0);
                func_150242F8(0, 0);
                func_15020EC4(0);
                goto loop_1;
            }
        } else {
            D_800C3C8C = 2;
        }
    }
}

void func_1501E400(s32 arg0) {
    s32 sp24;
    s32 *sp20;
    s32 *sp1C;
    s32 *temp_a1;
    s32 *temp_v1;
    s32 temp_a2;
    s32 temp_v0;

    temp_a2 = arg0 * 4;
    if (D_800C3A58 != 0) {
        D_800C3A58 -= 1;
    }
    temp_v1 = &(&D_800C35B0)[arg0];
    temp_a1 = temp_a2 + &D_800C35B8;
    *temp_a1 = *temp_v1;
    if (*(&D_800C35EA + arg0) == 1) {
        sp1C = temp_v1;
        sp20 = temp_a1;
        sp24 = temp_a2;
        func_1501E1B4((s32) temp_a1);
        if ((arg0 != 0) || (D_800BEAC0 == 0)) {
            *temp_v1 += D_800BEA08;
        }
        if ((*(&D_800C35C0 + arg0) == 0) && ((u16) D_800C3C8E == *temp_a1) && ((u16) D_800C3C8E != *temp_v1)) {
            *temp_a1 = -1;
        }
        sp1C = temp_v1;
        sp24 = temp_a2;
        if (func_151F2CDC(arg0, temp_a1, temp_a2) == 1) {
            sp1C = temp_v1;
            sp24 = temp_a2;
            func_15080228();
        }
        temp_v0 = *(&D_800C3640 + temp_a2);
        if (*temp_v1 >= temp_v0) {
            *temp_v1 = temp_v0;
        }
    }
}

void func_1501E540(s32 arg0) {
    u16 ***sp3C;
    s32 *temp_s0;
    s32 temp_s1;
    s32 temp_t6;
    s32 var_s2;
    s32 var_s3;
    u16 ***temp_s0_2;
    u16 ***temp_s0_3;
    u16 ***temp_s1_2;
    u16 ***temp_s1_3;
    u16 ***temp_s2;
    u16 ***temp_t8;
    u16 ***var_s0;
    u16 **temp_s7;
    u16 **temp_v1;
    u16 *temp_s4;

    temp_t6 = arg0 * 4;
    temp_t8 = temp_t6 + &D_800C3668;
    sp3C = temp_t8;
    temp_v1 = *temp_t8;
    if (temp_v1 != NULL) {
        temp_s4 = *temp_v1;
        var_s2 = 0;
        if ((s32) *temp_s4 > 0) {
            var_s3 = 0;
            do {
                temp_s0 = &D_800C3A50 + temp_t6;
                if (*((&D_800C35C8)[arg0] + var_s3) != 0) {
                    temp_s1 = var_s2 << 6;
                    func_10004074((*(s32 *)((char *)((*temp_s0 + temp_s1)) + 0x4)));
                    func_10004074((*(s32 *)((char *)((*temp_s0 + temp_s1)) + 0x38)));
                }
                var_s2 += 1;
                var_s3 += 2;
            } while (var_s2 < (s32) *temp_s4);
            var_s2 = 0;
        }
        temp_s0_2 = &D_800C3A50 + temp_t6;
        temp_s7 = &(&D_800C35C8)[arg0];
        func_10004074(*temp_s0_2);
        temp_s1_2 = temp_t6 + &D_800C3958;
        *temp_s0_2 = NULL;
        func_10004074(*temp_s1_2);
        *temp_s1_2 = NULL;
        if ((s32) *temp_s4 > 0) {
            var_s0 = (arg0 * 0x78) + &D_800C3960;
            do {
                func_10004074(*var_s0);
                *var_s0 = NULL;
                var_s2 += 1;
                var_s0 += 4;
            } while (var_s2 < (s32) *temp_s4);
        }
        func_10004074((u16 **) *temp_s7);
        temp_s0_3 = temp_t6 + &D_800C35D0;
        func_10004074(*temp_s0_3);
        temp_s1_3 = temp_t6 + &D_800C35D8;
        func_10004074(*temp_s1_3);
        temp_s2 = temp_t6 + &D_800C35E0;
        func_10004074(*temp_s2);
        *temp_s7 = NULL;
        *temp_s0_3 = NULL;
        *temp_s1_3 = NULL;
        *temp_s2 = NULL;
        func_10004074(D_800C3D50);
        D_800C3D50 = NULL;
        func_10004074(*sp3C);
        *sp3C = NULL;
    }
}

void func_1501E73C(s32 arg0) {
    s32 *temp_v0_2;
    s32 var_s0;
    u8 *temp_s1;
    void *temp_v0;

    temp_s1 = arg0 + &D_800C363A;
    if ((s32) *temp_s1 > 0) {
        var_s0 = 0;
        do {
            temp_v0 = (*(s32 *)((arg0 * 4) + (char *)(D_800C35F0))) + var_s0;
            if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 2) {
                temp_v0_2 = func_15083E90((*(s32 *)((char *)(temp_v0) + 0x2)));
                if (temp_v0_2 == NULL) {

                } else {
                    if ((s32) (*(s32 *)((char *)(temp_v0_2) + 0x6C)) >= 0xA) {
                        (*(s32 *)((char *)(temp_v0_2) + 0x6C)) = 0U;
                        (*(s32 *)((char *)(temp_v0_2) + 0x6A)) = 0;
                    }
                    if ((s32) (*(s32 *)((char *)(temp_v0_2) + 0x6D)) >= 0xA) {
                        (*(s32 *)((char *)(temp_v0_2) + 0x6D)) = 0U;
                        (*(s32 *)((char *)(temp_v0_2) + 0x6B)) = 0;
                    }
                    func_1507EABC(temp_v0_2);
                }
            }
            var_s0 += 8;
        } while (var_s0 < (*temp_s1 * 8));
    }
}

void func_1501E81C(s32 arg0, s32 arg1) {
    void *sp44;
    u8 sp40;
    s32 sp38;
    u8 *sp30;
    u8 *sp2C;
    s32 temp_t7;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_v1;
    u8 var_a0;

    temp_a2 = arg1 + &D_800C35EA;
    sp44 = D_800DBFF0;
    if (*temp_a2 != 0) {
        temp_v1 = &(&D_800C35E8)[arg1];
        var_v0 = 0x10;
        sp40 = *temp_v1;
        if (arg0 != 0) {
            var_v0 = 0xF;
        }
        sp2C = temp_v1;
        sp30 = temp_a2;
        func_15169040(&sp40, var_v0 & 0xFF, temp_a2);
        *(&D_800C35B8 + (arg1 * 4)) = -0x64;
        (&D_800C35B0)[arg1] = (s32) (u16) D_800C3C8E;
        func_1501D258(D_800BE9F0, (s32) *sp2C);
        *sp30 = 0;
        D_800C3638 = 0;
        func_1501E73C(arg1);
        func_150233E4();
        D_800C3662 = 0;
        D_800C3683 = 0;
        func_150235DC(arg1);
        func_1501EA18(arg1);
        func_1501E540(arg1);
        D_800C3648 = 0.0f;
        D_800C364C = 0.0f;
        D_800C3650 = 0.0f;
        func_1510B32C(0, (*(s32 *)((char *)(sp44) + 0x19C)), (*(s32 *)((char *)(sp44) + 0x1A0)), 0x3F800000);
        if (D_800C35C2 != 0) {
            *sp30 = 2;
            var_a0 = D_800C35C3;
            if (var_a0 == 0x25) {
                temp_t7 = D_800BE9F0;
                D_800BE9F0 = 0x25;
                var_a0 = 0x25;
                sp38 = temp_t7;
            }
            D_800C3671 = 0;
            func_1501D348((s32) var_a0, D_800C35C2 - 1, arg1, (s32) D_800C3C90, D_800C3C94);
            if (D_800C35C3 == 0x25) {
                D_800BE9F0 = sp38;
            }
        } else {
            if (D_800C3C8B != 0) {
                func_1517EE40(0U, 0U, 0U, 0x1E, 0, 0);
            }
            D_8008FD84 = 0;
            D_800C3670 = 0;
            D_800C3671 = 0;
        }
    }
}

void func_1501EA18(void * *arg0) {
    s32 *var_s0;
    void *temp_s1;

    temp_s1 = D_800DBFF0;
    D_800C3600->unk0 = 1;
    D_800C3600->unk4 = arg0;
    D_800C3600->unk14 = (f32) (*(f32 *)((char *)(temp_s1) + 0x2F8));
    D_800C3600->unk18 = (f32) (*(f32 *)((char *)(temp_s1) + 0x2FC));
    D_800C3600->unk20 = 0.0f;
    D_800C3600->unk1C = (f32) (*(f32 *)((char *)(temp_s1) + 0x300));
    D_800C3600->unk24 = (f32) (*(f32 *)((char *)(temp_s1) + 0x388));
    D_800C3600->unk28 = (f32) (*(f32 *)((char *)(temp_s1) + 0x37C));
    if (D_800C3671 == 0) {
        func_1512D560(temp_s1, 7, &D_800C3600);
        if (D_800969C4 != D_800C3674) {
            (*(f32 *)((char *)(D_800C3600) + 0xC)) = (f32) D_800C3674;
            func_1512D560(temp_s1, 8, &D_800C3600);
        }
        if (D_800969C8 != D_800C3678) {
            (*(f32 *)((char *)(D_800C3600) + 0xC)) = (f32) D_800C3678;
            (*(s32 *)((char *)(D_800C3600) + 0x10)) = (s32) D_800C367C;
            func_1512D560(temp_s1, 0xA, &D_800C3600);
        }
    }
    if ((D_800C35C2 == 0) && (D_800C3671 == 0)) {
        if (D_800C3680 == 0) {
            func_1512D560(temp_s1, 6, arg0);
        } else {
            D_800C3680 = 0;
        }
    }
    if (*(&D_800C365A + (s32)(arg0)) == 0) {
        func_150228E4(arg0);
    }
    func_150227BC(arg0);
    var_s0 = &gObjects;
    do {
        if (((*(s32 *)((char *)(var_s0) + 0x0)) != 0) && (func_150229E4(var_s0) != 0)) {
            (*(s32 *)((char *)(var_s0) + 0xA4)) = 0;
            (*(s32 *)((char *)(var_s0) + 0xB8)) = 0.0f;
            (*(s32 *)((char *)(var_s0) + 0xC4)) = 0.0f;
        }
        var_s0 += 0x32C;
    } while ((char *)(var_s0) != (char *)(&D_800D121C));
    if (D_800C35C2 == 0) {
        D_800C3A58 = 2;
        D_800C3663 = 0;
        D_800C3594 = D_800C35A0;
        (*(s16 *)((char *)&(D_800C358C) + 0x0)) = (s16) (*(s16 *)((char *)&(D_800C3598) + 0x0));
        (*(s16 *)((char *)&(D_800C358C) + 0x2)) = (s16) (*(s16 *)((char *)&(D_800C3598) + 0x2));
        (*(s16 *)((char *)&(D_800C358C) + 0x4)) = (s16) (*(s16 *)((char *)&(D_800C3598) + 0x4));
    }
}

void func_1501EC38(s32 arg0) {
    void *sp;
    s32 sp2A4;
    s32 sp268[256];
    s32 sp22C[256];
    s32 sp13C[256];
    f32 sp1B4[256];
    f32 spD4[256];
    void * sp1F0;
    void * sp178;
    f32 sp128;
    f32 sp100;
    s32 spF4;
    f32 spE0;
    s32 spBC;
    u8 *spB0;
    s32 spAC;
    u16 **spA8;
    s32 spA4;
    s32 *spA0;
    s32 sp9C;
    s32 sp98;
    s32 *sp94;
    s32 sp90;
    s32 *sp68;
    u8 **sp64;
    void * *var_a1;
    void * *var_v0;
    s32 *temp_t6_3;
    f32 *temp_a1_2;
    f32 *temp_a2_3;
    f32 *temp_v0_7;
    f32 *var_s2;
    f32 *var_t0;
    f32 temp_f0;
    f32 temp_f20;
    f32 spD8;
    f32 spDC;
    f32 sp11C;
    f32 sp120;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp104;
    f32 sp108;
    f32 sp138;
    f32 sp124;
    f32 sp12C;
    f32 sp134;
    f32 sp130;
    s32 (*var_v1)[];
    s32 *temp_a0_2;
    s32 *temp_a1;
    s32 *var_a0;
    s32 *var_a3;
    s32 *var_s3;
    s32 *var_s3_2;
    s32 *var_s5;
    s32 *var_t5;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t2;
    s32 temp_t6_2;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_t0_2;
    s32 var_t3;
    s32 var_t4;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 *temp_t1;
    u16 *temp_t1_2;
    u16 temp_a3;
    u16 temp_v0_2;
    u8 *temp_t6;
    u8 temp_a0;
    void **temp_v0;
    struct { s32 unk0; u8 unk4; u8 unk5; s16 unk6; } *temp_v0_3;
    struct { f32 unk0; u8 unk4; u8 unk5; s16 unk6; } *temp_v0_6;

    if (*(&D_800C35EA + arg0) == 1) {
        D_800C3638 = 0;
        spF4 = 0;
        temp_t6 = arg0 + &D_800C363A;
        spB0 = temp_t6;
        temp_t9 = arg0 * 4;
        if ((s32) *temp_t6 > 0) {
            spA8 = &(&D_800C35C8)[arg0];
            var_t5 = temp_t9 + &D_800C3958;
            spAC = temp_t9;
            temp_f20 = D_800969CC;
            var_s5 = (arg0 * 0x78) + &D_800C3778;
            sp94 = temp_t9 + &D_800C35F0;
            spA4 = 0;
            var_t4 = 0;
            sp98 = 0;
            sp90 = 0;
            do {
                if ((*(s32 *)((char *)(*spA8) + spA4)) != 0) {
                    temp_v0 = (arg0 * 0x78) + sp98 + &D_800C3868;
                    (*(f32 *)(*var_t5 + var_t4)) = (f32) (*(f32 *)((char *)((*temp_v0)) + 0x0));
                    (*(f32 *)((char *)((*var_t5 + var_t4)) + 0x4)) = (f32) (*(f32 *)((char *)((*temp_v0)) + 0x2));
                    (*(f32 *)((char *)((*var_t5 + var_t4)) + 0x8)) = (f32) (*(f32 *)((char *)((*temp_v0)) + 0x4));
                } else {
                    (*(f32 *)(*var_t5 + var_t4)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x4)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x8)) = 0.0f;
                }
                var_s3 = &sp2A4;
                var_a0 = &sp22C[0];
                var_a1 = &sp1F0;
                var_a3 = &sp13C[0];
                var_t0 = &sp1B4[0];
                if ((*(s32 *)((char *)(*sp94) + sp90)) == 4) {
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0xC)) = 64.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x10)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x14)) = 20.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x18)) = 255.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x1C)) = 62.5f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x20)) = 50.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x24)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x28)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x2C)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x34)) = 0.0f;
                } else {
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0xC)) = 0.0f;
                    (*(f32 *)((char *)((*var_t5 + var_t4)) + 0x10)) = (f32) D_800C35A4;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x14)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x18)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x1C)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x20)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x24)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x28)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x2C)) = 0.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x3C)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x40)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x30)) = temp_f20;
                }
                (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x38)) = 0.0f;
                temp_v0_2 = (*(s32 *)((char *)(*sp94) + sp90));
                if (temp_v0_2 == 1) {
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x34)) = temp_f20;
                } else if (temp_v0_2 == 2) {
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x34)) = 255.0f;
                } else if (temp_v0_2 == 5) {
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x18)) = 32.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x1C)) = 32.0f;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x34)) = 1.0f;
                } else if (temp_v0_2 == 3) {
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x18)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x1C)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x20)) = temp_f20;
                    (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x34)) = 255.0f;
                }
                temp_a2 = *var_s5;
                var_v1 = sp268;
                var_v0 = &sp178;
                if (temp_a2 != 0) {
                    sp68 = spAC + &D_800C35D0;
                    sp64 = (arg0 * 0x78) + sp98 + &D_800C3960;
                    do {
                        var_v0 = (char *)(var_v0) + 4;
                        var_v1 += 4;
                        var_s3 += 4;
                        var_a0 += 4;
                        var_a1 = (char *)(var_a1) + 4;
                        var_a3 += 4;
                        var_t0 += 4;
                        (*(s32 *)((char *)(var_v1) - 0x4)) = -0x270F;
                        (*(s32 *)((char *)(var_s3) - 0x4)) = -0x270F;
                        (*(s32 *)((char *)(var_a0) - 0x4)) = -0x270F;
                        (*(s32 *)((char *)(var_a1) - 0x4)) = 1;
                        (*(s32 *)((char *)(var_a3) - 0x4)) = 0;
                        (*(s32 *)((char *)(var_t0) - 0x4)) = temp_f20;
                        (*(s32 *)((char *)(var_v0) - 0x4)) = temp_f20;
                    } while ((u32) var_v0 < (u32) &sp1B4[0]);
                    var_s0 = 0;
                    temp_t1 = *sp68 + spA4;
                    if ((s32) *temp_t1 > 0) {
                        do {
                            temp_v0_3 = temp_a2 + (var_s0 * 8);
                            temp_a0 = temp_v0_3->unk5;
                            temp_v1 = temp_a0 * 4;
                            temp_a1 = &(&sp22C[0])[temp_a0];
                            if (*temp_a1 == -0x270F) {
                                if (temp_v0_3->unk6 >= *(&D_800C35B0 + spAC)) {
                                    *temp_a1 = (*(s32 *)((char *)(((char *)(sp) + temp_v1)) + 0x13C));
                                    sp268[temp_a0] = (s32) temp_v0_3->unk6;
                                } else {
                                    (*(s32 *)((char *)(((char *)(sp) + temp_v1)) + 0x1F0)) = (s32) temp_v0_3->unk4;
                                    (*(s32 *)((char *)(((char *)(sp) + temp_v1)) + 0x2A4)) = (s32) temp_v0_3->unk6;
                                }
                            }
                            temp_a1_2 = &(&sp1B4[0])[temp_a0];
                            (*(f32 *)((char *)(((char *)(sp) + temp_v1)) + 0x178)) = (f32) temp_v0_3->unk0;
                            temp_a0_2 = &(&sp13C[0])[temp_a0];
                            if (temp_f20 == *temp_a1_2) {
                                *temp_a1_2 = temp_v0_3->unk0;
                            }
                            *temp_a0_2 += 1;
                            var_s0 += 1;
                        } while (var_s0 < (s32) *temp_t1);
                        var_s0 = 0;
                    }
                    var_s1 = 0;
                    var_s3_2 = &sp2A4;
                    var_s2 = &sp100;
                    do {
                        temp_v0_4 = *var_s3_2;
                        *var_s2 = temp_f20;
                        if ((temp_v0_4 != -0x270F) || (*(sp268 + var_s1) != -0x270F)) {
                            if (temp_v0_4 == -0x270F) {
                                *var_s2 = (*(s32 *)((char *)(((char *)(sp) + var_s1)) + 0x1B4));
                            } else {
                                temp_v1_2 = *(sp268 + var_s1);
                                if (temp_v1_2 == -0x270F) {
                                    *var_s2 = (*(s32 *)((char *)(((char *)(sp) + var_s1)) + 0x178));
                                } else {
                                    var_t3 = 6;
                                    var_a1_2 = -1;
                                    temp_t1_2 = *sp68 + spA4;
                                    temp_f0 = (f32) (*(&D_800C35B0 + spAC) - temp_v0_4) / (f32) (temp_v1_2 - temp_v0_4);
                                    if ((*(s32 *)((char *)(((char *)(sp) + var_s1)) + 0x1F0)) == 0) {
                                        temp_v0_5 = *(&sp22C[0] + var_s1);
                                        temp_t2 = temp_v0_5 - 2;
                                        var_a2 = 0;
                                        var_v1_2 = 0;
                                        if (temp_t2 >= 0) {
                                            var_t3 = 7;
                                            var_t0_2 = temp_t2;
                                            var_a0_2 = 3;
                                            var_a1_3 = 0;
                                        } else {
                                            var_t0_2 = temp_v0_5 - 1;
                                            var_a0_2 = 2;
                                            var_a1_3 = 1;
                                        }
                                        if ((temp_v0_5 + 1) < *(var_s1 + &sp13C[0])) {
                                            var_t3 |= 8;
                                            var_a0_2 += 1;
                                        }
                                        if ((s32) *temp_t1_2 > 0) {
loop_43:
                                            if (var_a0_2 != 0) {
                                                temp_t9_2 = var_v1_2 * 8;
                                                var_v1_2 += 1;
                                                temp_v0_6 = *var_s5 + temp_t9_2;
                                                if (var_s0 == temp_v0_6->unk5) {
                                                    if (var_a2 == var_t0_2) {
                                                        temp_t6_3 = &(&spD4[0])[var_a1_3];
                                                        var_a1_3 += 1;
                                                        *temp_t6_3 = temp_v0_6->unk0;
                                                        var_a0_2 -= 1;
                                                    } else {
                                                        var_a2 += 1;
                                                    }
                                                }
                                                if (var_v1_2 < (s32) *temp_t1_2) {
                                                    goto loop_43;
                                                }
                                            }
                                        }
                                        if (!(var_t3 & 1)) {
                                            spD4[0] = spD8;
                                        }
                                        if (!(var_t3 & 8)) {
                                            spE0 = spDC;
                                        }
                                        sp9C = var_t4;
                                        spA0 = var_t5;
                                        var_t4 = sp9C;
                                        var_t5 = spA0;
                                        *var_s2 = func_150497E0((s32 (*)[]) &spD4[0], 0, temp_f0, *temp_t1_2);
                                    } else {
                                        temp_a3 = *temp_t1_2;
                                        var_a0_3 = 0;
                                        var_v1_3 = 0;
                                        temp_a2_2 = *var_s5;
                                        if ((s32) temp_a3 > 0) {
loop_55:
                                            if (var_s0 == (*(s32 *)((char *)((temp_a2_2 + (var_v1_3 * 8))) + 0x5))) {
                                                if (var_a1_2 == -1) {
                                                    if ((var_a0_3 + 1) == *(&sp22C[0] + var_s1)) {
                                                        var_a1_2 = var_v1_3;
                                                    } else {
                                                        var_a0_3 += 1;
                                                    }
                                                    goto block_61;
                                                }
                                                spBC = var_v1_3;
                                            } else {
block_61:
                                                var_v1_3 += 1;
                                                if (var_v1_3 < (s32) temp_a3) {
                                                    goto loop_55;
                                                }
                                            }
                                        }
                                        temp_v0_7 = temp_a2_2 + (var_a1_2 * 8);
                                        *var_s2 = (*(f32 *)(temp_a2_2 + (spBC * 8))) - *temp_v0_7;
                                        *var_s2 *= temp_f0;
                                        *var_s2 += *temp_v0_7;
                                    }
                                }
                            }
                        }
                        var_s0 += 1;
                        var_s1 += 4;
                        var_s3_2 += 4;
                        var_s2 += 4;
                    } while (var_s0 != 0xF);
                    if (temp_f20 == sp128) {
                        sp128 = 0.0f;
                    }
                    if (**sp64 != 0xFF) {
                        sp9C = var_t4;
                        spA0 = var_t5;
                        func_1501FE68(spF4, sp128, *var_t5 + var_t4 + 0x10, arg0);
                    } else if (temp_f20 != sp11C) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x10)) = sp11C;
                    }
                    if (temp_f20 != sp120) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0xC)) = sp120;
                    }
                    if (temp_f20 != sp118) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x14)) = sp118;
                    }
                    if (temp_f20 != sp114) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x18)) = sp114;
                    }
                    if (temp_f20 != sp110) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x1C)) = sp110;
                    }
                    if (temp_f20 != sp10C) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x20)) = sp10C;
                    }
                    if (temp_f20 != sp104) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x24)) = sp104;
                    }
                    if (temp_f20 != sp108) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x28)) = sp108;
                    }
                    if (temp_f20 != sp100) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x2C)) = sp100;
                    }
                    if (temp_f20 != sp138) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x30)) = sp138;
                    }
                    if (temp_f20 != sp124) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x34)) = sp124;
                    }
                    if (temp_f20 != sp12C) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x38)) = sp12C;
                    }
                    if (temp_f20 != sp134) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x3C)) = sp134;
                    }
                    if (temp_f20 != sp130) {
                        (*(s32 *)((char *)((*var_t5 + var_t4)) + 0x40)) = sp130;
                    }
                    temp_a2_3 = *var_t5 + var_t4;
                    sp9C = var_t4;
                    spA0 = var_t5;
                    func_1501FC8C(spF4, sp128, temp_a2_3, temp_a2_3 + 4, temp_a2_3 + 8, arg0);
                }
                var_t4 += 0x44;
                temp_t6_2 = spF4 + 1;
                spA4 += 2;
                sp98 += 4;
                sp90 += 8;
                spF4 = temp_t6_2;
                var_s5 += 4;
            } while (temp_t6_2 < (s32) *spB0);
        }
        D_800C3638 = 1;
    }
}

s32 func_1501F72C(s32 arg0, f32 arg1, f32 *arg2, s32 arg3, s32 *arg4) {
    s32 sp84;
    void * sp48;
    s32 sp38;
    u16 **sp2C;
    s32 sp28;
    s32 *sp24;
    s32 sp20;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f6;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f18;
    s32 *temp_t2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_t3;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_lo;
    s32 var_t1;
    s32 var_v1;
    s32 var_v1_2;
    u16 **temp_t1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_v0;

    f32 sp60;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp78;
    f32 sp64;
    f32 sp68;
    temp_t6 = arg3 * 4;
    temp_t1 = &(&D_800C35C8)[arg3];
    var_a1 = 0;
    var_v1 = (*temp_t1)[arg0] - 1;
    if (var_v1 >= 0) {
        temp_a0 = (*(s32 *)((char *)((*(&D_800C3A50 + temp_t6) + (arg0 << 6))) + 0x4));
loop_2:
        temp_t5 = (s32) (var_a1 + var_v1) / 2;
        temp_v0 = temp_a0 + (temp_t5 * 4);
        if (arg1 < (*(s32 *)((char *)(temp_a0) + (temp_t5 * 4)))) {
            var_v1 = temp_t5 - 1;
        } else {
            var_a1 = temp_t5 + 1;
        }
        if (((*(s32 *)((char *)(temp_v0) + 0x0)) <= arg1) && (arg1 <= (*(s32 *)((char *)(temp_v0) + 0x4)))) {

        } else if (var_v1 >= var_a1) {
            goto loop_2;
        }
        sp84 = temp_t5;
    }
    *arg4 = sp84;
    temp_t2 = temp_t6 + &D_800C3A50;
    temp_t3 = arg0 << 6;
    if (sp84 != (*(s32 *)((char *)((*temp_t2 + temp_t3)) + 0x3C))) {
        sp2C = temp_t1;
        sp24 = temp_t2;
        sp20 = temp_t3;
        sp28 = arg0 * 2;
        func_15020878(arg1, arg0, sp84, arg3);
    }
    temp_a1 = *(&D_800C3868 + ((arg3 * 0x78) + (arg0 * 4)));
    sp38 = (s32) (*(s32 *)((char *)((temp_a1 + (sp84 * 8))) + 0x6));
    sp20 = temp_t3;
    sp24 = temp_t2;
    func_1501FFE8(arg1, &sp48, temp_a1, sp84, (*temp_t1)[arg0]);
    if (sp38 == 0) {
        var_v1_2 = 0x64;
        var_a1_2 = 0;
        temp_a0_2 = (*(s32 *)((char *)((*sp24 + sp20)) + 0x38));
loop_14:
        temp_t9 = (s32) (var_a1_2 + var_v1_2) / 2;
        var_t1 = temp_t9;
        temp_v0_2 = temp_a0_2 + (var_t1 * 4);
        if (arg1 < (*(s32 *)((char *)(temp_a0_2) + (temp_t9 * 4)))) {
            var_v1_2 = temp_t9 - 1;
        } else {
            var_a1_2 = var_t1 + 1;
        }
        if ((!((*(s32 *)((char *)(temp_v0_2) + 0x0)) <= arg1) || !(arg1 <= (*(s32 *)((char *)(temp_v0_2) + 0x4)))) && (var_v1_2 >= var_a1_2)) {
            goto loop_14;
        }
        var_a0 = 0;
        var_a2 = var_t1;
        var_a1_3 = 1;
        var_v0 = *sp24 + sp20;
        var_f14 = (*(s32 *)((char *)(var_v0) + 0x20));
        var_f18 = (f32) var_a2 * D_800969D0;
        var_f16 = (*(s32 *)((char *)(var_v0) + 0x2C)) * var_f18;
        if (1 != 2) {
            do {
                temp_lo = var_a0 * 0xC;
                var_a2 += 1;
                var_a1_3 += 1;
                var_a0 = (var_a0 ^ 1) & 0xFF;
                temp_v1 = arg2 + temp_lo;
                (*(f32 *)((char *)(temp_v1) + 0x0)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x8)) + ((((var_f16 + var_f14) * var_f18) + (*(f32 *)((char *)(var_v0) + 0x14))) * var_f18));
                temp_v0_3 = *sp24 + sp20;
                (*(f32 *)((char *)(temp_v1) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0xC)) + ((((((*(f32 *)((char *)(temp_v0_3) + 0x30)) * var_f18) + (*(f32 *)((char *)(temp_v0_3) + 0x24))) * var_f18) + (*(f32 *)((char *)(temp_v0_3) + 0x18))) * var_f18));
                temp_v0_4 = *sp24 + sp20;
                temp_f6 = (*(s32 *)((char *)(temp_v0_4) + 0x10)) + ((((((*(s32 *)((char *)(temp_v0_4) + 0x34)) * var_f18) + (*(s32 *)((char *)(temp_v0_4) + 0x28))) * var_f18) + (*(s32 *)((char *)(temp_v0_4) + 0x1C))) * var_f18);
                var_f18 = (f32) var_a2 * D_800969D0;
                (*(s32 *)((char *)(temp_v1) + 0x8)) = temp_f6;
                var_v0 = *sp24 + sp20;
                var_f14 = (*(s32 *)((char *)(var_v0) + 0x20));
                var_f16 = (*(s32 *)((char *)(var_v0) + 0x2C)) * var_f18;
            } while (var_a1_3 != 2);
        }
        temp_v1_2 = arg2 + (var_a0 * 0xC);
        (*(f32 *)((char *)(temp_v1_2) + 0x0)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x8)) + ((((var_f16 + var_f14) * var_f18) + (*(f32 *)((char *)(var_v0) + 0x14))) * var_f18));
        temp_v0_5 = *sp24 + sp20;
        (*(f32 *)((char *)(temp_v1_2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_5) + 0xC)) + ((((((*(f32 *)((char *)(temp_v0_5) + 0x30)) * var_f18) + (*(f32 *)((char *)(temp_v0_5) + 0x24))) * var_f18) + (*(f32 *)((char *)(temp_v0_5) + 0x18))) * var_f18));
        temp_v0_6 = *sp24 + sp20;
        (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0_6) + 0x10)) + ((((((*(f32 *)((char *)(temp_v0_6) + 0x34)) * var_f18) + (*(f32 *)((char *)(temp_v0_6) + 0x28))) * var_f18) + (*(f32 *)((char *)(temp_v0_6) + 0x1C))) * var_f18));
    } else {
        var_a0_2 = 0;
        temp_v0_7 = (*(s32 *)((char *)((*sp24 + sp20)) + 0x4)) + (sp84 * 4);
        temp_f0 = (*(s32 *)((char *)(temp_v0_7) + 0x0));
        temp_f2 = (*(s32 *)((char *)(temp_v0_7) + 0x4)) - temp_f0;
        if (temp_f2 != 0.0f) {
            var_f12 = (arg1 - temp_f0) / temp_f2;
        } else {
            var_f12 = 0.0f;
        }
        var_a1_4 = 1;
        var_lo = 0 * 0xC;
        var_f16_2 = (sp60 - sp54) * var_f12;
        if (1 != 2) {
            do {
                temp_v1_3 = arg2 + var_lo;
                (*(f32 *)((char *)(temp_v1_3) + 0x0)) = (f32) (sp54 + var_f16_2);
                var_a0_2 = (var_a0_2 ^ 1) & 0xFF;
                var_a1_4 += 1;
                var_lo = var_a0_2 * 0xC;
                (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) (sp58 + ((sp64 - sp58) * var_f12));
                (*(f32 *)((char *)(temp_v1_3) + 0x8)) = (f32) (sp5C + ((sp68 - sp5C) * var_f12));
                var_f16_2 = (sp60 - sp54) * var_f12;
            } while (var_a1_4 != 2);
        }
        temp_v1_4 = arg2 + var_lo;
        (*(f32 *)((char *)(temp_v1_4) + 0x0)) = (f32) (sp54 + var_f16_2);
        (*(f32 *)((char *)(temp_v1_4) + 0x4)) = (f32) (sp58 + ((sp64 - sp58) * var_f12));
        (*(f32 *)((char *)(temp_v1_4) + 0x8)) = (f32) (sp5C + ((sp68 - sp5C) * var_f12));
        var_t1 = sp78;
    }
    return var_t1;
}

void func_1501FC8C(s32 arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, s32 arg5) {
    f32 sp5C;
    s32 sp58;
    f32 sp3C;
    s32 *sp28;
    s32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f12;
    s32 *temp_t0;
    s32 temp_t1;
    s32 temp_v0;
    void *temp_v1;

    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp40;
    f32 sp44;
    var_f12 = arg1;
    temp_t0 = (arg5 * 4) + &D_800C3A50;
    if ((s32) (&D_800C35C8)[arg5][arg0] >= 2) {
        if (var_f12 > 100.0f) {
            var_f12 = 100.0f;
        }
        if (var_f12 < 0.0f) {
            var_f12 = 0.0f;
        }
        temp_t1 = arg0 << 6;
        sp24 = temp_t1;
        sp28 = temp_t0;
        temp_f2 = (*(s32 *)((char *)(*temp_t0) + temp_t1)) * var_f12 * D_800969D4;
        sp5C = temp_f2;
        temp_v0 = func_1501F72C((s32) var_f12, temp_f2, &sp3C, arg5, &sp58);
        if ((*(s32 *)((char *)((*(&D_800C3868 + ((arg5 * 0x78) + (arg0 * 4))) + (sp58 * 8))) + 0x6)) == 0) {
            temp_v1 = (*(s32 *)((char *)((*sp28 + sp24)) + 0x38)) + (temp_v0 * 4);
            temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x0));
            temp_f12 = (*(s32 *)((char *)(temp_v1) + 0x4)) - temp_f0;
            if (temp_f12 != 0.0f) {
                var_f0 = (sp5C - temp_f0) / temp_f12;
            } else {
                var_f0 = 0.0f;
            }
            *arg2 = ((sp48 - sp3C) * var_f0) + sp3C;
            *arg3 = ((sp4C - sp40) * var_f0) + sp40;
            *arg4 = ((sp50 - sp44) * var_f0) + sp44;
            return;
        }
        *arg2 = sp3C;
        *arg3 = sp40;
        *arg4 = sp44;
    }
}

void func_1501FE68(s32 arg0, f32 arg1, f32 *arg2, s32 arg3) {
    f32 sp6C;
    s32 sp60;
    void * sp30;
    u16 **sp28;
    s32 sp24;
    void * *temp_a1;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14;
    u16 **temp_v1;

    f32 sp78;
    f32 sp74;
    f32 sp48;
    f32 sp50;
    f32 sp80;
    f32 sp3C;
    f32 sp44;
    var_f12 = arg1;
    temp_v1 = &(&D_800C35C8)[arg3];
    if ((s32) (*temp_v1)[arg0] >= 2) {
        if (var_f12 > 100.0f) {
            var_f12 = 100.0f;
        }
        if (var_f12 < 0.0f) {
            var_f12 = 0.0f;
        }
        sp24 = arg0 * 2;
        sp28 = temp_v1;
        func_1501F72C((s32) var_f12, (*(f32 *)(*(&D_800C3A50 + (arg3 * 4)) + (arg0 << 6))) * var_f12 * D_800969D8, &sp6C, (s32) &sp60, 0);
        temp_a1 = *(&D_800C3868 + ((arg3 * 0x78) + (arg0 * 4)));
        if ((*(s32 *)((char *)(((char *)(temp_a1) + (sp60 * 8))) + 0x6)) == 0) {
            var_f12_2 = sp6C - sp78;
            var_f14 = sp74 - sp80;
        } else {
            func_1501FFE8(&sp30, temp_a1, sp60, (s32) (*(f32 *)((char *)(*sp28) + sp24)));
            var_f12_2 = sp48 - sp3C;
            var_f14 = sp50 - sp44;
        }
        *arg2 = func_150484A0(var_f12_2, var_f14) * D_800969DC;
    }
}

void func_1501FFE8(void *arg0, void * *arg1, s32 arg2, s32 arg3) {
    s16 *var_t0;
    s16 var_t6;
    s16 var_t6_2;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_t9;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_t0;
    void *var_a1_2;
    void *var_a1_3;
    void *var_t0_2;

    temp_v1 = arg2 - 1;
    var_v0 = 6;
    if (temp_v1 >= 0) {
        var_v0 = 7;
        var_a0 = temp_v1;
        var_a1 = 3;
        var_a3 = 0;
    } else {
        var_a0 = arg2;
        var_a1 = 2;
        var_a3 = 1;
    }
    if ((arg2 + 2) < arg3) {
        var_v0 |= 8;
        var_a1 += 1;
    }
    temp_a2 = var_a0 + var_a1;
    var_v1 = var_a0;
    if (var_a0 < temp_a2) {
        temp_t9 = (temp_a2 - var_a0) & 3;
        temp_t1 = temp_t9 + var_a0;
        if (temp_t9 != 0) {
            var_a1_2 = (char *)(arg0) + (var_a3 * 0xC);
            var_t0 = (char *)(arg1) + (var_a0 * 8);
            var_v1 += 1;
            var_t6 = *var_t0;
            if (temp_t1 != var_v1) {
                do {
                    var_v1 += 1;
                    var_a3 += 1;
                    var_a1_2 = (char *)(var_a1_2) + 0xC;
                    var_t0 += 8;
                    (*(f32 *)((char *)(var_a1_2) - 0xC)) = (f32) var_t6;
                    (*(f32 *)((char *)(var_a1_2) - 0x8)) = (f32) (*(f32 *)((char *)(var_t0) - 0x6));
                    (*(f32 *)((char *)(var_a1_2) - 0x4)) = (f32) (*(f32 *)((char *)(var_t0) - 0x4));
                    var_t6 = (*(s32 *)((char *)(var_t0) + 0x0));
                } while (temp_t1 != var_v1);
            }
            var_a3 += 1;
            temp_a1 = (char *)(var_a1_2) + 0xC;
            temp_t0 = var_t0 + 8;
            (*(f32 *)((char *)(temp_a1) - 0xC)) = (f32) var_t6;
            (*(f32 *)((char *)(temp_a1) - 0x8)) = (f32) (*(f32 *)((char *)(temp_t0) - 0x6));
            (*(f32 *)((char *)(temp_a1) - 0x4)) = (f32) (*(f32 *)((char *)(temp_t0) - 0x4));
            if (var_v1 != temp_a2) {
                goto block_10;
            }
        } else {
block_10:
            var_a1_3 = (char *)(arg0) + (var_a3 * 0xC);
            temp_a0 = (temp_a2 * 8) + (char *)(arg1);
            var_t0_2 = (char *)(arg1) + (var_v1 * 8) + 0x20;
            var_t6_2 = (*(s32 *)((char *)(var_t0_2) - 0x20));
            if ((s32)(var_t0_2) != temp_a0) {
                do {
                    var_t0_2 = (char *)(var_t0_2) + 0x20;
                    var_a1_3 = (char *)(var_a1_3) + 0x30;
                    (*(f32 *)((char *)(var_a1_3) - 0x30)) = (f32) var_t6_2;
                    (*(f32 *)((char *)(var_a1_3) - 0x2C)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x3E));
                    (*(f32 *)((char *)(var_a1_3) - 0x28)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x3C));
                    (*(f32 *)((char *)(var_a1_3) - 0x24)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x38));
                    (*(f32 *)((char *)(var_a1_3) - 0x20)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x36));
                    (*(f32 *)((char *)(var_a1_3) - 0x1C)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x34));
                    (*(f32 *)((char *)(var_a1_3) - 0x18)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x30));
                    (*(f32 *)((char *)(var_a1_3) - 0x14)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x2E));
                    (*(f32 *)((char *)(var_a1_3) - 0x10)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x2C));
                    (*(f32 *)((char *)(var_a1_3) - 0xC)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x28));
                    (*(f32 *)((char *)(var_a1_3) - 0x8)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x26));
                    (*(f32 *)((char *)(var_a1_3) - 0x4)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x24));
                    var_t6_2 = (*(s32 *)((char *)(var_t0_2) - 0x20));
                } while ((s32)(var_t0_2) != temp_a0);
            }
            temp_a1_2 = (char *)(var_a1_3) + 0x30;
            (*(f32 *)((char *)(temp_a1_2) - 0x30)) = (f32) var_t6_2;
            (*(f32 *)((char *)(temp_a1_2) - 0x2C)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x1E));
            (*(f32 *)((char *)(temp_a1_2) - 0x28)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x1C));
            (*(f32 *)((char *)(temp_a1_2) - 0x24)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x18));
            (*(f32 *)((char *)(temp_a1_2) - 0x20)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x16));
            (*(f32 *)((char *)(temp_a1_2) - 0x1C)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x14));
            (*(f32 *)((char *)(temp_a1_2) - 0x18)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x10));
            (*(f32 *)((char *)(temp_a1_2) - 0x14)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0xE));
            (*(f32 *)((char *)(temp_a1_2) - 0x10)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0xC));
            (*(f32 *)((char *)(temp_a1_2) - 0xC)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x8));
            (*(f32 *)((char *)(temp_a1_2) - 0x8)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x6));
            (*(f32 *)((char *)(temp_a1_2) - 0x4)) = (f32) (*(f32 *)((char *)(var_t0_2) - 0x4));
        }
    }
    if (!(var_v0 & 1)) {
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0xC));
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    }
    if (!(var_v0 & 8)) {
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(arg0) + 0x20));
    }
}

void func_15020388(f32 arg0, f32 arg1) {
    void * sp128;
    void * sp110;
    void * sp10C;
    f32 sp100;
    f32 spF4;
    f32 spE8;
    f32 spDC;
    f32 spD8;
    s32 *spB8;
    u16 **spB4;
    s32 spB0;
    s32 *spA8;
    s32 spA4;
    s32 sp9C;
    void * *var_v1;
    f32 *temp_t6;
    f32 *var_a0;
    f32 *var_a1;
    f32 *var_a2;
    f32 *var_v0;
    f32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f8;
    f32 var_f10;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f20;
    f32 var_f30;
    s32 *var_t4;
    s32 temp_a1;
    s32 var_fp;
    s32 var_s0;
    s32 var_t1;
    s32 var_t3;
    s32 var_t5;
    s32 var_v1_2;
    u16 **var_t2;
    u16 temp_s6;
    u16 var_a3;
    u16 var_s7;
    void *temp_v0;
    void *temp_v1;

    f32 sp104;
    f32 sp108;
    f32 sp148;
    f32 sp140;
    f32 sp144;
    f32 spE0;
    f32 spE4;
    f32 sp13C;
    f32 sp134;
    f32 sp138;
    f32 spEC;
    f32 spF0;
    f32 spF8;
    f32 spFC;
    var_f12 = arg0;
    var_f14 = arg1;
    var_t2 = &(&D_800C35C8)[(s32) arg1];
    var_t3 = arg0 * 2;
    var_t4 = ((s32) arg1 * 4) + &D_800C3A50;
    if ((s32) (*var_t2)[(s32)(arg0)] >= 2) {
        var_t5 = (s32)(arg0) << 6;
        (*(s32 *)((char *)((*var_t4 + var_t5)) + 0x3C)) = 0xFF;
        var_f20 = 0.0f;
        var_a3 = (*var_t2)[(s32)(arg0)];
        var_s0 = 0;
        var_s7 = 0;
        if ((var_a3 - 1) > 0) {
            spB8 = ((s32) arg1 * 0x78) + ((s32)(arg0) * 4) + &D_800C3868;
            var_fp = 0;
            var_t1 = 0;
            do {
                temp_a1 = *spB8;
                temp_s6 = (*(s32 *)((char *)((temp_a1 + var_fp)) + 0x6));
                spA4 = var_t5;
                spA8 = var_t4;
                spB0 = var_t3;
                spB4 = var_t2;
                sp9C = var_t1;
                func_1501FFE8((*(void **)&var_f12), (*(void **)&var_f14), (s32) &sp128, temp_a1);
                var_t4 = spA8;
                var_t5 = spA4;
                var_t2 = spB4;
                var_t3 = spB0;
                var_a0 = &spDC;
                var_v1 = &sp128;
                (*(s32 *)((char *)((*(s32 *)((char *)((*var_t4 + var_t5)) + 0x4))) + sp9C)) = var_f20;
                if (temp_s6 == 0) {
                    var_f12 = D_800969E0;
                    spD8 = var_f20;
                    var_a1 = &spE8;
                    var_a2 = &spF4;
                    var_f14 = (*(s32 *)((char *)(var_v1) + 0x0));
                    var_f18 = (*(s32 *)((char *)(var_v1) + 0xC));
                    var_v0 = &sp100 + 4;
                    var_f10 = -0.5f * var_f14;
                    var_f30 = (*(s32 *)((char *)(var_v1) + 0x18));
                    var_f16 = 1.5f * var_f18;
                    if ((u32) var_v0 < (u32) &sp10C) {
                        do {
                            temp_f4 = (*(s32 *)((char *)(var_v1) + 0x24));
                            temp_f2 = -2.5f * var_f18;
                            var_v0 += 4;
                            (*(s32 *)((char *)(var_v0) - 0x8)) = var_f18;
                            temp_f4_2 = temp_f4 * -0.5f;
                            var_f18 = (*(s32 *)((char *)(var_v1) + 0x10));
                            temp_f2_2 = var_f14 + temp_f2;
                            var_f14 = (*(s32 *)((char *)(var_v1) + 0x4));
                            var_a0 += 4;
                            temp_f8 = (temp_f4 * 0.5f) + (var_f10 + var_f16 + (-1.5f * var_f30));
                            var_v1 = (char *)(var_v1) + 4;
                            var_a1 += 4;
                            temp_f0 = 2.0f * var_f30;
                            temp_f6 = var_f30 * 0.5f;
                            var_f30 = (*(s32 *)((char *)(var_v1) + 0x18));
                            (*(s32 *)((char *)(var_a0) - 0x4)) = temp_f8;
                            var_a2 += 4;
                            temp_f6_2 = temp_f6 + var_f10;
                            var_f10 = -0.5f * var_f14;
                            var_f16 = 1.5f * var_f18;
                            (*(s32 *)((char *)(var_a2) - 0x4)) = temp_f6_2;
                            (*(f32 *)((char *)(var_a1) - 0x4)) = (f32) (temp_f4_2 + (temp_f2_2 + temp_f0));
                        } while ((u32) var_v0 < (u32) &sp10C);
                    }
                    temp_f4_3 = (*(s32 *)((char *)(var_v1) + 0x24));
                    (*(s32 *)((char *)(var_v0) - 0x4)) = var_f18;
                    (*(f32 *)((char *)((var_a0 + 4)) - 0x4)) = (f32) ((temp_f4_3 * 0.5f) + (var_f10 + var_f16 + (-1.5f * var_f30)));
                    (*(f32 *)((char *)((var_a2 + 4)) - 0x4)) = (f32) ((var_f30 * 0.5f) + var_f10);
                    (*(f32 *)((char *)((var_a1 + 4)) - 0x4)) = (f32) ((temp_f4_3 * -0.5f) + (var_f14 + (-2.5f * var_f18) + (2.0f * var_f30)));
                    var_v1_2 = 0;
                    var_v0_2 = &sp100;
                    do {
                        temp_f6_3 = *var_v0_2;
                        var_v0_2 += 4;
                        temp_t6 = &sp110 + ((var_s0 == 0) * 0xC) + var_v1_2;
                        var_v1_2 += 4;
                        *temp_t6 = temp_f6_3;
                    } while ((char *)(var_v0_2) != (char *)(&sp10C));
                    if (D_800969E4 <= 1.0f) {
                        do {
                            temp_v0 = &sp110 + (var_s0 * 0xC);
                            temp_v1 = &sp110 + ((var_s0 == 0) * 0xC);
                            temp_f0_2 = sp100 + (((((spDC * var_f12) + spE8) * var_f12) + spF4) * var_f12);
                            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_f0_2;
                            var_f14 = sp104 + (((((spE0 * var_f12) + spEC) * var_f12) + spF8) * var_f12);
                            (*(s32 *)((char *)(temp_v0) + 0x4)) = var_f14;
                            (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (sp108 + (((((spE4 * var_f12) + spF0) * var_f12) + spFC) * var_f12));
                            temp_f2_3 = temp_f0_2 - (*(s32 *)((char *)(temp_v1) + 0x0));
                            temp_f16 = var_f14 - (*(s32 *)((char *)(temp_v1) + 0x4));
                            temp_f0_3 = (*(s32 *)((char *)(temp_v0) + 0x8)) - (*(s32 *)((char *)(temp_v1) + 0x8));
                            temp_f2_4 = (temp_f2_3 * temp_f2_3) + ((temp_f16 * temp_f16) + (temp_f0_3 * temp_f0_3));
                            if (temp_f2_4 != 0.0f) {
                                spD8 += sqrtf(temp_f2_4);
                            }
                            var_f12 += D_800969E8;
                            var_s0 = (var_s0 ^ 1) & 0xFF;
                        } while (var_f12 <= 1.0f);
                    }
                    var_f20 = spD8;
                } else {
                    temp_f2_5 = sp148 - sp13C;
                    var_f12 = sp140 - sp134;
                    var_f14 = sp144 - sp138;
                    var_f20 += sqrtf((temp_f2_5 * temp_f2_5) + ((var_f12 * var_f12) + (var_f14 * var_f14)));
                }
                var_s7 += 1;
                var_fp += 8;
                var_a3 = (*(s32 *)((char *)(*var_t2) + var_t3));
                var_t1 = sp9C + 4;
            } while ((s32) var_s7 < (var_a3 - 1));
        }
        (*(s32 *)((char *)((*(s32 *)((char *)((*var_t4 + var_t5)) + 0x4))) + (var_s7 * 4))) = var_f20;
        (*(s32 *)((char *)(*var_t4) + var_t5)) = var_f20;
        (*(s32 *)((char *)((*var_t4 + var_t5)) + 0x3C)) = 0xFF;
    }
}

f32 *func_15020878(s32 arg0, s32 arg1, s32 arg2) {
    void * spE8;
    void * spDC;
    void * spD0;
    u8 spCF;
    void * spCC;
    f32 spC0;
    f32 spB4;
    f32 spA8;
    f32 sp9C;
    f32 sp98;
    s32 sp84;
    s32 *sp70;
    s32 sp6C;
    s32 sp68;
    void * *temp_a1;
    void * *var_a0;
    void * *var_v1_2;
    f32 *temp_a2;
    f32 *var_a1;
    f32 *var_a2;
    f32 *var_a3;
    f32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f22;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f10;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f26;
    f32 var_f28;
    f32 var_f2;
    f32 var_f4;
    f32 var_f6;
    f32 var_f8;
    s32 *temp_t0;
    s32 temp_f24;
    s32 temp_t2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 temp_a3;
    u8 var_t1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_t6;

    f32 spC4;
    f32 spA4;
    f32 spC8;
    f32 spA0;
    f32 spB0;
    f32 spAC;
    f32 spBC;
    f32 spB8;
    var_v0 = arg2 * 4;
    temp_a3 = (&D_800C35C8)[arg2][arg0];
    temp_t0 = var_v0 + &D_800C3A50;
    if (arg1 < (temp_a3 - 1)) {
        temp_t2 = arg0 << 6;
        temp_v1 = arg1 * 4;
        temp_a1 = *(&D_800C3868 + ((arg2 * 0x78) + (arg0 * 4)));
        sp6C = temp_t2;
        spCF = 0;
        sp70 = temp_t0;
        sp68 = temp_v1;
        sp98 = (*(s32 *)((char *)((*(s32 *)((char *)((*temp_t0 + temp_t2)) + 0x4))) + temp_v1));
        sp84 = (s32) (*(s32 *)((char *)(((char *)(temp_a1) + (arg1 * 8))) + 0x6));
        func_1501FFE8(&spE8, temp_a1, arg1, (s32) temp_a3);
        var_t1 = spCF;
        var_f18 = sp98;
        if (sp84 == 0) {
            var_v1 = 0;
            var_a1 = &sp9C;
            var_a0 = &spE8;
            var_a2 = &spA8;
            var_a3 = &spB4;
            var_f6 = (*(s32 *)((char *)(var_a0) + 0x0));
            var_f16 = (*(s32 *)((char *)(var_a0) + 0xC));
            var_f14 = (*(s32 *)((char *)(var_a0) + 0x18));
            var_f4 = -0.5f * var_f6;
            var_v0_2 = &spC0 + 4;
            var_f12 = 1.5f * var_f16;
            var_f8 = (*(s32 *)((char *)(var_a0) + 0x24));
            var_f10 = -1.5f * var_f14;
            if ((u32) var_v0_2 < (u32) &spCC) {
                do {
                    (*(s32 *)((char *)(var_v0_2) - 0x4)) = var_f16;
                    *var_a1 = (var_f8 * 0.5f) + (var_f4 + var_f12 + var_f10);
                    var_v0_2 += 4;
                    var_a1 += 4;
                    *var_a3 = (var_f14 * 0.5f) + var_f4;
                    var_a0 = (char *)(var_a0) + 4;
                    var_a2 += 4;
                    var_a3 += 4;
                    (*(f32 *)((char *)(var_a2) - 0x4)) = (f32) ((var_f8 * -0.5f) + (var_f6 + (-2.5f * var_f16) + (2.0f * var_f14)));
                    (*(s32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x8)) = var_f16;
                    (*(f32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x14)) = (f32) (*(f32 *)((char *)(var_a3) - 0x4));
                    (*(f32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x20)) = (f32) (*(f32 *)((char *)(var_a2) - 0x4));
                    (*(f32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x2C)) = (f32) (*(f32 *)((char *)(var_a1) - 0x4));
                    var_f6 = (*(s32 *)((char *)(var_a0) + 0x0));
                    var_f16 = (*(s32 *)((char *)(var_a0) + 0xC));
                    var_f14 = (*(s32 *)((char *)(var_a0) + 0x18));
                    var_f4 = -0.5f * var_f6;
                    var_f8 = (*(s32 *)((char *)(var_a0) + 0x24));
                    var_v1 += 4;
                    var_f12 = 1.5f * var_f16;
                    var_f10 = -1.5f * var_f14;
                } while ((u32) var_v0_2 < (u32) &spCC);
            }
            (*(s32 *)((char *)(var_v0_2) - 0x4)) = var_f16;
            *var_a1 = (var_f8 * 0.5f) + (var_f4 + var_f12 + var_f10);
            temp_a2 = var_a2 + 4;
            *var_a3 = (var_f14 * 0.5f) + var_f4;
            (*(f32 *)((char *)(temp_a2) - 0x4)) = (f32) ((var_f8 * -0.5f) + (var_f6 + (-2.5f * var_f16) + (2.0f * var_f14)));
            (*(s32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x8)) = var_f16;
            (*(f32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x14)) = (f32) (*(f32 *)((char *)((var_a3 + 4)) - 0x4));
            (*(f32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x20)) = (f32) (*(f32 *)((char *)(temp_a2) - 0x4));
            (*(f32 *)((char *)((*sp70 + (arg0 << 6) + var_v1)) + 0x2C)) = (f32) (*(f32 *)((char *)((var_a1 + 4)) - 0x4));
            var_v0 = (s32) &spC0;
            var_v1_2 = &spDC;
            (*(s32 *)((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)))) = var_f18;
            do {
                temp_f8 = (*(s32 *)((var_v0)));
                var_v1_2 = (char *)(var_v1_2) + 4;
                var_v0 += 4;
                (*(s32 *)((char *)(var_v1_2) - 0x4)) = temp_f8;
            } while ((char *)(var_v1_2) != (char *)(&spE8));
            var_v1_3 = 4;
            var_f2 = D_800969EC;
            if (D_800969EC <= 1.0f) {
                do {
                    var_v0 = (s32) (&spD0 + (var_t1 * 0xC));
                    temp_f0 = spC0 + (((((sp9C * var_f2) + spA8) * var_f2) + spB4) * var_f2);
                    temp_a0 = &spD0 + ((var_t1 == 0) * 0xC);
                    (*(s32 *)((char *)(var_v0) + 0x0)) = temp_f0;
                    temp_f14 = spC4 + (((((spA0 * var_f2) + spAC) * var_f2) + spB8) * var_f2);
                    (*(s32 *)((char *)(var_v0) + 0x4)) = temp_f14;
                    temp_f8_2 = ((((spA4 * var_f2) + spB0) * var_f2) + spBC) * var_f2;
                    var_f2 += D_800969EC;
                    (*(f32 *)((char *)(var_v0) + 0x8)) = (f32) (spC8 + temp_f8_2);
                    temp_f12 = temp_f0 - (*(s32 *)((char *)(temp_a0) + 0x0));
                    temp_f16 = temp_f14 - (*(s32 *)((char *)(temp_a0) + 0x4));
                    temp_f0_2 = (*(s32 *)((char *)(var_v0) + 0x8)) - (*(s32 *)((char *)(temp_a0) + 0x8));
                    temp_f12_2 = (temp_f12 * temp_f12) + ((temp_f16 * temp_f16) + (temp_f0_2 * temp_f0_2));
                    if (temp_f12_2 != 0.0f) {
                        var_f18 += sqrtf(temp_f12_2);
                    }
                    var_t1 = (var_t1 ^ 1) & 0xFF;
                    (*(s32 *)((char *)((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38))) + var_v1_3)) = var_f18;
                    var_v1_3 += 4;
                } while (var_f2 <= 1.0f);
            }
        } else {
            temp_a0_2 = *sp70 + sp6C;
            temp_f18 = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_a0_2) + 0x4)) + sp68)) + 0x4)) - var_f18;
            var_v1_4 = 4;
            var_v0_3 = 1;
            (*(f32 *)((*(void **)&(*(f32 *)((char *)(temp_a0_2) + 0x38))))) = ((f32) 0 * temp_f18) / 101.0f;
            var_f28 = (f32) 2;
            var_f26 = ((f32) 1 * temp_f18) / 101.0f;
            if (1 != 0x61) {
                do {
                    (*(s32 *)((char *)((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38))) + var_v1_4)) = var_f26;
                    (*(f32 *)((char *)(((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)) + var_v1_4)) + 0x4)) = (f32) ((var_f28 * temp_f18) / 101.0f);
                    temp_f24 = var_v0_3 + 3;
                    temp_f22 = ((f32) (var_v0_3 + 2) * temp_f18) / 101.0f;
                    var_v0_3 += 4;
                    (*(s32 *)((char *)(((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)) + var_v1_4)) + 0x8)) = temp_f22;
                    temp_t6 = (*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)) + var_v1_4;
                    var_v1_4 += 0x10;
                    var_f28 = (f32) (var_v0_3 + 1);
                    var_f26 = ((f32) var_v0_3 * temp_f18) / 101.0f;
                    (*(f32 *)((char *)(temp_t6) + 0xC)) = (f32) (((f32) temp_f24 * temp_f18) / 101.0f);
                } while (var_v0_3 != 0x61);
            }
            (*(s32 *)((char *)((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38))) + var_v1_4)) = var_f26;
            (*(f32 *)((char *)(((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)) + var_v1_4)) + 0x4)) = (f32) ((var_f28 * temp_f18) / 101.0f);
            var_v0 = var_v0_3 + 4;
            (*(f32 *)((char *)(((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)) + var_v1_4)) + 0x8)) = (f32) (((f32) (var_v0_3 + 2) * temp_f18) / 101.0f);
            (*(f32 *)((char *)(((*(s32 *)((char *)((*sp70 + sp6C)) + 0x38)) + var_v1_4)) + 0xC)) = (f32) (((f32) (var_v0_3 + 3) * temp_f18) / 101.0f);
        }
        (*(s8 *)((char *)((*sp70 + sp6C)) + 0x3C)) = (s8) arg1;
    }
    return (f32 *) var_v0;
}

void func_15020EC4(s32 arg0) {
    s32 spC0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 *sp80;
    s32 sp7C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f20;
    f32 var_f22;
    s32 *temp_a1;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *temp_s3;
    s32 *temp_v0;
    s32 *var_a1;
    s32 temp_f4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s4;
    s32 temp_t3;
    s32 temp_t4;
    s32 var_s6;
    s32 var_v0;
    u8 *temp_s7;
    u8 temp_a0;
    u8 temp_t0;
    void *temp_s5;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_v1;
    void *var_v1_2;

    if (*(&D_800C35EA + arg0) == 1) {
        D_800C3638 = 0;
        if (D_800C35F8 == 0xFF) {
            D_800C35F8 = func_15023264(arg0, (&D_800C35B0)[arg0]);
        }
        temp_s7 = arg0 + &D_800C363A;
        temp_f24 = D_800969F0;
        spC0 = 0;
        do {
            var_s6 = 0;
            if ((s32) *temp_s7 > 0) {
                temp_t3 = arg0 * 4;
                sp80 = temp_t3 + &D_800C35D0;
                var_v0 = 0;
                do {
                    if ((*(s32 *)((char *)(*sp80) + var_v0)) != 0) {
                        temp_s3 = temp_t3 + &D_800C35F0;
                        temp_s4 = var_s6 * 8;
                        if (*((&D_800C35C8)[arg0] + var_v0) != 0) {
                            sp7C = var_v0;
                            temp_a1 = *temp_s3 + temp_s4;
                            if (spC0 == 0) {
                                if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 1) {

                                } else {
                                    goto block_13;
                                }
                            } else if ((*(s32 *)((char *)(temp_a1) + 0x0)) != 1) {

                            } else {
block_13:
                                if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 1) {
                                    temp_s5 = D_800DBFF0;
                                    if (var_s6 != D_800C35F8) {

                                    } else {
                                        temp_s0 = temp_t3 + &D_800C3958;
                                        temp_s1 = var_s6 * 0x44;
                                        if (!((*(s32 *)((char *)(temp_s5) + 0x2C)) & 0x40000)) {
                                            if (D_800C3671 == 0) {
                                                func_1512D560(temp_s5, 5, (void * *) arg0);
                                            }
                                            func_15128CB0(temp_s5);
                                        }
                                        var_v1 = *temp_s0 + temp_s1;
                                        temp_f2 = (*(s32 *)((char *)(var_v1) + 0x34));
                                        if (temp_f24 == temp_f2) {
                                            D_800C3600->unk8 = 0.0f;
                                        } else {
                                            if (temp_f2 < -20.0f) {
                                                (*(s32 *)((char *)(var_v1) + 0x34)) = -20.0f;
                                            } else {
                                                if (temp_f2 > 40.0f) {
                                                    var_f0 = 40.0f;
                                                } else {
                                                    var_f0 = temp_f2;
                                                }
                                                (*(s32 *)((char *)(var_v1) + 0x34)) = var_f0;
                                            }
                                            var_v1 = *temp_s0 + temp_s1;
                                            D_800C3600->unk8 = (f32) (*(f32 *)((char *)(var_v1) + 0x34));
                                        }
                                        temp_f2_2 = (*(s32 *)((char *)(var_v1) + 0x3C));
                                        if (temp_f24 == temp_f2_2) {
                                            var_f22 = 0.0f;
                                        } else {
                                            if (temp_f2_2 < -20.0f) {
                                                (*(s32 *)((char *)(var_v1) + 0x3C)) = -20.0f;
                                            } else {
                                                if (temp_f2_2 > 40.0f) {
                                                    var_f0_2 = 40.0f;
                                                } else {
                                                    var_f0_2 = temp_f2_2;
                                                }
                                                (*(s32 *)((char *)(var_v1) + 0x3C)) = var_f0_2;
                                            }
                                            var_v1 = *temp_s0 + temp_s1;
                                            var_f22 = (*(s32 *)((char *)(var_v1) + 0x3C));
                                        }
                                        temp_f2_3 = (*(s32 *)((char *)(var_v1) + 0x40));
                                        if (temp_f24 == temp_f2_3) {
                                            var_f20 = 0.0f;
                                            D_800C3600->unk4 = arg0;
                                            var_a1 = *temp_s3 + temp_s4;
                                        } else {
                                            if (temp_f2_3 < -20.0f) {
                                                (*(s32 *)((char *)(var_v1) + 0x40)) = -20.0f;
                                            } else {
                                                if (temp_f2_3 > 40.0f) {
                                                    var_f0_3 = 40.0f;
                                                } else {
                                                    var_f0_3 = temp_f2_3;
                                                }
                                                (*(s32 *)((char *)(var_v1) + 0x40)) = var_f0_3;
                                            }
                                            var_v1 = *temp_s0 + temp_s1;
                                            var_f20 = (*(s32 *)((char *)(var_v1) + 0x40));
                                            var_a1 = *temp_s3 + temp_s4;
                                            D_800C3600->unk4 = arg0;
                                        }
                                        D_800C3600->unk14 = (f32) (*(f32 *)((char *)(var_v1) + 0x0));
                                        D_800C3600->unk18 = (f32) (*(f32 *)((char *)(var_v1) + 0x4));
                                        D_800C3600->unk1C = (f32) (*(f32 *)((char *)(var_v1) + 0x8));
                                        temp_a0 = (*(s32 *)((char *)(var_a1) + 0x2));
                                        if (temp_a0 == 1) {
                                            D_800C3600->unk0 = 0;
                                            D_800C3600->unk20 = (f32) (*(f32 *)((char *)(*temp_s0) + ((s32)((*(f32 *)((char *)(var_a1) + 0x3)) * 0x44))));
                                            D_800C3600->unk24 = (f32) ((*(f32 *)((char *)(var_v1) + 0x38)) + ((*(f32 *)((char *)((*temp_s0 + ((s32)((*(f32 *)((char *)(var_a1) + 0x3)) * 0x44)))) + 0x4)) + (f32) (*(f32 *)((char *)(var_a1) + 0x4))));
                                            D_800C3600->unk28 = (f32) (*(f32 *)((char *)((*temp_s0 + ((s32)((*(f32 *)((char *)(var_a1) + 0x3)) * 0x44)))) + 0x8));
                                            (*(f32 *)((char *)(D_800C3600) + 0x30)) = var_f22;
                                            (*(f32 *)((char *)(D_800C3600) + 0x34)) = var_f20;
                                            (*(f32 *)((char *)(D_800C3600) + 0x2C)) = (f32) -(*(f32 *)((char *)(var_v1) + 0x14));
                                            goto block_59;
                                        }
                                        if (temp_a0 == 2) {
                                            temp_v0 = func_15083E90((u8) (*(u8 *)((char *)(var_a1) + 0x3)), var_a1);
                                            if (temp_v0 == NULL) {

                                            } else {
                                                D_800C3600->unk0 = 0;
                                                D_800C3620 = (*(s32 *)((char *)(temp_v0) + 0x14));
                                                temp_v1 = *temp_s0 + temp_s1;
                                                D_800C3620 = (*(f32 *)((char *)(temp_v1) + 0x38)) + ((*(f32 *)((char *)(temp_v0) + 0x18)) + (f32) (*(f32 *)((char *)((*temp_s3 + temp_s4)) + 0x4)));
                                                D_800C3628 = (*(s32 *)((char *)(temp_v0) + 0x1C));
                                                (*(f32 *)((char *)(D_800C3600) + 0x30)) = var_f22;
                                                (*(f32 *)((char *)(D_800C3600) + 0x34)) = var_f20;
                                                (*(f32 *)((char *)(D_800C3600) + 0x2C)) = (f32) -(*(f32 *)((char *)(temp_v1) + 0x14));
                                                goto block_59;
                                            }
                                        } else if (temp_a0 == 3) {
                                            temp_v0_2 = func_151149AC((u8) (*(u8 *)((char *)(var_a1) + 0x3)), var_a1);
                                            if (temp_v0_2 == NULL) {

                                            } else {
                                                D_800C3600->unk0 = 0;
                                                D_800C3620 = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x10));
                                                temp_v1_2 = *temp_s0 + temp_s1;
                                                D_800C3620 = (*(f32 *)((char *)(temp_v1_2) + 0x38)) + (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x12)) + (*(f32 *)((char *)((*temp_s3 + temp_s4)) + 0x4)));
                                                D_800C3628 = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x14));
                                                (*(f32 *)((char *)(D_800C3600) + 0x30)) = var_f22;
                                                (*(f32 *)((char *)(D_800C3600) + 0x34)) = var_f20;
                                                (*(f32 *)((char *)(D_800C3600) + 0x2C)) = (f32) -(*(f32 *)((char *)(temp_v1_2) + 0x14));
                                                goto block_59;
                                            }
                                        } else {
                                            if (temp_a0 == 0) {
                                                D_800C3600->unk0 = 1;
                                                D_800C3600->unk20 = (f32) -(*(f32 *)((char *)(var_v1) + 0x14));
                                                D_800C3600->unk24 = (f32) (*(f32 *)((char *)(var_v1) + 0xC));
                                                D_800C3600->unk28 = (f32) (*(f32 *)((char *)(var_v1) + 0x10));
                                                (*(f32 *)((char *)(D_800C3600) + 0x2C)) = var_f22;
                                                (*(f32 *)((char *)(D_800C3600) + 0x30)) = var_f20;
                                                D_800C3600->unk18 = (f32) (D_800C3600->unk18 + (*(f32 *)((char *)(var_v1) + 0x38)));
                                            }
block_59:
                                            if (D_800C3671 == 0) {
                                                func_1512D560(temp_s5, 7, &D_800C3600);
                                            }
                                        }
                                    }
                                } else if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 3) {
                                    temp_v0_3 = func_151149AC((*(s32 *)((char *)(temp_a1) + 0x2)), temp_a1);
                                    if (temp_v0_3 == NULL) {

                                    } else {
                                        (*(s32 *)((char *)(temp_v0_3) + 0x4E)) = 0;
                                        temp_t0 = (*(s32 *)((char *)(temp_v0_3) + 0x6F)) & 0xFF7F;
                                        (*(s32 *)((char *)(temp_v0_3) + 0x6F)) = temp_t0;
                                        (*(s32 *)((char *)(temp_v0_3) + 0x6F)) = temp_t0;
                                        temp_s0_2 = temp_t3 + &D_800C3958;
                                        temp_s1_2 = var_s6 * 0x44;
                                        (*(s16 *)((char *)(temp_v0_3) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(*temp_s0_2) + temp_s1_2));
                                        temp_v1_3 = *temp_s0_2 + temp_s1_2;
                                        (*(s16 *)((char *)(temp_v0_3) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(temp_v1_3) + 0x38)) + (*(s16 *)((char *)(temp_v1_3) + 0x4)));
                                        (*(s16 *)((char *)(temp_v0_3) + 0x14)) = (s16) (s32) (*(s16 *)((char *)((*temp_s0_2 + temp_s1_2)) + 0x8));
                                        (*(f32 *)((char *)(temp_v0_3) + 0x0)) = (f32) (*(f32 *)((char *)((*temp_s0_2 + temp_s1_2)) + 0xC));
                                        (*(f32 *)((char *)(temp_v0_3) + 0x4)) = (f32) (*(f32 *)((char *)((*temp_s0_2 + temp_s1_2)) + 0x10));
                                        (*(f32 *)((char *)(temp_v0_3) + 0x8)) = (f32) (*(f32 *)((char *)((*temp_s0_2 + temp_s1_2)) + 0x14));
                                        var_v1_2 = *temp_s0_2 + temp_s1_2;
                                        temp_f0 = (*(s32 *)((char *)(var_v1_2) + 0x18));
                                        if (temp_f24 != temp_f0) {
                                            (*(f32 *)((char *)(temp_v0_3) + 0x2C)) = (f32) (temp_f0 * D_800969F4);
                                            var_v1_2 = *temp_s0_2 + temp_s1_2;
                                        }
                                        temp_f0_2 = (*(s32 *)((char *)(var_v1_2) + 0x1C));
                                        if (temp_f24 != temp_f0_2) {
                                            (*(f32 *)((char *)(temp_v0_3) + 0x30)) = (f32) (temp_f0_2 * D_800969F8);
                                            var_v1_2 = *temp_s0_2 + temp_s1_2;
                                        }
                                        temp_f0_3 = (*(s32 *)((char *)(var_v1_2) + 0x20));
                                        if (temp_f24 != temp_f0_3) {
                                            (*(f32 *)((char *)(temp_v0_3) + 0x34)) = (f32) (temp_f0_3 * D_800969FC);
                                            var_v1_2 = *temp_s0_2 + temp_s1_2;
                                        }
                                        temp_f4 = (s32) (*(s32 *)((char *)(var_v1_2) + 0x34));
                                        if (temp_f4 >= 0x100) {
                                            (*(s32 *)((char *)(temp_v0_3) + 0x8A)) = 0xFF;
                                        } else if (temp_f4 < 0) {
                                            (*(s32 *)((char *)(temp_v0_3) + 0x8A)) = 0;
                                        } else {
                                            (*(s8 *)((char *)(temp_v0_3) + 0x8A)) = (s8) temp_f4;
                                        }
                                    }
                                } else if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 2) {
                                    func_1502178C(func_15083E90((*(s32 *)((char *)(temp_a1) + 0x2)), temp_a1), arg0, var_s6);
                                } else if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 4) {
                                    sp94 = (s32) (*(s32 *)((char *)(temp_a1) + 0x2));
                                    sp98 = (s32) (*(s32 *)((char *)(temp_a1) + 0x2));
                                    sp9C = (s32) (*(s32 *)((char *)(temp_a1) + 0x2));
                                } else if ((*(s32 *)((char *)(temp_a1) + 0x0)) == 5) {
                                    temp_v1_4 = *(&D_800C3958 + temp_t3) + (var_s6 * 0x44);
                                    if ((*(s32 *)((char *)(temp_v1_4) + 0x34)) >= 1.0f) {
                                        func_1517D5FC((s16) (s32) (*(s16 *)((char *)(temp_v1_4) + 0x0)), (s16) (s32) (*(s16 *)((char *)(temp_v1_4) + 0x4)), (s16) (s32) (*(s16 *)((char *)(temp_v1_4) + 0x8)), 0, (s32) (*(s16 *)((char *)(temp_v1_4) + 0x18)), (s32) (*(s16 *)((char *)(temp_v1_4) + 0x1C)));
                                    }
                                }
                            }
                            var_v0 = sp7C;
                        }
                    }
                    var_s6 += 1;
                    var_v0 += 2;
                } while (var_s6 < (s32) *temp_s7);
            }
            temp_t4 = spC0 + 1;
            spC0 = temp_t4;
        } while (temp_t4 != 2);
        D_800C3638 = 1;
    }
}

void func_1502178C(s32 *arg0, s32 arg1, s32 arg2) {
    f32 spE0;
    s32 spD8;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s32 spBC;
    u16 **spAC;
    f32 *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 var_f0;
    f32 var_f0_2;
    s32 *temp_s1;
    s32 *temp_v0_2;
    s32 temp_s2;
    s32 temp_s6;
    s32 var_s3;
    s32 var_s4;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_3;
    void *var_v1;

    if (*(&D_800C35EA + arg1) == 1) {
        D_800C3638 = 0;
        if (arg2 != -1) {
            var_v0 = arg2;
            spD8 = arg2 + 1;
        } else {
            var_v0 = 0;
            spD8 = (s32) *(&D_800C363A + arg1);
        }
        var_s3 = var_v0;
        temp_s6 = arg1 * 4;
        if (var_v0 < spD8) {
            temp_f30 = D_80096A00;
            temp_f28 = D_80096A04;
            temp_f26 = D_80096A08;
            spAC = &(&D_800C35C8)[arg1];
            var_s4 = var_v0 * 2;
            do {
                if ((*(s32 *)((char *)(*spAC) + var_s4)) != 0) {
                    temp_v0 = *(&D_800C35F0 + temp_s6) + (var_s3 * 8);
                    if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 2) {
                        temp_v0_2 = func_15083E90((*(s32 *)((char *)(temp_v0) + 0x2)));
                        if ((temp_v0_2 != NULL) && (temp_v0_2 == arg0)) {
                            temp_s1 = temp_s6 + &D_800C3958;
                            spC4 = (*(s32 *)((char *)(temp_v0_2) + 0x14));
                            spC8 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                            temp_s2 = var_s3 * 0x44;
                            spCC = (*(s32 *)((char *)(temp_v0_2) + 0x1C));
                            (*(f32 *)((char *)(temp_v0_2) + 0x14)) = (f32) (*(f32 *)((char *)(*temp_s1) + temp_s2));
                            temp_v1 = *temp_s1 + temp_s2;
                            (*(f32 *)((char *)(temp_v0_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x38)) + (*(f32 *)((char *)(temp_v1) + 0x4)));
                            (*(f32 *)((char *)(temp_v0_2) + 0x1CC)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x18));
                            (*(f32 *)((char *)(temp_v0_2) + 0x1C)) = (f32) (*(f32 *)((char *)((*temp_s1 + temp_s2)) + 0x8));
                            if (D_800C3C88 == 0) {
                                temp_f0 = (*(s32 *)((char *)(temp_v0_2) + 0x1C)) - spCC;
                                temp_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x14)) - spC4;
                                (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((temp_f0 * temp_f0) + (temp_f12 * temp_f12));
                                temp_f2 = (*(s32 *)((char *)(temp_v0_2) + 0x3C));
                                if (temp_f2 != 0.0f) {
                                    (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) (2.0f * sqrtf(temp_f2));
                                }
                            } else {
                                (*(s32 *)((char *)(temp_v0_2) + 0x3C)) = 0.0f;
                            }
                            temp_v1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x31C));
                            if (temp_v1_2 != NULL) {
                                *temp_v1_2 = 2.0f * (*(s32 *)((char *)(temp_v0_2) + 0x3C));
                            }
                            (*(s32 *)((char *)(temp_v0_2) + 0x54)) = 0.0f;
                            (*(s32 *)((char *)(temp_v0_2) + 0xCC)) = 0;
                            D_800D35DC = ((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1;
                            temp_f20 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                            spBC = 0;
                            func_1510E7A4(temp_v0_2 + 0x188, temp_v0_2 + 0x18C, &spE0, temp_v0_2 + 0x118, temp_v0_2 + 0x184, temp_v0_2 + 0x1A2, (*(s32 *)((char *)(temp_v0_2) + 0x14)), temp_f20, (*(s32 *)((char *)(temp_v0_2) + 0x1C)), temp_f20, 0, temp_v0_2, temp_f28, (*(s32 *)((char *)(arg0) + 0x18)));
                            var_t0 = spBC;
                            D_800D35DC = 0;
                            (*(s32 *)((char *)(temp_v0_2) + 0x180)) = spE0;
                            temp_f20_2 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                            (*(s32 *)((char *)(temp_v0_2) + 0xD0)) = 0;
                            (*(f32 *)((char *)(temp_v0_2) + 0x28)) = (f32) (temp_f20_2 - (*(f32 *)((char *)(temp_v0_2) + 0x180)));
                            if ((*(s32 *)((char *)(temp_v0_2) + 0x0)) == 1) {
                                temp_f0_2 = (*(s32 *)((char *)(temp_v0_2) + 0x118));
                                if ((temp_f28 != temp_f0_2) && (temp_f20_2 < temp_f0_2)) {
                                    (*(s32 *)((char *)(temp_v0_2) + 0xAD)) = 1;
                                } else {
                                    (*(s32 *)((char *)(temp_v0_2) + 0xAD)) = 0;
                                    (*(s32 *)((char *)(temp_v0_2) + 0xB2)) = 0;
                                }
                            }
                            var_v1 = *temp_s1 + temp_s2;
                            temp_f0_3 = (*(s32 *)((char *)(var_v1) + 0x18));
                            if (temp_f30 != temp_f0_3) {
                                var_t0 = 1;
                                (*(f32 *)((char *)(temp_v0_2) + 0x14C)) = (f32) (temp_f0_3 * temp_f26);
                                (*(f32 *)((char *)(temp_v0_2) + 0x154)) = (f32) ((*(f32 *)((char *)((*temp_s1 + temp_s2)) + 0x18)) * temp_f26);
                                var_v1 = *temp_s1 + temp_s2;
                            }
                            temp_f0_4 = (*(s32 *)((char *)(var_v1) + 0x1C));
                            if (temp_f30 != temp_f0_4) {
                                var_t0 = 1;
                                (*(f32 *)((char *)(temp_v0_2) + 0x150)) = (f32) (temp_f0_4 * temp_f26);
                                (*(f32 *)((char *)(temp_v0_2) + 0x158)) = (f32) ((*(f32 *)((char *)((*temp_s1 + temp_s2)) + 0x1C)) * temp_f26);
                            }
                            if (var_t0 != 0) {
                                func_15062BDC(temp_v0_2, (*(s32 *)((char *)(temp_v0_2) + 0x14C)), (*(s32 *)((char *)(temp_v0_2) + 0x150)));
                            }
                            (*(f32 *)((char *)(temp_v0_2) + 0xB8)) = (f32) (*(f32 *)((char *)((*temp_s1 + temp_s2)) + 0xC));
                            var_f0 = (*(s32 *)((char *)((*temp_s1 + temp_s2)) + 0x10)) + 180.0f;
                            if (var_f0 >= 360.0f) {
                                do {
                                    var_f0 -= 360.0f;
                                } while (var_f0 >= 360.0f);
                            }
                            if (var_f0 < 0.0f) {
                                do {
                                    var_f0 += 360.0f;
                                } while (var_f0 < 0.0f);
                            }
                            temp_f18 = var_f0 * D_80096A0C;
                            if (M2C_ERROR(/* cfc1 */) & 0x78) {
                                if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                                    var_v0_2 = (s32) (temp_f18 - 2.1474836e9f) | (s32) &D_7FFFC000;
                                } else {
                                    goto block_34;
                                }
                            } else {
                                var_v0_2 = (s32) temp_f18;
                                if (var_v0_2 < 0) {
block_34:
                                    var_v0_2 = -1;
                                }
                            }
                            (*(s16 *)((char *)(temp_v0_2) + 0x78)) = (s16) var_v0_2;
                            (*(s16 *)((char *)(temp_v0_2) + 0x7A)) = (s16) var_v0_2;
                            (*(s16 *)((char *)(temp_v0_2) + 0x76)) = (s16) var_v0_2;
                            (*(s32 *)((char *)(temp_v0_2) + 0x40)) = var_f0;
                            (*(f32 *)((char *)(temp_v0_2) + 0xC4)) = (f32) (*(f32 *)((char *)((*temp_s1 + temp_s2)) + 0x14));
                            temp_v1_3 = *temp_s1 + temp_s2;
                            temp_f2_2 = (*(s32 *)((char *)(temp_v1_3) + 0x34));
                            if (temp_f2_2 < 0.0f) {
                                (*(s32 *)((char *)(temp_v1_3) + 0x34)) = 0.0f;
                            } else {
                                if (temp_f2_2 > 255.0f) {
                                    var_f0_2 = 255.0f;
                                } else {
                                    var_f0_2 = temp_f2_2;
                                }
                                (*(s32 *)((char *)(temp_v1_3) + 0x34)) = var_f0_2;
                            }
                            func_1506160C(temp_v0_2, 1, (u32) (*(u32 *)((char *)((*temp_s1 + temp_s2)) + 0x34)) & 0xFF, 0, 0);
                            (*(f32 *)((char *)(temp_v0_2) + 0x2C)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x14));
                            (*(f32 *)((char *)(temp_v0_2) + 0x30)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x18));
                            (*(f32 *)((char *)(temp_v0_2) + 0x34)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x1C));
                        }
                    }
                }
                var_s3 += 1;
                var_s4 += 2;
            } while (var_s3 != spD8);
        }
        D_800C3638 = 1;
    }
}

s32 func_15021DB8(f32 *arg0, f32 *arg1, f32 *arg2, void *arg3, s32 arg4, s32 arg5) {
    s32 *temp_t2;
    s32 *temp_t2_3;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t7;
    s32 var_v1;
    u16 *var_t0;
    u8 temp_t1_2;
    u8 temp_t1_3;
    u8 temp_v0;
    void *temp_t1;
    void *temp_t2_2;
    void *temp_v0_2;
    void *temp_v1;

    if (*(&D_800C35EA + arg5) != 1) {
        goto block_15;
    }
    temp_v0 = *(&D_800C363A + arg5);
    var_v1 = 0;
    temp_a0 = arg5 * 4;
    if ((s32) temp_v0 > 0) {
        var_t0 = (&D_800C35C8)[arg5];
loop_4:
        if (*var_t0 != 0) {
            temp_t1 = *(&D_800C35F0 + temp_a0) + (var_v1 * 8);
            if (((*(s32 *)((char *)(temp_t1) + 0x0)) == 2) && ((*(s32 *)((char *)((&gObjects + (arg4 * 0x32C))) + 0x3B)) == (*(s32 *)((char *)(temp_t1) + 0x2)))) {
                temp_t0 = var_v1 * 4;
                temp_t7 = arg5 * 0x78;
                temp_v0_2 = *(&D_800C3960 + (temp_t7 + temp_t0));
                temp_t1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x2));
                if (temp_t1_2 != 0xFF) {
                    temp_v1 = (temp_t1_2 * 8) + *(&D_800C3688 + (temp_t7 + temp_t0));
                    temp_t2 = temp_a0 + &D_800C3958;
                    temp_a2 = (*(s32 *)((char *)(temp_v1) + 0x5)) * 0x44;
                    (*(f32 *)((char *)(arg3) + 0x0)) = (f32) (*(f32 *)((char *)(*temp_t2) + temp_a2));
                    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((*(f32 *)((char *)((*temp_t2 + temp_a2)) + 0x4)) + (f32) (*(f32 *)((char *)(temp_v1) + 0x6)));
                    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) (*(f32 *)((char *)((*temp_t2 + temp_a2)) + 0x8));
                    return 0;
                }
                temp_t1_3 = (*(s32 *)((char *)(temp_v0_2) + 0x1));
                if (temp_t1_3 != 0xFF) {
                    temp_t2_2 = (temp_t1_3 * 8) + *(&D_800C3688 + ((arg5 * 0x78) + temp_t0));
                    if ((*(s32 *)((char *)(temp_t2_2) + 0x5)) == 0) {
                        temp_t2_3 = temp_a0 + &D_800C3958;
                        temp_a3 = var_v1 * 0x44;
                        *arg0 = (*(s32 *)((char *)((*temp_t2_3 + temp_a3)) + 0x28));
                        *arg1 = (*(s32 *)((char *)((*temp_t2_3 + temp_a3)) + 0x24));
                        *arg2 = (*(s32 *)((char *)((*temp_t2_3 + temp_a3)) + 0x2C));
                        return 1;
                    }
                    (*(f32 *)((char *)(arg3) + 0x0)) = (f32)(s32)D_800DBFF0->unk2F8;
                    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) (D_800DBFF0->unk2FC + (f32) (*(f32 *)((char *)(temp_t2_2) + 0x6)));
                    (*(f32 *)((char *)(arg3) + 0x8)) = (f32)(s32)D_800DBFF0->unk300;
                    return 0;
                }
                (*(f32 *)((char *)(arg3) + 0x0)) = (f32) D_80096A10;
                (*(f32 *)((char *)(arg3) + 0x4)) = (f32) D_80096A10;
                (*(f32 *)((char *)(arg3) + 0x8)) = (f32) D_80096A10;
                return 0;
            }
        }
        var_v1 += 1;
        var_t0 += 2;
        if (var_v1 >= (s32) temp_v0) {
            goto block_15;
        }
        goto loop_4;
    }
block_15:
    return 0;
}

s32 func_15022024(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    s32 *temp_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v0;
    u16 *var_a1;
    u8 temp_v1;
    void *temp_a2;
    void *var_a2;

    if (*(&D_800C35EA + arg3) != 1) {
        goto block_13;
    }
    temp_v1 = *(&D_800C363A + arg3);
    var_v0 = 0;
    temp_a0 = arg3 * 4;
    if ((s32) temp_v1 > 0) {
        var_a1 = (&D_800C35C8)[arg3];
loop_4:
        if (*var_a1 != 0) {
            temp_a2 = *(&D_800C35F0 + temp_a0) + (var_v0 * 8);
            if (((*(s32 *)((char *)(temp_a2) + 0x0)) == 2) && ((*(s32 *)((char *)((&gObjects + (arg2 * 0x32C))) + 0x3B)) == (*(s32 *)((char *)(temp_a2) + 0x2)))) {
                (*(s32 *)((char *)(arg0) + 0x4)) = 0.0f;
                (*(s32 *)((char *)(arg1) + 0x4)) = 0.0f;
                (*(s32 *)((char *)(arg0) + 0x0)) = 0.0f;
                temp_v1_2 = temp_a0 + &D_800C3958;
                (*(s32 *)((char *)(arg1) + 0x0)) = 0.0f;
                temp_a1 = var_v0 * 0x44;
                var_a2 = *temp_v1_2 + temp_a1;
                temp_f0 = (*(s32 *)((char *)(var_a2) + 0x3C));
                if (D_80096A14 != temp_f0) {
                    (*(s32 *)((char *)(arg1) + 0x0)) = temp_f0;
                    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
                    var_a2 = *temp_v1_2 + temp_a1;
                }
                temp_f0_2 = (*(s32 *)((char *)(var_a2) + 0x40));
                if (D_80096A14 != temp_f0_2) {
                    (*(s32 *)((char *)(arg0) + 0x0)) = temp_f0_2;
                    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
                }
                return 1;
            }
        }
        var_v0 += 1;
        var_a1 += 2;
        if (var_v0 >= (s32) temp_v1) {
            goto block_13;
        }
        goto loop_4;
    }
block_13:
    return 0;
}

void func_15022190(s16 arg0, s16 arg1, s16 arg2, f32 arg3) {
    D_800C3594 = arg3;
    (*(s32 *)((char *)&(D_800C358C) + 0x0)) = arg0;
    (*(s32 *)((char *)&(D_800C358C) + 0x2)) = arg1;
    (*(s32 *)((char *)&(D_800C358C) + 0x4)) = arg2;
    D_800C3663 = 1;
}

void func_150221E8(s16 arg0, s16 arg1, s16 arg2, f32 arg3) {
    D_800C35A0 = arg3;
    (*(s32 *)((char *)&(D_800C3598) + 0x0)) = arg0;
    (*(s32 *)((char *)&(D_800C3598) + 0x2)) = arg1;
    (*(s32 *)((char *)&(D_800C3598) + 0x4)) = arg2;
}

void func_15022234(s32 arg0) {
    *(&D_800C3510 + arg0) = 0;
}

void func_15022248(s32 arg0) {
    *(&D_800C354A + arg0) = 0;
}

void func_1502225C( s32 arg0, s32 arg1) {
    s32 var_v0;
    u8 *temp_v1;
    u8 *var_t0;
    u8 temp_a2;

    temp_v1 = arg1 + &D_800C3510;
    temp_a2 = *temp_v1;
    var_v0 = 0;
    if ((s32) temp_a2 > 0) {
        var_t0 = (arg1 * 0x19) + &D_800C3518;
loop_2:
        var_v0 += 1;
        if (arg0 != *var_t0) {
            var_t0 += 1;
            if (var_v0 >= (s32) temp_a2) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        *(&D_800C3518 + ((arg1 * 0x19) + temp_a2)) = arg0;
        *temp_v1 = temp_a2 + 1;
    }
}

void func_150222E0(s32 arg0, s32 arg1) {
    s32 *sp24;
    s32 *temp_v0;
    void *temp_v1;

    if ((&D_800C35C8)[arg1][arg0] != 0) {
        temp_v1 = *(&D_800C35F0 + (arg1 * 4)) + (arg0 * 8);
        if ((*(s32 *)((char *)(temp_v1) + 0x0)) == 2) {
            temp_v0 = func_15083E90((*(s32 *)((char *)(temp_v1) + 0x2)));
            if (temp_v0 != NULL) {
                (*(s32 *)((char *)(temp_v0) + 0x6C)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x6D)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x6A)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x6B)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x282)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x27A)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x27C)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x27E)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x280)) = 0;
                sp24 = temp_v0;
                func_1507E7E4(temp_v0, 0, 3, 0xFFFF, 0xA);
                (*(s32 *)((char *)(sp24) + 0x71)) = 0;
            }
        }
    }
}

void func_15022398(s32 arg0, s32 arg1) {
    void *sp3C;
    s32 sp38;
    s32 sp34;
    s32 *sp2C;
    s32 *temp_a2;
    s32 temp_v0_2;
    u8 temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;

    temp_a2 = (arg1 * 4) + &D_800C35F0;
    if (((&D_800C35C8)[arg1][arg0] != 0) && (temp_v1 = *temp_a2 + (arg0 * 8), ((*(s32 *)((char *)(temp_v1) + 0x0)) == 2)) && (temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x2)), sp2C = temp_a2, sp34 = (s32) temp_v0, temp_v0_2 = func_15083E0C(temp_v0, temp_a2), (temp_v0_2 != -1))) {
        sp38 = temp_v0_2;
        sp2C = temp_a2;
        temp_v0_3 = func_1505EEF4(temp_v0_2);
        if (temp_v0_3 != NULL) {
            if ((*(s32 *)((char *)(temp_v0_3) + 0x5)) == 3) {
                if ((char *)(temp_a2) != (char *)(&D_800C35F0)) {
                    (*(s32 *)((char *)(temp_v0_3) + 0x5)) = 4U;
                } else {
                    (*(s32 *)((char *)(temp_v0_3) + 0x5)) = 0U;
                }
            }
            if (sp34 == 1) {
                (*(s32 *)((char *)(temp_v0_3) + 0xF4)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0xF4)) & ~0x2A);
            }
        } else if (sp38 < (s32) D_800D2100) {
            func_15082A44((sp38 * 0x30) + D_800D20FC, sp38, 0, arg1, 0);
            temp_v0_4 = func_1505EEF4(sp38);
            if (temp_v0_4 != NULL) {
                sp3C = temp_v0_4;
                func_1505E650(temp_v0_4, 0, 0, 0, 0.0f, 0.0f, 1);
                func_1502225C((s8) ((s32) ((char *)(sp3C) - (char *)(&gObjects)) / 812), arg1);
            }
        }
    }
}

void func_15022528(s32 arg0) {
    s32 *temp_v0_2;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_s4;
    void *temp_v0;

    temp_s4 = arg0 + &D_800C363A;
    var_s0 = 0;
    temp_s2 = arg0 * 4;
    if ((s32) *temp_s4 > 0) {
        var_s1 = 0;
        do {
            if (((*(u16 *)((*(temp_s2 + &D_800C35D0)) + var_s1)) != 0) && (*((&D_800C35C8)[arg0] + var_s1) != 0)) {
                temp_v0 = *(&D_800C35F0 + temp_s2) + (var_s0 * 8);
                if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 2) {
                    temp_v0_2 = func_15083E90((*(s32 *)((char *)(temp_v0) + 0x2)));
                    if (temp_v0_2 != NULL) {
                        func_1502178C(temp_v0_2, arg0, var_s0);
                    }
                }
            }
            var_s0 += 1;
            var_s1 += 2;
        } while (var_s0 < (s32) *temp_s4);
    }
}

void func_15022640( s32 arg0, s32 arg1) {
    s32 var_v0;
    u8 *temp_v1;
    u8 *var_t0;
    u8 temp_a2;

    temp_v1 = arg1 + &D_800C354A;
    temp_a2 = *temp_v1;
    var_v0 = 0;
    if ((s32) temp_a2 > 0) {
        var_t0 = (arg1 * 0x1E) + &D_800C3550;
loop_2:
        var_v0 += 1;
        if (arg0 != *var_t0) {
            var_t0 += 1;
            if (var_v0 >= (s32) temp_a2) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        *(&D_800C3550 + ((arg1 * 0x1E) + temp_a2)) = arg0;
        *temp_v1 = temp_a2 + 1;
    }
}

void func_150226BC(s32 arg0, s32 arg1) {
    void *sp1C;
    void *temp_v0;
    void *temp_v1;

    if ((&D_800C35C8)[arg1][arg0] != 0) {
        temp_v1 = *(&D_800C35F0 + (arg1 * 4)) + (arg0 * 8);
        if ((*(s32 *)((char *)(temp_v1) + 0x0)) == 3) {
            temp_v0 = func_151149AC((*(s32 *)((char *)(temp_v1) + 0x2)));
            if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x6E)) == 1)) {
                sp1C = temp_v0;
                func_15022640((*(s32 *)((char *)(temp_v0) + 0x72)), arg1);
                (*(s32 *)((char *)(sp1C) + 0x6E)) = 0;
            }
        }
    }
}

void func_15022754(s32 arg0) {
    s32 var_s0;
    u8 *temp_s1;

    temp_s1 = arg0 + &D_800C363A;
    var_s0 = 0;
    if ((s32) *temp_s1 > 0) {
        do {
            func_150226BC(var_s0, arg0);
            var_s0 += 1;
        } while (var_s0 < (s32) *temp_s1);
    }
}

void func_150227BC(s32 arg0) {
    s32 var_s0;
    u8 *temp_s2;
    u8 *var_s1;

    temp_s2 = arg0 + &D_800C354A;
    var_s0 = 0;
    if ((s32) *temp_s2 > 0) {
        var_s1 = (arg0 * 0x1E) + &D_800C3550;
        do {
            (*(s32 *)func_151149AC(*(s32 *)((char *)((*var_s1)) + 0x6E))) = 1;
            var_s0 += 1;
            var_s1 += 1;
        } while (var_s0 < (s32) *temp_s2);
    }
}

void func_15022848(s32 arg0) {
    s32 var_s0;
    u8 *temp_s2;

    if (*(&D_800C35EA + arg0) == 1) {
        D_800C3638 = 0;
        temp_s2 = arg0 + &D_800C363A;
        var_s0 = 0;
        if ((s32) *temp_s2 > 0) {
            do {
                func_15022398(var_s0, arg0);
                func_150222E0(var_s0, arg0);
                var_s0 += 1;
            } while (var_s0 < (s32) *temp_s2);
        }
        D_800C3638 = 1;
    }
}

void func_150228E4(s32 arg0) {
    s32 *temp_a0;
    s32 var_s1;
    u8 *temp_s4;
    u8 *var_s0;

    temp_s4 = arg0 + &D_800C3510;
    var_s1 = 0;
    if ((s32) *temp_s4 > 0) {
        var_s0 = (arg0 * 0x19) + &D_800C3518;
        do {
            temp_a0 = &gObjects + (*var_s0 * 0x32C);
            if (*temp_a0 != 0) {
                func_15060F28(temp_a0, 0);
            }
            var_s1 += 1;
            var_s0 += 1;
        } while (var_s1 < (s32) *temp_s4);
    }
}

void func_15022998(s32 *arg0) {
    void * (*temp_v1)();
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0x1B) {
        if (temp_v0 == 4) {
            goto block_4;
        }
        return;
    }
block_4:
    temp_v1 = *(void * (**)())((char *)(&D_80086014) + (temp_v0 * 4));
    if (temp_v1 != NULL) {
        temp_v1();
    }
}

s32 func_150229E4(s32 *arg0) {
    s32 var_a0;
    s32 var_v0;
    u16 *var_t0;
    u8 temp_a1;
    u8 temp_a3;
    u8 var_a2;
    void *temp_v0;

    var_v0 = 0;
    if (arg0 == NULL) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 0) {
        return 0;
    }
    if (D_800C35C8 == NULL) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x5)) == 4) {
        var_v0 = 1;
    }
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x65));
    if (temp_a1 != 0) {
        var_a2 = *(&D_800CBFDF + (temp_a1 * 0x32C));
    } else {
        var_a2 = (*(s32 *)((char *)(arg0) + 0x3B));
    }
    temp_a3 = *(&D_800C363A + var_v0);
    var_a0 = 0;
    if ((s32) temp_a3 > 0) {
        var_t0 = (&D_800C35C8)[var_v0];
loop_13:
        if (*var_t0 != 0) {
            temp_v0 = *(&D_800C35F0 + (var_v0 * 4)) + (var_a0 * 8);
            if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 2) && (var_a2 == (*(s32 *)((char *)(temp_v0) + 0x2)))) {
                if (temp_a1 == 0) {
                    return 1;
                }
                return 2;
            }
        }
        var_a0 += 1;
        var_t0 += 2;
        if (var_a0 >= (s32) temp_a3) {
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_13;
    }
    return 0;
}

s32 func_15022B08(s32 arg0, s32 arg1) {
    s32 var_v0;
    u16 *var_a2;
    u8 temp_v1;

    temp_v1 = *(&D_800C363A + arg1);
    var_v0 = 0;
    if ((s32) temp_v1 > 0) {
        var_a2 = (&D_800C35C8)[arg1];
loop_2:
        if ((*var_a2 != 0) && ((*(s32 *)((char *)((*(&D_800C35F0 + (arg1 * 4)) + (var_v0 * 8))) + 0x2)) == (*(s32 *)((char *)((D_800DBEF4 + (arg0 * 0xA0))) + 0x72)))) {
            return 1;
        }
        var_v0 += 1;
        var_a2 += 2;
        if (var_v0 >= (s32) temp_v1) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}

void func_15022BA4(s32 arg0) {
    s32 spB4;
    s32 spB0;
    f32 spA4;
    f32 sp80;
    f32 sp64;
    s32 sp58;
    s32 sp54;
    u16 **sp50;
    void *sp4C;
    f32 sp48;
    s32 *sp44;
    s32 sp40;                                       /* compiler-managed */
    s32 *sp3C;
    f32 *temp_v0_10;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f14;
    f32 var_f22;
    f32 var_f24;
    s16 *temp_v0_7;
    s16 temp_t6;
    s32 *temp_a1_2;
    s32 *temp_a1_3;
    s32 *temp_t2;
    s32 *temp_v0_4;
    s32 *temp_v1;
    s32 temp_ra;
    s32 temp_t0;
    s32 temp_t7;
    s32 temp_v1_3;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a3;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 **temp_t1;
    u16 *var_a0;
    u16 *var_a2;
    u16 *var_v0;
    u16 temp_v0;
    u16 temp_v1_2;
    u16 var_v1_4;
    u8 *temp_s1;
    u8 temp_a1;
    u8 temp_t6_2;
    u8 temp_v0_3;
    void **var_v1;
    void *temp_t5;
    void *temp_t6_3;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_t5;

    temp_s1 = arg0 + &D_800C363A;
    temp_a1 = *temp_s1;
    var_t4 = 0;
    temp_ra = arg0 * 4;
    if ((s32) temp_a1 > 0) {
        temp_t1 = &(&D_800C35C8)[arg0];
        var_a0 = *temp_t1;
        var_a3 = 0;
loop_2:
        temp_v1 = &D_800C35F0 + temp_ra;
        if (*var_a0 != 0) {
            temp_t0 = var_t4 * 8;
            var_a2 = *temp_v1 + temp_t0;
            temp_v0 = *var_a2;
            if (temp_v0 == 6) {
                if (D_800C3663 == 0) {
                    temp_v0_2 = *(&D_800C3868 + ((arg0 * 0x78) + (var_t4 * 4)));
                    spB4 = var_t4;
                    sp50 = temp_t1;
                    sp40 = temp_t0;
                    sp44 = temp_v1;
                    func_15022190((*(s32 *)((char *)(temp_v0_2) + 0x0)), (*(s32 *)((char *)(temp_v0_2) + 0x2)), (*(s32 *)((char *)(temp_v0_2) + 0x4)), 0.0f);
                    var_a2 = *temp_v1 + temp_t0;
                }
                temp_v0_3 = (*(s32 *)((char *)(var_a2) + 0x2));
                if (temp_v0_3 == 0) {
                    spB4 = var_t4;
                    sp50 = temp_t1;
                    temp_v0_4 = func_15083E90((*(s32 *)((char *)(var_a2) + 0x3)));
                    if (temp_v0_4 != NULL) {
                        var_f22 = (*(s32 *)((char *)(temp_v0_4) + 0x14));
                        var_f14 = (*(s32 *)((char *)(temp_v0_4) + 0x18));
                        var_f24 = (*(s32 *)((char *)(temp_v0_4) + 0x1C));
                        var_t5 = (arg0 * 0x78) + &D_800C3868;
                        var_v1 = (char *)(var_t5) + (var_t4 * 4);
                        goto block_12;
                    }
                } else if ((temp_v0_3 == 1) && (spB4 = var_t4, sp50 = temp_t1, temp_v0_5 = func_151149AC((s8) (*(s8 *)((char *)(var_a2) + 0x3)) & 0xFF), (temp_v0_5 != NULL))) {
                    var_f22 = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x10));
                    var_f14 = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x12));
                    var_f24 = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x14));
                    var_t5 = (arg0 * 0x78) + &D_800C3868;
                    var_v1 = (char *)(var_t5) + (var_t4 * 4);
block_12:
                    temp_v0_6 = *var_v1;
                    var_t0 = 0;
                    var_a2_2 = 0;
                    if ((s32) *temp_s1 > 0) {
                        var_v0 = *temp_t1;
                        do {
                            var_a0_2 = 0;
                            var_v1_2 = 0;
                            if ((s32) *var_v0 > 0) {
                                temp_a1_2 = (char *)(var_t5) + (var_t0 * 4);
                                do {
                                    var_a0_2 += 1;
                                    temp_v0_7 = *temp_a1_2 + var_v1_2;
                                    *temp_v0_7 = (s16) (s32) ((f32) *temp_v0_7 + (var_f22 - (f32) (*(s16 *)((char *)(temp_v0_6) + 0x0))));
                                    temp_v0_8 = *temp_a1_2 + var_v1_2;
                                    (*(s16 *)((char *)(temp_v0_8) + 0x2)) = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0_8) + 0x2)) + (var_f14 - (f32) (*(s16 *)((char *)(temp_v0_6) + 0x2))));
                                    temp_v0_9 = *temp_a1_2 + var_v1_2;
                                    temp_t6 = (*(s32 *)((char *)(temp_v0_9) + 0x4));
                                    var_v1_2 += 8;
                                    (*(s16 *)((char *)(temp_v0_9) + 0x4)) = (s16) (s32) ((f32) temp_t6 + (var_f24 - (f32) (*(s16 *)((char *)(temp_v0_6) + 0x4))));
                                    var_v0 = *temp_t1 + var_a2_2;
                                } while (var_a0_2 < (s32) *var_v0);
                            }
                            var_t0 += 1;
                            var_a2_2 += 2;
                            var_v0 += 2;
                        } while (var_t0 < (s32) *temp_s1);
                    }
                }
            } else if (temp_v0 == 7) {
                temp_t2 = temp_ra + &D_800C35D0;
                var_f0 = 0.0f;
                temp_v1_2 = (*(s32 *)((char *)(*temp_t2) + var_a3));
                var_t0_2 = 0;
                if ((s32) temp_v1_2 > 0) {
loop_23:
                    temp_v0_10 = *(&D_800C3778 + ((arg0 * 0x78) + (var_t4 * 4))) + (var_t0_2 * 8);
                    temp_t6_2 = (*(s32 *)((char *)(temp_v0_10) + 0x5));
                    var_t0_2 += 1;
                    if (temp_t6_2 == 7) {
                        var_f0 = (*(s32 *)((char *)(temp_v0_10) + 0x0));
                    } else if (var_t0_2 < (s32) temp_v1_2) {
                        goto loop_23;
                    }
                    var_t0_2 = 0;
                }
                temp_v1_3 = var_t4 * 4;
                if (D_800C3663 == 0) {
                    temp_v0_11 = *(&D_800C3868 + ((arg0 * 0x78) + temp_v1_3));
                    sp54 = temp_ra;
                    sp64 = var_f0;
                    sp40 = temp_t2;
                    sp50 = temp_t1;
                    spB0 = 0;
                    sp58 = temp_v1_3;
                    func_15022190((*(s32 *)((char *)(temp_v0_11) + 0x0)), (*(s32 *)((char *)(temp_v0_11) + 0x2)), (*(s32 *)((char *)(temp_v0_11) + 0x4)), var_f0);
                    var_t0_2 = 0;
                }
                temp_f20 = D_800C3594 - var_f0;
                temp_t5 = (arg0 * 0x78) + &D_800C3868;
                D_800C35A4 = temp_f20;
                temp_v0_12 = *((char *)(temp_t5) + temp_v1_3);
                temp_f12 = temp_f20 * D_80096A18;
                sp54 = temp_ra;
                sp4C = temp_t5;
                sp40 = temp_t2;
                temp_f14 = (f32) (*(f32 *)((char *)(temp_v0_12) + 0x2));
                sp48 = temp_f12;
                sp50 = temp_t1;
                spB0 = var_t0_2;
                temp_f22 = (f32) (*(f32 *)((char *)(temp_v0_12) + 0x0));
                spA4 = temp_f14;
                temp_f24 = (f32) (*(f32 *)((char *)(temp_v0_12) + 0x4));
                sp80 = cosf(temp_f12);
                temp_f0 = sinf(temp_f12);
                var_t0_3 = var_t0_2;
                if ((s32) *temp_s1 > 0) {
                    sp3C = temp_ra + &D_800C35D8;
                    var_a2_3 = 0;
                    do {
                        temp_a1_3 = (char *)(temp_t5) + (var_t0_3 * 4);
                        var_a0_3 = 0;
                        var_t4_2 = 0;
                        var_v1_3 = 0;
                        if ((s32) (*(s32 *)((char *)(*temp_t1) + var_a2_3)) > 0) {
                            do {
                                var_a0_3 += 1;
                                temp_v0_13 = *temp_a1_3 + var_v1_3;
                                temp_f2 = (f32) (*(f32 *)((char *)(temp_v0_13) + 0x0)) - temp_f22;
                                temp_f12_2 = (f32) (*(f32 *)((char *)(temp_v0_13) + 0x4)) - temp_f24;
                                (*(s16 *)((char *)(temp_v0_13) + 0x0)) = (s16) (s32) ((f32) (*(s16 *)((char *)&(D_800C358C) + 0x0)) + ((temp_f2 * sp80) + (temp_f12_2 * temp_f0)));
                                temp_v0_14 = *temp_a1_3 + var_v1_3;
                                (*(s16 *)((char *)(temp_v0_14) + 0x2)) = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0_14) + 0x2)) + ((f32) (*(s16 *)((char *)&(D_800C358C) + 0x2)) - temp_f14));
                                temp_t6_3 = *temp_a1_3 + var_v1_3;
                                var_v1_3 += 8;
                                (*(s16 *)((char *)(temp_t6_3) + 0x4)) = (s16) (s32) ((f32) (*(s16 *)((char *)&(D_800C358C) + 0x4)) + ((-temp_f2 * temp_f0) + (temp_f12_2 * sp80)));
                            } while (var_a0_3 < (s32) (*(s32 *)((char *)(*temp_t1) + var_a2_3)));
                        }
                        if (((*(s32 *)((char *)(*sp3C) + var_a2_3)) != 0) && ((*(s32 *)((char *)((*(&D_800C3688 + (arg0 * 0x78) + (var_t0_3 * 4)))) + 0x20)) == 7)) {
                            var_t4_2 = 1;
                        }
                        if (var_t4_2 == 0) {
                            var_v1_4 = (*(s32 *)((char *)(*temp_t2) + var_a2_3));
                            var_a0_4 = 0;
                            if ((s32) var_v1_4 > 0) {
                                do {
                                    temp_t7 = var_a0_4 * 8;
                                    var_a0_4 += 1;
                                    temp_v0_15 = *(&D_800C3778 + ((arg0 * 0x78) + (var_t0_3 * 4))) + temp_t7;
                                    if ((*(s32 *)((char *)(temp_v0_15) + 0x5)) == 7) {
                                        (*(f32 *)((char *)(temp_v0_15) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v0_15) + 0x0)) + temp_f20);
                                        var_v1_4 = (*(s32 *)((char *)(*temp_t2) + var_a2_3));
                                    }
                                } while (var_a0_4 < (s32) var_v1_4);
                            }
                        }
                        var_t0_3 += 1;
                        var_a2_3 += 2;
                    } while (var_t0_3 < (s32) *temp_s1);
                }
            } else {
                goto block_44;
            }
        } else {
block_44:
            var_t4 += 1;
            var_a3 += 2;
            var_a0 += 2;
            if (var_t4 >= (s32) temp_a1) {

            } else {
                goto loop_2;
            }
        }
    }
}

u8 func_15023264(s32 arg0, s32 arg1) {
    void *sp6C;
    s16 temp_v0_2;
    s16 var_s0_2;
    s16 var_s2;
    s16 var_s6;
    s32 *var_s1;
    s32 temp_at;
    s32 temp_v0;
    s32 var_s0;
    u16 *var_v0;
    u8 *temp_s3;

    temp_s3 = arg0 + &D_800C363A;
    var_s6 = -1;
    var_s2 = 0x1869F;
    var_s0 = 0;
    if ((s32) *temp_s3 > 0) {
        var_s1 = (arg0 * 0x78) + &D_800C3688;
        do {
            temp_v0 = *var_s1;
            if (temp_v0 != 0) {
                sp6C = NULL;
                temp_v0_2 = func_15023BB0(temp_v0 + 0x18, 3, var_s0, &sp6C, 0, 0, 0, 0, 0, 0, arg0);
                temp_at = temp_v0_2 < var_s2;
                if ((sp6C != NULL) && (temp_at != 0)) {
                    var_s2 = temp_v0_2;
                    var_s6 = (*(s32 *)((char *)(sp6C) + 0x2));
                }
            }
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < (s32) *temp_s3);
    }
    if (var_s6 == -1) {
        var_s6 = 0;
        var_s0_2 = 0;
        if ((s32) *temp_s3 > 0) {
            var_v0 = *(&D_800C35F0 + (arg0 * 4));
loop_10:
            if (*var_v0 == 1) {
                var_s6 = var_s0_2;
            } else {
                var_s0_2 += 1;
                var_v0 += 8;
                if (var_s0_2 < (s32) *temp_s3) {
                    goto loop_10;
                }
            }
        }
    }
    return (u8) var_s6;
}

void func_150233BC(void) {
    bzero(&D_800C3CA0, 0xA8);
}

void func_150233E4(void) {
    u16 **var_s0;

    var_s0 = &D_800C3CA0;
    do {
        if ((*(s32 *)((char *)(var_s0) + 0x0)) != 0) {
            func_1516D2E0((*(s32 *)((char *)(var_s0) + 0x34)));
            (*(s32 *)((char *)(var_s0) + 0x34)) = 0;
            (*(s32 *)((char *)(var_s0) + 0x0)) = 0;
        }
        var_s0 += 0x38;
    } while ((char *)(var_s0) != (char *)(&D_800C3D48));
}

void func_15023440(s16 *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_1516D2E0((*(s32 *)((char *)(arg0) + 0x34)), arg0);
        goto block_4;
    }
    if ((*(s32 *)((char *)(arg0) + 0xC)) != 0) {
        func_1516D328((*(s32 *)((char *)(arg0) + 0x34)), arg0);
    } else {
block_4:
        (*(s32 *)((char *)(arg0) + 0x34)) = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0;
}

s16 *func_150234A4(s32 arg0, s32 arg1) {
    s16 *sp20;                                      /* compiler-managed */
    u16 **sp1C;
    s16 *sp18;                                      /* compiler-managed */
    s16 temp_v0;
    s32 var_a3;
    u16 **var_a2;
    u16 **var_t0;
    u16 **var_t1;

    var_a3 = arg0 + 1;
    var_t1 = NULL;
    var_t0 = NULL;
    var_a2 = &D_800C3CA0;
loop_1:
    temp_v0 = (*(s32 *)((char *)(var_a2) + 0x0));
    if (var_a3 == temp_v0) {
        if ((arg1 != 0) && ((*(s32 *)((char *)(var_a2) + 0xC)) != 0)) {
            sp18 = (s16 *) var_a2;
            arg0 = var_a3;
            sp1C = &D_800C3CA0;
            sp20 = NULL;
            func_15023440((s16 *) &D_800C3CA0, 1);
            var_a3 = arg0;
            var_t0 = sp1C;
            var_t1 = NULL;
        } else {
            var_t1 = var_a2;
        }
    } else if (temp_v0 == 0) {
        var_t0 = var_a2;
        if ((arg1 != 0) && ((*(s32 *)((char *)(var_a2) + 0xC)) != 0)) {
            sp18 = var_a2;
            arg0 = var_a3;
            sp1C = var_t0;
            sp20 = NULL;
            func_15023440((s16 *) var_a2, 1);
            var_a3 = arg0;
            var_t1 = NULL;
        }
    } else {
        var_a2 += 0x38;
        if ((char *)(var_a2) != (char *)(&D_800C3D48)) {
            goto loop_1;
        }
    }
    if ((char *)(var_a2) == (char *)(&D_800C3D48)) {
        sp1C = &D_800C3CA0;
        arg0 = var_a3;
        sp20 = var_t1;
        func_15023440((s16 *) &D_800C3CA0, 1);
        var_a3 = arg0;
        var_t0 = sp1C;
    }
    if (var_t1 != NULL) {
        return (s16 *) var_t1;
    }
    if (var_t0 != NULL) {
        *var_t0 = (s16) var_a3;
    }
    return (s16 *) var_t0;
}

void func_150235DC(s32 arg0) {
    s32 *sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 *temp_v0;
    s8 temp_v0_2;
    void *temp_a0;

    gObjects[0].unk25C = (s32) (gObjects[0].unk25C & ~0x200);
    if (D_800C35AA == 0) {
        temp_v0 = func_15083E90(1U, &gObjects);
        if (temp_v0 != NULL) {
            gCurrentObjectIndex = (s8) ((s32) ((char *)(temp_v0) - (char *)(&gObjects)) / 812);
            temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x31C));
            (*(s32 *)((char *)(temp_v0) + 0x3C)) = 0.0f;
            if (temp_a0 != NULL) {
                (*(s32 *)((char *)(temp_a0) + 0x0)) = 0.0f;
            }
            (*(s32 *)((char *)(temp_v0) + 0x54)) = 0.0f;
            (*(s32 *)((char *)(temp_v0) + 0xCC)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0xD0)) = 0;
            temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x118));
            if ((D_80096A1C != temp_f0) && ((*(s32 *)((char *)(temp_v0) + 0x18)) < temp_f0)) {
                (*(s32 *)((char *)(temp_v0) + 0xAD)) = 1;
                (*(s32 *)((char *)(temp_v0) + 0x20)) = 0.0f;
                (*(s32 *)((char *)(temp_v0) + 0x24)) = 0.0f;
                if (((temp_f0 - 50.0f) < (f32) (*(f32 *)((char *)(temp_v0) + 0x1A6))) || ((*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x20)) & 1)) {
                    (*(s32 *)((char *)(temp_v0) + 0xB2)) = 0;
                    sp1C = temp_v0;
                    func_1508F060(temp_a0, &gObjects);
                }
            } else {
                temp_f0_2 = (*(s32 *)((char *)(temp_v0) + 0x180));
                (*(s32 *)((char *)(temp_v0) + 0xAD)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0xB2)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x20)) = -4.0f;
                (*(s32 *)((char *)(temp_v0) + 0x18)) = temp_f0_2;
                (*(s32 *)((char *)(temp_v0) + 0x1CC)) = temp_f0_2;
                (*(s32 *)((char *)(temp_v0) + 0x24)) = 5.0f;
            }
            (*(s32 *)((char *)(temp_v0) + 0x81)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x83)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x89)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x8A)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x104)) = 0;
            (*(f32 *)((char *)(temp_v0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) - (*(f32 *)((char *)(temp_v0) + 0x180)));
            gCurrentObject = temp_v0;
            sp1C = temp_v0;
            func_1507F640();
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x23)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x287)) = 0;
            temp_v0_2 = (*(s32 *)((char *)(temp_v0) + 0x287));
            (*(s32 *)((char *)(temp_v0) + 0x276)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x282)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x278)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x286)) = temp_v0_2;
            (*(s32 *)((char *)(temp_v0) + 0x285)) = temp_v0_2;
            (*(s32 *)((char *)(temp_v0) + 0x284)) = temp_v0_2;
        }
    }
}

void func_1502378C(void) {
    s32 *var_s0;
    s8 var_s1;

    var_s0 = &gObjects;
    var_s1 = 0;
    if (D_800C3654 != 0) {
        func_1504A730();
        return;
    }
    do {
        if ((*(s32 *)((char *)(var_s0) + 0x0)) != 0) {
            gCurrentObjectIndex = var_s1;
            func_15022998(var_s0);
            func_1507E73C(var_s0);
            if (func_150229E4(var_s0) != 0) {
                func_1502178C(var_s0, 0, -1);
                func_150627D4(var_s0);
                func_1507FEA0(var_s0);
                (*(s32 *)((char *)(var_s0) + 0x2FF)) = 1;
            }
        }
        var_s1 += 1;
        var_s0 += 0x32C;
    } while (var_s1 != 0x19);
    func_15061B4C();
}
