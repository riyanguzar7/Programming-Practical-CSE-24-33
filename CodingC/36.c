#include <stdio.h>

int main() {
    // Loop to print the pattern
    for (int i = 1; i <= 4; i++) {  // Outer loop for rows
        // Print spaces before stars
        for (int j = 1; j <= 4 - i; j++) {
            printf(" ");  // Print space
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");  // Print star
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}