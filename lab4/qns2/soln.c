/*Write a program to that demonstrates functions types based on 
Function with  arguments and no return value
Function with arguments and with return value
*/

#include <stdio.h>

// Function with arguments and no return value
void addAndPrint(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

// Function with arguments and return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 5, y = 3;
    
    // Calling function with arguments and no return value
    printf("Demonstrating function with arguments and no return value:\n");
    addAndPrint(x, y);
    
    // Calling function with arguments and return value
    printf("\nDemonstrating function with arguments and return value:\n");
    int result = multiply(x, y);
    printf("%d * %d = %d\n", x, y, result);
    
    return 0;
}
