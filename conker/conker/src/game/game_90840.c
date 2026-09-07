/**
 * Auto-decompiled from asm/90840.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1505DADC();        /* extern */
void * func_1506AC8C();                /* extern */
void * func_15081690(); /* extern */
void * func_150836CC();                       /* extern */
u32 random_u32();                /* extern */
void * func_15143134();                     /* extern */
void func_150636A4();                     /* static */
extern f32 D_80099790;
extern f32 D_80099794;
extern f32 D_80099798;
extern f32 D_8009979C;
extern f32 D_800997E8;
extern f32 D_800997EC;
extern f32 D_800997F0;
extern f32 D_800997F4;
extern f32 D_800997F8;
extern f32 D_800997FC;
extern f32 D_80099800;
extern f32 D_80099804;
extern f32 D_80099808;
extern f32 D_8009980C;
extern f32 D_80099810;
extern f32 D_80099814;
extern f32 D_80099818;
extern f32 D_8009981C;
extern f32 D_80099820;
extern f32 D_80099824;
extern f32 D_80099828;
extern f32 D_8009982C;
extern f32 D_80099830;
extern f32 D_80099834;
extern f32 D_80099838;
extern f32 D_8009983C;
extern f32 D_80099840;
extern f32 D_80099844;
extern f32 D_80099848;
extern f32 D_8009984C;
extern f32 D_80099850;
extern f32 D_80099854;
extern f32 D_80099858;
extern f32 D_8009985C;
extern f32 D_80099860;
extern f32 D_80099864;
extern f32 D_80099868;
extern f32 D_8009986C;
extern f32 D_80099870;
extern f32 D_80099874;
extern f32 D_80099878;
extern f32 D_8009987C;
extern s32 D_800B85A4;
extern s16 D_800CC2B2;
extern f32 D_800CC2B4;
extern s32 D_800CC5FC;
s16 func_15063390();

s16 func_15063390(void *arg0) {
    void *temp_v0;

    temp_v0 = ((*(s32 *)((char *)(arg0) + 0x222)) * 0x32C) + &gObjects;
    return func_1505A630((*(s32 *)((char *)(temp_v0) + 0x14)) - (*(s32 *)((char *)(arg0) + 0x14)), (*(s32 *)((char *)(arg0) + 0x1C)) - (*(s32 *)((char *)(temp_v0) + 0x1C)), 0);
}

void func_15063404(void *arg0) {
    void *sp28;
    void *temp_v0;

    temp_v0 = &gObjects + (((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) * 0x32C);
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x78)) = 9;
    sp28 = temp_v0;
    func_15083568(0x1D, 0x3F800000, 0);
    func_15083568(arg0, 0x1E, 0x3F800000, 0);
    (*(s32 *)((char *)(arg0) + 0x8A)) = 0x14;
    (*(s32 *)((char *)(arg0) + 0x89)) = 0;
    (*(s32 *)((char *)(arg0) + 0x83)) = 0;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x24)) = 0x3C;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x11A)) = 2;
    func_1505E650(arg0, 0x7F, 1.0f, 0, 0.0f, 0, 0);
}

void func_150634E4(void *arg0) {
    void *temp_v0;

    temp_v0 = &gObjects + (((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) * 0x32C);
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x78)) = 0;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x11A)) = 0;
    func_150836CC(0x1D);
    func_150836CC(arg0, 0x1E);
    (*(s32 *)((char *)(arg0) + 0x8A)) = 0;
    (*(s32 *)((char *)(arg0) + 0x89)) = 0;
    (*(s32 *)((char *)(arg0) + 0x83)) = 0;
}

void func_15063570(void *arg0) {
    void *temp_v0;

    temp_v0 = &gObjects + (((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) * 0x32C);
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x78)) = 0x3B;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x31C))) + 0x11A)) = 2;
    func_15083568(0x89, 0x3F800000, 0);
    (*(s32 *)((char *)(arg0) + 0x8A)) = 0x14;
    (*(s32 *)((char *)(arg0) + 0x89)) = 0;
    (*(s32 *)((char *)(arg0) + 0x83)) = 0;
    func_1505E650(arg0, 0x221, 1.0f, 0, 0.0f, 0, 0);
}

void func_15063628(void *arg0, f32 arg1) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
    func_15081690(arg1, (*(s32 *)((char *)(temp_v0) + 0x13C)), (*(s32 *)((char *)(temp_v0) + 0x140)), (*(s32 *)((char *)(temp_v0) + 0x144)), (*(s32 *)((char *)(temp_v0) + 0x130)), (*(s32 *)((char *)(temp_v0) + 0x134)), (*(s32 *)((char *)(temp_v0) + 0x138)), (char *)(temp_v0) + 0xB0, arg1, 0, 0, 0, -1, 0, 0);
    func_150636A4(arg0);
}

void func_150636A4(void *arg0) {
    void *temp_a1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0xB0));
    if (temp_v0 != NULL) {
        temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x31C));
        if (temp_a1 != NULL) {
            (*(s32 *)((char *)(temp_a1) + 0x195)) = 0x1E;
            (*(s8 *)((char *)((*(s8 *)((char *)(temp_v0) + 0x31C))) + 0x196)) = (s8) ((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812);
        }
    }
}

/*
Decompilation failure in function func_150636F0:

Found jr instruction at 90840.s line 322, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s16 func_150639BC(s16 *arg0) {
    D_800CC2B2 = ((*(s32 *)((char *)(arg0) + 0x7A)) - (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x12))) - func_15063390(0);
    if (D_800CC2B2 >= 0x3E81) {
        D_800CC2B2 = 0x3E80;
    }
    if (D_800CC2B2 < -0x3E80) {
        D_800CC2B2 = -0x3E80;
    }
    return D_800CC2B2;
}

s32 func_15063A38(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    u16 temp_t0;
    u16 temp_t3;

    var_v0 = 0;
    if (arg1 & arg2) {
        D_800CC2B2 = (*(s32 *)((char *)(D_800CC284) + 0x2)) * 0xC8;
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x84)) != 0) {
            D_800CC2B2 = func_150639BC(&D_800CC2B2);
        }
        D_800CC2B4 = 12.0f;
        D_800CC2B2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x12)) + ((s32) (D_800CC2B2 * D_800CC264) / 2000);
        if (D_800CC2B2 < -0x2328) {
            temp_t0 = ((*(s32 *)((char *)(arg0) + 0x7A)) - D_800CC2B2) - 0x2328;
            (*(s32 *)((char *)(arg0) + 0x7A)) = temp_t0;
            (*(s32 *)((char *)(arg0) + 0x76)) = temp_t0;
            D_800CC2B2 = -0x2328;
        }
        if (D_800CC2B2 >= 0x2329) {
            temp_t3 = ((*(s32 *)((char *)(arg0) + 0x7A)) - D_800CC2B2) + 0x2328;
            (*(s32 *)((char *)(arg0) + 0x7A)) = temp_t3;
            (*(s32 *)((char *)(arg0) + 0x76)) = temp_t3;
            D_800CC2B2 = 0x2328;
        }
        var_v0 = 1;
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x12)) = D_800CC2B2;
    }
    return var_v0;
}

void func_15063B64(void *arg0) {
    s32 sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void *sp28;
    s32 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_v0_3;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if ((temp_v0 == 0x75) || (temp_v0 == 0xB1)) {
        sp3C = 0x64;
    } else {
        sp3C = 0x2C;
    }
    if (func_1503195C(arg0, sp3C, 0) != 0) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x1D4));
        if (temp_v0_2 != 0) {
            func_15143134(0, &sp2C, temp_v0_2 + 0x100);
        } else {
            sp2C = (*(s32 *)((char *)(arg0) + 0x14));
            sp30 = (*(s32 *)((char *)(arg0) + 0x18));
            sp34 = (*(s32 *)((char *)(arg0) + 0x1C));
        }
        sp38 = ((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1;
        sp28 = arg0;
        func_1506AC8C(arg0, 0xB, &sp28);
        func_150836CC(arg0, sp3C);
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x31C));
        temp_v1 = (*(s32 *)((char *)(temp_v0_3) + 0x19A));
        if (temp_v1 != 0) {
            (*(u8 *)((char *)(temp_v0_3) + 0x19A)) = (u8) (temp_v1 - 1);
        }
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11A)) = 0;
    }
}

s32 *func_15063C60(s32 arg0, s32 arg1) {
    s32 *var_v1;

    var_v1 = &D_800CC5FC;
    if ((&gObjects != 0) && (arg1 == (s32)(D_800CC2D4)) && ((((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1) == D_800CC335)) {
        return &gObjects;
    }
loop_5:
    if (((*(s32 *)((char *)(var_v1) + 0x0)) != 0) && (arg1 == (*(s32 *)((char *)(var_v1) + 0x4))) && ((((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1) == (*(s32 *)((char *)(var_v1) + 0x65)))) {
        return var_v1;
    }
    if (((*(s32 *)((char *)(var_v1) + 0x32C)) != 0) && (arg1 == (*(s32 *)((char *)(var_v1) + 0x330))) && ((((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1) == (*(s32 *)((char *)(var_v1) + 0x391)))) {
        return var_v1 + 0x32C;
    }
    if (((*(s32 *)((char *)(var_v1) + 0x658)) != 0) && (arg1 == (*(s32 *)((char *)(var_v1) + 0x65C))) && ((((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1) == (*(s32 *)((char *)(var_v1) + 0x6BD)))) {
        return var_v1 + 0x658;
    }
    if (((*(s32 *)((char *)(var_v1) + 0x984)) != 0) && (arg1 == (*(s32 *)((char *)(var_v1) + 0x988))) && ((((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812) + 1) == (*(s32 *)((char *)(var_v1) + 0x9E9)))) {
        return var_v1 + 0x984;
    }
    var_v1 += 0xCB0;
    if ((char *)(var_v1) == (char *)(&D_800D121C)) {
        return NULL;
    }
    goto loop_5;
}

s32 func_15063E84(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_t6;
    u8 temp_a1;
    void *temp_v0;

    temp_t6 = arg1 & 0xFFFF;
    if ((arg4 & 0x4000) && ((*(s32 *)((char *)(arg0) + 0x28)) == 0.0f) && ((*(s32 *)((char *)(arg0) + 0x20)) <= 0.0f)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
        if (((*(s32 *)((char *)(temp_v0) + 0x95)) == 0) && (temp_t6 != (*(s32 *)((char *)(arg0) + 0x84))) && ((temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x11A)), (temp_a1 == 0)) || (temp_a1 == 2)) && ((*(s32 *)((char *)(temp_v0) + 0x27)) == 0)) {
            if ((arg3 != 0) && ((*(s32 *)((char *)(arg0) + 0x8A)) != 0)) {
                return 0x3E7;
            }
            if (arg2 & 0xFFFF & 1) {
                (*(s32 *)((char *)(arg0) + 0x8A)) = 0x14U;
            }
            if (arg3 != 0) {
                if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11A)) == 2) {
                    return 0x3E7;
                }
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11A)) = 1U;
                /* Duplicate return node #18. Try simplifying control flow for better match */
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x78)) = arg3;
                (*(s32 *)((char *)(arg0) + 0x89)) = 0xFF;
                (*(s32 *)((char *)(arg0) + 0x83)) = 0xFF;
                return temp_t6;
            }
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x11A)) = 3U;
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x78)) = arg3;
            (*(s32 *)((char *)(arg0) + 0x89)) = 0xFF;
            (*(s32 *)((char *)(arg0) + 0x83)) = 0xFF;
            return temp_t6;
        }
    }
    return 0x3E7;
}

void func_15063FA0(void *arg0, s32 arg1) {
    f32 sp84;
    f32 sp80;
    void * sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp44;
    s32 var_f0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f2;
    f32 var_f2_2;
    void *temp_v0;

    var_f0 = 0x43960000;
    var_f2 = 0.0f;
    var_f14 = 0.0f;
    switch (arg1) {                                 /* irregular */
    case 2:
        var_f14 = 27.0f;
        break;
    case 3:
    case 6:
        var_f2 = -11.0f;
        var_f0 = 0x43FA0000;
        break;
    }
    sp5C = var_f14;
    sp60 = var_f2;
    temp_f12 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x16C)) * D_80099790;
    sp78 = var_f0;
    sp58 = temp_f12;
    sp64 = sinf(temp_f12) * var_f14;
    sp68 = cosf(temp_f12) * var_f14;
    sp6C = sp64 + (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x13C));
    sp70 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x140)) + var_f2;
    sp74 = sp68 + (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x144));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
    if ((*(s32 *)((char *)(temp_v0) + 0x109)) == 0) {
        var_f2_2 = -(*(s32 *)((char *)(temp_v0) + 0x170));
        var_f12 = (*(s32 *)((char *)(temp_v0) + 0x16C)) + 90.0f;
    } else {
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0xB8)) - sp6C;
        temp_f16 = (*(s32 *)((char *)(temp_v0) + 0xC0)) - sp74;
        sp4C = temp_f2;
        sp44 = temp_f16;
        temp_f2_2 = func_150484A0((*(s32 *)((char *)(temp_v0) + 0xBC)) - sp70, sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16))) * D_80099794;
        sp54 = temp_f2_2;
        var_f2_2 = temp_f2_2;
        var_f12 = func_150484A0(sp4C, sp44) * D_80099798;
    }
    sp50 = var_f12;
    func_1505A184(var_f12, (s32) (var_f2_2 * D_8009979C) & 0xFFFF, sp78, 0, &sp84, &sp80, &sp7C);
    temp_f0 = -sp80;
    sp80 = temp_f0;
    func_1506C460(sp50, sp84, temp_f0, 0, 0x64, arg1, 0.0f, 0.5f, &sp6C, 1, 1);
}

u16 func_150641D8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 sp2E;
    u16 sp26;
    u16 temp_v0;
    u16 var_v1;

    sp26 = 0;
    sp2E = arg1;
    var_v1 = arg1;
    if (random_u32() & 1) {
        var_v1 = arg2 & 0xFFFF;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x84));
    if ((arg1 == temp_v0) || (arg2 == temp_v0)) {
        var_v1 = arg3 & 0xFFFF;
        if ((s32) (*(s32 *)((char *)(arg0) + 0x107)) < 0x28) {
            return 0x3E7U;
        }
    }
    if (arg3 == temp_v0) {
        var_v1 = 0x3E7;
    }
    sp2E = var_v1;
    if (func_1505DADC(arg0, &sp26, 0, 0xFE, 0x40) != 0xFF) {
        (*(s32 *)((char *)(arg0) + 0x76)) = sp26;
    }
    (*(s32 *)((char *)(arg0) + 0x83)) = 0xFF;
    return sp2E;
}

/*
Decompilation failure in function func_150642AC:

Found jr instruction at 90840.s line 1140, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_150649A0(s32 arg0, s32 arg1) {
    f32 temp_f0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)((&gObjects + (arg1 * 0x32C))) + 0x2D0));
    temp_v1 = (*(s32 *)((char *)((&gObjects + (arg0 * 0x32C))) + 0x2D0));
    if ((temp_v0 != NULL) && (temp_v1 != NULL)) {
        temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x18));
        (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x8));
        if (temp_f0 <= (*(s32 *)((char *)(temp_v0) + 0x8))) {
            (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (temp_f0 - 1.0f);
        }
    }
}

void func_15064A14(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    void *temp_a1;
    void *temp_v0_4;

    temp_a1 = ((*(s32 *)((char *)(arg0) + 0x65)) * 0x32C) - 0x32C + &gObjects;
    temp_v0 = (*(s32 *)((char *)(temp_a1) + 0x4));
    var_v1 = 0xF;
    if (temp_v0 == 0xC) {
        temp_v0_2 = (*(s32 *)((char *)(temp_a1) + 0x84));
        var_v1 = 0x5A;
        if (temp_v0_2 == 0xC) {
            var_v1 = 0x5B;
        } else if (temp_v0_2 == 0xD) {
            var_v1 = 0x5C;
        }
    } else if (temp_v0 == 0x53) {
        temp_v0_3 = (*(s32 *)((char *)(temp_a1) + 0x84));
        var_v1 = 0x8C;
        if (temp_v0_3 == 0xB) {
            var_v1 = 0xA2;
        } else if (temp_v0_3 == 0xD) {
            var_v1 = 0xA3;
        }
    } else if (temp_v0 == 0x21) {
        var_v1 = 0x169;
    } else if (temp_v0 == 0x8A) {
        temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x31C));
        if ((temp_v0_4 != NULL) && ((*(s32 *)((char *)(temp_v0_4) + 0x1B2)) != 0)) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        if ((*(s32 *)((char *)(temp_a1) + 0x232)) == 4) {
            if (var_v0 != 0) {
                var_v1 = 0x350;
            } else {
                var_v1 = 0x1A4;
            }
        } else {
            var_v1 = 0x1A1;
            if (var_v0 != 0) {
                var_v1 = 0x34F;
            }
        }
    }
    func_1505E650((void *) (var_v1 & 0xFFFF), 0x3F800000, 6.0f, 0, 0.0f, 0);
    func_150649A0((*(s32 *)((char *)(arg0) + 0x65)) - 1, gCurrentObjectIndex);
}

s32 func_15064B94(void *arg0, f32 arg1, f32 arg2, s32 arg3, f32 arg4) {
    s32 sp34;
    s32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 var_f0;
    f32 var_f14;
    s32 var_v1;
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a1;

    var_v1 = 0;
    sp30 = 0x40800000;
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x31C));
    var_f14 = 1.0f;
    if ((*(s32 *)((char *)(temp_a1) + 0x46)) > 0) {
        var_v1 = 0x4C;
        var_f14 = arg1 / 24.0f;
    } else if ((*(s32 *)((char *)(temp_a1) + 0x4E)) == 2) {
        var_v1 = 5;
        if ((*(s32 *)((char *)(temp_a1) + 0x50)) > 0) {
            var_v1 = 0x54;
        }
        sp30 = 0x40000000;
    } else if ((s32) (*(s32 *)((char *)(arg0) + 0x13C)) >= 0x64) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x3C));
        if (temp_f0 < 1.0f) {
            sp2C = 1.0f;
            var_f14 = 1.0f;
            var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
        } else {
            temp_v0 = *(&D_800B85A4 + (gCurrentObject->unk13C * 0x32C));
            switch (temp_v0) {                      /* irregular */
            case 0x8C:
                (*(s32 *)((char *)(arg0) + 0xAA)) = 0x5A;
                var_v1 = 0x1A6;
                var_f14 = (arg1 / 6.0f) + D_800997E8;
                if (temp_f0 > 14.0f) {
                    var_v1 = 0x1A7;
                    var_f14 = (arg1 / 26.0f) + 0.5f;
                }
                break;
            case 0x57:
                (*(s32 *)((char *)(arg0) + 0xAA)) = 0x5A;
                var_v1 = 0x116;
                var_f14 = (arg1 / 6.0f) + D_800997EC;
                if (temp_f0 > 14.0f) {
                    var_v1 = 0x117;
                    var_f14 = (arg1 / 26.0f) + 0.5f;
                }
                break;
            case 0xA8:
            case 0xA9:
                if (temp_f0 > 14.0f) {
                    var_v1 = 0x1B1;
                    var_f14 = (arg1 / 22.0f) + D_800997F0;
                } else {
                    var_v1 = 0x1B0;
                    var_f14 = (arg1 * 0.0625f) + D_800997F4;
                }
                break;
            case 0x13:
                var_v1 = 0x14C;
                var_f14 = arg1 / 6.0f;
                break;
            case 0x89:
                var_v1 = 0x1FB;
                var_f14 = arg1 / 6.0f;
                break;
            default:
                if (temp_f0 > 14.0f) {
                    var_v1 = 0x2E4;
                    var_f14 = (arg1 * 0.0625f) + 0.5f;
                } else {
                    var_v1 = 0xD7;
                    var_f14 = (arg1 / 6.0f) + D_800997F8;
                }
                break;
            }
        }
    } else if ((arg3 != 0) && ((*(s32 *)((char *)(temp_a1) + 0x78)) == 0)) {
        var_v1 = arg3;
        var_f14 = (arg1 / 15.0f) + D_800997FC;
    } else {
        var_f0 = (*(s32 *)((char *)(arg0) + 0x44));
        if ((D_80099800 < var_f0) && ((*(s32 *)((char *)(temp_a1) + 0x32)) & 1)) {
            (*(s32 *)((char *)(arg0) + 0xAA)) = 0x28;
            sp30 = 0x40A00000;
            temp_f14 = (var_f0 / 15.0f) + 0.5f;
            sp2C = temp_f14;
            var_f14 = temp_f14;
            var_v1 = func_1504C0B8(arg1, temp_f14, temp_a1);
        } else {
            temp_v0_2 = (*(s32 *)((char *)(temp_a1) + 0x78));
            if (temp_v0_2 == 0x16) {
                if (var_f0 >= 1.0f) {
                    var_v1 = 0xE8;
                    if ((*(s32 *)((char *)(temp_a1) + 0x1B2)) != 0) {
                        var_v1 = 0x2C6;
                    }
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x1E;
                    var_f14 = (arg1 * 0.0625f) + D_80099804;
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 9) {
                if (var_f0 >= 1.0f) {
                    if (D_800BE616 == 0) {
                        (*(s32 *)((char *)(arg0) + 0xAA)) = 0x37;
                    }
                    var_v1 = 0x7E;
                    if (D_800BE616 == 0) {
                        var_f14 = (arg1 * 0.0625f) + D_80099808;
                    } else if ((*(s32 *)((char *)(arg0) + 0x44)) >= 20.0f) {
                        var_v1 = 0x22C;
                        var_f14 = (arg1 / 22.0f) + D_8009980C;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x38) {
                if (var_f0 >= 1.0f) {
                    var_v1 = 0x1E1;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0x1E2;
                        var_f14 = (arg1 / 22.0f) + D_80099810;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x39) {
                if ((*(s32 *)((char *)(arg0) + 0x84)) != 0x1EB) {
                    if (var_f0 >= 1.0f) {
                        var_v1 = 0x1EC;
                        if (var_f0 >= 20.0f) {
                            var_v1 = 0x1ED;
                            var_f14 = (arg1 / 22.0f) + D_80099814;
                        }
                    } else {
                        sp2C = 1.0f;
                        var_f14 = 1.0f;
                        var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                    }
                } else {
                    var_v1 = 0x3E7;
                }
            } else if (temp_v0_2 == 0x37) {
                if ((*(s32 *)((char *)(arg0) + 0x84)) != 0x1F4) {
                    if (var_f0 >= 1.0f) {
                        var_v1 = 0x1F5;
                        if (var_f0 >= 20.0f) {
                            var_v1 = 0x1F6;
                            var_f14 = (arg1 / 22.0f) + D_80099818;
                        }
                    } else {
                        sp2C = 1.0f;
                        var_f14 = 1.0f;
                        var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                    }
                } else {
                    var_v1 = 0x3E7;
                }
            } else if (temp_v0_2 == 0x3B) {
                temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x84));
                if ((temp_v0_3 != 0x222) && (temp_v0_3 != 0x236)) {
                    if ((var_f0 >= 1.0f) || ((*(s32 *)((char *)(temp_a1) + 0x23)) > 0)) {
                        var_v1 = 0x223;
                        (*(s32 *)((char *)(arg0) + 0xAA)) = 0x37;
                        if (var_f0 >= 20.0f) {
                            var_v1 = 0x224;
                            var_f14 = (arg1 / 22.0f) + D_8009981C;
                        }
                    } else {
                        sp2C = 1.0f;
                        var_f14 = 1.0f;
                        var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                    }
                } else {
                    var_v1 = 0x3E7;
                }
            } else if ((temp_v0_2 == 0x12) || (temp_v0_2 == 0x18) || (temp_v0_2 == 0x41)) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0xEC;
                    var_f14 = (arg1 * 0.0625f) + D_80099820;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0xF8;
                        var_f14 = (arg1 / 22.0f) + D_80099824;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x24) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0x158;
                    var_f14 = (arg1 * 0.0625f) + D_80099828;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0x159;
                        var_f14 = (arg1 / 22.0f) + D_8009982C;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x22) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0x15B;
                    var_f14 = (arg1 * 0.0625f) + D_80099830;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0x15C;
                        var_f14 = (arg1 / 22.0f) + D_80099834;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x21) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x6E;
                    var_v1 = 0x123;
                    var_f14 = (arg1 * 0.0625f) + D_80099838;
                    if (var_f0 >= 15.0f) {
                        var_v1 = 0x124;
                        var_f14 = arg1 / 27.0f;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x26) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0x178;
                    var_f14 = (arg1 * 0.0625f) + D_8009983C;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0x179;
                        var_f14 = (arg1 / 22.0f) + D_80099840;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x3A) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0x1FB;
                    var_f14 = (arg1 * 0.0625f) + D_80099844;
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x25) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0xD7;
                    var_f14 = (arg1 * 0.0625f) + D_80099848;
                    if (var_f0 >= 20.0f) {
                        var_f14 = (arg1 / 22.0f) + D_8009984C;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if ((temp_v0_2 == 0x2D) || (temp_v0_2 == 0x2E)) {
                if (var_f0 >= 1.0f) {
                    var_v1 = 0x1B0;
                    var_f14 = (arg1 * 0.0625f) + D_80099850;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0x1B1;
                        var_f14 = (arg1 / 22.0f) + D_80099854;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x23) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0x161;
                    var_f14 = (arg1 * 0.0625f) + D_80099858;
                    if (var_f0 >= 20.0f) {
                        var_v1 = 0x162;
                        var_f14 = (arg1 / 22.0f) + D_8009985C;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (temp_v0_2 == 0x15) {
                if (var_f0 >= 1.0f) {
                    (*(s32 *)((char *)(arg0) + 0xAA)) = 0x50;
                    var_v1 = 0xED;
                    var_f14 = (arg1 * 0.0625f) + D_80099860;
                    if (var_f0 >= 20.0f) {
                        var_f14 = (arg1 / 22.0f) + D_80099864;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if ((temp_v0_2 == 0x19) || (temp_v0_2 == 0x40)) {
                temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x3C));
                if (temp_f0_2 >= 1.0f) {
                    var_v1 = 0x112;
                    sp30 = 0x41000000;
                    var_f14 = (arg1 * 0.125f) + D_80099868;
                    if (temp_f0_2 >= 18.0f) {
                        var_v1 = 0x111;
                        var_f14 = (arg1 / 20.0f) + D_80099868;
                    }
                } else {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                }
            } else if (((*(s32 *)((char *)(temp_a1) + 0x1A)) != 0) && (arg2 > 1.0f)) {
                (*(s32 *)((char *)(arg0) + 0xAA)) = 0x28;
                var_v1 = 0x6D;
                sp30 = 0x41000000;
                var_f14 = (arg1 / 6.5f) + D_8009986C;
            } else if ((*(s32 *)((char *)(temp_a1) + 0x8)) > 0) {
                if (arg2 < 1.0f) {
                    sp2C = 1.0f;
                    var_f14 = 1.0f;
                    var_v1 = func_1504C078(arg1, 1.0f, temp_a1);
                } else {
                    var_v1 = (s32) (*(s32 *)((char *)(temp_a1) + 0xE));
                    sp30 = 0x41800000;
                    var_f14 = (arg1 / 6.0f) + D_80099870;
                }
            } else if ((*(s32 *)((char *)(temp_a1) + 0x17)) != 0) {
                sp30 = 0x40A00000;
                if ((*(s32 *)((D_800CC284))) & 0x2000) {
                    if ((*(s32 *)((char *)(arg0) + 0x84)) != 0x283) {
                        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) * D_80099874);
                        D_800D1580 = 0xFF010604;
                        sp2C = 1.0f;
                        func_1506E5FC(arg1, 1.0f, temp_a1);
                        var_f14 = 1.0f;
                    }
                    var_v1 = 0x283;
                    (*(s32 *)((char *)(arg0) + 0x89)) = 3U;
                    (*(s32 *)((char *)(arg0) + 0x8A)) = 3;
                } else {
                    if ((*(s32 *)((char *)(arg0) + 0x84)) == 0x283) {
                        D_800D1580 = 0xFF010604;
                        sp2C = 1.0f;
                        func_1506E5FC(arg1, 1.0f, temp_a1);
                        var_f0 = (*(s32 *)((char *)(arg0) + 0x44));
                    }
                    if ((var_f0 >= 1.0f) && (var_v1 = 0x4E, ((*(s32 *)((char *)(arg0) + 0x89)) == 0))) {
                        (*(s32 *)((char *)(arg0) + 0xAA)) = 0x2D;
                        var_f14 = (*(s32 *)((char *)(arg0) + 0x3C)) / 9.0f;
                    } else {
                        sp2C = 1.0f;
                        var_f14 = 1.0f;
                        var_v1 = func_1504C078();
                    }
                }
            } else if (((*(s32 *)((char *)(temp_a1) + 0x32)) & 2) && (var_f0 >= 1.0f)) {
                (*(s32 *)((char *)(temp_a1) + 0x3C)) = 0x1C;
                (*(s32 *)((char *)(arg0) + 0xAA)) = 0xF;
                sp34 = 0x64;
                sp30 = 0x41000000;
                temp_f14_2 = (arg4 / 5.0f) + D_80099878;
                sp2C = temp_f14_2;
                var_v1 = 0x64;
                var_f14 = temp_f14_2;
                if ((u32) (random_u32(arg1, temp_f14_2, temp_a1) % 1000U) >= 0x3DCU) {
                    var_f14 = D_8009987C;
                    var_v1 = (random_u32() & 1) + 0x65;
                    (*(s32 *)((char *)(arg0) + 0x89)) = 0xFFU;
                    (*(s32 *)((char *)(arg0) + 0x83)) = 0xFF;
                }
            }
        }
    }
    if ((var_v1 != 0) && (var_v1 != 0x3E7)) {
        sp34 = var_v1;
        func_1505E650(arg0, var_v1 & 0xFFFF, var_f14, sp30, 0.0f, 0, 0);
    }
    return var_v1;
}

/*
Decompilation failure in function func_15065A5C:

Found jr instruction at 90840.s line 2836, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/
