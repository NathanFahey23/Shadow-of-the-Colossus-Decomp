#include "common.h"

s32 func_0010FC80(s32,s32,void *);
s32 func_0010FDC8(s32,s32);
extern u32 D_00132988;
extern s32 D_00132990[4];
extern s32 func_0010FC08,func_0010FC40;
void func_0010FCC8(void) {
s32 var_18,var_19,var_2; u32 var_16,var_17;
func_0010FDC8(D_00132990[0],D_00132990[1]);
func_0010FDC8(D_00132990[2],D_00132990[3]);
var_19=func_0010FC80(0x80000000,0x80080000,&func_0010FC40);
var_17=var_19-0x20C;
var_18=func_0010FC80(0x80000000,0x80080000,&func_0010FC08);
var_16=var_18-0x168;
while(var_17!=var_16) {
var_2=var_17<var_16;
if(var_2) { var_19=func_0010FC80(var_19+4,0x80080000,&func_0010FC40); var_17=var_19-0x20C; }
else { var_18=func_0010FC80(var_18+4,0x80080000,&func_0010FC08); var_16=var_18-0x168; }

}
D_00132988=var_17;
}
