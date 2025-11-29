#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;   // ptr points to x

    printf("Before change:\n");
    printf("x = %d\n", x);

    // Change the value of x using the pointer
    *ptr = 99;

    printf("\nAfter change:\n");
    printf("x = %d\n", x);
    printf("Value through ptr: %d\n", *ptr);

    return 0;
}
