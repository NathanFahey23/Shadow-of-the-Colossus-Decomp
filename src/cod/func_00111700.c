#include "common.h"

typedef struct Node {
    struct Node *next;
    u8 pad[12];
} Node;

extern Node D_0014A880[64];
extern Node *D_0014AC80;

s32 func_00111700(void) {
    s32 i;
    D_0014AC80 = D_0014A880;
    for (i = 63; i >= 0; i--) {
        D_0014A880[i].next = &D_0014A880[i + 1];
    }
    D_0014A880[63].next = NULL;
    return 0;
}
