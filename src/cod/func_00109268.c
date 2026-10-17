#include "common.h"

typedef struct Element {
    u8 pad0[0x10];
    u32 field10;
    struct Element *field14;
    u32 field18;
} Element;

void func_00109268(Element *el) {
    el->field18 = 0;
    el->field10 &= ~1;
}
