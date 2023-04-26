#include <stdio.h>

int main()
{

    char cal;
    int a = 10;
    int b = 5;
    int c;

    printf("enter any operator = ");
    scanf("%c", &cal);

    switch (cal)
    {
    case '+':
        c = a + b;
        printf("the ans is %d", c);
        break;

    case '-':
        c = a - b;
        printf("the ans is %d", c);
        break;

    case '*':
        c = a * b;
        printf("the ans is %d", c);
        break;

    case '/':
        c = a / b;
        printf("the ans is %d", c);
        break;

    default:
        break;
    }

    return 0;
}
