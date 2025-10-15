#include <stdio.h>

int main() {
    int arr1[5][5];
    int arr2[5][5];
    int arr3[5][5];

    printf("Enter first 2D array [5x5]: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second 2D array [5x5]: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            arr3[i][j] = 0;
        }
    }
 
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("The product of array is: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3d", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}