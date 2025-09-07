//TRIANGLE VALIDITY AND TYPE

#include<iostream>
using namespace std;
 int main()
 {
    int a,b,c;
    cout<<"Enter the three sides of the triangle "<<endl;
    cin>>a>>b>>c;

    if(a+b>c  && b+c>a && c+a>b)
    {
        cout<<"Valid TRIANGLE "<<endl;

        if(a==b && b==c)
        {
            cout<<"EQUILATERAL TRIANGLE "<<endl;
        }
        else if(a==b || b==c ||c==a)
        {
            cout<<"ISOSCELES TRIANGLE "<<endl;
        }
        else
        {
            cout<<"SCALENE TRIANGLE "<<endl;
        }
    }
    else
    {
        cout<<"NOT A VALID TRIANGLE "<<endl;
    }
    return 0;
 }
