#include <stdio.h>

int main()
{

    int i, n;
    printf("Enter the value of n = ");
    scanf("%d", &n);

    printf("even number list are: \n");
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }

    printf("odd number list are: \n");
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}