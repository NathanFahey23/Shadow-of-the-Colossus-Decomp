#include "common.h"

s32 func_00119670(s32, s32, s32 *, s32, s32);
s32 func_00119708(s32, s32, s32 *, s32, s32);

s32 func_00119808(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg5 & 2) {
        return func_00119670(arg0, arg1, arg2, arg3, arg4);
    }
    return func_00119708(arg0, arg1, arg2, arg3, arg4);
}
