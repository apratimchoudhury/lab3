//First include the library
#include<iostream>
using namespace std;
//Write the main function
int main(){
//Declare basic data types
int x1=1;
float x2=1.1;
double x3=1.1234567;
char x4='a';
bool x5=(2==3);
//Display output of the declared variables
cout<<x1<<endl;
cout<<x2<<endl;
cout<<x3<<endl;
cout<<x4<<endl;
cout<<x5<<endl;
//Display the sizes of datatypes
cout<< "The size of int data type is " <<sizeof(x1)<<" bytes"<<endl;
cout<< "The size of float data type is " <<sizeof(x2)<<" bytes"<<endl;
cout<< "The size of double data type is " <<sizeof(x3)<<" bytes"<<endl;
cout<< "The size of char data type is " <<sizeof(x4)<<" bytes"<<endl;
cout<< "The size of bool data type is " <<sizeof(x5)<<" bytes"<<endl;
return 0;

}

