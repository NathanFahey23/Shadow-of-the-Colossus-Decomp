#include "common.h"

extern s32 D_0013A180[];
s32 func_00111FC8(s32, s32, s32);

s32 func_001311B8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *err_ptr = &D_0013A180[3];
    s32 ret;
    *err_ptr = 0;
    ret = func_00111FC8(arg1, arg2, arg3);
    if (ret == -1) {
        if (*err_ptr != 0) {
            *arg0 = *err_ptr;
        }
    }
    return ret;
}
