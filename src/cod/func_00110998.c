#include "common.h"

typedef struct DListNode {
    struct DListNode *next;
    struct DListNode *prev;
} DListNode;

extern DListNode *D_00133930;

DListNode *func_00110998(DListNode *node) {
    DListNode *prev = node->prev;
    DListNode *next = node->next;
    if (prev != NULL) {
        prev->next = next;
    } else {
        D_00133930 = next;
    }
    if (next != NULL) {
        next->prev = node->prev;
    }
    node->prev = NULL;
    return next;
}
