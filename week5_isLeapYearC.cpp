# include <iostream>
using namespace std;

int main () {

    int year;


    cout<<"Please enter a year in C.E.:"<<endl;
    cin>>year;
    
   if (year % 4 != 0) {
        cout<<year<<" was not a leap year"<<endl;
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        cout<<year<<" was a leap year"<<endl;
    }
    else if (year % 100 == 0 && year % 400 != 0) {
        cout<<year<<" was not a leap year"<<endl;
    }
    else if (year % 400 == 0) {
        cout<<year<<" was a leap year"<<endl;
    }
    else
        cout<<"please enter a year in C.E."<<endl;

    return 0;
}
