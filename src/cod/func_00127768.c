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

M2C_UNK func_00128490(s32);                         /* extern */
M2C_UNK func_00128510(s32);                         /* extern */

void *func_00127768(s32 arg0) {
    void *temp_17;

    func_00128490(*D_00135C60);
    temp_17 = func_00127A60(*D_00135C60, arg0);
    func_00128510(*D_00135C60);
    return temp_17;
}
