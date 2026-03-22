//4.	Write a C program to calculate the sum of the first N natural numbers using a for loop.

#include <stdio.h>
int main() {
    int N, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        sum= sum + i; // sum = sum + i
    }
    
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);
    
    return 0;
}