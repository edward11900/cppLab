#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout<<"Enter a character: "<<endl;
    getline(cin,str);

    if (isalpha(str[0])) {
        if (islower(str[0])) {
            cout<<str<<" is a lower case letter."<<endl;
        }
        else {
            cout<<str<<" is an upper case letter."<<endl;
        }
    }
    else if (isdigit(str[0])) {
        cout<<str<<" is a digit."<<endl;
    }
    else {
        cout<<str<<" is  a non-alphanumeric  character."<<endl;
    }



    return 0;
}
