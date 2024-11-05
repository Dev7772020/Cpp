#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 0:
        cout<<"you are yet not born";
        break;
    case 100:
        cout<<"you have crossed a century";
        break;
    default:
        cout<<"no special case";
        break;
    }
    return 0;
}