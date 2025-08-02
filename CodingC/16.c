#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Read the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("The sum of the series 1 to %d is: %d\n", n, sum);

    return 0;
}