/*write a program that uses Nested structure to 
Define a structure Address with city, state, and pincode as members. 
Define a structure Person that includes name, age, and Address as a nested structure. 
Accept and display details of a person. 
*/

#include <stdio.h>
#include <string.h>

struct Address {
    char city[50];
    char state[50];
    int pincode;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Person person;

    printf("Enter person's details:\n");
    printf("Name: ");
    scanf("%s", person.name);
    printf("Age: ");
    scanf("%d", &person.age);
    printf("City: ");
    scanf("%s", person.address.city);
    printf("State: ");
    scanf("%s", person.address.state);
    printf("Pincode: ");
    scanf("%d", &person.address.pincode);

    printf("\nPerson details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("City: %s\n", person.address.city);
    printf("State: %s\n", person.address.state);
    printf("Pincode: %d\n", person.address.pincode);

    return 0;
}