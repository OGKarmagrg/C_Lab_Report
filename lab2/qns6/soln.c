//6.	Write a C program using a do-while loop to find the sum of the digits of  given numbers

#include <stdio.h>
int main() {
    int num, sum = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    do {
        remainder = num % 10; // Get the last digit
        sum += remainder; // Add the last digit to the sum
        num /= 10; // Remove the last digit from the original number
    } while (num != 0);
    
    printf("The sum of the digits is: %d\n", sum);
    
    return 0;
}