# include <iostream>
using namespace std;

int maxinlst (int arr[], int size);

int main () {
    
    
    int arr[] = {-19, -3, 20, -1, 5, -25};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Maximum in given array is "<<maxinlst(arr, size);


    

    return 0;

}

int maxinlst (int arr[], int size) {


    int lst = arr[0];

    for (int i = 1 ; i < size; i++) {
        if (arr[i] > lst) {
            lst = arr[i];
        }
    }

    

    return lst;
    
}
