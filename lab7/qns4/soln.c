//Write a program to demonstrate file handling functions fopen(), fclose(), fread(), fwrite().

#include <stdio.h>

int main() {
    FILE *file = fopen("demo.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing to file
    fprintf(file, "Hello, World!\n");
    fclose(file);

    // Reading from file
    file = fopen("demo.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}