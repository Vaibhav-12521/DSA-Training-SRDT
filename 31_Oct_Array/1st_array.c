#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d  %d\n ", i, arr[i], &arr[i]);
    }


    // Even Number

    int fnd = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            fnd = fnd + 1;
        }
    }
    printf("Total Even Numbers: %d\n", fnd);
    return 0;
}