#include <stdio.h>

int main()
{
    int nd, d, y;

    printf("Enter the number of days: ");
    scanf("%d", &nd);

    d = nd / 365;

    printf("number of year in given days is = %d\n", d);

    printf("\nEnter the number of years: ");
    scanf("%d", &nd);

    y = nd * 365;

    printf("number of days in given year is = %d", y);

    return 0;
}