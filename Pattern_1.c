#include <stdio.h>

int main()
{
    int num, i, j;

    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}