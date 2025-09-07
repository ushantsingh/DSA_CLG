//LEAP YEAR

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the YEAR"<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"It is a LEAP YEAR "<<endl;
    }
    else 
    {
        cout<<"It is not a LEAP YEAR "<<endl;
    }

    return 0;
}