#include<iostream>
using namespace std;
int main()
{
    char num=65;
    for(int i=0;i<5;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<num++;
        }
        cout<<endl;
    }
    return 0;
}