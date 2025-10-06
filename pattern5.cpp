#include<iostream>
using namespace std;
int main()
{
    int num=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num++;
        }
        cout<<endl;
    }
    return 0;
}
