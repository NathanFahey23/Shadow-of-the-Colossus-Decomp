#include "common.h"

s32 func_00107000(s32);
s32 func_00107020(s32);
s32 func_001220B0(s32);
extern s32 D_00135630[], D_00151900[], D_00151E24[], D_00151E2C[];
u32 func_0011A638(s32 arg0) {
if (!D_00135630[0]) return 0x81018001;
arg0=func_001220B0(arg0);
if(arg0<0) return 0x81018002;
func_00107020(D_00151E2C[0]);
if(D_00151900[1]) {
func_00107000(D_00151E2C[0]);
return 0x81010010;
}
D_00151900[0]=arg0;
D_00151900[1]=3;
func_00107000(D_00151E24[0]);
func_00107000(D_00151E2C[0]);
return 0;
}
