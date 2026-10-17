#include "common.h"

// TARGET: 0x00116CE8
// TC: 2.9
// -G0
// -O2

extern volatile s32 D_00133AA0;
extern volatile s32 D_00133AA4;
extern volatile s32 D_00133A68;
extern volatile s32 D_00133A74;
extern volatile s32 D_00133A54;
extern void * volatile D_00150E00;
extern volatile s32 D_00133A60;

s32 func_00107010(s32);

void func_00116CE8(void *funcNum) {
    D_00133AA0 = *(s32 *)funcNum;
    D_00133AA4 = D_00133AA0;
    if (D_00133AA0 == 0xB) {
        D_00133AA0 = 0;
        D_00133A74 = 0;
        return;
    }

    func_00107010(D_00133A68);

    if (D_00133A54 != 0 && D_00150E00 != (void *)0) {
        func_00107010(D_00133A60);
    } else {
        D_00133A74 = 0;
    }

    D_00133AA0 = 0;
}
