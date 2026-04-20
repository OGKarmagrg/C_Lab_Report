//write a c program Calculates and displays the average of the elements.

#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;
    int sum = 0;
    float average;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    average = (float)sum / 5;
    printf("The average of the elements is: %.2f\n", average);

    return 0;
}