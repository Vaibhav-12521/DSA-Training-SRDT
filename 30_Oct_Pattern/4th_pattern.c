#include <stdio.h>

int main() {
    int n = 4, i, j, space;

    for (i = n; i >= 1; i--) {
        for (space = n; space > i; space--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
