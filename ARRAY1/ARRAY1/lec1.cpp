#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,1,5,4,9};
    int max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return 0;
}