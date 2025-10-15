#include <stdio.h>

//Printing the sub array 

int main() {
    int n;

    printf("Enter the amound of array to be listed: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The sub arrays are: ");
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            printf("[");
            for(int k = i; k <= j; k++){
                printf("%d", arr[k]);
                if (k < j) printf(", ");
            }
            printf("] ");
        }
    }

    return 0;
}