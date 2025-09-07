#include <iostream>
using namespace std;
int main()
{
    int month, year, days;
    cout << "Enter month (1-12)" << endl;
    cin >> month;
    cout << "Enter Year " << endl;
    cin >> year;

    if (month > 0 && month < 13)
    {
        cout << "VALID MONTH " << endl;

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "NO DAYS IN THE MONTH IS 31 " << endl;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            cout << "NO OF DAYS IN MONTH IS 30" << endl;
        }
        else
        {
            if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
            {
                cout << "NO OF DAYS IN NONTH IS 29 " << endl;
            }
            else
            {
                cout << "NO OF DAYS IN THE MONTH IS 28 " << endl;
            }
        }
    }
    else
    {
        cout << "INVALID MONTH " << endl;
    }

    return 0;
}