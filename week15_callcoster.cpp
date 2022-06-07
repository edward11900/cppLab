#include <iostream>
#include <string>
using namespace std;


int main() {
    string Date;
    int time;
    double min;
    double bill;


    cout<<"Enter the day the call started at: "<<endl;
    cin>>Date;

    cout<<"Enter the time the call started at (hhmm): "<<endl;
    cin>>time;

    cout<<"Enter the duration of the call (in minutes): "<<endl;
    cin>>min;

    if (Date == "Mon" || Date == "Tue" || Date == "Wed" || Date == "Thr" || Date == "Fri") {
        if (time >= 800 && time <= 1800)
            bill = min * 0.40;
        else
            bill = min * 0.25;

        cout<<"This call will cost $"<<bill<<endl;
    }
    else if (Date == "Sat" || Date == "Sun") {
        bill = min * 0.15;

        cout<<"This call will cost $"<<bill<<endl;
    }
    else {
        cout<<"Wrong data"<<endl;
    }
    
    

    


    return 0;
}
