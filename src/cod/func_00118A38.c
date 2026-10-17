#include "common.h"

s32 func_00118380(s32,s32,void*,s32,s32);
s32 func_00118490(s32,s32,void*,s32,s32);
s32 func_00118A38(s32 arg0,s32 *arg1,s32 arg2,s32 arg3,s32 arg4,s32 *arg5,s32 arg6,s32 *arg7,s32 arg8) {
 s32 ret;
 arg1[0]=arg2;
 if(arg5) arg1[1]=*arg5; else arg1[1]=0;
 arg1[2]=arg4;
 arg1[3]=arg8;
 if(func_00118380(arg0,13,arg1,16,arg4+28)<0) return -542;
 ret=arg1[0];
 if(ret<0) return ret;
 if(arg5) *arg5=arg1[1];
 ret=func_00118490(arg0,arg6,arg1,2,16);
 if(ret<0) return ret;
 if(arg7) *arg7=arg1[6];
 ret=func_00118490(arg0,arg3,arg1,7,arg1[0]);
 if(ret>=0) ret=arg1[0];
 return ret;
}
