#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Series: ");
    while (i <= n) {
        printf("%d ", i); // Print the current number
        i++;              // Increment the counter
    }

    printf("\n");
    return 0;
}