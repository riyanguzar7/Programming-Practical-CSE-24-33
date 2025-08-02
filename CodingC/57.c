#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Add each element to sum
    }

    // Display the sum
    printf("The sum of all elements is: %d\n", sum);

    return 0;
}