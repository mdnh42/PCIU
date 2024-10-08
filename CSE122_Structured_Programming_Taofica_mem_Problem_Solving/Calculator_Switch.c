
#include<stdio.h>
int main()
{
    //   +, -, *, /
    char op;
    printf("Enter your operator: ");
    scanf("%c",&op);

    printf("Enter you num1 and nub2: ");
    int a, b;
    scanf("%d %d", &a, &b);

    switch(op){

    case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;

        case '*':
            printf("%d", a*b);
            break;
        case '/':
            printf("%d", a/b);
            break;
        default:
        printf("You are invalid");
    }
    return 0;
}
