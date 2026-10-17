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

M2C_UNK func_00107000(s32);                         /* extern */
M2C_UNK func_00107020(s32);                         /* extern */
s32 func_00109980(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00116C58(M2C_UNK *);                   /* extern */
extern s32 D_00133A28;
extern M2C_UNK D_001386A0;
extern M2C_UNK D_0014E900;
extern M2C_UNK D_0014EA00;
extern s32 D_00150DC0;

s32 func_00115F70(s32 arg0) {
    s32 temp_16;

    if (D_00133A28 == 0) {
        return 0;
    }
    func_00107020(D_00150DC0);
    M2C_FIELD(&D_0014EA00, s32 *, 0) = arg0;
    if (func_00109980(&D_0014E900, 0x80001302, 0, &D_0014EA00, 0x90, &D_0014EA00, 0x90, 0, 0) < 0) {
        func_00116C58(&D_001386A0);
        func_00107000(D_00150DC0);
        return 0;
    }
    temp_16 = M2C_FIELD(&D_0014EA00, s32 *, 4);
    func_00107000(D_00150DC0);
    return temp_16;
}
