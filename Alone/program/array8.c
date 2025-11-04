#include <stdio.h>

int main() {
    int arr1[5][5];
    int arr2[5][5];

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

    printf("The sum of array is: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}