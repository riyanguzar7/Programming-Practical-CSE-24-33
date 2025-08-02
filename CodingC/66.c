#include <stdio.h>

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case: 1st Fibonacci number is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check for non-negative input
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        // Display the Fibonacci series
        printf("Fibonacci series up to %d terms:\n", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}