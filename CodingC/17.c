#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // Use long long to handle large numbers

    // Read the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the product of the series using a for loop
    for (int i = 1; i <= n; i++) {
        product *= i;  // Multiply the current number with the product
    }

    // Display the result
    printf("The product of the series 1 to %d is: %lld\n", n, product);

    return 0;
}