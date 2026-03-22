//1.	Write a program to find the greater of two numbers using if–else.

#include <stdio.h>
int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        printf("The greater number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greater number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    
    return 0;
}