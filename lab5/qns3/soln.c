//wap c program that Swap two integers using pointers.

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr1 = &a, *ptr2 = &b;
    int temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}