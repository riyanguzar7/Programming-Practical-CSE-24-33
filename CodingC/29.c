#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    int sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of the digits raised to the power of 'digits'
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}