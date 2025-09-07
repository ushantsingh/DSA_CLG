#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "Grade: A (Excellent)" << endl;
    }
    else if (marks >= 75 && marks < 90)
    {
        cout << "Grade: B (Very Good)" << endl;
    }
    else if (marks >= 60 && marks < 75)
    {
        cout << "Grade: C (Good)" << endl;
    }
    else if (marks >= 40 && marks < 60)
    {
        cout << "Grade: D (CAN DO IT )" << endl;
    }
    else if(marks>=23 && marks<40)
    {
        cout<<"Grade: E (Pass) "<<endl;
    }
    else if (marks >= 0 && marks < 40)
    {
        cout << "Grade: F (Fail)" << endl;
    }
    else
    {
        cout << "Invalid Marks! Please enter between 0 and 100." << endl;
    }

    return 0;
}
