#include <stdio.h>
int main()
{

    int p, r, n;
    float ans;

    printf("Enter the value of p = ");
    scanf("%d", &p);
    printf("Enter the value of r = ");
    scanf("%d", &r);
    printf("Enter the value of n = ");
    scanf("%d", &n);

    ans = (p * r * n) / 100;

    printf("\nSimple interest is = %f", ans);

    return 0;
}