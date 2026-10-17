#include "common.h"

struct Entry {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
};

void func_0010A0B0(void);
void func_00107000(s32);
s32 func_00107020(s32);

extern s32 D_00132320;
extern struct Entry D_00146EC0[32];

struct Entry *func_0010A1A0(void) {
    struct Entry *p;

    func_0010A0B0();
    func_00107020(D_00132320);

    for (p = D_00146EC0; p < D_00146EC0 + 32; p++) {
        if (p->f4 == 0) {
            p->f4 = 0x10000000;
            func_00107000(D_00132320);
            return p;
        }
    }

    func_00107000(D_00132320);
    return NULL;
}
