#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;



int isleapyear(int mybirthyear);

    

int main () {
    int mybirthyear;

    cout<<"Please enter your birth year:"<<endl;
    cin>>mybirthyear;
    isleapyear(mybirthyear);
    
    return 0;

}


    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    int isleapyear(int mybirthyear) {
        int year = mybirthyear;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year.";
        return mybirthyear;
    }
    else {
        cout << year << " is not a leap year.";
        return mybirthyear;
    }

    return 0;
    }
