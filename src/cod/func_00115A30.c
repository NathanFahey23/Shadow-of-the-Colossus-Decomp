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

M2C_UNK func_00109980(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_0014E900;
extern s32 D_0014EA00;

s32 func_00115A30(void) {
    func_00109980(&D_0014E900, 0x80001363, 0, &D_0014EA00, 0x90, &D_0014EA00, 0x90, 0, 0);
    return D_0014EA00;
}
