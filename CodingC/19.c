#include <stdio.h>

int main() {
    int n;

    // Read the value of n
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Check if the number is positive
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("The factors of %d are: \n", n);

        // Loop through all numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            // If n is divisible by i (i.e., remainder is 0)
            if (n % i == 0) {
                printf("%d ", i);  // i is a factor of n
            }
        }
        printf("\n");  // New line after displaying the factors
    }

    return 0;
}