#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for(int i = 1, j=n; i<=n; i++, j--)
    {
        printf("%d %d \n", i, j);
    }
}
