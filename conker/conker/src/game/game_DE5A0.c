/**
 * Auto-decompiled from asm/DE5A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502178C();                         /* extern */
f32 func_150489B0();                        /* extern */
void * func_15052760();                          /* extern */
s32 func_150535F4();                             /* extern */
void * func_150562FC();                               /* extern */
void * func_15056B08();                               /* extern */
void * func_150585F0();                            /* extern */
void * func_150597FC();                               /* extern */
void * func_1505A770();                               /* extern */
void *func_1505EEB0();                        /* extern */
u8 random_u32();                                 /* extern */
void func_1510F800();                                 /* extern */
s32 func_1510F8D8();                /* extern */
void * func_15167D84();          /* extern */
extern s32 D_8008CAE0;
extern f32 D_8009F8A0;
extern f32 D_8009F8A4;
extern f32 D_8009F8A8;
extern f32 D_8009F8AC;
extern f32 D_8009F8B0;
extern f32 D_8009F8B4;
extern f32 D_8009F8B8;
extern f32 D_8009F8BC;
extern f32 D_8009F8C0;
extern f32 D_8009F8C4;
extern f32 D_8009F8C8;
extern f32 D_8009F8CC;
extern s32 D_800B86A4;
extern f32 D_800CC2E4;
extern f32 D_800CC2EC;

void func_150B10F0(void * *arg0) {
    f32 sp50;
    f32 sp4C;
    void * sp48;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f2;
    s32 temp_v1;

    (*(f32 *)((char *)(arg0) + 0x174)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x178)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
    (*(s32 *)((char *)(arg0) + 0x125)) = 0x64;
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
    if (func_1505A6F8(&gObjects, arg0) < D_8009F8A0) {
        temp_f0 = func_1505A6F8(arg0, &gObjects);
        temp_f16 = temp_f0;
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x18)) - gObjects[0].y_position;
        if (temp_f2 < 0.0f) {
            var_f2 = 1000.0f;
        } else {
            var_f2 = D_8009F8A4 - (temp_f2 * D_8009F8A8);
        }
        if ((temp_f0 < var_f2) && (gObjects[0].in_water == 1)) {
            sp40 = temp_f16;
            temp_f0_2 = D_8009F8AC - temp_f16;
            temp_v1 = func_1505A630((*(s32 *)((char *)(arg0) + 0x174)) - gObjects[0].x_position, gObjects[0].z_position - (*(s32 *)((char *)(arg0) + 0x178)), 0) & 0xFFFF;
            if (D_8009F8B0 < temp_f0_2) {
                D_800CC2E8[0] = gObjects[0].y_position - ((temp_f0_2 - 820.0f) * D_8009F8B4 * D_800D1550[0]);
            }
            func_1505A184((temp_v1 - 0x3000) & 0xFFFF, (temp_f0_2 * D_8009F8B8) + 5.0f, 0, &sp50, &sp4C, &sp48);
            gObjects[0].unk164 = sp50;
            gObjects[0].unk168 = sp4C;
        }
    }
    func_1505E650(arg0, 0, 1.0f, 0, 0.0f, 0.0f, 0);
}

void func_150B12FC(void * *arg0) {
    s16 sp34;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x76));
    (*(s32 *)((char *)(arg0) + 0x80)) = 0xA;
    sp34 = temp_v0;
    temp_f0 = (f32) (*(f32 *)((char *)((*(D_800D2104 + ((s32)((*(f32 *)((char *)(arg0) + 0x13F)) * 4))))) + 0x2));
    func_15058EA4(arg0, temp_f0, 0x3F800000, temp_f0, D_8009F8BC, 12.0f, -16.0f);
    func_15056B08(arg0);
    var_f2 = 6.0f;
    temp_f12 = (*(s32 *)((char *)(arg0) + 0xC4));
    var_f0 = ((f32) (s16) ((temp_v0 - (u16) (*(f32 *)((char *)(arg0) + 0x76))) * 6) * 0.00390625f) - temp_f12;
    if (var_f0 > 6.0f) {
        goto block_3;
    }
    var_f2 = -6.0f;
    if (var_f0 < -6.0f) {
block_3:
        var_f0 = var_f2;
    }
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x148));
    (*(f32 *)((char *)(arg0) + 0x148)) = (f32) (temp_f2 + ((var_f0 - temp_f2) * D_8009F8C0));
    (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) (temp_f12 + (*(f32 *)((char *)(arg0) + 0x148)));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
    func_15059140(temp_f12, arg0);
    if (func_150535F4(arg0) == 0) {
        func_1502178C(arg0, 0, -1);
    }
}

void func_150B1484(void * *arg0) {
    u16 sp36;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    s16 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    sp36 = (*(s32 *)((char *)(arg0) + 0x76));
    (*(s32 *)((char *)(arg0) + 0x80)) = 0xA;
    if ((*(s32 *)((char *)(arg0) + 0x104)) == 0) {
        var_f12 = (f32) (*(f32 *)((char *)((D_800D20FC + ((s32)((*(f32 *)((char *)(arg0) + 0x13F)) * 0x30)))) + 0x8)) + 210.0f;
        if (!((*(s32 *)((char *)(arg0) + 0x22C)) & 8)) {
            if ((*(s32 *)((char *)(arg0) + 0x223)) != 3) {
                (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) * -0.5f);
            } else {
                (*(s32 *)((char *)(arg0) + 0xB8)) = 0.0f;
            }
        }
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x223));
        if (temp_v0 == 0xE) {
            temp_f2 = func_1505A6F8((*(void **)&var_f12), ((*(s32 *)((char *)(arg0) + 0x222)) * 0x32C) + &gObjects, arg0) / (*(s32 *)((char *)(arg0) + 0x3C));
            (*(s32 *)((char *)(arg0) + 0x24)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((((*(f32 *)((char *)(D_800CC2E8) + ((s32)((*(f32 *)((char *)(arg0) + 0x222)) * 0x32C)))) + (f32) (*(f32 *)((char *)(arg0) + 0x224))) - (*(f32 *)((char *)(arg0) + 0x18))) / temp_f2);
        } else {
            if (temp_v0 == 1) {
                var_f12 = ((*(s32 *)((D_800CC2E8)))) + 210.0f;
            }
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x224));
            if (temp_v1 != 0) {
                if (temp_v1 == 0x2710) {
                    var_f12 = (f32) (*(f32 *)((char *)((*(D_800D2104 + ((s32)((*(f32 *)((char *)(arg0) + 0x13F)) * 4))) + ((s32)((*(f32 *)((char *)(arg0) + 0x21E)) * 8)))) + 0xA));
                } else {
                    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x4));
                    if ((temp_v0_2 == 0x50) || (temp_v0_2 == 5) || (temp_v0_2 == 0xAD) || (temp_v0_2 == 0xAE) || (temp_v0_2 == 0xAF)) {
                        var_f12 = (f32) (temp_v1 * 8);
                    } else {
                        var_f12 = (f32) (temp_v1 * 8) + (*(f32 *)((char *)(arg0) + 0x180));
                    }
                }
            }
            if (!((*(s32 *)((char *)(arg0) + 0x100)) & 0x40)) {
                if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x44) {
                    var_f0 = 3.0f;
                    var_f2 = 12.0f;
                    var_f12 = (f32) (*(f32 *)((char *)((*(D_800D2104 + ((s32)((*(f32 *)((char *)(arg0) + 0x13F)) * 4))) + ((s32)((*(f32 *)((char *)(arg0) + 0x21E)) * 8)))) + 0xA));
                } else {
                    var_f0 = 5.0f;
                    var_f2 = 35.0f;
                }
                func_15058EA4((*(void **)&var_f12), (f32)(s32)(arg0), var_f12, var_f0, var_f12, -var_f0, var_f2);
            }
        }
        func_15056B08(arg0);
    } else {
        func_150585F0(arg0, 0x3D4CCCCD);
    }
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
    func_15059140((f32)(s32)(arg0));
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x4));
    if ((temp_v0_3 == 5) || (temp_v0_3 == 0xAD) || (temp_v0_3 == 0xAE) || (temp_v0_3 == 0xAF) || (temp_v0_3 == 0x44)) {
        func_15052760(arg0, (s16) sp36);
    }
    if (func_150535F4(arg0) == 0) {
        func_1502178C(arg0, 0, -1);
    }
}

void func_150B17DC(void * *arg0) {
    void * sp3C;
    f32 sp34;
    f32 sp30;
    void * sp2C;
    f32 var_f12;
    s16 temp_v0;
    u8 temp_t9;
    void *temp_s0;

    temp_s0 = func_1505EEB0(0xA, &sp3C);
    func_15056B08(arg0);
    if ((*(s32 *)((char *)(arg0) + 0x1E5)) == 2) {
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x1C));
        (*(s32 *)((char *)(arg0) + 0x20)) = 0.0f;
        (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x18)) + ((f32) ((s32) (*(f32 *)((char *)(arg0) + 0x21C)) / 5) + 160.0f));
        (*(s32 *)((char *)(arg0) + 0x7E)) = 0U;
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) D_8009F8C4;
    } else {
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x7E));
        var_f12 = (f32) temp_t9;
        if ((s32) temp_t9 < 0) {
            var_f12 += 4294967296.0f;
        }
        (*(f32 *)((char *)(temp_s0) + 0xB8)) = (f32) (func_150AD78C(var_f12 * D_8009F8C8) * 6.0f);
        func_1505A770(arg0);
        (*(f32 *)((char *)(temp_s0) + 0x18)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) - 170.0f);
        (*(s8 *)((char *)(temp_s0) + 0x13C)) = (s8) (gCurrentObjectIndex + 0x64);
        func_1505A184((*(s32 *)((char *)(temp_s0) + 0x7A)), (*(s32 *)((char *)(temp_s0) + 0xB8)) * -7.0f, 0, &sp34, &sp30, &sp2C);
        (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + sp34);
        (*(f32 *)((char *)(temp_s0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x1C)) + sp30);
        (*(u16 *)((char *)(temp_s0) + 0x7A)) = (u16) ((*(u16 *)((char *)(temp_s0) + 0x7A)) + (D_800BE9A0 << 8));
        (*(u8 *)((char *)(arg0) + 0x7E)) = (u8) ((*(u8 *)((char *)(arg0) + 0x7E)) + D_800BE9A0);
        (*(s32 *)((char *)(temp_s0) + 0xAD)) = 0;
        (*(s32 *)((char *)(temp_s0) + 0x3C)) = 0.0f;
        (*(s32 *)((char *)(temp_s0) + 0x16C)) = 0.0f;
        (*(s32 *)((char *)(temp_s0) + 0x170)) = 0.0f;
    }
    temp_v0 = func_1505A630(gObjects[0].x_position - (*(s32 *)((char *)(arg0) + 0x14)), (*(s32 *)((char *)(arg0) + 0x1C)) - gObjects[0].z_position, 0);
    (*(s32 *)((char *)(arg0) + 0x7A)) = temp_v0;
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) (temp_v0 + 0x4000) * 0.005493164f);
}

void func_150B19E0(void * *arg0) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    s16 sp70;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s16 sp5C;
    s8 sp5B;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    s32 sp40;
    s32 sp3C;
    u8 sp37;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f18;
    f32 var_f2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_t8;
    s32 temp_v0;
    s8 temp_v1;
    u8 temp_v0_2;

    temp_t8 = (*(s32 *)((char *)(arg0) + 0xF8)) & ~4;
    var_f2 = 0.0f;
    (*(s32 *)((char *)(arg0) + 0xF8)) = temp_t8;
    temp_t1 = temp_t8 | 0x80;
    (*(s32 *)((char *)(arg0) + 0xB0)) = 0x19;
    (*(s32 *)((char *)(arg0) + 0x13C)) = 0;
    (*(s32 *)((char *)(arg0) + 0xF8)) = temp_t1;
    if ((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f) {
        (*(s32 *)((char *)(arg0) + 0xF8)) = (s32) (temp_t1 | 4);
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x25C));
    (*(s32 *)((char *)(arg0) + 0x104)) = 0xA;
    (*(s32 *)((char *)(arg0) + 0x239)) = 3;
    (*(s32 *)((char *)(arg0) + 0xFC)) = 0xA7;
    (*(s32 *)((char *)(arg0) + 0x80)) = 1;
    if (temp_v0 & 0x40) {
        (*(s32 *)((char *)(arg0) + 0x25C)) = (s32) (temp_v0 & ~0x40);
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) D_800CC2E4;
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) D_800CC2EC;
    }
    if (((*(s32 *)((char *)(arg0) + 0x13D)) != 0) && ((sp84 = 0.0f, func_150562FC(arg0), var_f2 = 0.0f, (*(&D_800B86A4 + ((*(s32 *)((char *)(arg0) + 0x13D)) * 0x32C)) == 0)) || (D_800CC250 & 4)) && ((s32) (*(s32 *)((char *)(arg0) + 0x21C)) >= 9)) {
        var_f2 = -20.0f;
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0xB8));
    (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) (temp_f0 + ((var_f2 - temp_f0) * D_8009F8CC));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
    func_15059140((f32)(s32)(arg0));
    func_150597FC(arg0);
    func_1505E650(arg0, 0, 1.0f, 0, 0.0f, 0.0f, 0);
    func_1502178C(arg0, 0, -1);
    if (((*(u32 *)((char *)(arg0) + 0x13D)) != 0) && ((u32) (random_u32() & 0xFF) < 0x28U)) {
        sp80 = (*(f32 *)((char *)(arg0) + 0x14C)) * (f32) (random_u32() % 40U);
        temp_v0_2 = random_u32();
        sp37 = temp_v0_2;
        sp78 = func_150489B0(temp_v0_2 & 0xFF);
        temp_f0_2 = func_15048A40(sp37);
        sp48 = 0;
        sp4A = 0;
        sp3C = D_8008CAE0;
        sp4C = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x14)) + (sp78 * sp80));
        sp4E = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18));
        sp50 = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x1C)) + (temp_f0_2 * sp80));
        func_1510F800(0);
        sp40 = func_1510F8D8(sp4C, sp4E, sp50, 0);
        temp_t5 = (s32) gObjects[0].unk76 >> 8;
        sp37 = (u8) temp_t5;
        sp7C = gObjects[0].xz_velocity * 64.0f;
        sp52 = (s16) (s32) (func_150489B0(temp_t5 & 0xFF, gObjects[0].unk76) * sp7C);
        temp_f18 = func_15048A40(sp37) * -sp7C;
        sp56 = -0x1E;
        sp5B = 7;
        sp5C = 0;
        sp5E = -0x50;
        sp54 = (s16) (s32) temp_f18;
        temp_v1 = random_u32() & 0xFF;
        temp_t0 = temp_v1 << 0xC;
        sp67 = temp_v1;
        sp60 = (temp_t0 / 5100) + 0xCC;
        sp62 = (temp_t0 / 12750) + 0x51;
        sp64 = 0x190;
        sp66 = 0;
        sp68 = 0xFF;
        sp69 = 0xFF;
        sp6A = 0;
        sp6B = 0xFF;
        sp70 = 0;
        func_15167D84(&sp3C, 0, 0, -1, 0xFF, 0);
    }
}
