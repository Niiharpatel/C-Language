#include <stdio.h>

// to print factorial

int main()
{
    int i, n, fact = 1;
    printf("Enter the value of n = ");
    scanf("\n%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;

        printf("Factorial of %d is %d\n", n, fact);
    }

    return 0;
}