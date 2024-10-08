
#include <stdio.h>

int main() {
    int num1, num2, sum;
    char choice;

    do {

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);


        sum = num1 + num2;


        printf("The sum of %d and %d is: %d\n", num1, num2, sum);


        printf("Do you want to enter another pair of numbers? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting the program. Goodbye!\n");

    return 0;
}
