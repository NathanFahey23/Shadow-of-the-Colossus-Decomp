#include "common.h"

typedef struct Element {
    u8 pad0[0x10];
    u32 field10;
    struct Element *field14;
    u32 field18;
    u8 pad1C[0x24]; // sizeof(Element) = 0x40
} Element;

typedef struct {
    u8 pad0[0x14];
    Element *elements;
    s32 count;
    Element *elements2;
    s32 maxCount;
    s32 nextIndex;
} ElementPool2;

Element *func_00109288(ElementPool2 *pool);

Element *func_001092B8(ElementPool2 *pool, s32 index) {
    if (index < 0 || index >= pool->maxCount) {
        return func_00109288(pool);
    }
    return &pool->elements2[index];
}
