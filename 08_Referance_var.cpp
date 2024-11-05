#include<iostream>
using namespace std;

int main(){
    //****************Referance Variables*********************
    float a = 500;
    float & b = a;      //{'&' ampersant is use to define two or more variales to single value}
    cout<<a<<endl;
    cout<<b<<endl;

    //***************Typecasting******************
    int x = 50;
    float y = 45.9754;
    cout<< "The value of x is "<<(float)x<<endl;
    cout<< "The value of y is "<<(int)y;
    return 0; 
}