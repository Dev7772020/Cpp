#include<iostream>
using namespace std;

int main(){
    // what are Pointers? ---->  Data Type which holds the address of other data types.

    int a=1234567;
    int *b=&a;         //{b is a pointer which contain address of a}

    // & ---> (Address of) Operator
    cout<<"address of a is "<<b<<endl;
    cout<<"address of a is "<<&a<<endl;

    // * ---> Dereferance Operator
    cout<<"The value of the address of b is "<<*b<<endl;

    int **c=&b;
    cout<<"address of b is "<<c<<endl;
    cout<<"value at address of (address of c) is "<<**c<<endl;
    return 0;
}