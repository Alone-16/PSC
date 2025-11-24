#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main() {
    int a = 6;
    int b = 9;

    printf("Before swapping: a = %d, b = %d\n\n", a, b);

    // Passing the addresses of a and b
    swap(&a, &b);

    printf("After swapping (in main): a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int c;

    // Dereferencing pointers to access and modify actual values
    c = *a;
    *a = *b;
    *b = c;

    printf("Inside swap function: a = %d, b = %d\n\n", *a, *b);
}
