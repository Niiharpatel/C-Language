#include <stdio.h>

// to print fibonacci series

int main()
{
    int a = 0, b = 1, c, n, i;

    printf("Enter the valu of n = ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}