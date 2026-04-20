//wap a c program that Calculate and display the sum of all elements in the array.
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;

    printf("Elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}