#include <stdio.h>

// to find summation of first digit and last digit....

int main()
{
    int n;
    int sum;
    int last;

    printf("Enter the number= ");
    scanf("%d", &n);

    last = n % 10;

    while (n > 9)
    {
        n = n / 10;
    }

    sum = n + last;
    printf("\n sum of first and last digit is %d", sum);

    return 0;
}