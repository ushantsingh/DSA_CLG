//MONTH NAME PROGRAM

#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"ENTER MONTH(1-12)"<<endl;
    cin>>month;
    switch(month)
    {
        case 1:
                cout<<"JANUARY"<<endl;
                break;
        case 2:
                cout<<"FEBRUARY"<<endl;
                break;   
         case 3:
                cout<<"MARCH"<<endl;
                break;
         case 4:
                cout<<"APRIL"<<endl;
                break;
          case 5:
                cout<<"MAY"<<endl;
                break;
         case 6:
                cout<<"JUNR"<<endl;
                break;
         case 7:
                cout<<"JULY"<<endl;
                break;
         case 8:
                cout<<"AUGUST"<<endl;
                break;
         case 9:
                cout<<"SEPTEMBER"<<endl;
                break;
         case 10:
                cout<<"OCTOBER"<<endl;
                break;     
         case 11:
                cout<<"NOVEMBER"<<endl;
                break;
         case 12:
                cout<<"DECEMBER"<<endl;
                break;                    
    }
    return 0;
}