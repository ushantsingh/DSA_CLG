// PALINDROME NUMBER : EX :- 121=121  DONO SAME HONA CHAYE

#include <stdio.h>
int main()
{
    int num;
    int res = 0;
    printf("Enter a Number ");
    scanf("%d", &num);

    int originalnum = num;
    while (num != 0)
    {
        int lastDigit = num % 10;
        res = res * 10 + lastDigit;
        num = num / 10;
    }
    printf("Reversed Nmber is %d", res);

    if (res == originalnum)
    {
        printf("\nThe number is Palindrome ");
    }
    else
    {
        printf("\nThe Number is not Palindrome");
    }
    return 0;
}