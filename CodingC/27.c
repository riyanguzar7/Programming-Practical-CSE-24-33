#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * 2 - 1);  // Add 1/(2i-1) to the sum
    }

    // Display the result
    printf("Sum of the series: %.6f\n", sum);

    return 0;
}