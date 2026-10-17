#include "common.h"

s32 func_0012E018(s32, void *);
s32 func_00129830(s32 arg0, void *arg1) {
s32 result;
if (*(s32 *)((u8 *)arg1+8)==0) {
*(s32 *)((u8 *)arg1+4)=0;
return 0;
}
result=func_0012E018(arg0,arg1);
*(s32 *)((u8 *)arg1+8)=0;
*(s32 *)((u8 *)arg1+4)=0;
return result;
}
