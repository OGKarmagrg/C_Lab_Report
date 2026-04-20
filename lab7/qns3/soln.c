//Write a C program to create a text file and write some user-input data into it.

#include <stdio.h>

int main() {
    FILE *file = fopen("user_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    fprintf(file, "Name: %s\nAge: %d\nHeight: %.2f\n", name, age, height);

    fclose(file);
    printf("User data written to user_data.txt successfully!\n");
    return 0;
}