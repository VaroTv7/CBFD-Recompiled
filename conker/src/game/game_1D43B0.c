/**
 * Auto-decompiled from asm/1D43B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                      /* extern */
f32 random_float();                          /* extern */
s32 func_15132A4C();        /* extern */
s32 func_15134908();              /* extern */
void * func_1514AB5C(); /* extern */
void * func_151A26EC(); /* extern */
void * memcpy();                         /* extern */
extern f32 D_800A8DC0;
extern f32 D_800A8DC4;
extern f32 D_800A8DC8;
extern f32 D_800A8DCC;
extern f32 D_800A8DD0;

void func_151A6F00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp15C;
    s16 sp15A;
    s8 sp158;
    s32 sp154;
    s8 sp152;
    s8 sp150;
    s8 sp14F;
    s8 sp14E;
    s8 sp14D;
    s8 sp14C;
    s8 sp14B;
    s8 sp14A;
    s8 sp149;
    s8 sp148;
    s32 sp144;
    s8 sp140;
    s16 sp13E;
    s16 sp13C;
    s32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    s16 spE0;
    s16 spDE;
    u8 spDD;
    u8 spDC;
    f32 spD4;
    f32 spD0;
    s8 spA3;
    s8 spA2;
    s16 spA0;
    f32 sp9C;
    f32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s16 temp_s4;
    s16 var_s4;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s2_2;

    temp_t6 = arg1 & 0xFF;
    temp_s5 = arg2 & 0xFF;
    temp_s4 = (*(s32 *)((char *)(arg0) + 0x0));
    sp104 = 1.0f;
    sp108 = 1.0f;
    sp10C = 1.0f;
    sp138 = 0x21E9;
    sp140 = 0;
    sp13E = 0x1B;
    spF8 = 0.0f;
    spFC = 0.0f;
    sp100 = 0.0f;
    sp12C = 0.0f;
    sp13C = (*(s32 *)((char *)(arg0) + 0x10));
    spEC = D_800A8DC0;
    spD4 = -18.0f;
    spDC = (*(s32 *)((char *)(arg0) + 0x54));
    spDD = (*(s32 *)((char *)(arg0) + 0x55));
    spDE = (*(s32 *)((char *)(arg0) + 0x56));
    sp144 = 0;
    sp148 = 0xFF;
    sp149 = 1;
    sp14A = 5;
    sp14B = 4;
    sp14C = 0;
    sp14D = 0;
    sp14E = 1;
    sp14F = 0;
    sp150 = 0;
    sp152 = 0;
    sp154 = 0;
    sp158 = 0;
    sp15A = 0x20;
    sp15C = 7;
    var_s4 = temp_s4 - 1;
    spE0 = (*(s32 *)((char *)(arg0) + 0x58));
    if (temp_s4 != 0) {
        do {
            temp_s1 = ((random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x1A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x18))) & 0xFF;
            temp_s2 = ((random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x1E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x1C))) & 0xFF;
            temp_f22 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f24 = func_151423D8(temp_s1 & 0xFF);
            temp_f26 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f20 = func_151423D8(temp_s2 & 0xFF);
            temp_f2 = random_float() * (*(s32 *)((char *)(arg0) + 0x14));
            temp_f12 = temp_f2 * temp_f20;
            sp110 = (*(s32 *)((char *)(arg0) + 0x4)) + (temp_f12 * temp_f22);
            sp114 = (*(s32 *)((char *)(arg0) + 0x8)) - (temp_f2 * temp_f26);
            sp118 = (*(s32 *)((char *)(arg0) + 0xC)) + (temp_f12 * temp_f24);
            switch (temp_t6) {                      /* irregular */
            case 0:
                temp_f20_2 = (random_float(temp_f12) * (*(s32 *)((char *)(arg0) + 0x24))) + (*(s32 *)((char *)(arg0) + 0x20));
                temp_f2_2 = (random_float() * (*(s32 *)((char *)(arg0) + 0x2C))) + (*(s32 *)((char *)(arg0) + 0x28));
                sp11C = temp_f20_2 * temp_f22;
                sp120 = temp_f2_2;
                sp124 = temp_f20_2 * temp_f24;
                break;
            case 1:
                temp_f2_3 = (random_float(temp_f12) * (*(s32 *)((char *)(arg0) + 0x24))) + (*(s32 *)((char *)(arg0) + 0x20));
                temp_f12_2 = temp_f2_3 * temp_f20;
                sp11C = temp_f12_2 * temp_f22;
                sp120 = -temp_f2_3 * temp_f26;
                sp124 = temp_f12_2 * temp_f24;
                break;
            case 2:
                (*(s32 *)((char *)&(sp11C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x30));
                (*(f32 *)((char *)&(sp11C) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x34));
                (*(f32 *)((char *)&(sp11C) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x38));
                break;
            case 3:
                temp_f2_4 = (random_float(temp_f12) * (*(s32 *)((char *)(arg0) + 0x24))) + (*(s32 *)((char *)(arg0) + 0x20));
                sp11C = (*(s32 *)((char *)(arg0) + 0x30)) * temp_f2_4;
                sp120 = (*(s32 *)((char *)(arg0) + 0x34)) * temp_f2_4;
                sp124 = (*(s32 *)((char *)(arg0) + 0x38)) * temp_f2_4;
                break;
            }
            temp_f10 = (random_float() * (*(s32 *)((char *)(arg0) + 0x40))) + (*(s32 *)((char *)(arg0) + 0x3C));
            spF4 = temp_f10;
            spF0 = temp_f10;
            spD0 = temp_f10;
            spE8 = temp_f10 * 30.0f;
            sp134 = (random_float() * (*(s32 *)((char *)(arg0) + 0x48))) + (*(s32 *)((char *)(arg0) + 0x44));
            sp128 = (random_float() * (*(s32 *)((char *)(arg0) + 0x50))) + (*(s32 *)((char *)(arg0) + 0x4C));
            sp130 = (random_float() * (*(s32 *)((char *)(arg0) + 0x50))) + (*(s32 *)((char *)(arg0) + 0x4C));
            temp_v0 = func_15132A4C(&spE8, 0, 0, 0x10, temp_s5, arg3);
            if (temp_v0 != 0) {
                temp_s2_2 = temp_v0 + 0x170;
                memcpy(temp_s2_2, &spD4, 0x10);
                sp8C = temp_v0 + 0x38;
                sp90 = temp_v0 + 0x3C;
                sp94 = temp_v0 + 0x40;
                sp98 = 15.0f * spF4;
                spA0 = 0x12C;
                spA2 = 0;
                spA3 = 1;
                sp9C = D_800A8DC4;
                (*(s32 *)((char *)(temp_s2_2) + 0x4)) = 0;
                temp_v0_2 = func_15134908(&sp8C, 4, temp_s5 & 0xFF, arg3);
                (*(s32 *)((char *)(temp_s2_2) + 0x4)) = temp_v0_2;
                if (temp_v0_2 != 0) {
                    memcpy(temp_v0_2 + 0x40, &spD0, 4);
                }
            }
            var_s4 -= 1;
        } while (var_s4 != 0);
    }
}

s32 func_151A73EC(void *arg0) {
    void *sp18;
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x170;
    if ((*(s32 *)((char *)(arg0) + 0x64)) < 0x20) {
        temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x4));
        if (temp_a0 != 0) {
            sp18 = temp_v0;
            func_1516972C(temp_a0, arg0);
            (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
        }
    }
    return 1;
}

s32 func_151A743C(void *arg0, f32 arg1, void * arg2, s32 arg3, f32 arg4) {
    u8 sp43;
    void *sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t8;
    u8 var_a0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = (char *)(arg0) + 0x170;
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + arg4);
    if ((*(s32 *)((char *)(arg0) + 0x174)) != 0) {
        sp38 = temp_v1;
        func_1516972C((*(s32 *)((char *)(temp_v1) + 0x4)), arg0);
        (*(s32 *)((char *)(temp_v1) + 0x4)) = 0;
    }
    temp_v1_2 = (char *)(arg0) + 0x170;
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
    if ((*(s32 *)((char *)(arg0) + 0x170)) < temp_f2) {
        temp_t8 = (*(s32 *)((char *)(arg0) + 0x60)) & ~7;
        temp_t0 = temp_t8 & ~8;
        temp_t2 = temp_t0 & ~0x40;
        (*(s32 *)((char *)(arg0) + 0x60)) = temp_t8;
        (*(s32 *)((char *)(arg0) + 0x60)) = temp_t0;
        (*(s32 *)((char *)(arg0) + 0x60)) = temp_t2;
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) (temp_t2 & ~0x20);
        (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x48)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
        if ((*(s32 *)((char *)(arg0) + 0x64)) >= 0x21) {
            (*(s32 *)((char *)(arg0) + 0x64)) = 0x20;
        }
        if ((*(s32 *)((char *)(temp_v1_2) + 0x8)) != 0) {
            var_a0 = 0;
            if ((*(s32 *)((char *)(temp_v1_2) + 0x9)) != 0) {
                var_a0 = 1;
            }
            sp38 = temp_v1_2;
            sp43 = var_a0;
            temp_f0 = (*(s32 *)((char *)(arg0) + 0x18));
            temp_f2_2 = temp_f0 * 0.5f;
            func_1514AB5C(arg1, arg4, var_a0, arg0, arg3, temp_f0 * 35.0f, (random_u32(var_a0, arg0) % 3U) + 2, temp_f0, temp_f2_2, temp_f0, temp_f2_2, (s32) (*(s32 *)((char *)(temp_v1_2) + 0xA)), (s32) (*(s32 *)((char *)(temp_v1_2) + 0xC)), (s32) var_a0);
        }
    } else {
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (-temp_f2 * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * temp_f0_2);
    }
    return 1;
}

void func_151A7610(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    u32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 temp_f18;
    f32 temp_f2;

    sp8C = arg0;
    sp90 = arg1;
    sp94 = arg2;
    sp6C = (*(s32 *)((char *)(arg6) + 0x40));
    temp_f18 = (random_float() * 166.0f) + 160.0f;
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    temp_f2 = temp_f18 * D_800A8DC8;
    sp80 = -arg3 * D_800BE9A8 * temp_f2;
    sp84 = -arg4 * D_800BE9A8 * temp_f2;
    sp88 = -arg5 * D_800BE9A8 * temp_f2;
    sp58 = random_float(D_800BE9A8, 0);
    sp5C = random_float();
    sp60 = random_u32();
    func_151A26EC(&sp8C, &sp74, &sp80, 0x3F800000, ((sp58 * D_800A8DCC) + -600.0f) * D_800A8DD0, ((sp5C * 500.0f) + 400.0f) * sp6C, (sp60 % 21U) + 0xF, (random_u32() % 101U) + 0x64, 0xF, 0x14, 0, -1, 0x56, 0x27, 0, (s32) (*(s32 *)((char *)(arg6) + 0xC)), (s32) (*(s32 *)((char *)(arg6) + 0x1)));
}

void func_151A77C0(void *arg0) {
    s16 temp_v1;
    s32 temp_lo;
    s8 temp_lo_2;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_v0 = (char *)(arg0) + 0x50;
    if (temp_v1 < (*(s32 *)((char *)(arg0) + 0x54))) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (temp_v1 * (*(s8 *)((char *)(arg0) + 0x56)));
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x8))) {
        temp_lo = (*(s32 *)((char *)(temp_v0) + 0xA)) * D_800BE9E4;
        (*(s16 *)((char *)(arg0) + 0x34)) = (s16) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_lo);
        (*(s16 *)((char *)(arg0) + 0x36)) = (s16) ((*(s16 *)((char *)(arg0) + 0x36)) + temp_lo);
    }
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(arg0) + 0x50))) {
        (*(s32 *)((char *)(arg0) + 0x2F)) = 0x15;
        (*(u16 *)((char *)(arg0) + 0x44)) = (u16) ((*(u16 *)((char *)(arg0) + 0x44)) | 0x201);
        temp_lo_2 = (*(s32 *)((char *)(arg0) + 0x38)) * (*(s32 *)((char *)(temp_v0) + 0x2));
        (*(s32 *)((char *)(arg0) + 0x14)) = 0xC000F;
        (*(s32 *)((char *)(arg0) + 0x42)) = temp_lo_2;
        (*(s32 *)((char *)(arg0) + 0x41)) = temp_lo_2;
        (*(s32 *)((char *)(arg0) + 0x40)) = temp_lo_2;
    }
}

void func_151A787C(void *arg0) {
    s16 temp_v1;
    s32 temp_lo;
    s8 temp_lo_2;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_v0 = (char *)(arg0) + 0x50;
    if (temp_v1 < (*(s32 *)((char *)(arg0) + 0x54))) {
        (*(s8 *)((char *)(arg0) + 0x3F)) = (s8) (temp_v1 * (*(s8 *)((char *)(arg0) + 0x56)));
    }
    if (temp_v1 < (*(s32 *)((char *)(temp_v0) + 0x8))) {
        temp_lo = (*(s32 *)((char *)(temp_v0) + 0xA)) * D_800BE9E4;
        (*(s16 *)((char *)(arg0) + 0x34)) = (s16) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_lo);
        (*(s16 *)((char *)(arg0) + 0x36)) = (s16) ((*(s16 *)((char *)(arg0) + 0x36)) + temp_lo);
    }
    temp_lo_2 = (*(s32 *)((char *)(arg0) + 0x38)) * (*(s32 *)((char *)(temp_v0) + 0x2));
    (*(s32 *)((char *)(arg0) + 0x42)) = temp_lo_2;
    (*(s32 *)((char *)(arg0) + 0x41)) = temp_lo_2;
    (*(s32 *)((char *)(arg0) + 0x40)) = temp_lo_2;
}

void func_151A7908(void *arg0) {
    void *sp18;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x170;
    if ((*(s32 *)((char *)(arg0) + 0x174)) != 0) {
        sp18 = temp_v0;
        func_1516972C((*(s32 *)((char *)(temp_v0) + 0x4)), arg0);
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
    }
}
