#include<iostream>
using namespace std;

int main(){
    int n1=0,n2=1,n3,i;
    cout<<"How many terms?"<<endl;
    cin>>i;
    cout<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    for (int a=1; a<=i-2; a++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<endl;
    }
    
    return 0;
} 