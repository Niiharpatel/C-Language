#include <stdio.h>
#include <string.h>
int main()
{

    char ch[] = "Nihar";
    char ch1[] = "Patel";

    // printf("%s\n", ch);

    // strcat(ch, ch1);

    strcpy(ch, ch1); 

    printf("%s", ch);

    return 0;
}