#include <iostream>
using namespace std;
typedef struct calculator
{
    void sum()
    {
        int input, a, b, c;
        cout << "Enter 1 for addtion, 2 for sub 3 for mult 4 for div." << endl;
        cin >> input;
        if (input == 1)
        {
            cout << "Enter first number" << endl;
            cin >> a;
            cout << "Enter second number." << endl;
            cin >> b;
            c=a+b;
            cout<<a<<"+"<<b<<"="<<c;
        }
        else if (input == 2)
        {
            cout << "Enter first number" << endl;
            cin >> a;
            cout << "Enter second number." << endl;
            cin >> b;
            c=a-b;
            cout<<a<<"-"<<b<<"="<<c;
        }
        else if (input == 3)
        {
            cout << "Enter first number" << endl;
            cin >> a;
            cout << "Enter second number." << endl;
            cin >> b;
            c=a*b;
            cout<<a<<"*"<<b<<"="<<c;
        }
        else if (input == 4)
        {
            cout << "Enter first number" << endl;
            cin >> a;
            cout << "Enter second number." << endl;
            cin >> b;
            c=a/b;
            cout<<a<<"/"<<b<<"="<<c;
        }
        else
        {
            cout << "Invalid input!";
        }
    }
} ab;

int main()
{
    ab addition;
    addition.sum();
    return 0;
}