#include <stdio.h>
int main() {
    int m1, m2, m3, m4, total;
    float percentage;

    printf("Enter marks of 4 subjects: ");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

    total = m1 + m2 + m3 + m4;
    percentage = (total / 400.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
