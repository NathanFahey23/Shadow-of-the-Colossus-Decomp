#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);

s32 func_00119840(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (func_00118380(arg0, 0x23, arg1, 0, 0xC) < 0) {
        return -0x21E;
    }
    if (arg2 != NULL) {
        *arg2 = arg1[1];
    }
    if (arg3 != NULL) {
        *arg3 = arg1[2];
    }
    return arg1[0];
}
