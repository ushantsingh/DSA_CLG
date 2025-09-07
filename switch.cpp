//SWITCH

#include<iostream>
using namespace std;
int main()
{
    int a=8;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    switch(a)
    {
    case 1: 
            cout<<"Hello"<<endl;
            break;
    case 2: 
            cout<<"How are you "<<endl;
            break;
    default :
             cout<<"Hehehe"<<endl;
             break;
    }         
    return 0;
}