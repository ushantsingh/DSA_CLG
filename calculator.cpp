//CALCULATOR

#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char choice;
    cout<<"Enter 1st number"<<endl;
    cin>>num1;
    cout<<"Enter 2nd number"<<endl;
    cin>>num2;
    cout<<"Enter the operator"<<endl;
    cin>>choice;
    if(choice=='+')
    {
        cout<<"sum of num1 and num2 is "<<num1+num2<<endl;
    }
    else if(choice=='-')
    {
        cout<<"Subtraction of num1 and num2 is "<<num1-num2<<endl;
    }
    else if(choice=='*')
    {
        cout<<"Multiplication of num1 and num2 is "<<num1*num2<<endl;
    }
    else if(choice=='/')
    {
        cout<<"Division of num1 and num2 is "<<num1/num2<<endl;
    }
    return 0;
}