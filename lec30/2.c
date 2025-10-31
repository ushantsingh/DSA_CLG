// bubble sort usig recursion 

#include<stdio.h>
int binartySearch(int arr[], int t, int s, int e){
    if(s>e){
        return -1;
    }

    int mid = (s + e) / 2;
    if(arr[mid]==t){
        return mid;
    }
    else if(arr[mid]<t){
        return binartySearch(arr, t, mid + 1, e);
    }
    else{
        return binartySearch(arr, t, mid - 1, e);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binartySearch(arr, 5, 0, n);
    printf("%d",result);
}