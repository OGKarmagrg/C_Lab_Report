//5.	Write a C program to reverse a given number using a while loop.

#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append the last digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }
    
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}