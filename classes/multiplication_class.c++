#include <iostream>
using namespace std;
class math
{
private:
    int a, b, c;

public:
    void multiplication()
    {
        cout << "Enter first value";
        cin >> a;
        cout << "Enter second value";
        cin >> b;
        c = a * b;
    }
    void result()
    {
        cout << "result is: " << c << endl;
    }
};

int main()
{
    math times;
    times.multiplication();
    times.result();
    return 0;
}