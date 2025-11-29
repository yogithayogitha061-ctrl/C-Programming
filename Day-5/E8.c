#include <stdio.h>

int main() {
    int x = 42;        // a normal integer variable
    int *ptr = &x;     // pointer storing the address of x

    printf("Value of x: %d\n", x);

    // Print address of x
    printf("Address of x (using &x): %p\n", (void*)&x);

    // Print the value stored in pointer (which is also the address of x)
    printf("Address stored in ptr: %p\n", (void*)ptr);

    // Print the value pointed to by ptr
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
