//WAP that accept a character string from the user using pointer

#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Enter a character string: ");
    fgets(ptr, sizeof(str), stdin);

    printf("You entered: %s", ptr);

    return 0;
}   