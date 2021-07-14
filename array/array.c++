#include <iostream>
using namespace std;
int main()
{
    int marks[6] = {21, 42, 44, 52, 12};
    cout << marks[1] << endl;
    // int marks[4];
    // marks[0]=23;
    // marks[1]=32;
    // marks[2]=55;
    // marks[3]=100;
    // cout<<marks[1]<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "The value of numbers is " <<marks[i]<<endl;
    }
    return 0;
}