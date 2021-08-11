#include <iostream>
#include<string>
using namespace std;
class calculator
{
    int a, b, c;

public:
    void sum()
    {
        cout << "Enter First number.\n"<< endl;
        cin >> a;
        cout << "Enter Second number.\n"<< endl;
        cin >> b;
        c = a + b;
        cout << a << "+" << b << "=" << c << endl;
    }
    void sub()
    {
        cout << "Enter First number.\n"<< endl;
        cin >> a;
        cout << "Enter Second number.\n"<< endl;
        cin >> b;
        c = a - b;
        cout << a << "-" << b << "=" << c << endl;
    }
    void mult()
    {
        cout << "Enter First number.\n"<< endl;
        cin >> a;
        cout << "Enter Second number.\n"<< endl;
        cin >> b;
        c = a * b;
        cout << a << "*" << b << "=" << c << endl;
    }
    void division()
    {
        cout << "Enter First number.\n"<< endl;
        cin >> a;
        cout << "Enter Second number.\n"<< endl;
        cin >> b;
        c = a / b;
        cout << a << "/" << b << "=" << c << endl;
    }
};
int main()
{
    int ope;
    cout<<"Type 1 for addtion, 2 for subtraction, 3 for multiplication, 4 for division"<<endl;
    cin>>ope;
    switch (ope)
    {
        case 1:
        calculator addition;
        addition.sum();
        break;
        case 2:
        calculator deduction;
        addition.sub();
        break;
        case 3:
        calculator times;
        addition.mult();
        break;
        case 4:
        calculator divides;
        addition.division();
        break;
    }
    return 0;
}