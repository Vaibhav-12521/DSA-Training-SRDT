#include <stdio.h>

int main(){
    int matrix[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("Element at [%d][%d]: %d \n", i, j, matrix[i][j]);
        }
    }

    // Even Number

    int fnd = 0;
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if(matrix[i][j] % 2 == 0) {
                fnd = fnd + 1;
            }
        }
    }
    printf("Total Even Numbers: %d\n", fnd);

}