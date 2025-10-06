#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter coordinates (x y): ";
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        cout << "Point lies in I Quadrant " << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Point lies in II Quadrant " << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Point lies in III Quadrant " << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "Point lies in IV Quadrant " << endl;
    }
    else if (x == 0 && y == 0)
    {
        cout << "Point lies at the Origin" << endl;
    }
    else if (x == 0)
    {
        cout << "Point lies on the Y-axis" << endl;
    }
    else if (y == 0)
    {
        cout << "Point lies on the X-axis" << endl;
    }

    return 0;
}
