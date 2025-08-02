#include <stdio.h>

// Recursive function to implement the Ackermann function
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1; // Base case 1
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1); // Recursive case 1
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1)); // Recursive case 2
    }
    return 0; // Fallback for invalid inputs
}

int main() {
    int m, n;

    // Input values of m and n
    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);

    // Check for non-negative input
    if (m < 0 || n < 0) {
        printf("Ackermann function is not defined for negative inputs.\n");
    } else {
        // Call the Ackermann function and display the result
        printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
    }

    return 0;
}