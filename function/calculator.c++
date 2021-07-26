#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}
int mult(int a, int b){
    int c= a*b;
    return c;
}
int division(int a, int b){
    float c = a/b;
    return c;
}
int subtraction(int a, int b){
    int c = a -b;
    return c;
}

int main(){
int a, x,y, z;
cout<<"Enter 1 for additon\n 2 for multiplication \n 3 for division \n 4 for subtraction";
cin>>a;
switch (a){
    case 1:
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>> y;
    cout<<sum(x, y)<<endl;
    break;
    
    case 2:
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>> y;
    cout<<mult(x, y)<<endl;
    break;

    case 3:
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>> y;
    cout<<division(x, y)<<endl;
    break;

    case 4:
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>> y;
    cout<<subtraction(x, y)<<endl;
    break;
    

}
return 0;
}