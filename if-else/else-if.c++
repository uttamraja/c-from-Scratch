#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "In which grade do you study.\n";
    cin >> grade;
    if (grade < 5)
    {
        cout << "You are not eligible to write with pen.";
    }
    else if (grade == 5)
    {
        cout << "You are still not eligible to write with pen.";
    }
    else
    {
        cout << "You can write with pen.";
    }

    return 0;
}