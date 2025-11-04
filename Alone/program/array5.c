//Finding the second largest array

#include <stdio.h>

int main() {
    int n;

    printf("Enter the amount of number: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int sec = arr[0];
    for(int j = 0; j < n; j++){
        if(max < arr[j]){
            sec = max;
            max = arr[j];
        }
        else if(sec < arr[j] && sec != max){
            sec = arr[j];
        }
    }

    printf("The Largest number is = %d\n", max);
    printf("The second largest number is = %d", sec);

    return 0;
}