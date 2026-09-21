/**
 * Auto-decompiled from asm/20AE20.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 *allocate_memory();                  /* extern */
void * func_10004074();                              /* extern */
void * func_1000D96C();                        /* extern */
void * func_1000DE1C();                             /* extern */
void * func_1000E934();                                  /* extern */
void * func_1000F1A8();                                  /* extern */
s32 func_1000F568();                        /* extern */
void * func_10010558();       /* extern */
void * func_1501C730();               /* extern */
void * func_1501D348();                /* extern */
u8 *func_1502B5C8();            /* extern */
void * func_15042D94();   /* extern */
void * func_15042E3C();                    /* extern */
f32 func_150497E0(f32, f32 (*)[], s32, f32, f32 *); /* extern */
s32 func_1507BB28();                           /* extern */
s32 func_15082A44();          /* extern */
void * func_15083384();                       /* extern */
void * func_15086CBC(s8, f32 (*)[], f32 *, f32 *);       /* extern */
s8 func_15086D48();                              /* extern */
void * func_150916B4();                    /* extern */
s32 func_1509CA30();                             /* extern */
u8 func_1509CA50();                              /* extern */
void * func_1509CC94();                               /* extern */
void * func_1509CDDC();                               /* extern */
s32 func_1509CF28();                       /* extern */
void * func_1509D054();                                  /* extern */
s32 func_1509D08C();           /* extern */
u32 random_u32();                              /* extern */
void *func_151149AC();                            /* extern */
s32 func_1517EFDC();                               /* extern */
s32 func_151F2CDC();                                /* extern */
void * func_151F2D6C();                              /* extern */
void func_151DE85C();                               /* static */
void * func_151E22BC();                                  /* static */
void * func_151E2404();                              /* static */
s8 func_151E24F0();         /* static */
void func_151E2834();
void func_151E30C4(); /* static */
void func_151E327C(); /* static */
void * func_151E3344();               /* static */
void func_151E4314(); /* static */
void func_151E43DC();                               /* static */
void func_151E4E00(); /* static */
void func_151E530C();                              /* static */
void func_151E557C();                               /* static */
void func_151E55A8();                               /* static */
void func_151E6964();                       /* static */
void func_151E6BFC();                            /* static */
void func_151E7E9C();                               /* static */
void func_151E7EF8();                      /* static */
void func_151E7F60();       /* static */
extern s32 D_800388E0;
extern s32 D_80084060;
extern s8 D_80087268;
extern s8 D_8008FD70;
extern u8 D_8008FD74;
extern s32 D_8008FD78;
extern s8 D_8008FD7C;
extern u8 D_8008FD80;
extern s8 D_8008FD84;
extern s8 D_8008FD88;
extern s8 D_8008FD98;
extern s8 D_8008FD9C;
extern s8 D_8008FDA0;
extern s8 D_8008FDA4;
extern s16 D_8008FDAC;
extern s8 D_8008FDB0;
extern u8 D_8008FDB4;
extern u8 D_8008FDB8;
extern s16 D_8008FDC0;
extern s8 D_8008FDC4;
extern s8 D_8008FDC8;
extern s16 D_8008FDCC;
extern u8 D_8008FDCD;
extern f32 D_8008FDD0;
extern f32 *gGameState;
extern u8 *D_8008FDD8;
extern s8 D_8008FDDC;
extern s8 D_8008FDE0;
extern f32 D_8008FDE8;
extern s32 D_8008FDEC;
extern s8 D_8008FE28;
extern s8 D_8008FE2C;
extern s8 D_8008FE30;
extern u8 D_8008FE34;
extern s8 D_8008FE40;
extern s8 D_8008FE44;
extern s8 D_8008FE48;
extern s8 D_8008FE54;
extern s8 D_8008FE55;
extern s8 D_8008FE56;
extern s32 D_8008FE57;
extern s32 D_8008FE6B;
extern s8 D_8008FE6C;
extern s8 D_8008FE6D;
extern s8 D_8008FE6E;
extern s32 D_8008FE6F;
extern s8 D_8008FE84;
extern s8 D_8008FE85;
extern s8 D_8008FE86;
extern s32 D_8008FE9B;
extern s8 D_8008FE9C;
extern s32 D_8008FEA4;
extern s32 D_8008FEC4;
extern s32 D_8008FEE3;
extern s8 D_8008FEEC;
extern s8 D_8008FEF0;
extern s8 D_8008FEF4;
extern s8 D_8008FEF8;
extern s8 D_8008FF00;
extern s8 D_8008FF04;
extern s32 D_8008FF08;
extern s8 D_8008FF24;
extern s8 D_8008FF28;
extern s8 D_8008FF2C;
extern u8 D_8008FF30;
extern s32 D_8008FF34;
extern s32 D_8008FF37;
extern s8 D_8008FF3C;
extern s32 D_8008FF40;
extern f32 D_8008FF48;
extern s32 D_8008FF60;
extern s32 D_8008FF78;
extern s32 D_8008FF80;
extern s32 D_8008FF88;
extern f32 D_8008FF90;
extern s32 D_8008FFB0;
extern s32 D_8008FFBC;
extern s32 D_800AB570;
extern s32 D_800AB57C;
extern s32 D_800AB62C;
extern s32 D_800AB68C;
extern s32 D_800AB690;
extern s32 D_800AB691;
extern s32 D_800AB692;
extern s32 D_800AB693;
extern s32 D_800AB694;
extern s32 D_800AB710;
extern s32 D_800AB74C;
extern s32 D_800AB754;
extern s32 D_800AB77C;
extern s32 D_800AB790;
extern s32 D_800AB7A4;
extern s32 D_800AB7BC;
extern s32 D_800AB7D4;
extern s32 D_800AB7DC;
extern s32 D_800AB7E0;
extern s32 D_800AB7E4;
extern s32 D_800AB7E8;
extern s32 D_800AB7EC;
extern s32 D_800AB7F0;
extern s32 D_800AB7F4;
extern s32 D_800AB7F8;
extern s32 D_800AB7FC;
extern s32 D_800AB800;
extern s8 D_800AB804;
extern s32 D_800AB810;
extern s32 D_800AB814;
extern s32 D_800AB818;
extern s32 D_800AB828;
extern s32 D_800AB82C;
extern s32 D_800AB830;
extern s32 D_800AB834;
extern s32 D_800AB838;
extern s32 D_800AB83C;
extern s32 D_800AB840;
extern s32 D_800AB844;
extern s32 D_800AB848;
extern s32 D_800AB84C;
extern s32 D_800AB850;
extern s32 D_800AB854;
extern s32 D_800AB858;
extern s32 D_800AB85C;
extern s32 D_800AB860;
extern s32 D_800AB864;
extern s32 D_800AB868;
extern s32 D_800AB86C;
extern s32 D_800AB870;
extern s32 D_800AB874;
extern s32 D_800AB878;
extern s32 D_800AB87C;
extern s32 D_800AB880;
extern s32 D_800AB884;
extern s32 D_800AB88C;
extern s32 D_800AB890;
extern s32 D_800AB894;
extern s32 D_800AB898;
extern s32 D_800AB8CC;
extern s32 D_800AB8D0;
extern s32 D_800AB8D4;
extern s32 D_800AB8E0;
extern s32 D_800AB8E4;
extern s32 D_800AB8E8;
extern s32 D_800AB8EC;
extern s32 D_800AB8F0;
extern s32 D_800AB8F4;
extern s32 D_800AB8F8;
extern s32 D_800AB8FC;
extern s32 D_800AB900;
extern s32 D_800AB904;
extern s32 D_800AB908;
extern s32 D_800AB920;
extern s32 D_800AB940;
extern f32 D_800AB990;
extern f32 D_800ABA2C;
extern f32 D_800ABA30;
extern f32 D_800ABA34;
extern f32 D_800ABA64;
extern f32 D_800ABA68;
extern f32 D_800ABA6C;
extern f32 D_800ABA70;
extern f32 D_800ABA74;
extern f32 D_800ABA78;
extern f32 D_800ABA7C;
extern f32 D_800ABA80;
extern f32 D_800ABA84;
extern f32 D_800ABA88;
extern f32 D_800ABA8C;
extern s32 D_800BE3E4;
extern u8 D_800BE740;
extern s32 D_800BE918;
extern s8 D_800BE91A;
extern s8 D_800BE91B;
extern u16 D_800BE930;
extern s8 D_800BEAC3;
extern u8 D_800C35E8;
extern u8 D_800C3C8C;
extern s8 D_800D2130;
extern s32 D_800D2350;
extern s8 D_800D23A8;
extern s8 D_800D2E40;
extern s32 D_800D2E48;
extern s16 D_800E0A80;
extern s8 D_800E0A85;
extern s8 D_800E0A86;
extern void (*D_800E0A88)(s32, s8 *, f32 *, s8);
extern u8 D_800E0A8C;
extern s32 D_800E0A90;
extern u8 D_800E0A94;
extern u8 D_800E0A95;
extern s8 D_800E0A96;
extern u8 D_800E0A97;
extern s8 D_800E0A98;
extern s8 D_800E0A99;
extern s32 D_800E0AA0;
extern u8 D_800E0AA8;
extern s8 D_800E0AA9;
extern s8 D_800E0AAA;
extern s32 D_800E0AB0;
extern s8 D_800E0AC0;
extern s8 D_800E0AC1;
extern s8 D_800E0AC2;
extern s8 D_800E0AC3;
extern s32 D_800E0AC4;
extern u8 D_800E0AD0;
extern f32 D_800E0AF0;
extern u8 *D_800E0B88;
extern u8 D_800E0B8C;
extern s8 D_800E0B90;
extern u8 D_800E0B95;
extern u8 D_800E0B96;
extern u8 D_800E0B97;
extern u8 D_800E0B98;
extern s8 D_800E0B99;
extern u16 D_800E0B9A;
extern void *D_800E0BA0;
extern s32 D_800E0BA4;
extern s32 D_800E0BA8;
extern s8 D_800E0BB0;
extern s8 D_800E0BB1;
extern u8 D_800E0BB8;
extern f32 D_800E0BC8;
extern s32 D_800E0BCE;
extern s8 D_800E0BD0;
extern u8 D_800E0BD1;
extern s8 D_800E0BD3;
extern u8 *D_800E0BD4;
extern u8 *D_800E0BD8;
extern s8 D_800E0BDC;
extern s8 D_800E0BE0;
extern s8 D_800E0BE1;
extern s8 D_800E0BE2;
extern s8 D_800E0BE3;
extern s8 D_800E0BE9;
extern s8 D_800E0BEA;
extern s8 D_800E0BEB;
extern s8 D_800E0BEE;
extern void *D_800E0C00;
extern s32 D_800E0C10;
extern s32 D_800E0C18;
extern s32 D_local_osSpTaskLoad_20AE20;
void func_151E4BD8();

void func_151DD970(void) {
    void * *var_a0;
    s8 *var_v1;
    s8 temp_t0;
    s8 temp_t1;
    s8 temp_t2;
    s8 temp_t9;

    var_a0 = &D_8008FE57;
    var_v1 = &D_800E0BE3;
    D_800E0BE2 = D_8008FE56;
    D_800E0BE2 = D_8008FE55;
    D_800E0BE2 = D_8008FE54;
    do {
        temp_t0 = (*(s32 *)((char *)(var_a0) + 0x1));
        temp_t1 = (*(s32 *)((char *)(var_a0) + 0x2));
        temp_t2 = (*(s32 *)((char *)(var_a0) + 0x3));
        temp_t9 = (*(s32 *)((char *)(var_a0) + 0x0));
        var_a0 = (char *)(var_a0) + 4;
        var_v1 += 4;
        (*(s32 *)((char *)(var_v1) - 0x3)) = temp_t0;
        (*(s32 *)((char *)(var_v1) - 0x2)) = temp_t1;
        (*(s32 *)((char *)(var_v1) - 0x1)) = temp_t2;
        (*(s32 *)((char *)(var_v1) - 0x4)) = temp_t9;
    } while ((char *)(var_a0) != (char *)(&D_8008FE6B));
}

void func_151DD9E4(void) {
    void * *var_a1;
    s32 var_v0;
    s8 *temp_t1;
    s8 *temp_t3;
    s8 *var_v1;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a0_4;
    s8 temp_t9;

    if ((D_800E0BE0 < D_8008FE6C) || (D_8008FE84 < D_800E0BE0)) {
        D_800E0BE0 = D_8008FE54;
    }
    var_a1 = &D_8008FE6F;
    var_v1 = &D_800E0BE3;
    if ((D_800E0BE1 < D_8008FE6D) || (D_8008FE85 < D_800E0BE1)) {
        D_800E0BE1 = D_8008FE55;
    }
    if ((D_800E0BE2 < D_8008FE6E) || (D_8008FE86 < D_800E0BE2)) {
        D_800E0BE2 = D_8008FE56;
    }
    var_v0 = 3;
    do {
        temp_a0 = (*(s32 *)((char *)(var_v1) + 0x0));
        if ((temp_a0 < (*(s32 *)((char *)(var_a1) + 0x0))) || ((&D_8008FE84)[var_v0] < temp_a0)) {
            (*(s32 *)((char *)(var_v1) + 0x0)) = (&D_8008FE54)[var_v0];
        }
        temp_a0_2 = (*(s32 *)((char *)(var_v1) + 0x1));
        if ((temp_a0_2 < (*(s32 *)((char *)(var_a1) + 0x1))) || ((&D_8008FE84)[var_v0 + 1] < temp_a0_2)) {
            (*(s8 *)((char *)(var_v1) + 0x1)) = (s8) (&D_8008FE54)[var_v0 + 1];
        }
        temp_a0_3 = (*(s32 *)((char *)(var_v1) + 0x2));
        temp_t1 = &(&D_8008FE84)[var_v0];
        temp_t3 = &(&D_8008FE54)[var_v0];
        if ((temp_a0_3 < (*(s32 *)((char *)(var_a1) + 0x2))) || ((&D_8008FE84)[var_v0 + 2] < temp_a0_3)) {
            (*(s8 *)((char *)(var_v1) + 0x2)) = (s8) (&D_8008FE54)[var_v0 + 2];
        }
        temp_a0_4 = (*(s32 *)((char *)(var_v1) + 0x3));
        temp_t9 = (*(s32 *)((char *)(var_a1) + 0x3));
        var_v0 += 4;
        var_a1 = (char *)(var_a1) + 4;
        if ((temp_a0_4 < temp_t9) || ((*(s32 *)((char *)(temp_t1) + 0x3)) < temp_a0_4)) {
            (*(s8 *)((char *)(var_v1) + 0x3)) = (s8) (*(s8 *)((char *)(temp_t3) + 0x3));
        }
        var_v1 += 4;
    } while (var_v0 != 0x17);
}

s32 func_151DDB94(s32 arg0) {
    return ~arg0;
}

void func_151DDBA0(void) {
    D_800D2E40 = 0;
    func_1501C730(6, 0x1D, 0U, 0, 1);
    D_800E0B94 = 3;
    D_8008FDA4 = 0;
    D_800BEAC1 = 0;
    func_151E557C();
    func_1000F1A8();
    func_1000E934();
    D_8008FD8C = 1;
    D_8008FD90 = 1;
}

void func_151DDC20(void) {
    u8 sp95;
    u8 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp78;
    s32 sp74;
    void * sp54;
    s32 sp50;
    void * *var_s0_2;
    s32 temp_t6;
    s32 temp_t8;
    s32 var_a0;
    s32 var_s0;
    s32 var_t0;
    s32 var_v0_2;
    s8 temp_t0;
    s8 temp_t1;
    s8 temp_v1;
    s8 var_v0;
    u16 *var_v1;
    u32 temp_s0;
    void *temp_v0;

    D_800E0B96 = 0;
    sp84 = 0;
    var_a0 = 0;
    sp94 = D_8008FDB8;
    if (D_800BE9F0 == 0x22) {
        sp94 = 1;
    }
    if ((D_800C35EA != 1) || (D_800BE9F0 != 0x18) || (D_800C35E8 != 1)) {
        sp95 = 0;
        var_a0 = 0;
        if (func_1517EFDC(0) != 0) {
            var_a0 = 1;
        }
    }
    if ((D_800C35EA == 1) && (D_800C3683 != 0)) {
        var_a0 = 1;
    }
    if (D_8008FEEC > 0) {
        D_8008FEEC -= 1;
    }
    if ((D_800BEAC0 == 0) && (D_800BEAC1 == 0) && (var_a0 == 0) && (D_8008FEEC == 0)) {
        var_v0 = 0;
        if ((D_80082FA0 >= 0) && (D_800BEAC1 == 0)) {
            var_v1 = &(&D_800BE930)[0];
loop_19:
            if ((*var_v1 & 0x1000) && !(D_800D18A0 & (1 << var_v0))) {
                D_800BEAC1 = 1;
                D_800BEAC3 = 1;
                D_800E0A98 = var_v0;
                D_8008FE2C = 0;
                D_8008FEF4 = (*(s32 *)((char *)((&D_800BE918 + (var_v0 * 6))) + 0x3));
                D_8008FEEC = 0xA;
            }
            var_v0 += 1;
            var_v1 += 2;
            if ((D_80082FA0 >= var_v0) && (D_800BEAC1 == 0)) {
                goto loop_19;
            }
        }
    }
    if ((D_800BEAC0 == 0) && (D_800D2E48 != 0xC7)) {
        D_800E0A99 += D_800BE9E4;
        if (D_800E0A99 >= 0x3C) {
            D_800E0A99 -= 0x3C;
            D_800BE3E8 += 1;
        }
    }
    if ((D_800BE616 != 0) && (D_800BEAC1 == 0) && (D_800E0BE3 >= 3)) {
        var_t0 = 0xC6;
        if (D_80082FA0 > 0) {
            var_t0 = 0x64;
        }
        if (D_8008FD78 > 0) {
            D_8008FD78 -= D_800BEA08;
        } else {
            D_8008FD78 = 0;
        }
        sp78 = (s32) D_8008FD78 / 60;
        sp74 = var_t0;
        func_1504332C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
        func_15042D94(0x87, sp74, 0x80, &D_800AB7D4, sp78 / 60, sp78 % 60);
    }
    if (D_8008FEF0 > 0) {
        D_8008FEF0 -= 1;
        if (D_8008FEF0 < 2) {
            D_800BEAC1 = 0;
        }
    } else if (D_800BEAC0 != 0) {
        if (D_800BE616 != 0) {
            sp8C = -0x24;
            sp88 = 3;
        } else {
            sp8C = 5;
            sp88 = 2;
        }
        D_800E0B9A = (&D_800BE930)[(u8) D_800E0A98];
        if (D_8008FEEC != 0) {
            D_800E0B9A = 0;
        }
        temp_v0 = &D_800BE918 + ((u8) D_800E0A98 * 6);
        temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x2));
        temp_t1 = (*(s32 *)((char *)(temp_v0) + 0x3));
        if (D_8008FE2C < sp88) {
            if (((D_8008FEF4 < 0x1F) && (temp_t0 >= 0x1F)) || ((D_8008FEF4 >= -0x1E) && (temp_t0 < -0x1E))) {
                if (D_8008FE2C == 2) {
                    D_8008FE2C = 0;
                } else {
                    D_8008FE2C = 1 - D_8008FE2C;
                }
                sp84 = 0x62D;
            }
            if ((D_8008FE2C != 0) && (sp88 == 3) && (((D_800E0A85 >= -0x1E) && (temp_t1 < -0x1E)) || ((D_800E0A85 < 0x1F) && (temp_t1 >= 0x1F)))) {
                sp84 = 0x62D;
                if (D_8008FE2C == 2) {
                    D_8008FE2C = 1;
                } else {
                    D_8008FE2C = 2;
                }
            }
        } else if (((D_8008FEF4 >= -0x1E) && (temp_t0 < -0x1E)) || ((D_8008FEF4 < 0x1F) && (temp_t0 >= 0x1F))) {
            D_8008FD98 = 1 - D_8008FD98;
            sp84 = 0x62D;
        }
        D_8008FEF4 = temp_t0;
        D_800E0A85 = temp_t1;
        func_1504332C(0xFFU, 0xFFU, 0xFFU, D_8008FDCD);
        if (sp94 != 0) {
            var_s0 = sp8C + 0x73;
            D_8008FE2C = 0;
            func_15042D94(0x94, var_s0, 1, &D_800AB7DC, 0xD);
        } else {
            var_s0 = sp8C + 0x73;
            func_15042D94(0x94, var_s0, 1, &D_800AB7E0, 0x1A);
            if (D_8008FE2C < sp88) {
                func_15042D94(0xD5, var_s0, 1, &D_800AB7E4, (D_8008FE2C == 0) + 0xC);
            }
            func_150432FC(0x94, (s16) (sp8C + 0x55));
            if (sp88 == D_8008FE2C) {
                func_15042E3C(&D_800AB7E8, 0x32);
            } else if (sp88 < D_8008FE2C) {
                func_15042E3C(&D_800AB7EC, 0x33);
            }
        }
        func_150432FC(0x53, (s16) var_s0);
        temp_v1 = D_8008FE2C;
        if (temp_v1 < sp88) {
            if (sp94 == 0) {
                var_v0_2 = 1;
                if (sp88 == 3) {
                    func_150432FC(0x53, (s16) (sp8C + 0x63));
                    func_15042E3C(&D_800AB7F0, (D_8008FE2C == 1) + 0x21);
                    sp90 = 2;
                    func_150432FC(0x53, (s16) (sp8C + 0x82));
                    var_v0_2 = 2;
                }
                func_15042E3C(&D_800AB7F4, (var_v0_2 == temp_v1) + 0xE);
            }
            if ((s16) D_800E0B9A & 0x1000) {
                D_8008FEF0 = 5;
                D_8008FEEC = 0xA;
            } else if ((D_8008FE2C == 0) || ((s16) D_800E0B9A & 0x4000)) {
                if ((s16) D_800E0B9A & 0xC000) {
                    D_8008FEF0 = 5;
                    D_8008FEEC = 0xA;
                }
            } else if ((s16) D_800E0B9A & 0x8000) {
                D_8008FD98 = 0;
                D_8008FE2C = (D_8008FE2C + sp88) - 1;
                if (sp88 == 2) {
                    D_8008FE2C += 1;
                }
                sp84 = 0x500;
            }
        } else {
            func_15042D94(0x6C, var_s0, 1, &D_800AB7F8, D_8008FD98 + 0x1F);
            func_15042D94(0xBC, var_s0, 1, &D_800AB7FC, 0x1E - D_8008FD98);
            if ((s16) D_800E0B9A & 0x8000) {
                if (D_8008FD98 != 0) {
                    D_800E0B94 = 7;
                    D_800E0A88 = func_151DDBA0;
                    D_8008FD74 = 8;
                    if (D_800BE616 != 0) {
                        (*(s32 *)((char *)(gGameState) + 0x3F)) = 4;
                        if (sp88 == D_8008FE2C) {
                            D_8008FD9C = 1;
                            D_800E0A88 = func_151E2834;
                        }
                    } else if (D_8008FDA8 >= 0) {
                        func_15007718(D_8008FDA8);
                    }
                    D_8008FE2C = 0;
                    D_80087270[0] = 0;
                } else {
                    var_s0_2 = &sp54;
                    if ((s32) &sp54 & 0xF) {
                        do {
                            var_s0_2 = (char *)(var_s0_2) + 4;
                        } while ((s32) var_s0_2 & 0xF);
                    }
                    sp50 = func_151DDB94(-0xF81);
                    osWritebackDCache(var_s0_2, 0x10);
                    osPiStartDma(&D_800388E0, 0, 0, sp50, var_s0_2, 0x10, &gMessageQueue);
                    osRecvMesg(&gMessageQueue, 0, 1);
                    osInvalDCache(var_s0_2, 0x10);
                    temp_t6 = (*(s32 *)((char *)(var_s0_2) + 0x0)) - 0x3E0EF0F0;
                    temp_t8 = (*(s32 *)((char *)(var_s0_2) + 0x4)) - 0x3E0EF0F0;
                    (*(s32 *)((char *)(var_s0_2) + 0x0)) = temp_t6;
                    (*(s32 *)((char *)(var_s0_2) + 0x4)) = temp_t8;
                    if ((temp_t6 != 0x3050A14A) || (temp_t8 != 0xBCFCF506)) {
                        temp_s0 = random_u32();
                        osPiStartDma(&D_800388E0, 0, 0, temp_s0 & 0xFFFF, (random_u32() & 0xFFFFE) + 0x80300000, 0x100, &gMessageQueue);
                        osRecvMesg(&gMessageQueue, 0, 1);
                    }
                    D_8008FE2C -= 2;
                }
                sp84 = 0x500;
            } else if ((s16) D_800E0B9A & 0x4000) {
                D_8008FE2C -= 2;
            }
        }
        if (sp84 != 0) {
            func_10010F30(sp84, 0x5DC0, 0x40, 0, 0);
        }
    }
}

void func_151DE6D4(void) {
    s32 var_v0;

    func_151E530C();
    gObjects[0].unk25C = (s32) (gObjects[0].unk25C | 0x200);
    gObjects[0].y_position = 1000.0f;
    if (D_80000300 == 0) {
        D_800E0A90 = 0;
    }
    var_v0 = D_800E0A90;
    if ((var_v0 >= 0x14B) && ((s16) D_800E0B9A & 0x8000)) {
        if (var_v0 < 0x1E0) {
            var_v0 = 0x1E0;
            D_800E0A90 = 0x1E0;
        }
        if ((var_v0 >= 0x259) && (var_v0 < 0x2D0)) {
            var_v0 = 0x2D0;
            D_800E0A90 = 0x2D0;
        }
    }
    if (var_v0 >= 0x349) {
        D_8008FE28 = 2;
        D_800E0B94 = 1;
        D_800D2E40 = 0;
        func_1501C730(6, 0x21, 0U, 0, 1);
        D_800E0B96 = 0xFF;
    }
}

void func_151DE7D4(void) {
    D_800E0A90 = 0;
    D_800E0B97 = 0;
    D_800E0B98 = 0;
    D_800E0A8C = 0;
    D_8008FE28 = 2;
    func_151DE85C();
}

void func_151DE81C(void) {
    D_8008FD74 = 4;
    D_800E0B96 = 0;
    if (D_8008FE30 == 0) {
        func_1500764C();
    }
}

void func_151DE85C(void) {
    D_800D2E40 = 0;
    func_1501C730(6, 0x1D, 0U, 0, 1);
    D_800E0B94 = 3;
    D_8008FD80 = 1;
    D_8008FE28 = 2;
    D_8008FDA4 = 0;
    (*(s32 *)((char *)(gGameState) + 0x3E)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x2B)) = 5;
    (*(s8 *)((char *)(gGameState) + 0x2C)) = (s8) (*(s8 *)((char *)(gGameState) + 0x2B));
}

void func_151DE8E8(void) {

}

/*
Decompilation failure in function func_151DE8F0:

Found jr instruction at 20AE20.s line 1640, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_151DF1BC(void) {
    s32 sp28;
    s32 sp24;
    void *sp20;
    s32 temp_t1;
    s32 var_t0;
    s32 var_t0_2;
    u16 var_v1;

    sp20 = func_15083E90(9);
    if (D_800E0A96 != -1) {
        var_t0 = D_800E0A95 - (D_800BE9E4 << 5);
        if (var_t0 <= 0) {
            D_8008FEF8 = D_8008FEF8 == 0;
            if (D_8008FEF8 == 0) {
                sp24 = 0xE;
                sp28 = 0;
                func_1001263C((random_u32() & 1) + 0xC8, 0x7D00, 0x40);
            } else {
                sp24 = 0xF;
                sp28 = 0;
                func_1001263C((random_u32() % 3U) + 0xBE, 0x7D00, 0x40);
            }
            var_t0 = sp28;
            if (sp20 != NULL) {
                (*(u8 *)((char *)(sp20) + 0x232)) = (u8) sp24;
                gCurrentObject = sp20;
                gCurrentObjectIndex = (s8) ((s32) ((char *)(sp20) - (char *)(&gObjects)) / 812);
                (*(s32 *)((char *)(sp20) + 0x218)) = func_1507BB28(0, (*(s32 *)((char *)(sp20) + 0x232)));
                (*(s32 *)((char *)(sp20) + 0x21C)) = 0;
                (*(s32 *)((char *)(sp20) + 0x201)) = 0x14;
            }
            D_800E0A96 = -1;
        }
        (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFCF);
    } else {
        var_t0 = D_800E0A95 + (D_800BE9E4 << 5);
        if (var_t0 >= 0x100) {
            var_t0 = 0xFF;
        }
    }
    D_800E0A95 = (u8) var_t0;
    temp_t1 = (s32) (D_800E0A94 * var_t0) >> 8;
    var_t0_2 = temp_t1;
    if (temp_t1 >= 0xFE) {
        var_t0_2 = 0xFF;
    }
    if (D_8008FEF8 == 0) {
        sp28 = var_t0_2;
        func_151E3344(0x200200, 0, 1, var_t0_2 & 0xFF, 1);
        if ((D_8008FE34 == 9) && ((*(s32 *)((char *)(gGameState) + 0x20)) & 0xC)) {
            sp28 = var_t0_2;
            func_151E7E9C();
            func_1000DE1C(D_800E0A97, 0);
            D_800E0A97 = func_1000EA94(D_800E0BE9);
        }
        var_v1 = (*(s32 *)((char *)(gGameState) + 0x20));
        if ((var_v1 & 0x10) && (D_8008FE34 == 0x15) && (D_8008FDE8 == 0.0f)) {
            D_800E0A96 = 1;
            (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFCF);
            var_v1 = (*(s32 *)((char *)(gGameState) + 0x20));
        }
        if (var_v1 & 0x20) {
            sp28 = var_t0_2;
            func_15007668();
        }
    }
    if (sp20 != NULL) {
        sp28 = var_t0_2;
        if (func_151F2CDC() == 1) {
            if ((*(s32 *)((char *)(sp20) + 0x1FF)) == 0) {
                (*(s32 *)((char *)(sp20) + 0x1FF)) = 1U;
            }
        } else {
            (*(s32 *)((char *)(sp20) + 0x1FF)) = 0U;
        }
    }
    if (D_8008FEF8 != 0) {
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x20) {
            D_800E0A96 = 1;
        }
        (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
        if (D_8008FEF8 != 0) {
            func_1504332C(0xFFU, 0U, 0U, var_t0_2 & 0xFF);
            func_15042D94(0x94, 0x14, 0x81, &D_800AB800, 0x10);
        }
        D_800BE9EC = 0;
        if (D_800E9D00 & 0x400000) {
            D_800BE9EC = 1;
        }
        if (D_800E9D00 & 0x800000) {
            D_800BE9EC = 2;
        }
    }
}

void func_151DF574(void) {
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 sp84;
    s8 sp83;
    s32 sp74;
    s8 sp5C;
    s32 sp54;
    s32 temp_fp;
    s32 temp_s7;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s5;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_v0_3;
    s8 *var_v0;
    s8 *var_v1;
    s8 temp_s0;
    s8 temp_t6;
    s8 temp_v0;
    s8 var_a0;
    s8 var_s3;
    s8 var_v0_2;
    u16 temp_v0_4;
    void *temp_s4;

    sp84 = 0;
    temp_v0 = D_800E0A96;
    sp74 = (s32) D_800E0A94;
    do {
        spB8 = 0;
        sp83 = D_8008FF00;
        if (temp_v0 == 1) {
            D_8008FF00 -= 1;
            if (D_8008FF00 < 0) {
                D_8008FF00 = 8;
            }
            D_8008FF2C = -1;
        } else if (temp_v0 == 2) {
            D_8008FF00 += 1;
            if (D_8008FF00 >= 9) {
                D_8008FF00 = 0;
            }
            D_8008FF2C = 1;
        }
loop_9:
        var_s5 = 1;
        var_a1 = 0;
        var_s1 = 0;
        var_s2 = 0;
        spB4 = 0;
        if (D_8008FF00 > 0) {
            var_v0 = &D_800AB804;
            do {
                temp_t6 = *var_v0;
                var_a1 += 1;
                var_v0 += 1;
                var_s5 += temp_t6;
            } while (var_a1 < D_8008FF00);
            spB4 = var_a1;
        }
        if (D_800E9D00 & 0x8000) {
            var_s1 = -1;
        }
        if ((D_8008FF00 == 8) && (D_800E9D00 & 2)) {
            var_s1 |= 1;
        }
        if ((D_8008FF00 == 7) && (D_800E9D00 & 4)) {
            var_s1 |= 1;
        }
        if ((D_8008FF00 == 6) && (D_800E9D00 & 0x1000)) {
            var_s1 |= 1;
        }
        if ((D_8008FF00 == 5) && (D_800E9D00 & 0x4000)) {
            var_s1 |= 1;
        }
        if ((D_8008FF00 == 4) && (D_800E9D00 & 0x01000000)) {
            var_s1 |= 1;
        }
        if ((D_8008FF00 == 3) && (D_800E9D00 & 0x02000000)) {
            var_s1 |= 1;
        }
        if ((D_8008FF00 == 2) && (D_800E9D00 & 0x04000000)) {
            var_s1 |= 1;
        }
        temp_v0_2 = func_1509CF28(D_8008FF00, &spB4);
        temp_s0 = D_8008FF00;
        if (temp_s0 == 0) {
            var_s1 |= 1;
        }
        if (temp_v0_2 != 0) {
            var_a1_2 = 0;
            spB4 = 0;
            if (((&D_800AB804)[temp_s0] - 1) > 0) {
                do {
                    spB4 = var_a1_2;
                    if (func_1509D08C(temp_s0, var_a1_2, &spB0, NULL) != 0) {
                        var_s1 |= 1 << spB4;
                    }
                    if ((1 << spB4) & var_s1) {
                        var_s2 += 1;
                    }
                    var_a1_2 = spB4 + 1;
                } while (var_a1_2 < ((&D_800AB804)[D_8008FF00] - 1));
                spB4 = var_a1_2;
            }
            func_1509D054();
            if ((D_8008FF00 == 8) && (D_800BE3DE != 0) && !(var_s1 & 8)) {
                var_s1 |= 8;
                var_s2 += 1;
            }
        } else {
            var_s1 |= 1 << spB4;
            var_s2 = 1;
        }
        if (var_s2 == 0) {
            D_8008FF00 = temp_s0 + D_8008FF2C;
            if (D_8008FF00 >= 9) {
                D_8008FF00 = 0;
            }
            if (D_8008FF00 < 0) {
                D_8008FF00 = 8;
            }
        }
        if (var_s2 == 0) {
            goto loop_9;
        }
        if ((D_800E0A96 == 1) || (D_800E0A96 == 2)) {
            if (sp83 == D_8008FF00) {
                D_800E0A96 = -1;
            } else {
                D_800E0A96 += 2;
                D_8008FF00 = sp83;
            }
            spB8 = 1;
        }
    } while (spB8 != 0);
    if (D_800E0A96 > 0) {
        var_s6 = D_800E0A95 - (D_800BE9E4 << 5);
        if (var_s6 <= 0) {
            var_s6 = 0;
            D_800E0A96 = -1;
            if (D_800E0A96 == 3) {
                D_8008FF00 -= 1;
                if (D_8008FF00 < 0) {
                    D_8008FF00 = 8;
                }
                D_8008FF2C = -1;
            } else {
                D_8008FF00 += 1;
                if (D_8008FF00 >= 9) {
                    D_8008FF00 = 0;
                }
                D_8008FF2C = 1;
            }
        }
    } else {
        var_s6 = D_800E0A95 + (D_800BE9E4 << 5);
        if (var_s6 >= 0x100) {
            var_s6 = 0xFF;
        }
    }
    D_800E0A95 = (u8) var_s6;
    temp_t7 = (s32) (var_s6 * sp74) >> 8;
    var_s6_2 = temp_t7;
    if (temp_t7 >= 0xFE) {
        var_s6_2 = 0xFF;
    }
    var_a0 = D_8008FF24;
    if (var_a0 > 0) {
        var_a0 -= 2;
    } else if (var_a0 < 0) {
        var_a0 += 2;
    }
    D_8008FF24 = var_a0;
    if ((var_a0 == 0) && (D_800E0A95 == 0xFF)) {
        if (D_800BE91B < -0x31) {
            D_8008FF28 = D_8008FDB0;
            D_8008FDB0 += 1;
            D_8008FF24 = -0xA;
            sp84 = 0x4FF;
        } else if (D_800BE91B >= 0x32) {
            D_8008FF28 = D_8008FDB0;
            D_8008FDB0 -= 1;
            sp84 = 0x4FF;
            D_8008FF24 = 0xA;
        }
    }
    if (D_8008FDB0 < 0) {
        D_8008FDB0 = 0;
        D_8008FF24 = 0;
        sp84 = 0;
    }
    temp_s7 = var_s6_2 & 0xFF;
    if (D_8008FDB0 >= var_s2) {
        D_8008FDB0 = var_s2 - 1;
        D_8008FF24 = 0;
        sp84 = 0;
    }
    func_1504332C(0xFFU, 0xFFU, 0xFFU, temp_s7 & 0xFF);
    func_15042D94(0x94, 0x4D, 0x81, &D_800AB810, D_8008FF00 + 0x42);
    var_v0_2 = 0;
    var_a1_3 = 0;
    spB0 = 0;
    spB4 = 0;
    if (var_s2 > 0) {
        var_v1 = &sp5C;
        do {
            var_a1_3 += 1;
            if (!((1 << var_v0_2) & var_s1)) {
                do {
                    var_v0_2 += 1;
                } while (!((1 << var_v0_2) & var_s1));
            }
            *var_v1 = var_v0_2;
            var_v1 += 1;
            var_v0_2 += 1;
        } while (var_a1_3 < var_s2);
        spB4 = var_a1_3;
        spB0 = (s32) var_v0_2;
    }
    temp_fp = D_8008FF00 * 3;
    func_1504332C(0xFFU, 0U, 0U, temp_s7 & 0xFF);
    var_s3 = -1;
    if (var_s2 < 6) {
        var_s0 = 0x2F;
        var_s1_2 = var_s2 * 0xB;
    } else {
        var_s0 = (-(D_8008FDB0 * 0xB) - D_8008FF24) + 0x45;
        var_s1_2 = 0x37;
        if (var_s0 >= 0x30) {
            D_8008FF24 = D_8008FF24;
            var_s0 = 0x2F;
        }
    }
    temp_v1 = var_s2 + 3;
    var_a1_4 = var_s2 - 3;
    spB0 = -3;
    spB4 = var_a1_4;
    if (temp_v1 >= -2) {
        temp_s4 = temp_fp + &D_8008FF08;
        D_8008FF24 = D_8008FF24;
        sp54 = temp_v1;
        do {
            temp_v1_2 = D_8008FF24 * 0xC;
            var_t2 = temp_v1_2;
            if (temp_v1_2 < 0) {
                var_t2 = -temp_v1_2;
            }
            if (var_a1_4 == D_8008FDB0) {
                var_t2_2 = 0xFF - var_t2;
                if (var_t2_2 == 0xFF) {
                    temp_t4 = (D_8008FF30 * 2) & 0x7F;
                    var_a0_2 = temp_t4;
                    if (temp_t4 >= 0x40) {
                        var_a0_2 = 0x7F - temp_t4;
                    }
                    var_t2_2 = var_a0_2 + 0xC0;
                    D_8008FF30 += D_800BE9E4;
                } else {
                    D_8008FF30 = 0x1F;
                }
            } else if (D_8008FF28 == var_a1_4) {
                var_t2_2 = var_t2 + 0x80;
            } else {
                var_t2_2 = 0x80;
            }
            spB4 = var_a1_4;
            if (var_a1_4 == D_8008FDB0) {
                spB4 = var_a1_4;
                D_8008FF04 = (&sp5C)[var_a1_4];
            }
            if (var_s0 < 0x50) {
                var_v0_3 = (var_s0 * 0x19) - 0x6D6;
            } else if (((var_s1_2 + 0x46) < var_s0) && (var_s0 < (var_s1_2 + 0x50))) {
                var_v0_3 = (((var_s1_2 - var_s0) + 0xA) * 0x19) + 0x6D6;
            } else {
                var_v0_3 = 0xFF;
            }
            if (var_v0_3 < 0) {
                var_v0_3 = 0;
            }
            if (var_v0_3 >= 0xFA) {
                var_v0_3 = 0xFF;
            }
            if (var_s6_2 < var_v0_3) {
                var_v0_3 = var_s6_2;
            }
            func_1504332C(((s32) ((*(s32 *)((char *)(temp_s4) + 0x0)) * var_t2_2) >> 8) & 0xFF, ((s32) ((*(s32 *)((char *)(temp_s4) + 0x1)) * var_t2_2) >> 8) & 0xFF, ((s32) ((*(s32 *)((char *)(temp_s4) + 0x2)) * var_t2_2) >> 8) & 0xFF, var_v0_3 & 0xFF);
            if ((var_s0 >= 0x46) && (var_s0 < (var_s1_2 + 0x50)) && (var_s3 == 0)) {
                func_15042D94(0x94, var_s0 + 0xF, 0x81, *(D_800E0B88 + ((&sp5C)[spB4] * 4) + (var_s5 * 4)));
            }
            var_s0 += 0xB;
            var_a1_4 = spB4 + 1;
            if (var_a1_4 >= var_s2) {
                var_s3 += 1;
                var_a1_4 = 0;
            }
            temp_v0_3 = spB0 + 1;
            spB0 = temp_v0_3;
        } while (temp_v0_3 < sp54);
        spB4 = var_a1_4;
    }
    if (D_800E0A95 == 0xFF) {
        temp_v0_4 = (*(s32 *)((char *)(gGameState) + 0x20));
        if (temp_v0_4 & 4) {
            D_800E0A96 = 1;
            sp84 = 0x4FF;
        } else if (temp_v0_4 & 8) {
            D_800E0A96 = 2;
            sp84 = 0x4FF;
        }
        if (((*(u8 *)((char *)(gGameState) + 0x20)) & 0x10) && ((u8) D_8008FF04 != 0xFF)) {
            D_800E0B94 = 7;
            D_800E0A88 = func_151E30C4;
            D_8008FD74 = 3;
            sp84 = 0x500;
        }
    }
    if (sp84 != 0) {
        func_10010F30(sp84, 0x4650, 0x40, 0, 0);
    }
}

void func_151DFF38(void) {
    s32 sp54;
    u8 sp53;
    s32 sp4C;
    s32 sp48;
    void *sp28;
    f32 *temp_v1;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;
    s8 temp_v0_2;
    u16 var_v0_2;
    u32 temp_lo;
    u32 temp_v0;
    void *temp_t1;

    sp53 = D_800E0A94;
    var_a3 = 0;
    sp54 = (*(s32 *)((char *)(gGameState) + 0x2C)) - 3;
    if (D_8008FE2C < 2) {
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0xC) {
            D_8008FE2C = 1 - D_8008FE2C;
            goto block_5;
        }
    } else if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0xC) {
        D_8008FE2C = 5 - D_8008FE2C;
block_5:
        var_a3 = 0x62D;
    }
    sp4C = var_a3;
    func_150432FC(0x94, 0x46);
    temp_t1 = (sp54 * 0x10) + &D_800BE3F8;
    sp28 = temp_t1;
    if ((*(s32 *)((char *)(temp_t1) + 0x8)) == -1) {
        D_8008FE2C = 0;
    }
    if (sp54 == 2) {
        func_1504332C(0xFFU, 0x37U, 0x37U, sp53);
    } else if (sp54 == 1) {
        func_1504332C(0x78U, 0xFFU, 0x16U, sp53);
    } else {
        func_1504332C(0x20U, 0x55U, 0xFFU, sp53);
    }
    if ((*(s32 *)((char *)(sp28) + 0x8)) != -1) {
        var_v0 = (*(s32 *)((char *)(sp28) + 0x4));
        var_v1 = 0;
        if (var_v0 == 0x7D00) {
            sp48 = 0xF4240;
            func_150432BC(0x3F400000);
            var_v0 = 0xF4240;
            var_v1 = 2;
        }
        func_15042D94(0x70, var_v1 + 0x33, 0, &D_800AB814, var_v0);
        func_150432BC(0x3F800000);
        temp_v0 = (*(s32 *)((char *)(sp28) + 0x0));
        temp_lo = temp_v0 / 60U;
        func_15042D94(0xA4, 0x33, 0, &D_800AB818, (s32) (temp_lo / 60U), (s32) (temp_lo % 60U), temp_v0 % 60U);
    }
    func_1504332C(0xFFU, 0xFFU, 0xFFU, sp53);
    if ((*(s32 *)((char *)(sp28) + 0x8)) >= 0) {
        func_15042D94(0x94, 0xAF, 1, &D_800AB828, 0x1A);
        func_150432FC(0x58, 0xAF);
        if (D_8008FE2C < 2) {
            func_15042E3C(&D_800AB82C, (D_8008FE2C == 0) + 0x16, (s8 *)1);
        } else {
            func_15042D94(0x94, 0x91, 1, &D_800AB830, 0x19);
        }
    } else {
        func_15042D94(0x94, 0x6E, 1, &D_800AB834, 0x31);
    }
    func_150432FC(0xD0, 0xAF);
    temp_v0_2 = D_8008FE2C;
    if (temp_v0_2 < 2) {
        if ((*(s32 *)((char *)(sp28) + 0x8)) >= 0) {
            func_15042E3C(&D_800AB838, (temp_v0_2 != 0) + 0x18, (s8 *)1);
        }
        if (temp_v0_2 == 0) {
            if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x10) {
                D_800E0B94 = 7;
                D_800E0A88 = func_151E327C;
                D_8008FD74 = 3;
                D_8008FDA8 = (s8) sp54;
                D_800BE3DC = -1;
                D_80082BC0 = 0;
                func_150076BC((*(s32 *)((char *)(sp28) + 0xE)));
                sp4C = 0x500;
            }
        } else if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x10) {
            D_8008FE2C = 2;
            sp4C = 0x500;
        }
    } else {
        func_15042D94(0x6C, 0xAF, 1, &D_800AB83C, (temp_v0_2 == 3) + 0x1F);
        func_15042D94(0xBC, 0xAF, 1, &D_800AB840, (D_8008FE2C == 2) + 0x1D);
        temp_v1 = gGameState;
        var_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x20));
        if (var_v0_2 & 0x10) {
            if (D_8008FE2C == 3) {
                D_8008FE2C = 0;
                func_15007750(sp54);
                D_800BE3DF = 0x29;
                D_800BE3E0 = 0;
                D_800BE3E4 = 0;
                func_15017790();
                (*(s32 *)((char *)(sp28) + 0xC)) = 0x18;
                (*(s32 *)((char *)(sp28) + 0x4)) = 0;
                (*(s32 *)((char *)(sp28) + 0x8)) = -1;
                D_8008FDA4 = 0;
            } else {
                D_8008FE2C = 1;
            }
            sp4C = 0x500;
            goto block_37;
        }
        if (var_v0_2 & 0x20) {
            D_8008FE2C = 1;
block_37:
            var_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x20));
        }
        (*(u16 *)((char *)(temp_v1) + 0x20)) = (u16) (var_v0_2 & 0xFFDF);
    }
    if (sp4C != 0) {
        func_10010F30(sp4C, 0x4650, 0x40, 0, 0);
    }
}

void func_151E0424(void) {
    s32 unksp33;
    s32 sp40;
    s32 sp30;
    f32 temp_f2;
    s16 *var_s1;
    s16 var_a1_2;
    s16 var_s0_2;
    s32 temp_s2;
    s32 temp_t5;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v1_2;
    s8 *var_v0;
    s8 temp_a2;
    s8 temp_s3;
    s8 temp_t3;
    s8 temp_v0_3;
    s8 var_a1;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 var_s0;
    u8 var_v1;

    if ((*(s32 *)((char *)(gGameState) + 0x2C)) != 0) {
        var_s0 = D_800E0A94;
        if (D_800E0A96 != -1) {
            (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
            temp_s2 = D_800E0A95 - (D_800BE9E4 << 5);
            if (temp_s2 <= 0) {
                D_800E0A95 = 0;
                (*(s8 *)((char *)(gGameState) + 0x3F)) = (s8) D_800E0A96;
                if (D_800E0A96 == 2) {
                    D_8008FDE0 = 0;
                    D_8008FDDC = 1;
                    D_8008FE34 = 0;
                }
                func_151E22BC();
                D_800E0A96 = -1;
                return;
            }
            D_800E0A95 = (u8) temp_s2;
            var_v1 = temp_s2 & 0xFF;
            if (D_800E0A96 != 2) {
                var_s0 = var_v1;
            }
            goto block_13;
        }
        var_s2 = D_800E0A95 + (D_800BE9E4 << 5);
        if (var_s2 >= 0x100) {
            var_s2 = 0xFF;
        }
        D_800E0A95 = (u8) var_s2;
        temp_t5 = (s32) (D_800E0A94 * var_s2) >> 8;
        sp30 = temp_t5;
        if (temp_t5 >= 0xFE) {
            var_v1 = 0xFF;
block_13:
            sp30 = (s32) var_v1;
        }
        D_8008FDA0 = 0;
        D_8008FDC4 = 0;
        D_800E0B8C = 0;
        temp_s3 = *(&D_8008FE9B + (*(s32 *)((char *)(gGameState) + 0x2C)));
        if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0xC) {
            D_8008FE2C = 1 - D_8008FE2C;
            func_10010F30(0x62D, 0x4650, 0x40, 0, 0);
        }
        func_1504332C(0xFFU, 0xFFU, 0xFFU, var_s0 & 0xFF);
        func_15042D94(0x94, 0x7E, 1, &D_800AB844, 0x1A);
        func_1504332C(0xFFU, 0xFFU, 0xFFU, unksp33);
        func_15042D94(0xD5, 0x7E, 1, &D_800AB848, (D_8008FE2C == 1) + 0x1B);
        if ((sp30 == 0xFF) && (D_8008FE2C == 0)) {
            if (temp_s3 == 5) {
                if (temp_s3 == 5) {
                    if (D_8008FDE8 == 0.0f) {
                        goto block_23;
                    }
                }
            } else {
block_23:
                temp_v0 = (*(s32 *)((char *)(gGameState) + 0x20));
                if (temp_v0 & 1) {
                    D_8008FDE8 = 1.0f;
                    (*(s8 *)((char *)(gGameState) + 0x41)) = (s8) ((*(s8 *)((char *)(gGameState) + 0x41)) - 1);
                    func_10010F30(0x62D, 0x4650, 0x40, 0, 0);
                } else if (temp_v0 & 2) {
                    D_8008FDE8 = -1.0f;
                    (*(s8 *)((char *)(gGameState) + 0x41)) = (s8) ((*(s8 *)((char *)(gGameState) + 0x41)) + 1);
                    func_10010F30(0x62D, 0x4650, 0x40, 0, 0);
                }
            }
        }
        var_a1 = (*(s32 *)((char *)(gGameState) + 0x41));
        if (var_a1 < 0) {
            (*(s8 *)((char *)(gGameState) + 0x41)) = (s8) (var_a1 + temp_s3);
            var_a1 = (*(s32 *)((char *)(gGameState) + 0x41));
        }
        if (var_a1 >= temp_s3) {
            (*(s8 *)((char *)(gGameState) + 0x41)) = (s8) (var_a1 - temp_s3);
            var_a1 = (*(s32 *)((char *)(gGameState) + 0x41));
        }
        sp40 = (s32) var_a1;
        temp_a2 = (*(s32 *)((char *)(gGameState) + 0x2C));
        var_v1_2 = 0;
        var_v0 = &D_8008FE9C;
        if ((temp_a2 - 1) > 0) {
            do {
                temp_t3 = *var_v0;
                var_v0 += 1;
                var_v1_2 += temp_t3;
            } while ((u32) var_v0 < (u32) ((char *)(&D_8008FE9C + temp_a2) - 1));
        }
        (*(s8 *)((char *)(gGameState) + 0x42)) = (s8) (var_a1 + var_v1_2);
        if (temp_s3 != 5) {
            var_s0_2 = 0x8C - ((s32) (temp_s3 * 0x1C) >> 1);
            var_s2_2 = 0;
            if (temp_s3 > 0) {
                var_s1 = (var_v1_2 * 0xA) + &D_800AB68C;
                do {
                    func_150432FC(0x53, var_s0_2);
                    var_a1_2 = *var_s1;
                    if ((var_s2_2 == sp40) && (D_8008FE2C == 0)) {
                        var_a1_2 += 1;
                    }
                    func_15042E3C(&D_800AB84C, var_a1_2);
                    var_s2_2 += 1;
                    var_s1 += 0xA;
                    var_s0_2 += 0x1C;
                } while (var_s2_2 != temp_s3);
            }
        } else {
            temp_f2 = (f32) D_800BE9E4 * D_800AB990;
            if (D_8008FDE8 < 0.0f) {
                D_8008FDE8 += temp_f2;
                if (D_8008FDE8 > 0.0f) {
                    goto block_47;
                }
            } else if (D_8008FDE8 > 0.0f) {
                D_8008FDE8 -= temp_f2;
                if (D_8008FDE8 < 0.0f) {
block_47:
                    D_8008FDE8 = 0.0f;
                }
            }
            if ((D_8008FE2C == 0) && (D_8008FDE8 != 0.0f)) {
                (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFEF);
            }
        }
        if ((sp30 == 0xFF) && (temp_v0_2 = (*(s32 *)((char *)(gGameState) + 0x20)), ((temp_v0_2 & 0x10) != 0))) {
            (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) (temp_v0_2 & 0xFFDF);
            if (D_8008FE2C == 0) {
                D_800E0A96 = 4;
                D_800E0BE0 = (*(s32 *)((char *)(gGameState) + 0x41));
                temp_v0_3 = *(&D_800AB691 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA));
                if (temp_v0_3 < 0) {
                    D_800E0B90 = *(&D_8008FEC4 + ((-1 - temp_v0_3) * 4));
                } else {
                    D_800E0B90 = 0;
                }
                D_8008FE40 = 1;
                return;
            }
            D_800E0A96 = 2;
            (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
        }
    }
}

void func_151E09DC(void) {
    s32 sp24;
    s32 var_v1;

    func_1504332C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_15042D94(0x94, 0x7E, 1, &D_800AB850, 0x1A);
    func_15042D78(0x81);
    sp24 = *(&D_800AB754 + (*(&D_800AB690 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA)) * 4));
    if (D_800E0A96 == 0) {
        (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
        var_v1 = D_800E0A95 - (D_800BE9E4 << 5);
        if (var_v1 <= 0) {
            (*(s32 *)((char *)(gGameState) + 0x3F)) = 0;
            if (D_8008FDE0 != 0) {
                func_151E2404(&D_800E0A95);
            }
            D_8008FDE0 = 0;
            D_800E0A96 = -1;
            return;
        }
        D_800E0A95 = (u8) var_v1;
        goto block_8;
    }
    var_v1 = D_800E0A95 + (D_800BE9E4 << 5);
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
block_8:
    D_800E0A95 = (u8) var_v1;
    if (var_v1 != 0xFF) {
        (*(s32 *)((char *)(gGameState) + 0x20)) = 0U;
    }
    func_151E3344(sp24, 1, 0, var_v1 & 0xFF, 0);
    if ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x20) {
        D_800E0A96 = 0;
    }
    (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
}

void func_151E0B70(void) {
    s32 sp54;
    s32 sp4C;
    s32 sp3C;
    void *sp38;
    s32 sp34;
    s8 sp33;
    s8 sp32;
    void **sp28;
    s32 temp_t3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_t1_2;
    s32 var_t5;
    s32 var_v1;
    s32 var_v1_4;
    s8 *temp_v0;
    s8 *var_a1;
    s8 *var_v0;
    s8 *var_v0_2;
    s8 *var_v0_3;
    s8 *var_v1_2;
    s8 *var_v1_3;
    s8 temp_a1;
    s8 temp_a2;
    s8 temp_t0;
    s8 temp_t6;
    s8 temp_t6_2;
    s8 temp_t9;
    s8 temp_t9_2;
    s8 temp_v1;
    s8 var_t3;
    s8 var_t3_2;
    u16 var_v0_4;
    void **var_t1;
    void **var_t2;
    void *temp_a0;
    void *temp_a0_2;
    s8 phi_t0;

    sp38 = NULL;
    sp32 = 0;
    if (D_800E0A96 != -1) {
        (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
        var_v1 = D_800E0A95 - (D_800BE9E4 << 5);
        if (var_v1 <= 0) {
            D_800E0A95 = 0;
            var_t1 = &D_800E0BA0;
            (*(s8 *)((char *)(gGameState) + 0x3F)) = (s8) D_800E0A96;
            D_800E0A96 = -1;
            do {
                temp_a0 = *var_t1;
                if (temp_a0 != NULL) {
                    sp28 = var_t1;
                    func_15060F28(temp_a0, 1);
                    *var_t1 = NULL;
                }
                var_t1 = (char *)(var_t1) + 4;
            } while ((char *)(var_t1) != (char *)(&D_800E0BB0));
            return;
        }
        D_800E0A95 = (u8) var_v1;
        goto block_11;
    }
    var_v1 = D_800E0A95 + (D_800BE9E4 << 5);
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    D_800E0A95 = (u8) var_v1;
block_11:
    sp54 = var_v1;
    sp34 = -1;
    func_1504332C(0xFFU, 0xFFU, 0xFFU, var_v1 & 0xFF);
    var_t5 = -1;
    temp_v1 = (*(s32 *)((char *)((&D_800AB68C + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) + 0x5));
    temp_t3 = -1 - temp_v1;
    if (temp_v1 < 0) {
        sp3C = 5;
        sp38 = (temp_t3 * 4) + &D_8008FEC4;
        var_t5 = *(&D_8008FEA4 + (temp_t3 * 4));
        if (D_800E9D00 & 0x20) {
            var_t5 |= 0x8000;
        }
        if (D_800E9D00 & 0x10) {
            var_t5 |= 0x10000;
        }
        if (D_800E9D00 & 0x40) {
            var_t5 |= 0x30;
        }
        if (D_800E9D00 & 0x80) {
            var_t5 |= 0x43C0;
        }
        if (D_800E9D00 & 0x100) {
            var_t5 |= 0xE0800;
        }
        if (D_800E9D00 & 0x10000) {
            var_t5 |= 0xA;
        }
        if (D_800E9D00 & 0x20000) {
            var_t5 |= 0x300000;
        }
    } else {
        sp3C = 1;
    }
    if ((*(s32 *)((char *)(gGameState) + 0x2C)) == 7) {
        sp33 = 2;
    } else {
        sp33 = 4;
    }
    D_800E0B8C = 0;
    if ((sp3C == 5) && ((*(s32 *)((char *)((&D_800AB68C + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) + 0x8)) != 8)) {
        if (D_800E0BA0 == NULL) {
            sp34 = var_t5;
            func_151E7F60(0, D_800E0B90);
        }
        sp34 = var_t5;
        func_15042D94(0x94, 0x9B, 1, &D_800AB854, 0x1A);
        D_800E0B8C = 1;
    }
    var_t3 = 1;
    do {
        if ((var_t3 < sp33) && (sp54 == 0xFF) && ((&D_800BE930)[var_t3] & 0x1000)) {
            var_t1_2 = 0;
            var_a2 = 0;
            if (D_8008FE40 > 0) {
                var_a1 = &D_8008FE44;
                do {
                    if (var_t3 == *var_a1) {
                        D_8008FE40 -= 1;
                        var_t1_2 = 1;
                        var_v1_2 = &(&D_8008FE44)[var_a2];
                        if (var_a2 < D_8008FE40) {
                            var_v0 = &(&D_800E0B90)[var_a2];
                            do {
                                temp_t6 = (*(s32 *)((char *)(var_v1_2) + 0x1));
                                temp_t9 = (*(s32 *)((char *)(var_v0) + 0x1));
                                var_v0 += 1;
                                var_v1_2 += 1;
                                (*(s32 *)((char *)(var_v1_2) - 0x1)) = temp_t6;
                                (*(s32 *)((char *)(var_v0) - 0x1)) = temp_t9;
                            } while ((u32) var_v0 < (u32) &(&D_800E0B90)[D_8008FE40]);
                        }
                    }
                    var_a2 += 1;
                    var_a1 += 1;
                } while (var_a2 < D_8008FE40);
            }
            var_a2_2 = 0;
            if (var_t1_2 == 0) {
                if ((D_8008FE40 > 0) && (D_8008FE44 < var_t3)) {
loop_49:
                    var_a2_2 += 1;
                    if (var_a2_2 < D_8008FE40) {
                        if ((&D_8008FE44)[var_a2_2] < var_t3) {
                            goto loop_49;
                        }
                    }
                }
                if (var_a2_2 < D_8008FE40) {
                    var_v1_3 = &(&D_8008FE44)[D_8008FE40];
                    var_v0_2 = &(&D_800E0B90)[D_8008FE40];
                    do {
                        temp_t6_2 = (*(s32 *)((char *)(var_v1_3) - 0x1));
                        temp_t9_2 = (*(s32 *)((char *)(var_v0_2) - 0x1));
                        var_v0_2 -= 1;
                        var_v1_3 -= 1;
                        (*(s32 *)((char *)(var_v1_3) + 0x1)) = temp_t6_2;
                        (*(s32 *)((char *)(var_v0_2) + 0x1)) = temp_t9_2;
                    } while ((u32) &(&D_800E0B90)[var_a2_2] < (u32) var_v0_2);
                }
                (&D_8008FE44)[var_a2_2] = var_t3;
                if (sp38 != NULL) {
                    (&D_800E0B90)[var_a2_2] = *((char *)(sp38) + var_t3);
                } else {
                    (&D_800E0B90)[var_a2_2] = var_t3;
                }
                D_8008FE40 += 1;
                if ((&D_800E0BA0)[var_t3] != NULL) {
                    sp32 = 1;
                }
            }
        }
        var_t3 += 1;
    } while (var_t3 < 4);
    temp_t0 = D_8008FE40;
    var_t2 = &D_800E0C00;
    var_t3_2 = 0;
    phi_t0 = temp_t0;
    if (temp_t0 > 0) {
        do {
            *var_t2 = var_t3_2;
            if (D_800E0B8C != 0) {
                temp_a2 = (&D_8008FE44)[var_t3_2];
                temp_v0 = &(&D_800E0B90)[var_t3_2];
                temp_a1 = *temp_v0;
                temp_a0_2 = gGameState + (temp_a2 * 2);
                var_v1_4 = 1;
                if ((*(s32 *)((char *)(temp_a0_2) + 0x22)) & 8) {
                    *temp_v0 = temp_a1 + 1;
                    if (*temp_v0 >= 0x16) {
                        *temp_v0 = 0;
                    }
                }
                if ((*(s32 *)((char *)(temp_a0_2) + 0x22)) & 4) {
                    *temp_v0 -= 1;
                    var_v1_4 = -1;
                    if (*temp_v0 < 0) {
                        *temp_v0 = 0x15;
                    }
                }
                if (!((1 << *temp_v0) & var_t5)) {
                    do {
                        *temp_v0 += var_v1_4;
                        if (*temp_v0 < 0) {
                            *temp_v0 = 0x15;
                        }
                        if (*temp_v0 >= 0x16) {
                            *temp_v0 = 0;
                        }
                    } while (!((1 << *temp_v0) & var_t5));
                }
                if ((temp_a1 != *temp_v0) || (sp32 != 0)) {
                    sp28 = var_t2;
                    sp4C = (s32) var_t3_2;
                    sp34 = var_t5;
                    func_151E7F60(temp_a2, *temp_v0, temp_a2, temp_a1);
                    phi_t0 = D_8008FE40;
                }
            }
            var_t3_2 += 1;
            var_t2 = (char *)(var_t2) + 1;
        } while (var_t3_2 < phi_t0);
    }
    if (temp_t0 < 0x10) {
        var_v0_3 = &(&D_8008FE44)[temp_t0];
        do {
            var_v0_3 += 1;
            (*(s32 *)((char *)(var_v0_3) - 0x1)) = -1;
        } while ((u32) var_v0_3 < (u32) &D_8008FE54);
    }
    if (sp54 == 0xFF) {
        var_v0_4 = (*(s32 *)((char *)(gGameState) + 0x20));
        if (var_v0_4 & 0x10) {
            D_8008FD74 = 8;
            func_10010F30(0x500, 0x7D00, 0x40, 0, 0);
            D_800E0A96 = (s8) sp3C;
            var_v0_4 = (*(s32 *)((char *)(gGameState) + 0x20));
        }
        if (var_v0_4 & 0x20) {
            D_800E0A96 = 0;
            D_8008FE2C = 0;
        }
    }
    (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
}

void func_151E1214(void) {
    s32 sp3C;
    s16 var_s1;
    s32 temp_t0;
    s32 temp_t6;
    s32 temp_t9;
    s32 var_s2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_s0;
    s8 *var_s0_2;
    s8 *var_s0_3;
    s8 *var_s0_4;
    s8 *var_s0_5;
    s8 *var_s0_6;
    s8 *var_v0_3;
    s8 temp_a1;
    s8 temp_s4;
    s8 temp_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 var_s2_2;
    void *var_a0;
    void *var_v0_4;

    if (D_800E0A96 != -1) {
        (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
        temp_t0 = D_800E0A95 - (D_800BE9E4 << 5);
        if (temp_t0 <= 0) {
            D_800E0A95 = 0;
            (*(s8 *)((char *)(gGameState) + 0x3F)) = (s8) D_800E0A96;
            D_800E0A96 = -1;
            return;
        }
        D_800E0A95 = (u8) temp_t0;
        sp3C = temp_t0;
        goto block_7;
    }
    var_v0 = D_800E0A95 + (D_800BE9E4 << 5);
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }
    D_800E0A95 = (u8) var_v0;
    sp3C = var_v0;
block_7:
    func_1504332C(0xFFU, 0xFFU, 0xFFU, sp3C & 0xFF);
    temp_a1 = D_8008FE40;
    var_s2 = 0;
    temp_s4 = (*(s32 *)((char *)(((*(&D_8008FEE3 + -*(&D_800AB691 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) * 4) + &D_800AB74C + temp_a1)) - 0x1));
    if (temp_a1 > 0) {
        var_s0 = &D_8008FE44;
        do {
            temp_v1 = *var_s0;
            if (temp_v1 >= 0) {
                temp_v0 = D_8008FDA0;
                var_a0 = gGameState + (temp_v1 * 2);
                if ((*(s32 *)((char *)(var_a0) + 0x22)) & 9) {
                    D_8008FDA0 = temp_v0 + 1;
                    if (temp_s4 >= (temp_a1 + D_8008FDA0)) {
                        func_10010F30(0x4FF, 0x4650, 0x40, 0, 0);
                        var_a0 = gGameState + (*var_s0 * 2);
                    }
                }
                if ((*(s32 *)((char *)(var_a0) + 0x22)) & 6) {
                    D_8008FDA0 = temp_v0 - 1;
                    if (D_8008FDA0 >= 0) {
                        func_10010F30(0x4FF, 0x4650, 0x40, 0, 0);
                    }
                }
                if (temp_v0 < 0) {
                    D_8008FDA0 = 0;
                }
            }
            var_s2 += 1;
            var_s0 += 1;
        } while (var_s2 < temp_a1);
    }
    var_s2_2 = temp_a1;
    var_v0_2 = temp_a1 + D_8008FDA0;
    if (temp_s4 < var_v0_2) {
        D_8008FDA0 = temp_s4 - temp_a1;
        var_v0_2 = temp_a1 + D_8008FDA0;
    }
    var_s4 = var_v0_2;
    if (var_v0_2 < 2) {
        var_s4 = 2;
    }
    D_8008FDA0 = var_s4 - temp_a1;
    if (temp_a1 < var_s4) {
        temp_t9 = (var_s4 - temp_a1) & 3;
        if (temp_t9 != 0) {
            var_s0_2 = &(&D_8008FE44)[temp_a1];
            var_v0_3 = temp_a1 + &D_800E0C00;
            do {
                var_s2_2 += 1;
                *var_s0_2 = -2;
                *var_v0_3 = 0;
                var_s0_2 += 1;
                var_v0_3 += 1;
            } while ((temp_t9 + temp_a1) != var_s2_2);
            if (var_s2_2 != var_s4) {
                goto block_28;
            }
        } else {
block_28:
            var_s0_3 = &(&D_8008FE44)[var_s2_2];
            var_v0_4 = var_s2_2 + &D_800E0C00;
            do {
                var_v0_4 = (char *)(var_v0_4) + 4;
                (*(s32 *)((char *)(var_s0_3) + 0x1)) = -2;
                (*(s32 *)((char *)(var_v0_4) - 0x3)) = 0;
                (*(s32 *)((char *)(var_s0_3) + 0x2)) = -2;
                (*(s32 *)((char *)(var_v0_4) - 0x2)) = 0;
                (*(s32 *)((char *)(var_s0_3) + 0x3)) = -2;
                (*(s32 *)((char *)(var_v0_4) - 0x1)) = 0;
                var_s0_3 += 4;
                (*(s32 *)((char *)(var_s0_3) - 0x4)) = -2;
                (*(s32 *)((char *)(var_v0_4) - 0x4)) = 0;
            } while (var_v0_4 != (var_s4 + &D_800E0C00));
        }
    }
    var_s2_3 = var_s4;
    if (var_s4 < 0x10) {
        temp_t6 = (0x10 - var_s4) & 3;
        if (temp_t6 != 0) {
            var_s0_4 = &(&D_8008FE44)[var_s2_3];
            do {
                var_s2_3 += 1;
                *var_s0_4 = -1;
                var_s0_4 += 1;
            } while ((temp_t6 + var_s4) != var_s2_3);
            if (var_s2_3 != 0x10) {
                goto block_35;
            }
        } else {
block_35:
            var_s0_5 = &(&D_8008FE44)[var_s2_3];
            do {
                var_s0_5 += 4;
                (*(s32 *)((char *)(var_s0_5) - 0x4)) = -1;
                (*(s32 *)((char *)(var_s0_5) - 0x3)) = -1;
                (*(s32 *)((char *)(var_s0_5) - 0x2)) = -1;
                (*(s32 *)((char *)(var_s0_5) - 0x1)) = -1;
            } while ((char *)(var_s0_5) != (char *)(&D_8008FE54));
        }
    }
    if ((sp3C == 0xFF) && ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x10)) {
        D_800E0B94 = 7;
        D_8008FD74 = 8;
        func_10010F30(0x500, 0x7D00, 0x40, 0, 0);
        if (*(&D_800AB692 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA)) == -1) {
            D_800E0A88 = func_151E2834;
        } else {
            D_800E0A88 = func_151E4314;
        }
    }
    func_15042D94(0x94, 0x55, 1, &D_800AB858, 0x1A);
    var_s2_4 = 0;
    var_s1 = (-(D_8008FE40 * 0xD) - (D_8008FDA0 * 0xA)) + 0xA1;
    if (var_s4 > 0) {
        var_s0_6 = &D_8008FE44;
        do {
            func_150432FC(var_s1, 0x82);
            temp_v1_2 = *var_s0_6;
            if (temp_v1_2 >= 0) {
                func_15042E3C(&D_800AB85C, temp_v1_2 + 1);
                var_s1 += 0x1A;
            } else {
                func_15042E3C(&D_800AB860, 5);
                var_s1 += 0x14;
            }
            var_s2_4 += 1;
            var_s0_6 += 1;
        } while (var_s2_4 != var_s4);
    }
    if ((sp3C == 0xFF) && ((*(s32 *)((char *)(gGameState) + 0x20)) & 0x20)) {
        D_800E0A96 = 4;
    }
    (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
}

void func_151E1744(void) {
    void *sp;
    s32 unksp5A;
    s32 unksp5F;
    s32 sp84[64];
    s32 sp8C[64];
    s32 spC4;
    void * spA8;
    s8 spA0;
    s16 sp96;
    s32 sp80;
    void * sp7D;
    s8 sp7C;
    void * sp7A;
    s8 sp79;
    s8 sp78;
    s32 sp74;
    f32 *sp64;
    s8 *sp60;                                       /* compiler-managed */
    s32 sp5C;
    s32 sp58;
    s8 *sp44;
    s16 *temp_a1;
    s16 *temp_a1_3;
    s16 *var_s3_2;
    s16 *var_s3_3;
    s16 *var_v0_2;
    s16 temp_a3_2;
    s16 temp_s1;
    s16 var_s0;
    s16 var_s1_2;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_t0;
    s32 var_s2;
    s32 var_t0;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s8 *temp_a2;
    s8 *temp_v0_2;
    s8 *temp_v0_9;
    s8 *temp_v1_2;
    s8 *var_a3;
    s8 *var_a3_2;
    s8 *var_a3_3;
    s8 *var_t1;
    s8 *var_t1_2;
    s8 *var_t1_3;
    s8 *var_t1_4;
    s8 *var_v0;
    s8 *var_v0_3;
    s8 *var_v1_2;
    s8 *var_v1_3;
    s8 *var_v1_5;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a2_2;
    s8 temp_s3;
    s8 temp_t0_2;
    s8 temp_t8;
    s8 temp_v0_10;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_8;
    s8 temp_v1_3;
    s8 var_a0;
    s8 var_a1;
    s8 var_a1_2;
    s8 var_ra;
    s8 var_s1;
    s8 var_s2_2;
    s8 var_s3;
    s8 var_v1_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v1;
    void **var_a2;
    void **var_a2_2;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_7;

    sp74 = 0;
    sp80 = D_8008FF34;
    if (D_800E0A96 != -1) {
        (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
        temp_t0 = D_800E0A95 - (D_800BE9E4 << 5);
        if (temp_t0 <= 0) {
            D_800E0A95 = 0;
            (*(s8 *)((char *)(gGameState) + 0x3F)) = (s8) D_800E0A96;
            D_800E0A96 = -1;
            return;
        }
        D_800E0A95 = (u8) temp_t0;
        spC4 = temp_t0;
        goto block_7;
    }
    var_v1 = D_800E0A95 + (D_800BE9E4 << 5);
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    D_800E0A95 = (u8) var_v1;
    spC4 = var_v1;
block_7:
    temp_a3 = spC4 & 0xFF;
    sp5C = temp_a3;
    func_1504332C(0xFFU, 0xFFU, 0xFFU, (u8) temp_a3);
    temp_v0 = (*(&D_800AB691 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA)) * 0xC) + &D_800AB710;
    var_ra = (*(s32 *)((char *)(temp_v0) + 0x7));
    D_800E0BB0 = (*(s32 *)((char *)(temp_v0) + 0x0));
    (*(s8 *)((char *)&(D_800E0BC8) + 0x0)) = (s8) (*(s8 *)((char *)(temp_v0) + 0x8));
    (*(s8 *)((char *)&(D_800E0BC8) + 0x1)) = (s8) (*(s8 *)((char *)(temp_v0) + 0x9));
    (*(s8 *)((char *)&(D_800E0BC8) + 0x2)) = (s8) (*(s8 *)((char *)(temp_v0) + 0xA));
    (*(s8 *)((char *)&(D_800E0BC8) + 0x3)) = (s8) (*(s8 *)((char *)(temp_v0) + 0xB));
    if (D_8008FE40 < 3) {
        var_s1 = (*(s32 *)((char *)(temp_v0) + 0x1));
        var_s3 = (*(s32 *)((char *)(temp_v0) + 0x2));
        var_a1 = (*(s32 *)((char *)(temp_v0) + 0x3));
    } else {
        var_s1 = (*(s32 *)((char *)(temp_v0) + 0x4));
        var_s3 = (*(s32 *)((char *)(temp_v0) + 0x5));
        var_a1 = (*(s32 *)((char *)(temp_v0) + 0x6));
    }
    var_v0 = &sp7C;
    do {
        *var_v0 = var_a1;
        if ((var_ra != 0) && ((u32) var_v0 >= (u32) &sp7D)) {
            *var_v0 = var_ra;
        }
        var_v0 += 1;
    } while ((u32) var_v0 < (u32) &sp80);
    var_v1_2 = &spA0;
    var_v0_2 = &sp84[0];
    if (D_800E0BB0 > 0) {
        temp_a1 = &var_v0_2[D_800E0BB0];
        do {
            var_v0_2 += 2;
            *var_v1_2 = 0;
            (*(s32 *)((char *)(var_v0_2) - 0x2)) = 0x6E;
            var_v1_2 += 1;
        } while ((u32) var_v0_2 < (u32) temp_a1);
    }
    sp58 = (s32) D_8008FE40;
    sp64 = gGameState;
    if (D_8008FE40 > 0) {
        var_a2 = &D_800E0C00;
        do {
            temp_t8 = *var_a2;
            var_a2 = (char *)(var_a2) + 1;
            temp_v0_2 = &(&spA0)[temp_t8];
            *temp_v0_2 += 1;
        } while ((u32) var_a2 < (u32) (D_8008FE40 + &D_800E0C00));
    }
    if (sp58 < 0x10) {
        var_t1 = &(&D_8008FE44)[sp58];
        do {
            var_t1 += 1;
            (*(s32 *)((char *)(var_t1) - 0x1)) = -1;
        } while ((u32) var_t1 < (u32) &D_8008FE54);
    }
    var_s2 = 0;
    if (sp58 > 0) {
        var_t1_2 = &D_8008FE44;
        do {
            temp_v0_3 = *var_t1_2;
            if (temp_v0_3 >= 0) {
                temp_a2 = &D_800E0C00 + var_s2;
                temp_a1_2 = sp64 + (temp_v0_3 * 2);
                temp_v1 = (*(s32 *)((char *)(temp_a1_2) + 0x22));
                temp_a0 = *temp_a2;
                if (temp_v1 & 0xF) {
                    sp74 = 0x4FF;
                }
                if (temp_v1 & 8) {
                    *temp_a2 = temp_a0 + 1;
                }
                if ((*(s32 *)((char *)(temp_a1_2) + 0x22)) & 4) {
                    *temp_a2 -= 1;
                }
                if ((*(s32 *)((char *)(temp_a1_2) + 0x22)) & 2) {
                    D_8008FDA0 += 1;
                }
                if ((*(s32 *)((char *)(temp_a1_2) + 0x22)) & 1) {
                    D_8008FDA0 -= 1;
                }
                temp_v1_2 = &(&spA0)[temp_a0];
                if (D_8008FDA0 < 0) {
                    D_8008FDA0 = 0;
                    sp74 = 0;
                }
                *temp_a2 &= D_800E0BB0 - 1;
                temp_a0_2 = *temp_a2;
                var_v0_3 = &(&spA0)[temp_a0_2];
                var_a1_2 = *var_v0_3;
                if (var_a1_2 >= (&sp7C)[temp_a0_2]) {
                    *temp_a2 = temp_a0;
                    var_v0_3 = &(&spA0)[*temp_a2];
                    var_a1_2 = *var_v0_3;
                }
                *var_v0_3 = var_a1_2 + 1;
                *temp_v1_2 -= 1;
            }
            var_s2 += 1;
            var_t1_2 += 1;
        } while (var_s2 < sp58);
    }
    D_800E0BB1 = 1;
    if (D_800E0BB0 > 0) {
        var_v1_3 = &spA0;
        do {
            temp_v0_4 = *var_v1_3;
            var_v1_3 += 1;
            if (D_800E0BB1 < temp_v0_4) {
                D_800E0BB1 = temp_v0_4;
            }
        } while ((u32) var_v1_3 < (u32) &(&spA0)[D_800E0BB0]);
    }
    D_800E0BB1 += D_8008FDA0;
    var_a3 = &sp78;
    var_v0_4 = D_800E0BB1 * D_800E0BB0;
    if (var_v0_4 < var_s1) {
        do {
            D_800E0BB1 += 1;
            D_8008FDA0 += 1;
            var_v0_4 = D_800E0BB1 * D_800E0BB0;
        } while (var_v0_4 < var_s1);
    }
    if (var_s3 < var_v0_4) {
        do {
            D_800E0BB1 -= 1;
            D_8008FDA0 -= 1;
            if (D_8008FDA0 < 0) {
                D_8008FDA0 = 0;
            }
        } while (var_s3 < (D_800E0BB1 * D_800E0BB0));
    }
    if ((var_ra != 0) && (D_800E0BB1 == 1)) {
        var_ra = 1;
    }
    do {
        var_a0 = D_800E0BB1;
        if (((char *)(var_a3) == (char *)(&sp79)) && (var_ra != 0)) {
            var_a0 = var_ra;
        }
        var_a3 += 1;
        (*(s32 *)((char *)(var_a3) - 0x1)) = var_a0;
    } while ((u32) var_a3 < (u32) &sp7C);
    if (D_800E0BB0 == 2) {
        temp_v0_5 = (*(s32 *)((char *)(sp64) + 0x20));
        if (temp_v0_5 & 0x40) {
            D_8008FDC4 += 1;
        } else if (temp_v0_5 & 0x80) {
            D_8008FDC4 -= 1;
        }
        if (sp58 >= 3) {
            D_8008FDC4 = 0;
        }
        temp_a2_2 = -D_800E0BB1;
        if (D_8008FDC4 < temp_a2_2) {
            D_8008FDC4 = temp_a2_2;
        } else if (D_800E0BB1 < D_8008FDC4) {
            D_8008FDC4 = D_800E0BB1;
        } else if ((*(s32 *)((char *)(sp64) + 0x20)) & 0xC0) {
            sp74 = 0x4FF;
        }
        sp78 += D_8008FDC4;
        sp79 -= D_8008FDC4;
        var_a3_2 = &sp78;
        do {
            var_v1_4 = 8;
            if (((char *)(var_a3_2) == (char *)(&sp79)) && (var_ra != 0)) {
                var_v1_4 = var_ra;
            }
            if (*var_a3_2 <= 0) {
                *var_a3_2 = 1;
            }
            if (var_v1_4 < *var_a3_2) {
                *var_a3_2 = var_v1_4;
            }
            var_a3_2 += 1;
        } while ((char *)(var_a3_2) != (char *)(&sp7A));
    }
    temp_lo = 0x128 / (s8) D_800E0BB0;
    var_s1_2 = (s16) ((s16) temp_lo >> 1);
    var_s0 = unksp5A;
    var_s2_2 = 0;
    if (D_800E0BB0 > 0) {
        var_v1_5 = &spA0;
        var_a3_3 = &sp78;
        var_s3_2 = &sp8C[0];
        do {
            temp_a0_3 = *var_a3_3;
            *var_s3_2 = var_s1_2;
            var_s1_2 += (s16) temp_lo;
            if (*var_v1_5 < temp_a0_3) {
                do {
                    (&D_8008FE44)[var_s0] = -2;
                    *(&D_800E0C00 + var_s0) = var_s2_2;
                    *var_v1_5 += 1;
                    var_s0 += 1;
                } while (*var_v1_5 < temp_a0_3);
            }
            var_s2_2 += 1;
            var_v1_5 += 1;
            var_a3_3 += 1;
            var_s3_2 += 2;
        } while (var_s2_2 < D_800E0BB0);
        var_s2_2 = 0;
    }
    if (spC4 == 0xFF) {
        temp_v0_6 = (*(s32 *)((char *)(sp64) + 0x20));
        if (temp_v0_6 & 0x10) {
            D_800E0B94 = 7;
            D_800E0A88 = func_151E4314;
            D_8008FD74 = 8;
            sp74 = 0x500;
        } else if (temp_v0_6 & 0x20) {
            D_800E0A96 = 4;
        }
    }
    (*(u16 *)((char *)(sp64) + 0x20)) = (u16) ((*(u16 *)((char *)(sp64) + 0x20)) & 0xFFDF);
    func_1504332C(0xFFU, 0xFFU, 0U, unksp5F);
    func_150432FC(0x94, (s16) (((D_800E0BB0 == 4) << 5) + 0x78));
    func_15042E3C(&D_800AB864, 0x1A);
    var_s3_3 = &sp8C[0];
    if (D_800E0BB0 > 0) {
        sp64 = &D_800E0BC8;
        do {
            temp_s1 = *var_s3_3;
            temp_v0_7 = ((*(s32 *)((char *)(sp64) + 0x0)) * 3) + &D_800AB62C;
            func_1504332C((*(s32 *)((char *)(temp_v0_7) + 0x0)), (*(s32 *)((char *)(temp_v0_7) + 0x1)), (*(s32 *)((char *)(temp_v0_7) + 0x2)), unksp5F);
            func_150432FC(temp_s1, 0x50);
            temp_v0_8 = (*(s32 *)((char *)(sp64) + 0x0));
            if (temp_v0_8 == 4) {
                func_15042E3C(&D_800AB868, 9);
            } else if (temp_v0_8 == 5) {
                func_15042E3C(&D_800AB86C, 8);
            } else if (temp_v0_8 == 7) {
                func_15042E3C(&D_800AB870, 0xA);
            } else if (temp_v0_8 == 8) {
                func_15042E3C(&D_800AB874, 0xB);
            } else if (temp_v0_8 == 9) {
                func_15042E3C(&D_800AB878, 0x34);
            } else {
                if (temp_v0_8 < 4) {
                    var_t0 = 0x59;
                } else {
                    var_t0 = 0x4C;
                }
                func_15042E3C(&D_800AB87C, temp_v0_8 + var_t0);
            }
            var_s2_2 += 1;
            sp64 += 1;
            var_s3_3 += 2;
        } while (var_s2_2 < D_800E0BB0);
        var_s2_2 = 0;
    }
    temp_s3 = func_151E24F0(&spA8);
    func_1504332C(0xFFU, 0xFFU, 0xFFU, unksp5F);
    if (var_s0 > 0) {
        var_t1_3 = &D_8008FE44;
        var_a2_2 = &D_800E0C00;
        do {
            temp_t0_2 = *var_a2_2;
            temp_v0_9 = temp_t0_2 + &sp80;
            if (var_s0 == D_800E0BB0) {
                (*(s32 *)((char *)((char *)(sp) + temp_t0_2) + 0x80)) = 0;
            }
            temp_v1_3 = *temp_v0_9;
            temp_a1_3 = &(&sp84[0])[temp_t0_2];
            temp_a3_2 = *temp_a1_3;
            sp96 = temp_a3_2;
            *temp_v0_9 = -temp_v1_3;
            if (*temp_v0_9 < 0) {
                *temp_a1_3 = temp_a3_2 + 0x18;
            }
            sp60 = (s8 *) var_a2_2;
            sp44 = var_t1_3;
            func_150432FC((s16) (temp_v1_3 + (&sp8C[0])[temp_t0_2]), sp96);
            temp_v0_10 = *var_t1_3;
            if (temp_v0_10 >= 0) {
                sp60 = var_a2_2;
                sp44 = var_t1_3;
                func_15042E3C(&D_800AB880, temp_v0_10 + 1, (s8 *) var_a2_2);
                var_t1_4 = var_t1_3;
                if (temp_s3 != 0) {
                    sp44 = var_t1_4;
                    sp60 = var_a2_2;
                    func_15042E3C(&D_800AB884, (*(s32 *)((char *)((char *)(sp) + (var_s2_2 * 4)) + 0xA8)) + 1, (s8 *) var_a2_2);
                    goto block_124;
                }
            } else {
                sp60 = var_a2_2;
                sp44 = var_t1_3;
                func_15042E3C(&D_800AB88C, 5, (s8 *) var_a2_2);
block_124:
                var_t1_4 = sp44;
            }
            var_s2_2 += 1;
            var_a2_2 = (char *)(var_a2_2) + 1;
            var_t1_3 = var_t1_4 + 1;
        } while (var_s2_2 != var_s0);
    }
    if (sp74 != 0) {
        if (sp74 == 0x4FF) {
            var_v0_5 = 0x4650;
        } else {
            var_v0_5 = 0x7D00;
        }
        func_10010F30(sp74, var_v0_5 & 0xFFFF, 0x40, 0, 0);
    }
    if (D_800E0BB0 == 2) {
        func_15042D94(0x94, 0xB4, 0x81, &D_800AB890, 0x3A);
        func_15042D94(0x7B, 0xB4, 0x81, &D_800AB894, 0x3B);
        func_15042D94(0xAD, 0xB4, 0x81, &D_800AB898, 0x3C);
    }
}

void func_151E2284(void) {
    D_8008FD80 = 3;
    func_151E530C();
    func_151E43DC();
    D_8008FD80 = 0;
}

/*
Decompilation failure in function func_151E22BC:

Found jr instruction at 20AE20.s line 5273, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function func_151E2404:

Found jr instruction at 20AE20.s line 5350, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s8 func_151E24F0(void * *arg0) {
    void * sp30;
    s8 sp2C;
    s8 sp28;
    s32 temp_a1;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t5;
    s32 var_a2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_5;
    s8 *var_a2_2;
    s8 *var_a3_2;
    s8 *var_a3_3;
    s8 *var_t0;
    s8 *var_t0_2;
    s8 *var_t0_3;
    s8 *var_t0_4;
    s8 *var_t0_5;
    s8 *var_t0_6;
    s8 *var_t3;
    s8 temp_a3;
    s8 temp_t6;
    s8 temp_t6_2;
    s8 temp_t9;
    s8 temp_t9_2;
    s8 var_a2_5;
    s8 var_a3_4;
    s8 var_v1;
    void **var_t2;
    void *var_t2_2;
    void *var_t3_2;

    if (arg0 == NULL) {
        (*(s32 *)((char *)&(D_800E0BCE) + 0x0)) = 0;
        (*(s32 *)((char *)&(D_800E0BCE) + 0x1)) = 0;
    }
    if (*(&D_800AB694 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA)) == 8) {
        var_a2 = 0;
        var_v1 = 0;
        var_t0 = &sp2C;
        if (D_800E0BEE != 0) {
            do {
                var_t0 += 1;
                (*(s32 *)((char *)(var_t0) - 0x1)) = 0;
            } while ((u32) var_t0 < (u32) &sp30);
            var_t0_2 = &D_8008FE44;
            do {
                temp_a3 = *var_t0_2;
                var_t0_2 += 1;
                if (temp_a3 >= 0) {
                    var_v1 += 1;
                    (&sp2C)[temp_a3] = 1;
                    var_a2 = (var_a2 | (1 << temp_a3)) & 0xFF;
                }
            } while ((u32) var_t0_2 < (u32) &D_8008FE48);
            if (var_v1 < 3) {
                var_a3 = 0;
                if (D_800BE740 & ~var_a2 & 0xFF) {
                    var_a2_2 = &sp28;
                    do {
                        *var_a2_2 = 1;
                        if ((var_v1 == 1) && !(D_800BE740 & (1 << var_a3))) {
                            *var_a2_2 = 0;
                        }
                        var_a3 += 1;
                        var_a2_2 += 1;
                    } while (var_a3 < 4);
                    var_a2_3 = 0;
                    if (arg0 == NULL) {
                        temp_a1 = var_v1 * 2;
                        var_a2_4 = 0x10;
                        if (temp_a1 < 0x11) {
                            temp_t5 = -((0x11 - temp_a1) & 3);
                            if (temp_t5 != 0) {
                                temp_t1 = 0x10 - var_v1;
                                var_t2 = &D_800E0C00 + 0x10;
                                var_t3 = temp_t1 + &D_800E0C00;
                                var_t0_3 = &(&D_8008FE44)[temp_t1];
                                var_a3_2 = &D_8008FE44 + 0x10;
                                do {
                                    temp_t9 = *var_t0_3;
                                    temp_t6 = *var_t3;
                                    var_a2_4 -= 1;
                                    var_a3_2 -= 1;
                                    var_t0_3 -= 1;
                                    var_t2 = (char *)(var_t2) - 1;
                                    var_t3 -= 1;
                                    (*(s32 *)((char *)(var_a3_2) + 0x1)) = temp_t9;
                                    (*(s32 *)((char *)(var_t2) + 0x1)) = temp_t6;
                                } while ((temp_t5 + 0x10) != var_a2_4);
                                if ((var_a2_4 + 1) != temp_a1) {
                                    goto block_23;
                                }
                            } else {
block_23:
                                temp_t1_2 = var_a2_4 - var_v1;
                                var_t0_4 = &(&D_8008FE44)[temp_t1_2];
                                var_t3_2 = temp_t1_2 + &D_800E0C00;
                                var_a3_3 = &(&D_8008FE44)[var_a2_4];
                                var_t2_2 = var_a2_4 + &D_800E0C00;
                                do {
                                    var_t2_2 = (char *)(var_t2_2) - 4;
                                    *var_a3_3 = (*(s32 *)((char *)(var_t0_4) + 0x0));
                                    (*(s8 *)((char *)(var_t2_2) + 0x4)) = (s8) (*(s8 *)((char *)(var_t3_2) + 0x0));
                                    var_a3_3 -= 4;
                                    (*(s8 *)((char *)(var_t2_2) + 0x3)) = (s8) (*(s8 *)((char *)(var_t3_2) - 0x1));
                                    (*(s8 *)((char *)(var_a3_3) + 0x3)) = (s8) (*(s8 *)((char *)(var_t0_4) - 0x1));
                                    temp_t6_2 = (*(s32 *)((char *)(var_t0_4) - 0x2));
                                    var_t0_4 -= 4;
                                    (*(s32 *)((char *)(var_a3_3) + 0x2)) = temp_t6_2;
                                    (*(s8 *)((char *)(var_t2_2) + 0x2)) = (s8) (*(s8 *)((char *)(var_t3_2) - 0x2));
                                    temp_t9_2 = (*(s32 *)((char *)(var_t3_2) - 0x3));
                                    var_t3_2 = (char *)(var_t3_2) - 4;
                                    (*(s32 *)((char *)(var_t2_2) + 0x1)) = temp_t9_2;
                                    (*(s8 *)((char *)(var_a3_3) + 0x1)) = (s8) (*(s8 *)((char *)(var_t0_4) + 0x1));
                                } while (var_t2_2 != (temp_a1 - 1 + &D_800E0C00));
                            }
                        }
                        var_a2_5 = var_v1;
                        var_a3_4 = 0;
                        if (var_v1 < temp_a1) {
                            var_t0_5 = &sp2C;
loop_27:
                            if (*var_t0_5 == 0) {
                                temp_t1_3 = var_a2_5 - var_v1;
                                if ((&sp28)[var_a3_4] != 0) {
                                    (&D_8008FE44)[var_a2_5] = var_a3_4;
                                    *(&D_800E0C00 + var_a2_5) = *(&D_800E0C00 + temp_t1_3);
                                    *(&D_800E0BCE + temp_t1_3) = var_a2_5;
                                    (D_80087270)[var_a2_5] = 0xA;
                                    var_a2_5 += 1;
                                }
                            }
                            var_a3_4 += 1;
                            var_t0_5 += 1;
                            if (var_a3_4 < 4) {
                                if (var_a2_5 >= temp_a1) {
                                    return var_v1;
                                }
                                goto loop_27;
                            }
                            goto block_40;
                        }
                        goto block_40;
                    }
                    var_a3_5 = 0;
                    if (var_v1 > 0) {
                        var_t0_6 = &sp2C;
loop_35:
                        if ((*var_t0_6 == 0) && ((&sp28)[var_a3_5] != 0)) {
                            *((char *)(arg0) + (var_a2_3 * 4)) = var_a3_5;
                            var_a2_3 += 1;
                        }
                        var_a3_5 += 1;
                        var_t0_6 += 1;
                        if ((var_a3_5 < 4) && (var_a2_3 < var_v1)) {
                            goto loop_35;
                        }
                    }
block_40:
                    return var_v1;
                }
            }
            goto block_41;
        }
    }
block_41:
    return 0;
}

void func_151E2834(s32 arg0, s8 *arg1, f32 *arg2) {
    s32 sp4C;
    s32 sp40;
    s32 sp38;
    void *sp30;
    s8 *sp24;
    void * *var_v1_4;
    f32 *var_a2;
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_t8_2;
    s32 temp_a1;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_ra;
    s32 var_v0_3;
    s32 var_v0_6;
    s8 *temp_a2;
    s8 *var_a1;
    s8 *var_a1_2;
    s8 *var_a1_3;
    s8 *var_a1_4;
    s8 *var_a1_5;
    s8 *var_a3;
    s8 *var_v0;
    s8 *var_v0_4;
    s8 *var_v0_5;
    s8 *var_v1;
    s8 *var_v1_2;
    s8 *var_v1_3;
    s8 temp_t6;
    s8 temp_t8;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 var_v1_5;
    u16 var_v0_2;
    u8 temp_t7_3;
    void **var_a2_2;
    void *temp_t2;
    void *var_t2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    temp_t2 = ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA) + &D_800AB68C;
    if ((*(s32 *)((char *)&(D_800E0BE0) + 0x3)) < 3) {
        (*(s32 *)((char *)&(D_800E0BE0) + 0x3)) = 0;
    }
    var_a3 = &D_8008FD70;
    if (D_8008FD9C != 0) {
        var_a3 = (s8 *) D_8008FD70;
        temp_t0 = 0x10 - (s32)(var_a3);
        if (var_a3 != NULL) {
            var_a0 = (s32) var_a3 * 2;
            if ((s32) var_a3 < temp_t0) {
                var_a1 = &(&D_8008FE44)[(s32)(var_a3)];
                var_v0 = (s8 *)(&D_800E0C00 + (s32)(var_a3));
                var_a2 = temp_t0 + &D_800E0C00;
                do {
                    temp_t8 = (&D_8008FE44)[var_a0];
                    temp_t6 = *(&D_800E0C00 + var_a0);
                    var_v0 += 1;
                    var_a0 += 1;
                    var_a1 += 1;
                    (*(s32 *)((char *)(var_a1) - 0x1)) = temp_t8;
                    (*(s32 *)((char *)(var_v0) - 0x1)) = temp_t6;
                } while ((u32) var_v0 < (u32) var_a2);
            }
        }
    }
    D_8008FD9C = 0;
    D_8008FD70 = 0;
    sp30 = temp_t2;
    func_15017790(var_a0, var_a1, var_a2, (s8) var_a3);
    D_800BE3E4 = 0;
    bzero(gGameState + 0x66, 0x30);
    bzero(gGameState + 0x46, 0x20);
    bzero(&D_800E0AD0, 0x20);
    D_800BEAC1 = 0;
    D_800BEAC0 = 0;
    D_800E0B94 = 0;
    D_8008FDA8 = -1;
    var_t2 = temp_t2;
    (*(s32 *)((char *)&(D_80084060) + 0x1)) = -1;
    (*(s32 *)((char *)&(D_80084060) + 0x2)) = -1;
    (*(s32 *)((char *)&(D_80084060) + 0x3)) = -1;
    sp40 = (s32) (*(s32 *)((char *)(var_t2) + 0x2));
    D_8008FDC8 = (*(s32 *)((char *)(var_t2) + 0x5)) < 0;
    temp_v0 = (*(s32 *)((char *)(var_t2) + 0x4));
    temp_a1 = *(&D_800AB754 + (temp_v0 * 4));
    D_8008FDC0 = *(&D_800AB77C + (temp_v0 * 2));
    D_8008FDBC = *(&D_800AB790 + ((*(s32 *)((char *)(var_t2) + 0x4)) * 2)) | 1;
    if (temp_a1 & 0x80000) {
        D_800D23A8 = (*(s32 *)((char *)&(D_800E0BE0) + 0x13));
    } else {
        D_800D23A8 = 0;
    }
    if (temp_a1 & 8) {
        D_8008FD78 = (*(s32 *)((char *)&(D_800E0BE0) + 0x3)) * 0xE10;
    } else {
        D_8008FD78 = 0;
    }
    if (temp_a1 & 0x10000) {
        D_800E0BD0 = (*(s32 *)((char *)&(D_800E0BE0) + 0x10));
    } else {
        D_800E0BD0 = 2;
    }
    if ((temp_a1 & 4) && (D_8008FD78 == 0)) {
        D_8008FDC0 = (u16) D_8008FDC0 | 2;
        D_8008FDBC &= 0xFFFE;
    }
    var_v0_2 = (u16) D_8008FDC0;
    temp_t8_2 = var_v0_2 | 0x1000;
    if (var_v0_2 & 0x80) {
        D_8008FDC0 = temp_t8_2;
        var_v0_2 = temp_t8_2 & 0xFFFF;
    }
    if (temp_a1 & 0x20000) {
        temp_t7 = var_v0_2 | 0x20;
        if ((*(s32 *)((char *)&(D_800E0BE0) + 0x11)) != 0) {
            D_8008FDC0 = temp_t7;
            var_v0_2 = temp_t7 & 0xFFFF;
        }
    }
    if (var_v0_2 & 0x100) {
        temp_t7_2 = var_v0_2 & 0xFEFF;
        if (D_8008FD78 != 0) {
            D_8008FDC0 = temp_t7_2;
            D_8008FDC0 = temp_t7_2 | 0x200;
        }
    }
    D_80087260 = (*(s32 *)((char *)&(D_800E0BE0) + 0x2));
    D_800D2130 = 3;
    D_80087264 = 0;
    D_800D2132 = 0;
    D_80087268 = (*(s32 *)((char *)&(D_800E0BE0) + 0x4));
    if ((*(s32 *)((char *)&(D_800E0BE0) + 0x3)) >= 3) {
        D_80087260 = 0x63;
    }
    if ((*(s32 *)((char *)(var_t2) + 0x8)) == 8) {
        var_v1 = D_80087270;
        do {
            var_v1 += 4;
            (*(s32 *)((char *)(var_v1) - 0x4)) = 8;
            (*(s32 *)((char *)(var_v1) - 0x3)) = 8;
            (*(s32 *)((char *)(var_v1) - 0x2)) = 8;
            (*(s32 *)((char *)(var_v1) - 0x1)) = 8;
        } while ((char *)(var_v1) != (char *)(D_80087280));
        sp30 = var_t2;
        D_8008FD70 = func_151E24F0(NULL);
    }
    var_ra = 1;
    D_8008FD88 = 1;
    if ((*(s32 *)((char *)&(D_8008FE44) + 0x1)) != -1) {
        var_ra = 3;
        (*(s8 *)((char *)&(D_80084060) + 0x1)) = (s8) (*(s8 *)((char *)&(D_8008FE44) + 0x1));
        D_8008FD88 += 1;
    }
    var_a1_2 = &D_8008FE48;
    var_a3_2 = 4;
    if ((*(s32 *)((char *)&(D_8008FE44) + 0x2)) != -1) {
        var_ra |= 4;
        D_8008FD88 += 1;
        (*(s8 *)((char *)&(D_80084060) + 0x2)) = (s8) (*(s8 *)((char *)&(D_8008FE44) + 0x2));
    }
    if ((*(s32 *)((char *)&(D_8008FE44) + 0x3)) != -1) {
        var_ra |= 8;
        (*(s8 *)((char *)&(D_80084060) + 0x3)) = (s8) (*(s8 *)((char *)&(D_8008FE44) + 0x3));
        D_8008FD88 += 1;
    }
    do {
        if (*var_a1_2 != -1) {
            var_ra |= 1 << var_a3_2;
            D_8008FD88 += 1;
        }
        var_a3_2 += 1;
        var_a1_2 += 1;
    } while (var_a3_2 < 0x10);
    if ((*(s32 *)((char *)(var_t2) + 0x8)) != 8) {
        var_v0_3 = 0;
        if (D_800E0B8C != 0) {
            var_a3_3 = 0;
            var_a1_3 = &D_8008FE44;
            if ((*(s32 *)((char *)&(D_8008FE44) + 0x0)) >= 0) {
                var_v1_2 = D_80087270;
                var_v0_4 = &D_800E0B90;
loop_46:
                var_a3_3 += 1;
                var_a1_3 += 1;
                temp_t7_3 = (*(s32 *)((char *)((&D_800AB57C + (*var_v0_4 * 8))) + 0x6));
                var_v1_2 += 1;
                var_v0_4 += 1;
                (*(s32 *)((char *)(var_v1_2) - 0x1)) = temp_t7_3;
                if (*var_a1_3 >= 0) {
                    if (var_a3_3 != 4) {
                        goto loop_46;
                    }
                }
            }
            var_v0_3 = var_a3_3;
        }
        var_a3_4 = var_v0_3;
        if (var_v0_3 < 0x10) {
            var_v1_3 = &(D_80087270)[var_v0_3];
            do {
                *var_v1_3 = (*(s32 *)((char *)(var_t2) + 0x8));
                temp_v0_2 = (*(s32 *)((char *)(gGameState) + 0x42));
                if (temp_v0_2 == 7) {
                    if ((&D_8008FE44)[var_a3_4] < -1) {
                        *var_v1_3 = 0xB;
                    }
                } else {
                    temp_a2 = var_a3_4 + &D_800E0C00;
                    if (temp_v0_2 == 2) {
                        if (*temp_a2 == 0) {
                            *var_v1_3 = 0xB;
                        }
                    } else if (temp_v0_2 == 8) {
                        if (*temp_a2 != 0) {
                            *var_v1_3 = 3;
                        } else {
                            sp38 = var_ra;
                            sp24 = var_v1_3;
                            sp4C = var_a3_4;
                            sp30 = var_t2;
                            *var_v1_3 = (random_u32(0xB) & 0xF) + 0x11;
                        }
                    } else if ((*temp_a2 != 0) && ((*(s32 *)((char *)(var_t2) + 0x8)) == 4)) {
                        *var_v1_3 = 3;
                    } else if (((&D_8008FE44)[var_a3_4] < -1) && ((*(s32 *)((char *)(var_t2) + 0x8)) == 0xB)) {
                        *var_v1_3 = (var_a3_4 & 3) + 0xC;
                    }
                }
                var_a3_4 += 1;
                var_v1_3 += 1;
            } while (var_a3_4 != 0x10);
        }
    }
    D_800E0B99 = 2;
    D_8008FD90 = 0;
    D_800E0AA8 = 0;
    var_a3_5 = 0;
    D_8008FD8C = D_8008FD88;
    if (D_8008FD88 > 0) {
        var_a1_4 = &D_8008FE44;
        do {
            if (*var_a1_4 >= 0) {
                D_8008FD90 += 1;
                D_800E0AA8 |= 1 << (s32)(*(&D_800E0C00 + var_a3_5));
            }
            var_a3_5 += 1;
            var_a1_4 += 1;
        } while (var_a3_5 < D_8008FD88);
    }
    D_8008FD94 = D_8008FD90;
    sp38 = var_ra;
    D_800BE618 = D_8008FD8C;
    bzero(&D_800E0BB8, 0x10);
    var_a1_5 = &D_800E0AA9;
    D_800E0AAA = -1;
    D_800E0AA9 = 4;
    var_v0_5 = &D_800E0AC0;
    var_v1_4 = &D_800E0AB0;
    do {
        var_v0_5 += 1;
        var_v1_4 = (char *)(var_v1_4) + 1;
        (*(s32 *)((char *)(var_v1_4) - 0x1)) = -1;
        (*(s32 *)((char *)(var_v0_5) - 0x1)) = 0;
    } while ((u32) var_v0_5 < (u32) &D_800E0AD0);
    var_a0_2 = 0;
    if (D_8008FDC8 != 0) {
        var_v1_5 = 0;
        D_800E0AA9 = D_8008FD8C;
        if (D_8008FD88 > 0) {
            var_a2_2 = &D_800E0C00;
            var_a1_5 = &D_8008FE44;
            do {
                temp_v0_3 = *var_a1_5;
                if (temp_v0_3 >= 0) {
                    *var_a2_2 = temp_v0_3;
                    var_a0_2 |= 1 << (s32)(*var_a2_2);
                } else {
                    var_v0_6 = 1 << var_v1_5;
                    if (var_v0_6 & var_a0_2) {
                        do {
                            var_v1_5 += 1;
                            var_v0_6 = 1 << var_v1_5;
                        } while (var_v0_6 & var_a0_2);
                    }
                    *var_a2_2 = var_v1_5;
                    var_a0_2 |= var_v0_6;
                    var_v1_5 += 1;
                }
                var_a2_2 = (char *)(var_a2_2) + 1;
                var_a1_5 += 1;
            } while ((u32) var_a2_2 < (u32) (D_8008FD88 + &D_800E0C00));
        }
    }
    sp38 = var_ra;
    (*(s32 *)((char *)&(D_800E0C10) + 0x0)) = -1;
    (*(s32 *)((char *)&(D_800E0C10) + 0x2)) = -1;
    (*(s32 *)((char *)&(D_800E0C18) + 0x0)) = -1;
    (*(s32 *)((char *)&(D_800E0C18) + 0x4)) = -1;
    (*(s32 *)((char *)&(D_800E0AA0) + 0x0)) = 0;
    (*(s32 *)((char *)&(D_800E0AA0) + 0x2)) = 0;
    func_151E7EF8(&D_800E0AA0, var_a1_5);
    D_800E0C20 = 0;
    D_800D2E40 = 0;
    D_8008FD7C = D_80087270;
    func_1501C730(6, sp40, 0U, *(&D_8008FF37 + D_8008FD88), var_ra);
}

void func_151E30C4(void) {
    s32 sp2C;
    s32 sp28;
    s32 sp24;

    sp24 = 0;
    if (D_8008FDB4 != 0) {
        sp28 = (s32) D_8008FDAC;
    } else {
        func_1509CF28(D_8008FF00, &sp2C);
        func_1509D08C(D_8008FF00, (s32) (u8) D_8008FF04, &sp28, &sp24);
        func_1509D054();
    }
    func_15017790();
    func_1509CC94(sp28);
    func_1509CDDC(sp28);
    D_800BE9F4 = func_1509CA30(sp28);
    func_15085710(0, 9, sp24);
    D_800BE3E4 = sp24;
    D_800DD2C0 = func_1509CA50(sp28);
    if (D_8008FDB4 == 2) {
        D_800DD2C0 = D_800E0BD1;
    }
    D_8008FD70 = 0;
    D_800D23A8 = 0;
    D_8008FDBC = 0;
    D_8008FDA8 = -1;
    D_800E0B94 = 0;
    D_800E0B99 = 1;
    D_8008FD8C = 1;
    D_8008FD90 = 1;
    D_8008FD94 = 1;
    D_800BE618 = 1;
    D_80087260 = 3;
    if (D_800E9D00 & 0x200) {
        D_80087260 = 0x33;
    }
    D_80087270[0] = 0;
    D_800D18A8 = 0;
    D_800E0BB1 = 1;
    func_151E7EF8();
    D_800D2E40 = 1;
    func_1501C730(6, D_800BE9F4, func_1509CA50(sp28), 0, 1);
}

void func_151E327C(void) {
    D_80087260 = 3;
    if (D_800E9D00 & 0x200) {
        D_80087260 = 0x33;
    }
    D_80087270[0] = 0;
    D_8008FD8C = 1;
    D_8008FD90 = 1;
    D_8008FD94 = 1;
    D_8008FDBC = 0;
    D_800BE618 = 1;
    D_800D23A8 = 0;
    D_800E0B94 = 0;
    D_800D2E40 = 0;
    func_1501C730(6, (s32) D_800BE3DF, D_800BE3E0, 0, 1);
    D_800E0B99 = 1;
    D_800E0BB1 = 1;
    func_151E7EF8();
}

/*
Decompilation failure in function func_151E3344:

Found jr instruction at 20AE20.s line 7030, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_151E4264(void) {
    if (D_8008FD80 != 0) {
        D_8008FD80 = 0;
        return;
    }
    func_151E530C();
    if (((s16) D_800E0B9A != 0) || (D_800C35EA != 1)) {
        if ((D_800C35EA == 1) && (func_151F2CDC() == 1)) {
            func_151F2D6C(0, 0x2DE0);
        }
        D_800E0B94 = 7;
        D_800E0A88 = func_151E2834;
        D_8008FD74 = 8;
    }
}

void func_151E4314(void) {
    s16 *var_v0;
    s8 temp_v1;
    s8 var_a1;

    temp_v1 = *(&D_800AB692 + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA));
    if (temp_v1 >= 0) {
        if (D_800E0C00 != 0) {
            var_v0 = (temp_v1 * 4) + &D_800AB7A4;
            var_a1 = (*(s32 *)((char *)(var_v0) + 0x3));
        } else {
            var_v0 = (temp_v1 * 4) + &D_800AB7A4;
            var_a1 = (*(s32 *)((char *)(var_v0) + 0x2));
        }
        func_1501D348(*var_v0, var_a1, 0, 0, 0);
        D_8008FD80 = 1;
        D_800E0B94 = 5;
        D_8008FD8C = 1;
        D_8008FD90 = 1;
        return;
    }
    func_151E2834(0, NULL, 0);
}

void func_151E43DC(void) {
    s32 *sp38;
    s16 *sp34;
    s32 temp_t0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s8 *temp_s1;
    s8 *var_a0_2;
    s8 *var_s2;
    s8 *var_s2_2;
    s8 *var_s2_3;
    s8 *var_v0;
    s8 temp_s0;
    s8 temp_t4;
    s8 temp_t5;
    s8 temp_t6;
    s8 temp_t9;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v1_2;
    s8 var_a0;
    s8 var_a1;
    u8 temp_v1;
    void **var_s1_2;
    void *temp_t0;
    void *var_v0_4;

    temp_v1 = D_8008FD80;
    if (temp_v1 == 1) {
        temp_v0 = (*(s32 *)((char *)(gGameState) + 0x42));
        temp_t0 = (*(&D_800AB693 + (temp_v0 * 0xA)) * 4) + &D_800AB7BC;
        var_a1 = (*(s32 *)((char *)(temp_t0) + 0x2));
        if (temp_v0 == 0) {
            var_v1 = 1;
            var_s0 = 0;
            if (D_8008FD88 > 0) {
                var_s2 = &D_8008FE44;
                do {
                    if ((*var_s2 >= 0) && ((&D_800E0AC0)[(s32)(*(&D_800E0C00 + var_s0))] == 1)) {
                        var_v1 = 0;
                    }
                    var_s0 += 1;
                    var_s2 += 1;
                } while (var_s0 < D_8008FD88);
            }
            if (var_v1 != 0) {
                goto block_11;
            }
        } else if (D_800E0AC0 != 1) {
block_11:
            var_a1 = (*(s32 *)((char *)(temp_t0) + 0x3));
        }
        func_1501D348((*(s32 *)((char *)(temp_t0) + 0x0)), var_a1, 0, 0, 0);
        D_8008FD80 = 0;
        return;
    }
    temp_v0_2 = (*(s32 *)((char *)(gGameState) + 0x42));
    if ((temp_v0_2 != 0xB) && (temp_v0_2 != 0xC)) {
        func_151E530C(0);
    }
    if ((temp_v1 == 2) || (temp_v1 == 3) || (temp_v1 == 4)) {
        (*(s32 *)((char *)&(D_8008FDCC) + 0x0)) += D_800BE9E4 * 4;
        if ((*(s32 *)((char *)&(D_8008FDCC) + 0x0)) >= 0x100) {
            (*(s32 *)((char *)&(D_8008FDCC) + 0x0)) = 0xFF;
        }
        D_800E0BDC = 0xFF - (*(s32 *)((char *)&(D_8008FDCC) + 0x0));
        func_1504332C(0xFFU, 0xFFU, 0U, (*(s32 *)((char *)&(D_8008FDCC) + 0x0)) & 0xFF);
        func_15042D94(0x94, 0x14, 0x81, &D_800AB8CC, 0x4B);
        func_15042E3C(&D_800AB8D0);
        func_1504332C(0xFFU, 0xFFU, 0xFFU, (*(s32 *)((char *)&(D_8008FDCC) + 0x1)));
        func_150432FC(0x94, 0x32);
        if (D_8008FD80 == 4) {
            D_800DBFF0->unk2C = 0x80000;
        }
        temp_v0_3 = (*(s32 *)((char *)(gGameState) + 0x42));
        if (*(&D_800AB691 + (temp_v0_3 * 0xA)) < 0) {
            if ((temp_v0_3 == 0xB) || (temp_v0_3 == 0xC)) {
                var_s1 = 0x48;
                var_s0_2 = 0;
                if (D_8008FD88 > 0) {
                    var_s2_2 = &D_8008FE44;
                    do {
                        if (*var_s2_2 >= 0) {
                            sp38 = (var_s0_2 * 4) + &D_800E0C18;
                            sp34 = (var_s0_2 * 2) + &D_800E0C10;
                            func_15042D94(0x58, var_s1, 0x81, &D_800AB8D4, (*(s32 *)((char *)((D_800E0BD8 + ((&D_800E0AC0)[var_s0_2] * 4))) + 0x174)));
                            func_150916B4(0x8A, var_s1, *sp38, 0x80);
                            func_150916B4(0xBC, var_s1, (s32) *sp34, 0x80);
                            func_15042D94(0xA8, var_s1, 0x80, &D_800AB8E0);
                            func_15042D94(0xD6, var_s1, 0x80, &D_800AB8E4);
                            var_s1 += 0x12;
                        }
                        var_s0_2 += 1;
                        var_s2_2 += 1;
                    } while (var_s0_2 < D_8008FD88);
                }
            }
            goto block_59;
        }
        var_v1_2 = 0;
        var_s2_3 = &D_8008FE44;
        if (D_8008FD88 > 0) {
            do {
                temp_t5 = *var_s2_3;
                var_s2_3 += 1;
                if (temp_t5 >= 0) {
                    var_v1_2 += 1;
                }
            } while ((u32) var_s2_3 < (u32) &(&D_8008FE44)[D_8008FD88]);
        }
        var_a0 = 0;
        var_v0 = &D_800E0AC0;
        do {
            temp_t6 = *var_v0;
            var_v0 += 1;
            if (temp_t6 == 1) {
                var_a0 += 1;
            }
        } while ((u32) var_v0 < (u32) &D_800E0AC4);
        if ((s8) (var_a0 >= 2) != 0) {
            func_15042D94(0x94, 0x32, 0x81, &D_800AB8E8, 0x58);
            goto block_59;
        }
        if (var_v1_2 == 1) {
            func_15042D94(0x76, 0x32, 0x81, &D_800AB8EC, 0x52);
            var_s1_2 = &D_800E0C00;
            if ((&D_800E0AC0)[(s32)(D_800E0C00)] == 1) {
                var_v1_3 = 0x56;
            } else {
                var_v1_3 = 0x57;
            }
            func_15042D94(0xB2, 0x32, 0x81, &D_800AB8F0, var_v1_3);
        } else {
            var_s0_3 = 0;
            do {
                temp_s1 = &D_800E0BC8 + var_s0_3;
                if ((&D_800E0AC0)[var_s0_3] == 1) {
                    temp_v1_2 = *temp_s1;
                    if (temp_v1_2 == 4) {
                        var_v0_2 = -0xC;
                    } else {
                        var_v0_2 = 0;
                    }
                    func_15042D94(0x71 - var_v0_2, 0x32, 0x81, &D_800AB8F4, temp_v1_2 + 0x4C);
                    if (*temp_s1 == 4) {
                        var_v0_3 = 0x15;
                    } else {
                        var_v0_3 = 0;
                    }
                    func_15042D94(var_v0_3 + 0xB7, 0x32, 0x81, &D_800AB8F8, 0x56);
                    var_s0_3 = 4;
                }
                var_s0_3 += 1;
            } while (var_s0_3 < 4);
block_59:
            var_s1_2 = &D_800E0C00;
        }
        temp_s0 = D_800BE91A;
        if (((D_8008FF3C >= -0x1E) && (temp_s0 < -0x1E)) || ((D_8008FF3C < 0x1F) && (temp_s0 >= 0x1F))) {
            D_8008FE2C = 1 - D_8008FE2C;
            func_10010F30(0x62D, 0x4650, 0x40, 0, 0);
        }
        D_8008FF3C = temp_s0;
        func_15042D94(0x53, 0xB4, 1, &D_800AB8FC, (D_8008FE2C == 0) + 0x21);
        func_15042D94(0xD5, 0xB4, 1, &D_800AB900, (D_8008FE2C == 1) + 0xE);
        func_15042D94(0x94, 0xB4, 1, &D_800AB904, 0x1A);
        if (((s16) D_800E0B9A & 0x8000) || (D_800E0A90 >= 0x961)) {
            if ((D_800C35EA == 1) && (func_151F2CDC() == 1)) {
                func_151F2D6C(0, 0x2DE0);
            }
            if (D_800E0A90 >= 0x961) {
                D_8008FE2C = 1;
            }
            D_800E0B94 = 7;
            if (D_8008FE2C == 0) {
                if (D_8008FD70 != 0) {
                    temp_t0_2 = 0x10 - D_8008FD70;
                    var_v1_4 = D_8008FD70 * 2;
                    if (D_8008FD70 < temp_t0_2) {
                        var_a0_2 = &(&D_8008FE44)[D_8008FD70];
                        var_v0_4 = (char *)(var_s1_2) + D_8008FD70;
                        do {
                            temp_t9 = (&D_8008FE44)[var_v1_4];
                            temp_t4 = *((char *)(var_s1_2) + var_v1_4);
                            var_v0_4 = (char *)(var_v0_4) + 1;
                            var_v1_4 += 1;
                            var_a0_2 += 1;
                            (*(s32 *)((char *)(var_a0_2) - 0x1)) = temp_t9;
                            (*(s32 *)((char *)(var_v0_4) - 0x1)) = temp_t4;
                        } while ((u32) var_v0_4 < (u32) (temp_t0_2 + &D_800E0C00));
                    }
                    D_8008FD70 = 0;
                }
                D_800E0A88 = func_151E2834;
            } else {
                (*(s32 *)((char *)(gGameState) + 0x3F)) = 4;
                if (D_8008FD80 == 3) {
                    D_800E0B94 = 3;
                } else {
                    D_800E0A88 = func_151E4E00;
                }
            }
            D_8008FD74 = 8;
            D_8008FD80 = 0;
            func_151E557C();
            D_8008FD8C = 1;
            D_8008FD90 = 1;
        }
    } else if (((s16) D_800E0B9A != 0) || (D_800C3C8C == 2)) {
        (*(s32 *)((char *)&(D_8008FDCC) + 0x0)) = 0;
        D_8008FD80 = 2;
    }
    (*(u16 *)((char *)(gGameState) + 0x20)) = (u16) ((*(u16 *)((char *)(gGameState) + 0x20)) & 0xFFDF);
}

void func_151E4BD8(void) {
    s16 var_a1;
    s8 temp_a2;
    s8 var_v0;

    D_8008FE2C = 0;
    D_800BEAC1 = 0;
    D_8008FDA4 = 0;
    D_800E0A90 = 0;
    var_v0 = 0;
    temp_a2 = (*(s32 *)((char *)((&D_800AB68C + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) + 0x7));
    D_8008FDC0 = (u16) D_8008FDC0 & 0xF369;
    if ((*(s32 *)((char *)((&D_800AB68C + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) + 0x5)) >= 0) {
        if (D_800E0AC0 == 1) {
            var_v0 = 1;
        }
        if (D_800E0AC1 == 1) {
            var_v0 += 1;
        }
        if (D_800E0AC2 == 1) {
            var_v0 += 1;
        }
        if (D_800E0AC3 == 1) {
            var_v0 += 1;
        }
        var_v0 = var_v0 >= 2;
    }
    if ((temp_a2 < 0) || (var_v0 != 0)) {
        if ((temp_a2 == -2) && (D_800E0A86 == 0)) {
            D_800E0B94 = 6;
            D_8008FD80 = 2;
            D_8008FDC0 = 0;
            return;
        }
        var_a1 = 0x1D;
        if (var_v0 == 0) {
            D_800E0B94 = 3;
        } else {
            D_800E0B94 = 6;
            D_8008FD80 = 4;
        }
        goto block_19;
    }
    D_800E0B94 = 6;
    var_a1 = *(&D_800AB7BC + (temp_a2 * 4));
    D_8008FD80 = 1;
block_19:
    D_800D2E40 = 0;
    func_1501C730(6, (s32) var_a1, 0U, 0, 1);
    func_151E557C();
    D_8008FD8C = 1;
    D_8008FD90 = 1;
}

void func_151E4DC4(void) {
    D_800E0B94 = 0xA;
}

void func_151E4DD8(void) {
    if ((s16) D_800E0B9A & 0x8020) {
        D_800E0B94 = 4;
    }
}

void func_151E4E00(void) {
    D_8008FDCC = 0;
    func_151E557C();
    D_800E0B94 = 3;
    D_8008FDA4 = 0;
    D_8008FD80 = 0;
    D_800D2E40 = 0;
    func_1501C730(6, 0x1D, 0U, 0, 1);
}

void func_151E4E64(void) {
    func_151E530C();
    func_151E55A8();
    if (D_800E0A90 >= 0x4B1) {
        D_800E0B9A = (s16) D_800E0B9A | 0x8000;
    }
    if ((s16) D_800E0B9A != 0) {
        D_800E0B94 = 7;
        D_800E0A88 = func_151E4E00;
        D_8008FD74 = 8;
    }
}

void func_151E4EE8(void) {
    f32 var_f6;
    s32 var_v0_2;
    u8 temp_t7;
    u8 var_v0;

    var_v0 = D_800E0B96;
    var_f6 = (f32) var_v0;
    if ((s32) var_v0 < 0) {
        var_f6 += 4294967296.0f;
    }
    D_8008FDD0 = 1.0f - (var_f6 / 255.0f);
    if (D_8008FD74 == 0xFF) {
        if (D_800ABA2C < D_800DDDC8) {
            temp_t7 = var_v0 + D_800BE9E4;
            var_v0 = temp_t7 & 0xFF;
            D_800E0B96 = temp_t7;
            if ((s32) var_v0 < 0x55) {
                D_800DDDD8 = D_800ABA30;
            } else {
                D_800DDDD8 = D_800ABA34;
            }
        }
        if (!(D_800DDDC8 < 1.0f)) {
            if ((s32) var_v0 < 0x6E) {
                return;
            }
            goto block_14;
        }
    } else {
        if (var_v0 != 0xFF) {
            var_v0_2 = var_v0 + (D_800BE9E4 * D_8008FD74);
            if (var_v0_2 >= 0x100) {
                var_v0_2 = 0xFF;
            }
            D_800E0B96 = (u8) var_v0_2;
            return;
        }
block_14:
        D_800E0B96 = 0xFF;
        D_8008FD74 = 8;
        D_8008FDD0 = 1.0f;
        D_800E0A88((s32) &D_800E0B96, (s8 *)0xFF, &D_8008FDD0, 0);
    }
}

void func_151E5034(void) {
    (*(s32 *)((char *)(gGameState) + 0x0)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0x4)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0x2B)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x20)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x3E)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x3F)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x41)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x43)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x44)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x10)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0x2A)) = 0;
    (*(s32 *)((char *)(gGameState) + 0x14)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0x18)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0x1C)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0xC)) = 0.0f;
    (*(s32 *)((char *)(gGameState) + 0x8)) = 0.0f;
}

void func_151E50C8(void) {
    void * *var_v0;
    s8 *var_v1;
    s8 temp_t0;
    s8 temp_t1;
    s8 temp_t2;
    s8 temp_t9;

    var_v0 = &D_8008FE57;
    var_v1 = &D_800E0BE3;
    D_800E0BE2 = D_8008FE56;
    D_800E0BE2 = D_8008FE55;
    D_800E0BE2 = D_8008FE54;
    do {
        temp_t9 = (*(s32 *)((char *)(var_v0) + 0x0));
        temp_t0 = (*(s32 *)((char *)(var_v0) + 0x1));
        temp_t1 = (*(s32 *)((char *)(var_v0) + 0x2));
        temp_t2 = (*(s32 *)((char *)(var_v0) + 0x3));
        var_v0 = (char *)(var_v0) + 4;
        var_v1 += 4;
        (*(s32 *)((char *)(var_v1) - 0x4)) = temp_t9;
        (*(s32 *)((char *)(var_v1) - 0x3)) = temp_t0;
        (*(s32 *)((char *)(var_v1) - 0x2)) = temp_t1;
        (*(s32 *)((char *)(var_v1) - 0x1)) = temp_t2;
    } while ((char *)(var_v0) != (char *)(&D_8008FE6B));
    D_800E0A90 = 0;
    func_151E6BFC(&D_8008FE6B);
    if (gGameState == NULL) {
        gGameState = &D_800E0AF0;
        func_151E5034();
        if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 1) {
            (*(s8 *)((char *)(gGameState) + 0x2C)) = (s8) *(&D_800AB570 + (*(s8 *)((char *)(gGameState) + 0x2C)));
        }
    }
    func_15017790();
    D_800E0B94 = 0xB;
    D_800D2E40 = 0;
    func_1501C730(6, 0x25, 0U, 0, 1);
    D_800E0B95 = D_800E0B94;
}

void func_151E51EC(void) {
    u8 sp1F;

    D_8003C8E0 = 0x08000000;
    D_800E0BDC = 0xFF;
    sp1F = D_800E0B94;
    func_15042D78(0x81);
    D_800E0B9A = D_800BE930;
    if (D_8008FE28 != 0) {
        D_8008FE28 -= 1;
        D_800E0B9A = 0;
    }
    if (D_800E0B94 == 0) {
        func_151E6964(2);
    } else if (D_800E0B94 == 8) {
        func_151E6964(4);
    } else {
        func_151E6964(1);
    }
    ((s32 (*)())((char *)(&D_8008FDEC + (D_800E0B94 * 4))))();
    if (D_800E0B94 != 7) {
        D_800E0A90 += D_800BE9E4;
        if (sp1F != D_800E0B94) {
            D_800E0B95 = sp1F;
            D_800E0A90 = 0;
        }
    }
    D_8003C8E0 = 0;
}

void func_151E530C(void) {
    f32 temp_f0;
    s32 var_v1;
    s32 var_v1_2;

    if (D_800E0B94 != 2) {
        if (D_800E0B96 != 0) {
            var_v1 = D_800E0B96 - (D_800BE9E4 * D_8008FD74);
            if (var_v1 < 0) {
                var_v1 = 0;
            }
            D_800E0B96 = (u8) var_v1;
        }
        if ((gGameState != NULL) && ((*(s32 *)((char *)(gGameState) + 0x2B)) == 0) && ((*(s32 *)((char *)(gGameState) + 0xC)) > 0.0f)) {
            temp_f0 = (*(s32 *)((char *)(gGameState) + 0x8));
            if (temp_f0 > 0.5f) {
                var_v1_2 = (s32) ((temp_f0 - 0.5f) * 524.0f);
                if (var_v1_2 >= 0x100) {
                    var_v1_2 = 0xFF;
                }
                D_800E0B96 = (u8) var_v1_2;
            }
        }
    }
}

void func_151E53E8( s32 arg0) {
    void * *var_a0;
    s32 var_v0;
    s32 var_v1;
    void *temp_t7;

    D_800E0A90 = 0;
    D_8008FE2C = 0;
    D_80087270[0] = 0;
    if (D_800BE616 != 0) {
        D_800E0B94 = 7;
        D_8008FD74 = 8;
        var_v1 = 0;
        if ((*(s32 *)((char *)((&D_800AB68C + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) + 0x7)) != -1) {
            (*(s32 *)((char *)(gGameState) + 0x3F)) = 4;
            D_800E0A88 = func_151E4BD8;
        } else {
            (*(s32 *)((char *)(gGameState) + 0x3F)) = 3;
            D_800E0A88 = func_151DDBA0;
        }
        var_v0 = 0;
        var_a0 = &gObjects;
        if (D_8008FD90 > 0) {
            do {
                var_v0 += 1;
                temp_t7 = gGameState + var_v1;
                var_v1 += 0xC;
                (*(s16 *)((char *)(temp_t7) + 0x6C)) = (s16) (*(s16 *)((char *)((*(s16 *)((char *)(var_a0) + 0x31C))) + 0x1AA));
                var_a0 = (char *)(var_a0) + 0x32C;
            } while (var_v0 < D_8008FD90);
        }
        D_8008FDC0 = (u16) D_8008FDC0 & 0xE35F;
        D_800E0A86 = arg0;
        if ((*(s32 *)((char *)((&D_800AB68C + ((*(s32 *)((char *)(gGameState) + 0x42)) * 0xA))) + 0x7)) == -2) {
            if (arg0 == 0) {
                func_151E4BD8();
                return;
            }
            D_800E0A88 = func_151DDBA0;
            (*(s32 *)((char *)(gGameState) + 0x3F)) = 3;
        }
    } else {
        D_800E0B94 = 4;
    }
}

void func_151E557C(void) {
    (*(s32 *)((char *)&(D_80084060) + 0x0)) = 0;
    (*(s32 *)((char *)&(D_80084060) + 0x1)) = 1;
    (*(s32 *)((char *)&(D_80084060) + 0x2)) = 2;
    (*(s32 *)((char *)&(D_80084060) + 0x3)) = 3;
}

void func_151E55A8(void) {
    s32 var_a0;
    s32 var_v1;

    if (D_800E0B98 == 0) {
        var_v1 = D_800BE9E4 * 8;
    } else {
        var_v1 = D_800BE9E4 * -8;
    }
    var_a0 = D_800E0B97 + var_v1;
    if (var_a0 >= 0x100) {
        var_a0 = 0x1FE - var_a0;
        D_800E0B98 ^= 1;
    } else if (var_a0 < 0) {
        var_a0 = -var_a0;
        D_800E0B98 ^= 1;
    }
    D_800E0B97 = (u8) var_a0;
}

void func_151E562C(void) {
    if (D_800E0A8C != 0) {
        D_800E0A8C = 0;
    }
}

s8 func_151E564C(void) {
    return D_8008FDC8;
}

/*
Decompilation failure in function func_151E565C:

Found jr instruction at 20AE20.s line 9288, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s8 func_151E5F64( s32 arg0) {
    s8 var_v1;

    if ((D_800BE616 != 0) || (D_800E0B94 != 0)) {
        var_v1 = *(&D_800E0C00 + arg0);
        if (var_v1 < 0) {
            var_v1 = 0;
        }
        return var_v1;
    }
    return arg0;
}

s8 func_151E5FAC(void) {
    if (D_800E0BEB != 0) {
        if (D_8008FD8C >= 5) {
            return D_8008FD90;
        }
        return D_8008FD8C;
    }
    return D_8008FD90;
}

void func_151E5FF4(void *arg0, void *arg1, s32 arg2) {
    s32 unksp46;
    void *sp54;
    s32 sp4C;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp24;
    s16 temp_a0;
    s32 temp_a0_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 var_a1;
    s32 var_a3;
    s32 var_t1;
    s32 var_v1_2;
    s8 *temp_a1;
    s8 *temp_v1;
    s8 *temp_v1_2;
    u16 var_v0;
    u16 var_v1;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    temp_lo = (s32) ((char *)(arg0) - (char *)(&gObjects)) / 812;
    var_a3 = temp_lo;
    sp54 = arg0;
    if (temp_lo >= D_8008FD8C) {
        var_a3 = (*(s32 *)((char *)(arg0) + 0x124)) - 1;
        if (var_a3 >= 0) {
            sp54 = &gObjects + (var_a3 * 0x32C);
        }
    }
    if ((var_a3 >= 0) && (var_a3 < D_8008FD8C) && (var_a3 < D_8008FD8C)) {
        temp_lo_2 = (s32) ((char *)(arg1) - (char *)(&gObjects)) / 812;
        (&D_800E0BB8)[temp_lo_2] = var_a3 | 0x80;
        temp_v1 = &D_800E0C00 + var_a3;
        if (var_a3 < D_8008FD90) {
            temp_a1 = &D_800E0C00 + temp_lo_2;
            if (*temp_v1 != *temp_a1) {
                temp_lo_3 = var_a3 * 0xC;
                temp_v0 = gGameState + temp_lo_3;
                (*(s16 *)((char *)(temp_v0) + 0x66)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x66)) + 1);
                if (arg2 == 0x2E) {
                    temp_v0_2 = gGameState + temp_lo_3;
                    (*(s16 *)((char *)(temp_v0_2) + 0x6A)) = (s16) ((*(s16 *)((char *)(temp_v0_2) + 0x6A)) + 1);
                }
            }
            if (((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0) && (*temp_v1 == *temp_a1) && (arg2 != 0x2D)) {
                temp_v0_3 = gGameState + (var_a3 * 0xC);
                (*(s16 *)((char *)(temp_v0_3) + 0x70)) = (s16) ((*(s16 *)((char *)(temp_v0_3) + 0x70)) + 1);
            }
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0) {
            temp_v1_2 = &D_800E0C00 + var_a3;
            temp_v0_4 = gGameState + (var_a3 * 2);
            temp_a0 = (*(s32 *)((char *)(temp_v0_4) + 0x46));
            if ((temp_a0 < 0x270F) && (*temp_v1_2 != (s32)(*(&D_800E0C00 + temp_lo_2)))) {
                (*(s16 *)((char *)(temp_v0_4) + 0x46)) = (s16) (temp_a0 + 1);
                if (*(u16 *)0x8008FDBC & 0x200) {
                    sp4C = var_a3;
                    sp24 = temp_lo_2;
                    func_15085710((s16) (*temp_v1_2 != 0), 0xA, 1, var_a3);
                }
            }
        }
        if (temp_lo_2 < D_8008FD90) {
            temp_v0_5 = gGameState + (temp_lo_2 * 0xC);
            (*(s16 *)((char *)(temp_v0_5) + 0x6E)) = (s16) ((*(s16 *)((char *)(temp_v0_5) + 0x6E)) + 1);
        }
        if ((sp54 != arg1) && ((*(s32 *)((char *)(arg1) + 0x31C)) != NULL) && ((*(s32 *)((char *)(sp54) + 0x1CA)) != 0)) {
            sp44 = 0;
            var_t1 = 0;
            (*(s32 *)((char *)((*(s32 *)((char *)(sp54) + 0x31C))) + 0xAF)) = 0;
            var_a1 = 0;
            if (arg2 == 0x33) {
                temp_v0_6 = (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x31C))) + 0x78));
                if ((temp_v0_6 == 0x21) || (temp_v0_6 == 0x22)) {
                    func_10010630(0x510, arg1, 0x61A8, 0x12C, 0x190);
                }
            } else {
                temp_v0_7 = (*(s32 *)((char *)(sp54) + 0x4));
                if ((temp_v0_7 == 0x75) && ((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0)) {
                    if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v0_7) {
                        if ((temp_lo_2 < D_8008FD90) && ((*(s32 *)((char *)((gGameState + (temp_lo_2 * 0xC))) + 0x70)) >= 4)) {
                            sp44 = 0x665;
                            var_a1 = 4;
                        }
                    } else if (arg2 == 0x34) {
                        sp3C = 0;
                        var_a1 = 0;
                        if ((random_u32() & 3) == 3) {
                            sp44 = 0x52A;
                        }
                    } else {
                        sp44 = 0x4D1;
                        var_a1 = 3;
                    }
                    if (sp44 != 0) {
                        if (var_a1 != 0) {
                            sp44 = func_1000F568(sp44, var_a1);
                        }
                        func_10010558(unksp46, sp54, 0x6D60, 0x320, 0xBB8, 0);
                    }
                } else if (temp_v0_7 == 0x80) {
                    var_v1 = -1U;
                    if ((arg0 != sp54) && ((*(s32 *)((char *)(arg0) + 0x0)) == 4)) {
                        var_v1 = (*(s32 *)((char *)(arg0) + 0x278));
                    }
                    if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v0_7) {
                        if ((temp_lo_2 < D_8008FD90) && ((*(s32 *)((char *)((gGameState + (temp_lo_2 * 0xC))) + 0x70)) >= 4)) {
                            var_a1 = 8;
                            sp44 = 0x65A;
                        }
                    } else if (var_v1 == 2) {
                        if (((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0) || (sp3C = 0, sp40 = 0, var_a1 = 0, var_t1 = 0, ((random_u32() & 7) == 0))) {
                            var_a1 = 3;
                            sp44 = 0x571;
                        }
                    } else if ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x31C))) + 0x1AC)) != 0) {
                        if ((arg2 != 0x21) && (((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0) || (sp3C = 0, sp40 = 0, var_a1 = 0, var_t1 = 0, ((random_u32() & 3) == 3)))) {
                            var_a1 = 4;
                            sp44 = 0x582;
                            goto block_75;
                        }
                    } else if (arg2 == 0x2E) {
                        var_t1 = 0x1E;
                        if (((*(s32 *)((char *)((*(s32 *)((char *)(sp54) + 0x31C))) + 0x78)) == 0x23) && (sp3C = 0, sp40 = 0x1E, var_a1 = 0, var_t1 = 0x1E, ((random_u32() & 3) == 0))) {
                            sp44 = 0x587;
                        } else {
                            sp44 = 0x579;
                            var_a1 = 3;
                        }
                    } else if (arg2 == 0x2F) {
                        sp3C = 0;
                        sp40 = 0;
                        var_a1 = 0;
                        var_t1 = 0;
                        if (random_u32() & 1) {
                            sp44 = 0x588;
                            goto block_75;
                        }
                    } else if (arg2 == 0x2C) {
                        sp44 = 0x56D;
                        var_a1 = 7;
                        var_t1 = 0x3C;
                    } else if (((arg2 == 0x21) || (arg2 == 0x20) || (arg2 == 0x31)) && (((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0) || (sp3C = 0, sp40 = 0, var_a1 = 0, var_t1 = 0, ((random_u32() & 7) == 3)))) {
                        sp44 = 0x571;
                        var_a1 = 3;
block_75:
                        var_t1 = 0x1E;
                    }
                    if (sp44 != 0) {
                        if (var_a1 != 0) {
                            sp40 = var_t1;
                            sp44 = func_1000F568(sp44, var_a1);
                        }
                        func_10010558(unksp46, sp54, 0x7D00, 0x258, 0x7D0, var_t1);
                    }
                } else if (temp_v0_7 == 0x3B) {
                    var_v0 = -1U;
                    if ((arg0 != sp54) && ((*(s32 *)((char *)(arg0) + 0x0)) == 4)) {
                        var_v0 = (*(s32 *)((char *)(arg0) + 0x278));
                    }
                    if (var_v0 == 2) {
                        if (((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0) || (sp3C = 0, sp40 = 0, var_a1 = 0, var_t1 = 0, ((random_u32() & 7) == 7))) {
                            sp44 = 0x538;
                            var_a1 = 3;
                        }
                    } else {
                        if (arg2 == 0x2E) {
                            sp44 = 0x52F;
                            var_a1 = 3;
                            goto block_107;
                        }
                        if ((arg2 == 0x2C) || (arg2 == 0x2F)) {
                            sp44 = 0x540;
                            var_a1 = 2;
                            var_t1 = 0x3C;
                        } else if ((arg2 == 0x25) || (arg2 == 0x26)) {
                            temp_v0_8 = (*(s32 *)((char *)(arg1) + 0x1CA));
                            if (var_a3 & 1) {
                                if ((s32) temp_v0_8 >= 2) {
                                    sp44 = 0x55F - temp_v0_8;
                                    goto block_107;
                                }
                            } else {
                                sp44 = 0x565 - temp_v0_8;
                                goto block_107;
                            }
                        } else if (arg2 == 0x21) {
                            sp3C = 0;
                            sp40 = 0;
                            var_a1 = 0;
                            var_t1 = 0;
                            if ((random_u32() & 3) == 3) {
                                sp44 = 0x52C;
                                goto block_107;
                            }
                        } else if (arg2 == 0x20) {
                            sp3C = 0;
                            sp40 = 0;
                            temp_a0_2 = random_u32() & 0xF;
                            var_v1_2 = temp_a0_2;
                            var_a1 = 0;
                            var_t1 = 0;
                            if (temp_a0_2 != 0) {
                                var_v1_2 = temp_a0_2 + 1;
                            }
                            if (var_v1_2 < 4) {
                                sp44 = var_v1_2 + 0x52B;
block_107:
                                var_t1 = 0x1E;
                            }
                        }
                    }
                    if (sp44 != 0) {
                        if (var_a1 != 0) {
                            sp40 = var_t1;
                            sp44 = func_1000F568(sp44, var_a1);
                        }
                        func_10010558(unksp46, sp54, 0x7D00, 0x258, 0x7D0, var_t1);
                    }
                } else if ((temp_v0_7 == 0x88) && ((s32) (*(s32 *)((char *)(arg1) + 0x1CA)) <= 0)) {
                    if (arg2 == 0x34) {
                        sp3C = 0;
                        sp40 = 0;
                        var_a1 = 0;
                        var_t1 = 0;
                        if ((random_u32() & 3) == 3) {
                            sp44 = 0x52A;
                        }
                    } else if (arg2 == 0x21) {
                        sp44 = 0x41A;
                    } else {
                        sp44 = 0x415;
                        var_t1 = 0x1E;
                        var_a1 = 5;
                    }
                    if (sp44 != 0) {
                        if (var_a1 != 0) {
                            sp40 = var_t1;
                            sp44 = func_1000F568(sp44, var_a1);
                        }
                        func_10010558(unksp46, sp54, 0x6D60, 0x320, 0xBB8, var_t1);
                    }
                }
            }
        }
    }
}

void func_151E6964(s32 arg0) {
    s32 sp30;
    s32 sp2C;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_t0;
    u8 *temp_a2;
    u8 *temp_v0_2;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 *var_v1_3;
    u8 temp_t4;
    u8 temp_t9;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_a0_3;

    if (D_800BEAAB != D_800E0BEA) {
        D_800BEAAB = (u8) D_800E0BEA;
        D_800E0BD3 = 0;
    }
    if (arg0 != D_800E0BD3) {
        if (D_800E0BD4 != NULL) {
            func_10004074(D_800E0BD4);
            D_800E0BD4 = NULL;
            if (D_8008FDD8 != NULL) {
                func_10004074(D_8008FDD8);
                func_10004074(D_800E0B88);
                func_10004074(D_800E0BD8);
                D_8008FDD8 = NULL;
            }
        }
        D_800E0BD3 = (s8) arg0;
        if (D_800E0BD3 != 0) {
            temp_v0 = arg0 - 1;
            sp2C = temp_v0;
            temp_v0_2 = func_1502B5C8(&sp30, 3, 0x1C, D_800BEAAB, temp_v0);
            D_800E0BD4 = temp_v0_2;
            var_v1 = temp_v0_2;
            var_t0 = 0;
            var_a0 = *temp_v0_2;
            do {
                if (var_a0 != 0) {
                    do {
                        var_a0 = (*(s32 *)((char *)(var_v1) + 0x1));
                        var_v1 += 1;
                    } while (var_a0 != 0);
                }
                if (var_a0 == 0) {
                    do {
                        var_a0 = (*(s32 *)((char *)(var_v1) + 0x1));
                        var_v1 += 1;
                    } while (var_a0 == 0);
                }
                var_t0 += 1;
            } while ((u32) var_v1 < (u32) &temp_v0_2[sp30]);
            D_800E0BD8 = allocate_memory((var_t0 + 1) * 4, 1, 0, 0);
            var_v1_2 = D_800E0BD4;
            var_a1 = 0;
            temp_a2 = &var_v1_2[sp30];
            do {
                D_800E0BD8[var_a1] = var_v1_2;
                var_a0_2 = *var_v1_2;
                var_a1 += 4;
                if (var_a0_2 != 0) {
                    do {
                        var_a0_2 = (*(s32 *)((char *)(var_v1_2) + 0x1));
                        var_v1_2 += 1;
                    } while (var_a0_2 != 0);
                }
                if (var_a0_2 == 0) {
                    do {
                        temp_t4 = (*(s32 *)((char *)(var_v1_2) + 0x1));
                        var_v1_2 += 1;
                    } while (temp_t4 == 0);
                }
            } while ((u32) var_v1_2 < (u32) temp_a2);
            if (sp2C == 0) {
                D_8008FDD8 = func_1502B5C8(&sp30, 3, 0x1C, D_800BEAAB, 2);
                D_800E0B88 = allocate_memory(0x140, 1, 0, 0);
                var_v1_3 = D_8008FDD8;
                var_a1_2 = 0;
                do {
                    D_800E0B88[var_a1_2] = var_v1_3;
                    var_a0_3 = *var_v1_3;
                    var_a1_2 += 4;
                    if (var_a0_3 != 0) {
                        do {
                            var_a0_3 = (*(s32 *)((char *)(var_v1_3) + 0x1));
                            var_v1_3 += 1;
                        } while (var_a0_3 != 0);
                    }
                    if (var_a0_3 == 0) {
                        do {
                            temp_t9 = (*(s32 *)((char *)(var_v1_3) + 0x1));
                            var_v1_3 += 1;
                        } while (temp_t9 == 0);
                    }
                } while (var_a1_2 != 0x140);
            }
        }
    }
}

void func_151E6BFC(void) {
    D_800E0BD3 = 0;
    D_800E0BD4 = NULL;
    D_8008FDD8 = NULL;
}

void func_151E6C1C(s32 arg0) {
    f32 sp138[8];
    f32 spF8[8];
    f32 spB8[8];
    f32 sp64[8];
    f32 sp70[8];
    f32 sp7C[8];
    s8 spAA;
    s32 sp19C;
    s32 sp198;
    s32 sp194;
    s32 sp190;
    f32 *sp18C;
    f32 sp188;
    f32 sp184;
    f32 sp178;
    f32 sp140;
    f32 sp13C;
    f32 sp100;
    f32 spFC;
    void * spC8;
    f32 spC0;
    f32 spBC;
    s8 spA9;
    s8 spA8;
    void * *spA4;
    void * *spA0;
    s32 sp8C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    s8 *sp44;
    void * *sp34;
    void * *var_s1;
    void * *var_t1;
    f32 (*temp_s0)[];
    f32 *temp_a3;
    f32 *temp_s2;
    f32 *temp_s2_2;
    f32 *temp_s2_3;
    f32 *temp_t1;
    f32 *temp_v1_3;
    f32 *var_s0;
    f32 *var_s0_2;
    f32 *var_s1_2;
    f32 *var_s1_3;
    f32 *var_s2;
    f32 *var_s2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f14;
    f32 var_f14_2;
    s32 temp_a2;
    s32 temp_f8;
    s32 var_a0;
    s32 var_a3;
    s32 var_s0_3;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v1_3;
    s8 *temp_v0_8;
    s8 *var_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_7;
    s8 temp_v0_9;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v1_4;
    u16 temp_v1;
    u16 var_v1;
    u8 temp_a0;
    u8 temp_v1_2;
    void *temp_a1;
    void *temp_s0_2;
    void *temp_s4;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_5;
    void *temp_v0_6;

    temp_s4 = (arg0 * 0x9A0) + D_800DBFF0;
    if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 0) {
        sp194 = 0;
        sp190 = 6;
        spA4 = &D_8008FF40;
        sp18C = &D_8008FF48;
        spA0 = &D_800AB908;
    } else {
        sp194 = 0x10;
        sp190 = 8;
        spA4 = &D_8008FF88;
        sp18C = &D_8008FF90;
        spA0 = &D_800AB920;
    }
    func_15086CBC(func_15086D48(sp194), (char *)(temp_s4) + 0x2F8, (char *)(temp_s4) + 0x2FC, (char *)(temp_s4) + 0x300);
    temp_s2 = gGameState;
    temp_f2 = (*(f32 *)((char *)(temp_s2) + 0x4));
    if (temp_f2 != 0.0f) {
        (*(f32 *)((char *)(temp_s2) + 0x0)) += temp_f2 * (f32) D_800BE9E4;
        var_f0 = (*(s32 *)((char *)(gGameState) + 0x0));
        if (var_f0 <= 0.0f) {
            (*(s32 *)((char *)(gGameState) + 0x0)) = 0.0f;
            (*(s32 *)((char *)(gGameState) + 0x4)) = 0.0f;
            var_f0 = (*(s32 *)((char *)(gGameState) + 0x0));
        }
        if (var_f0 >= 1.0f) {
            (*(s32 *)((char *)(gGameState) + 0x0)) = 0.0f;
            (*(s32 *)((char *)(gGameState) + 0x4)) = 0.0f;
            (*(s8 *)((char *)(gGameState) + 0x2B)) = (s8) ((*(s8 *)((char *)(gGameState) + 0x2B)) + 1);
            temp_v0 = (*(s32 *)((char *)(gGameState) + 0x2B));
            if (temp_v0 >= sp190) {
                (*(s8 *)((char *)(gGameState) + 0x2B)) = (s8) (temp_v0 - sp190);
            }
        }
    } else if (((*(f32 *)((char *)(temp_s2) + 0xC)) != 0.0f) || ((*(f32 *)((char *)(temp_s2) + 0x8)) != 0.0f)) {
        var_v1 = (*(s32 *)((char *)(temp_s2) + 0x20));
        if ((var_v1 & 0x20) && (((*(s8 *)((char *)(temp_s2) + 0x3E)) == 0) || ((*(s8 *)((char *)(temp_s2) + 0x2B)) != 0))) {
            (*(f32 *)((char *)(temp_s2) + 0xC)) = (f32) -sp18C[(*(s8 *)((char *)(temp_s2) + 0x2B))];
            func_1000D96C((*(s32 *)((char *)(((char *)(spA0) + ((*(s32 *)((char *)(gGameState) + 0x2B)) * 4))) + 0x2)), D_800E0A97, 0);
            D_800E0A97 = (u8) (*(u8 *)((char *)(((char *)(spA0) + ((*(u8 *)((char *)(gGameState) + 0x2B)) * 4))) + 0x2));
            var_v1 = (*(s32 *)((char *)(gGameState) + 0x20));
        }
        if (((*(s8 *)((char *)(temp_s2) + 0x2A)) != 0) && ((*(s8 *)((char *)(temp_s2) + 0x3E)) == 1) && (temp_v0_2 = (*(s8 *)((char *)(temp_s2) + 0x2B)), (temp_v0_2 == 0))) {
            if (var_v1 & 0x20) {
                (*(f32 *)((char *)(temp_s2) + 0xC)) = (f32) sp18C[temp_v0_2];
            }
        } else if (var_v1 & 0x10) {
            (*(f32 *)((char *)(temp_s2) + 0xC)) = (f32) sp18C[(*(s8 *)((char *)(temp_s2) + 0x2B))];
        }
        (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x8)) + ((*(f32 *)((char *)(temp_s2) + 0xC)) * (f32) D_800BE9E4));
        temp_f0 = (*(s32 *)((char *)(gGameState) + 0x8));
        if (temp_f0 >= 1.0f) {
            (*(s32 *)((char *)(gGameState) + 0x8)) = 1.0f;
            (*(s32 *)((char *)(gGameState) + 0xC)) = 0.0f;
        } else if (temp_f0 < 0.0f) {
            (*(s32 *)((char *)(gGameState) + 0x8)) = 0.0f;
            (*(s32 *)((char *)(gGameState) + 0xC)) = 0.0f;
            if (((*(s32 *)((char *)(gGameState) + 0x2C)) == 0) && ((*(s32 *)((char *)(gGameState) + 0x3E)) == 1) && ((*(s32 *)((char *)(gGameState) + 0x44)) != 0)) {
                (*(s32 *)((char *)(gGameState) + 0x43)) = 1;
                (*(s32 *)((char *)(gGameState) + 0x44)) = 0;
            }
        }
    } else {
        temp_v1 = (*(s32 *)((char *)(temp_s2) + 0x20));
        if (temp_v1 & 0x10) {
            (*(f32 *)((char *)(temp_s2) + 0xC)) = (f32) sp18C[(*(s8 *)((char *)(temp_s2) + 0x2B))];
            func_1000D96C(*((char *)(spA0) + ((*(s32 *)((char *)(gGameState) + 0x2B)) * 4)), D_800E0A97, 0);
            D_800E0A97 = (u8) *((char *)(spA0) + ((*(u8 *)((char *)(gGameState) + 0x2B)) * 4));
        } else {
            if (temp_v1 & 4) {
                (*(s8 *)((char *)(temp_s2) + 0x2B)) = (s8) ((*(s8 *)((char *)(temp_s2) + 0x2B)) - 1);
                (*(s32 *)((char *)(gGameState) + 0x0)) = 1.0f;
                (*(f32 *)((char *)(gGameState) + 0x4)) = (f32) D_800ABA64;
                temp_v0_3 = (*(s32 *)((char *)(gGameState) + 0x2B));
                if (temp_v0_3 < 0) {
                    (*(s8 *)((char *)(gGameState) + 0x2B)) = (s8) (temp_v0_3 + sp190);
                }
            }
            if (((*(s32 *)((char *)(temp_s2) + 0x20)) & 8) || ((*(s8 *)((char *)(temp_s2) + 0x43)) != 0)) {
                (*(f32 *)((char *)(temp_s2) + 0x4)) = (f32) D_800ABA68;
            }
            (*(s8 *)((char *)(temp_s2) + 0x43)) = 0;
            var_v0 = (*(s32 *)((char *)(gGameState) + 0x2B));
            if (var_v0 < 0) {
                (*(s8 *)((char *)(gGameState) + 0x2B)) = (s8) (var_v0 + sp190);
                var_v0 = (*(s32 *)((char *)(gGameState) + 0x2B));
            }
            if (var_v0 >= sp190) {
                (*(s8 *)((char *)(gGameState) + 0x2B)) = (s8) (var_v0 - sp190);
            }
        }
    }
    var_f14 = (*(s32 *)((char *)(gGameState) + 0x8));
    temp_v0_4 = (*(s32 *)((char *)(gGameState) + 0x2C));
    if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 0) {
        var_f14 *= 1.0f - (*(&D_8008FF60 + (temp_v0_4 * 4)) * D_8008FDD0);
    } else if (temp_v0_4 != 0) {
        var_f14 *= D_800ABA6C;
    }
    sp178 = var_f14;
    sp188 = (sinf(((*(s32 *)((char *)(gGameState) + 0x0)) * D_800ABA70) - D_800ABA74) * 0.5f) + 0.5f;
    var_f14_2 = var_f14;
    sp184 = (sinf((var_f14 * D_800ABA78) - D_800ABA7C) * 0.5f) + 0.5f;
    if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 0) {
        var_s1 = &D_8008FFB0;
        do {
            temp_a0 = *((char *)(var_s1) + (*(s32 *)((char *)(gGameState) + 0x2C)));
            if (temp_a0 != 0xFF) {
                sp178 = var_f14_2;
                temp_v0_5 = func_151149AC(temp_a0);
                if (temp_v0_5 != NULL) {
                    temp_f0_2 = (*(s32 *)((char *)(gGameState) + 0xC));
                    if ((temp_f0_2 > 0.0f) || (D_8008FDD0 < 1.0f)) {
                        if (*(&D_8008FF78 + (*(s32 *)((char *)(gGameState) + 0x2C))) < (s32) (var_f14_2 * 100.0f)) {
                            (*(s32 *)((char *)(temp_v0_5) + 0x80)) = 1;
                        }
                    } else if ((temp_f0_2 < 0.0f) && (*(&D_8008FF80 + (*(s32 *)((char *)(gGameState) + 0x2C))) >= (s32) (var_f14_2 * 100.0f))) {
                        (*(s32 *)((char *)(temp_v0_5) + 0x80)) = 0;
                    }
                }
            }
            var_s1 = (char *)(var_s1) + 6;
        } while ((char *)(var_s1) != (char *)(&D_8008FFBC));
    }
    temp_v0_6 = (*(void **)((char *)(temp_s4) + 0x3D0));
    (*(s32 *)((char *)(temp_v0_6) + 0x25C)) = (s32) ((*(s32 *)((char *)(temp_v0_6) + 0x25C)) | 0x200);
    (*(f32 *)((char *)((*(void **)((char *)(temp_s4) + 0x3D0))) + 0x18)) = 1000.0f;
    if (var_f14_2 > 0.0f) {
        spA8 = func_15086D48(sp194);
        temp_v0_7 = func_15086D48((s32) (*(s32 *)((char *)(spA4) + (*(s32 *)((char *)(gGameState) + 0x2B)))));
        var_a3 = (temp_v0_7 * 0x10) + D_800D2350;
        var_t0 = 1;
        spA9 = temp_v0_7;
        if (var_a3 != 0) {
            do {
                temp_a2 = var_a3;
                var_a3 = 0;
                var_a0 = 0;
loop_63:
                temp_a1 = temp_a2 + var_a0;
                temp_v1_2 = (*(u8 *)((char *)(temp_a1) + 0x9));
                temp_v0_8 = &(&spA8)[var_t0];
                if ((temp_v1_2 != 0xFF) && (temp_v1_2 != (*(s32 *)((char *)(temp_v0_8) - 0x1)))) {
                    temp_v0_8[1] = temp_v1_2;
                    var_t0 += 1;
                    var_a0 = 5;
                    var_a3 = ((*(u8 *)((char *)(temp_a1) + 0x9)) * 0x10) + D_800D2350;
                }
                var_a0 += 1;
                if (var_a0 < 5) {
                    goto loop_63;
                }
            } while (var_a3 != 0);
        }
        var_t0_2 = var_t0 + 1;
        if (var_t0_2 >= 4) {
            var_t1 = (void **)(&spB8[var_t0_2 + 1]);
            var_v1_2 = &spA9;
            var_s1_2 = &sp13C;
            temp_f6 = sp184 * ((f32) var_t0_2 - 2.0f);
            var_s2 = &spFC;
            var_s0 = &spBC;
            temp_f8 = (s32) temp_f6;
            sp184 = temp_f6;
            sp8C = temp_f8;
            sp188 = temp_f6 - (f32) temp_f8;
            if (temp_f8 >= (var_t0_2 - 2)) {
                sp8C = temp_f8 - 1;
                sp188 = 1.0f;
            }
            if (var_t0_2 > 0) {
                do {
                    sp34 = var_t1;
                    sp198 = var_t0_2;
                    sp44 = var_v1_2;
                    func_15086CBC((*(s32 *)((char *)(var_v1_2) - 0x1)), (f32 (*)[]) var_s1_2, var_s2, var_s0);
                    var_s0 += 4;
                    var_s1_2 += 4;
                    var_s2 += 4;
                    var_v1_2 += 1;
                } while ((f32 *)(var_t1) != var_s0);
            }
            temp_v1_3 = &(&sp138[0])[var_t0_2];
            temp_a3 = &(&spF8[0])[var_t0_2];
            sp138[0] = sp13C - (sp140 - sp13C);
            temp_t1 = &(&spB8[0])[var_t0_2];
            spF8[0] = spFC - (sp100 - spFC);
            spB8[0] = spBC - (spC0 - spBC);
            temp_f0_3 = temp_v1_3[0];
            temp_f2_2 = temp_a3[0];
            temp_f12 = temp_t1[0];
            temp_v1_3[1] = (f32) (((*(f32 *)((char *)(temp_v1_3) - 0x4)) - temp_f0_3) + temp_f0_3);
            temp_a3[1] = (f32) (((*(f32 *)((char *)(temp_a3) - 0x4)) - temp_f2_2) + temp_f2_2);
            temp_t1[1] = (f32) (((*(f32 *)((char *)(temp_t1) - 0x4)) - temp_f12) + temp_f12);
            (*(f32 *)((char *)(temp_s4) + 0x2F8)) = func_150497E0(temp_f12, (f32 (*)[]) &sp138[0], sp8C, sp188, temp_a3);
            (*(f32 *)((char *)(temp_s4) + 0x2FC)) = func_150497E0((f32)(s32)&spF8[0], (f32 (*)[]) sp8C, (s32) sp188, 0.0f, NULL);
            (*(f32 *)((char *)(temp_s4) + 0x300)) = func_150497E0((f32)(s32)&spB8[0], (f32 (*)[]) sp8C, (s32) sp188, 0.0f, NULL);
            temp_s0 = sp8C + 1;
            (*(f32 *)((char *)(temp_s4) + 0x2A4)) = func_150497E0((f32)(s32)&sp138[0], (f32 (*)[]) temp_s0, (s32) sp188, 0.0f, NULL);
            (*(f32 *)((char *)(temp_s4) + 0x2A8)) = func_150497E0((f32)(s32)&spF8[0], (f32 (*)[]) temp_s0, (s32) sp188, 0.0f, NULL);
            (*(f32 *)((char *)(temp_s4) + 0x2AC)) = func_150497E0((f32)(s32)&spB8[0], (f32 (*)[]) temp_s0, (s32) sp188, 0.0f, NULL);
        } else {
            sp198 = var_t0_2;
            func_15086CBC(spA8, (f32 (*)[]) &sp138[0], &spF8[0], &spB8[0]);
            func_15086CBC(spA9, (f32 (*)[]) &sp13C, &spFC, &spBC);
            if (sp198 == 3) {
                func_15086CBC(spAA, (f32 (*)[]) &sp140, &sp100, &spC0);
                var_f0_2 = sp13C - sp138[0];
            } else {
                var_f0_2 = sp13C - sp138[0];
                sp140 = var_f0_2 + sp13C;
                sp100 = (spFC - spF8[0]) + spFC;
                spC0 = (spBC - spB8[0]) + spBC;
            }
            (*(f32 *)((char *)(temp_s4) + 0x2F8)) = (f32) ((var_f0_2 * sp184) + sp138[0]);
            (*(f32 *)((char *)(temp_s4) + 0x2FC)) = (f32) (((spFC - spF8[0]) * sp184) + spF8[0]);
            (*(f32 *)((char *)(temp_s4) + 0x300)) = (f32) (((spBC - spB8[0]) * sp184) + spB8[0]);
            (*(f32 *)((char *)(temp_s4) + 0x2A4)) = (f32) (((sp140 - sp13C) * sp184) + sp13C);
            (*(f32 *)((char *)(temp_s4) + 0x2A8)) = (f32) (((sp100 - spFC) * sp184) + spFC);
            (*(f32 *)((char *)(temp_s4) + 0x2AC)) = (f32) (((spC0 - spBC) * sp184) + spBC);
        }
    } else {
        var_s1_3 = &sp138[0];
        var_s2_2 = &spF8[0];
        var_s0_2 = &spB8[0];
        var_v1_3 = (*(s32 *)((char *)(gGameState) + 0x2B)) - 1;
        if (var_v1_3 < 0) {
            var_v1_3 += sp190;
        }
        do {
            sp19C = var_v1_3;
            func_15086CBC(func_15086D48((s32) *((char *)(spA4) + var_v1_3)), (f32 (*)[]) var_s1_3, var_s2_2, var_s0_2);
            var_s1_3 += 4;
            var_v1_3 += 1;
            var_s0_2 += 4;
            if (var_v1_3 >= sp190) {
                var_v1_3 -= sp190;
            }
            var_s2_2 += 4;
        } while ((char *)(var_s0_2) != (char *)(&spC8));
        (*(f32 *)((char *)(temp_s4) + 0x2A4)) = func_150497E0((f32)(s32)&sp138[0], NULL, (s32) sp188, (f32) sp190, NULL);
        (*(f32 *)((char *)(temp_s4) + 0x2A8)) = func_150497E0((f32)(s32)&spF8[0], NULL, (s32) sp188, 0.0f, NULL);
        (*(f32 *)((char *)(temp_s4) + 0x2AC)) = func_150497E0((f32)(s32)&spB8[0], NULL, (s32) sp188, 0.0f, NULL);
    }
    if ((*(s32 *)((char *)(gGameState) + 0x2A)) != 0) {
        temp_f0_4 = (*(f32 *)((char *)(temp_s4) + 0x2F8));
        temp_f2_3 = (*(f32 *)((char *)(temp_s4) + 0x2FC));
        temp_f12_2 = (*(f32 *)((char *)(temp_s4) + 0x300));
        (*(f32 *)((char *)(temp_s4) + 0x2A4)) = (f32) (temp_f0_4 + (temp_f0_4 - (*(f32 *)((char *)(temp_s4) + 0x2A4))));
        (*(f32 *)((char *)(temp_s4) + 0x2A8)) = (f32) (temp_f2_3 + (temp_f2_3 - (*(f32 *)((char *)(temp_s4) + 0x2A8))));
        (*(f32 *)((char *)(temp_s4) + 0x2AC)) = (f32) (temp_f12_2 + (temp_f12_2 - (*(f32 *)((char *)(temp_s4) + 0x2AC))));
    }
    (*(f32 *)((char *)(temp_s4) + 0x2A4)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x2A4)) + ((*(f32 *)((char *)(gGameState) + 0x10)) * (*(f32 *)((char *)(gGameState) + 0x14))));
    (*(f32 *)((char *)(temp_s4) + 0x2A8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x2A8)) + ((*(f32 *)((char *)(gGameState) + 0x10)) * (*(f32 *)((char *)(gGameState) + 0x18))));
    (*(f32 *)((char *)(temp_s4) + 0x2AC)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x2AC)) + ((*(f32 *)((char *)(gGameState) + 0x10)) * (*(f32 *)((char *)(gGameState) + 0x1C))));
    if ((*(s32 *)((char *)(gGameState) + 0x2A)) != 3) {
        (*(f32 *)((char *)(gGameState) + 0x10)) = (f32) ((*(f32 *)((char *)(gGameState) + 0x10)) * D_800ABA80);
    } else {
        (*(f32 *)((char *)(gGameState) + 0x10)) = (f32) -((0.25f - (*(f32 *)((char *)(gGameState) + 0x8))) * 4.0f);
    }
    temp_s2_2 = gGameState;
    var_s0_3 = 0;
    if ((*(s8 *)((char *)(temp_s2_2) + 0x3E)) == 1) {
        func_15086CBC(func_15086D48(sp194), (f32 (*)[]) &sp64[0], &sp60, &sp5C);
        var_v1_4 = (*(s32 *)((char *)(gGameState) + 0x2B));
        if (var_v1_4 >= sp190) {
            var_v1_4 = 0;
        }
        func_15086CBC(func_15086D48((s32) *((char *)(spA4) + var_v1_4)), (f32 (*)[]) &sp70[0], &sp6C, &sp68);
        temp_s2_3 = gGameState;
        temp_f8_2 = sp70[0] - sp64[0];
        temp_f4 = sp6C - sp60;
        sp70[0] = temp_f8_2;
        sp6C = temp_f4;
        temp_f10 = sp68 - sp5C;
        sp68 = temp_f10;
        if ((*(s8 *)((char *)(temp_s2_3) + 0x2A)) != 0) {
            sp70[0] = -temp_f8_2;
            sp6C = -temp_f4;
            sp68 = -temp_f10;
        }
        var_f0_3 = (*(f32 *)((char *)(temp_s2_3) + 0x8));
        if ((var_f0_3 == 0.0f) && ((*(s32 *)((char *)(temp_s2_3) + 0x20)) & 0x20) && ((*(f32 *)((char *)(temp_s2_3) + 0x10)) < D_800ABA84) && ((*(f32 *)((char *)(temp_s2_3) + 0x4)) == 0.0f)) {
            (*(s8 *)((char *)(temp_s2_3) + 0x2B)) = 0;
            temp_v0_9 = (*(s32 *)((char *)(gGameState) + 0x2D));
            if ((temp_v0_9 >= 2) && (temp_v0_9 < 7)) {
                (*(s32 *)((char *)(gGameState) + 0x2A)) = 2;
            }
            var_s0_3 = 1;
            (*(f32 *)((char *)(gGameState) + 0xC)) = (f32) sp18C[(*(s8 *)((char *)(gGameState) + 0x2B))];
            func_1000D96C(*((char *)(spA0) + ((*(s32 *)((char *)(gGameState) + 0x2B)) * 4)), D_800E0A97, 0);
            D_800E0A97 = (u8) *((char *)(spA0) + ((*(u8 *)((char *)(gGameState) + 0x2B)) * 4));
            var_f0_3 = (*(s32 *)((char *)(gGameState) + 0x8));
        }
        if ((var_f0_3 < 0.25f) && ((*(s8 *)((char *)(temp_s2_3) + 0x2A)) == 1)) {
            (*(s8 *)((char *)(temp_s2_3) + 0x2B)) = 4;
            var_s0_3 = 2;
            (*(s32 *)((char *)(gGameState) + 0x2A)) = 0;
            var_f0_3 = (*(s32 *)((char *)(gGameState) + 0x8));
        }
        if ((var_f0_3 == 0.0f) && ((*(s8 *)((char *)(temp_s2_3) + 0x2A)) == 3)) {
            (*(s8 *)((char *)(temp_s2_3) + 0x2B)) = 4;
            (*(s32 *)((char *)(gGameState) + 0x2A)) = 0;
            (*(s32 *)((char *)(gGameState) + 0x10)) = 0.0f;
        }
        if (var_s0_3 != 0) {
            func_15086CBC(func_15086D48((s32) (*(s32 *)((char *)(spA4) + (*(s8 *)((char *)(temp_s2_3) + 0x2B))))), (f32 (*)[]) &sp7C[0], &sp78, &sp74);
            temp_f6_2 = sp7C[0] - sp64[0];
            temp_f10_2 = sp78 - sp60;
            sp7C[0] = temp_f6_2;
            sp78 = temp_f10_2;
            temp_f4_2 = sp74 - sp5C;
            sp74 = temp_f4_2;
            if ((*(s32 *)((char *)(gGameState) + 0x2A)) != 0) {
                sp7C[0] = -temp_f6_2;
                sp78 = -temp_f10_2;
                sp74 = -temp_f4_2;
            }
            (*(s32 *)((char *)(gGameState) + 0x10)) = 1.0f;
            (*(f32 *)((char *)(gGameState) + 0x14)) = (f32) (sp70[0] - sp7C[0]);
            (*(f32 *)((char *)(gGameState) + 0x18)) = (f32) (sp6C - sp78);
            (*(f32 *)((char *)(gGameState) + 0x1C)) = (f32) (sp68 - sp74);
        }
        if (var_s0_3 == 2) {
            (*(f32 *)((char *)(temp_s2_3) + 0x10)) = 0.0f;
            (*(s32 *)((char *)(gGameState) + 0x2B)) = 0;
            (*(s32 *)((char *)(gGameState) + 0x2A)) = 3;
        }
    }
    if (((*(f32 *)((char *)(temp_s2_2) + 0x8)) >= 1.0f) && ((*(s8 *)((char *)(temp_s2_2) + 0x2B)) == 0)) {
        (*(s8 *)((char *)(temp_s2_2) + 0x3E)) = (s8) (1 - (*(s8 *)((char *)(temp_s2_2) + 0x3E)));
        (*(f32 *)((char *)(gGameState) + 0x8)) = (f32) D_800ABA88;
        if ((*(s32 *)((char *)(gGameState) + 0x3E)) != 0) {
            (*(f32 *)((char *)(gGameState) + 0xC)) = (f32) -D_8008FF90;
        } else {
            (*(f32 *)((char *)(gGameState) + 0xC)) = (f32) -D_8008FF48;
        }
        if ((*(s32 *)((char *)(gGameState) + 0x3E)) != 0) {
            (*(s32 *)((char *)(gGameState) + 0x2A)) = 1;
        } else {
            (*(s32 *)((char *)(gGameState) + 0x2A)) = 0;
        }
    }
    (*(s8 *)((char *)(temp_s2_2) + 0x2C)) = (s8) (*(s8 *)((char *)(temp_s2_2) + 0x2B));
    if ((*(s32 *)((char *)(gGameState) + 0x0)) > 0.5f) {
        (*(s8 *)((char *)(gGameState) + 0x2C)) = (s8) ((*(s8 *)((char *)(gGameState) + 0x2C)) + 1);
    }
    var_v0_2 = (*(s32 *)((char *)(gGameState) + 0x2C));
    if (var_v0_2 < 0) {
        (*(s8 *)((char *)(gGameState) + 0x2C)) = (s8) (var_v0_2 + sp190);
        var_v0_2 = (*(s32 *)((char *)(gGameState) + 0x2C));
    }
    if (var_v0_2 >= sp190) {
        (*(s8 *)((char *)(gGameState) + 0x2C)) = (s8) (var_v0_2 - sp190);
        var_v0_2 = (*(s32 *)((char *)(gGameState) + 0x2C));
    }
    (*(s32 *)((char *)(gGameState) + 0x2D)) = var_v0_2;
    if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 1) {
        (*(s8 *)((char *)(gGameState) + 0x2C)) = (s8) *(&D_800AB570 + (*(s8 *)((char *)(gGameState) + 0x2C)));
    }
    (*(f32 *)((char *)(temp_s4) + 0x2BC)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x2A4));
    (*(f32 *)((char *)(temp_s4) + 0x2C0)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x2A8));
    (*(f32 *)((char *)(temp_s4) + 0x2C4)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x2AC));
    (*(f32 *)((char *)(temp_s4) + 0x2A4)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x2BC));
    (*(f32 *)((char *)(temp_s4) + 0x390)) = 0.0f;
    (*(f32 *)((char *)(temp_s4) + 0x1A4)) = 20.0f;
    (*(f32 *)((char *)(temp_s4) + 0x19C)) = 20.0f;
    (*(f32 *)((char *)(temp_s4) + 0x1A8)) = 15.0f;
    (*(f32 *)((char *)(temp_s4) + 0x1A0)) = 15.0f;
    (*(f32 *)((char *)(temp_s4) + 0x2AC)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x2C4));
    (*(f32 *)((char *)(temp_s4) + 0x2A8)) = (f32) (*(f32 *)((char *)(temp_s4) + 0x2C0));
    temp_v0_10 = func_151149AC(0xF8U);
    if (temp_v0_10 != NULL) {
        (*(s8 *)((char *)(temp_v0_10) + 0x6E)) = 1;
    }
    temp_s0_2 = func_151149AC(0xF6U);
    temp_v0_11 = func_151149AC(0xF7U);
    if ((temp_s0_2 != NULL) && (temp_v0_11 != NULL)) {
        if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 0) {
            (*(s8 *)((char *)(temp_s0_2) + 0x6E)) = 0;
            (*(s8 *)((char *)(temp_v0_11) + 0x6E)) = 1;
            return;
        }
        (*(s8 *)((char *)(temp_s0_2) + 0x6E)) = 1;
        (*(s8 *)((char *)(temp_v0_11) + 0x6E)) = 0;
    }
}

void func_151E7DC0(void) {
    s32 var_s0;
    u8 var_a0;
    void *temp_v0;

    var_s0 = 0;
    if (!((*(s32 *)((char *)(gGameState) + 0x8)) < D_800ABA8C) || ((*(s32 *)((char *)(gGameState) + 0x3E)) != 0)) {
        do {
            if ((*(s32 *)((char *)(gGameState) + 0x3E)) == 0) {
                var_a0 = *(&D_8008FFB0 + (var_s0 * 6) + (*(s32 *)((char *)(gGameState) + 0x2C)));
            } else {
                var_a0 = *(&D_8008FFB0 + (var_s0 * 6));
            }
            temp_v0 = func_151149AC(var_a0);
            var_s0 += 1;
            if (temp_v0 != NULL) {
                (*(s32 *)((char *)(temp_v0) + 0x80)) = 2;
            }
        } while (var_s0 != 2);
    }
}

void func_151E7E9C(void) {
    if (D_800E0BE9 == 2) {
        func_10017870(1);
        return;
    }
    if (D_800E0BE9 == 0) {
        func_10017870(2);
        return;
    }
    func_10017870(4);
}

void func_151E7EF8(void) {
    s32 temp_t6;
    s32 var_v1;
    s32 *var_v0;

    func_151E7E9C();
    var_v0 = func_151DDC20;
    var_v1 = 0;
    if ((u32) func_151DDC20 < (u32) func_151DE7D4) {
        do {
            temp_t6 = *var_v0;
            var_v0 += 4;
            var_v1 += temp_t6;
        } while ((u32) var_v0 < (u32) func_151DE7D4);
    }
    if (var_v1 != 0xBFC924E3) {
        D_local_osSpTaskLoad_20AE20 = 0;
    }
}

void func_151E7F60(s32 arg0, s32 arg1) {
    s32 sp4C;
    s32 sp3C;
    void **sp30;
    void *sp2C;
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_v1;
    u8 *temp_v0_4;
    u8 temp_t1;
    void **temp_a0_3;
    void **temp_t9;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v1;

    temp_t9 = &(&D_800E0BA0)[arg0];
    sp30 = temp_t9;
    temp_a2 = *temp_t9;
    if (temp_a2 != NULL) {
        func_15060F28(temp_a2, 1, temp_a2);
    }
    temp_v0 = func_15083E0C((arg0 + 0x10) & 0xFF);
    temp_t0 = (arg1 * 8) + &D_800AB57C;
    temp_a1 = temp_v0;
    temp_t1 = (*(s32 *)((char *)(temp_t0) + 0x5));
    var_v1 = arg0;
    temp_a0 = (temp_v0 * 0x30) + D_800D20FC;
    if ((*(s32 *)((char *)(gGameState) + 0x2C)) == 7) {
        var_v1 = arg0 + 1;
    }
    (*(s32 *)((char *)(temp_a0) + 0x4)) = temp_t1;
    temp_v0_2 = (var_v1 * 8) + &D_800AB940;
    (*(s16 *)((char *)(temp_a0) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x0));
    (*(s16 *)((char *)(temp_a0) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x2));
    (*(s16 *)((char *)(temp_a0) + 0x8)) = (s16) ((*(s16 *)((char *)(temp_a0) + 0x8)) + (*(s16 *)((char *)(temp_t0) + 0x4)));
    (*(s16 *)((char *)(temp_a0) + 0xA)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x4));
    (*(u8 *)((char *)(temp_a0) + 0xC)) = (u8) (*(u8 *)((char *)(temp_v0_2) + 0x6));
    if (temp_t1 == 0x53) {
        (*(s32 *)((char *)(temp_a0) + 0xD)) = 0x24;
    } else {
        (*(s32 *)((char *)(temp_a0) + 0xD)) = 0xE;
    }
    sp2C = temp_t0;
    sp3C = (s32) temp_t1;
    temp_v0_3 = func_15082A44(temp_a0, temp_a1, 0, 0, 0);
    sp4C = temp_v0_3;
    if (temp_v0_3 != 0) {
        temp_v1 = (temp_v0_3 * 0x32C) + &gObjects;
        temp_a0_2 = (char *)(temp_v1) - 0x32C;
        *sp30 = temp_a0_2;
        temp_f0 = (*(s32 *)((char *)(temp_t0) + 0x0));
        (*(s32 *)((char *)(temp_v1) - 0x327)) = 7;
        (*(u16 *)((char *)(temp_v1) - 0x34)) = (u16) ((*(u16 *)((char *)(temp_v1) - 0x34)) | 3);
        (*(s32 *)((char *)(temp_v1) - 0x1DC)) = temp_f0;
        (*(s32 *)((char *)(temp_v1) - 0x1E0)) = temp_f0;
        if (((*(s32 *)((char *)(temp_v1) - 0x328)) == 0) || ((*(s32 *)((char *)(temp_a0_2) + 0x4)) == 0x80)) {
            sp2C = temp_t0;
            sp3C = (s32) temp_t1;
            temp_v0_4 = allocate_memory(0x1C0, 1, 0, 0);
            (*(u8 **)((char *)(&D_800CC2C0) + (sp4C * 0x32C))) = temp_v0_4;
            bzero(temp_v0_4, 0x1C0);
        }
        temp_a0_3 = (sp4C * 0x32C) - 0x32C + &gObjects;
        if (temp_t1 == 0x3B) {
            (*(s8 *)((char *)(temp_a0_3) + 0x68)) = (s8) (arg0 + 1);
        }
        sp30 = temp_a0_3;
        func_15083384(temp_a0_3, (*(s32 *)((char *)(temp_t0) + 0x6)));
        func_1505E650(temp_a0_3, 0xF, 1.0f, 0, 0.0f, 0.0f, 0);
    }
}

void func_151E81EC(void) {
    D_800E0BA4 = 0;
    D_800E0BA4 = 0;
    D_800E0BA8 = 0;
    D_800E0BA8 = 0;
    D_8008FD84 = 0;
}

void func_151E8214(void) {
    if (D_800E0B94 != 8) {
        if (func_1517EFDC() == 0) {
            D_800E0A90 = 0;
        }
        if (D_800E0A90 >= 0xA1) {
            D_8008FDCC = 0;
            D_800E0B94 = 8;
            D_8008FD8C = 1;
            D_8008FD90 = 1;
            D_8008FDA4 = 0;
            D_800E0A80 = -2;
            D_800E0A90 = 0;
            D_800D2E43 = 1;
        }
    }
}

void func_151E82B8(void) {
    func_151E530C();
    if ((D_800E0A80 == -1) && (D_800E0A90 >= 0x79)) {
        D_800E0B94 = 9;
        D_800E0A90 = 0;
        D_8008FDCC = 0xFF;
        D_800E0A80 = 0;
        func_1501C730(6, 0x1D, 0U, 0, 1);
        return;
    }
    if (D_800E0A80 == -2) {
        D_800E0A80 = 0;
    }
    if ((D_800E0A90 >= 0x1BE) && (D_800E0A80 >= 0)) {
        if ((**(u8 **)((char *)(D_800E0BD8) + (D_800E0A80 * 4))) != 0x2A) {
            do {
                D_800E0A80 += 1;
            } while ((**(u8 **)((char *)(D_800E0BD8) + (D_800E0A80 * 4))) != 0x2A);
        }
        D_800E0A80 += 1;
        if ((**(u8 **)((char *)(D_800E0BD8) + (D_800E0A80 * 4))) == 0x3D) {
            D_800E0A80 = -1;
        }
        D_800E0A90 = 0;
    }
}

void func_151E83E8(void) {
    if (D_800E0A80 == 0) {
        D_800E0A80 = -1;
        func_1501D348(0x1D, 6, 0, 0, 0);
    }
    func_151E530C();
    if (func_1517EFDC() == 0) {
        D_800E0A90 = 0;
    }
    if (D_800E0A90 >= 0x65) {
        func_151E5034();
        D_8008FDA4 = 0;
        D_800E0B94 = 1;
        D_800E0A90 = 0;
        D_800D2E40 = 0;
        func_1501C730(6, 0x21, 0U, 0, 1);
    }
}
