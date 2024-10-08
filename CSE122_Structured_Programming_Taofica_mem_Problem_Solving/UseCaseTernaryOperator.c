#include<stdio.h>

int maxFind(int num1, int num2)
{
    int max = (num1>num2)?num1:num2;
    return max;
}

int main()
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = maxFind(num1, num2);
    printf("Max %d", max);


    return 0;
}
