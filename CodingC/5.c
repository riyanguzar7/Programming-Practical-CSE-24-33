#include <stdio.h>
#define PI 3.14159  // Define the constant PI

int main() {
    float radius, area;

    // Read the radius of the circle from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}