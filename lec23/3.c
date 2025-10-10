// {2,4,6,8,13}
// {4,6,7,3,1,8,10}
// O/P :-  {4,6,8}

#include <stdio.h>

int main()
{
    int first;
    int arr1[] = {2, 4, 6, 8, 13};
    int arr2[] = {4, 6, 7, 3, 1, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common elements: { ");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // printf("%d ,", arr1[i]);
                // break; // to  avoid dupicate printing

                if (!first)
                    printf(", "); // print comma before element (not after)
                printf("%d", arr1[i]);
                first = 0;
                break;
            }
        }
    }
    printf("}\n");

    return 0;
}
