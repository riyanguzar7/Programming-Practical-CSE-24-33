#include <stdio.h>

int main() {
    // Loop to print the pattern
    for (int i = 1; i <= 4; i++) {  // Outer loop for rows
        for (int j = 1; j <= i; j++) {  // Inner loop for printing numbers
            printf("%d", j);  // Print numbers from 1 to i
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}