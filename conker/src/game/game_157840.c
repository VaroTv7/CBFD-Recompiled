/**
 * Auto-decompiled from asm/157840.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1501A764(); /* extern */
s32 func_15044380(); /* extern */
void * func_150495B0(); /* extern */
void * func_1507C3E0();           /* extern */
void * func_1508EF80();          /* extern */
s32 func_150A3FC4();    /* extern */
void * func_1510E8BC(); /* extern */
void * func_151236D0();                            /* extern */
void * func_15123A54();                          /* extern */
s32 func_15125490();                  /* extern */
void func_1512B1B8(); /* static */
s32 func_1512B53C();                /* static */
s32 func_1512B630(); /* static */
s32 func_1512B730();
void func_1512C150();                     /* static */
extern s32 D_80089120;
extern s32 D_80089590;
extern f32 D_800895B0;
extern s32 D_80089630;
extern f32 D_800A3650;
extern f32 D_800A3658;
extern f32 D_800A365C;
extern f32 D_800A3660;
extern f32 D_800A3664;
extern f32 D_800A3668;
extern f32 D_800A366C;
extern f32 D_800A3670;
extern f32 D_800A3674;
extern f32 D_800A3678;
extern f32 D_800A367C;
extern f32 D_800A3680;
extern f32 D_800A3684;
extern f32 D_800A3688;
extern f32 D_800A368C;
extern f32 D_800A3690;
extern f32 D_800A3694;
extern f32 D_800A3698;
extern s8 D_800CBDD2;
extern u8 D_800CBDD3;
extern u8 D_800CBDD4;
extern s32 D_800DC0C0;
extern f32 D_800DC1F0;
extern f32 D_800DC1F4;
extern f32 D_800DC1F8;
extern f32 D_800DC1FC;
extern s32 D_800DC200;
extern s32 D_800DC204;
extern s32 D_800DC206;
void func_1512AD54();
void func_1512B5FC();

void func_1512A390(void *arg0) {
    f32 sp7C;
    s32 sp78;
    s16 sp76;
    void * sp74;
    void * sp72;
    f32 sp6C;
    void *sp58;
    void *sp54;
    f32 *sp50;
    f32 *temp_a2;
    f32 *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_14;
    f32 temp_f0_15;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 var_f0;
    f32 var_f12;
    f32 var_f14;
    s16 temp_v0_6;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a3;
    void *temp_t6;
    void *temp_v0;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x3D0));
    sp58 = temp_t6;
    sp7C = (*(s32 *)((char *)(temp_t6) + 0x28));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3D4));
    if (temp_v0 != NULL) {
        sp78 = (s32) (*(s32 *)((char *)(temp_v0) + 0x4E));
        sp6C = (f32) (*(f32 *)((char *)(temp_v0) + 0x114));
    } else {
        sp78 = 0;
        func_1507C3E0(sp58, &sp76, &sp74, &sp72);
        sp6C = (f32) sp76;
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x84));
    if ((temp_v0_2 == 0) & 0x40) {
        temp_f0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x180));
        (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0;
        (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f0;
        return;
    }
    if (((*(s32 *)((char *)(arg0) + 0x23C)) != 0) || (temp_v0_2 & 0x400000) || (temp_a3 = (char *)(arg0) + 0x648, temp_v0_3 = (char *)(arg0) + 0x35C, (((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x40) != 0)) || (sp54 = temp_a3, sp50 = temp_v0_3, (func_150A3FC4((*(s32 *)((char *)(arg0) + 0x2F8)), (*(s32 *)((char *)(arg0) + 0x300)), (*(s32 *)((char *)(arg0) + 0x644)), temp_a3, temp_v0_3) == 0))) {
        temp_a1 = (char *)(arg0) + 0x648;
        temp_a2 = (char *)(arg0) + 0x35C;
        sp50 = temp_a2;
        sp54 = temp_a1;
        func_1510E8BC((char *)(arg0) + 0x644, temp_a1, temp_a2, (char *)(arg0) + 0x360, (char *)(arg0) + 0x640, 0, (*(s32 *)((char *)(arg0) + 0x2F8)), (*(s32 *)((char *)(arg0) + 0x35C)), (*(s32 *)((char *)(arg0) + 0x300)), (*(s32 *)((char *)(arg0) + 0x308)), 0, 0, D_800A3650, (*(s32 *)((char *)(arg0) + 0x2FC)), 1);
    }
    if (D_800BE9F0 == 0x28) {
        (*(f32 *)((char *)(arg0) + 0x364)) = (f32) D_800A3658;
        (*(f32 *)((char *)(arg0) + 0x360)) = (f32) D_800A3658;
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x364));
    if (D_800A3658 != temp_f0_2) {
        (*(s32 *)((char *)(arg0) + 0x360)) = temp_f0_2;
    }
    func_151236D0(arg0);
    var_f14 = D_800A365C;
    if (!((*(s32 *)((char *)(arg0) + 0x84)) & 0x10)) {
        temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x3D0));
        if (((*(s32 *)((char *)(temp_a1_2) + 0x102)) == 0) && (D_800C3671 == 0) && ((*(s32 *)((char *)(arg0) + 0x92C)) == 0) && ((*(s32 *)((char *)(temp_a1_2) + 0x17C)) < (*(s32 *)((char *)(arg0) + 0x35C)))) {
            func_15128774(arg0, temp_a1_2);
            var_f14 = D_800A3660;
        }
    }
    if (var_f14 == (*(s32 *)((char *)(arg0) + 0x35C))) {
        if (D_800BE616 != 0) {
            (*(f32 *)((char *)(arg0) + 0x35C)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x180));
        } else {
            (*(f32 *)((char *)(arg0) + 0x35C)) = (f32) D_800A3664;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x800000);
            temp_f0_3 = (*(s32 *)((char *)(arg0) + 0x2FC));
            func_1510E8BC((char *)(arg0) + 0x644, sp54, sp50, (char *)(arg0) + 0x360, (char *)(arg0) + 0x640, 0, (*(s32 *)((char *)(arg0) + 0x2F8)), temp_f0_3, (*(s32 *)((char *)(arg0) + 0x300)), (*(s32 *)((char *)(arg0) + 0x308)), 0, 0, var_f14, temp_f0_3, 1);
            var_f14 = D_800A3668;
        }
    } else {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFF7FFFFF);
    }
    temp_f0_4 = (*(s32 *)((char *)(arg0) + 0x364));
    if (var_f14 != temp_f0_4) {
        (*(s32 *)((char *)(arg0) + 0x360)) = temp_f0_4;
    }
    temp_a1_3 = (*(s32 *)((char *)(arg0) + 0x3D0));
    if ((*(s32 *)((char *)(temp_a1_3) + 0x137)) != 0) {
        temp_f0_5 = (*(s32 *)((char *)(temp_a1_3) + 0x18));
        (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_5;
        (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f0_5;
    }
    if ((D_800C3671 != 0) || ((*(s32 *)((char *)(arg0) + 0x7F4)) != 0)) {
        temp_f0_6 = (*(s32 *)((char *)(temp_a1_3) + 0x180));
        (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_6;
        (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f0_6;
        return;
    }
    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (((temp_v0_4 & 0x100) || (temp_v0_4 != 0x80)) && (temp_f0_7 = (*(s32 *)((char *)(arg0) + 0x360)), ((*(s32 *)((char *)(arg0) + 0x35C)) < temp_f0_7)) && (temp_f0_7 < (*(s32 *)((char *)(arg0) + 0x2FC)))) {
        (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f0_7;
        (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_7;
    } else {
        (*(f32 *)((char *)(arg0) + 0x354)) = (f32) (*(f32 *)((char *)(arg0) + 0x35C));
    }
    if ((*(s32 *)((char *)(arg0) + 0x92C)) != 0) {
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x354));
        if (((var_f14 == temp_f2) && (var_f12 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x180)), (temp_f2 < var_f12))) || (var_f12 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x180)), ((*(s32 *)((char *)(arg0) + 0x928)) < fabsf(temp_f2 - var_f12)))) {
            (*(s32 *)((char *)(arg0) + 0x354)) = var_f12;
        }
    } else if (D_800C3671 == 0) {
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x84));
        if (!(temp_v0_5 & 0x20000000)) {
            if (temp_v0_5 & 0x10000000) {
                temp_f12 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x180));
                if ((*(s32 *)((char *)(arg0) + 0x354)) < temp_f12) {
                    (*(s32 *)((char *)(arg0) + 0x354)) = temp_f12;
                    (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f12;
                }
            }
            if (((*(s32 *)((char *)(arg0) + 0x2C)) != 0x80) || (((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x80) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x81)) != 0)) || ((*(s32 *)((char *)(arg0) + 0x84)) & 0x800)) {
                temp_f0_8 = (*(s32 *)((char *)(arg0) + 0x2A8));
                if ((*(s32 *)((char *)(arg0) + 0x354)) < temp_f0_8) {
                    (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_8;
                }
            }
        }
    }
    if (!((*(s32 *)((char *)(arg0) + 0x84)) & 0x10000000) && ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x80)) {
        if (((*(s32 *)((char *)(arg0) + 0x5F0)) & 1) && (sp78 != 0)) {
            (*(f32 *)((char *)(arg0) + 0x35C)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x118));
        }
        if ((*(s32 *)((char *)(arg0) + 0x2C)) == 0x80) {
            temp_f0_9 = (*(s32 *)((char *)(arg0) + 0x354)) + 30.0f;
            if ((*(s32 *)((char *)(arg0) + 0x2FC)) < temp_f0_9) {
                (*(s32 *)((char *)(arg0) + 0x2FC)) = temp_f0_9;
            }
            func_1512523C(arg0, temp_a1_3);
            return;
        }
        if (((*(s32 *)((char *)(arg0) + 0x6C8)) != 0) && (temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x730)), (temp_v0_6 != 0))) {
            (*(f32 *)((char *)(arg0) + 0x348)) = (f32) temp_v0_6;
        } else {
            (*(f32 *)((char *)(arg0) + 0x348)) = (f32) (*(f32 *)((char *)(arg0) + 0x34C));
        }
        goto block_69;
    }
    (*(f32 *)((char *)(arg0) + 0x354)) = (f32) (*(f32 *)((char *)(arg0) + 0x35C));
block_69:
    (*(f32 *)((char *)(arg0) + 0x354)) = (f32) ((*(f32 *)((char *)(arg0) + 0x35C)) + ((*(f32 *)((char *)(arg0) + 0x354)) - (*(f32 *)((char *)(arg0) + 0x35C))));
    if ((!((*(s32 *)((char *)(arg0) + 0x84)) & 0x4000) || (var_f14 = D_800A366C, (func_15125490(arg0, temp_a1_3) == 0))) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xAD)) == 1) && ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x80)) {
        temp_f0_10 = (*(s32 *)((char *)(arg0) + 0x360));
        if (var_f14 != temp_f0_10) {
            (*(f32 *)((char *)(arg0) + 0x354)) = (f32) (temp_f0_10 + 50.0f);
        }
    }
    if (((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x40) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x137)) == 0)) {
        temp_f0_11 = (*(s32 *)((char *)(arg0) + 0x2A8)) - (*(s32 *)((char *)(arg0) + 0x2B4));
        if (temp_f0_11 < -5.0f) {
            (*(s32 *)((char *)(arg0) + 0x8D0)) = 2;
            (*(f32 *)((char *)(arg0) + 0x8C4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8C4)) + 10.0f);
        } else if (temp_f0_11 > 5.0f) {
            (*(s32 *)((char *)(arg0) + 0x8D0)) = 1;
            (*(f32 *)((char *)(arg0) + 0x8C4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8C4)) - 10.0f);
        } else {
            (*(s32 *)((char *)(arg0) + 0x8D0)) = 0;
            (*(s32 *)((char *)(arg0) + 0x8C4)) = 0.0f;
        }
        var_f0 = -300.0f;
        temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x8C4));
        if (temp_f2_2 < -300.0f) {

        } else if (temp_f2_2 > 300.0f) {
            var_f0 = 300.0f;
        } else {
            var_f0 = temp_f2_2;
        }
        (*(s32 *)((char *)(arg0) + 0x8C4)) = var_f0;
        func_150495B0((char *)(arg0) + 0x8CC, (*(s32 *)((char *)(arg0) + 0x8C4)), (char *)(arg0) + 0x8C8, 1.0f, 1.5f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        temp_f0_12 = (*(s32 *)((char *)(arg0) + 0x2A8)) + (*(s32 *)((char *)(arg0) + 0x8CC)) + (sp6C * D_800A3670);
        (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_12;
        temp_f2_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x180)) + (*(s32 *)((char *)(arg0) + 0x348));
        if (temp_f0_12 < temp_f2_3) {
            (*(s32 *)((char *)(arg0) + 0x354)) = temp_f2_3;
        } else {
            (*(f32 *)((char *)(arg0) + 0x354)) = (f32) (*(f32 *)((char *)(arg0) + 0x354));
        }
        temp_f2_4 = (*(s32 *)((char *)(arg0) + 0x354));
        temp_f0_13 = (*(s32 *)((char *)(arg0) + 0x35C)) + 50.0f;
        if (temp_f2_4 < temp_f0_13) {
            (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_13;
        } else {
            (*(s32 *)((char *)(arg0) + 0x354)) = temp_f2_4;
        }
        temp_f2_5 = (*(s32 *)((char *)(arg0) + 0x354));
        temp_f0_14 = (*(s32 *)((char *)(arg0) + 0x360)) + 50.0f;
        if (temp_f2_5 < temp_f0_14) {
            (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_14;
        } else {
            (*(s32 *)((char *)(arg0) + 0x354)) = temp_f2_5;
        }
        (*(s32 *)((char *)(arg0) + 0x674)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x848)) = 1U;
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x10000000);
    } else if ((*(s32 *)((char *)(arg0) + 0x848)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xEFFFFFFF);
        (*(s32 *)((char *)(arg0) + 0x8D0)) = 0;
        (*(s32 *)((char *)(arg0) + 0x848)) = 0U;
        (*(s32 *)((char *)(arg0) + 0x674)) = 1.0f;
    }
    if (((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x137)) == 0)) {
        temp_f0_15 = (*(s32 *)((char *)(arg0) + 0x35C)) + 40.0f;
        if ((*(s32 *)((char *)(arg0) + 0x2FC)) < temp_f0_15) {
            (*(s32 *)((char *)(arg0) + 0x2FC)) = temp_f0_15;
        }
    }
}

void func_1512ABF8(void) {
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_a0;
    s32 var_t3;
    void *temp_a3;
    void *temp_t8;
    void *temp_v0;

    var_t3 = 0;
    do {
        var_a0 = 0;
        temp_a3 = (var_t3 << 5) + &D_800DC200;
loop_2:
        temp_v1 = var_a0 * 8;
        temp_t8 = &D_80089590 + temp_v1;
        temp_v0 = (char *)(temp_a3) + temp_v1;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
        (*(s32 *)((char *)(temp_v0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
        if ((D_80082FA0 > 0) && (D_80082FA0 < 4)) {
            (*(s16 *)((char *)(temp_v0) + 0x0)) = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0) + 0x0)) * 0.5f);
            (*(s16 *)((char *)(temp_v0) + 0x2)) = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0) + 0x2)) * 0.5f);
        }
        if ((D_800BE9F0 == 0x1B) || (D_800BE9F0 == 0x1E)) {
            (*(s16 *)((char *)(temp_v0) + 0x0)) = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0) + 0x0)) * 0.75f);
            (*(s16 *)((char *)(temp_v0) + 0x2)) = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0) + 0x2)) * 0.75f);
        }
        temp_t6 = (var_a0 + 1) & 0xFF;
        var_a0 = temp_t6;
        if (temp_t6 < 4) {
            goto loop_2;
        }
        temp_t7 = (var_t3 + 1) & 0xFF;
        var_t3 = temp_t7;
    } while (temp_t7 < 4);
    bzero(&D_800DC0C0, 0x130);
}

void func_1512AD54(void *arg0) {
    s32 sp6C;
    f32 sp60;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    void *sp44;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    f32 sp58;
    f32 sp5C;
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x2C0));
    sp60 = temp_f12;
    var_f12 = temp_f12;
    if (func_1512B53C(temp_f12, arg0) == 0) {
        if (!((*(s32 *)((char *)(arg0) + 0x84)) & 0x10)) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x3D0));
            temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x17C));
            if ((*(s32 *)((char *)(temp_v0) + 0x180)) < temp_f0) {
                temp_f2 = temp_f0 - 40.0f;
                if (temp_f2 <= var_f12) {
                    var_f12 = temp_f2;
                }
            }
        }
        func_1501A764(var_f12, (*(s32 *)((char *)(arg0) + 0x23D)), (*(s32 *)((char *)(arg0) + 0x2BC)), var_f12, (*(s32 *)((char *)(arg0) + 0x2C4)), &D_800DC1F0, &D_800DC1F4, &D_800DC1F8);
        temp_a1 = D_800BE628 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x180);
        temp_f12_2 = (*(s32 *)((char *)(temp_a1) + 0x2C));
        temp_f4 = (s32) D_800DC1F0;
        var_v1 = (s32) temp_f12_2;
        if (temp_f4 < var_v1) {

        } else {
            var_v1 = temp_f4;
            temp_f10 = (s32) (*(s32 *)((char *)(temp_a1) + 0x30));
            if (temp_f10 < temp_f4) {
                var_v1 = temp_f10;
            }
        }
        sp6C = var_v1;
        temp_f2_2 = (*(s32 *)((char *)(temp_a1) + 0x24));
        temp_f4_2 = (s32) D_800DC1F4;
        temp_f0_2 = (f32) sp6C;
        var_v1_2 = (s32) temp_f2_2;
        if (temp_f4_2 < var_v1_2) {

        } else {
            var_v1_2 = temp_f4_2;
            temp_f10_2 = (s32) (*(s32 *)((char *)(temp_a1) + 0x28));
            if (temp_f10_2 < temp_f4_2) {
                var_v1_2 = temp_f10_2;
            }
        }
        if ((temp_f0_2 < temp_f12_2) || ((*(f32 *)((char *)(temp_a1) + 0x30)) <= temp_f0_2) || (temp_f0_3 = (f32) var_v1_2, (temp_f0_3 < temp_f2_2)) || ((*(f32 *)((char *)(temp_a1) + 0x28)) <= temp_f0_3)) {
            (*(s32 *)((char *)(arg0) + 0x5F8)) = 1;
            (*(s32 *)((char *)(arg0) + 0x8B8)) = 0;
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x8B8)) = 1;
        (*(s16 *)((char *)(arg0) + 0x8BA)) = (s16) var_v1_2;
        func_1512B1B8(temp_f12_2, arg0, sp6C, (s16) var_v1_2, (s32) D_800DC1F8);
        temp_v0_2 = (char *)(arg0) + 0x2F8;
        (*(s32 *)((char *)&(sp54) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2F8));
        (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
        (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
        sp44 = temp_v0_2;
        func_1512B730(arg0, (char *)(arg0) + 0x3EC, &D_800DC1FC);
        temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x3EC));
        if (fabsf(temp_f2_3) > 3.0f) {
            func_1508EF80(&sp54, (char *)(arg0) + 0x2BC, temp_f2_3, &sp54);
            var_f0 = 6.0f;
            var_f2 = 8.0f;
            if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 3) {
                var_f0 = 6.0f * D_800A3674;
                var_f2 = 8.0f * D_800A3674;
            }
            sp4C = var_f2;
            sp50 = var_f0;
            func_150495B0(sp44, sp54, (char *)(arg0) + 0x3FC, var_f0, var_f2, (*(s32 *)((char *)(arg0) + 0x7B4)));
            func_150495B0((char *)(arg0) + 0x2FC, sp58, (char *)(arg0) + 0x400, var_f0, var_f2, (*(s32 *)((char *)(arg0) + 0x7B4)));
            func_150495B0((char *)(arg0) + 0x300, sp5C, (char *)(arg0) + 0x404, var_f0, var_f2, (*(s32 *)((char *)(arg0) + 0x7B4)));
            (*(s32 *)((char *)(arg0) + 0x5F8)) = 0;
        } else {
            (*(s32 *)((char *)(arg0) + 0x5F8)) = 1;
        }
        if (D_800DC1FC != 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2FC)) - D_800DC1FC);
        }
        if ((*(s32 *)((char *)(arg0) + 0x240)) == 1) {
            (*(s32 *)((char *)(arg0) + 0x240)) = 0;
        }
        (*(s32 *)((char *)(arg0) + 0x698)) = 0;
    }
}

void func_1512B100(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2C));
    if ((temp_v0 & ~0x100) && (D_800BEAC0 == 0) && (D_800C3671 == 0)) {
        if (temp_v0 != 0x40) {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x84));
            if ((temp_v0_2 & 8) && !(temp_v0_2 & 0x200) && ((*(s32 *)((char *)(arg0) + 0x23C)) == 0)) {
                temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x5F0));
                if (!(temp_v0_3 & 0x80) && !(temp_v0_3 & 0x40)) {
                    func_1512AD54(0);
                    return;
                }
            }
        }
        (*(s32 *)((char *)(arg0) + 0x5F8)) = 1;
        (*(s32 *)((char *)(arg0) + 0x5FC)) = 2;
        (*(s32 *)((char *)(arg0) + 0x5FE)) = 0x3C;
    }
}

void func_1512B1B8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp74[64];
    s32 sp50;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_f18;
    s32 temp_t1;
    s32 var_s0;
    u16 temp_t0;
    u16 temp_t0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = ((*(s32 *)((char *)(arg0) + 0x23D)) << 5) + ((*(s32 *)((char *)(arg0) + 0x1B4)) * 8) + &D_800DC200;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x60C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x610));
    (*(f32 *)((char *)(arg0) + 0x60C)) = (f32) (temp_f0 + (((f32) (*(f32 *)((char *)(temp_v0) + 0x0)) - temp_f0) * D_800A3678));
    temp_f18 = (s32) ((f32) (s16) (s32) (*(s32 *)((char *)(arg0) + 0x60C)) + 0.5f);
    (*(f32 *)((char *)(arg0) + 0x610)) = (f32) (temp_f2 + (((f32) (*(f32 *)((char *)(temp_v0) + 0x2)) - temp_f2) * D_800A3678));
    temp_t1 = (s16) temp_f18 / 4;
    sp50 = temp_t1;
    var_s0 = temp_t1;
    if (temp_t1 < (s16) temp_f18) {
        do {
            if ((*(f32 *)((char *)((D_800BE628 + ((s32)((*(f32 *)((char *)(arg0) + 0x23D)) * 0x180)))) + 0x2C)) < (f32) (arg1 - var_s0)) {
                temp_t0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x8BC))) + (arg1 * 2) + -(var_s0 * 2)));
                temp_v1 = &D_80089630 + (((s32) temp_t0 >> 0xD) * 8);
                temp_a2 = arg3 - ((u32) ((*(u32 *)((char *)(temp_v1) + 0x4)) + ((((s32) temp_t0 >> 2) & 0x7FF) << (*(u32 *)((char *)(temp_v1) + 0x0)))) >> 3);
                *(&(&sp74[0])[(s16) temp_f18] + -(var_s0 * 4)) = temp_a2;
                if (func_1512B630(arg0, &D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C), temp_a2, var_s0, (s32) ((s16) temp_f18 * 3) / 4, 0) != 0) {
                    var_s0 = (s32) (s16) temp_f18;
                }
            }
            var_s0 += 1;
        } while (var_s0 < (s16) temp_f18);
        var_s0 = sp50;
    }
    if (sp50 < (s16) temp_f18) {
        do {
            if ((f32) (arg1 + var_s0) < (*(f32 *)((char *)((D_800BE628 + ((s32)((*(f32 *)((char *)(arg0) + 0x23D)) * 0x180)))) + 0x30))) {
                temp_t0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x8BC))) + (arg1 * 2) + (var_s0 * 2)));
                temp_v1_2 = &D_80089630 + (((s32) temp_t0_2 >> 0xD) * 8);
                temp_a2_2 = arg3 - ((u32) ((*(u32 *)((char *)(temp_v1_2) + 0x4)) + ((((s32) temp_t0_2 >> 2) & 0x7FF) << (*(u32 *)((char *)(temp_v1_2) + 0x0)))) >> 3);
                (&(&sp74[0])[var_s0])[(s16) temp_f18] = temp_a2_2;
                if (func_1512B630(arg0, &D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C) + 0xC, temp_a2_2, var_s0, (s32) ((s16) temp_f18 * 3) / 4, 0) != 0) {
                    var_s0 = (s32) (s16) temp_f18;
                }
            }
            var_s0 += 1;
        } while (var_s0 < (s16) temp_f18);
    }
}

s32 func_1512B53C(void *arg0) {
    s32 var_v0;
    s32 var_v1;

    if ((*(s32 *)((char *)(arg0) + 0x5FC)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x5F8)) = 1;
        var_v0 = 0;
        var_v1 = 0;
        if ((*(s32 *)((char *)((D_800BE628 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x180))) + 0x4)) > 0.0f) {
            do {
                var_v0 += 1;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x8BC))) + var_v1)) = 0xFFFC;
                var_v1 += 2;
            } while ((f32) var_v0 < (*(f32 *)((char *)((D_800BE628 + ((s32)((*(f32 *)((char *)(arg0) + 0x23D)) * 0x180)))) + 0x4)));
        }
        (*(s32 *)((char *)(arg0) + 0x60C)) = 0.0f;
        (*(s16 *)((char *)(arg0) + 0x5FC)) = (s16) ((*(s16 *)((char *)(arg0) + 0x5FC)) - 1);
        return 1;
    }
    return 0;
}

void func_1512B5FC(void *arg0, s32 arg1, s32 arg2) {
    (*(u8 *)((char *)(arg0) + 0x2)) = (u8) (*(u8 *)((char *)(arg0) + 0x1));
    if ((*(s32 *)((char *)(arg0) + 0x4)) < arg1) {
        (*(s32 *)((char *)(arg0) + 0x1)) = 0U;
    } else {
        (*(s32 *)((char *)(arg0) + 0x1)) = 1U;
    }
    (*(s32 *)((char *)(arg0) + 0x8)) = arg2;
    (*(s32 *)((char *)(arg0) + 0x4)) = arg1;
}

s32 func_1512B630(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 var_v0;

    if (arg5 == 0) {
        var_v0 = *(&D_800DC204 + (((*(s32 *)((char *)(arg0) + 0x23D)) << 5) + ((*(s32 *)((char *)(arg0) + 0x1B4)) * 8)));
    } else {
        var_v0 = *(&D_800DC206 + (((*(s32 *)((char *)(arg0) + 0x23D)) << 5) + ((*(s32 *)((char *)(arg0) + 0x1B4)) * 8)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x84)) & 0x8000) {
        var_v0 *= 2;
    }
    if ((var_v0 < arg2) && (arg3 < arg4)) {
        (*(s32 *)((char *)(arg1) + 0x0)) = 2;
        func_1512B5FC(arg1, arg3, 0);
        return 1;
    }
    if ((var_v0 < arg2) && (arg4 < arg3)) {
        (*(s32 *)((char *)(arg1) + 0x0)) = 1;
        func_1512B5FC(arg1, arg3, 0);
        return 1;
    }
    (*(s32 *)((char *)(arg1) + 0x1)) = 0;
    (*(s32 *)((char *)(arg1) + 0x0)) = 0;
    (*(s32 *)((char *)(arg1) + 0x8)) = 0xFFFC;
    return 0;
}

s32 func_1512B730(void *arg0, f32 *arg1, f32 *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f4;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a2;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t5;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t1_3;

    var_a2 = 0;
    temp_t1 = &D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C);
    temp_t5 = (*(s32 *)((char *)(temp_t1) + 0x0));
    temp_t2 = (*(s32 *)((char *)(temp_t1) + 0xC));
    temp_t3 = (*(s32 *)((char *)(temp_t1) + 0x18));
    temp_t4 = (*(s32 *)((char *)(temp_t1) + 0x24));
    temp_f0 = (f32) (*(f32 *)((char *)(temp_t1) + 0x4)) + 1.0f;
    temp_f2 = (f32) (*(f32 *)((char *)(temp_t1) + 0x10)) + 1.0f;
    if ((temp_t5 == 2) && (temp_t2 != 2)) {
        (*(s32 *)((char *)(temp_t1) + 0x30)) = 0;
    } else if ((temp_t5 != 2) && (temp_t2 == 2)) {
        (*(s32 *)((char *)(temp_t1) + 0x30)) = 1;
    }
    if ((temp_t3 == 2) && (temp_t4 != 2)) {
        (*(s32 *)((char *)((&D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C))) + 0x30)) = 2;
    } else if ((temp_t3 != 2) && (temp_t4 == 2)) {
        (*(s32 *)((char *)((&D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C))) + 0x30)) = 3;
    }
    if ((temp_t5 == 2) || (temp_t2 == 2)) {
        temp_f12 = (f32) (*(&D_800DC200 + (((s32)((*(f32 *)((char *)(arg0) + 0x23D))) << 5) + ((s32)((*(f32 *)((char *)(arg0) + 0x1B4)) * 8)))) + 1);
        if ((temp_t5 == 2) && (temp_t2 == 2)) {
            if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0xAD)) != 1) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x120)) == 0)) {
                (*(s16 *)((char *)(arg0) + 0x5FE)) = (s16) ((*(s16 *)((char *)(arg0) + 0x5FE)) - D_800BE9E4);
                if ((*(s32 *)((char *)(arg0) + 0x5FE)) < 0) {
                    (*(s32 *)((char *)(arg0) + 0x5FE)) = 0;
                }
            }
            if ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x80) {
                (*(s32 *)((char *)(arg0) + 0x3F0)) = 0x1E;
            }
            temp_t1_2 = &D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C);
            temp_a3 = (*(s32 *)((char *)(temp_t1_2) + 0x10));
            temp_a2 = (*(s32 *)((char *)(temp_t1_2) + 0x4));
            if (temp_a3 < temp_a2) {
                *arg1 = temp_f12 - temp_f0;
            } else {
                if (temp_a2 < temp_a3) {
                    var_f4 = temp_f2 - temp_f12;
                    goto block_38;
                }
                if ((*(s32 *)((char *)(temp_t1_2) + 0x30)) == 0) {
                    *arg1 = temp_f12 - temp_f0;
                } else {
                    *arg1 = temp_f2 - temp_f12;
                }
            }
        } else {
            (*(s32 *)((char *)(arg0) + 0x3F0)) = 0;
            (*(s32 *)((char *)(arg0) + 0x5FE)) = 0x3C;
            temp_t1_3 = &D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C);
            if ((*(s32 *)((char *)(temp_t1_3) + 0x0)) == 2) {
                if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
                    var_f4 = temp_f12 - ((f32) (*(f32 *)((char *)(temp_t1_3) + 0x4)) + 1.0f);
                    goto block_38;
                }
                *arg1 = temp_f12 - ((f32) (*(f32 *)((char *)(temp_t1_3) + 0x4)) + 1.0f);
            } else if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
                *arg1 = ((f32) (*(f32 *)((char *)(temp_t1_3) + 0x10)) + 1.0f) - temp_f12;
            } else {
                var_f4 = ((f32) (*(f32 *)((char *)(temp_t1_3) + 0x10)) + 1.0f) - temp_f12;
block_38:
                *arg1 = var_f4;
            }
        }
        var_a2 = 1;
        (*(f32 *)((char *)(arg0) + 0x26C)) = (f32) D_800A367C;
    } else {
        *(&D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C)) = 4;
        (*(s32 *)((char *)((&D_800DC0C0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x4C))) + 0xC)) = 4;
        temp_f0_2 = *arg1;
        *arg1 = temp_f0_2 - (temp_f0_2 * D_800A3680);
        (*(s32 *)((char *)(arg0) + 0x5FE)) = 0x3C;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3F0));
    if (temp_v0 != 0) {
        (*(s16 *)((char *)(arg0) + 0x3F0)) = (s16) (temp_v0 - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x3F0)) < 0) {
            (*(s32 *)((char *)(arg0) + 0x3F0)) = 0;
        }
        if ((*(s32 *)((char *)(arg0) + 0x3F4)) == -1.0f) {
            (*(f32 *)((char *)(arg0) + 0x3F4)) = (f32) (*(f32 *)((char *)(arg0) + 0x374));
            (*(f32 *)((char *)(arg0) + 0x3F8)) = (f32) (*(f32 *)((char *)(arg0) + 0x348));
            (*(s32 *)((char *)(arg0) + 0x374)) = 150.0f;
            (*(f32 *)((char *)(arg0) + 0x348)) = (f32) D_800A3684;
        }
    } else {
        temp_f0_3 = (*(s32 *)((char *)(arg0) + 0x3F4));
        if (temp_f0_3 != -1.0f) {
            temp_f16 = (*(s32 *)((char *)(arg0) + 0x3F8));
            (*(s32 *)((char *)(arg0) + 0x374)) = temp_f0_3;
            (*(s32 *)((char *)(arg0) + 0x3F4)) = -1.0f;
            (*(s32 *)((char *)(arg0) + 0x3F8)) = -1.0f;
            (*(s32 *)((char *)(arg0) + 0x348)) = temp_f16;
        }
    }
    return var_a2;
}

void func_1512BB10(void *arg0) {
    s32 sp3A4;
    s32 sp3A0;
    void *sp38C;
    s32 sp1FC;
    f32 sp1F4;
    f32 spB4;
    f32 sp9C;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 sp74;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    f32 sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 var_t3;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0_4;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x84));
    var_t3 = 0;
    if (!(temp_v0 & 0x40000) && (temp_a0 = (*(s32 *)((char *)(arg0) + 0x3D4)), ((*(s32 *)((char *)(temp_a0) + 0x95)) == 0)) && ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x40) && !(temp_v0 & 0x80) && !(temp_v0 & 0x200)) {
        sp6C = (s32) (*(s32 *)((char *)&(D_80089120) + 0x2));
        sp68 = (s32) (*(s32 *)((char *)&(D_80089120) + 0x1));
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x5F0));
        if (temp_v0_2 & 0x800) {
            (*(s32 *)((char *)(arg0) + 0x94C)) = 20.0f;
            (*(s32 *)((char *)(arg0) + 0x950)) = 40.0f;
        } else if (temp_v0_2 & 0x10) {
            (*(s32 *)((char *)(arg0) + 0x94C)) = 20.0f;
            (*(s32 *)((char *)(arg0) + 0x950)) = 72.0f;
        } else if ((*(s32 *)((char *)(arg0) + 0x374)) > 580.0f) {
            (*(s32 *)((char *)(arg0) + 0x94C)) = 70.0f;
            (*(s32 *)((char *)(arg0) + 0x950)) = 140.0f;
        } else if ((D_800BE9F0 == 0x31) && ((*(s32 *)((char *)(arg0) + 0x23E)) == 3)) {
            var_t3 = 1;
            (*(s32 *)((char *)(arg0) + 0x94C)) = 20.0f;
            (*(s32 *)((char *)(arg0) + 0x950)) = 50.0f;
        } else {
            temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x73C));
            if (((temp_v0_3 != 0) && (temp_v0_3 != 1) && (temp_v0_3 != 3)) || ((temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x3D0)), temp_v1 = (*(s32 *)((char *)(temp_v0_4) + 0x102)), (temp_v1 != 0)) && (((*(s32 *)((char *)(arg0) + 0x2B0)) != (*(s32 *)((char *)(temp_v0_4) + 0x14))) || ((*(s32 *)((char *)(arg0) + 0x2B8)) != (*(s32 *)((char *)(temp_v0_4) + 0x1C))))) || ((*(s32 *)((char *)(temp_a0) + 0x1B3)) != 0)) {
                (*(s32 *)((char *)(arg0) + 0x94C)) = 20.0f;
                (*(s32 *)((char *)(arg0) + 0x950)) = 20.0f;
            } else if (temp_v1 != 0) {
                var_t3 = 1;
                (*(s32 *)((char *)(arg0) + 0x94C)) = 25.0f;
                (*(s32 *)((char *)(arg0) + 0x950)) = 30.0f;
            } else {
                (*(s32 *)((char *)(arg0) + 0x94C)) = 30.0f;
                (*(s32 *)((char *)(arg0) + 0x950)) = 60.0f;
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            (*(s32 *)((char *)(arg0) + 0x954)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x95C)) = (f32) (*(f32 *)((char *)(arg0) + 0x94C));
            (*(s32 *)((char *)(arg0) + 0x958)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x960)) = (f32) (*(f32 *)((char *)(arg0) + 0x950));
        } else {
            sp3A0 = var_t3;
            func_150495B0((char *)(arg0) + 0x95C, (*(s32 *)((char *)(arg0) + 0x94C)), (char *)(arg0) + 0x954, 4.0f, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            func_150495B0((char *)(arg0) + 0x960, (*(s32 *)((char *)(arg0) + 0x950)), (char *)(arg0) + 0x958, 4.0f, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        }
        sp74 = 0x2D;
        sp38C = arg0;
        sp88 = (*(s32 *)((char *)(arg0) + 0x2F8));
        if ((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x800) {
            sp8C = (*(s32 *)((char *)(arg0) + 0x2FC)) + (*(s32 *)((char *)(arg0) + 0x18C));
        } else {
            sp8C = (*(s32 *)((char *)(arg0) + 0x2FC));
        }
        sp90 = (*(s32 *)((char *)(arg0) + 0x300));
        sp1FC = (*(s32 *)((char *)(arg0) + 0x644));
        sp9C = sp8C - (*(s32 *)((char *)(arg0) + 0x354));
        sp94 = 0.0f;
        sp1F4 = (*(s32 *)((char *)(arg0) + 0x354));
        spB4 = (*(s32 *)((char *)(arg0) + 0x37C));
        if (((*(s32 *)((char *)(arg0) + 0x84)) & 0x80000000) || (D_800BE9F0 == 0x37)) {
            (*(s32 *)((char *)&(D_80089120) + 0x2)) = 0U;
        }
        if ((*(s32 *)((char *)(arg0) + 0x84)) & 0x10000) {
            (*(s32 *)((char *)&(D_80089120) + 0x1)) = 0U;
        }
        D_800CBDD2 = 1;
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) != 0) {
            D_800CBDD3 = 1;
        } else {
            D_800CBDD3 = 0;
        }
        if (((*(s32 *)((char *)(arg0) + 0x23C)) != 0) || (((*(s32 *)((char *)(arg0) + 0x2C)) == 0x100) && (var_t3 == 0))) {
            D_800CBDD4 = 1;
        } else {
            D_800CBDD4 = 0;
        }
        sp3A4 = (s32) D_800CBDD3;
        sp64 = (s32) D_800CBDD4;
        temp_v0_5 = func_15044380((*(s32 *)((char *)(arg0) + 0x304)), (*(s32 *)((char *)(arg0) + 0x308)), 1, &D_800CBDD3, (*(s32 *)((char *)(arg0) + 0x30C)), &sp74, 0, 0);
        D_800CBDD4 = (u8) sp64;
        D_800CBDD2 = 0;
        D_800CBDD3 = (u8) sp3A4;
        (*(u8 *)((char *)&(D_80089120) + 0x2)) = (u8) sp6C;
        (*(u8 *)((char *)&(D_80089120) + 0x1)) = (u8) sp68;
        if (temp_v0_5 != 0) {
            (*(s32 *)((char *)(arg0) + 0x3E8)) = 0;
            (*(f32 *)((char *)(arg0) + 0x26C)) = (f32) D_800A3688;
        } else {
            temp_f0 = (*(s32 *)((char *)(arg0) + 0x26C));
            (*(s32 *)((char *)(arg0) + 0x3E8)) = 1;
            (*(f32 *)((char *)(arg0) + 0x26C)) = (f32) (temp_f0 + ((1.0f - temp_f0) * D_800A368C));
        }
        (*(s32 *)((char *)(arg0) + 0x2F8)) = sp88;
        if ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100) {
            if ((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x800) {
                (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) (sp8C - (*(f32 *)((char *)(arg0) + 0x18C)));
            } else {
                (*(s32 *)((char *)(arg0) + 0x2FC)) = sp8C;
            }
        }
        (*(s32 *)((char *)(arg0) + 0x300)) = sp90;
        if ((D_800BE9F0 != 0x1B) && (temp_v0_5 != 0) && ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100)) {
            temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x2FC));
            func_1510E8BC(NULL, NULL, &sp60, NULL, NULL, 0, (*(s32 *)((char *)(arg0) + 0x2F8)), temp_f0_2, (*(s32 *)((char *)(arg0) + 0x300)), (*(s32 *)((char *)(arg0) + 0x308)), 0, 0, D_800A3690, temp_f0_2, 1);
            temp_f0_3 = sp60 + 40.0f;
            if ((*(s32 *)((char *)(arg0) + 0x2FC)) < temp_f0_3) {
                (*(s32 *)((char *)(arg0) + 0x2FC)) = temp_f0_3;
            }
        }
    } else {
        (*(s32 *)((char *)(arg0) + 0x3E8)) = 1;
    }
    func_151236D0(arg0);
}

void func_1512C068(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f14;
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x390)) < 180.0f) {
        var_f14 = 2.0f;
    } else {
        var_f14 = -2.0f;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2C));
    if ((temp_v0 != 0x80) && (temp_v0 != 0x40)) {
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x2BC));
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x300)) - (*(s32 *)((char *)(arg0) + 0x2C4));
        temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        (*(s32 *)((char *)(arg0) + 0x370)) = temp_f0;
        if (temp_f0 < 42.0f) {
            (*(s32 *)((char *)(arg0) + 0x5CC)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x384)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) - (45.0f * var_f14));
            func_15123A54(temp_f12, var_f14);
            (*(s32 *)((char *)(arg0) + 0x240)) = (s32) ((*(s32 *)((char *)(arg0) + 0x240)) | 2);
        }
    }
    func_1512C150(arg0);
}

void func_1512C150(void *arg0) {
    f32 temp_f0;

    (*(f32 *)((char *)(arg0) + 0x5CC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5CC)) + D_800A3694);
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x5CC));
    if (temp_f0 > 1.0f) {
        (*(s32 *)((char *)(arg0) + 0x5CC)) = 1.0f;
    } else {
        (*(s32 *)((char *)(arg0) + 0x5CC)) = temp_f0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x5CC)) == 1.0f) {
        (*(s32 *)((char *)(arg0) + 0x240)) = (s32) ((*(s32 *)((char *)(arg0) + 0x240)) & ~2);
        (*(f32 *)((char *)(arg0) + 0x384)) = (f32) D_800A3698;
        return;
    }
    (*(f32 *)((char *)(arg0) + 0x384)) = (f32) ((*(f32 *)((char *)(arg0) + 0x384)) + (func_15048A70((*(f32 *)((char *)(arg0) + 0x384)), (*(f32 *)((char *)(arg0) + 0x37C))) * (*(f32 *)((char *)(arg0) + 0x5CC))));
}

void func_1512C200(s32 arg0) {

}

void func_1512C20C(void *arg0) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp40;
    f32 sp54;
    f32 sp48;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    f32 *sp28;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f2;
    void *temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x948)) != 0) {
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x93C));
        temp_v0 = (char *)(arg0) + 0x2F8;
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x300)) - (*(s32 *)((char *)(arg0) + 0x944));
        (*(s32 *)((char *)&(sp60) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2F8));
        (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < (*(s32 *)((char *)(arg0) + 0x938))) {
            temp_a0 = (char *)(arg0) + 0x93C;
            (*(s32 *)((char *)&(sp38) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x2A4));
            (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x2A8));
            (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x2AC));
            sp3C = 0.0f;
            sp64 = 0.0f;
            (*(s32 *)((char *)(arg0) + 0x940)) = 0.0f;
            sp28 = temp_a0;
            sp2C = temp_v0;
            func_150491EC(temp_f12, temp_a0, &sp60, &sp54);
            sp34 = func_15048FC8(&sp54) - 180.0f;
            func_15048758(&sp34);
            func_150491EC((f32)(s32)&sp38, &sp60, &sp48);
            func_15049148(&sp54, (*(s32 *)((char *)(arg0) + 0x938)), &sp54);
            temp_f18 = (*(s32 *)((char *)(arg0) + 0x93C)) + sp54;
            sp64 = 0.0f;
            sp60 = temp_f18;
            temp_f2_2 = sp38 - temp_f18;
            sp68 = (*(s32 *)((char *)(arg0) + 0x944)) + sp5C;
            temp_f12_2 = sp40 - sp68;
            sp6C = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2));
            func_15048F90(temp_f12_2, &sp60, &sp38, &sp54);
            sp30 = func_15048FC8(&sp54);
            func_15048758(&sp30);
            (*(s32 *)((char *)(arg0) + 0x930)) = sp30;
            temp_f0 = func_15048A70(sp34, sp30);
            if (fabsf(temp_f0) < 35.0f) {
                if (temp_f0 <= 0.0f) {
                    var_f2 = 5.0f;
                } else {
                    var_f2 = -5.0f;
                }
                func_1508EF80(&sp60, sp28, var_f2, &sp60);
            }
            D_800895B0 = sp6C;
            sp64 = (*(s32 *)((char *)(arg0) + 0x2FC));
            (*(f32 *)((char *)(sp2C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp60) + 0x0));
            (*(s32 *)((char *)(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp60) + 0x4));
            (*(s32 *)((char *)(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp60) + 0x8));
        } else {
            D_800895B0 = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x930)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
        }
    } else {
        D_800895B0 = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x930)) = 0.0f;
    }
    (*(s32 *)((char *)(arg0) + 0x948)) = 0U;
}

s32 func_1512C47C(s32 arg0) {
    return 1;
}
