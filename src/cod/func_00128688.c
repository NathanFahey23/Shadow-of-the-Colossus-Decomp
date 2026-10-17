#include "common.h"

typedef struct {
    u8 pad[0x1D4];
    s32 *field_1D4;
} Obj1D4;

s32 func_00128688(Obj1D4 *obj) {
    s32 *ptr;
    s32 i;

    if (!obj->field_1D4) {
        ptr = (s32 *)func_00127A60((s32)obj, 0x80);
        obj->field_1D4 = ptr;
        if (!ptr) {
            return -1;
        }
        for (i = 0x1F; i >= 0; i--) {
            ptr[i] = 0;
        }
    }
    return 0;
}
