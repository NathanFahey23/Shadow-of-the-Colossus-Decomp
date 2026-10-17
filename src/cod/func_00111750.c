#include "common.h"

typedef struct Node {
    struct Node *next;
    volatile s32 f4;
    s32 (*callback)(s32, s32, s32, s32);
    s32 context;
} Node;

extern Node * volatile D_0014AC80;

s32 func_00111750(s32 arg0, s32 arg1, s32 arg2, Node *node) {
    s32 res = node->callback((((s32)node << 4) | (arg0 & 0xFE)) | 1, arg1, arg2, node->context);
    if (res == 0) {
        node->next = D_0014AC80;
        D_0014AC80 = node;
        node->f4 = 0;
        return -1;
    }
    return res;
}
