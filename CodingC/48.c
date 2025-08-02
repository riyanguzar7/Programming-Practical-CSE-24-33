#include <stdio.h>

int main() {
    int num = 2;

    printf("Multiplication Tables from 2 to 10:\n");

    while (num <= 10) {
        int i = 1;
        printf("\nTable for %d:\n", num);
        while (i <= 10) {
            printf("%d x %d = %d\n", num, i, num * i);
            i++;
        }
        num++;
    }

    return 0;
}