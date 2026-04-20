//Write a c program that dynamically allocates memory for an integer array using malloc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    free(ptr);
    return 0;
}