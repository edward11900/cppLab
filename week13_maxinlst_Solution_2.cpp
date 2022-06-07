#include <iostream>
using namespace std;

int maxinlst(int arr[], int size);

int main() {

  int arr[] = {-19, -3, 20, -1, 5, -25};
  int size = 6;
  
  maxinlst(arr, size);

  return 0;
}


  int maxinlst(int arr[], int size) {
    

  // Loop to store largest number to arr[0]
  for(int i = 1;i < size; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];
  

  return size;

}
