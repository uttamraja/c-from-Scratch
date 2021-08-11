#include<iostream>
using namespace std;
int sum(int a, int b){
    int c= a+b;
    return c;
}
int mult(int a, int b){
    int c= a*b;
    return c;
}
int divison(int a, int b){
    int c= a/b;
    return c;
}
int sub(int a, int b){
    int c= a-b;
    return c;
}
int main(){
    int input, a, b, c;
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for division, 4 for multiplication.\n"<<endl;
    cin>>input;
    switch (input)
    {
    case 1:
        cout<<"Enter first number.\n"<<endl;
        cin>>a;
        cout<<"Enter second number.\n"<<endl;
        cin>>b;
        cout<<"The sum of enter value is"<<sum(a ,b)<<endl;
        break;
    case 2:
        cout<<"Enter first number.\n"<<endl;
        cin>>a;
        cout<<"Enter second number.\n"<<endl;
        cin>>b;
        cout<<"The substraction of enter value is\n"<<sub(a ,b)<<endl;
        break;
    case 3:
        cout<<"Enter first number.\n"<<endl;
        cin>>a;
        cout<<"Enter second number.\n"<<endl;
        cin>>b;
        cout<<"The substraction of enter value is\n"<<divison(a ,b)<<endl;
        break;
        default:
        break;

    
    }
    return 0;
}