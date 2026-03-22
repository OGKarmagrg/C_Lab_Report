//8.	Write a program to skip specific iterations in a loop using continue.

#include <stdio.h>
int main() {
    int num;
    
    printf("Enter a positive integer (enter -1 to stop): ");
    
    while (1) { // Infinite loop
        scanf("%d", &num);
        
        if (num == -1) {
            printf("Terminating the loop.\n");
            break; // Exit the loop when -1 is entered
        }
        
        if (num % 2 == 0) {
            continue; // Skip even numbers
        }
        
        printf("You entered an odd number: %d\n", num);
    }
    
    return 0;
}