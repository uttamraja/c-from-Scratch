#include<iostream>
using namespace std;
int main(){
/*What is pointer?
--> Pointer is a data type which holds the address of other data types.
*/

int num1=31;
int* num2=&num1;// symbol: & gives the address of variable.
cout<<num2<<endl;
cout<<&num1<<endl;

cout<<*num2<<endl; // Symbol: * gives the value stored in variable.
cout<<num1<<endl;

int** num3 =&num2;
cout<<num3<<endl;

int*** num4 =&num3;
cout<<num4<<endl;

return 0;
}