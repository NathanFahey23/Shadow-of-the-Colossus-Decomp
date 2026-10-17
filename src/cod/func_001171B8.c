#include "common.h"

// -malign-loops=2
// -malign-jumps=2
#include "scus_map.h"

REG_GP(gp);

extern s32 D_00133A64;
extern void (*D_00150E08)(s32);
extern void *D_00150E0C;
extern s32 D_00150E10;

void func_001171B8(void) {
    if (D_00150E08 != 0 && D_00133A64 == 0) {
        void *new_gp = D_00150E0C;
        void *old_gp;
        do {
            old_gp = gp;
            gp = new_gp;
        } while (0);
        D_00150E08(D_00150E10);
        gp = old_gp;
    }
}
