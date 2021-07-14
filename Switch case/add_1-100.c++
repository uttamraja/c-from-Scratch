#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"Enter number you want to add upto.\n";  /*Like if you want to add from 1 - 100 type enter 100 
    or 
    if you want to add from 1- 60 enter 60.*/ 

    cin>>n;
    a=(n/2)*(n+1);
    cout<<"Answer: "<<a;
    return 0;
}
