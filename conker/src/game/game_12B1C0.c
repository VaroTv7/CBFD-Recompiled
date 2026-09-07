/**
 * Auto-decompiled from asm/12B1C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150ED638();                         /* extern */

void func_150FDD10(s32 arg0) {
    void * *var_s0;

    func_15103828();
    var_s0 = &gObjects;
    if (D_800C35EA == 1) {
        do {
            if ((*(s32 *)((char *)(var_s0) + 0x4)) == 0x28) {
                func_150ED638(var_s0, 0x14, 0x14);
            }
            var_s0 = (char *)(var_s0) + 0x32C;
        } while ((char *)(var_s0) != (char *)(&D_800D121C));
    }
}
