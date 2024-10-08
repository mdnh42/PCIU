
#include <stdio.h>

int main() {
    int i, j, rows;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
