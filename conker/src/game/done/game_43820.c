#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15016370(void) {
    struct127 *tmp;
    s32 i;

    for (i = 0; i < D_8008FD8C; i++) {
        tmp = &gObjects[i];
        tmp->unk31C->unk114 = 180;
        tmp->unk31C->unk116 = 60;
        tmp->unk31C->unk118 = 60;
    }
}
