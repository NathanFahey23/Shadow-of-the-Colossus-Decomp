#include "common.h"

void func_0010FB20(void);
void func_0010FB70(void);
typedef struct Link09 { char pad[0x38]; struct Link09 *next; } Link09;
typedef struct List09 { char pad[8]; Link09 *head; } List09;
Link09 *func_00109D28(Link09 *node, List09 *list) {
    Link09 *p;
    func_0010FB20();
    p = list->head;
    if (p == node) list->head = p->next;
    else {
        while (p) {
            if (p->next == node) {
                p->next = node->next;
                break;
            }
            p = p->next;
        }
    }
    func_0010FB70();
    return p;
}
