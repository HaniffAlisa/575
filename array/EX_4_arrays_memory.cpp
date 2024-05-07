// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 5;                           // use a constant for array size
    int a[SIZE] = {10,3,20,40,2};                 // initialize an array of size integers

    cout << a << "\n\n";                          // print the memory address of the array
                                                  // this is same as the address of the first element

    for(int i=0; i<SIZE; ++i) {                   // iterate from 0 to 4 (0 to size-1)
        cout << &(a[i]) << " " << a[i] << "\n";   // print memory address and value
    }                                             // note that the array is contiguous

    cout << endl;
    return 0;
}
