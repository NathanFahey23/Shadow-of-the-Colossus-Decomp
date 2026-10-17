#include "common.h"

extern s32 D_001329A0[];
extern s32 D_001360C0[];
extern s32 D_001360C4[];

void func_00107000(s32);

void func_00128510(void) {
    if (--D_001360C4[0] == 0) {
        D_001360C0[0] = -1;
        func_00107000(D_001329A0[0]);
    }
}
