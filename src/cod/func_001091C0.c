#include "common.h"

typedef struct Element {
    u8 pad0[0x10];
    u32 field10;
    struct Element *field14;
    u32 field18;
    u8 pad1C[0x24];
} Element;

typedef struct {
    s32 field0;
    Element *elements;
    s32 count;
} Pool;

void func_0010FB20(void);
void func_0010FB70(void);

Element *func_001091C0(Pool *pool) {
    s32 i;
    Element *el;

    func_0010FB20();

    for (i = 0, el = pool->elements; i < pool->count; i++, el++) {
        if (!(el->field10 & 1)) {
            s32 val;
            s32 gen;

            el->field10 = (i << 16) | 5;
            val = pool->field0;
            pool->field0 = val + 1;
            if (val + 1 == 1) {
                pool->field0 = val + 2;
                gen = 1;
            } else {
                gen = val + 1;
            }

            el->field14 = el;
            el->field18 = gen;
            func_0010FB70();
            return el;
        }
    }

    func_0010FB70();
    return NULL;
}
