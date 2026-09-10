#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167010.s")
// NON-MATCHING: not hugely far away
// void func_15167010(void) {
//     void (*func)(void);
//     s32 i;
//
//     for (i = 0; i < 24; i++)
//     {
//         func = D_8008B4A8[i].unk18;
//         if (func != NULL) {
//             func();
//         }
//     }
// }

extern void (*D_8008CB64[])(void);
extern void (*D_8008CB70)(void);

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Walks the
// function-pointer table D_8008CB64..D_8008CB70, calling each non-null
// entry. Extremely close - identical byte-for-byte except the prologue's
// two `lui` instructions (computing D_8008CB64's and D_8008CB70's upper
// halves) are swapped relative to target (target: lui D_8008CB64, lui
// D_8008CB70, addiu D_8008CB70, addiu D_8008CB64). Tried declaring the
// end pointer first (fixed the `addiu` order but swapped the `lui`
// order instead) and a `for` loop (worse - different register entirely).
// No source order tried got both right simultaneously.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516706C.s")
// void func_1516706C(void) {
//     void (**p)(void) = D_8008CB64;
//
//     do {
//         if (*p != 0) {
//             (*p)();
//         }
//         p++;
//     } while (p != &D_8008CB70);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151670C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151671E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167310.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151674F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167A68.s")
void func_15167AD8(void *arg0, u8 arg1, s32 arg2) {
    void *v0 = func_15167A68(3, arg2, 0x28, 0, arg1, 1);

    if (v0 != 0) {
        bcopy(arg0, (char *) v0 + 0x10, 0x18);
        *((u8 *) v0 + 0x23) = 0xFF;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167C58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167D84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167E0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516865C.s")
void *func_15168800(void *arg0, u8 arg1, s32 arg2) {
    void *v1 = func_15167A68(0xE, arg2, 0xB8, 1, arg1, 1);

    if (v1 == 0) {
        return 0;
    }
    bcopy(arg0, (char *) v1 + 0x10, 0xA8);
    return v1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168870.s")
void func_15168B10(s32 arg0, s32 arg1);

void func_15168A2C(s32 arg0) {
    func_15168B10(arg0, 0);
}
extern u8 D_800DCE50[];

// NON-MATCHING: mips_to_c reconstruction, hand-typed. A bucket-list
// insert: computes a slot in D_800DCE50 (stride 0x1A0, matching
// func_15168A9C's comment above) indexed by arg0->unk1 and arg1,
// splices arg0 onto the front of that slot's linked list (unk8=old
// head, old head->unk4=arg0), then sets arg0->unk0=arg1, arg0->unk4=0.
// Two things confirmed this round via isolated harness: (1) arg1 must
// be s32, not u8 - target has zero masking instructions for it, and
// the u8-typed version added an unwanted andi/move prologue; (2) the
// beqz's delay slot holds `arg0->unk8 = t0` unconditionally - writing
// that field *before* the `if` (not inside it) reproduces target's
// exact instruction sequence and branch shape byte-for-byte. The one
// remaining gap: target keeps the loaded slot value in $t0, this
// reconstruction lands it in $a2 in every variant tried (original,
// separate slot/t0 locals, swapped declaration order) - same
// stubborn-register-choice category as func_15168A9C above.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168A4C.s")
// void func_15168A4C(void *arg0, s32 arg1) {
//     u8 unk1 = *((u8 *) arg0 + 1);
//     void **slot = (void **) (D_800DCE50 + unk1 * 0x1A0 + arg1 * 4);
//     void *t0 = *slot;
//
//     *(void **) ((char *) arg0 + 8) = t0;
//     if (t0 != 0) {
//         *(void **) ((char *) t0 + 4) = arg0;
//     }
//     *((u8 *) arg0 + 0) = arg1;
//     *(s32 *) ((char *) arg0 + 4) = 0;
//     *slot = arg0;
// }
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Unlinks arg0 from
// a doubly-linked bucket list (the same D_800DCE50 table func_15168A4C
// above inserts into). Target mixes all three branch types for its
// three guard checks (bnel, beql, beqz) - confirmed this round that a
// straightforward reconstruction (single reused local, redundant
// reload of it right after each if-body, matching the "delay slot
// filled with a value that's about to be redundantly reloaded anyway"
// pattern from func_1505DFDC/HANDOFF.md) reproduces ALL THREE branch
// types exactly, in the right positions. The only remaining gap:
// target keeps this reused local in $v0 throughout (it's also the
// return value, so needs no final move), while every source form
// tried here (original declaration order, swapping which of
// unk0/unk1 loads first, splitting into a separate short-lived local
// for the first check) lands it in $v1 instead, adding one extra
// "move v0,v1" before the final return that target doesn't have.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168A9C.s")
// void *func_15168A9C(struct12 *arg0) {
//     void *temp_a1;
//     void *temp_v0;
//     void *temp_v0_2;
//
//     temp_a1 = (arg0->unk1 * 0x1A0) + (arg0->unk0 * 4) + 0x800DCE50;
//     if (arg0 == *temp_a1) {
//         *temp_a1 = (void *) arg0->unk8;
//     }
//     temp_v0_2 = arg0->unk8;
//     if (temp_v0_2 != 0) {
//         temp_v0_2->unk4 = (void *) arg0->unk4;
//     }
//     temp_v0 = arg0->unk4;
//     if (temp_v0 != 0) {
//         temp_v0->unk8 = (void *) arg0->unk8;
//     }
//     return temp_v0;
// }


void func_15168B10(s32 arg0, s32 arg1) {
    func_15168A9C(arg0);
    func_15168A4C(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168B44.s")
extern void (*D_8008CA20[])(void *);

void func_15168BAC(void *arg0) {
    u8 idx = *(u8 *)((char *) arg0 + 0xE4);
    if (idx != 0) {
        D_8008CA20[idx](arg0);
    }
}
void func_15168BE4(void *arg0, u8 arg1, s32 arg2) {
    if (*(s32 *) ((char *) arg0 + 0x40) != 0) {
        void *v0 = func_15167A68(0x10, arg2, 0xF0, 1, arg1, 1);
        if (v0 != 0) {
            bcopy(arg0, (char *) v0 + 0x90, 0x60);
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168C4C.s")
void func_15168E34(s32 *arg0, s32 arg1) {
    if ((*arg0 & 0xF000000) == 0) {
        *arg0 = *arg0 + arg1;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168E54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168F08.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168F84.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Thin wrapper
// forwarding arg0/(u8)arg1 to func_15169070 with two fixed leading
// args. Target computes the `arg1 & 0xFF` mask directly from the
// incoming register (andi) before the call-setup instructions; every
// source form tried here (u8 parameter, s32 parameter with an explicit
// cast at the call site, s32 parameter assigned to a named u8 local)
// instead spills arg1 to its stack slot at entry and reloads it via lbu
// right before the call - same content, just 4/12 words in a different
// order/form.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169040.s")
// void func_15169040(void *arg0, u8 arg1) {
//     func_15169070(0, 0x68, arg0, arg1);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516944C.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Bundles arg0 and
// its unique_id byte into a local struct (same pattern as
// func_150717E0 above, to keep the dead-looking byte write) and
// forwards it plus (u8)arg1 to func_15169040. Target masks arg1 to a
// byte as its very first operation, before touching arg0 at all
// (matching the standard "andi tN,argX,0xff; or argX,tN,zero" u8-param
// prologue seen in several already-confirmed functions this session);
// this reconstruction's source order (using arg0 first for the tmp
// struct) gets the masking deferred to immediately before the call
// instead - same content, different instruction order/count. Adding an
// explicit early-masked local didn't change the ordering, only grew
// the frame with an unused extra slot.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151695F0.s")
// void func_151695F0(struct127 *arg0, u8 arg1) {
//     struct {
//         struct127 *ptr;
//         u8 id;
//     } tmp;
//
//     tmp.ptr = arg0;
//     tmp.id = arg0->unique_id;
//     func_15169040(&tmp, arg1);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516962C.s")
extern u8 D_800D2DAB;

void *func_15169668(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_800D2DAB = 1;
    return arg0;
}
void func_1516968C(struct102 *arg0, u8 *arg1, u8 arg2) {
    if ((arg2 == 0xF || arg2 == 0x10) && (*arg1 == *((u8 *) arg0 + 0xC))) {
        func_1516972C(arg0);
    }
}
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Scans D_800DD198
// (a "*4" raw-index array per this codebase's established convention for
// it) for an entry matching arg0, replacing it with arg0->unk8 - but
// arg0 here is an IMPLICIT passthrough (both existing call sites, inside
// func_1516972C below, call func_151696DC() with zero explicit
// arguments; a0 is whatever the caller's own first parameter happens to
// be). Declaring a real `arg0` parameter here conflicts with those
// existing zero-arg call sites (yacc stack overflow at parse time) -
// fixing it properly would mean also touching those call sites, which
// is riskier than a single-function revert.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151696DC.s")
// s32 func_151696DC(void *arg0) {
//     s8 v0 = 0;
//     void *elem;
//
//     if (D_800DD190 > 0) {
//         do {
//             elem = (v0 * 4) + D_800DD198;
//             v0++;
//             if (arg0 == *(void **) elem) {
//                 *(s32 *) elem = *(s32 *) ((char *) arg0 + 8);
//             }
//         } while (v0 < D_800DD190);
//     }
//     return v0;
// }

s32 func_1516972C(struct102 *arg0) {
    void (*func)(struct102 *arg0);
    func_151696DC();

    if (arg0->unk0 >= 2) {
        func = D_8008B4D0[arg0->unk0].unk0;
        if (func != NULL) {
            func(arg0);
            return 0;
        }
        func_15169804(arg0);
    }
    return 0;
}

void func_1516979C(struct102 *arg0) {
    void (*func)(struct102 *arg0);

    func_151696DC();
    func = D_8008B4D4[arg0->unk0].unk0;
    if (func != NULL) {
        func(arg0);
        return;
    }
    func_15169824(arg0);
}

void func_15169804(struct102 *arg0) {
    func_15168B10(arg0, 1);
}

void func_15169824(struct102 *arg0) {
    func_15168A9C(arg0);
    func_10004074(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169850.s")
