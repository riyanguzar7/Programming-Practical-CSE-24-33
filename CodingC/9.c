#include <stdio.h>

int main() {
    int number;

    // Read a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use the ternary operator to check if the number is even or odd
    (number % 2 == 0) 
        ? printf("%d is an even number.\n", number) 
        : printf("%d is an odd number.\n", number);

    return 0;
}