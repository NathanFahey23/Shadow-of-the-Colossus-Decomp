#include "common.h"

typedef struct {
    s32 field0;
    s32 field4;
    void *field8;
    void *fieldC;
} Struct112358;

extern Struct112358 D_0014AEC0;

Struct112358 *func_00112358(s32 arg0) {
    Struct112358 *p = &D_0014AEC0;
    p->field0 = arg0;
    p->field4 = 0;
    p->fieldC = p + 1;
    p->field8 = p + 1;
    return p;
}
