#include "common.h"

s32 func_00118438(s32,void*,s32,void*,s32);
s32 func_00118380(s32,s32,void*,s32,s32);
s32 func_00118578(s32,void*,s32);
s32 func_001187A8(s32 arg0,s32 *arg1,s32 arg2,s32 arg3,s32 arg4,void *arg5,s32 arg6,s32 arg7,...) {
 void *ap=__builtin_next_arg(arg7);
 s32 ret;
 arg1[0]=arg2;
 arg1[1]=arg4;
 arg1[2]=arg6;
 arg1[3]=arg7;
 ret=func_00118438(arg0,arg1,4,arg5,16);
 if(ret<0) return ret;
 arg1[8]=0;
 if(arg2&128) arg1[8]=*(s32*)ap;
 if(func_00118380(arg0,18,arg1,36,arg4+32)<0) return -542;
 ret=func_00118578(arg3,arg1,8);
 if(ret>=0) ret=arg1[0];
 return ret;
}
