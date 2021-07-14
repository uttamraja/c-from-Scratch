#include<iostream>
using namespace std;
int ab=12; //This is global variable
int main(){
    int a=26,b=36, ab; //This is local variable.
    ab=a+b;
    cout<<"The value of a+b is "<<ab<<endl;
    cout<<::ab;
    return 0;
}