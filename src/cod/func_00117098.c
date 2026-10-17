#include "common.h"

// TARGET: 0x00117098
// TC: 2.9
// -G0
// -O2

extern s32 D_00133A54;
extern s32 D_00133AA0;
extern s32 D_00133A60;
extern s32 D_00133A68;
extern s32 D_00133A6C;
extern s32 D_00133A70;

s32 func_00107000(s32);
s32 func_00106FF0(s32);
s32 func_0010FB20(void);
s32 func_0010FB70(void);
s32 func_00112C78(u32);

void func_00117098(void) {
    s32 state;

    if (D_00133A54 != 0) {
        do {
            D_00133AA0 = -1;
        } while (0);
        func_00107000(D_00133A60);
    }
    func_00106FF0(D_00133A68);
    func_00106FF0(D_00133A6C);
    func_00106FF0(D_00133A70);
    func_00106FF0(D_00133A60);

    state = func_0010FB20();
    func_00112C78(0x80000012);
    if (state != 0) {
        func_0010FB70();
    }
}
