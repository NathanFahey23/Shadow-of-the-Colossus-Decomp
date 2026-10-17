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
extern s32 D_0013231C;
extern char D_00137F68[];

void func_0010A740(void) {
    struct SemaParam param;

    if (D_0013231C != -1) {
        return;
    }

    param.initCount = 1;
    param.option = D_00137F68;
    param.maxCount = 1;
    D_0013231C = func_00106FE0(&param);
}
