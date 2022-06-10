#include <iostream>
#include <string>
using namespace std;

int main() {

    string input;
    string middle, First, Second;

    cout<<"Enter an odd length string: "<<endl;
    getline(cin, input);

    middle = input[input.length()/2];
    First = input.substr(0, input.length()/2);
    Second = input.substr(input.length()/2 + 1,input.length()/2);


    cout<<"Middle character: "<<middle<<endl;
    cout<<"First half: "<<First<<endl;
    cout<<"Second half: "<<Second<<endl;

    return 0;
}
