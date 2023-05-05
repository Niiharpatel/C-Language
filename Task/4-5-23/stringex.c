#include <stdio.h>
#include <string.h>

int main()
{

    char ch[] = "Hello User";
    char ch1[20];

    printf("Enter the string1");
    scanf("%s", ch1);

    printf("%d\n", strlen(ch)); // for length

    printf("%d\n", sizeof(ch)); // it will give actual size

    printf("%d\n", sizeof(ch1));

    printf("%s\n", strupr(ch)); // for uppercase use strupr

    printf("%s", strlwr(ch)); // for lowercase use strlwr

    return 0;
}