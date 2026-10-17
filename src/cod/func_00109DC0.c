#include "common.h"

// TARGET: 0x00109DC0

s32 func_0010FB20(void);
void func_0010FB70(void);
typedef struct Node9D { char pad[0x14]; struct Node9D *next; } Node9D;
typedef struct State9D { char pad[0x28]; Node9D *head; } State9D;
extern State9D D_00145940;
Node9D *func_00109DC0(Node9D *node) {
    Node9D *p;
    func_0010FB20();
    p = D_00145940.head;
    if (p == node) D_00145940.head = p->next;
    else {
        while (p) {
            if (p->next == node) { p->next = node->next; break; }
            p = p->next;
        }
    }
    func_0010FB70();
    return p;
}
