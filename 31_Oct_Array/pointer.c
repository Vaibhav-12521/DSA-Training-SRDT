#include <stdio.h>

int main(){

    // int a = 10;
    // int *p = &a;
    // printf("Value of a: %d\n", a);
    // printf("Address of a: %p\n", &a);
    // printf("Value of p (Address of a): %p\n", p);
    // printf("Value pointed by p: %d\n", *p);


    int a = 10;
    void *p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p (Address of a): %p\n", p);
    printf("Value pointed by p: %d\n", *(int *)p);



    return 0;
}