#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age of man\n"<<endl;
    cin>>age;
    switch (age)
    {
    case 0:
        cout << "Child is not born yet.\n";
        break;
    case 1:
        cout << "Child is running in 1st year.\n";
        break;
    case 18:
        cout << "Now child is 18.\n";
        break;
    case 19:
        cout << "now you are 18+\n";
        break;
    case 80:
    cout<<"You are old now.\n";

    default:
    cout<<"You are not there.\n";
        break;
    }
    return 0;
}
