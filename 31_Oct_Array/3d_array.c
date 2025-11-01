#include <stdio.h>

int main(){

    int tensor[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
 
 
 
 
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         for (int k = 0; k < 4; k++) {
    //             printf("Element at [%d][%d][%d]: %d\n", i, j, k, tensor[i][j][k]);
    //         }
    //     }
    // }

    //find  45 in array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                if (tensor[i][j][k] == 8) 
                    printf("45 found in the array.\n");                
                else
                    printf("Not Found");
                    
                
            }
        }
    }
    return 0;
}