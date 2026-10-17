#include "common.h"

typedef struct InnerNode {
    s32 id;
    s32 pad[13];
    struct InnerNode *next;
} InnerNode;

typedef struct OuterNode {
    s32 pad0[2];
    InnerNode *head;
    s32 pad1[2];
    struct OuterNode *next;
    s32 pad2[4];
    struct OuterNode *first;
} OuterNode;

InnerNode *func_00109640(s32 id, OuterNode *arg1) {
    OuterNode *outer;
    InnerNode *inner;
    for (outer = arg1->first; outer != 0; outer = outer->next) {
        for (inner = outer->head; inner != 0; inner = inner->next) {
            if (inner->id == id) {
                return inner;
            }
        }
    }
    return 0;
}
