#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of the series 1, 2, 3, 4, ..., n using while loop
    while (i <= n) {
        sum += i;  // Add i to sum
        i++;  // Increment i by 1
    }

    // Display the result
    printf("Sum of the series 1 to %d is: %d\n", n, sum);

    return 0;
}