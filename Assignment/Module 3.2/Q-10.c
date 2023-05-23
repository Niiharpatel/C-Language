#include <stdio.h>

// to find summation of given number...

int main()
{
    int n, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; n > 0; n = n / 10)
    {
        i = i + (n % 10);
    }

    printf("Sum of digits is : %d", i);

    return 0;
}