#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter you three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2 && num1>num3)
    {
        printf("Number %d is max Number", num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("Number %d is max number", num2);

    }
    else{
        printf("Numebr %d is max number", num3);
    }
    return 0;
}
