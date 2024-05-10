// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 26;
    char alphabet[SIZE];

    // write loop
    for(int i=0; i<SIZE; ++i) {       // iterate from 0 to 25 (0 to size-1)
        alphabet[i] = i+'A';          // store an uppercase letter (i+65)
    }

    // read/print loop
    for(int i=0; i<SIZE; ++i) {
        cout << alphabet[i] << " ";   // print array values
    }

    cout << endl;
    return 0;
}
