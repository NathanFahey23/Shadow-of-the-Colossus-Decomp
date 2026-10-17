#include "common.h"

typedef struct SemaParam {
    s32 currentCount;
    s32 maxCount;
    s32 initCount;
    s32 waitThreads;
    u32 attr;
    u32 option;
    s32 pad[2];
} SemaParam;

extern s32 D_00138250[];
extern s32 D_00138260[];
extern s32 D_001329A0[];

s32 func_00106FE0(SemaParam *);

void func_0010FB88(void) {
    SemaParam sema1;
    SemaParam sema2;

    sema1.maxCount = 1;
    sema1.initCount = 1;
    sema1.option = (u32)D_00138250;

    sema2.maxCount = 1;
    sema2.initCount = 1;
    sema2.option = (u32)D_00138260;

    D_001329A0[0] = func_00106FE0(&sema1);
    D_001329A4[0] = func_00106FE0(&sema2);
}
