#include<iostream>
using namespace std;

class Math{
    public:
    void sum(){
        int a, b, c;
        cout<<"Enter first number:\n";
        cin>>a;
        cout<<"Enter second number:\n";
        cin>>b;
        c=a+b;
        cout<<"result is: "<<c<<endl;
    }
};

int main(){
    Math addition;
    addition.sum();

return 0;
}