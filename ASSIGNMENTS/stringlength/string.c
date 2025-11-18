#include <stdio.h>
#include <string.h>

int main() {
    // 1. Declare a variable to hold the string (the name)

    // 100 means it can hold up to 100 characters.
    char name[100];

    //  Ask the user for input and display a message
    printf("Hello! Please enter your name : ");

    // 3. Read the string from the user
    scanf("%s", name);

    // 4. Print the string back to the user
    printf("\nYour name is: %s\n", name);

    int length = strlen(name);

    printf("The length of your name is: %d characters.\n", length);

    return 0;
}
