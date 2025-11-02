#include <stdio.h>
#include <stdlib.h>

struct Node{
    int age;
    struct Node* next;
}; 

struct Node* createNode(int age) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->age = age;
    newNode->next = NULL;
    return newNode;
}



void forwardTraversal(struct Node* head) {
    struct Node* temp = head->next;
    do {
        printf("%d -> ", temp->age);
        temp = temp->next;
    } while (temp != head->next);
}
int main(){
    struct Node* n1 = createNode(12);
    struct Node* n2 = createNode(13);
    struct Node* n3 = createNode(14);

    n1 ->next = n2;
    n2 ->next = n3;
    n3 ->next = n1;

    forwardTraversal(n1);
    free(n1);
    free(n2);
    free(n3);

    return 0;
}
