#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int front = -1, rear = -1;

void insert(int element) {
    if (rear == MAXSIZE - 1) {
        printf("Cannot insert %d, Queue is full\n", element);
        return;
    }
    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = rear + 1;
    }

    queue[rear] = element;
    printf("Inserted %d successfully\n", element);
}
void delete() {
    if (front == -1) {
        printf("Queue is empty, Cannot delete\n");
        return;
    }

    printf("Deleted element is %d\n", queue[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty, Nothing to display\n");
        return;
    }

    printf("Elements in the Queue are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    delete();
    display();

    return 0;
}



// #include<stdio.h>
// #define maxsize 5
// int queue[maxsize];
// int front =-1, rear = -1;
// void insert(int element){
//     if(rear == maxsize-1){
//         printf("Cannot insert %d, Queue is full\n", element);
//     }

//     if (front == -1 && rear == -1){
//         front = 0;
//         rear = 0;
//     }
//     else{
//         rear = rear + 1;
//     }
//     queue[rear] = element;
//     printf("Inserted Successfully");
// }

// void delete(){
//     if(front == -1 &&  rear == -1){
//         printf("Queue is empty, Cannot delete\n");
//     }
//     printf("\nDeleted element is %d\n", queue[front]);
//     front++;
// }

// void display(){
//     if(front == -1 && rear == -1){
//         printf("\nQueue is empty, Nothing to display\n");
//     }
//     printf("\nElements in the Queue are:  ");
//     for(int i=front; i<=rear; i++){
//         printf("%d ", queue[i]);
//     }
// }

// int main(){
//     insert(10);
//     insert(20);
//     display();
//     delete();
//     display();
//     return 0;
// }

