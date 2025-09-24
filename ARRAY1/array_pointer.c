#include<stdio.h>
int main()
{
 int arr[5]={1,2,3,4,5};
 int *p=arr;
 printf("%d",*(p));
 printf("\n%d",*(p+1));
 printf("\n%d",*(p+2));
}