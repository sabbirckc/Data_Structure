#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseLinkedList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void printLinkedList(struct ListNode* head) {
    struct ListNode* current = head;

    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 20;
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val = 25;
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val = 5;
    head->next->next->next = NULL;

    printf("Original Linked List: ");
    printLinkedList(head);


    head = reverseLinkedList(head);

    printf("Reversed Linked List: ");
    printLinkedList(head);

    return 0;
}
