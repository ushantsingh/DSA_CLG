// TO CHECK A NUMBER WEATHER A NUMBER IS PRIMRE OR NOT

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a Number ");
    scanf("%d", &num);

    int count = 0;
    for (int i = num / 2; i > 0; i--)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("NUMBER IS PRIME ");
    }
    else
    {
        printf("THE NUMBER IS NOT PRIME ");
    }
}