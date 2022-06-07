# include <iostream>
using namespace std;

int main() {
    int quarter = 25;
    int quarters;
    int quarters_result;
    int dime = 10;
    int dimes;
    int dimes_result;
    int nickel = 5;
    int nickels;
    int nickels_result;
    int penny = 1;
    int pennys;
    int pennys_result;
    int cent_result;
    int dollar_result;
    double remaining_cents;

    cout<<"Please enter the number of coins."<<endl;
    cout<<"quarters:"<<endl;
    cin>>quarters;

    cout<<"dimes:"<<endl;
    cin>>dimes;

    cout<<"nickels:"<<endl;
    cin>>nickels;

    cout<<"pennys:"<<endl;
    cin>>pennys;

    quarters_result = quarters * quarter;
    dimes_result = dimes * dime;
    nickels_result = nickels * nickel;
    pennys_result = pennys * penny;

    cent_result = quarters_result + dimes_result + nickels_result + pennys_result;
    dollar_result = cent_result / 100;
    remaining_cents = cent_result % 100;

    cout<<" The total is "<<dollar_result<<" dollars and "<<remaining_cents<<" cents "<<endl;

    return 0;
}
