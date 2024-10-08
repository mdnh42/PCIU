#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n + 1];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    array[n] = sum;

    printf("The modified array with sum is: :\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

