#include "common.h"

void func_0010A0B0(void);
void func_00107000(s32);
s32 func_00107020(s32);

struct Entry {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
};

extern s32 D_00132320;
extern struct Entry D_00146EC0[32];

s32 func_0010A120(void) {
    s32 count = 0;
    struct Entry *p;

    func_0010A0B0();
    func_00107020(D_00132320);

    for (p = D_00146EC0; p < D_00146EC0 + 32; p++) {
        if (p->f4) {
            count++;
        }
    }

    func_00107000(D_00132320);
    return count;
}
