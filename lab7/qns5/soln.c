//Write a C program that checks if a file exists before opening it. If not, display an error message.

#include <stdio.h> 
int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully!\n");
    fclose(file);
    return 0;
}