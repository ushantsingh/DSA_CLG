// Sum of Array Elements

#include<stdio.h>
int sum(int arr[], int n){
    if(n==0){
        return 0;
    }
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int arr[] = {3, 4, 1};
    int n = 3;
    int data = sum(arr, n);
    printf("%d", data);
}