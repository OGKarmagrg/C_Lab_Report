//7.	Write a program to terminate a loop prematurely using break.

#include<stdio.h>
int main() {
    int num;
    
    printf("Enter a positive integer (enter -1 to stop): ");
    
    while (1) { // Infinite loop
        scanf("%d", &num);
        
        if (num == -1) {
            printf("Terminating the loop.\n");
            break; // Exit the loop when -1 is entered
        }
        
        printf("You entered: %d\n", num);
    }
    
    return 0;
}