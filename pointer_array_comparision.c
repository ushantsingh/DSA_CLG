// COMPARING THE VALUES OF TWO ARRAY USING POINTER
#include<stdio.h>

int main()
{
    int arr1[5]={5,8,10,96,78};
    int arr2[5]={6,85,10,65,9};
    int *p1=arr1;
    int *p2=arr2;
    int flag =1;
    for(int i=0;i<5;i++)
    {
        if(*(p1+i)!=*(p2+i))
        {
            flag=0;
            break;
        }
    }
        if(flag)
        {
            printf("Array are Equal");
        }
        else 
        {
             printf("Array are Not Equal");
        }
    
}