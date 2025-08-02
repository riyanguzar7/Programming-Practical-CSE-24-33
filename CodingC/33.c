#include <stdio.h>

int main() {
    // Loop to print the pattern
    for (int i = 2; i <= 5; i++) {  // Outer loop for rows
        for (int j = 1; j <= i; j++) {  // Inner loop for printing stars
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}