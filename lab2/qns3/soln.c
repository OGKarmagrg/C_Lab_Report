/*
 * Program: Arithmetic Operations Calculator
 * Question 3: Perform basic arithmetic operations using switch statement
 * 
 * Operations Available:
 * - 1: Addition
 * - 2: Subtraction
 * - 3: Multiplication
 * - 4: Division
 */

#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;
    
    printf("========== Arithmetic Calculator ==========\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("============================================\n\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        
        case 2:
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        
        case 3:
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero not allowed!\n");
            }
            break;
        
        default:
            printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
    }
    
    return 0;
}