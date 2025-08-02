#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a character array to store the string

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the string including spaces

    // Remove newline character if present (added by fgets)
    str[strcspn(str, "\n")] = '\0';

    // Display the string in reverse order
    printf("The string in reverse order is: ");
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}