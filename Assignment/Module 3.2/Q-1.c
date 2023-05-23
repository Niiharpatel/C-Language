#include <stdio.h>

// simple calculator

void main()
{

    int a, b;
    float c;

    printf("enter the value of a = "); // value get from user....
    scanf("%d", &a);
    printf("enter the value of b = "); // value get from user....
    scanf("%d", &b);

    c = a + b; // Addition
    printf("\nAns is C (addition) = %f\n", c);

    c = a - b; // Subtraction
    printf("Ans is C (subtraction) = %f\n", c);

    c = a * b; // Multiplication
    printf("Ans is C (multiplication) = %f\n", c);

    c = a / b; // Division
    printf("Ans is C (division) = %f\n", c);

    c = a % b; // Modulus
    printf("Ans is C (Modulus) = %f", c);
}