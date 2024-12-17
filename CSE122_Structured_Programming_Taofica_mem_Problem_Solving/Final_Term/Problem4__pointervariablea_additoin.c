#include <stdio.h>
int main()
{
    float a, b, sum;
    float *ptr1, *ptr2, *ptrresult;

    ptr1 = &a;
    ptr2 = &b;
    ptrresult = &sum;

    scanf("%f %f", ptr1, ptr2);

    *ptrresult = *ptr1 + *ptr2;

    printf("Sum is : %.2f\n ", *ptrresult);
}