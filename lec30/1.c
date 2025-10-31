//To check whether the array is sorted or not using recursion

#include<stdio.h>

int checkSorted(int arr[],int i,int j){
    if (i>=j){
        return 1;
    }
    if(arr[i]>arr[i+1]){
        return 0;
    }
    return checkSorted(arr, i + 1, j);
}

int main(){
    int arr[] = {3,4,4,5,5,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = checkSorted(arr,0,n);
    if(result==1)
    {
        printf("Array is sorted ");
    }
    else 
    {
        printf("Array is not sorted");
    }
}