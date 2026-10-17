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

M2C_UNK func_00106C90(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 D_00132668;
extern M2C_UNK func_0010F7C0;

s32 func_0010F278(s32 arg0) {
    D_00132668 = arg0;
    func_00106C90(1, &func_0010F7C0);
    func_00106C90(2, &func_0010F7C0);
    func_00106C90(3, &func_0010F7C0);
    return arg0;
}
