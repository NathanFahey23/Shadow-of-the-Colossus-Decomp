#include "common.h"

typedef struct { char pad[0x34]; s32 base; char rest[0x14c]; } ReadState;
extern ReadState D_00135638[];
extern char D_0015F480[];
s32 func_00120708(s32, void *, s32, s32);
s32 func_00120B90(s32 arg0, void *arg1, s32 arg2) {
 s32 off=arg0*0x2010;
 s32 start=*(s32 *)(D_0015F480+off);
 arg2 += ((ReadState *)(arg0*0x184+(char *)D_00135638))->base;
 if (arg2>=start && arg2<start+*(s32 *)(D_0015F480+off+12)) {
 __builtin_memcpy(arg1,(off+((arg2-start)<<10))+(D_0015F480+16),1024);
 return 1;
 }
 return func_00120708(arg0,arg1,arg2,1);
}
