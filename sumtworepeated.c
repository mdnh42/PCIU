
#include<stdio.h>
int main(){


    int a, b;
    char choice;


    do{
        printf("Enter two number: ");
        scanf("%d %d", &a, &b);
        printf("sum is : %d", a+b);

        printf("Are you want, If want write Y or N");
        scanf(" %c", &choice);
    }while(choice == 'Y' || choice == 'y');

    return 0;
}
