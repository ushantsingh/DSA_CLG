// RIGHT HAND TRIANGLE  DECREMENT PATERN

#include<iostream>
using namespace std;
 
int main()
{
    for(int i=0;i<5;i++)
    {
        //cout<<"\n*"<<endl;
        for(int j=5;j>i;j--)
        {
            
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}