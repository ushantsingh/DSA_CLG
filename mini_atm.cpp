// MINI ATM 29/08/25
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int bal = 10000000, wid, dep, choice;
    char pass[20];
    cout << "Enter 1 to check balance "<<endl<<"Enter 2 for withdrawal"<<endl<<"Enter 3 for Deposit"<<endl<<"Enter 4 to Exit" << endl;
    cout << "\nENTER YOUR CHOICE " << endl;
    ;
    cin >> choice;

    cout << "Enter pass: " << endl;
    cin >> pass;

    if (strcmp(pass, "Ushant@121") == 0)
    {
        cout << "Access granted" << endl;
    }
    else
    {
        cout << "Access denied ";
    }

    switch (choice)
    {
    case 1:
        cout << "YOUR CURRENT BALANCE IS " << bal << endl;
        break;
    case 2:

        cout << "Enter amt to withdrawn " << endl;
        cin >> wid;
        if (wid < bal)
        {
            bal = bal - wid;
            cout << "AMOUNT WIDRAWN " << endl
                 << "YOUR CURRENT BALANCE IS " << bal << endl;
        }
        else
        {
            cout << "INSUFFICIENT BALANCE";
        }
        break;
    case 3:
        cout << "Enter amt to Deposit" << endl;
        cin >> dep;
        bal = bal + dep;
        cout << "YOUR DEPOSITED AMOUNT IS " <<dep<<endl
        <<"Your BALANCE is "<< bal << endl;
        break;
    default:
        cout << "INVALID CHOICE" << endl;
        break;
    }
    return 0;
}