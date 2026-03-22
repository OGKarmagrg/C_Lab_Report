/*
 * Program: Student Grade Calculator
 * Question 2: Read marks of a student and display the grade using if-else if ladder
 * 
 * Grading Criteria:
 * - Marks >= 80: Distinction
 * - Marks >= 60: First Division
 * - Marks >= 50: Second Division
 * - Marks >= 40: Pass
 * - Marks < 40: Fail
 */

#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter the marks of a student: ");
    scanf("%d", &marks);
    
    if (marks >= 80) {
        printf("Grade: Distinction\n");
    }
    else if (marks >= 60) {
        printf("Grade: First Division\n");
    }
    else if (marks >= 50) {
        printf("Grade: Second Division\n");
    }
    else if (marks >= 40) {
        printf("Grade: Pass\n");
    }
    else {
        printf("Grade: Fail\n");
    }
    
    return 0;
}