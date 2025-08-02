#include <stdio.h>

int main() {
    // Demonstrating CONTINUE
    printf("Using CONTINUE: Printing numbers from 1 to 10, skipping 5:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip the rest of the loop when i == 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrating BREAK
    printf("Using BREAK: Printing numbers from 1 to 10, stopping at 5:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i == 5
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}