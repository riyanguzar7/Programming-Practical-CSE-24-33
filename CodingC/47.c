#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    int i = 1;
    while (i <= n) {
        printf("%d ", first);
        next = first + second; // Calculate the next term
        first = second;        // Update first
        second = next;         // Update second
        i++;
    }

    printf("\n");
    return 0;
}