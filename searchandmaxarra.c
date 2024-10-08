
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int max;
    int found = 0;
    int f;
    scanf("%d ", &f);

    for(int i =0; i<n; i++)

    {
        scanf("%d", &arr[i]);
        if(i ==0 )
        {
            max = arr[i];
        }
        else{
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }

        if(arr[i]==f)
        {
            found = 1;
        }
    }

    printf("max = %d", max);

    if(found == 1)
    {
        printf("Found");
    }else{printf("paini");}

    return 0;
}
