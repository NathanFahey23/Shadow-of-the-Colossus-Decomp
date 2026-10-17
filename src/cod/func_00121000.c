#include "common.h"

typedef struct {
    s32 field0;
    s32 field4;
    s32 field8;
} Struct165DC0;

extern s32 D_00163CC0;
extern Struct165DC0 D_00165DC0;

void func_00107020(s32);
void func_001318C0(void *, void *);

Struct165DC0 *func_00121000(void) {
    Struct165DC0 *p = &D_00165DC0;
    func_00107020(D_00163CC0);
    func_001318C0(p, (u8 *)p + 0x7F);
    if (p->field0 <= 0) {
        p->field8 = 0;
    }
    return p;
}
