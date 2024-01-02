#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1) {
        tail->next = l1;
    } else {
        tail->next = l2;
    }

    return dummy.next;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {

    struct ListNode* listA = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* listB = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp;

    listA->val = 5;
    listA->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp = listA->next;
    temp->val = 10;
    temp->next = NULL;

    listB->val = 7;
    listB->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp = listB->next;
    temp->val = 12;
    temp->next = NULL;

    printf("List A: ");
    printList(listA);

    printf("List B: ");
    printList(listB);


    struct ListNode* mergedList = mergeTwoLists(listA, listB);

    printf("Merged List: ");
    printList(mergedList);

    free(listA);
    free(listB);

    return 0;
}
