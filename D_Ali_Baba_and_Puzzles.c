#include <stdio.h>

int main()
{
    long long int num1, num2, num3, num4, i;

    scanf("%lld %lld %lld %lld", &num1, &num2, &num3, &num4);

    if (num1 + num2 - num3 == num4)
    {
        /* code */
        printf("YES");
    }
    else if (num1 - num2 + num3 == num4)
    {
        /* code */
        printf("YES");
    }
    else if (num1 * num2 + num3 == num4)
    {
        printf("YES");
    }
    else if (num1 + num2 * num3 == num4)
    {
        /* code */
        printf("YES");
    }
    else if (num1 * num2 - num3 == num4)
    {
        /* code */
        printf("YES");
    }
    else if (num1 - num2 * num3 == num4)
    {
        /* code */
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}