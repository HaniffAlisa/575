// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int *a, const int &SIZE) {
  for(int i=0; i<SIZE; ++i) {        // outer loop stores values
    a[i] = rand() % SIZE;          // store rand value between 0 and SIZE-1
    for(int j=0; j<i; ++j) {           // inner loop checks for duplicates
      if(a[i] == a[j]) {             // if duplicate found, get a new value for index i
        --i;
        break;
      }
    }
  }
}

void print(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << endl;
}

void printRange(int *a, const int &SIZE, int lo, int hi) {
    for(int i=0; i<SIZE; ++i) {
        if(lo <= a[i] && a[i] <= hi) {
            cout << a[i] << " ";
        }
    }
    cout << "\n";
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 20;
    int a[SIZE];

    init(a, SIZE);
    print(a, SIZE);
    printRange(a, SIZE, 5, 10);

    cout << endl;
    return 0;
}
