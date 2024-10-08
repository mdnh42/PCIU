#include <stdio.h>

int main() {
    int i, j, rows;


    printf("Enter the number of rows for the right triangle: ");
    scanf("%d", &rows);


    for (i = 1; i <= rows; i++) {

        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

