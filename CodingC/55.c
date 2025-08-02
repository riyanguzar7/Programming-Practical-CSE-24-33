#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the string including spaces

    // Display the entered string
    printf("You entered: %s\n", str);

    return 0;
}