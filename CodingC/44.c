#include <stdio.h>

int main() {
    int n, i = 2, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        while (i <= n / 2) { // Check divisors up to n/2
            if (n % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
            i++;
        }

        if (isPrime) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}