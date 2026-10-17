#include "common.h"

// -fno-schedule-insns
s32 func_0010FB20(void);
void func_0010FB70(void);
void func_00110EA0(s32);
typedef struct HandleNode { struct HandleNode * volatile next; volatile s32 id; s32 pad[2]; } HandleNode;
extern HandleNode *D_0014AC80[];
s32 func_001119D0(u32 arg0) {
HandleNode *p = (HandleNode *)((arg0 >> 8) * 16);
s32 state = func_0010FB20();
if ((s32)arg0 < 0 || ((arg0 ^ p->id) & 255)) {
if(state) func_0010FB70();
return 0x80008002;
}
func_00110EA0(p->id);
p->next = D_0014AC80[0];
D_0014AC80[0] = p;
p->id = 0;
if(state) func_0010FB70();
return 0;
}
