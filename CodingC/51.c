#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, term = 1.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int i = 1;
        while (i <= n) {
            sum += term; // Add the current term to the sum
            term /= 2;   // Divide the term by 2 for the next term
            i++;
        }
        printf("Sum of the series: %.2f\n", sum);
    }

    return 0;
}