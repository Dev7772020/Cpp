#include<iostream>
using namespace std;

    int x = 50;

int main(){

    
    int a , b , x;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    x = a+b;
    cout<<"the sum if a and b is "<<x<<endl;
    cout<<"globle value of x is "<<::x<<endl;       //{'::' is for globle value}
    

    float p = 10.4f;        //{'f' and 'l' are short form of float and long double}
    long double q = 10.4l;
    10.4f;
    cout<<"the size of 10.4 is "<<sizeof(10.4)<<endl;       //{default decimal number store in double}
    cout<<"the size of 10.4f is "<<sizeof(10.4f)<<endl;
    cout<<"the size of 10.4F is "<<sizeof(10.4F)<<endl;
    cout<<"the size of 10.4l is "<<sizeof(10.4l)<<endl;
    cout<<"the size of 10.4L is "<<sizeof(10.4L)<<endl; 
    cout<<"the value of p is "<<p<<endl<<"the value of q is "<<q;

    return 0;
}