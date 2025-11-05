#include<stdio.h>
#define MAXSIZE 5
int stack[MAXSIZE];

int top = -1;

void push(int element){
    if(top == MAXSIZE - 1){
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = element;
        printf("Pushed %d to stack\n", element);
    }
}

void pop(){
    if(top == -1){
        printf("No elements");
    }
    else{
        int popele = stack[top];
        top--;
        printf("poped Element is %d\n", popele);
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    pop();
    return 0;
}

