#include <iostream>
using namespace std;

int avgoflst(int arr[], int size);

int main() {

  int arr[] = {19, 2, 20, 1, 0, 18};
  int size = 6;
  
  avgoflst(arr, size);

  return 0;
}


  int avgoflst(int arr[], int size) {

    int sum = 0;
    int average;
    

  // Find sum of all array elements
  for(int i = 0;i < size; i++) {
      sum += arr[i];
  }

  average = sum / size;

  cout << endl << "average of list = " << average;
  

  return size;

}
