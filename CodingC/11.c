#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check if both numbers are even or odd using relational and logical operators
    if ((num1 % 2 == 0) && (num2 % 2 == 0)) {
        printf("Both numbers are even.\n");
    } else if ((num1 % 2 != 0) && (num2 % 2 != 0)) {
        printf("Both numbers are odd.\n");
    } else {
        printf("One number is even and the other is odd.\n");
    }

    return 0;
}