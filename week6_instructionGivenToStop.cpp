#include <iostream>
using namespace std;

int main () {
    bool seenEndOfInput;
    int sum, numOfStudents;
    int curr;
    double average;

    cout<<"Enter the grades separated by a space"<<endl;
    cout<<"End the sequence by typing -1:"<<endl;

    sum = 0;
    numOfStudents = 0;

    seenEndOfInput = false; //seems unnecessary
    while (seenEndOfInput == false) {
        cin>>curr;
        if (curr == -1) {
            seenEndOfInput = true;
        }
        else {
            sum += curr;
            numOfStudents++;
        }
    }

    average = (double)sum / (double)numOfStudents;

    cout<<"The class average is "<<average<<endl;
    return 0;
}
