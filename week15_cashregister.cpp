#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int sum(double item1, double item2);
int promotion(double item1, double item2);

int main() {


    double item1, item2;
    string userAnswer;
    double Card;
    double taxRate, tax;
    double total;
    
    

    cout<<"Enter price of the first item:"<<endl;
    cin>>item1;

    cout<<"Enter price of the second item:"<<endl;
    cin>>item2;

    cout<<"Does customer have a club card? (Y/N):"<<endl;
    cin>>userAnswer; 

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: "<<endl;
    cin>>taxRate;

    

    cout<<"Base price = "<<sum(item1, item2)<<endl;
    
    cout<<"Promotion = "<<promotion(item1, item2)<<endl;

    

    if (userAnswer == "Y" || userAnswer == "y") {
        Card = promotion(item1, item2) * 0.9;
        cout<<"Price after discounts = "<<Card<<endl;
    }
    else {
        Card = promotion(item1, item2); 
        cout<<"Price no discounts = "<<Card<<endl;
    }

    tax = Card * (taxRate / 100);
    
    total = Card + tax;
    
    cout<<"Total price = "<<setprecision(4)<<total<<endl;


    return 0;

}
