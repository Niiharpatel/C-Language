#include <stdio.h>
int main()
{
    int i, j, n;
    int k = 1;
    printf("Enter the value : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", k++);
        }
        printf("\n");
    }

    return 0;
}