
#include<stdio.h>
int main()
{

    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int sum = 0;
    for(int i = 0; i<8; i++)
    {
        sum = sum + array[i];

    }

    printf("%d ", sum);

    array[7] = sum;

    for(int i = 0; i<8; i++)
    {
        printf("%d \n", array[i]);
    }


}
