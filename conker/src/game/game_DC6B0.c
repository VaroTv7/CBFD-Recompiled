/**
 * Auto-decompiled from asm/DC6B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1505D024();                      /* extern */
void * func_150A7960(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_150B1DB0();                     /* extern */
void * func_150E1AB0(); /* extern */
void * func_150E2DB4(); /* extern */
void *func_151149AC();                       /* extern */
s32 func_15130280();        /* extern */
void * func_15131828();             /* extern */
void * func_15131958();                  /* extern */
void * func_15132570();                            /* extern */
void * func_1513259C();                            /* extern */
s32 func_1513264C();   /* extern */
s32 func_15145128();          /* extern */
void * func_15145974();              /* extern */
void * func_15152190(); /* extern */
void * func_15153634();                 /* extern */
s32 func_1515548C();   /* extern */
void * func_1515FF74();                    /* extern */
void * func_1516D99C(); /* extern */
void * func_15179008();                                 /* extern */
s32 func_151B7328();            /* extern */
void * func_151CF898();                  /* extern */
s8 func_151D8E6C();                                 /* extern */
void * memcpy();                           /* extern */
extern s32 D_8009F790;
extern s32 D_8009F7A4;
extern f32 D_8009F7B8;
extern f32 D_8009F7BC;
extern f32 D_8009F7C0;
extern f32 D_8009F7C4;
extern f32 D_8009F7C8;
extern f32 D_8009F7CC;
extern f32 D_8009F7D0;
extern f32 D_8009F7D4;
extern f32 D_8009F7D8;
extern f32 D_8009F7DC;
extern f32 D_8009F7E0;
extern f32 D_8009F7E4;
extern f32 D_8009F7E8;
extern f32 D_8009F7EC;
extern f32 D_8009F7F0;
extern f32 D_8009F7F4;
extern f32 D_8009F7F8;
extern f32 D_8009F7FC;
extern f32 D_8009F800;
extern s32 D_800DBF94;
extern void *D_800DCE94;

void func_150AF200(s32 arg0, s32 arg1) {
    if (D_800CC3D4 == 0) {
        if ((*(s32 *)((char *)(D_800DBF94) + (((s32) ((char *)(func_151149AC(arg0 & 0xFF, arg0)) - (char *)(D_800DBEF4)) / 160) * 4))) & 1) {
            func_1505D024(&gObjects, 0x3F, 0x6E00, -1);
            return;
        }
        if ((*(s32 *)((char *)(D_800DBF94) + (((s32) ((char *)(func_151149AC(arg1, 0x3F)) - (char *)(D_800DBEF4)) / 160) * 4))) & 1) {
            func_1505D024(&gObjects, 0x3F, 0xEE00, -1);
        }
    }
}

void func_150AF2E0(void *arg1) {
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x2));
    func_151CF898((f32) (temp_v0 + (*(f32 *)((char *)(arg1) + 0x8))), (f32) temp_v0, arg1);
}

void func_150AF328(void *arg0) {
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA6;
    s16 spA4;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 temp_f10;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f6;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((1352.0f + (random_float() * D_8009F7B8)) * D_8009F7BC * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        spB9 = 0x6C;
        spA4 = 0x5103;
        sp9C = 0x200005;
        spBA = 0x46;
        spBC = 3;
        spF4 = 0x80DE07;
        spFC = 8;
        spFD = 6;
        spFE = 0x16;
        sp8C = 0;
        sp8D = 0;
        spA0 = 0;
        spA8 = 0;
        spAC = 0;
        spFF = -1;
        sp100 = -1;
        sp101 = 0;
        spBE = 0x46;
        spB0 = 0xC7;
        spB1 = 0x78;
        spB2 = 8;
        spB3 = 0xFF;
        spB4 = 0x30;
        spB5 = 0xE;
        spB6 = 0;
        spB8 = 0xFF;
        sp98 = D_8009F7C0;
        spC0 = D_8009F7C4;
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x8));
        temp_f26 = D_8009F7C8;
        temp_f24 = D_8009F7CC;
        spD8 = 0.0f;
        spDC = 0.0f;
        spE0 = 0.0f;
        spE4 = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        do {
            sp8E = (random_u32() % 5U) + 4;
            sp8F = (random_u32() % 5U) + 4;
            sp90 = random_float() * 11.0f;
            sp94 = random_float() * 11.0f;
            temp_f10 = random_float() * temp_f24;
            spF4 &= ~0xC0;
            spF0 = temp_f10 + temp_f26;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            spF4 |= var_v0 | var_s0;
            spB7 = (random_u32() % 101U) + 0x64;
            spA6 = (random_u32() % 51U) + 0x50;
            temp_f6 = (random_float() * 71.0f) + 80.0f;
            spC8 = temp_f6;
            spC4 = temp_f6;
            temp_v0 = func_15130280(&sp9C, 0, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 0x10);
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}

s32 func_150AF6E4(s32 arg0, void * arg1) {
    void *sp20;
    void *temp_a2;

    temp_a2 = arg0 + 0xA8;
    sp20 = temp_a2;
    func_15131828(arg0, arg0 + 0xAC, temp_a2, arg0 + 0xAA);
    func_15131958(arg0 + 0x58, (*(s32 *)((char *)(temp_a2) + 0xC)), temp_a2);
    return 1;
}

void func_150AF738( s32 arg0, s32 arg1, void * arg2) {
    s8 sp1E;
    s16 sp1C;
    s8 sp1A;
    s8 sp19;
    s8 sp18;

    sp18 = 1;
    sp19 = -1;
    sp1A = 2;
    sp1E = 0;
    sp1C = arg0;
    func_1515FF74(&sp18, 0, arg1, arg2);
}

void func_150AF790(s32 arg0, s32 arg1) {
    func_150B1DB0(arg1, arg1 + 0x1ECC0, arg1);
}

void func_150AF7C4(void *arg0) {
    s8 spF0;
    s8 spED;
    s8 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s8 spCF;
    s8 spCE;
    s8 spCD;
    s8 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s8 spC7;
    s8 spC6;
    s16 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s8 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp84;
    s8 sp81;
    s8 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s8 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s32 sp38;
    void *sp34;
    f32 temp_f10;
    f32 temp_f2;
    s16 temp_t2;
    s16 temp_t5;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0_2;

    (*(s16 *)((char *)(arg0) + 0x28)) = (s16) ((*(s16 *)((char *)(arg0) + 0x28)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x28)) < 0) {
        sp9C = (random_float() * 280.0f) + -140.0f;
        spA0 = random_float() * 50.0f;
        spA4 = 2.0f * (random_float() * D_8009F7D0);
        temp_f10 = random_float() * D_8009F7D4;
        spAC = 0.0f;
        spB0 = 0.0f;
        spA8 = temp_f10;
        random_float();
        spBC = 0xFF;
        spB4 = 1.0f;
        spB8 = 115.0f;
        temp_t2 = (random_u32() % 71U) + 0x14;
        spBE = temp_t2;
        temp_v1 = (*(s32 *)((char *)(arg0) + 0xE));
        if (temp_v1 < temp_t2) {
            spBE = temp_v1;
        }
        spC0 = 0x21;
        spC2 = 1;
        spC4 = 0xFF;
        spC6 = 0;
        spC7 = 0xFF;
        spC8 = 0xFF;
        spC9 = 0xFF;
        spCA = (random_u32() % 71U) + 0x28;
        spCB = 0xFF;
        spCC = 0xFF;
        spCD = 0xFF;
        spCE = 0xFF;
        spCF = 0xFF;
        spD0 = 0;
        spD4 = 0x200004;
        spD8 = 0x1F0601;
        spDC = 0x19;
        spE0 = 0x54;
        spE4 = 0x80;
        spE8 = 0x20;
        spEC = 0;
        spED = 0xA;
        spF0 = 0;
        temp_v0 = func_1515548C(&spAC, 6, 0, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x70, (s8 *) &sp9C, 0x10);
        }
        (*(s16 *)((char *)(arg0) + 0x28)) = (s16) ((random_u32() % 41U) + 0x2D);
    }
    temp_v0_2 = (char *)(arg0) + 0x28;
    (*(s16 *)((char *)(temp_v0_2) + 0x2)) = (s16) ((*(s16 *)((char *)(temp_v0_2) + 0x2)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_v0_2) + 0x2)) < 0) {
        sp34 = temp_v0_2;
        sp40 = (random_float() * 280.0f) + -140.0f;
        sp44 = (random_float() * 200.0f) + -100.0f;
        temp_f2 = (2.0f * random_float()) + 1.0f;
        sp48 = temp_f2;
        sp4C = temp_f2;
        sp50 = func_151D8E6C();
        temp_t5 = (random_u32() % 7U) + 5;
        sp52 = temp_t5;
        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0xE));
        if (temp_v1_2 < temp_t5) {
            sp52 = temp_v1_2;
        }
        var_v1 = 0;
        if (random_u32() != 0) {
            var_v1 = 2;
        }
        sp38 = var_v1;
        if (random_u32() != 0) {
            var_v0 = 4;
        } else {
            var_v0 = 0;
        }
        sp54 = var_v0 | 1 | var_v1 | 0x20;
        sp56 = 1;
        sp58 = 0xFF;
        sp5A = 0;
        sp5B = 0xFF;
        sp5C = 0xFF;
        sp5D = 0xFF;
        sp5E = (random_u32() % 121U) + 0x50;
        sp5F = 0xFF;
        sp60 = 0xFF;
        sp61 = 0xFF;
        sp62 = 0xFF;
        sp63 = 0xFF;
        sp64 = 0;
        sp68 = 0x200004;
        sp6C = 0x1F0601;
        sp70 = 0x19;
        sp74 = 0x55;
        sp78 = 0x80;
        sp7C = 0x20;
        sp80 = 0;
        sp81 = 7;
        sp84 = 0;
        func_1515548C(&sp40, 0, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        (*(s16 *)((char *)(sp34) + 0x2)) = (s16) ((random_u32() % 11U) + 3);
    }
}

s32 func_150AFBF4(void *arg0) {
    void *sp18;
    f32 temp_f0;
    void *temp_v1;

    (*(f32 *)((char *)(arg0) + 0x78)) = (f32) ((*(f32 *)((char *)(arg0) + 0x78)) + ((*(f32 *)((char *)(arg0) + 0x7C)) * D_800BE9A4));
    temp_f0 = func_15144B68((*(s32 *)((char *)(arg0) + 0x78)));
    temp_v1 = (char *)(arg0) + 0x70;
    (*(s32 *)((char *)(temp_v1) + 0x8)) = temp_f0;
    sp18 = temp_v1;
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) ((sinf(temp_f0) * (*(f32 *)((char *)(temp_v1) + 0x4))) + (*(f32 *)((char *)(arg0) + 0x70)));
    return 1;
}

void func_150AFC68(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_1516D99C(1, 0, 0, 0xD, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 1, 0, 0, 0, 0, 0xAA, 0xAA, 0xAA, 0xAA, arg2, arg3, 0, arg0, 0xF0, 0x50, 0x50, 1, 4, 0, 1, 0, 0, 0, arg1, 0, (s32) arg4, arg5);
}

void func_150AFDB0(void) {
    s8 temp_t7;
    void **var_v0;
    void *var_a0;

    var_a0 = D_800DCE94;
    temp_t7 = D_800DD190 + 1;
    D_800DD190 = temp_t7;
    if (var_a0 != NULL) {
        var_v0 = (temp_t7 * 4) + D_800DD198;
        do {
            *var_v0 = (*(s32 *)((char *)(var_a0) + 0x8));
            if (gCurrentObjectIndex == (*(s32 *)((char *)(var_a0) + 0x3F))) {
                func_1516972C(var_a0);
                var_v0 = (D_800DD190 * 4) + D_800DD198;
            }
            var_a0 = *var_v0;
        } while (var_a0 != NULL);
    }
    D_800DD190 -= 1;
}

void func_150AFE64(s32 arg0) {
    s32 unksp8E;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = gCurrentObject->unk1D4;
    if (temp_v0 != 0) {
        if (arg0 == 0) {
            sp8C = 3;
        } else {
            sp8C = 2;
        }
        temp_a0 = temp_v0 + (sp8C << 6);
        sp88 = temp_a0;
        spA4 = 0;
        spA0 = 0;
        sp9C = 0xC1A00000;
        func_150A7960(temp_a0, 0, 0, 0xC1A00000, &spA4, &spA0, &sp9C);
        sp98 = 0;
        sp94 = 0;
        sp90 = 0xC3160000;
        func_150A7960(sp88, 0, 0, 0xC3160000, &sp98, &sp94, &sp90);
        func_150E1AB0(0, spA4, spA0, sp9C, sp98, sp94, sp90, 40.0f, 0.0f, 2.0f, 120.0f, 0x3C, 0x23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        func_150E2DB4(gCurrentObject, gCurrentObject->unique_id, unksp8E, -1, 0.0f, 0.0f, -39.0f, 0.0f, 0.0f, -150.0f, 3, 0xFF, 4, 0);
    }
}

void func_150B003C(s32 arg0) {
    if (D_800BE9F0 == 6) {
        func_15179008(0);
        func_150AF200(0xE2, 0xE1U);
        return;
    }
    func_150AF200(0xDF, 0xDEU);
}

void func_150B0094(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 spCC;
    s16 spC8;
    s16 spC6;
    s8 spC4;
    s32 spC0;
    s8 spBE;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s32 spB0;
    s8 spAC;
    s16 spAA;
    s16 spA8;
    s32 spA4;
    f32 spA0;
    void * sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    void * sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    void * sp68;
    void * sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void * sp44;
    void * sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 *sp2C;
    s32 *temp_a0;
    s32 temp_v0;

    sp38 = 0;
    sp48 = (*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0));
    sp4C = (*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4));
    sp50 = (*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8));
    if (func_15145128(&sp48, &sp48, &sp44, &sp40) != 0) {
        sp54 = 1.0f;
        sp58 = 1.0f;
        sp60 = D_8009F7D8;
        sp5C = D_8009F7D8;
        (*(f32 *)((char *)&(sp7C) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        (*(f32 *)((char *)&(sp7C) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
        (*(f32 *)((char *)&(sp7C) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
        sp88 = sp48 * 80.0f;
        sp8C = sp4C * 80.0f;
        sp90 = sp50 * 80.0f;
        func_15145974(D_8009F7D8, &sp88, &sp68, &sp64);
        sp70 = 1.0f;
        sp74 = 1.0f;
        sp78 = 1.0f;
        sp6C = 0.0f;
        (*(s32 *)((char *)&(sp94) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp94) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp94) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        spA4 = 0x19A0;
        spA8 = 0x12C;
        spAA = 0xD2;
        spAC = 7;
        spB0 = 0;
        spB4 = 0xFF;
        spB5 = 8;
        spB6 = 0;
        spB7 = 0;
        spB8 = 0;
        spB9 = 0;
        spBA = 0;
        spBB = 0;
        spBC = 2;
        spBE = 0;
        spC0 = 0;
        spC4 = 0;
        spC6 = 1;
        spC8 = 0xFF;
        spCC = 0;
        spA0 = 0.0f;
        temp_v0 = func_1513264C(&sp54, 3, 0xFF, 0, 4, (s32) arg2, arg3);
        temp_a0 = temp_v0 + 0x170;
        if (temp_v0 != 0) {
            sp3C = temp_v0;
            sp2C = temp_a0;
            memcpy(temp_a0, (s8 *) &sp38, 4);
            sp34 = sp3C;
            *sp2C = func_151B7328(&sp34, 1, 8, arg2, arg3);
        }
    }
}

void func_150B02C0(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x170)) != NULL) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0x170)), arg0);
    }
}

void func_150B02F0(void *arg0) {
    func_150B02C0(arg0);
    func_15132570(arg0);
}

void func_150B031C(void *arg0) {
    func_150B02C0(arg0);
    func_1513259C(arg0);
}

void func_150B0348(void *arg0, s32 arg1, s32 arg2) {
    f32 spDC;
    f32 spD8;
    s32 spD4;
    f32 spD0;
    s8 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    void * spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s32 sp80;
    s32 sp7C;
    s16 sp7A;
    s16 sp78;
    s32 sp74;
    s32 sp70;
    s16 sp6E;
    s8 sp6C;
    s16 sp6A;
    s16 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s16 sp40;
    void * sp34;
    s32 sp30;
    s32 sp2C;

    spD4 = (*(s32 *)((char *)(arg0) + 0x14));
    spD8 = (*(s32 *)((char *)(arg0) + 0x18)) + 30.0f;
    spDC = (*(s32 *)((char *)(arg0) + 0x1C));
    sp68 = 0xA;
    sp6A = 7;
    sp6C = 0x6C;
    sp6E = 0x5103;
    sp70 = 0x200005;
    sp78 = 0x1E;
    sp7A = 0xF;
    sp87 = 0xFF;
    sp84 = 0x7F;
    sp86 = 6;
    sp74 = 0;
    sp7C = 0;
    sp80 = 0;
    sp85 = 0x4B;
    sp88 = 0x80;
    sp89 = 0x53;
    sp8A = 0;
    sp8B = 0x64;
    sp8C = 0x64;
    sp8D = 0xFF;
    sp8E = 0x20;
    sp90 = 7;
    sp92 = 0x20;
    sp94 = D_8009F7DC;
    sp98 = D_8009F7E0;
    sp9C = 200.0f;
    (*(s32 *)((char *)&(spA0) + 0x0)) = (s32) (*(s32 *)((char *)&(spD4) + 0x0));
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)&(spD4) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)&(spD4) + 0x8));
    spAC = 0;
    spAE = -0x19;
    spB0 = 0xFF;
    spB2 = 0x15;
    spC4 = 0x40E07;
    spC8 = 0x10;
    spC9 = -1;
    spCA = 8;
    spCB = 6;
    spCC = 1;
    spB4 = 5.0f;
    spB8 = 25.0f;
    spBC = D_8009F7E4;
    spC0 = D_8009F7E8;
    spD0 = D_8009F7EC;
    func_15153634(&sp68, 0xFF, arg1, arg2);
    sp2C = 0x24;
    sp30 = 0xA;
    (*(s32 *)((char *)&(sp34) + 0x0)) = (s32) (*(s32 *)((char *)&(spD4) + 0x0));
    (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)&(spD4) + 0x4));
    (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)&(spD4) + 0x8));
    sp48 = 11.0f;
    sp4C = 8.0f;
    sp40 = 0;
    sp42 = 0xFF;
    sp44 = -0x28;
    sp46 = 0x14;
    sp58 = 0x22;
    sp5A = 0xF;
    sp50 = D_8009F7F0;
    sp54 = D_8009F7F4;
    sp5C = D_8009F7F8;
    sp60 = D_8009F7FC;
    sp64 = D_8009F800;
    func_15152190(&sp2C, &D_8009F790, &D_8009F7A4, 5, 65.0f, 0, (s32) arg1, arg2);
}

s32 func_150B060C(s32 arg0, void *arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_151149AC(arg0 & 0xFF);
    (*(s32 *)((char *)(arg1) + 0x8)) = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x8));
    (*(s32 *)((char *)(arg1) + 0x0)) = -150.0f;
    (*(s32 *)((char *)(arg1) + 0x4)) = 4.5f;
    (*(f32 *)((char *)(arg1) + 0xC)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x10));
    (*(f32 *)((char *)(arg1) + 0x10)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x12));
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x14));
    return 1;
}
