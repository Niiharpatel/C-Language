#include <stdio.h>

int main()
{

    int n, i;

    printf("Enter the value of n = ");
    scanf("%d", &n);

    printf("\nEven number list are: ");
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }

    printf("\nOdd number list are: ");
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}