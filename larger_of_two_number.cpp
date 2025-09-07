// LARGER OF TWO NUMBER

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter Two Number : " << endl;
    cin >> n1 >> n2;
    if (n1 == n2)
    {
        cout << "N1 & N2 are equal " << endl;
    }

    else if (n1 > n2)
    {
        cout << "1st Number is Greater " << endl;
    }
    else
    {
        cout << "2nd Number is Greater " << endl;
    }

    return 0;
}