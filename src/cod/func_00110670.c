#include "common.h"

s32 func_0010FB20(void); void func_0010FB70(void); void func_00110410(s32); void func_00110780(s32); s32 func_00110C78(void);
s32 func_00110670(void) {
 s32 state=func_0010FB20(); s32 mode=*(volatile s32 *)0x10001010;
 if(mode&0x80) { if(state) func_0010FB70(); return 1; }
 func_00110410((mode&0xfffff3ff)|0x80);
 func_00110780(func_00110C78());
 if(state) func_0010FB70();
 return 0;
}
