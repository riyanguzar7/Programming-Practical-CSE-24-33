#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Series: \n");
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("%d", i); // Print the current number i, j times
            j++;
        }
        printf("\n"); // Move to the next line for the next number
        i++;
    }

    return 0;
}