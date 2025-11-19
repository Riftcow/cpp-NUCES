#include <iostream>
using namespace std;

//         function declaration...
void searchArray(int *arr) { cout << " " << &arr; }

int main() {

  int arr[4][4] = {
      {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}, {12, 13, 14, 15}};

  // simple 4 by 4 print
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << " " << arr[i][j];
    }
    cout << endl;
  }
  cout << endl << " ---*--*---" << endl;
  // trick
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 1; j++) {
      cout << " " << arr[i][j];
    }
    cout << endl;
  }

  cout << endl << endl;

  // implementing the now situation of
  // a function with help of an pointers...

  searchArray(&arr);
  return 0;
}
