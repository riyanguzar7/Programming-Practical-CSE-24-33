#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display the series n, n-1, n-2, ..., 3, 2, 1 using a while loop
    while (n >= 1) {  // Loop continues as long as n is greater than or equal to 1
        printf("%d ", n);  // Print the current value of n
        n--;  // Decrement n by 1 for the next iteration
    }

    printf("\n");  // Move to the next line after the series

    return 0;
}