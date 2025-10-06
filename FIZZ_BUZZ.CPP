// FIZZ BUZZ 28/08/25

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    if(a%3==0 && a%5==0)
    {
        cout<<"Fizz Buzz"<<endl;
    }
    else if (a%3==0)
    {
        cout<<"Fizz"<<endl;
    }
    else if(a%5==0)
    {
        cout<<"Buzz"<<endl;
    }
}