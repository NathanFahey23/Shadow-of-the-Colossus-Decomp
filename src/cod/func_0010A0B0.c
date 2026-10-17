#include "common.h"

struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int waitThreads;
    int attr;
    void *option;
};

s32 func_00106FE0(struct SemaParam *);
extern s32 D_00132320;
extern s32 D_00132324;
extern char D_00137EE0[];
extern char D_00137EF0[];

void func_0010A0B0(void) {
    struct SemaParam param;

    if (D_00132320 != -1) {
        return;
    }

    param.initCount = 1;
    param.option = D_00137EE0;
    param.maxCount = 1;
    D_00132320 = func_00106FE0(&param);

    param.option = D_00137EF0;
    D_00132324 = func_00106FE0(&param);
}
