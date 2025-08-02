#include <stdio.h>

int main() {
    int n;

    // Read the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display the series from n down to 1
    printf("The series is: ");
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n"); // New line after the series
    return 0;
}