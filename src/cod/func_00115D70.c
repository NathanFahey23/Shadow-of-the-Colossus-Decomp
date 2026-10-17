#include "common.h"

extern s32 D_0014E900[];
extern s32 D_0014EA00[];

s32 func_00109980(void *, u32, s32, void *, s32, void *, s32, s32, s32);

s32 func_00115D70(void) {
    if (func_00109980(D_0014E900, 0x80001305, 0, D_0014EA00, 0x90, D_0014EA00, 0x90, 0, 0) >= 0) {
        goto label;
    }
    return 0;
label:
    return D_0014EA00[1];
}
