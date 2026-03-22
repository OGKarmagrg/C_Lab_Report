#include <stdio.h>
int main() {
    float P, T, R, I;
    printf("Enter Principal, Time (years), and Rate of Interest: ");
    scanf("%f %f %f", &P, &T, &R);

    I = (P * T * R) / 100;
    printf("Simple Interest = %.2f\n", I);

    return 0;
}