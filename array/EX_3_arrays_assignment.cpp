// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 5;            // use a constant for array size
    int a[SIZE];                   // declare an array of size 5 (garbage values)

    a[0] = 10;                     // assign values to the array (indexes 0 to size-1)
    a[1] = 2;
    a[2] = 33;
    a[3] = 12;
    a[4] = 55;

    for(int i=0; i<SIZE; ++i) {    // iterate from 0 to 4 (0 to size-1)
        cout << a[i] << " ";       // print array data
    }
    cout << "\n\n";

    a[0] = 15000;                  // assign a new value to the first element
    a[4] = 1234567;                // assign a new value to the last element

    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
