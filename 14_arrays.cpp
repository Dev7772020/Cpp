#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23, 44 ,58 ,53};
    cout<<"Marks using For Loop"<<endl;
    for(int i = 0; i<4 ; i++){
        cout<<"Marks of "<<i<<" is "<<marks[i]<<endl;
    }

    cout<<"Marks using do-while Loop"<<endl;
    int x = 0;
    do{
        cout<<"Marks of "<<x<<" is "<<marks[x]<<endl;
        x++;
    }while(x<4);
    return 0;
}