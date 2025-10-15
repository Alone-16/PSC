#include <stdio.h>

//Basic array

int main() {
    int arr[5][5];

    printf("Enter a 2D array: ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The entered array is: ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}