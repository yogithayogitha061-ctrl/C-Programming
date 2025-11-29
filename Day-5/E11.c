#include <stdio.h>

int main() {
    char *str = "Hello World";

    printf("String: %s\n", str);     // using %s
    printf("Character by character:\n");

    while (*str != '\0') {
        printf("%c", *str);
        str++;   // move pointer to next character
    }

    return 0;
}
