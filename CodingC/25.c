#include <stdio.h>

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the series
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);  // Print the number i, i times
        }
        printf(" ");  // Separate the terms with a space
    }

    printf("\n");
    return 0;
}