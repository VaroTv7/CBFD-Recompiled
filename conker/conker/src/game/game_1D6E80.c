/**
 * Auto-decompiled from asm/1D6E80.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_10010FFC();           /* extern */
s32 func_15045800();           /* extern */
s32 func_1504697C();            /* extern */
void func_1504715C();                     /* extern */
u32 random_u32();                     /* extern */
f32 random_float();                        /* extern */
s32 func_151303BC();                     /* extern */
s32 func_1513418C();                  /* extern */
void * func_151346EC();                    /* extern */
void * func_1513470C();                    /* extern */
s32 func_15134DAC();            /* extern */
void * func_151352EC();                                  /* extern */
void * func_1513530C();                                  /* extern */
void * func_1513F6C0();                              /* extern */
void * func_15142314();            /* extern */
void * func_15147D64();                  /* extern */
void * func_15153F18();         /* extern */
void * func_1515A238(); /* extern */
s32 func_1515A920();                   /* extern */
void * func_15190770();                /* extern */
void * func_1519F3B8();                            /* extern */
void * func_1519F400();                                  /* extern */
void * func_151ABE40();         /* extern */
u8 func_151D8E20();                           /* extern */
void * func_151D9014(); /* extern */
s32 func_151EF610();                                /* extern */
void * memcpy();                            /* extern */
void func_151AA264();         /* static */
s32 func_151AB2C4(void *arg0, f32 arg1);
void func_151ABE00();                     /* static */
extern s32 D_800A8F70;
extern f32 D_800A8F74;
extern f32 D_800A8F78;
extern f32 D_800A8F7C;
extern f32 D_800A8F80;
extern f32 D_800A8F84;
extern f32 D_800A8F88;
extern f32 D_800A8F8C;
extern f32 D_800A8F90;
extern f32 D_800A8F94;
extern f32 D_800A8F98;
extern f32 D_800A8F9C;
extern f32 D_800A8FA0;
extern f32 D_800A8FA4;
extern f32 D_800A8FA8;
extern f32 D_800A8FAC;
extern f32 D_800A8FB0;
extern f32 D_800A8FB4;
extern f32 D_800A8FB8;
extern f32 D_800A8FBC;
extern f32 D_800A8FC0;
extern f32 D_800A8FC4;
extern f32 D_800A8FC8;
extern f32 D_800A8FCC;
extern f32 D_800A8FD0;
extern f32 D_800A8FD4;
extern f32 D_800A8FD8;
extern f32 D_800A8FDC;
extern f32 D_800A8FE0;
extern f32 D_800A8FE4;
extern f32 D_800A8FE8;
extern f32 D_800A8FEC;
extern f32 D_800A8FF0;
extern f32 D_800A8FF4;
extern f32 D_800A8FF8;
extern f32 D_800A8FFC;
extern f32 D_800A9000;
extern f32 D_800A9004;
extern f32 D_800A9008;
extern f32 D_800A900C;
extern f32 D_800A9010;
extern f32 D_800A9014;
extern f32 D_800A9018;
extern f32 D_800A901C;
extern s32 D_800AB414;
s32 func_151AA48C(void *arg0, f32 arg1);

void func_151A99D0(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    f32 temp_f0;
    void *temp_a3;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_v0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x118));
    if (D_800A8F74 < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_v0) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp2C = temp_a3;
    sp38 = (*(s32 *)((char *)(temp_v0) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp2C, 3, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
}

void func_151A9AA4(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    void *temp_a3;
    void *temp_s0;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_s0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_s0) + 0x118));
    if (D_800A8F78 < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_s0) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp28 = temp_a3;
    sp38 = (*(s32 *)((char *)(temp_s0) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp28, 3, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        func_10010FFC(0, 0x11, 0x5208, 0, 0, temp_s0);
    }
    func_151ABE00(temp_s0);
}

void func_151A9BA0(void *arg0) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    void *temp_a3;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_v1) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x118));
    if (D_800A8F7C < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_v1) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp28 = temp_a3;
    sp3C = temp_v1;
    sp38 = (*(s32 *)((char *)(temp_v1) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp28, 1, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        func_10010FFC(0, 0x11, 0x5208, 0, 0, sp3C);
    }
}

void func_151A9CA0(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    f32 temp_f0;
    void *temp_a3;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_v0 = (*(s32 *)((char *)(temp_s0) + 0x31C));
    if ((temp_v0 == NULL) || ((*(s32 *)((char *)(temp_v0) + 0x95)) == 0)) {
        sp30 = (*(s32 *)((char *)(temp_s0) + 0x14));
        temp_f0 = (*(s32 *)((char *)(temp_s0) + 0x118));
        if (D_800A8F80 < temp_f0) {
            sp34 = temp_f0 + 100.0f;
        } else {
            sp34 = (*(s32 *)((char *)(temp_s0) + 0x18)) + 150.0f;
        }
        temp_a3 = (char *)(arg0) + 0x34;
        sp2C = temp_a3;
        sp38 = (*(s32 *)((char *)(temp_s0) + 0x1C));
        if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
            sp34 = (*(s32 *)((char *)(arg0) + 0x34));
            func_151ABE40(&sp30, sp2C, 1, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            func_10010FFC(0, 8, 0x6978, 0, 0, temp_s0);
        }
        func_151AA264(temp_s0, sp2C);
        func_151ABE00(temp_s0);
    }
}

void func_151A9DC0(void *arg0) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    void *temp_a3;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_v1) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x118));
    if (D_800A8F84 < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_v1) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp28 = temp_a3;
    sp3C = temp_v1;
    sp38 = (*(s32 *)((char *)(temp_v1) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp28, 2, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        func_10010FFC(0, 0x11, 0x5208, 0, 0, sp3C);
    }
}

void func_151A9EC0(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    void *temp_a3;
    void *temp_s0;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_s0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_s0) + 0x118));
    if (D_800A8F88 < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_s0) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp28 = temp_a3;
    sp38 = (*(s32 *)((char *)(temp_s0) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp28, 2, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        func_10010FFC(0, 8, 0x6978, 0, 0, temp_s0);
    }
    func_151AA264(temp_s0, sp28);
    func_151ABE00(temp_s0);
}

void func_151A9FC8(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    f32 temp_f0;
    void *temp_a3;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_v0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x118));
    if (D_800A8F8C < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_v0) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp2C = temp_a3;
    sp38 = (*(s32 *)((char *)(temp_v0) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp2C, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
}

void func_151AA09C(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    f32 temp_f0;
    void *temp_a3;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_v0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x118));
    if (D_800A8F90 < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_v0) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp2C = temp_a3;
    sp38 = (*(s32 *)((char *)(temp_v0) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp2C, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
}

void func_151AA170(s32 arg0) {

}

void func_151AA17C(void *arg0) {
    u8 sp20;
    s32 sp1C;
    s32 *sp18;

    sp1C = (*(s32 *)((char *)(arg0) + 0x18));
    sp18 = &sp1C;
    sp20 = (*(s32 *)((char *)(arg0) + 0x1C));
    func_15147D64(&sp1C, 0xA, arg0);
    func_151494E0(sp18, 0xA);
    func_1519F3B8(arg0);
}

void func_151AA1D0(void) {
    func_1519F400();
}

void func_151AA1F0(void) {
    func_1519F400();
}

void func_151AA210(void *arg0) {
    u8 sp20;
    s32 sp1C;
    s32 *sp18;

    sp1C = (*(s32 *)((char *)(arg0) + 0x18));
    sp18 = &sp1C;
    sp20 = (*(s32 *)((char *)(arg0) + 0x1C));
    func_15147D64(&sp1C, 0xA, arg0);
    func_151494E0(sp18, 0xA);
    func_1519F3B8(arg0);
}

void func_151AA264(void *arg0, void *arg1) {
    s8 sp45;
    s8 sp44;
    s8 sp43;
    s8 sp42;
    s16 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s8 sp28;
    void *sp24;
    u8 sp20;
    s32 sp1C;
    s32 sp18;

    if ((*(s32 *)((char *)(arg1) + 0x1C)) & 1) {
        sp18 = 0;
        sp1C = 0;
        sp28 = 1;
        sp40 = 0x1E;
        sp42 = 0xE;
        sp43 = 2;
        sp44 = -1;
        sp45 = 0;
        sp24 = arg0;
        sp20 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp2C = 0.0f;
        sp30 = 0.0f;
        sp34 = 0.0f;
        sp38 = 25.0f;
        sp3C = D_800A8F94;
        func_1513418C(&sp18, 0, 0xFF, 0);
    }
}

void func_151AA30C(f32 arg0, f32 arg1, f32 arg2, void * arg3, f32 arg4, void *arg6) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s32 sp48;
    u32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f8;
    void *temp_a0;

    temp_a0 = (*(s32 *)((char *)(arg6) + 0x1C));
    if (!((*(s32 *)((char *)(temp_a0) + 0x118)) < arg1)) {
        if (func_1515A920(temp_a0, &sp48) == 0) {
            sp48 = 0;
        }
        sp50 = 0.0f;
        temp_f8 = ((random_float() * 196.0f) + 199.0f) * D_800A8F98;
        sp58 = 0.0f;
        sp5C = arg0;
        sp60 = arg1;
        sp64 = arg2;
        sp54 = -(temp_f8 * arg4);
        sp38 = random_float();
        sp3C = random_float();
        sp40 = random_u32();
        temp_f14 = (sp38 * D_800A8F9C) + 454.0f;
        temp_f12 = temp_f14 * D_800A8FA0;
        func_1515A238(temp_f12, temp_f14, &sp5C, &sp50, temp_f12, 0x3F7901C1, sp48, (sp3C * 101.0f) + 101.0f, (sp40 % 31U) + 0x32, (random_u32() % 101U) + 0x64, 1, (s32) (*(s32 *)((char *)(arg6) + 0xC)), (s32) (*(s32 *)((char *)(arg6) + 0x1)));
    }
}

s32 func_151AA48C(void *arg0, f32 arg1) {
    s8 sp6D;
    s8 sp6C;
    f32 sp68;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s8 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s8 sp3C;
    void *sp38;
    u8 sp34;
    s32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 sp24;
    s32 sp20;
    s8 sp1C;
    f32 sp18;
    s32 temp_v0;
    s32 var_v1;

    sp18 = arg1;
    sp1C = 1;
    sp38 = arg0;
    sp3C = 0xF;
    sp40 = -11.0f;
    sp44 = -2.0f;
    sp4C = -11.0f;
    sp50 = -2.0f;
    sp58 = 0;
    sp5A = 0x3C;
    sp5C = 0x3C;
    sp5E = 0x12C;
    sp62 = 1;
    sp63 = 0;
    sp64 = 1;
    sp6C = 1;
    sp6D = 0;
    sp20 = 0;
    sp24 = 0x11111;
    sp34 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp48 = 8.0f;
    sp54 = 20.0f;
    sp68 = 0.5f;
    sp28 = D_800A8FA4;
    sp2C = D_800A8FA8;
    temp_v0 = func_15134DAC(&sp34, 0x18, arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp30 = temp_v0;
        memcpy(temp_v0 + 0x80, &sp18, 0x18);
        var_v1 = sp30;
    }
    return var_v1;
}

s32 func_151AA5A4(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x88)) = 0;
    if (random_u32() & 1) {
        func_10010F88(0xA, 0x55F0, (s16) ((func_151EF610() % 1200) - 0x258), 0, 0, (s32) (*(s16 *)((char *)(arg0) + 0x58)), (s32) (*(s16 *)((char *)(arg0) + 0x5C)), (s32) (*(s16 *)((char *)(arg0) + 0x60)), 0x1F4, 0x9C4);
    } else {
        func_10010F88(0xB, 0x55F0, (s16) ((func_151EF610() % 1200) - 0x258), 0, 0, (s32) (*(s16 *)((char *)(arg0) + 0x58)), (s32) (*(s16 *)((char *)(arg0) + 0x5C)), (s32) (*(s16 *)((char *)(arg0) + 0x60)), 0x1F4, 0x9C4);
    }
    return 1;
}

void func_151AA6D8(void *arg0, void *arg1, void * arg2, void * arg3, f32 arg4, void *arg5) {
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp52;
    s16 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp3C;
    f32 sp38;
    s8 sp37;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s8 sp23;
    s8 sp22;
    s8 sp21;
    s8 sp20;
    f32 sp1C;
    f32 temp_f2;
    f32 temp_f4;
    s32 temp_v0;

    sp65 = 0x2F;
    sp50 = 0xC01;
    sp48 = 0x200005;
    sp4C = 0;
    sp62 = 0;
    sp61 = 0;
    sp60 = 0;
    sp5F = 0;
    sp5E = 0;
    sp5D = 0;
    sp5C = 0;
    sp58 = 0;
    sp54 = 0;
    sp64 = 0xFF;
    sp6A = 0;
    sp6C = 0.0f;
    spA0 = 0x1207;
    spA8 = 5;
    spA9 = 5;
    spAA = 4;
    spAB = -1;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp66 = 0x14;
    sp68 = 0xC;
    sp20 = 0;
    sp21 = 0;
    sp34 = 0;
    sp35 = 0;
    sp2C = 3.5f;
    sp30 = D_800A8FAC;
    temp_f4 = ((*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0))) * (*(s32 *)((char *)(arg5) + 0x74));
    sp90 = temp_f4;
    sp94 = ((*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4))) * (*(s32 *)((char *)(arg5) + 0x74));
    sp98 = ((*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8))) * (*(s32 *)((char *)(arg5) + 0x74));
    (*(s32 *)((char *)&(sp78) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp78) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp78) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    sp78 += temp_f4 * arg4;
    sp7C += sp94 * arg4;
    sp80 += sp98 * arg4;
    if (random_u32(arg4, arg5) & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    sp52 = (random_u32() % 51U) + 0x32;
    sp63 = (random_u32() % 101U) + 0x64;
    temp_f2 = (random_float() * 39.0f) + 31.0f;
    sp70 = temp_f2;
    sp1C = temp_f2;
    sp74 = temp_f2;
    sp22 = (random_u32() % 5U) + 4;
    sp23 = (random_u32() % 5U) + 4;
    sp24 = ((random_float() * 0.25f) + D_800A8FB0) * sp1C;
    sp28 = ((random_float() * 0.25f) + D_800A8FB4) * sp1C;
    sp36 = (random_u32() % 5U) + 4;
    sp37 = (random_u32() % 5U) + 4;
    sp38 = ((random_float() * D_800A8FB8) + D_800A8FBC) * sp1C;
    sp3C = ((random_float() * D_800A8FC0) + D_800A8FC4) * sp1C;
    sp9C = ((random_float() * 70.0f) + 73.0f) * D_800A8FC8;
    temp_v0 = func_151303BC(&sp48, 2, 0x28);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp1C, 0x28);
    }
}

f32 func_151AAA4C(void *arg0) {
    f32 temp_f2;

    temp_f2 = (func_151423D8((((u32) (*(u32 *)((char *)(arg0) + 0x88)) >> 0x10) - 0x40) & 0xFF) * (*(u32 *)((char *)(arg0) + 0x94))) + (*(u32 *)((char *)(arg0) + 0x90));
    (*(s32 *)((char *)(((char *)(arg0) + 0x80)) + 0x8)) = (s32) ((*(s32 *)((char *)(arg0) + 0x88)) + ((*(s32 *)((char *)(arg0) + 0x8C)) * D_800BE9E4));
    return temp_f2;
}

void func_151AAABC(void *arg0) {
    void *sp2C;
    void *sp1C;
    s32 temp_a0;
    void *temp_a2;
    void *var_v1;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x18));
    var_v1 = (char *)(arg0) + 0x58;
    if ((*(s32 *)((char *)(arg0) + 0x6C)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(var_v1) + 0x14)) + 0x80)) + 0x4)) = 1;
    } else {
        sp2C = temp_a2;
        var_v1 = (char *)(arg0) + 0x58;
        (*(f32 *)((char *)(var_v1) + 0x14)) = func_151AA48C(temp_a2, (f32)(s32)(arg0));
    }
    temp_a0 = (*(s32 *)((char *)(var_v1) + 0x1C));
    if (temp_a0 != 0) {
        (*(s32 *)((char *)((temp_a0 + 0x58)) + 0x4)) = 1;
        return;
    }
    sp1C = var_v1;
    (*(s32 *)((char *)(var_v1) + 0x1C)) = func_151AB2C4(temp_a2, (f32)(s32)(arg0));
}

void func_151AAB50(void *arg0) {
    (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x80)) + 0x58)) + 0x14)) = 0;
    func_151352EC();
}

void func_151AAB78(void *arg0) {
    (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x80)) + 0x58)) + 0x14)) = 0;
    func_1513530C();
}

s32 func_151AABA0(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((*(s32 *)((char *)(arg0) + 0x84)) == 0) {
        var_v1 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = 0U;
    return var_v1;
}

void func_151AABC4(void *arg0, s32 arg1) {
    s32 spBC;
    f32 spC0;
    f32 spC4;
    void * sp9C;
    f32 sp98;
    f32 sp90;
    f32 sp8C;
    s32 sp88;
    u8 sp87;
    f32 sp80;
    f32 sp7C;
    s32 sp78;
    s32 sp74;
    s16 sp72;
    s16 sp70;
    f32 sp6C;
    u8 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    void * sp34;
    s16 sp32;
    s16 sp30;
    s16 sp2E;
    s16 sp2C;
    f32 temp_f0;

    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0)) {
        sp87 = func_151D8E20(arg0);
        func_15142314((*(s32 *)((char *)(arg0) + 0x1D4)), *(&D_800A8F70 + arg1), &spBC, arg0);
        func_1504715C(&sp98, arg0);
        temp_f0 = spC0 + 50.0f;
        sp8C = temp_f0;
        sp88 = spBC;
        sp90 = spC4;
        if (func_1504697C(&sp88, 0, temp_f0 - 100.0f, &sp98) != 0) {
            sp78 = spBC;
            sp7C = sp98;
            sp80 = spC4;
            func_151DBCBC(sp87, 40.0f, 0x96, &sp9C, &sp78, 0xFF, 1);
            (*(s32 *)((char *)&(sp34) + 0x0)) = (s32) (*(s32 *)((char *)&(sp78) + 0x0));
            (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)&(sp78) + 0x4));
            (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)&(sp78) + 0x8));
            sp5A = 3;
            sp40 = 2.5f;
            sp58 = 3;
            sp2E = 0xFF;
            sp30 = -0x40;
            sp32 = 0x1A;
            sp2C = 0;
            sp5C = 3;
            sp5E = 1;
            sp60 = 0x1E;
            sp62 = 0x14;
            sp64 = 0x9B;
            sp66 = 0x64;
            sp70 = 0x10;
            sp72 = 0xF;
            sp74 = 0;
            sp44 = D_800A8FCC;
            sp48 = D_800A8FD0;
            sp4C = D_800A8FD4;
            sp50 = D_800A8FD8;
            sp54 = D_800A8FDC;
            sp68 = sp87;
            sp6C = 0.0f;
            func_15153F18(&sp2C, &sp34, &sp98, 0xFF, 1);
        }
    }
}

s32 func_151AADBC(void *arg0) {
    s32 temp_t6;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) * 0x10;
    var_v1 = temp_t6;
    if (temp_t6 >= 0x100) {
        var_v1 = 0xFF;
    }
    if (var_v1 < (s32) (*(s32 *)((char *)(temp_v0) + 0x1B))) {
        (*(u8 *)((char *)(temp_v0) + 0x1B)) = (u8) var_v1;
    }
    return 1;
}

void func_151AADF8(void *arg0) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s32 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    u8 sp94;
    u8 sp93;
    u8 sp92;
    s8 sp91;
    s8 sp90;
    s32 sp8C;
    s32 sp88;
    s8 sp86;
    s16 sp84;
    s32 sp80;
    f32 sp7C;
    s16 sp78;
    s16 sp76;
    s16 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s8 sp64;
    void *sp60;
    f32 sp5C;
    u8 sp5B;
    u32 sp50;
    u32 sp4C;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f6;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((*(s32 *)((char *)(arg0) + 0x70)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x70)) + 0xB0)) + 0x4)) = 1;
        return;
    }
    spA8 = (*(s32 *)((char *)(temp_v0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x118));
    if (D_800A8FE0 < temp_f0) {
        spAC = temp_f0 + 100.0f;
    } else {
        spAC = (*(s32 *)((char *)(temp_v0) + 0x18)) + 150.0f;
    }
    spB0 = (*(s32 *)((char *)(temp_v0) + 0x1C));
    if (func_15045800(&spA8, 0, spAC - 300.0f, (char *)(arg0) + 0x34) != 0) {
        sp5B = func_151D8E20();
        temp_f18 = (*(s32 *)((char *)(arg0) + 0x34));
        spAC = temp_f18;
        temp_f6 = random_float() * 30.0f;
        sp64 = 1;
        sp5C = temp_f6 + 50.0f;
        sp76 = 0xA;
        sp78 = 0xA;
        temp_v0_2 = (sp5B * 3) + &D_800AB414;
        sp86 = 0x38;
        sp84 = 0x12C;
        sp8C = (s32) ((32768.0f * 0.5f) + D_800A8FE4);
        sp80 = 0x60300;
        sp90 = 0x96;
        sp60 = arg0;
        sp74 = 0;
        sp88 = 0;
        sp91 = 0xFF;
        sp95 = 0xFF;
        sp98 = 0x440001;
        sp96 = 0;
        sp97 = 6;
        sp68 = D_800A8FE4;
        sp6C = 32768.0f;
        sp7C = D_800A8FE8;
        sp70 = 0.0f;
        sp92 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
        sp93 = (*(s32 *)((char *)(temp_v0_2) + 0x1));
        sp94 = (*(s32 *)((char *)(temp_v0_2) + 0x2));
        sp4C = random_u32(32768.0f);
        sp50 = random_u32();
        temp_v0_3 = func_1513C73C(&sp80, 7, 1, (char *)(arg0) + 0x38, spA8, temp_f18, spB0, sp5C, sp5C, sp4C & 0xFF, ((random_u32() & 1) * 2) + (sp50 & 1), 0x20, 0xFF, 1);
        (*(s32 *)((char *)(((char *)(arg0) + 0x58)) + 0x18)) = temp_v0_3;
        if (temp_v0_3 != 0) {
            memcpy(temp_v0_3 + 0xB0, (f32 *) &sp60, 0x20);
        }
    }
}

s8 func_151AB090(void *arg0) {
    s8 sp27;
    void *sp1C;
    s32 temp_a0;
    s8 var_a2;
    void *temp_v1;

    var_a2 = 1;
    temp_v1 = (char *)(arg0) + 0xB0;
    if ((*(s32 *)((char *)(arg0) + 0xB4)) == 0) {
        var_a2 = 0;
    }
    (*(s32 *)((char *)(temp_v1) + 0x4)) = 0;
    (*(s16 *)((char *)(temp_v1) + 0x14)) = (s16) ((*(s16 *)((char *)(temp_v1) + 0x14)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_v1) + 0x14)) < 0) {
        sp1C = temp_v1;
        sp27 = var_a2;
        (*(s16 *)((char *)(temp_v1) + 0x14)) = (s16) ((random_u32((f32)(s32)(arg0), (void *) var_a2) % (u32) ((*(s16 *)((char *)(temp_v1) + 0x18)) + 1)) + (*(s16 *)((char *)(temp_v1) + 0x16)));
        (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((random_float() * (*(f32 *)((char *)(temp_v1) + 0xC))) + (*(f32 *)((char *)(temp_v1) + 0x8)));
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x24));
    (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (temp_a0 + (s32) (((*(s32 *)((char *)(temp_v1) + 0x10)) - (f32) temp_a0) * (*(s32 *)((char *)(temp_v1) + 0x1C))));
    return var_a2;
}

s32 func_151AB180(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0xB0))) + 0x70)) = 0;
    (*(s32 *)((char *)(arg0) + 0xB0)) = NULL;
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) ((*(s32 *)((char *)(arg0) + 0x18)) | 2);
    func_1513F6C0(0, 0);
    return 0;
}

void func_151AB1C4(void *arg0) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    void *temp_a3;
    void *temp_s0;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_s0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_s0) + 0x118));
    if (D_800A8FEC < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_s0) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp28 = temp_a3;
    sp38 = (*(s32 *)((char *)(temp_s0) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp28, 3, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        func_10010FFC(0, 0x11, 0x5208, 0, 0, temp_s0);
    }
    func_151AA264(temp_s0, sp28);
}

s32 func_151AB2C4(void *arg0, f32 arg1) {
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s16 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s8 sp38;
    void *sp34;
    u8 sp30;
    s32 sp2C;
    s32 sp28;
    f32 sp24;
    s16 sp22;
    s8 sp20;
    f32 sp1C;
    s32 sp18;
    s32 temp_v0;
    s32 var_v1;

    sp22 = 0;
    sp20 = 1;
    sp1C = arg1;
    sp28 = 0;
    sp2C = 0;
    sp24 = (*(s32 *)((char *)(arg0) + 0x118));
    sp38 = 1;
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp44 = 0.0f;
    sp50 = 0x12C;
    sp52 = 0xA;
    sp53 = 3;
    sp54 = 0;
    sp55 = 1;
    sp34 = arg0;
    sp30 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp48 = 25.0f;
    sp4C = D_800A8FF0;
    temp_v0 = func_1513418C(&sp28, 0xC, 0xFF, 0);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp18 = temp_v0;
        memcpy(temp_v0 + 0x58, &sp1C, 0xC);
        var_v1 = sp18;
    }
    return var_v1;
}

void func_151AB3A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg5, void *arg6) {
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp52;
    s16 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s8 sp37;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s8 sp23;
    s8 sp22;
    s8 sp21;
    s8 sp20;
    f32 sp1C;
    f32 temp_f2;
    s32 temp_v0;

    sp50 = 0xC01;
    sp65 = 0x2F;
    sp48 = 0x200005;
    sp4C = 0;
    sp62 = 0;
    sp61 = 0;
    sp60 = 0;
    sp5F = 0;
    sp5E = 0;
    sp5D = 0;
    sp5C = 0;
    sp58 = 0;
    sp54 = 0;
    sp64 = 0xFF;
    sp6A = 0;
    sp6C = 0.0f;
    spA0 = 0x3207;
    spA8 = 5;
    spA9 = 5;
    spAA = 4;
    spAB = -1;
    sp78 = arg0;
    sp7C = arg1;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp66 = 0x1E;
    sp68 = 8;
    sp80 = arg2;
    sp40 = (*(s32 *)((char *)(arg6) + 0x60));
    sp2C = 4.0f;
    sp30 = 0.25f;
    sp20 = 0;
    sp21 = 0;
    sp34 = 0;
    sp35 = 0;
    sp90 = -arg3 * D_800A8FF4;
    sp94 = 0.0f;
    sp98 = -arg5 * D_800A8FF4;
    if (random_u32() & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    sp52 = (random_u32() % 51U) + 0x6A;
    sp63 = (random_u32() % 101U) + 0x64;
    temp_f2 = (random_float() * 62.0f) + 41.0f;
    sp70 = temp_f2;
    sp1C = temp_f2;
    sp74 = temp_f2;
    sp22 = (random_u32() % 5U) + 4;
    sp23 = (random_u32() % 5U) + 4;
    sp24 = ((random_float() * 0.25f) + D_800A8FF8) * sp1C;
    sp28 = ((random_float() * 0.25f) + D_800A8FFC) * sp1C;
    sp36 = (random_u32() % 5U) + 4;
    sp37 = (random_u32() % 5U) + 4;
    sp38 = ((random_float() * D_800A9000) + D_800A9004) * sp1C;
    sp3C = ((random_float() * D_800A9008) + D_800A900C) * sp1C;
    sp9C = ((random_float() * 60.0f) + 21.0f) * D_800A9010;
    temp_v0 = func_151303BC(&sp48, 2, 0x28);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp1C, 0x28);
    }
}

u8 func_151AB6B8(void *arg0) {
    u8 sp2F;
    void *sp24;
    u8 var_t0;
    void *temp_v1;
    void *var_v1;

    var_t0 = 1;
    var_v1 = (char *)(arg0) + 0x58;
    if (((*(s32 *)((char *)(arg0) + 0x5E)) != 0) && !(D_800DBFF0->unk5F0 & 1)) {
        temp_v1 = (char *)(arg0) + 0x58;
        sp2F = 1;
        sp24 = temp_v1;
        func_100111C8((*(s32 *)((char *)(temp_v1) + 0x6)));
        var_v1 = temp_v1;
        var_t0 = 1;
        (*(s32 *)((char *)(var_v1) + 0x6)) = 0U;
    } else if (((*(s32 *)((char *)(var_v1) + 0x6)) == 0) && (D_800DBFF0->unk5F0 & 1)) {
        sp24 = var_v1;
        sp2F = 1;
        var_t0 = 1;
        (*(s32 *)((char *)(var_v1) + 0x6)) = func_10010F30(0x355, 0x7D00, 0x40, 0, 0);
    }
    if ((*(s32 *)((char *)(var_v1) + 0x4)) == 0) {
        var_t0 = 0;
    }
    (*(s32 *)((char *)(var_v1) + 0x4)) = 0U;
    return var_t0;
}

void func_151AB788(void *arg0) {
    void *sp18;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x58)) + 0x58;
    if ((*(s32 *)((char *)(arg0) + 0x5E)) != 0) {
        sp18 = temp_v0;
        func_100111C8((*(s32 *)((char *)(arg0) + 0x5E)));
    }
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = 0;
    func_151346EC(arg0, arg0);
}

void func_151AB7D8(void *arg0) {
    void *sp18;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x58)) + 0x58;
    if ((*(s32 *)((char *)(arg0) + 0x5E)) != 0) {
        sp18 = temp_v0;
        func_100111C8((*(s32 *)((char *)(arg0) + 0x5E)));
    }
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = 0;
    func_1513470C(arg0, arg0);
}

void func_151AB828(void *arg0) {
    func_15141DA4((*(s32 *)((char *)(arg0) + 0x18)), 0, 4, arg0);
}

void func_151AB854(void *arg0) {
    s8 sp2A;
    s8 sp29;
    s8 sp28;
    s16 sp26;
    u8 sp24;
    void *sp20;
    u8 temp_v0;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x4));
    if ((temp_v0 == 0) || (temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4) || (temp_v0 == 0x96)) {
        sp20 = temp_v1;
        sp26 = 0x12C;
        sp28 = 0;
        sp29 = 0;
        sp24 = (*(s32 *)((char *)(temp_v1) + 0x3B));
        if ((*(s32 *)((char *)(temp_v1) + 0x4)) == 0x96) {
            sp2A = 3;
        } else {
            sp2A = 0;
        }
        if ((*(s32 *)((char *)(temp_v1) + 0x127)) != 0xFF) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x66)) = 0x1F4;
        }
        func_15190770(&sp20, 0, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
    }
}

void func_151AB920(s32 arg0, void * arg1) {

}

void func_151AB930(void *arg0) {
    u8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 sp30;
    u8 sp2C;
    void *sp28;
    s32 temp_v0;

    sp28 = arg0;
    sp2C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp38 = D_800A9014;
    sp30 = (s32) (*(s32 *)((char *)(arg0) + 0x84));
    sp34 = 0.0f;
    sp3C = 3.0f;
    sp40 = func_151D8E20();
    temp_v0 = func_151491F4(0x3C, -1, 0xE, 1, 9, 0x1C, 0xFF, 0);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, (f32 *) &sp28, 0x1C);
    }
}

void func_151AB9C8(void *arg0) {
    u8 sp113;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s16 temp_s0;
    s16 temp_t5;
    u32 temp_s0_2;
    u32 temp_s2;
    u8 var_v1;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;

    var_v1 = 0;
    temp_s1 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0)) == 0) {
        goto block_5;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    if ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
        goto block_5;
    }
    if ((*(s32 *)((char *)(temp_s1) + 0x8)) != (*(s32 *)((char *)(temp_v0) + 0x84))) {
block_5:
        var_v1 = 1;
    }
    sp113 = var_v1;
    if (var_v1 == 0) {
        temp_s1_2 = (char *)(arg0) + 0x28;
        sp113 = var_v1;
        (*(f32 *)((char *)(temp_s1_2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1_2) + 0xC)) + (((*(f32 *)((char *)(temp_s1_2) + 0x10)) + (random_float() * (*(f32 *)((char *)(temp_s1_2) + 0x14)))) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s1_2) + 0xC)) > 1.0f) {
            func_1504715C(&spEC, (*(s32 *)((char *)(arg0) + 0x28)));
            do {
                temp_s0 = random_u32() & 0xFF;
                temp_t5 = (random_u32() % 46U) - 0x3F;
                temp_f20 = func_151423D8(temp_t5 & 0xFF);
                temp_f22 = func_151423D8((temp_t5 - 0x40) & 0xFF);
                temp_f24 = func_151423D8(temp_s0 & 0xFF);
                temp_f26 = func_151423D8((temp_s0 - 0x40) & 0xFF);
                temp_f0 = random_float();
                temp_f12 = 30.0f * temp_f20;
                spE0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14)) + (temp_f12 * temp_f26);
                spE4 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x18)) - (75.0f * temp_f22);
                spE8 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1C)) + (temp_f12 * temp_f24);
                temp_f2 = ((temp_f0 * D_800A9018) + 500.0f) * D_800A901C;
                temp_f14 = temp_f2 * temp_f20;
                spD4 = temp_f14 * temp_f26;
                spD8 = -temp_f2 * temp_f22;
                spDC = temp_f14 * temp_f24;
                temp_f20_2 = random_float(temp_f12, temp_f14);
                temp_s0_2 = random_u32();
                temp_s2 = random_u32();
                func_151D9014(&spE0, &spD4, (*(s32 *)((char *)(temp_s1_2) + 0x18)), (temp_f20_2 * 0.5f) + -1.0f, (temp_s0_2 % 26U) + 0x20, (temp_s2 % 101U) + 0x64, (random_float() * 34.0f) + 52.0f, 1, 1.0f, 1.0f, 1, &spEC, 1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s1_2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1_2) + 0xC)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1_2) + 0xC)) > 1.0f);
        }
    }
    if (sp113 != 0) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
    }
}

void func_151ABD54(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_151ABE00(void *arg0) {
    u8 sp1C;
    void *sp18;

    sp18 = arg0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_1516944C(0x20, &sp18, 0xC, arg0);
}
