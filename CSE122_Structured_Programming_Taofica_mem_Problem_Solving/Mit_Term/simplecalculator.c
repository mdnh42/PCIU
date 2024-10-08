#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Input operator and two numbers from the user
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation using if-else
    if (operator == '+')
        printf("%.2lf\n", num1 + num2);
    else if (operator == '-')
        printf("%.2lf\n", num1 - num2);
    else if (operator == '*')
        printf("%.2lf\n", num1 * num2);
    else if (operator == '/')
        printf("%.2lf\n", num2 != 0 ? num1 / num2 : 0);
    else
        printf("Invalid operator\n");

    return 0;
}
