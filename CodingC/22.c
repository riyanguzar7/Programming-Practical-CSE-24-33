#include <stdio.h>

int main() {
    int n;
    unsigned long long term = 2;  // Use unsigned long long to handle large values

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the series
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%llu ", term);
        term *= term;  // Square the current term
    }

    printf("\n");
    return 0;
}