#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is palindrome
int isPalindrome(const char *str) {
    const char *start = str;              // Pointer to the start of the string
    const char *end = str + strlen(str) - 1; // Pointer to the end of the string

    while (start < end) {
        // Skip non-alphanumeric characters
        while (start < end && !isalnum((unsigned char)*start)) start++;
        while (start < end && !isalnum((unsigned char)*end)) end--;

        // Compare characters ignoring case
        if (tolower((unsigned char)*start) != tolower((unsigned char)*end)) {
            return 0; // Not a palindrome
        }

        start++; // Move forward
        end--;   // Move backward
    }
    return 1; // It's a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}