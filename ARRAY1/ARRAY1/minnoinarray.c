// MINIMUM NUMBER IN 2D ARRAY

// MAXIMUM ARRAY IN 2D ARARY

#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[3][3] = {{
                         1,
                         2,
                         3,
                     },
                     {4, 5, 6},
                     {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }


    int min=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("Minimum element in 2d arary =%d\n",min);
    return 0;
}