#include <stdio.h>

void mul();
void add();
void sub();
void div();
int a, b;
float c;

int main()
{

    printf("Enter the value of a = ");
    scanf("%d", &a);

    printf("Enter the value of b = ");
    scanf("%d", &b);

    mul();
    add();
    sub();
    div();

    return 0;
}

void mul()
{
    c = a * b;
    printf("Ans of multiplication is = %f", c);
}

void add()
{
    c = a + b;
    printf("\nAns of addition is = %f ", c);
}

void sub()
{
    c = a - b;
    printf("\nAns of substraction is  = %f", c);
}

void div()
{
    c = a / b;
    printf("\nAns of division is  = %f", c);
}
