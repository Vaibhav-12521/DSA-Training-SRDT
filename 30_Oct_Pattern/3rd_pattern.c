#include <stdio.h>

int main() {
    int n = 4, i, j, space;

    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
