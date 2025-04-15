#include <stdio.h>

int main()
{
    int num, i;

    scanf("%d", &num);

    while (1 <= num)
    {
        i = num;
        while (1 <= i)
        {
            /* code */
            printf("%d ", i);
            i--;
        }
        printf("\n");

        num--;
    }

    return 0;
}