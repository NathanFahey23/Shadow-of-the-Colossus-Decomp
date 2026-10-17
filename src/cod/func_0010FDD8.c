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

M2C_UNK func_00107768();                            /* extern */
M2C_UNK func_0010F3C8();                            /* extern */
M2C_UNK func_0010FB88();                            /* extern */
M2C_UNK func_0010FCC8();                            /* extern */
M2C_UNK func_0010FF00();                            /* extern */
M2C_UNK func_001102B8();                            /* extern */
M2C_UNK func_00110430(M2C_UNK);                     /* extern */
M2C_UNK func_00110670();                            /* extern */
M2C_UNK func_00111AF0();                            /* extern */

void func_0010FDD8(void) {
    func_0010FB88();
    func_0010FCC8();
    func_001102B8();
    func_00110430(2);
    func_00110670();
    func_00107768();
    func_0010FF00();
    func_0010F3C8();
    func_00111AF0();
}
