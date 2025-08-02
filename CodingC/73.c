#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char content[1000];

    // Prompt user to enter the file name
    printf("Enter the name of the file to write into: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; // Exit if file cannot be opened
    }

    // Prompt user to enter the content to write
    printf("Enter content to write into the file (end with a newline):\n");
    getchar(); // Clear the newline left by scanf
    fgets(content, sizeof(content), stdin); // Read a line of input

    // Write the content to the file
    fprintf(file, "%s", content);

    // Close the file
    fclose(file);

    printf("Content successfully written to %s\n", filename);

    return 0;
}