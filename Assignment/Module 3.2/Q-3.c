#include <stdio.h>

// to find out odd even number
int main()
{

    int a;

    printf("enter the value of a = "); // value get from user....
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("given number is even");
    }
    else
    {
        printf("given number is odd");
    }
}