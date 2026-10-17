#include "common.h"

typedef struct {
    s32 field_0;
    u8 pad[0x1D0];
    s32 *field_1D4;
} Obj1D4;

s32 func_00128688(Obj1D4 *obj);

s32 func_001286F8(Obj1D4 *obj, u32 index, s32 value) {
    s32 old;

    if (index >= 0x20) {
        obj->field_0 = 0x16;
        return -1;
    }
    if (obj->field_1D4 == NULL) {
        if (func_00128688(obj) != 0) {
            return -1;
        }
    }
    old = obj->field_1D4[index];
    obj->field_1D4[index] = value;
    return old;
}
