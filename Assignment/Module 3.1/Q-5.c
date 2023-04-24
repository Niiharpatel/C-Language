#include <stdio.h>

// to check year is leap or not....

int main()
{
    int y;

    printf("enter year to check : ");
    scanf("%d", &y);

    // given year is divisible by 400 is leap year or given year is divisible by 4 but not divisible by 100 is leap year

    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
    {
        printf("Year is leap year");
    }
    else
    {
        printf("Year is not leap year");
    }

    return 0;
}