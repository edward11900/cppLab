#include <iostream>
using namespace std;

int main () {
    int n;
    int i;
    int n1 = 0, n2 = 1 ,n3;
    
    cout<<"Please enter a positive integer greater than 1:"<<endl;
    cin>>n;

    cout<<n2<<endl;

    for (i = 2; i <= n; ++i) {
        n3 = n1+n2;
        cout<<n3<<endl;

        n1 = n2;
        n2 = n3;

    }
    return 0;
}
