//CALCULATOR WITH SWITCH  29/08/25

#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char calculator;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"Enter operator"<<endl;
    cin>>calculator;
    switch(calculator)
    {
        case '+':
                    cout<<"Sum is "<<a+b<<endl;
                    break;
        case '-':
                    cout<<"Subtraction is "<<a-b<<endl;
                    break;
        case '*':
                    cout<<"Multiplication is "<<a*b<<endl;
                    break;
        case '/':
                    if(b==0)
                    {
                        cout<<"Division is not possible"<<endl;
                    }    
                     else 
                    { 
                        cout<<"Division is "<<a/b<<endl;
                    }
                    break;
        default : 
                    cout<<"Invalid choice"<<endl;
                    break;
    }
    return 0;
}