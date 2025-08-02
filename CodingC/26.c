#include <stdio.h>

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the series
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", (i - 1) % 5 + 1);  // Repeat numbers from 1 to 5
    }

    printf("\n");
    return 0;
}