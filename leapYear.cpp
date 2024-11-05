#include<iostream>
using namespace std;

int main(){
    int y;
    cout<<"Enter an Year"<<endl;
    cin>>y;
    if((y%400==0 && y%100==0 && y%4==0)||(y%400!=0 && y%100!=0 && y%4==0)){
        cout<<"This is a Leap Year";
    }

    else if (y%400!=0 && y%100==0 && y%4==0)
    {
        cout<<"This is not a Leap Year";
    }

    else{
        cout<<"This is not a Leap Year";
    }
    
    return 0;
}