#include <iostream>
#include <string>
using namespace std;
typedef class student
{
    char first_name[20], last_name[20];
    int roll_number;

public:
    void input()
    {
        cout << "First Name" << endl;
        cin >> first_name;
        cout << "Last Name" << endl;
        cin >> last_name;
        cout << "Roll number" << endl;
        cin>>roll_number;
    }
    void output()
    {
        cout << first_name <<" "<< last_name << endl;
        cout << roll_number<<endl;
    }
} callme;
int main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        callme detail[2];
        detail[i].input();
    }
    for (i = 0; i < 2; i++)
    {
        callme detail[2];
        detail[i].output();
    }

    return 0;
}