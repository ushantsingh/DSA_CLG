#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an Albhabet: " << endl;
    cin >> ch;

    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << ch << " is a VOWEL " << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a CONSONANT " << endl;
    }
    else
    {
        cout << "INVALID INPUT " << endl;
    }

    return 0;
}
