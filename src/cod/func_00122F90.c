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

s32 func_00106ED0();                                /* extern */
M2C_UNK func_00108FF8(M2C_UNK);                     /* extern */
M2C_UNK func_00109BC0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00109C58(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0010A070(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00168F00;
extern M2C_UNK D_00169F10;
extern M2C_UNK D_00169F58;
extern M2C_UNK func_00122EA8;

void func_00122F90(void) {
    func_00108FF8(0);
    func_00109BC0(&D_00169F58, func_00106ED0());
    func_00109C58(&D_00169F10, 0x80001101, &func_00122EA8, &D_00168F00, 0, 0, &D_00169F58);
    func_0010A070(&D_00169F58);
}
