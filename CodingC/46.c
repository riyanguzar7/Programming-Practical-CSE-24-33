#include <stdio.h>

int main() {
    int n;
    long long term = 2; // Start with the first term as 2

    printf("Enter the maximum value (n): ");
    scanf("%d", &n);

    printf("Series: ");
    while (term <= n) {
        printf("%lld ", term);
        term *= term; // Square the current term for the next value
    }

    printf("\n");
    return 0;
}