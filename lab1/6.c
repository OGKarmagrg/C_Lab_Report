#include <stdio.h>
int main() {
    int a = 5;
    float b = 2.0;

    // Implicit conversion
    float result1 = a + b;  // int converted to float
    printf("Implicit conversion result = %.2f\n", result1);

    // Explicit conversion (type casting)
    float result2 = (float)a / 2; 
    printf("Explicit conversion result = %.2f\n", result2);

    return 0;
}
