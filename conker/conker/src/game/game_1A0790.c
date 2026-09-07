/**
 * Auto-decompiled from asm/1A0790.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_151733E4();
s32 func_15173994();                        /* static */
extern s32 D_8008CC70;
extern s32 D_800DBEA8;
extern s8 D_800DD2E0;
extern s32 D_800DD2E4;
extern s16 D_800DD2E8;
extern s16 D_800DD2EA;
extern s16 D_800DD2EC;
extern s16 D_800DD2EE;
extern s16 D_800DD2F0;
extern s16 D_800DD2F2;
extern s16 D_800DD2F4;

void func_151732E0(s32 arg0) {
    s16 temp_v0;
    s8 temp_a0;

    temp_v0 = D_800B0DF0->unk3C;
    if ((D_800B0DF0->unk40 == temp_v0) && (temp_v0 == 0)) {
        D_800B0DF0->unk40 = 0x64;
    }
    (*(u8 *)((char *)&(D_8008CC70) + 0x0)) = (u8) D_800B0DF0->unk42;
    (*(u8 *)((char *)&(D_8008CC70) + 0x1)) = (u8) D_800B0DF0->unk43;
    (*(u8 *)((char *)&(D_8008CC70) + 0x2)) = (u8) D_800B0DF0->unk44;
    (*(u8 *)((char *)&(D_8008CC70) + 0x3)) = (u8) D_800B0DF0->unk45;
    (*(s16 *)((char *)&(D_8008CC70) + 0x4)) = (s16) D_800B0DF0->unk3A;
    (*(s16 *)((char *)&(D_8008CC70) + 0x6)) = (s16) D_800B0DF0->unk3C;
    (*(s16 *)((char *)&(D_8008CC70) + 0x8)) = (s16) D_800B0DF0->unk3E;
    (*(s16 *)((char *)&(D_8008CC70) + 0xA)) = (s16) D_800B0DF0->unk40;
    (*(u16 *)((char *)&(D_8008CC70) + 0xC)) = (u16) D_800B0DF0->unk2;
    (*(u16 *)((char *)&(D_8008CC70) + 0xE)) = (u16) D_800B0DF0->unk0;
    if (D_800B0DF0->unk46 != -1) {
        D_800DD2E0 = 1;
        temp_a0 = D_800B0DF0->unk46;
        func_151733E4(temp_a0, temp_a0, arg0, 0, -1);
        return;
    }
    D_800DD2E0 = 0;
    func_151733E4(0, 0, arg0, 0, -1);
}

s32 func_151733D8(s32 arg0, void * arg1) {
    return arg0;
}

void func_151733E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 *sp54;
    s16 *sp50;
    s16 *sp4C;
    s16 *sp48;
    s16 *sp44;
    s16 *sp40;
    void * *var_s5;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_v1_2;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v1;
    s16 var_v1_2;
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s2;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v0_6;
    u16 temp_v1;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;

    D_800DD2F0 = arg3;
    var_s2 = 0;
    if (arg4 == -1) {
        var_s5 = &D_800DD2E4;
        sp54 = &D_800DD2EC;
        sp50 = &D_800DD2EE;
        sp4C = &D_800DD2E8;
        sp48 = &D_800DD2EA;
        sp44 = &D_800DD2F2;
        sp40 = &D_800DD2F4;
    } else {
        var_s5 = &D_8008CC70 + (arg4 * 0x10);
        sp54 = (char *)(var_s5) + 4;
        sp50 = (char *)(var_s5) + 6;
        sp4C = (char *)(var_s5) + 8;
        sp48 = (char *)(var_s5) + 0xA;
        sp44 = (char *)(var_s5) + 0xC;
        sp40 = (char *)(var_s5) + 0xE;
    }
    do {
        var_s0 = &arg1;
        if (var_s2 == 0) {
            var_s0 = &arg0;
        }
        temp_v0 = *var_s0;
        switch (temp_v0) {                          /* irregular */
        case 0x7C:
            *var_s0 = 1;
            break;
        case 0x7D:
        case 0x7F:
            *var_s0 = 2;
            break;
        case 0x7E:
            *var_s0 = func_15173994(arg2);
            break;
        }
        var_s2 += 1;
    } while (var_s2 < 2);
    temp_v0_2 = *(&D_8008CC70 + (arg0 * 0x10));
    (*(s8 *)((char *)(var_s5) + 0x0)) = (s8) (((s32) ((*(&D_8008CC70 + (arg1 * 0x10)) - temp_v0_2) * arg3) / 4096) + temp_v0_2);
    temp_v0_3 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0x1));
    (*(s8 *)((char *)(var_s5) + 0x1)) = (s8) (((s32) (((*(s8 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0x1)) - temp_v0_3) * arg3) / 4096) + temp_v0_3);
    temp_v0_4 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0x2));
    (*(s8 *)((char *)(var_s5) + 0x2)) = (s8) (((s32) (((*(s8 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0x2)) - temp_v0_4) * arg3) / 4096) + temp_v0_4);
    temp_v0_5 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0x3));
    (*(s8 *)((char *)(var_s5) + 0x3)) = (s8) (((s32) (((*(s8 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0x3)) - temp_v0_5) * arg3) / 4096) + temp_v0_5);
    temp_v0_6 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0x4));
    *sp54 = temp_v0_6 + ((s32) (((*(s32 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0x4)) - temp_v0_6) * arg3) / 4096);
    temp_v1 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0x6));
    *sp50 = temp_v1 + ((s32) (((*(s32 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0x6)) - temp_v1) * arg3) / 4096);
    temp_a0 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0x8));
    *sp4C = temp_a0 + ((s32) (((*(s32 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0x8)) - temp_a0) * arg3) / 4096);
    temp_a1 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0xA));
    *sp48 = temp_a1 + ((s32) (((*(s32 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0xA)) - temp_a1) * arg3) / 4096);
    temp_v1_2 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0xC));
    if (temp_v1_2 == -1) {
        var_v0 = D_800B0DF0->unk2;
    } else {
        var_v0 = temp_v1_2;
    }
    temp_a0_2 = (*(s32 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0xC));
    if (temp_a0_2 == -1) {
        var_v1 = D_800B0DF0->unk2;
    } else {
        var_v1 = temp_a0_2;
    }
    *sp44 = ((s32) ((var_v1 - var_v0) * arg3) / 4096) + var_v0;
    temp_a0_3 = (*(s32 *)((char *)((&D_8008CC70 + (arg0 * 0x10))) + 0xE));
    if (temp_a0_3 == -1) {
        var_v0_2 = D_800B0DF0->unk0;
    } else {
        var_v0_2 = temp_a0_3;
    }
    temp_a0_4 = (*(s32 *)((char *)((&D_8008CC70 + (arg1 * 0x10))) + 0xE));
    if (temp_a0_4 == -1) {
        var_v1_2 = D_800B0DF0->unk0;
    } else {
        var_v1_2 = temp_a0_4;
    }
    *sp40 = ((s32) ((var_v1_2 - var_v0_2) * arg3) / 4096) + var_v0_2;
}

void func_151738C4(s32 arg0) {
    if (D_800B0DF0->unk46 == -1) {
        if (D_800DBFF0->unk5F0 & 1) {
            func_151733E4(6, 6, arg0, 0, -1);
            (*(u8 *)((char *)&(D_800DBEA8) + 0x0)) = (u8) (*(u8 *)((char *)&(D_800DD2E4) + 0x0));
            (*(u8 *)((char *)&(D_800DBEA8) + 0x1)) = (u8) (*(u8 *)((char *)&(D_800DD2E4) + 0x1));
            (*(u8 *)((char *)&(D_800DBEA8) + 0x2)) = (u8) (*(u8 *)((char *)&(D_800DD2E4) + 0x2));
            return;
        }
        func_151733E4(0, 0, arg0, 0, -1);
        (*(u8 *)((char *)&(D_800DBEA8) + 0x0)) = (u8) D_800B0DF0->unk5;
        (*(u8 *)((char *)&(D_800DBEA8) + 0x1)) = (u8) D_800B0DF0->unk6;
        (*(u8 *)((char *)&(D_800DBEA8) + 0x2)) = (u8) D_800B0DF0->unk7;
    }
}

s32 func_15173994(s32 arg0) {
    return (s32) D_800B0DF0->unk46;
}
