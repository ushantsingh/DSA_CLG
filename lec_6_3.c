//FACTORIAL 

#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
         fact=fact*i;
    }
    printf("FACTORIAL OF %d is %d ",num,fact);
}