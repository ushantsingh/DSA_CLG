
#include<stdio.h>
int main()
{
    int arr[]={4,5,1,0,7,8};
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        int temp=0;
        for(int j=i+1;j<6;j++)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("%d",arr [6-n]);
}