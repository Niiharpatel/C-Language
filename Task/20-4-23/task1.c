#include <stdio.h>

void indian();
void french();

int main()
{

    char ch;
    printf("Please Press i button for indian ");
    scanf("%c", &ch);

    if (ch == 'i' || ch == 'I')
    {
        indian();
    }
    else
    {
        french();
    }
    return 0;
}

void indian()
{
    printf("Hello I am Indian");
}

void french()
{
    printf("Hello I am French");
}
