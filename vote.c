#include<stdio.h>
int main()
{

    int age;
    printf("Enter you age:");
    scanf("%d", &age);
    if(age>17)
    {
        printf("You are eligible for vote");
    }
    else{
        printf("YOu are not eligible for vote");
    }


    return 0;
}
