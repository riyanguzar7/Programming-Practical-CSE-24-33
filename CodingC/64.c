#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Input the number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Call the recursive function and display the result
        printf("Factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}