#include <iostream>
using namespace std;
int main()
{
    int a, b, mult;
    cout << "Enter first value.\n";
    cin >> a;
    cout << "Enter second value.\n";
    cin >> b;
    mult = a * b;
    if (mult < a || mult < b || mult < 0)
    {
        cout << "You answer is smaller than entered value.\n";
    }
    else
    {
        cout << "Your answer is greater than entered value.\n";
    }

    return 0;
}