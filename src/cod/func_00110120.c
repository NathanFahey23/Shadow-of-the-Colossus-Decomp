#include "common.h"

s32 func_00106C30(s32,s32,s32,s32);
s32 func_00110000(void *,s32,s32);
void func_00110118(void);
extern s32 D_001326B0[];
extern u8 D_00138270[];
s32 func_00110120(s32 a,s32 b,s32 c,s32 d) {
func_00110000(D_00138270,c,d);
func_00110118();
return func_00106C30(a,b,c,D_001326B0[0]+4);
}
