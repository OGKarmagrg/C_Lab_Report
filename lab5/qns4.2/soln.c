//write a c program that accepts user input to store values in the array.

#include <stdio.h>
int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}