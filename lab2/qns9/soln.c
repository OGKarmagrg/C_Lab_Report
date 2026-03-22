//9.	Write an example program that causes an infinite loop unintentionally (e.g., missing condition update).

#include <stdio.h>
int main() {
    int count = 0;
    
    printf("This program will cause an infinite loop due to missing condition update.\n");
    
    while (count < 5) {
        printf("Count: %d\n", count);
        // Missing update to 'count' variable, causing an infinite loop
    }
    
    return 0;
}