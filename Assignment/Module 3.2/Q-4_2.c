#include <stdio.h>

// to find alphabet is vowel or consonant........

int main()
{
    char ch;
    printf("enter any alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("alphabet is vowel");
        break;

    case 'e':
        printf("alphabet is vowel");
        break;

    case 'i':
        printf("alphabet is vowel");
        break;

    case 'o':
        printf("alphabet is vowel");
        break;

    case 'u':
        printf("alphabet is vowel");
        break;

    case 'A':
        printf("alphabet is vowel");
        break;

    case 'E':
        printf("alphabet is vowel");
        break;

    case 'I':
        printf("alphabet is vowel");
        break;

    case 'O':
        printf("alphabet is vowel");
        break;

    case 'U':
        printf("alphabet is vowel");
        break;

    default:
        printf("alphabet is consonant");
        break;
    }

    return 0;
}