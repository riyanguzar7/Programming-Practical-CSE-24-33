#include <stdio.h>

int main() {
    int n;

    // Read the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display the series from 1 to n
    printf("The series is: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // New line after the series
    return 0;
}