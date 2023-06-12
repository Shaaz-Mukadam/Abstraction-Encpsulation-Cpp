//Write a abstraction program using abstract class.
#include<iostream>
using namespace std;
class Sum{
public:
    int x , y , z ;
    void add() {
    cout<<"Enter the two numbers"<<endl;
    cin>>x>>y;
    z = x + y ;
    cout<<"Addition is "<<z<<endl;
    }
};
int main() {
    Sum sm;
    sm.add();

    return 0;
}

//**********OUTPUT********
Enter the two numbers
10
10
Addition is 20
