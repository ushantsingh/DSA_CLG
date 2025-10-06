#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        for(int l=1;l<i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}