#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 5;

    /****************** Arthmatic Operators ******************/
    cout<< "the value of a+b is "<< a+b<<endl;
    cout<< "the value of a-b is "<< a-b<<endl;
    cout<< "the value of a*b is "<< a*b<<endl;
    cout<< "the value of a/b is "<< a/b<<endl;      //{'/' is answer in integral form}
    cout<< "the value of a%b is "<< a%b<<endl;      //{'%' is integral remender}
    cout<< "the value of ++a is "<< ++a<<endl;
    cout<< "the value of a++ is "<< a++<<endl;
    cout<< "the value of a++ is "<< a++<<endl;
    cout<<endl;

    /****************** Assingmant Operators ******************/
    // int x = 3 , y = 10;
    // float z = 5.5;

    /****************** Comparison Operators ******************/
    cout<< "the value of a==b is "<< (a==b)<<endl;
    cout<< "the value of a!=b is "<< (a!=b)<<endl;      //{'!=' is not equalto}
    cout<< "the value of a>=b is "<< (a>=b)<<endl;
    cout<< "the value of a<=b is "<< (a<=b)<<endl;
    cout<< "the value of a<b is "<< (a<b)<<endl;
    cout<< "the value of a>b is "<< (a>b)<<endl;
    cout<<endl;

    /****************** Logical Operators ******************/
    cout<< "the value of ((a==b)&(a>=b)) is "<<((a==b)&(a>=b))<<endl;
    cout<< "the value of ((a!=b)&(a>=b)) is "<<((a!=b)&(a>=b))<<endl;
    cout<< "the value of ((a==b)&(a<=b)) is "<<((a==b)||(a>=b))<<endl;
    cout<< "the value of ((a==b)||(a>=b)) is "<<((a==b)||(a>=b))<<endl;
    return 0;
}