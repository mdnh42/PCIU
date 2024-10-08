
//1^2+2^2+3^2+4^2.........+

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i*i;
    }
    printf("%d", sum);
    return 0;
}
