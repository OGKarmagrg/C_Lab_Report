/*
   Write a C program to demonstrate the use of the following string handling functions:
   a) strcpy()
   b) strcat()
   c) strcmp()
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    int result;

    /* ─────────────────────────────────────────
       a) strcpy() – copy one string to another
       ───────────────────────────────────────── */
    strcpy(str1, "Hello");
    strcpy(str2, "World");

    printf("======= strcpy() =======\n");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n\n", str2);

    /* ─────────────────────────────────────────
       b) strcat() – concatenate two strings
       ───────────────────────────────────────── */
    strcpy(str3, str1);          // copy str1 into str3 first
    strcat(str3, " ");           // append a space
    strcat(str3, str2);          // append str2

    printf("======= strcat() =======\n");
    printf("str3 = str1 + \" \" + str2\n");
    printf("str3 = \"%s\"\n\n", str3);

    /* ─────────────────────────────────────────
       c) strcmp() – compare two strings
          Returns  0  : strings are equal
          Returns <0  : str1 comes before str2
          Returns >0  : str1 comes after  str2
       ───────────────────────────────────────── */
    printf("======= strcmp() =======\n");

    // Case 1: equal strings
    result = strcmp("Apple", "Apple");
    printf("strcmp(\"Apple\", \"Apple\") = %d  → %s\n",
           result,
           result == 0 ? "Equal" : (result < 0 ? "str1 < str2" : "str1 > str2"));

    // Case 2: str1 < str2
    result = strcmp("Apple", "Mango");
    printf("strcmp(\"Apple\", \"Mango\") = %d  → %s\n",
           result,
           result == 0 ? "Equal" : (result < 0 ? "str1 < str2" : "str1 > str2"));

    // Case 3: str1 > str2
    result = strcmp("Zebra", "Apple");
    printf("strcmp(\"Zebra\",  \"Apple\") = %d  → %s\n",
           result,
           result == 0 ? "Equal" : (result < 0 ? "str1 < str2" : "str1 > str2"));

    return 0;
}