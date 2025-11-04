#include <stdio.h>

int main(void)
{
    // Declare an array to store the user's name
    char name[50];
    
    // Prompt the user for their name
    printf("What's your name? ");

    // Read the name
    fgets(name, sizeof(name), stdin);

    // Display a greeting
    printf("Hello, %s!\n", name);
}