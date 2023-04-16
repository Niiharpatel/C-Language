#include <stdio.h>

int main()
{

    // nested if

    int a, b, c;
    printf("Enter the value of a"); // 10
    scanf("%d", &a);

    printf("Enter the value of b"); // 20
    scanf("%d", &b);

    printf("Enter the value of c"); // 30
    scanf("%d", &c);

    if (a > b) // 10 > 20
    {
        if (a > c)
        {
            printf("a is maximum");
        }
        else
        {
            printf("c is maximum");
        }
    }
    else if (b > c) // 20 > 30 b is not greater than c so the program directly print the else part.
    {
        printf("b is maximum");
    }
    else
    {
        printf("c is maximum");
    }
    return 0;
}
