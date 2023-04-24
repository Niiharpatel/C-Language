#include <stdio.h>

void main()
{

    int a = 60;
    int b = 20;
    int c;

    printf("Value of a = %d\n", a); // \n use for new line
    printf("Value of b = %d\n\n", b);

    c = a + b; // Addition
    printf("Ans is C (addition) = %d\n", c);

    c = a - b; // Subtraction
    printf("Ans is C (subtraction) = %d\n", c);

    c = a * b; // Multiplication
    printf("Ans is C (multiplication) = %d\n", c);

    c = a / b; // Division
    printf("Ans is C (division) = %d\n", c);

    c = a % b; // Modulus
    printf("Ans is C (Modulus) = %d", c);
}
