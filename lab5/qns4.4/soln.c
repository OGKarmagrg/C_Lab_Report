//Write a c program that frees the allocated memory using free().

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input from user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Display the entered values
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    printf("\nMemory has been freed successfully.\n");

    return 0;
}
