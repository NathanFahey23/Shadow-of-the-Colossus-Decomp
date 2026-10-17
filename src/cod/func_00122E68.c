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

s32 func_00122DE0();                                /* extern */
M2C_UNK func_001232F0(M2C_UNK);                     /* extern */
extern s32 D_0013595C;

s32 func_00122E68(void) {
    s32 temp_16;

    temp_16 = func_00122DE0();
    func_001232F0(0);
    D_0013595C = 0;
    return temp_16;
}
