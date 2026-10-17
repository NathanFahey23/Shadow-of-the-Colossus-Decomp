#include "common.h"

s32 func_00118380(s32,s32,void*,s32,s32);
s32 func_00118490(s32,s32,void*,s32,s32);
s32 func_00118970(s32 arg0,s32 *arg1,s32 arg2,s32 arg3,s32 arg4,s32 *arg5,s32 arg6) {
s32 ret;
arg1[0]=arg2;
if(arg5) arg1[1]=*arg5; else arg1[1]=0;
arg1[3]=arg6;
arg1[2]=arg4;
if(func_00118380(arg0,4,arg1,16,arg4+8)<0) return -542;
ret=arg1[0];
if(ret<0) return ret;
if(arg5) *arg5=arg1[1];
ret=func_00118490(arg0,arg3,arg1,2,arg1[0]);
if(ret>=0) ret=arg1[0];
return ret;
}
