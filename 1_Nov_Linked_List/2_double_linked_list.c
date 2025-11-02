#include <stdio.h>
#include <stdlib.h>

struct Node{
    int age;
    struct Node* next;
    struct Node* previous;
}; 

struct Node* createNode(int age) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->age = age;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    while (head != NULL) {
        printf("Age: %d\n", head->age);
        head = head->next;
    }
}

void forwardTraversal(struct Node* head) {
    while (head != NULL) {
        printf("Age: %d\n", head->age);
        head = head->next;
    }
}

void reverseTraversal(struct Node* tail) {
    while (tail != NULL) {
        printf("Age: %d\n", tail->age);
        tail = tail->previous;
    }
}

int main(){
    struct Node* n1 = createNode(12);
    struct Node* n2 = createNode(13);
    struct Node* n3 = createNode(14);

    n1 ->next = n2;
    n2 ->previous = n1;
    n2 ->next = n3;
    n3 ->previous = n2;
    n3 ->next = NULL;

    forwardTraversal(n1);
    printf("\n---------\n");
    reverseTraversal(n3);

    free(n1);
    free(n2);
    free(n3);

    return 0;
}
