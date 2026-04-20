/*write a program that uses an Array of structures to 
Define a structure Employee with members: ID, Name, and Salary. 
Accept and display details for N employees using an array of structures in descending order. 
*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int ID;
    char Name[50];
    float Salary;
};

int main() {
    int N;
    printf("Enter the number of employees: ");
    scanf("%d", &N);

    struct Employee employees[N];

    // Accept employee details
    for (int i = 0; i < N; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].ID);
        printf("Name: ");
        scanf("%s", employees[i].Name);
        printf("Salary: ");
        scanf("%f", &employees[i].Salary);
    }

    // Sort employees in descending order based on Salary
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (employees[j].Salary < employees[j + 1].Salary) {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    // Display employee details
    printf("\nEmployee details in descending order of Salary:\n");
    for (int i = 0; i < N; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].ID, employees[i].Name, employees[i].Salary);
    }

    return 0;
}