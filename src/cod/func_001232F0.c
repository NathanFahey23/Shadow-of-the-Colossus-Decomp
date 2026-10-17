#include "common.h"

// TARGET: 0x001232F0
// TC: 2.9
// -G0
// -O2

extern volatile s32 D_00135960;
void func_00107020(s32);
s32 func_00107030(s32);
void func_00123208(void);

s32 func_001232F0(s32 mode) {
    s32 ret = 1;

    if (D_00135960 < 0) {
        return -1;
    }

    switch (mode) {
    case 0:
        func_00107020(D_00135960);
        func_00123208();
        ret = 0;
        break;
    case 1:
        if (func_00107030(D_00135960) != -1) {
            func_00123208();
            ret = 0;
        }
        break;
    default:
        return -101;
    }

    return ret;
}
