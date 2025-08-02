#include <stdio.h>
#include <string.h>

void reverseDisplay(const char *str) {
    const char *ptr = str + strlen(str) - 1; // Point to the last character of the string
    
    while (ptr >= str) {
        putchar(*ptr); // Display the character pointed by ptr
        ptr--;         // Move the pointer backward
    }
    putchar('\n'); // New line at the end
}

int main() {
    char screenContent[] = "Hello, World!"; // Example content of the screen
    printf("Original content: %s\n", screenContent);
    
    printf("Reversed content: ");
    reverseDisplay(screenContent);
    
    return 0;
}