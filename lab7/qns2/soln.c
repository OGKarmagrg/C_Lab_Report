//Write a program that creates a binary file and writes structured records (e.g., student details: name, roll number, marks).

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    FILE *file = fopen("students.bin", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student students[5];

    // Initialize student records
    strcpy(students[0].name, "Alice");
    students[0].rollNumber = 1;
    students[0].marks = 85.5;

    strcpy(students[1].name, "Bob");
    students[1].rollNumber = 2;
    students[1].marks = 92.0;

    strcpy(students[2].name, "Charlie");
    students[2].rollNumber = 3;
    students[2].marks = 78.5;

    strcpy(students[3].name, "Diana");
    students[3].rollNumber = 4;
    students[3].marks = 96.0;

    strcpy(students[4].name, "Eve");
    students[4].rollNumber = 5;
    students[4].marks = 88.5;

    // Write student records to binary file
    fwrite(students, sizeof(struct Student), 5, file);

    fclose(file);
    printf("Student records written to students.bin successfully!\n");
    return 0;
}