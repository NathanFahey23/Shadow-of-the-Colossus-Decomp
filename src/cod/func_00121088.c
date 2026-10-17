#include "common.h"

// TARGET: 0x00121088
// TC: 2.9
// -G0
// -O2

struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    u32 attr;
    u32 option;
};

struct Struct24 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
};

extern s32 D_00135940;
extern int D_00138D68;
extern s32 D_00163CC0;
extern struct Struct24 D_00163CC8[2];

s32 func_00106FE0(struct SemaParam *);

s32 func_00121088(void) {
    struct SemaParam sp;
    struct Struct24 *p;
    struct Struct24 *end;

    D_00135940 = 0;
    sp.maxCount = 0x7F;
    sp.initCount = 0;
    sp.option = (u32)&D_00138D68;

    D_00163CC0 = func_00106FE0(&sp);
    if (D_00163CC0 < 0) {
        return 0;
    }

    p = D_00163CC8;
    end = (struct Struct24 *)((s32)p + 0x48);
    do {
        p->f0 = 0;
        p->f8 = 0x200;
        p->fC = 0x10;
        p->f10 = 0x4000;
        p = (struct Struct24 *)((s32)p + 0x24);
    } while ((s32)p < (s32)end);

    return 1;
}
