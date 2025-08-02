#include <stdio.h>

int main() {
    int num = 2;  // Start from the first even number

    // Display all even numbers from 1 to 100 using while loop
    while (num <= 100) {
        printf("%d ", num);  // Print the current even number
        num += 2;  // Increment by 2 to get the next even number
    }

    printf("\n");  // Move to the next line after displaying all numbers

    return 0;
}