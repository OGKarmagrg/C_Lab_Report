//write a program that Create and use a simple structure to define a structure Student with members: name, roll_no, and marks. 

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter student roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter student marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}