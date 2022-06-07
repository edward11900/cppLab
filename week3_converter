# include <iostream>
using namespace std;

int main() {
    
    int dollars;
    int cents;
    int dollars_into_cents;
    int leftover;
    int total;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    

    cout<<"Please enter the amount of coins."<<endl;
    cout<<"dollars:"<<endl;
    cin>>dollars;
    cout<<"cents:"<<endl;
    cin>>cents;

    dollars_into_cents = dollars * 100;
    total = dollars_into_cents + cents;
    leftover = total;

    quarters = (total / 25);
    leftover = leftover % 25;

    dimes = (leftover / 10);
    leftover = leftover % 10;

    nickels = (leftover / 5);
    leftover = leftover % 5;

    pennies = (leftover / 1);
    leftover = leftover % 1;

    cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels, "<<" and "<<pennies<<" pennies"<<endl;

    return 0;


}
