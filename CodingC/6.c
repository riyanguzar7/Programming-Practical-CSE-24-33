#include <stdio.h>
#include <math.h>  // Include the math library

int main() {
    double radius, area, squareRoot;

    // Read the radius of the circle from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle using pow()
    area = M_PI * pow(radius, 2);

    // Display the area
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    // Read a number for square root calculation
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &squareRoot);

    // Calculate and display the square root
    if (squareRoot >= 0) {
        printf("The square root of %.2f is %.2f\n", squareRoot, sqrt(squareRoot));
    } else {
        printf("Square root of a negative number is undefined in real numbers.\n");
    }

    return 0;
}