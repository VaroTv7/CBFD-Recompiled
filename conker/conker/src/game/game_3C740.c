/**
 * Auto-decompiled from asm/3C740.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
void * func_15189900();                          /* extern */
s32 func_151EF610();                                /* extern */
extern f32 D_80096250;
extern f32 D_80096254;
extern f32 D_80096258;
extern f32 D_8009625C;
extern f32 D_80096260;
extern f32 D_80096264;
extern f32 D_80096268;
extern f32 D_8009626C;
extern f32 D_80096270;
extern f32 D_80096274;
extern f32 D_80096278;
extern f32 D_8009627C;
extern f32 D_80096280;
extern f32 D_80096284;
extern f32 D_80096288;
extern f32 D_8009628C;
extern f32 D_80096290;
extern f32 D_80096294;
extern f32 D_80096298;
extern f32 D_8009629C;
extern f32 D_800962A0;
extern f32 D_800962A4;
extern f32 D_800962A8;
extern f32 D_800962AC;
extern f32 D_800962B0;
extern f32 D_800962B4;
extern f32 D_800962B8;
extern f32 D_800962BC;
extern f32 D_800962C0;
extern f32 D_800962C4;
extern f32 D_800962C8;
extern f32 D_800962CC;
extern f32 D_800962D0;
extern f32 D_800962D4;
extern f32 D_800962D8;
extern f32 D_800962DC;
extern f32 D_800962E0;
extern f32 D_800962E4;
extern f32 D_800962E8;
extern f32 D_800962EC;
extern f32 D_800962F0;
extern f32 D_800962F4;
extern f32 D_800962F8;
extern f32 D_800962FC;
extern f32 D_80096300;
extern f32 D_80096304;
extern f32 D_80096308;
extern f32 D_8009630C;
extern f32 D_80096310;
extern f32 D_80096314;
extern f32 D_80096318;
extern s32 D_800D98D0;

s32 func_1500F290(f32 arg0, f32 arg1, f32 arg2) {
    s32 sp60;
    s8 sp5D;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s32 sp54;
    s32 sp50;
    s8 sp4E;
    s16 sp4C;
    s32 sp48;

    sp4E = 0x38;
    sp50 = 0;
    sp54 = (func_151EF610() % 4096) + 0x4000;
    sp48 = 0x20014;
    sp4C = 1;
    sp58 = 0xFF;
    sp59 = 0xFF;
    sp5A = 0;
    sp5B = 0;
    sp5C = 0;
    sp5D = 0xFF;
    sp60 = 0x30001;
    func_1513C5B0(&sp48, 0, 0, 0, arg0, arg1, arg2, 110.0f, 110.0f, 0, 0, 0, 0xFF, 0);
    return 0;
}

void func_1500F378(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_151491F4((s16) ((random_u32() & 0x7F) + 0xA), 1, -1, 1, 0, 0xA, 0xFF, 0);
    if (temp_v0 != NULL) {
        (*(s16 *)((char *)(temp_v0) + 0x28)) = (s16) arg0;
        (*(s16 *)((char *)(temp_v0) + 0x2A)) = (s16) arg1;
        (*(s16 *)((char *)(temp_v0) + 0x2C)) = (s16) arg2;
        (*(s32 *)((char *)(temp_v0) + 0x30)) = 1;
        (*(s16 *)((char *)(temp_v0) + 0x2E)) = (s16) arg3;
    }
}

void func_1500F40C(void) {
    s32 sp74;
    s32 sp70;
    s16 sp6E;
    s16 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;
    s16 sp28;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f12_8;
    f32 temp_f12_9;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 temp_f14_5;
    f32 temp_f14_6;
    f32 temp_f14_7;
    f32 temp_f14_8;
    f32 temp_f14_9;
    f32 temp_f20;
    f32 temp_f20_2;

    func_1500F378(0x1612, -0x553, -0x2DC, -0x69F);
    func_1500F378(0x1633, -0x553, -0x3C2, -0x69F);
    temp_f20 = D_80096250;
    (*(s32 *)((char *)&(D_800D98D0) + 0x0)) = func_1500F290(D_80096254, temp_f20, 0.0f);
    (*(s32 *)((char *)&(D_800D98D0) + 0x4)) = func_1500F290(D_80096258, temp_f20, -78.0f);
    (*(s32 *)((char *)&(D_800D98D0) + 0x8)) = func_1500F290(D_8009625C, temp_f20, -664.0f);
    (*(s32 *)((char *)&(D_800D98D0) + 0xC)) = func_1500F290(D_80096260, temp_f20, -740.0f);
    sp50 = 0.0f;
    sp54 = D_8009626C;
    sp58 = 2.0f;
    sp5C = 6.0f;
    sp48 = 7.0f;
    sp64 = D_80096270;
    temp_f12 = D_8009627C - D_80096264;
    sp4C = 10.0f;
    temp_f14 = D_80096280 - D_80096268;
    sp70 = 3;
    sp74 = 2;
    sp2A = 0x12;
    sp2C = -0x15;
    sp2E = 0xF;
    sp60 = 0x9B;
    sp62 = 0x64;
    sp6C = 0x29;
    sp6E = 0x29;
    sp30 = D_80096264;
    sp38 = D_80096268;
    sp44 = temp_f14;
    sp3C = temp_f12;
    sp68 = D_80096274;
    sp34 = D_80096278;
    sp40 = 0.0f;
    temp_f20_2 = D_80096284;
    sp28 = (s32) (func_150484A0(temp_f12, temp_f14) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_2 = D_80096294 - D_8009628C;
    sp30 = D_8009628C;
    sp34 = D_80096288;
    temp_f14_2 = D_8009629C - D_80096290;
    sp38 = D_80096290;
    sp40 = D_80096298 - D_80096288;
    sp3C = temp_f12_2;
    sp44 = temp_f14_2;
    sp28 = (s32) (func_150484A0(temp_f12_2, temp_f14_2) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_3 = D_800962AC - D_800962A0;
    sp34 = D_800962A4;
    sp30 = D_800962A0;
    temp_f14_3 = D_800962B4 - D_800962A8;
    sp38 = D_800962A8;
    sp40 = D_800962B0 - D_800962A4;
    sp3C = temp_f12_3;
    sp44 = temp_f14_3;
    sp28 = (s32) (func_150484A0(temp_f12_3, temp_f14_3) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_4 = D_800962C0 - D_800962B8;
    sp34 = D_800962BC;
    sp30 = D_800962B8;
    temp_f14_4 = D_800962C8 - 788.0f;
    sp38 = 788.0f;
    sp40 = D_800962C4 - D_800962BC;
    sp3C = temp_f12_4;
    sp44 = temp_f14_4;
    sp28 = (s32) (func_150484A0(temp_f12_4, temp_f14_4) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_5 = D_800962D8 - D_800962CC;
    sp34 = D_800962D0;
    sp30 = D_800962CC;
    temp_f14_5 = D_800962E0 - D_800962D4;
    sp38 = D_800962D4;
    sp40 = D_800962DC - D_800962D0;
    sp3C = temp_f12_5;
    sp44 = temp_f14_5;
    sp28 = (s32) (func_150484A0(temp_f12_5, temp_f14_5) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_6 = 1400.0f - D_800962E4;
    sp30 = D_800962E4;
    temp_f14_6 = D_800962F0 - D_800962E8;
    sp3C = temp_f12_6;
    sp38 = D_800962E8;
    sp34 = D_800962EC;
    sp44 = temp_f14_6;
    sp40 = 0.0f;
    sp28 = (s32) (func_150484A0(temp_f12_6, temp_f14_6) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_7 = D_800962FC - D_800962F4;
    sp34 = D_800962F8;
    sp30 = D_800962F4;
    temp_f14_7 = 572.0f - 668.0f;
    sp38 = 668.0f;
    sp40 = D_80096300 - D_800962F8;
    sp3C = temp_f12_7;
    sp44 = temp_f14_7;
    sp28 = (s32) (func_150484A0(temp_f12_7, temp_f14_7) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_8 = 872.0f - D_80096304;
    sp34 = D_80096308;
    sp30 = D_80096304;
    temp_f14_8 = D_8009630C - 572.0f;
    sp38 = 572.0f;
    sp40 = -1680.0f - D_80096308;
    sp3C = temp_f12_8;
    sp44 = temp_f14_8;
    sp28 = (s32) (func_150484A0(temp_f12_8, temp_f14_8) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
    temp_f12_9 = 772.0f - 872.0f;
    sp34 = -1680.0f;
    sp30 = 872.0f;
    temp_f14_9 = D_80096318 - D_80096310;
    sp38 = D_80096310;
    sp40 = D_80096314 - -1680.0f;
    sp3C = temp_f12_9;
    sp44 = temp_f14_9;
    sp28 = (s32) (func_150484A0(temp_f12_9, temp_f14_9) * temp_f20_2) - 0x40;
    func_15189900(&sp28, 1);
}
