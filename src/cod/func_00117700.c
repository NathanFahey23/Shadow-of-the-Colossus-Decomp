#include "common.h"

// TARGET: 0x00117700
// TC: 2.9
// -G0
// -O2

extern s32 D_00133A68;
extern s32 D_00133AC0;
extern u8 D_00134C10[];

s32 func_001175A8(s32);
s32 func_00107000(s32);
s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, void *, void *);

s32 func_00117700(void) {
    s32 result;

    if (func_001175A8(2) == 0) {
        return 0;
    }

    if (func_00109980(D_00134C10, 0xE, 0, (void *)0, 0, &D_00133AC0, 4, (void *)0, (void *)0) < 0) {
        func_00107000(D_00133A68);
        return 0;
    }

    result = *(s32 *)((u32)&D_00133AC0 | 0x20000000);
    func_00107000(D_00133A68);
    return result;
}
