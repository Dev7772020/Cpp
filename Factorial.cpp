#include<iostream>
using namespace std;

int main(){
    int n, f=1;
    cout<<"Factorial of ";
    cin>>n;
    cout<<"is ";
    for(int i = n; i>=1; i--){
        f=f*i;
    }
    cout<<f;
    return 0;
}