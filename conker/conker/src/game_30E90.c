#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_150039E0.s")

// FIXME: matches but something isnt right
void func_15004574(void) {
    if (D_800DBF88 != 0xFF) {
        D_800DBF8C = D_800DBEF4[D_800DBF88].unk1C;
        D_800DBF90 = D_800DBEF4[D_800DBF88].unk28;
    }
}

void func_150045BC(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_150045C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_150049A4.s")
void func_15004A4C(void) {
    s32 i;

    if (D_800DBEF0 > 0) {
        i = 0;
        do {
            (*(s32 **) D_800DBEF8)[i] = 0;
            (*(s8 **) D_800DBEFC)[i] = 0;
            i++;
        } while (i < D_800DBEF0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_15004AAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_15004BF0.s")
// NON-MATCHING: register-choice gap only, logic and every instruction
// opcode/operand-value verified identical to target. Walks an array of
// 8-byte entries (s8 marker; pad[2]; u8 sub; s32 val;) starting at arg0,
// stopping at a marker==-33 terminator; for entries with marker==-36 and
// sub==14 whose val is non-negative (as an unsigned < 0x80000000 check),
// adds arg1 to val. Confirmed the instruction sequence is byte-identical
// to target (same opcodes, same branch shapes including the bnel/beqz
// pair, same operand constants) with ONLY the physical register numbers
// differing throughout (e.g. target's v0/v1/a1 for i/entry-ptr/marker
// vs this reconstruction's v1/a1/v0 for the same roles) - and that
// renaming is fully deterministic: do-while vs goto-based control flow,
// combining the three inner conditions into one && vs nested guard
// clauses, and local declaration order all produced byte-identical
// output, so this is not a source-phrasing issue reachable from here.
// void func_15004CE0(void *arg0, s32 arg1) {
//     s32 i;
//     void *v1;
//     s8 marker;
//
//     marker = *(s8 *) arg0;
//     if (marker == -33) {
//         return;
//     }
//     i = 0;
//     v1 = arg0;
//     do {
//         i++;
//         if (marker == -36 && *(u8 *) ((char *) v1 + 3) == 14 &&
//             (u32) *(s32 *) ((char *) v1 + 4) < 0x80000000) {
//             *(s32 *) ((char *) v1 + 4) += arg1;
//         }
//         v1 = (char *) arg0 + i * 8;
//         marker = *(s8 *) v1;
//     } while (marker != -33);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_15004CE0.s")
