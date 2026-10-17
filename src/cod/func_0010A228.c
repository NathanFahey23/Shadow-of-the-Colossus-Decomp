#include "common.h"

s32 func_00107A08(s32);
u32 func_00109980(s32,s32,s32,s32,s32,s32,s32,s32,s32);
s32 func_0010A228(s32 arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4,s32 arg5,s32 arg6,s32 arg7,s32 arg_sp0,s32 arg_sp8) {
s32 sp10,sp14,var_17,var_18; s32 temp_16;
var_18=0; var_17=1; sp10=arg0; sp14=arg1;
do {
temp_16=func_00109980(sp10,sp14,arg2,arg3,arg4,arg5,arg6,arg7,arg_sp0)>>31;
if(!temp_16 || arg_sp8) break;
func_00107A08(var_17*1000);
if(var_17<127) var_17*=2;

} while(++var_18<101);
return temp_16;
}
