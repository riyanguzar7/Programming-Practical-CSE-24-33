#include <stdio.h>

int main() {
    int num, digit;

    // Input a natural number
    printf("Enter a natural number: ");
    scanf("%d", &num);

    // Ensure the input is a natural number
    if (num <= 0) {
        printf("Please enter a natural number greater than 0.\n");
        return 1;
    }

    printf("Digits in reverse order: ");
    for (; num > 0; num /= 10) {  // Loop until the number becomes 0
        digit = num % 10;         // Extract the last digit
        printf("%d ", digit);     // Print the digit
    }

    printf("\n");
    return 0;
}