//To check whether the array is sorted or not using recursion

#include<stdio.h>

int checkSorted(int arr[]){
    int i;
    if (arr[i] > arr[i + 1])
    {
        return 0;
        i++;
    }
    else 
    {
        return 1;
    }
}

int main(){
    int arr[] = {3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = checkSorted(arr);
    if(result==1)
    {
        printf("Array is sorted ");
    }
    else 
    {
        printf("Array is not sorted");
    }
}