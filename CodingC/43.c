#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive natural number.\n");
    } else {
        printf("Factors of %d are: ", n);
        while (i <= n) {
            if (n % i == 0) { // Check if i is a factor of n
                printf("%d ", i);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}