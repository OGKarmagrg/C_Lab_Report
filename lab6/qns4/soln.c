/* write a program that uses Passing a structure to a function
Write a program where a function displayStudent(struct Student s) accepts a structure as an argument and displays its data. 
*/

#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float score;
};

void displayStudent(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Score: %.2f\n", s.score);
}

int main() {
    struct Student student;

    printf("Enter student's details:\n");
    printf("ID: ");
    scanf("%d", &student.id);
    printf("Name: ");
    scanf("%s", student.name);
    printf("Score: ");
    scanf("%f", &student.score);

    printf("\nStudent details:\n");
    displayStudent(student);

    return 0;
}