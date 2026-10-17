#include "common.h"

s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_0010E238(void);
s32 func_0010E338(void);
extern s32 D_00147380[];
extern u8 D_00147580[];
s32 func_0010E940(s32 arg0) {
 if (func_0010E238()<0) return 0xFFFF0000;
 if (func_0010E338()!=0) return 0xFFFEFFFC;
 D_00147380[0]=arg0;
 if (func_00109980(D_00147580,10,0,D_00147380,4,D_00147380,4,0,0)<0) return 0xFFFEFFFF;
 return D_00147380[0];
}
