#include <stdio.h>

int main() {
    int arr[5] = {1, 2, -3, 5, -4};
    int size = 5;

    int present[6] = {0}; 
    // for (int i = 0; i <= size; i++) {
    //     present[i] = 0;
    // }

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] <= size) {
            present[arr[i]] = 1;
        }
    }

    int missing = size + 1;
    for (int i = 1; i <= size; i++) {
        if (present[i] == 0) {
            missing = i;
            break;
        }
    }

    printf("The smallest positive missing number is %d\n", missing);
    return 0;
}
