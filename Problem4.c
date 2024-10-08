#include <stdio.h>
#include <math.h>

int main() {

    float radius, length, width, base, height, side, area;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = M_PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);


    printf("\nEnter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("Area of the rectangle: %.2f\n", area);

    printf("\nEnter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of the triangle: %.2f\n", area);


    printf("\nEnter the side length of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of the square: %.2f\n", area);

    return 0;
}
