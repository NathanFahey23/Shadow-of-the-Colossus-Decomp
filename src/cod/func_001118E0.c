#include "common.h"

typedef struct Node {
    struct Node *next;
    volatile s32 f4;
    void *callback;
    void *context;
} Node;

extern Node * volatile D_0014AC80;

s32 func_00110D48(void);
s32 func_001113E0(s32, u64, void *, void *);
s32 func_00110FA0(s32);
s32 func_00111750(s32, s32, s32, Node *);

static inline Node *alloc_node(void) {
    Node *node = D_0014AC80;
    if (node != 0) {
        D_0014AC80 = *(Node * volatile *)&node->next;
    }
    return node;
}

s32 func_001118E0(u64 clock, void *callback, void *opt) {
    Node *node;
    s32 timer_id;

    if (callback == 0) {
        return 0x80000016;
    }
    node = alloc_node();
    if (node == 0) {
        return 0x80008005;
    }
    timer_id = func_00110D48();
    if (timer_id < 0) {
        node->next = D_0014AC80;
        D_0014AC80 = node;
        node->f4 = 0;
        return timer_id;
    }
    node->callback = callback;
    node->context = opt;
    node->f4 = timer_id;
    func_001113E0(timer_id, clock, func_00111750, node);
    func_00110FA0(timer_id);
    return (((s32)node << 4) | (timer_id & 0xFE)) | 1;
}
