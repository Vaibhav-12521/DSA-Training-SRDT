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

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("Age: %d\n", current->age);
        current = current->next;
    }
}

int main(){
    struct Node* n1 = createNode(12);
    struct Node* n2 = createNode(13);
    struct Node* n3 = createNode(14);

    n1 ->next = n2;
    n2 ->next = n3;
    n3 ->next = NULL;

    displayList(n1);

    free(n1);
    free(n2);
    free(n3);

    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int age;
//     struct Node* next;
// }; 

// int main(){
//     struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));

//     n1 ->age = 12;
//     n2 ->age = 13;
//     n3 ->age = 14;

//     n1 ->next = n2;
//     n2 ->next = n3;
//     n3 ->next = NULL;

//     struct Node* head = n1;
//     while (head != NULL) {
//         printf("Age: %d\n", head->age);
//         head = head->next;
//     }

//     free(n1);
//     free(n2);
//     free(n3);

//     return 0;
// }





