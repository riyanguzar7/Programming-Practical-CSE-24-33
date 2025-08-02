#include <stdio.h>

int main() {
    int n, term = 2;

    printf("Enter the maximum value (n): ");
    scanf("%d", &n);

    printf("Series: ");
    while (term <= n) {
        printf("%d ", term);
        term *= 2; // Multiply the current term by 2
    }

    printf("\n");
    return 0;
}