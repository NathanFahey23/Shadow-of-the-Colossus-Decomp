#include "common.h"

s32 func_00119568(s32, s32, s32);
s32 func_00119528(s32, s32, s32, s32);

s32 func_00119778(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret = 0;

    if (arg2 == 0) {
        return -0x21C;
    }
    if (func_00119568(arg0, arg1, arg2) < 0) {
        s32 res = func_00119528(arg0, arg1, arg2, arg3);
        if (res < 0) {
            return res;
        }
    }
    return ret;
}
