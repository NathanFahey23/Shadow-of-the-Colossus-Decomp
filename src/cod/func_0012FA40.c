#include "common.h"

s64 func_00131218(s32, s32, s32, s32);
s64 func_0012FA40(void *arg0, s32 arg1, s32 arg2) {
s32 result=func_00131218(*(s32*)((u8*)arg0+0x54),*(s16*)((u8*)arg0+0xe),arg1,arg2);
if(result>=0) *(s32*)((u8*)arg0+0x50)+=result;
else *(u16*)((u8*)arg0+0xc)&=0xefff;
return result;
}
