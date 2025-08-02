#include <stdio.h>

int main() {
    int i = 1;  // Initialize the counter variable

    // Loop to display the series 1, 2, 3, 4, 5, ...
    while (i <= 5) {  // Condition to stop at 5 (or change as needed)
        printf("%d ", i);  // Print the current value of i
        i++;  // Increment i to move to the next number
    }

    printf("\n");  // Move to the next line after the series

    return 0;
}