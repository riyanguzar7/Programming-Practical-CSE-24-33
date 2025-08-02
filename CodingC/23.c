#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first); // Print the first term
            continue;
        }
        if (i == 2) {
            printf("%d ", second); // Print the second term
            continue;
        }
        next = first + second; // Calculate the next term
        printf("%d ", next);
        first = second; // Update first term
        second = next;  // Update second term
    }

    printf("\n");
    return 0;
}