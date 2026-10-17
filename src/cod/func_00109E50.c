#include "common.h"

typedef struct Item {
    char pad[0x3C];
    struct Item *next;
} Item;

typedef struct Queue {
    char pad[0x4];
    int active;
    char pad2[0x4];
    Item *head;
} Queue;

void func_0010FB20(void);
void func_0010FB70(void);

Item *func_00109E50(Queue *q) {
    Item *item;
    func_0010FB20();
    item = q->head;
    if (item == 0) {
        q->active = 0;
    } else {
        q->active = 1;
        q->head = item->next;
    }
    func_0010FB70();
    return item;
}
