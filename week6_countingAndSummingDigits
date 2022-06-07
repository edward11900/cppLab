# include <iostream>
using namespace std;

int main () {
    int num;
    int numberEntry;
    int sumDigits, countDigits;
    int currDigit;

    cout<<"Enter a positive integer:"<<endl;
    cin>>num;
    sumDigits = 0;
    countDigits = 0;
    numberEntry = num;
    while (num > 0) {
        currDigit = num % 10;
        countDigits++;
        sumDigits += currDigit;
        num = num / 10;
    }
    cout<<numberEntry<<" has "<<countDigits<<" Digits ";
    cout<<"and their sum is "<<sumDigits<<endl;

    return 0;
}
