#include <iostream>
using namespace std;
int main()
{
    int n1, n2, temp;
    cout << "Enter 1st Number N1=" << endl;
    cin >> n1;
    cout << "Enter 2nd Number N2= " << endl;
    cin >> n2;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "The valus after swapping is :"<<endl<< "N1=" << n1 << " and N2 =" << n2 << endl;
    return 0;
} // namespace std;
