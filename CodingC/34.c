#include <stdio.h>

int main() {
    // Loop to print the pattern
    for (int i = 5; i >= 1; i--) {  // Outer loop for rows, starting from 5 stars
        for (int j = 1; j <= i; j++) {  // Inner loop for printing stars
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}