#include <stdio.h>

// to find out max number

int main()
{
    int i, n, d, max = -1;

    printf("Enter the number= ");
    scanf("%d", &n);

    for (i = n; i > 0; i = i / 10)
    {
        d = i % 10;
        if (d > max)
        {
            max = d;
        }
    }

    printf("\nmax number is = %d", max);

    return 0;
}