#include <stdio.h>

int main()
{

    char g;
    int a;
    int p = 5000, r;
    float d;

    printf("enter your gender = ");
    scanf("%c", &g);

    printf("enter your age = ");
    scanf("%d", &a);

    if ((g == 'f' || g == 'F') && a > 25)
    {
        d = (p * 10) / 100;
        r = p - d;

        printf("Discounted amount is = %f\n", d);
        printf("Total payable  amount is = %d", r);
    }
    else if ((g == 'm' || g == 'M') && a > 45)
    {
        d = (p * 15) / 100;
        r = p - d;

        printf("Discounted amount is = %f\n", d);
        printf("Total payable  amount is = %d", r);
    }
    else
    {
        printf("invalid!!!!!!");
    }

    return 0;
}
