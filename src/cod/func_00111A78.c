#include "common.h"

// -fno-schedule-insns
s32 func_00110E00(s32);
typedef struct HandleNode { struct HandleNode * volatile next; volatile s32 id; s32 pad[2]; } HandleNode;
extern HandleNode *D_0014AC80[];
s32 func_00111A78(u32 arg0) {
HandleNode *p=(HandleNode *)((arg0>>8)*16);
s32 result;
if((s32)arg0<0 || ((arg0^p->id)&255)) return 0x80008002;
result=func_00110E00(p->id);
if(result==0) {
HandleNode *old=D_0014AC80[0];
D_0014AC80[0]=p;
p->next=old;
p->id=0;
}
return result;
}
