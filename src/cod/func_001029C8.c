#include "common.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern Pair D_0013BF90[];

void func_001029C8(void) {
    s32 val = -1;
    s32 count = 255;
    Pair *p = D_0013BF90;
    do {
        count--;
        p->b = val;
        p->a = val;
        p++;
    } while (count >= 0);
}
