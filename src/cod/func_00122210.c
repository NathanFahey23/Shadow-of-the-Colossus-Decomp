#include "common.h"

s32 func_00106E70(s32,s32);
s32 func_00109980(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_001221D0(void);
s32 func_00123000(s32*,s32,s32,s32);
void func_001230B0(s32);
extern u8 D_00167EC0[64];
typedef struct { s32 x[2]; s32 value; u8 rest[4084]; } RpcBuffer;
extern RpcBuffer D_00167F00;
s32 func_00122210(s32 *arg0,s32 arg1,s32 arg2,s32 arg3) {
s32 id, ret;
if(!arg0) return -101;
id=func_00123000(arg0,arg1,arg2,1);
if(id<0) return -1;
func_001221D0();
D_00167F00.value=*arg0;
ret=func_00109980(D_00167EC0,11,0,&D_00167F00,4096,&D_00167F00,4096,0,0);
if(ret<0) {func_001230B0(id); return ret;}
func_00106E70(id,arg3);
return id;
}
