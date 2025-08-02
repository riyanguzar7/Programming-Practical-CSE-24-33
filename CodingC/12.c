#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display the options for the operation
    printf("Choose an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the operation using switch-case
    switch(choice) {
        case 1: 
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2: 
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3: 
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4: 
            // Check for division by zero
            if(num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default: 
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}