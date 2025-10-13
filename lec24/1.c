/*Dyanamic merory allocation (DMA) 

int *arr = (int *)malloc(n * sizeof(int));

yha pe humko (int)type ke jagah dushra type krna hai toh woh data type likh denge 

Ex:- float *arr = (float *)malloc(n * sizeof(float));

if array ke andarr agar koi memory free rahega toh hum 

 --->  free(arr) use karange
 
 malloc mai by defult value --> "garbage value" hota hai 
 aur calloc ka by default value --> "0" hota hai 
 
 */



#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d Elements : \n",n );
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    free(arr);



    // realloc


    printf("\nNow Enter newe size : ");
    int NewSize;
    scanf("%d",&NewSize);

    arr=(int *)realloc(arr,NewSize*sizeof(int ));
    printf("Enter %d new elements :\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }



}