#include <iostream>
using namespace std;
int summ(int a, int b){
    int c= a+b;
    return c;
}
class calc
{
    int input, a, b;

public:
    void sum(){
        cout<<"Enter first value.\n"<<endl;
        cin>>a;
        cout<<"Enter Second value.\n"<<endl;
        cin>>b;
        cout<<"sum of entered value is: "<<summ(a,b)<<endl;
    }
};
int main()
{
    calc uttam;
    uttam.sum();
    return 0;
}