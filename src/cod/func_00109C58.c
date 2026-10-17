#include "common.h"

// -fno-schedule-insns
typedef struct ListNode {
s32 f0,f4,f8; u8 padC[4]; s32 f10,f14; u8 pad18[0x20];
struct ListNode *next; s32 f3c; void *parent;
} ListNode;
typedef struct ListHead { u8 pad[8]; ListNode *head; } ListHead;
void func_0010FB20(void);
void func_0010FB70(void);
void func_00109C58(ListNode *node, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, ListHead *list) {
ListNode *curr;
func_0010FB20();
((volatile ListNode *)node)->f3c=0;
((volatile ListNode *)node)->next=NULL;
((volatile ListNode *)node)->f0=a1;
((volatile ListNode *)node)->f4=a2;
node->f8=a3;
node->f10=a4;
node->f14=a5;
node->parent=list;
if(list->head==NULL) {list->head=node;} else {
curr=list->head;
while(curr->next!=NULL) curr=curr->next;
curr->next=node;
}
func_0010FB70();
}
