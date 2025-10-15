#include <stdio.h>

int main() {
    int arr1[] = {1, 1, 2, 2, 3, 3, 3};
    int length = sizeof(arr1) / sizeof(arr1[0]);
    int max = arr1[0];

    for (int i = 1; i < length; i++) {
        if (arr1[i] > max) {
            max = arr1[i];
        }
    }

    int arr2[max + 1];

    for(int k = 0; k < max + 1; k++){
        arr2[k] = 0;
    }

    for(int l = 0; l < length; l++){
        arr2[arr1[l]]++;
    }

     for(int l = 0; l <= max; l++){
        printf("frequency of %d - %d\n", l, arr2[l]);
     }

    return 0;
}