#include <stdio.h>

int main() {
    int arr[] = {1, 2, 1, 3, 4, 5, 2, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int dup_num[length];
    int dup_count = 0;

    for (int i = 0; i < length; i++) {
        int is_duplicate = 0;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate) {
            int already_recorded = 0;
            for (int m = 0; m < dup_count; m++) {
                if (dup_num[m] == arr[i]) {
                    already_recorded = 1;
                    break;
                }
            }
            if (!already_recorded) {
                dup_num[dup_count++] = arr[i];
            }
        }
    }

    printf("Duplicates = %d (", dup_count);
    for (int i = 0; i < dup_count; i++) {
        printf("%d", dup_num[i]);
        if (i < dup_count - 1) {
            printf(", ");
        }
    }
    printf(")\n");

    return 0;
}
