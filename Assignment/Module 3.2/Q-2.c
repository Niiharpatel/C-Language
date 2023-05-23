#include <stdio.h>

// swapping without third variable.....

int main()
{
    int a, b;

    printf("enter the value of a = "); // a=20
    scanf("%d", &a);
    printf("enter the value of b = "); // b=10
    scanf("%d", &b);

    printf("\nbefore swapping the value of a = %d and b = %d", a, b);

    a = a + b; // a = 20+10 =30
    b = a - b; // b = 30-10 =20
    a = a - b; // a = 30-20 =10

    printf("\nafter swapping the value of a = %d and b = %d", a, b);

    return 0;
}