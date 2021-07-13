#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter your first value.\n";
    cin >> a;
    cout << "Enter your second value.\n";
    cin >> b;
    if (a < b)
    {
        cout << "Your first value is smaller than second.";
    }
    else if (a == b)
    {
        cout << "Your first value and second value are similar.";
        
    }
    else
    {
        float mult;
        mult = a * b;
        cout << "Your first value is greater than second value so multiplying a and b, we get:\n" << mult;
    }

    return 0;
}