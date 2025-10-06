// RUPEES CONVERTER 29/08/25

#include <iostream>
using namespace std;
int main()
{
    float ru, dol = 87.85, yen = 12.23, dinnar = 286.24;
    int curr;
    cout << "Enter rupees " << endl;
    cin >> ru;
    cout << "Enter 1 to convert Rs. to $ " << endl
         << "Enter 2 to convert Rs to Yen " << endl
         << "Enter 3 to convert Rs. to Dinnar " << endl;
    scanf("%d", &curr);

    switch (curr)
    {
    case 1:
        cout << " Rs. to $ is " << ru / dol << endl;
        break;
    case 2:
        cout << " Rs. to Yen is " << ru / yen << endl;
        break;
    case 3:
        cout << " Rs. to Dinnar is " << ru / dinnar << endl;
        break;
    default:
        cout << "Invalid choice " << endl;
        break;
    }
    return 0;
}