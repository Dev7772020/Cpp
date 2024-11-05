#include<iostream>
#include<iomanip>

using namespace std;

void pqrs(){
    const int a = 10;
    cout<<a<<endl;
}

int main(){
    /********************** Constants is C++ **********************/
    const int a = 5;        //{constants can't be changed globelly or locally}
    cout<<a<<endl;

    /**********************Manipulators**********************/

    int x = 2, y = 58, z = 193840;
    cout<<"The value of x without setw is :"<<x<<endl;
    cout<<"The value of y without setw is :"<<y<<endl;
    cout<<"The value of z without setw is :"<<z<<endl;
    cout<<endl;
    cout<<"The value of x is :"<<setw(6)<<x<<endl;      //{'setw' is a manipulator}
    cout<<"The value of y is :"<<setw(6)<<y<<endl;
    cout<<"The value of z is :"<<setw(6)<<z<<endl;
    pqrs();
    return 0;
}

