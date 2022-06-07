# include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    string str1("Underweight"), str2("Normal"), str3("Overweight"), str4("Obese");

    double height;
    double weight;
    double result;

    string status;

    cout<<"Please enter your weight and your height."<<endl;
    cout<<"Your Weight in Kilograms:"<<endl;
    cin>>weight;
    cout<<"Your height in Meters:"<<endl;
    cin>>height;

    result = weight / (height * height);

    if (result <= 18.5)
        status = str1;
    else if (result >= 18.5 && result <= 24.9)
        status = str2;
    else if (result >= 25.0 && result <= 29.9)
        status = str3;
    else
        status = str4;


    cout<<"BMI is: "<<setprecision(4)<<result<<", Status is "<<status<<endl;

    return 0;



}
