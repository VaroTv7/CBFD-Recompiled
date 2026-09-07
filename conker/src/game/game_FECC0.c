/**
 * Auto-decompiled from asm/FECC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1501A680();                             /* extern */
void *func_150950D4(); /* extern */
void * func_150A7A48();                     /* extern */
void * func_151102CC();                    /* extern */
extern s32 D_80089470;
extern s32 D_800DBE80;
extern s32 D_800DBE88;
extern s32 D_800DBEB0;

void *func_150D1810(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4, s32 arg6) {
    void * spC0;
    void * sp80;
    s32 sp7C;
    s32 sp78;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s16 sp6A;
    s16 sp68;
    s32 sp64;
    s16 temp_a3;
    s16 temp_t0;
    s32 temp_f10;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;

    if ((D_800BE9F0 == 0x33) || (D_800BE9F0 == 0x32) || (D_800BE9F0 == 0x3F)) {
        sp7C = -0x62;
        sp78 = 0x27;
    } else {
        sp7C = -0x13;
        sp78 = 0x65;
    }
    sp68 = 4;
    sp6A = 0x100;
    sp6C = 0;
    sp6D = 3;
    sp6E = 0;
    sp64 = D_800DBE80;
    (*(s32 *)((char *)(arg0) + 0x4)) = -1;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xD7000002;
    temp_s0_2 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
    temp_s0_3 = (char *)(temp_s0_2) + 8;
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xEF082C0F;
    (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0x0F0A4004;
    temp_s0_4 = (char *)(temp_s0_3) + 8;
    (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xFCFFFFFF;
    (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0xFFFCF279;
    temp_s0_5 = func_150950D4(func_1501A680(func_1501A490((char *)(temp_s0_4) + 8, (*(s32 *)((char *)&(D_80082FA4) + 0x2)), 0, 0, 0, 0)), &sp64, 0, 0, 0, 0, 2, 0x100, 0x100, 3);
    func_151102CC(&spC0, 0, 0, arg6);
    func_150A7A48(&spC0, D_800BE628 + ((*(s32 *)((char *)&(D_80082FA4) + 0x0)) * 0x180) + 0xBC, &sp80);
    guMtxF2L(&sp80, ((((*(s32 *)((char *)&(D_80082FA4) + 0x0)) * 2) + D_800BE9C0) << 6) + D_800DBEB0);
    (*(s32 *)((char *)(temp_s0_5) + 0x0)) = 0xDA380007;
    (*(s32 *)((char *)(temp_s0_5) + 0x4)) = (s32) (((((*(s32 *)((char *)&(D_80082FA4) + 0x0)) * 2) + D_800BE9C0) << 6) + D_800DBEB0);
    temp_s0_6 = (char *)(temp_s0_5) + 8;
    (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xDA380003;
    (*(s32 *)((char *)(temp_s0_6) + 0x4)) = &D_80089470;
    temp_s0_7 = (char *)(temp_s0_6) + 8;
    (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xDB0E0000;
    temp_s0_8 = (char *)(temp_s0_7) + 8;
    (*(s32 *)((char *)(temp_s0_7) + 0x4)) = (s32) (*(s32 *)((char *)((D_800BE628 + ((*(s32 *)((char *)&(D_80082FA4) + 0x0)) * 0x180))) + 0xB8));
    temp_f10 = (s32) (arg4 * 81.0f);
    temp_a2 = *(&D_800DBE88 + (((*(s32 *)((char *)&(D_80082FA4) + 0x0)) * 8) + (D_800BE9C0 * 4)));
    temp_a3 = ((sp7C + 0x100) << 5) + temp_f10;
    (*(s32 *)((char *)(temp_a2) + 0x1A)) = temp_a3;
    (*(s32 *)((char *)(temp_a2) + 0xA)) = temp_a3;
    temp_s0 = (char *)(temp_s0_8) + 8;
    temp_t0 = ((sp78 + 0x1FF) << 5) + temp_f10;
    (*(s32 *)((char *)(temp_a2) + 0x3A)) = temp_t0;
    (*(s32 *)((char *)(temp_a2) + 0x2A)) = temp_t0;
    (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0x01004008;
    (*(s32 *)((char *)(temp_s0_8) + 0x4)) = temp_a2;
    (*(s32 *)((char *)(temp_s0) + 0x4)) = 0x406;
    (*(s32 *)((char *)(temp_s0_8) + 0x8)) = 0x06000204;
    return (char *)(temp_s0) + 8;
}
