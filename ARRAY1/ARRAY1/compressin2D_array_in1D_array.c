// COMPRESSING 2D ARRAY IN 1D ARRAY


#include<stdio.h>
int main()
{
    int sum=0;
    int oneD[3*3];
    int arr[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
    for (int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }


    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            oneD[k++]=arr[i][j];
        }
    }

    printf("\n1D Array is \n");
    for(int i=0;i<3*3;i++)
    {
        printf("%d\n",oneD[i]);
    }
    printf("\n");
    return 0;
}