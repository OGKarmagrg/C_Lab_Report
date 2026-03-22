//Write a c program to read n numbers of values in an array and display their total sum.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int sum = 0;
    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum
    }
    
    printf("The total sum of the array elements is: %d\n", sum);
    
    return 0;
}
