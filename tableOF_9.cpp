#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Table of 9 Till ";
    cin>>n;
    cout<<endl;
    for (int i = 1; i <= n; ++i) {
        cout << "9 x " << i << " = " << 9 * i << endl;
    }

    return 0;
}
