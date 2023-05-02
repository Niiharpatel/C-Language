#include <stdio.h>
#include <string.h>

int main()
{

    char ch[30] = "Hello user this is string";

    // printf("%c", ch[6]); accessing of string

    // ch[6] = 'o';
    // printf("%c", ch[6]); // modifying of string

    // printf("%s", ch); // for print string

    int i;
    for (i = 0; i < 25; i++)
    {
        printf("%c\n", ch[i]); // print character
    }

    return 0;
}