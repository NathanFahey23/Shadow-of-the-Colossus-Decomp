#include "common.h"

typedef struct HandlerState { s64 data; s32 id, fieldC; volatile s32 busy; } HandlerState;
extern HandlerState D_00133918;
s32 func_00106CE0(s32,s32);
s32 func_00107470(s32);
s32 func_0010FB20(void);
s32 func_0010FB70(void);
s32 func_00110400(s32);
s32 func_00110410(s32);
s32 func_00110588(void) {
s32 enabled;
if(D_00133918.id<0) return 0x80008001;
if(D_00133918.busy!=0) return 0x80000010;
enabled=func_0010FB20();
if(func_00106CE0(11,D_00133918.id)==0) {
func_00107470(11);
func_00110410(0xC00);
func_00110400(0);
}
D_00133918.data=0;
D_00133918.id=-1;
if(enabled) func_0010FB70();
return 0;
}
