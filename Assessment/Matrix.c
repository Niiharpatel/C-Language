#include <stdio.h>
int main()
{

    int i, j, k, a[2][2], b[2][2], c[2][2];
    printf("Enter the element of matrix a: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]); // value get from user...
        }
    }

    printf("Enter the element of matrix b: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]); // value get from user...
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j]; // matrix multiplication...
            }
        }
    }

    printf("Multiplication of matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]); // multiplication output print...
        }
        printf("\n");
    }
}
