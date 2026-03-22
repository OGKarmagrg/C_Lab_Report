//Write a program to generate Fibonacci series up to 8th term using recursion.
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("Fibonacci series up to 8th term:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}