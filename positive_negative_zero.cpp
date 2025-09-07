// POSITIVE NEGATIVE AND ZERO NUMBERS

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number " << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "The Number is ZERO " << endl;
    }
    else if (num > 0)
    {
        cout << "The number is POSITIVE " << endl;
    }
    else
    {
        cout << "The Number is NEGATIVE " << endl;
    }

    return 0;
}