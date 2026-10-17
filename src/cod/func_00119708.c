#include "common.h"

s32 func_00119548(s32, s32, s32 *, s32);
s32 func_00119648(s32, s32, s32, s32);

s32 func_00119708(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 ret = func_00119548(arg0, arg1, arg2, arg3);
    if (ret >= 0) {
        s32 neg1 = -1;
        ret = func_00119648(arg0, arg1, *arg2, arg4);
        if (neg1 < ret) {
            ret = 0;
        }
    }
    return ret;
}
