#include <stdio.h>

int main() {
    // Display the even numbers from 1 to 100
    printf("Even numbers from 1 to 100 are: \n");
    
    for (int i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n"); // New line after displaying the numbers
    return 0;
}