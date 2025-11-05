#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    printf("Enter the amount of number to be listed: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && arr[j] < arr[j + 1]){
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j--;
        }
    }

    printf("Sorted arr : ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}