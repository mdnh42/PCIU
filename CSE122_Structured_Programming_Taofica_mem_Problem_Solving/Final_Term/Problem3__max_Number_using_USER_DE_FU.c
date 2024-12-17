#include <stdio.h>
int MAXNUMBER(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Max Number: %d", MAXNUMBER(a, b));
    return 0;
}