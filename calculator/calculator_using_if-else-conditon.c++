#include <iostream>
using namespace std;
int main()
{
    int input, num1, num2, ans;
    cout << "Enter 1 for additon, 2 for substraction, 3 for division, 4 for multiplication." << endl;
    cin >> input;
    if (input == 1)
    {
        cout << "Enter first value.\n"<< endl;
        cin >> num1;
        cout << "Enter Second value.\n"<< endl;
        cin >> num2;
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        
    }
    if (input == 2)
    {
        cout << "Enter first value.\n"<< endl;
        cin >> num1;
        cout << "Enter Second value.\n"<< endl;
        cin >> num2;
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;

    }
    if (input == 3)
    {
        cout << "Enter first value.\n"<< endl;
        cin >> num1;
        cout << "Enter Second value.\n"<< endl;
        cin >> num2;
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;

    }
    if (input == 4)
    {
        cout << "Enter first value.\n"<< endl;
        cin >> num1;
        cout << "Enter Second value.\n"<< endl;
        cin >> num2;
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;

    }

    return 0;
}