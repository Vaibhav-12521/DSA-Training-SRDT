#include <stdio.h>
#include <stdlib.h>

struct Node{
    int age;
    struct Node* next;
}; 

int main(){
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));

    n1 ->age = 12;
    n2 ->age = 13;
    n3 ->age = 14;

    n1 ->next = n2;
    n2 ->next = n3;
    n3 ->next = NULL;

    struct Node* head = n1;
    while (head != NULL) {
        printf("Age: %d\n", head->age);
        head = head->next;
    }

    free(n1);
    free(n2);
    free(n3);

    return 0;
}