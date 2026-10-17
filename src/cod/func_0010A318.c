#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Element;

extern s32 D_00132320;
extern Element D_00146EC0[32];

void func_0010A0B0(void);
char func_00107020(s32);
void func_00107000(s32);

Element *func_0010A318(u32 idx) {
    Element *p;
    func_0010A0B0();
    func_00107020(D_00132320);
    if (idx >= 32) {
        func_00107000(D_00132320);
        return 0;
    }
    p = &D_00146EC0[idx];
    func_00107000(D_00132320);
    return p;
}
