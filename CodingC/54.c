#include <stdio.h>

int main() {
    int n;

    // Input the number of characters in the array
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n]; // Declare a character array of size n

    // Input characters into the array
    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);  // Adding a space before %c to ignore any leading whitespace
    }

    // Display the contents of the character array
    printf("The characters in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}