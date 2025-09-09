#include<iostream>
using namespace std;
int main()
{
    int num=0;
    for(int i=0;i<4;i++)
    {
        for(int j=4;j>i;j--)
        {
            cout<<"   ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"  "<<num++;
        }
        for(int l=1;l<i;l++)
        {
            cout<<"  "<< num++;
        }
        cout<<endl;
    }
    
    return 0;
}