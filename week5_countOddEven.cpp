# include <iostream>
using namespace std;

int main() {
    int number_1, number_2, number_3, number_4;
    int evenCount = 0;
    int oddCount = 0;
    

    cout<<"Please input four numbers separated by spaces:"<<endl;
    cin>>number_1>>number_2>>number_3>>number_4;

    

    if(number_1 % 2 == 0) 
        evenCount = evenCount + 1;
    else
        oddCount = oddCount + 1;

    if(number_2 % 2 == 0) 
        evenCount = evenCount + 1;
    else
        oddCount = oddCount + 1;
    
    if(number_3 % 2 == 0) 
        evenCount = evenCount + 1;
    else
        oddCount = oddCount + 1;

    if(number_4 % 2 == 0) 
        evenCount = evenCount + 1;
    else
        oddCount = oddCount + 1;


    if (evenCount > oddCount) {
        cout<<"more evens"<<endl;
    }
    else if (evenCount < oddCount) {
        cout<<"more odds"<<endl;
    }
    else
        cout<<"same number of evens and odds"<<endl;
    
    return 0;
}
