#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age<16)
    {
        cout<<"You are not eligible to get national certificate.";
    }
    else{
        cout<<"You are eligible for national certificate.";
    }
    
    return 0;
}