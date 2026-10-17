#include "common.h"

extern u32 D_00132670[];
extern u8 func_0010F7C0[];
void func_00106C90(s32,void *);
void func_00106CA0(s32,void *);
u32 func_0010F2D8(s32 arg0,u32 arg1) {
 u32 index=arg0-1, old;
 if(index>=13) return 0xffffffff;
 old=D_00132670[arg0];
 D_00132670[arg0]=arg1;
 if(index<3) func_00106C90(arg0,func_0010F7C0+0x240);
 else func_00106CA0(arg0,func_0010F7C0+0x240);
 return old;
}
