//Create a file named “Book.txt” and store book’s name, author’s name and company name for 5 books. 

#include <stdio.h>

int main() {
    FILE *file = fopen("Book.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Store book information for 5 books
    fprintf(file, "Book 1: The Great Gatsby\nAuthor: F. Scott Fitzgerald\nCompany: Scribner\n\n");
    fprintf(file, "Book 2: To Kill a Mockingbird\nAuthor: Harper Lee\nCompany: J.B. Lippincott & Co.\n\n");
    fprintf(file, "Book 3: 1984\nAuthor: George Orwell\nCompany: Secker & Warburg\n\n");
    fprintf(file, "Book 4: Pride and Prejudice\nAuthor: Jane Austen\nCompany: T. Egerton, Whitehall\n\n");
    fprintf(file, "Book 5: The Catcher in the Rye\nAuthor: J.D. Salinger\nCompany: Little, Brown and Company\n\n");

    fclose(file);
    printf("Book information stored in Book.txt successfully!\n");
    return 0;
}