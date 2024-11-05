#include<iostream>
using namespace std;

int main(){
    int marks[5] = {9, 7, 10, 6, 8};
    int *p = marks;
    cout<<&marks[0]<<endl;
    cout<<&marks[1]<<endl;
    cout<<&marks[2]<<endl;
    cout<<&marks[3]<<endl;
    cout<<&marks[4]<<endl;
    cout<<*(p+2)<<endl;
    return 0;
}