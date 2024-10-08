#include <stdio.h>

int main()
{
    int numberOfRows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &numberOfRows);

    for (i = 1; i <= numberOfRows; ++i)
    {
        for (j = 1; j <= numberOfRows - i; ++j)
        {
            printf(" ");
        }
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}