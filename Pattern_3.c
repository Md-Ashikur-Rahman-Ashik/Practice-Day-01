#include <stdio.h>

int main()
{
    int digit, i, j;

    scanf("%d", &digit);

    digit = digit + 64;

    // char character = digit + 64;

    for (i = 65; i <= digit; i++)
    {
        for (j = 65; j <= i; j++)
        {
            /* code */
            printf("%c ", i);
        }
        printf("\n");
    }

    return 0;
}