#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;  // Use long long to handle larger results

    // Read the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Ensure the number is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a for loop
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        // Display the result
        printf("The factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}