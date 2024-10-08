
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        sum += array[i];
    }


    printf("The sum is :  %d", sum);

    return 0;
}
