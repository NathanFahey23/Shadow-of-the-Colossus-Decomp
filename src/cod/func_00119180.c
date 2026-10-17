#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);

s32 func_00119180(s32 arg0, s32 *arg1, s32 arg2) {
    *arg1 = arg2;
    if (func_00118380(arg0, 0x33, arg1, 4, 4) >= 0) {
        goto label;
    }
    return -0x21E;
label:
    return *arg1;
}
