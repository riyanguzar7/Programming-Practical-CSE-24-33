#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Variable to track if number is prime

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is less than 2 (since prime numbers are greater than 1)
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // If divisible by any number, it's not prime
            break;
        }
    }

    // Output result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}