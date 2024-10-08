
#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1, j = rows; i <= rows; i++, j--)
    {
        printf("%d  %d \n", i, j);
    }

    return 0;
}
