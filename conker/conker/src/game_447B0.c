#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15017300( s32 arg0, s16 arg1) {
    s32 i;
    s16 tmp;

    tmp = arg0;
    bzero(&D_800D2138, 524);
    D_800D2138 = tmp;

    for (i = 0; i < 16; i++) {
        if ((1 << i) & arg1) {
            func_15085710((s16) i, 0, D_80087270[i]);
            D_800D2457 = D_800D2456 = 6;
            func_15085710((s16) i, 5, D_8008726C);
            func_15085710((s16) i, 2, D_80087260);
            if (D_800BE616 != 0) {
                func_15085710((s16) i, 9, D_80087264);
            }
        }
        func_1501748C(arg1);
    }
    D_800D2340 = arg1;
    D_800D2132 = 0;
}

void func_1501748C( s32 arg0) {
}

void func_15017498(void) {
    bzero(&D_800D2138, 524);
}

// NON-MATCHING: full semantics recovered and verified via isolated
// harness - matches target's instruction count exactly (46/46) and
// every opcode/branch shape, but register choices differ pervasively
// throughout (worse than the usual single-register-swap near-miss).
// Walks D_800D23C0 (a pointer, D_80087380 elements of 0x18 bytes each -
// set up by the caller as `count*24` from func_1502B5C8's returned
// byte length) and, for each record, its unk8 array of
// D_800D23C0[i].unk2 u16 "tag" entries: any entry whose top 4 bits
// equal 2 gets arg0 added to it in place. Getting the stack frame
// size right (target: 8 bytes, one saved register) required treating
// every D_800D23C0 reference as `*(volatile s32 *) &D_800D23C0` -
// without that, IDO CSEs the global's *address* into a second
// callee-saved register even though the *value* is still reloaded
// fresh each time, bloating the frame to 16 bytes with an extra $s1.
// With volatile, the frame size matches, but IDO still caches the
// address-of computation into a temp register (not callee-saved, no
// frame cost, but still a register/instruction-count difference from
// target, which appears to recompute the full address+load from
// scratch every reference) - not reproducible by any source-level
// trick tried this round.
#pragma GLOBAL_ASM("asm/nonmatchings/game_447B0/func_150174C0.s")
// void func_150174C0(s32 arg0) {
//     s32 i;
//     s32 j;
//     u16 count;
//     u16 val;
//
//     for (i = 0; i < D_80087380; i++) {
//         count = *(u16 *) ((char *) *(volatile s32 *) &D_800D23C0 + i * 0x18 + 2);
//         for (j = 0; j < count; j++) {
//             val = *(u16 *) ((char *) *(volatile s32 *) &D_800D23C0 + i * 0x18 + 8 + j * 2);
//             if ((val >> 12) == 2) {
//                 *(u16 *) ((char *) *(volatile s32 *) &D_800D23C0 + i * 0x18 + 8 + j * 2) = val + arg0;
//                 count = *(u16 *) ((char *) *(volatile s32 *) &D_800D23C0 + i * 0x18 + 2);
//             }
//         }
//     }
// }

void func_15017578(s32 arg0) {
    u32 tmp = 0;
    D_800D23C0 = func_1502B5C8(&tmp, 3, 12, arg0, 4);
    D_80087380 = tmp / 24;
    func_150174C0(D_800DBF00);
}
