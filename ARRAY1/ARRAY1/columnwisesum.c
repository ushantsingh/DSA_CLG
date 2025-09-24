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
            // scanf("%d ", &arr[i][j]);
        }
    }

    printf("column wise sum\n");
    for (int j = 0; j < 3; j++)
    {
        int rowsum = 0;
        for (int i = 0; i < 3; i++)
        {
            rowsum += arr[i][j];
        }
        printf("sum os row %d =%d", j + 1, rowsum);
        printf("\n");
    }
    return 0;
}