#include <stdio.h>

int main()
{
    float p, r, n, ans;
    printf("enter the value of p = ");
    scanf("%f", &p);
    printf("enter the value of r = ");
    scanf("%f", &r);
    printf("enter the value of n = ");
    scanf("%f", &n);

    ans = (p * r * n) / 100;

    printf("Ans of simple interest is = %f", ans);

    return 0;
}