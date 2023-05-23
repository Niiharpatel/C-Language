#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n = ");
    scanf("%d", &n);

    printf("Even number list are: \n");
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum of even number is = %d\n", sum);

    printf("\nOdd number list are: \n");
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum of odd number is = %d\n", sum);

    return 0;
}