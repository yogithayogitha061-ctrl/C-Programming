#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;   // same as &arr[0]

    printf("Pointer arithmetic:\n");

    printf("ptr       = %p, value = %d\n", (void*)ptr, *ptr);
    printf("ptr + 1   = %p, value = %d\n", (void*)(ptr + 1), *(ptr + 1));
    printf("ptr + 2   = %p, value = %d\n", (void*)(ptr + 2), *(ptr + 2));
    printf("ptr + 3   = %p, value = %d\n", (void*)(ptr + 3), *(ptr + 3));

    return 0;
}
