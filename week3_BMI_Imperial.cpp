# include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double height;
    double weight;
    double result;

    cout<<"Please enter your weight and your height."<<endl;
    cout<<"Your Weight in pounds:"<<endl;
    cin>>weight;
    cout<<"Your height in inches:"<<endl;
    cin>>height;

    weight = weight * 0.453592;

    height = height * 0.0254;

    result = weight / (height * height);

    cout<<"BMI is: "<<setprecision(4)<<result<<endl;

    return 0;



}
