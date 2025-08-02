#include <stdio.h>

int main() {
    int n, term = 2;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the series
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2;  // Multiply the term by 2
    }

    printf("\n");
    return 0;
}