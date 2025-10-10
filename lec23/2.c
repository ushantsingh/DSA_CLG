// {-1,4,2,-3,7,3,-4}
// O/P :-
//        {-1,-3,-4,4,2,7,3}

#include <stdio.h>

int main()
{
    int arr[] = {-1, 4, 2, -3, 7, 3, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];
    int j = 0;
    // copying all negative no.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            result[j++] = arr[i];
        }
    }

    // copying all positive no.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            result[j++] = arr[i];
        }
    }

    // printing rearranged array
    printf("Rearranged array: { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", result[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf(" }\n");

    return 0;
}

// OM SIR

// #include<stdio.h>
// int main()
// {
//     int arr[]={-1,4,2,-3,7,3,-4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int neg[3];
//     int pos[4];
//     int mer[7];
//     for (int i=0,j=0,k=0;i<7;i++)
//     {
//         if(arr[i]<0)
//         {
//             neg[j]=arr[i];
//             j++;
//         }
//         else{
//             pos[k]=arr[i];
//             k++;
//         }
//     }
//     int index=0;
//     for(int i=0;i<3;i++)
//     {
//         mer[index]=neg[i];
//         index++;
//     }
//     for(int j=0;j<)
//     {

//     }
// }
