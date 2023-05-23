#include <stdio.h>

// Print number in reverse order

int main()
{

        int a[] = {6, 4, 7, 2, 8};
        int i;
        for (i = 4; i >= 0; i--)
        {
                printf("%d", a[i]);
        }

        return 0;
}
