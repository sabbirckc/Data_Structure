#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAfterValue(int valueToInsertAfter, int newValue) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newValue;

    struct Node* current = head;
    while (current != NULL) {
        if (current->data == valueToInsertAfter) {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    printf("Value %d not found in the list.\n", valueToInsertAfter);
}

void insertAtPosition(int position, int newValue) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newValue;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position %d is out of range.\n", position);
    } else {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteByValue(int valueToDelete) {
    struct Node* current = head;
    struct Node* prev = NULL;

    while (current != NULL) {
        if (current->data == valueToDelete) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Value %d not found in the list.\n", valueToDelete);
}

void deleteAtPosition(int position) {
    if (position == 1) {
        struct Node* temp = head;
        head = temp->next;
        free(temp);
        return;
    }

    struct Node* current = head;
    struct Node* prev = NULL;
    for (int i = 1; i < position && current != NULL; i++) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Position %d is out of range.\n", position);
    } else {
        prev->next = current->next;
        free(current);
    }
}

void displayList() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Sample Input
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = NULL;
    insertAfterValue(10, 25);
    deleteByValue(10);
    insertAtPosition(2, 20);
    deleteAtPosition(3);

    printf("Linked List: ");
    displayList();

    return 0;
}
