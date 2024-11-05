#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    for(i=2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not a Prime Number"<<endl;
            break;
        }
        else
        {
            cout<<"Its a Prime Number"<<endl;
            break;
        }
        break;
    }
    if((n==1)||(n==2))
    {
        cout<<"Its a Prime Number"<<endl;
    }
    return 0;
}