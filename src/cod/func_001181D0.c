#include "common.h"

// TARGET: 0x001181D0
// TC: 2.9
// -G0
// -O2

extern s32 D_00133A6C;
extern u8 D_00134C40[];
extern u8 D_001355C0[];

s32 func_001178A8(s32);
s32 func_00107000(s32);
s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, void *, void *);

s32 func_001181D0(s32 *arg0) {
    s32 result;

    if (func_001178A8(0x21) == 0) {
        return 0;
    }

    if (func_00109980(D_001355C0, 0x21, 0, (void *)0, 0, D_00134C40, 8, (void *)0, (void *)0) < 0) {
        func_00107000(D_00133A6C);
        return 0;
    }

    *arg0 = *(s32 *)((u32)(D_00134C40 + 4) | 0x20000000);
    result = *(s32 *)((u32)D_00134C40 | 0x20000000);
    func_00107000(D_00133A6C);
    return result;
}
