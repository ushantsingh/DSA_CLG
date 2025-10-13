// {-1,0,5,-2,0,3}  --> {0,0,-1,-2,3,5} using malloc or calloc  and realloc .


#include<stdio.h>
int main()
{
    int arr[]={2,-3,7,0,8,-9,0,-5,6,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j;
    int result[n];

    for (int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            result[j]=arr[i];
            j++;
        }
    }

    // copying all negative numbers
    

    for (int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            result[j]=arr[i];
            j++;
        }
    }

    // copying all positive numbers 

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            result[j]=arr[i];
            j++;
        }
    }

    // combinig both copied array 

    printf("Rearranged array : { ");
    for(int i=0;i<n;i++)
    {
        printf("%d",result[i]);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    printf("}");
}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,k=0;
//     printf("enter n: ");
//     scanf("%d",&n);
//     int *a=(int *)malloc(n*sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//        scanf("%d",&a[i]);
//     }
//     int c[n];
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         c[k++]=a[i];
//     }
//     int i=0;
//     while(i<n){
//         if(a[i]<0)
//         c[k++]=a[i];
//         i++;
//     }
//     for(i=0;i<n;i++)
//     { 
//         if(a[i]>0)
//         c[k++]=a[i];
//     }
//     printf("rearranged array : {");
//     for(int j=0;j<n;j++)
//     {
//         printf("%d",c[j]);
//         if(j<n-1)
//         printf(", ");
//     }
//     printf("}");
// }

