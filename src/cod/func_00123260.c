#include "common.h"

/* machine draft (m2c), tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_00108EF8(M2C_UNK *, s32);              /* extern */
s32 func_00109980(s32, s32, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_001231A8();                                /* extern */
extern M2C_UNK D_00138E08;
extern M2C_UNK func_00123180;

s32 func_00123260(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_2;

    temp_2 = func_001231A8();
    if (temp_2 < 0) {
        func_00108EF8(&D_00138E08, arg2);
        return temp_2;
    }
    return func_00109980(arg0, arg2, 1, arg1, 0x1000, arg1, 0x1000, &func_00123180, temp_2);
}
