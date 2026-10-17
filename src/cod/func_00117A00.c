#include "common.h"

// TARGET: 0x00117A00
// TC: 2.9
// -G0
// -O2

extern volatile s32 D_00133A68;
extern volatile s32 D_00133A6C;
extern u8 D_00133AC0[];
extern u8 D_00133B40[];
extern u8 D_00134C10[];
extern u8 D_00134C40[];
extern u8 D_00135080[];
extern u8 D_001355C0[];

s32 func_00117A00(s32 arg0, void **arg1) {
    void *ptr;

    if (arg0 == 0x8001) goto L_8001;
    if (arg0 == 0x8003) goto L_8003;
    if (arg0 == 0x8002) goto L_8002;
    if (arg0 == 0x8004) goto L_8004;
    if (arg0 == 0x8011) goto L_8011;
    if (arg0 == 0x8013) goto L_8013;
    if (arg0 == 0x8012) goto L_8012;

    if (arg0 == 0x8014) {
        ptr = D_001355C0;
    } else {
        ptr = (void *)0;
    }
    goto ret;

L_8012:
    ptr = D_00135080;
    goto ret;
L_8013:
    ptr = D_00134C40;
    goto ret;
L_8011:
    ptr = (void *)D_00133A6C;
    goto ret;
L_8004:
    ptr = D_00134C10;
    goto ret;
L_8002:
    ptr = D_00133B40;
    goto ret;
L_8003:
    ptr = D_00133AC0;
    goto ret;
L_8001:
    ptr = (void *)D_00133A68;

ret:
    *arg1 = ptr;
    return 1;
}
