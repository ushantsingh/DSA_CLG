//SUM OF NUMBER EX 125=1+2+5=8
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num>0)
    {
        int lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;
    }
    printf("Sum of the number is %d:",sum);
}