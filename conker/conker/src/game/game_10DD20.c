/**
 * Auto-decompiled from asm/10DD20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502178C();                         /* extern */
s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
s32 func_150535F4();                             /* extern */
void * func_15056B08();                            /* extern */
void * func_150585F0();                            /* extern */
void * func_150599C8();                       /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                                /* extern */
void * func_150E7FEC(); /* extern */
void * func_150E83AC();                /* extern */
void * func_15136C3C(); /* extern */
void * func_151541B8(); /* extern */
void * func_151D3FF4();                   /* extern */
void * func_151D40D4(); /* extern */
void * func_151D5334();     /* extern */
void * func_151D5514();                   /* extern */
extern u16 D_800CC346;

void func_150E0870(void *arg0, s32 arg1, s32 arg2) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    u8 sp7F;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    void * sp50;
    f32 sp4C;
    u32 sp44;                                       /* compiler-managed */
    f32 sp40;
    f32 *var_a0;
    f32 var_f6;
    s32 temp_s1;
    s32 temp_t5;

    s32 sp68;
    temp_s1 = arg1 & 0xFF;
    if (arg0 != NULL) {
        if (D_800C35EA != 1) {
            func_10010630(0x2BB, arg0, 0x7FFF, 0x3E8, 0x7D0);
            func_10010630(0x2BA, arg0, 0x7FFF, 0x3E8, 0x7D0);
        }
        sp8C = (*(s32 *)((char *)(arg0) + 0x14));
        sp90 = (*(s32 *)((char *)(arg0) + 0x18)) + 20.0f;
        sp7F = 0;
        sp94 = (*(s32 *)((char *)(arg0) + 0x1C));
        sp70 = sp8C;
        sp78 = sp94;
        sp74 = sp90 + 100.0f;
        func_1504715C(&sp4C, arg0);
        if ((func_15046C80(&sp70, 0, sp90 - 200.0f, &sp4C) != 0) && (sp68 & 1)) {
            sp80 = sp70;
            sp7F = 1;
            sp84 = sp4C;
            sp88 = sp78;
            sp40 = random_float();
            sp44 = random_u32();
            func_150E7FEC((sp40 * 125.0f) + 204.0f, sp44, ((sp44 % 101U) + 0x9B) & 0xFF, &sp50, &sp80, (random_u32() % 302U) + 0x1F4, 0, 1, 0, 0, 0, temp_s1, 0);
        }
        func_151D5404(&sp8C, 0x43FD0000, 0x447D4000, 0x3A8163D3, 0xF, 0x14, temp_s1, arg2);
        func_151D5334(&sp8C, 0x43FD0000, 0x447D4000, 0x3A8163D3, 5, temp_s1, arg2);
        func_151D5514(&sp8C, temp_s1 & 0xFF, arg2);
        func_151D3FF4(&sp8C, temp_s1 & 0xFF, arg2);
        var_a0 = &sp8C;
        if (sp7F != 0) {
            var_a0 = &sp80;
        }
        sp44 = var_a0;
        func_150E83AC((u32) var_a0, (s16) ((random_u32((u32) var_a0) % 62U) + 0x78), temp_s1 & 0xFF, arg2);
        sp40 = random_float();
        temp_t5 = (random_u32() % 56U) + 0xC8;
        var_f6 = (f32) temp_t5;
        if (temp_t5 < 0) {
            var_f6 += 4294967296.0f;
        }
        func_151541B8(&sp8C, (sp40 * 4.0f) + 12.0f, 0x3FD20C49, var_f6, 0.0f, temp_s1, arg2);
        func_15136C3C(arg0, 1, 1, 1, 1, 0, temp_s1, arg2);
        func_151D40D4(&sp8C, 0, arg0, arg0, 0, 0x16, 0x15, 0);
    }
}

void func_150E0BE0(void * *arg0) {
    u8 temp_t0;
    u8 temp_v0;
    u8 var_v0;

    (*(s32 *)((char *)(arg0) + 0xB0)) = 0xF;
    (*(s32 *)((char *)(arg0) + 0x80)) = 0xA;
    if ((*(s32 *)((char *)(arg0) + 0x87)) != 0) {
        var_v0 = (*(s32 *)((char *)(arg0) + 0x83));
        if ((s32) var_v0 < 0x64) {
            temp_t0 = var_v0 + D_800BE9A0;
            (*(s32 *)((char *)(arg0) + 0x83)) = temp_t0;
            var_v0 = temp_t0 & 0xFF;
        }
        if ((s32) var_v0 >= 5) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x251));
            if (temp_v0 != 3) {
                (*(s32 *)((char *)(arg0) + 0x218)) = 0;
                (*(s32 *)((char *)(arg0) + 0x232)) = 4U;
                (*(u16 *)((char *)(arg0) + 0x78)) = (u16) D_800CC346;
                if (temp_v0 == 2) {
                    (*(s32 *)((char *)(arg0) + 0x232)) = 2U;
                }
            }
        }
    } else {
        if ((s32) (*(s32 *)((char *)(arg0) + 0x83)) >= 0x3D) {
            D_800D1580 = 0xFF020133;
            gCurrentObject = &gObjects;
            func_1506E8D8();
            gCurrentObject = arg0;
        }
        (*(s32 *)((char *)(arg0) + 0x83)) = 0U;
    }
    if ((*(s32 *)((char *)(arg0) + 0x232)) == 4) {
        if ((*(s32 *)((char *)(arg0) + 0x83)) == 0) {
            (*(u16 *)((char *)(arg0) + 0x78)) = (u16) (*(u16 *)((char *)(arg0) + 0x76));
        }
        func_150599C8(arg0, 3, (*(s32 *)((char *)(arg0) + 0x78)));
    }
    (*(s32 *)((char *)(arg0) + 0x87)) = 0U;
    if ((*(s32 *)((char *)(arg0) + 0x104)) == 0) {
        func_15056B08(arg0, 0x3D4C0000);
    } else {
        func_150585F0(arg0, 0x3D4CCCCD);
    }
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
    func_15059140(arg0);
    (*(f32 *)((char *)(arg0) + 0xBC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) - (*(f32 *)((char *)(arg0) + 0x2C)));
    (*(f32 *)((char *)(arg0) + 0x148)) = (f32) ((*(f32 *)((char *)(arg0) + 0x1C)) - (*(f32 *)((char *)(arg0) + 0x34)));
    if (func_150535F4(arg0) == 0) {
        func_1502178C(arg0, 0, -1);
    }
}
