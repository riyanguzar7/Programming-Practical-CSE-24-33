#include <stdio.h>

int main() {
    // Display multiplication tables from 2 to 10
    printf("Multiplication Tables from 2 to 10:\n");

    for (int i = 2; i <= 10; i++) {  // Outer loop for tables (2 to 10)
        printf("\nTable of %d:\n", i);
        for (int j = 1; j <= 10; j++) {  // Inner loop for multiplying 1 to 10
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}