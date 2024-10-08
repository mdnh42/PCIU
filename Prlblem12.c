#include <stdio.h>

int main()
{
    int n, i, searchValue, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the value to search for: ");
    scanf("%d", &searchValue);

    for (i = 0; i < n; i++)
    {
        if (array[i] == searchValue)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Value %d found in the array.\n", searchValue);
    }
    else
    {
        printf("Value %d not found in the array.\n", searchValue);
    }

    return 0;
}
