#include<iostream>
using namespace std;

int main(){
    /* table of 1,2,3,4,5,6,7,8,9,10 using for loop */

    for (int i=1; i<=10; i++)
    {
        cout<<"--Table of "<<i<<"--"<<endl;
        for (int a=1; a<=10; a++)
        {
            cout<<i<<" X "<<a<<" = "<<i*a<<endl;
        }
        cout<<endl;
    }
    

    return 0;
}