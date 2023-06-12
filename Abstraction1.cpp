                            //*********ABSTRACTION**********
// Abstraction means to show only essential data.
//Abstraction are two types 1. Class 2. Header file
//Class abstraction means can achieve using classes. a class is used to group all the data member and member functions.
//Header Abstraction means this abstraction can achieve using header files. for example we have to use pow() function this function is used for power if we will import header file this then it will implement pow


//Write a program for abstraction using header file
#include<iostream>
#include<math.h>
using namespace std;
int main() {
 int n = 4 ;
 int power = 3 ;
 int result = pow(n,power);
 cout<<"Cube is :"<<result<<endl;

 return 0;
}
