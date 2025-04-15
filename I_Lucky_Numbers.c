#include <stdio.h>

int main()
{
    int num, first_digit, second_digit;

    scanf("%d", &num);

    first_digit = num % 10;
    second_digit = num / 10;

    if (first_digit % second_digit == 0)
    {
        printf("YES");
    }
    else if (second_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}