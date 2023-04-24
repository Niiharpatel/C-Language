#include <stdio.h>

int main()
{
    float a, b, c;

    // to find area of circle

    printf("enter the value of a = ");
    scanf("%f", &a);

    c = a * a; // equation to find area of square

    printf("Area of square is = %f\n", a);

    // to find area of rectangle

    printf("\nenter the value of a = ");
    scanf("%f", &a);
    printf("enter the value of b = ");
    scanf("\n%f", &b);

    c = a * b;
    printf("Area of rectangle is = %f\n", c);

    // to find area of triangle

    printf("\nenter the value of a = ");
    scanf("\n%f", &a);
    printf("enter the value of b = ");
    scanf("\n%f", &b);

    c = (a * b) / 2;

    printf("Area of triangle is = %f", c);
}