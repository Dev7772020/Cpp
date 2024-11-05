#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you are a kid"<<endl;
    }
    else if(age==18){
        cout<<"wait for next year"<<endl;
    }
    else{
        cout<<"you are adult"<<endl;
    }
    return 0;
}