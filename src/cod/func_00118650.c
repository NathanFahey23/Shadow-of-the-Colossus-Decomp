#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);
s32 func_00118490(s32, s32, void *, s32, s32);
s32 func_001184E8(s32, void *, s32, s32);
s32 func_00118650(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, ...) {
 void *ap;
 s32 ret;
 ap = __builtin_next_arg(arg6);
 arg1[1] = arg5;
 arg1[2] = arg6;
 arg1[0] = arg2;
 arg1[3] = 0;
 if (arg2 & 0x80) arg1[3] = ((s32 *)ap)[-2];
 
 ret = func_001184E8(arg0, arg1, 5, arg4);
 if (ret >= 0) {
 arg1[4] = ret;
 if (func_00118380(arg0, 6, arg1, ret + 20, 20) < 0) return -0x21E;
 ret = func_00118490(arg0, arg3, arg1, 1, 16);
 if (ret >= 0) ret = arg1[0];
 }
 return ret;
}
