#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the order of the square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Primary diagonal
        if (i != n - i - 1) {
            sum += matrix[i][n - i - 1]; // Secondary diagonal
        }
    }

    // Display the result
    printf("The sum of all diagonal elements is: %d\n", sum);

    return 0;
}