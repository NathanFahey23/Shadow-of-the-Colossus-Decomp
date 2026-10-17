#include "common.h"

typedef struct {
    u8 pad[8];
    s32 field_8;
} Obj8;

s32 func_001299A8(Obj8 *obj, s32 val, const char *fmt, void *ap);

s32 func_00128560(Obj8 *obj, const char *fmt, ...) {
    char *ap = (char *)__builtin_next_arg(fmt) - 0x30;
    return func_001299A8(obj, obj->field_8, fmt, ap);
}
