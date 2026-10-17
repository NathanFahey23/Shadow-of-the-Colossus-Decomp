#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);

s32 func_00119210(s32 arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    arg1[0] = arg2;
    if (arg3 != NULL) {
        arg1[1] = *arg3;
    } else {
        arg1[1] = 0;
    }
    if (func_00118380(arg0, 0x35, arg1, 8, 8) < 0) {
        return -0x21E;
    }
    if (arg3 != NULL) {
        *arg3 = arg1[1];
    }
    return arg1[0];
}
