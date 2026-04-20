/*write a program that uses Pointer to structure
Create a structure Book with title, author, and price. 
Use a pointer to a structure to dynamically allocate memory for a book and display its details.
*/

#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book *book = (struct Book *)malloc(sizeof(struct Book));

    if (book == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter book details:\n");
    printf("Title: ");
    scanf("%s", book->title);
    printf("Author: ");
    scanf("%s", book->author);
    printf("Price: ");
    scanf("%f", &book->price);

    printf("\nBook details:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price: %.2f\n", book->price);

    free(book);
    return 0;
}