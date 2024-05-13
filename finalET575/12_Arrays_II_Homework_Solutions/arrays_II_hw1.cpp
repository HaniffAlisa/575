// s. trowbridge 2020
#include <iostream>
using namespace std;

void print(int *a, int size) {
  for(int r=0; r<size; r++) {
    for(int c=0; c<size; c++) {
      if(a[r] == c)
          cout << "Q ";
      else
          cout << ". ";
    }
    cout << endl;
  }
}


int main() {
    cout << endl;

    const int CAPACITY = 8;
    int a[CAPACITY] =  {0, 4, 2, 5, 6, 7, 1, 3};
    print(a, CAPACITY);

    cout << endl;
    return 0;
}
