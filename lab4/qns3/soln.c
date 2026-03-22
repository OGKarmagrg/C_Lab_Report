//Write a program to multiply two number using inline function.
#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 5, y = 3;
    int result = multiply(x, y);
    printf("%d * %d = %d\n", x, y, result);
    return 0;
}