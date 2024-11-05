#include <iostream>
using namespace std;

int glo = 360;
    
void sum()
{
    cout<< glo<<endl;
}

int main()
{
    int glo = 9;
    glo = 100;
    sum();
    cout << glo<<endl;
    cout<<::glo<<endl;      //{'::' Represents globle value of a variable}
    // int a = 4, b = 5;
    // float c = 3.5;
    // char d = 'e' ;
    // cout << "\nThis is tutorial 4";
    // cout << "\nthe value of a is "<<a<<"\nThe value of b is "<<b;
    // cout << "\nchar d is "<<d;
    return 0;
}

