#include <stdio.h>

int main()
{
    int c, r, c1, r1;
    printf("Enter your first Matrix Row and Column: ");
    scanf("%d %d", &r, &c);

    printf("Enter your Second Matrix Row and Column: ");
    scanf("%d %d", &r1, &c1);

    if (c != r1)
    {
        printf("Maxtrix Multiple is not possible");
    }

    int matrix1[r][c], martrix2[r1][c1];
    printf("Enter your First Matrix: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter your Second Matrix");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &martrix2[i][j]);
        }
    }

    int multplicationMatrix[r1][c1];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            multplicationMatrix[i][j] = 0;
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            for (int k = 0; k < c; k++)
            {
                multplicationMatrix[i][j] += matrix1[i][k] * martrix2[k][j];
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", multplicationMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}