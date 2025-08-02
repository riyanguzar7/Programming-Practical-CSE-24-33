#include <stdio.h>

int main() {
    int n, i = 1;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        product *= i;
        i++;
    }

    printf("Product of series 1 to %d is: %lld\n", n, product);
    return 0;
}