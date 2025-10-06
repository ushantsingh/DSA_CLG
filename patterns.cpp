#include<iostream>
using namespace std;
int  main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=i;k>0-i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}