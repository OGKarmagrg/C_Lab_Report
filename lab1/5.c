#include <stdio.h>
int main() {
    int x = 123;
    float y = 45.6789;
    char str[] = "Kantipur";

    printf("Integer: %d\n", x);
    printf("Integer (width 5): %5d\n", x);
    printf("Float: %f\n", y);
    printf("Float (2 decimal places): %.2f\n", y);
    printf("String: %s\n", str);
    printf("String (width 10): %10s\n", str);

    return 0;
}
