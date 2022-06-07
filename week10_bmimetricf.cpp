# include <iostream>
#include <iomanip>
using namespace std;


double bmimetricf(double weight, double height);

int main() {
    
    double height;
    double weight;
    double result;

    cout<<"Please enter your weight and your height."<<endl;
    cout<<"Your Weight in Kilograms:"<<endl;
    cin>>weight;
    cout<<"Your height in Meters:"<<endl;
    cin>>height;

    bmimetricf(weight, height);
    
    return 0;

}


    double bmimetricf(double weight, double height) {
        double result;

    result = weight / (height * height);

    cout<<"BMI is: "<<setprecision(4)<<result<<endl;

    return result;

}
